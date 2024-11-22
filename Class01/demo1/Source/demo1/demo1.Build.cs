// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class demo1 : ModuleRules
{
	public demo1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
