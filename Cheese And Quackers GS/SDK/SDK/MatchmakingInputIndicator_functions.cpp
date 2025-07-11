﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MatchmakingInputIndicator

#include "Basic.hpp"

#include "MatchmakingInputIndicator_classes.hpp"
#include "MatchmakingInputIndicator_parameters.hpp"


namespace SDK
{

// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.OnInputSourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchmakingInputIndicator_C::OnInputSourceTypeChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingInputIndicator_C", "OnInputSourceTypeChanged");

	Params::MatchmakingInputIndicator_C_OnInputSourceTypeChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.ExecuteUbergraph_MatchmakingInputIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchmakingInputIndicator_C::ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingInputIndicator_C", "ExecuteUbergraph_MatchmakingInputIndicator");

	Params::MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

