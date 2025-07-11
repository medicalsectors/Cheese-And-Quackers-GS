﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ChallengeListEntry_Challenge

#include "Basic.hpp"

#include "ChallengeListEntry_Challenge_classes.hpp"
#include "ChallengeListEntry_Challenge_parameters.hpp"


namespace SDK
{

// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsComplete                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLocked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bCompact                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HideRewards                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeListEntry_Challenge_C::OnChallengeInfoSet(bool bIsComplete, bool bIsLocked, bool bCompact, bool HideRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "OnChallengeInfoSet");

	Params::ChallengeListEntry_Challenge_C_OnChallengeInfoSet Parms{};

	Parms.bIsComplete = bIsComplete;
	Parms.bIsLocked = bIsLocked;
	Parms.bCompact = bCompact;
	Parms.HideRewards = HideRewards;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.BndEvt__SimpleButton_TopClickArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeListEntry_Challenge_C::BndEvt__SimpleButton_TopClickArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "BndEvt__SimpleButton_TopClickArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.BndEvt__SimpleButton_TopClickArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeListEntry_Challenge_C::BndEvt__SimpleButton_TopClickArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "BndEvt__SimpleButton_TopClickArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.OnPartyAssistEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsPartyAssistEnabled                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeListEntry_Challenge_C::OnPartyAssistEnabledChanged(bool bIsPartyAssistEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "OnPartyAssistEnabledChanged");

	Params::ChallengeListEntry_Challenge_C_OnPartyAssistEnabledChanged Parms{};

	Parms.bIsPartyAssistEnabled = bIsPartyAssistEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeListEntry_Challenge_C::BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::ChallengeListEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_3_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeListEntry_Challenge_C::BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_3_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_3_CommonSelectedStateChanged__DelegateSignature");

	Params::ChallengeListEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_3_CommonSelectedStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeListEntry_Challenge.ChallengeListEntry_Challenge_C.ExecuteUbergraph_ChallengeListEntry_Challenge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeListEntry_Challenge_C::ExecuteUbergraph_ChallengeListEntry_Challenge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeListEntry_Challenge_C", "ExecuteUbergraph_ChallengeListEntry_Challenge");

	Params::ChallengeListEntry_Challenge_C_ExecuteUbergraph_ChallengeListEntry_Challenge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

