﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_FlintlockPistol_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Ranged_GenericDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C
// 0x0010 (0x0998 - 0x0988)
class UGA_FlintlockPistol_Damage_C final : public UGA_Ranged_GenericDamage_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0988(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 GE_SelfKnock;                                      // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_FlintlockPistol_Damage(int32 EntryPoint);
	void K2_CommitExecute();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_FlintlockPistol_Damage_C">();
	}
	static class UGA_FlintlockPistol_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_FlintlockPistol_Damage_C>();
	}
};

}

