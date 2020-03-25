// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ES_BPLibraryTarget : TargetRules
{
	public ES_BPLibraryTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ES_BPLibrary" } );
	}
}
