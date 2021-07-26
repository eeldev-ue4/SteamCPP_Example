// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseController.h"
#include "SteamMatchmaking/SteamMatchmaking.h"


void ABaseController::BeginPlay()
{
	Super::BeginPlay();

	if (UMatchmaking* Matchmaking = GetGameInstance()->GetSubsystem<UMatchmaking>())
	{
		FOnCreateLobby Callback;
		Callback.BindUFunction(this, "OnCreateLobbyCallback");
		Matchmaking->CreateLobby(Callback, ESteamLobbyType::Public, 5);
	}
}

void ABaseController::OnCreateLobbyCallback(const FCreateLobbyData& Data, bool bWasSuccessful)
{
	if (Data.Result == ESteamResult::OK)
	{
		// Success
	}
	else
	{
		// Do stuff
	}
}
