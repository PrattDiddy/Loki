// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "HoopGawdsHUD.generated.h"

UCLASS()
class AHoopGawdsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AHoopGawdsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

