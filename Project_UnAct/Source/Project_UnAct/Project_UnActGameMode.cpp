// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_UnActGameMode.h"
#include "MainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_UnActGameMode::AProject_UnActGameMode()
{
	// set default pawn class to our Blueprinted character
	//Blueprint'/Game/Blueprints/MainCharacter_BPClass.MainCharacter_BPClass'
	DefaultPawnClass = AMainCharacter::StaticClass();
}
