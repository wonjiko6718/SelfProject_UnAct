// Fill out your copyright notice in the Description page of Project Settings.


#include "User_Character_Animinstance.h"

UUser_Character_Animinstance::UUser_Character_Animinstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	ShotOn = false;
	ArmedOn = false;

	//AnimMontage'/Game/Blueprints_Character/User_Character_Attack_Montage.User_Character_Attack_Montage'
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/Blueprints_Character/User_Character_Attack_Montage.User_Character_Attack_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		AttackMontage = ATTACK_MONTAGE.Object;
	}
}

void UUser_Character_Animinstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}
void UUser_Character_Animinstance::PlayAttackMontage()
{
	Montage_Play(AttackMontage, 1.0f);
}
void UUser_Character_Animinstance::AnimNotify_AttackHitCheck()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack Hit Check AnimInstance Script"));
	OnAttackHitCheck.Broadcast();
}
void UUser_Character_Animinstance::AnimNotify_AttackShootCheck()
{
	UE_LOG(LogTemp, Warning, TEXT("Attack Shoot Check AnimInstance Script"));
}
void UUser_Character_Animinstance::ArmChanging()
{
	if (ArmedOn == true)
	{
		ArmedOn = false;
		UE_LOG(LogTemp, Warning, TEXT("ArmedOnChanging - if"));
	}
	else
	{
		ArmedOn = true;
		UE_LOG(LogTemp, Warning, TEXT("ArmedOnChanging - else"));
	}
}
bool UUser_Character_Animinstance::Get_AnimInstance_ArmedOn()
{
	return ArmedOn;
}
void UUser_Character_Animinstance::JumpToAttackMontageSection(int32 NewSection)
{
	Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
}
void UUser_Character_Animinstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}
FName UUser_Character_Animinstance::GetAttackMontageSectionName(int32 Section)
{
	return FName(*FString::Printf(TEXT("Anim_CB_Attack_0%d"), Section));
}