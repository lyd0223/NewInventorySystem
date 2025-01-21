// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class InventorySystem : ModuleRules
{
	public InventorySystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine",
            "GameplayTags",
        });

        // 현재 프로젝트 루트(Source/InventorySystem) 경로 추가.
        PublicIncludePaths.AddRange(
                new string[] {
					// ... add public include paths required here ...
					ModuleDirectory,

                }
                );
    }

}
