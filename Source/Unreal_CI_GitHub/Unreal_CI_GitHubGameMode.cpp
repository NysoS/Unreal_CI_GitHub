// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_CI_GitHubGameMode.h"
#include "Unreal_CI_GitHubCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_CI_GitHubGameMode::AUnreal_CI_GitHubGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
