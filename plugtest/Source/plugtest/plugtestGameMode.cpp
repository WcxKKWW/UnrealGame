// Copyright Epic Games, Inc. All Rights Reserved.

#include "plugtestGameMode.h"
#include "plugtestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AplugtestGameMode::AplugtestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
