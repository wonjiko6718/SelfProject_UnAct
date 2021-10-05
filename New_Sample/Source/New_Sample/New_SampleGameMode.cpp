// Copyright Epic Games, Inc. All Rights Reserved.

#include "New_SampleGameMode.h"
#include "New_SampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANew_SampleGameMode::ANew_SampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
