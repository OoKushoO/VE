// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Virtual_EmployeeTarget : TargetRules
{
	public Virtual_EmployeeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Virtual_Employee" } );
	}
}
