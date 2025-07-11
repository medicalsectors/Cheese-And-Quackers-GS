﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: OptionsMenuInputDisplayOnly

#include "Basic.hpp"

#include "OptionsMenuInputDisplayOnly_classes.hpp"
#include "OptionsMenuInputDisplayOnly_parameters.hpp"


namespace SDK
{

// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuInputDisplayOnly_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputDisplayOnly_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "BP_OnItemExpansionChanged");

	Params::OptionsMenuInputDisplayOnly_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuInputDisplayOnly_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "BP_OnItemSelectionChanged");

	Params::OptionsMenuInputDisplayOnly_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputDisplayOnly_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "OnListItemObjectSet");

	Params::OptionsMenuInputDisplayOnly_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputDisplayOnly
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuInputDisplayOnly_C::ExecuteUbergraph_OptionsMenuInputDisplayOnly(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "ExecuteUbergraph_OptionsMenuInputDisplayOnly");

	Params::OptionsMenuInputDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputDisplayOnly Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionsMenuInputDisplayOnly.OptionsMenuInputDisplayOnly_C.GetListItemObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuInputDisplayOnly_C::GetListItemObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionsMenuInputDisplayOnly_C", "GetListItemObject");

	Params::OptionsMenuInputDisplayOnly_C_GetListItemObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

