// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_UnActGameMode.h"
#include "Project_UnActCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_UnActGameMode::AProject_UnActGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
