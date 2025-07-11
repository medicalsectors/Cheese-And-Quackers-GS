﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GA_Constructor_FeelTheBase_DeathListener

#include "Basic.hpp"

#include "GA_Constructor_FeelTheBase_DeathListener_classes.hpp"
#include "GA_Constructor_FeelTheBase_DeathListener_parameters.hpp"


namespace SDK
{

// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Constructor_FeelTheBase_DeathListener_C::ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_FeelTheBase_DeathListener_C", "ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener");

	Params::GA_Constructor_FeelTheBase_DeathListener_C_ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Constructor_FeelTheBase_DeathListener_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_FeelTheBase_DeathListener_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Constructor_FeelTheBase_DeathListener_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.Exceute GC
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Constructor_BASE_C*            BaseReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Overflow                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Constructor_FeelTheBase_DeathListener_C::Exceute_GC(class AB_Constructor_BASE_C* BaseReference, bool* Overflow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_FeelTheBase_DeathListener_C", "Exceute GC");

	Params::GA_Constructor_FeelTheBase_DeathListener_C_Exceute_GC Parms{};

	Parms.BaseReference = BaseReference;

	UObject::ProcessEvent(Func, &Parms);

	if (Overflow != nullptr)
		*Overflow = Parms.Overflow;
}


// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ActivateBaseStacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StackCount_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Constructor_BASE_C*            BaseReference                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Constructor_FeelTheBase_DeathListener_C::ActivateBaseStacks(int32 StackCount_0, class AB_Constructor_BASE_C* BaseReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_FeelTheBase_DeathListener_C", "ActivateBaseStacks");

	Params::GA_Constructor_FeelTheBase_DeathListener_C_ActivateBaseStacks Parms{};

	Parms.StackCount_0 = StackCount_0;
	Parms.BaseReference = BaseReference;

	UObject::ProcessEvent(Func, &Parms);
}

}

