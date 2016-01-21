// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjetKiTu.h"
#include "ProjetKiTuGameMode.h"
#include "ProjetKiTuCharacter.h"

AProjetKiTuGameMode::AProjetKiTuGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
