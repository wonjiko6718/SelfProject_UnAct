// Copyright Epic Games, Inc. All Rights Reserved.

#include "New_SampleGameMode.h"
#include "User_Character.h"
#include "UObject/ConstructorHelpers.h"

ANew_SampleGameMode::ANew_SampleGameMode()
{
	// set default pawn class to our Blueprinted character
	//Blueprint'/Game/Blueprints_Character/User_CharacterBP.User_CharacterBP'
	DefaultPawnClass = AUser_Character::StaticClass();
}
