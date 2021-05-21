// Fill out your copyright notice in the Description page of Project Settings.


#include "MCAnimInstance.h"

UMCAnimInstance::UMCAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = true;
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