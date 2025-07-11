﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_FlintlockPistol_Knockback

#include "Basic.hpp"

#include "GA_FlintlockPistol_Knockback_classes.hpp"
#include "GA_FlintlockPistol_Knockback_parameters.hpp"


namespace SDK
{

// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.ExecuteUbergraph_GA_FlintlockPistol_Knockback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FlintlockPistol_Knockback_C::ExecuteUbergraph_GA_FlintlockPistol_Knockback(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "ExecuteUbergraph_GA_FlintlockPistol_Knockback");

	Params::GA_FlintlockPistol_Knockback_C_ExecuteUbergraph_GA_FlintlockPistol_Knockback Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.CheckVel
// (BlueprintCallable, BlueprintEvent)

void UGA_FlintlockPistol_Knockback_C::CheckVel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "CheckVel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_FlintlockPistol_Knockback_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_FlintlockPistol_Knockback.GA_FlintlockPistol_Knockback_C.KnockPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_FlintlockPistol_Knockback_C::KnockPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FlintlockPistol_Knockback_C", "KnockPlayer");

	UObject::ProcessEvent(Func, nullptr);
}

}

