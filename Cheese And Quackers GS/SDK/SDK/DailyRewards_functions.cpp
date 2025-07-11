﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: DailyRewards

#include "Basic.hpp"

#include "DailyRewards_classes.hpp"
#include "DailyRewards_parameters.hpp"


namespace SDK
{

// Function DailyRewards.DailyRewards_C.IsCurrentlyRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyRewards_C::IsCurrentlyRunning(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "IsCurrentlyRunning");

	Params::DailyRewards_C_IsCurrentlyRunning Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function DailyRewards.DailyRewards_C.Handle Collect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyRewards_C::Handle_Collect(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "Handle Collect");

	Params::DailyRewards_C_Handle_Collect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function DailyRewards.DailyRewards_C.Handle Close
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyRewards_C::Handle_Close(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "Handle Close");

	Params::DailyRewards_C_Handle_Close Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}


// Function DailyRewards.DailyRewards_C.PopPanelWhileInGame
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::PopPanelWhileInGame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "PopPanelWhileInGame");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyRewards.DailyRewards_C.Setup Daily Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDailyRewards_C::Setup_Daily_Rewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "Setup Daily Rewards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyRewards.DailyRewards_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UDailyRewards_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyRewards.DailyRewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyRewards_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyRewards.DailyRewards_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyRewards_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "PreConstruct");

	Params::DailyRewards_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyRewards.DailyRewards_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UDailyRewards_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyRewards.DailyRewards_C.BndEvt__Button_Collect_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewards_C::BndEvt__Button_Collect_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "BndEvt__Button_Collect_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::DailyRewards_C_BndEvt__Button_Collect_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyRewards.DailyRewards_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewards_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::DailyRewards_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyRewards.DailyRewards_C.ExecuteUbergraph_DailyRewards
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyRewards_C::ExecuteUbergraph_DailyRewards(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyRewards_C", "ExecuteUbergraph_DailyRewards");

	Params::DailyRewards_C_ExecuteUbergraph_DailyRewards Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

