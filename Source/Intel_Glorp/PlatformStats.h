// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformStats.generated.h"


/**
 * 
 */
UCLASS()
class INTEL_GLORP_API UPlatformStats : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		/*
	UFUNCTION( BlueprintCallable, meta = (DisplayName = "Init Platform Stats", Keywords = "Init Platform Stats Start"), Category = "Platform" )
	static void InitPlatformStats();*/
	
	UFUNCTION( BlueprintPure, meta = (DisplayName = "Get CPU Usage", Keywords = "CPU Percent Usage"), Category = "Platform" )
	static float GetCPUUsage();
	
};
