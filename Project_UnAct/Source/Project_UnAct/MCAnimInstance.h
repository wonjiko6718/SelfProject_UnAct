// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Animation/AnimInstance.h"
#include "MCAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_UNACT_API UMCAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UMCAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float CurrentPawnSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsInAir;
};
