﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Athena_Booty_Input

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Booty_Input.GA_Athena_Booty_Input_C
// 0x0008 (0x0948 - 0x0940)
class UGA_Athena_Booty_Input_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Athena_Booty_Input(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Booty_Input_C">();
	}
	static class UGA_Athena_Booty_Input_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Booty_Input_C>();
	}
};

}

