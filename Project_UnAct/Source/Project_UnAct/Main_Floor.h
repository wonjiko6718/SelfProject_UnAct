// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "Main_Floor.generated.h"

UCLASS()
class PROJECT_UNACT_API AMain_Floor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMain_Floor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MainFloor_body;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MainFloor_WallUp;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MainFloor_WallDown;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MainFloor_WallLeft;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MainFloor_WallRight;

};
