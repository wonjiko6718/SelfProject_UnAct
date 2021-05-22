// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "MCAnimInstance.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	IsAttacking = false;
	MaxCombo = 3;
	AttackEndComboState();

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

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

	this->bUseControllerRotationYaw = false; // use to Rotate Camera = Pawn Direction
	this->Tags.AddUnique(TEXT("Player"));

	//SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MC_SKelMesh(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard"));
	if (MC_SKelMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MC_SKelMesh.Object);
	}
	//Animation SetUp
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	//AnimBlueprint'/Game/Blueprints/MCAnim_BP.MCAnim_BP'
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> MC_Anim_BP(TEXT("/Game/Blueprints/MCAnim_BP.MCAnim_BP"));
	if (MC_Anim_BP.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(MC_Anim_BP.Object->GetAnimBlueprintGeneratedClass());
	}

}
void AMainCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	UMCAnim = Cast<UMCAnimInstance>(GetMesh()->GetAnimInstance());
	UMCAnim->OnMontageEnded.AddDynamic(this, &AMainCharacter::OnAttackMontageEnded);
	UMCAnim->OnNextAttackCheck.AddLambda([this]()->void {
		CanNextCombo = false;

		if (IsComboInputOn)
		{
			AttackStartComboState();
			UMCAnim->JumpToAttackMontageSection(CurrentCombo);
		}
		});

}
// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &AMainCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &AMainCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AMainCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMainCharacter::Turn);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AMainCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AMainCharacter::Attack);
}
void AMainCharacter::UpDown(float NewAxisValue)
{
	FVector PlayerDir = FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X);
	PlayerDir.Z = 0.0f;
	PlayerDir.Normalize();
	AddMovementInput(PlayerDir, NewAxisValue * PlayerSpeed);
	//GetActorForwardVector(), NewAxisValue
}
void AMainCharacter::LeftRight(float NewAxisValue)
{
	FVector PlayerDir = FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y);
	PlayerDir.Z = 0.0f;
	PlayerDir.Normalize();
	AddMovementInput(PlayerDir, NewAxisValue * PlayerSpeed);
}
void AMainCharacter::LookUp(float NewAxisValue)
{
	AddControllerPitchInput(NewAxisValue);
}
void AMainCharacter::Turn(float NewAxisValue)
{
	AddControllerYawInput(NewAxisValue);
}
void AMainCharacter::Attack()
{
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
		UMCAnim->PlayerAttackMontage();
		UMCAnim->JumpToAttackMontageSection(CurrentCombo);
		IsAttacking = true;
	}
}
void AMainCharacter::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	IsAttacking = false;
	AttackEndComboState();
}
void AMainCharacter::AttackStartComboState()
{
	CanNextCombo = true;
	IsComboInputOn = false;
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo += 1, 1, MaxCombo);
}
void AMainCharacter::AttackEndComboState()
{
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}