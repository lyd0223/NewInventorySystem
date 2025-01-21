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

        // ���� ������Ʈ ��Ʈ(Source/InventorySystem) ��� �߰�.
        PublicIncludePaths.AddRange(
                new string[] {
					// ... add public include paths required here ...
					ModuleDirectory,

                }
                );
    }

}
