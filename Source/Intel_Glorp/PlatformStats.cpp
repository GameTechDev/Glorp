// Fill out your copyright notice in the Description page of Project Settings.

#include "PlatformStats.h"
#include "Engine/Engine.h"
#include "Misc/App.h"
/*
void UPlatformStats::InitPlatformStats()
{
	FGenericPlatformTime::
}*/

float UPlatformStats::GetCPUUsage()
{
	return FPlatformTime::GetCPUTime().CPUTimePct / 100.f;
}


