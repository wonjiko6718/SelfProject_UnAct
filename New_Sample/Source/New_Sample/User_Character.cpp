// Fill out your copyright notice in the Description page of Project Settings.


#include "User_Character.h"
#include "User_Character_Animinstance.h"
// Sets default values
AUser_Character::AUser_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	IsAttacking = false;
	// 2021 1022 Weapon Socket
	IsArmed = false;
	// 2021 1026 Attack Combo
	MaxCombo = 2;
	AttackEndComboState();

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	PlayerSpeed = 1.0f;

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator::ZeroRotator);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;
	SpringArm->bDoCollisionTest = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 800.0f;

	GetCapsuleComponent()->SetCapsuleSize(34.0f,66.0f);;
	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -65.0f));
	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	//Link Animation Blueprints
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	//AnimBlueprint'/Game/Blueprints_Character/User_Animation_BP.User_Animation_BP'
	//AnimBlueprint'/Game/Blueprints_Character/User_Animation_UnWeapon_BP.User_Animation_UnWeapon_BP'
	static ConstructorHelpers::FClassFinder<UAnimInstance> User_AnimBP(TEXT("/Game/Blueprints_Character/User_Animation_BP.User_Animation_BP_C"));
	if (User_AnimBP.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimClear"));
		GetMesh()->SetAnimInstanceClass(User_AnimBP.Class);
	}



	this->bUseControllerRotationYaw = false; // use to Rotate Camera = Pawn Direction
	this->Tags.AddUnique(TEXT("Player"));

	//SkeletalMesh'/Game/LittleGirl/Mesh/SK_LittleGirl.SK_LittleGirl'
	//SkeletalMesh'/Game/GhostLady_S4/Meshes/Characters/Combines/SK_GLS4_B.SK_GLS4_B'
	//SkeletalMesh'/Game/GhostLady_S4/Meshes/Characters/Combines/SK_GLS4_Weapons.SK_GLS4_Weapons'
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> UserCharacter_SkelMesh(TEXT("/Game/GhostLady_S4/Meshes/Characters/Combines/SK_GLS4_Weapons.SK_GLS4_Weapons"));
	if (UserCharacter_SkelMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(UserCharacter_SkelMesh.Object);
	}

}

// Called when the game starts or when spawned
void AUser_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUser_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AUser_Character::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	User_Character_Anim = Cast<UUser_Character_Animinstance>(GetMesh()->GetAnimInstance());
	User_Character_Anim->OnMontageEnded.AddDynamic(this, & AUser_Character::OnAttackMontageEnded);
	User_Character_Anim->OnNextAttackCheck.AddLambda([this]() -> void {
	CanNextCombo = false;

		if (IsComboInputOn)
		{
			AttackStartComboState();
			User_Character_Anim->JumpToAttackMontageSection(CurrentCombo);
		}
		});
}
// Called to bind functionality to input
void AUser_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AUser_Character::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AUser_Character::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AUser_Character::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AUser_Character::Turn);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AUser_Character::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AUser_Character::Attack);
	PlayerInputComponent->BindAction(TEXT("ArmChange"), EInputEvent::IE_Pressed, this, &AUser_Character::ArmChange);
}
void AUser_Character::UpDown(float NewAxisValue)
{
	FVector PlayerDir = FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X);
	PlayerDir.Z = 0.0f;
	PlayerDir.Normalize();
	AddMovementInput(PlayerDir, NewAxisValue * PlayerSpeed);
	//GetActorForwardVector(), NewAxisValue
}
void AUser_Character::LeftRight(float NewAxisValue)
{
	FVector PlayerDir = FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y);
	PlayerDir.Z = 0.0f;
	PlayerDir.Normalize();
	AddMovementInput(PlayerDir, NewAxisValue * PlayerSpeed);
}
void AUser_Character::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void AUser_Character::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
void AUser_Character::Attack()
{
	if (IsArmed == false || (GetCharacterMovement()->IsFalling())) return;
	UE_LOG(LogTemp, Warning, TEXT("Player Move input Disable"));
	GetCharacterMovement()->JumpZVelocity = -1.0f;
	GetController()->SetIgnoreMoveInput(true);
	if (IsAttacking)
	{
		if (CanNextCombo)
		{
			IsComboInputOn = true;
		}
	}
	else
	{
		AttackStartComboState();
		User_Character_Anim->PlayAttackMontage();
		User_Character_Anim->JumpToAttackMontageSection(CurrentCombo);
		IsAttacking = true;
	}

	UE_LOG(LogTemp, Warning, TEXT("Attack Input Clear"));
}
void AUser_Character::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	UE_LOG(LogTemp, Warning, TEXT("Attack Montage Ended Character Script"));
	UE_LOG(LogTemp, Warning, TEXT("Player Move input Enable"));
	GetController()->ResetIgnoreMoveInput();

	IsAttacking = false;
	AttackEndComboState();
	GetCharacterMovement()->JumpZVelocity = 800.0f;
}
void AUser_Character::ArmChange()
{
	// Call EquipChanging Method
	User_Character_Anim->ArmChanging();
	IsArmed = User_Character_Anim->Get_AnimInstance_ArmedOn();
}
void AUser_Character::AttackStartComboState()
{
	CanNextCombo = true;
	IsComboInputOn = false;
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
}
void AUser_Character::AttackEndComboState()
{
	UE_LOG(LogTemp, Warning, TEXT("AttackEndComboState Method"));
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}

