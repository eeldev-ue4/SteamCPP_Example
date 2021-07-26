// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SteamCPP : ModuleRules
{
	public SteamCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "SteamCore" });
	}
}
