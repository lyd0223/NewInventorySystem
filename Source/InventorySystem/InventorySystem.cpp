// Copyright Epic Games, Inc. All Rights Reserved.

#include "InventorySystem.h"
#include "Modules/ModuleManager.h"

#include "GameplayTagsManager.h"

#define LOCTEXT_NAMESPACE "FInventorySystem"
 
void FInventorySystem::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	// GameplayTag ini config파일 경로 추가.
	UGameplayTagsManager::Get().AddTagIniSearchPath(FPaths::ProjectPluginsDir() / TEXT("InventorySystem/Config/Tags"));
}
 
void FInventorySystem::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
 
#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE( FInventorySystem, InventorySystem);
 