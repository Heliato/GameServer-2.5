#pragma once

#include "../util.h"

namespace Match
{
	void ReadyToStartMatch()
	{
		UWorld* World = Globals::GetWorld();

		HLog("ReadyToStartMatch");

		if (World)
		{
			AFortGameModeAthena* GameMode = (AFortGameModeAthena*)World->AuthorityGameMode;
			AAthena_GameState_C* GameState = (AAthena_GameState_C*)World->GameState;
			FName InProgress = Globals::GetStringLibrary()->Conv_StringToName(L"InProgress");

			if (GameMode && GameState)
			{
				GameState->GamePhase = EAthenaGamePhase::Warmup;
				GameState->OnRep_GamePhase(EAthenaGamePhase::None);

				GameMode->MatchState = InProgress;
				GameMode->K2_OnSetMatchState(InProgress);

				GameMode->GameSession->MaxPlayers = 100;
				GameMode->StartPlay();
				GameMode->StartMatch();
			}
		}
	}

	AFortPawn* SpawnPlayer(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator Rotation, bool NewPlayer = true)
	{
		auto Pawn = Util::SpawnActor<APlayerPawn_Athena_C>(APlayerPawn_Athena_C::StaticClass(), Location, Rotation);
		UWorld* World = Globals::World;

		Pawn->bCanBeDamaged = NewPlayer ? false : true;
		Pawn->Owner = PlayerController;
		Pawn->OnRep_Owner();

		PlayerController->Pawn = Pawn;
		PlayerController->OnRep_Pawn();
		PlayerController->Possess(Pawn);

		Pawn->SetMaxHealth(100);
		Pawn->SetHealth(100);
		auto HealthSet = Pawn->HealthSet;
		HealthSet->CurrentShield.Minimum = 0;
		HealthSet->CurrentShield.Maximum = 100;
		HealthSet->CurrentShield.BaseValue = 0;
		HealthSet->Shield.Minimum = 0;
		HealthSet->Shield.Maximum = 100;
		HealthSet->Shield.BaseValue = 100;
		HealthSet->OnRep_Shield();
		HealthSet->OnRep_CurrentShield();

		Pawn->HealthRegenDelayGameplayEffect = nullptr;
		Pawn->ShieldRegenDelayGameplayEffect = nullptr;
		Pawn->ShieldRegenGameplayEffect = nullptr;
		Pawn->HealthRegenGameplayEffect = nullptr;

		if (NewPlayer)
		{
			auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
			PlayerState->bHasFinishedLoading = true;
			PlayerState->bHasStartedPlaying = true;
			PlayerState->OnRep_bHasStartedPlaying();
			PlayerState->OnRep_CharacterParts();

			UFortCheatManager* CheatManager = (UFortCheatManager*)PlayerController->CheatManager;

			if (!CheatManager)
			{
				CheatManager = (UFortCheatManager*)(Globals::GetGameplayStatics()->SpawnObject(UFortCheatManager::StaticClass(), PlayerController));
				PlayerController->CheatManager = CheatManager;
			}
				
			CheatManager->BackpackSetSize(5);

			AFortQuickBars* NewQuickBars = Util::SpawnActor<AFortQuickBars>(AFortQuickBars::StaticClass(), FVector(), FRotator());
			NewQuickBars->SetOwner(PlayerController);
			PlayerController->QuickBars = NewQuickBars;
			PlayerController->OnRep_QuickBar();

			static auto GlobalAbility = FindObjectFast<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

			Abilities::GrantGameplayAbility(GlobalAbility, Pawn);

			PlayerController->bIsDisconnecting = false;
			PlayerController->bHasClientFinishedLoading = true;
			PlayerController->bHasServerFinishedLoading = true;
			PlayerController->bHasInitiallySpawned = true;
		}

		return Pawn;
	}
}