﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ChallengeTile_Event

#include "Basic.hpp"

#include "ChallengeTile_Event_classes.hpp"
#include "ChallengeTile_Event_parameters.hpp"


namespace SDK
{

// Function ChallengeTile_Event.ChallengeTile_Event_C.SetDynamicColors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           EventDynamicMaterialTarget                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FFortChallengeSetStyle&    FortChallengeSetStyle                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeTile_Event_C::SetDynamicColors(class UImage* EventDynamicMaterialTarget, const struct FFortChallengeSetStyle& FortChallengeSetStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Event_C", "SetDynamicColors");

	Params::ChallengeTile_Event_C_SetDynamicColors Parms{};

	Parms.EventDynamicMaterialTarget = EventDynamicMaterialTarget;
	Parms.FortChallengeSetStyle = std::move(FortChallengeSetStyle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FFortChallengeSetStyle&    DisplayStyle                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bIsComplete                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Event_C::OnChallengeSetEstablished(const struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Event_C", "OnChallengeSetEstablished");

	Params::ChallengeTile_Event_C_OnChallengeSetEstablished Parms{};

	Parms.DisplayStyle = std::move(DisplayStyle);
	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Event_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Event_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Event_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Event_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.OnContainsPartyAssistedChallengeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bHasPartyAssistedChallenge                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeTile_Event_C::OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Event_C", "OnContainsPartyAssistedChallengeChanged");

	Params::ChallengeTile_Event_C_OnContainsPartyAssistedChallengeChanged Parms{};

	Parms.bHasPartyAssistedChallenge = bHasPartyAssistedChallenge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.ExecuteUbergraph_ChallengeTile_Event
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeTile_Event_C::ExecuteUbergraph_ChallengeTile_Event(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeTile_Event_C", "ExecuteUbergraph_ChallengeTile_Event");

	Params::ChallengeTile_Event_C_ExecuteUbergraph_ChallengeTile_Event Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

