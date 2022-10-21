// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonGitGameMode.h"
#include "ThirdPersonGitCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonGitGameMode::AThirdPersonGitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
