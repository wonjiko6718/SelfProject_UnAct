// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "User_Character.generated.h"

UCLASS()
class NEW_SAMPLE_API AUser_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUser_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents() override;

	// Camera Setting
	UPROPERTY(VisibleAnywhere)
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere)
		float PlayerSpeed;
	// 2021 1022 Weapon Socket
	UPROPERTY(VisibleAnywhere, Category = Weapon)
		USkeletalMeshComponent* Weapon;
	UPROPERTY(VisibleAnywhere)
		bool IsArmed;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:

	// Input Binding
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	void Attack();
	void ArmChange();

	UFUNCTION()
		void OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	// Combo Methods
	void AttackStartComboState();
	void AttackEndComboState();

	UPROPERTY()
		class UUser_Character_Animinstance* User_Character_Anim;


private:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool CanNextCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsComboInputOn;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 CurrentCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 MaxCombo;

};
