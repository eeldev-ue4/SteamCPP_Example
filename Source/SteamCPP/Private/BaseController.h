// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SteamMatchmaking/SteamMatchmakingTypes.h"

#include "BaseController.generated.h"

UCLASS()
class ABaseController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
public:
	UFUNCTION()
	void OnCreateLobbyCallback(const FCreateLobbyData& Data, bool bWasSuccessful);
};
