// Fill out your copyright notice in the Description page of Project Settings.


#include "MCAnimInstance.h"
#include "MainCharacter.h"

UMCAnimInstance::UMCAnimInstance()
{
	CurrentPawnSpeed = 0.0f;
}

void UMCAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	auto Pawn = TryGetPawnOwner();
	UE_LOG(LogTemp, Warning, TEXT("Auto Pawn: %s"), Pawn);
	AMainCharacter* FindChar = Cast<AMainCharacter>(Pawn);
	
	if (::IsValid(FindChar))
	{
		CurrentPawnSpeed = FindChar->GetVelocity().Size();
	}
}