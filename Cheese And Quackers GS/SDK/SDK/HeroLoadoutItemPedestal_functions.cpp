﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: HeroLoadoutItemPedestal

#include "Basic.hpp"

#include "HeroLoadoutItemPedestal_classes.hpp"
#include "HeroLoadoutItemPedestal_parameters.hpp"


namespace SDK
{

// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.ExecuteUbergraph_HeroLoadoutItemPedestal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeroLoadoutItemPedestal_C::ExecuteUbergraph_HeroLoadoutItemPedestal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "ExecuteUbergraph_HeroLoadoutItemPedestal");

	Params::HeroLoadoutItemPedestal_C_ExecuteUbergraph_HeroLoadoutItemPedestal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.HandleSlotFocusInUIChanged
// (Event, Protected, BlueprintEvent)

void AHeroLoadoutItemPedestal_C::HandleSlotFocusInUIChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "HandleSlotFocusInUIChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)

void AHeroLoadoutItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutItemPedestal_C", "OnHeroPawnSetupCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

}

