// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_Floor.h"

// Sets default values
AMain_Floor::AMain_Floor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	this->Tags.AddUnique(TEXT("Floor"));

	MainFloor_body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MAINFLOOR_BODY"));
	MainFloor_WallUp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MAINFLOOR_WALLUP"));
	MainFloor_WallDown = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MAINFLOOR_WALLDOWN"));
	MainFloor_WallLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MAINFLOOR_WALLLEFT"));
	MainFloor_WallRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MAINFLOOR_WALLRIGHT"));

	RootComponent = MainFloor_body;

	MainFloor_WallUp->SetupAttachment(MainFloor_body);
	MainFloor_WallDown->SetupAttachment(MainFloor_body);
	MainFloor_WallLeft->SetupAttachment(MainFloor_body);
	MainFloor_WallRight->SetupAttachment(MainFloor_body);

	MainFloor_WallDown->SetRelativeLocationAndRotation(FVector(-300.0f, -300.0f, 0.0f), FRotator(0.0f, 180.0f, 0.0f));
	MainFloor_WallLeft->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 90.0f, 0.0f));
	MainFloor_WallRight->SetRelativeLocationAndRotation(FVector(-300.0f, -300.0f, 0.0f), FRotator(0.0f, -90.0f, 0.0f));

	//StaticMesh'/Game/Bunker/Meshes/SM_plate_concrete.SM_plate_concrete'
	//StaticMesh'/Game/Bunker/Meshes/SM_wall_concrete.SM_wall_concrete'
	ConstructorHelpers::FObjectFinder<UStaticMesh> FinderMF_Body(TEXT("/Game/Bunker/Meshes/SM_plate_concrete.SM_plate_concrete"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> FinderMF_Wall(TEXT("/Game/Bunker/Meshes/SM_wall_concrete.SM_wall_concrete"));
	if (FinderMF_Body.Succeeded())
	{
		MainFloor_body->SetStaticMesh(FinderMF_Body.Object);
	}
	if (FinderMF_Wall.Succeeded())
	{
		MainFloor_WallUp->SetStaticMesh(FinderMF_Wall.Object);
		MainFloor_WallDown->SetStaticMesh(FinderMF_Wall.Object);
		MainFloor_WallLeft->SetStaticMesh(FinderMF_Wall.Object);
		MainFloor_WallRight->SetStaticMesh(FinderMF_Wall.Object);
	}

	MainFloor_body->SetWorldScale3D(FVector(15.0f, 15.0f, 1.0f));
	MainFloor_WallUp->SetWorldScale3D(FVector(1.0f, 1.0f, 15.0f));
	MainFloor_WallDown->SetWorldScale3D(FVector(1.0f, 1.0f, 15.0f));
	MainFloor_WallLeft->SetWorldScale3D(FVector(1.0f, 1.0f, 15.0f));
	MainFloor_WallRight->SetWorldScale3D(FVector(1.0f, 1.0f, 15.0f));

}

// Called when the game starts or when spawned
void AMain_Floor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMain_Floor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

