// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_UnAct : ModuleRules
{
	public Project_UnAct(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
