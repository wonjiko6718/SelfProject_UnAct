// Fill out your copyright notice in the Description page of Project Settings.


#include "MCAnimInstance.h"

UMCAnimInstance::UMCAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	//AnimMontage'/Game/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage'
	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		AttackMontage = ATTACK_MONTAGE.Object;
	}

	UE_LOG(LogTemp, Warning, TEXT("Anim Instance Load Complete"));
}

void UMCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{;
	Super::NativeUpdateAnimation(DeltaSeconds);
	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character) // get Character Is In Air
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}
}
void UMCAnimInstance::PlayerAttackMontage()
{
	Montage_Play(AttackMontage, 1.0f);
}