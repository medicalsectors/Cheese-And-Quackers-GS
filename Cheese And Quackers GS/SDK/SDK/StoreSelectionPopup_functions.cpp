﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: StoreSelectionPopup

#include "Basic.hpp"

#include "StoreSelectionPopup_classes.hpp"
#include "StoreSelectionPopup_parameters.hpp"


namespace SDK
{

// Function StoreSelectionPopup.StoreSelectionPopup_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreSelectionPopup_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreSelectionPopup_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectionPopup_C::ExecuteUbergraph_StoreSelectionPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreSelectionPopup_C", "ExecuteUbergraph_StoreSelectionPopup");

	Params::StoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

