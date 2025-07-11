﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ReportPlayer

#include "Basic.hpp"

#include "ReportPlayer_classes.hpp"
#include "ReportPlayer_parameters.hpp"


namespace SDK
{

// Function ReportPlayer.ReportPlayer_C.ExecuteUbergraph_ReportPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::ExecuteUbergraph_ReportPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "ExecuteUbergraph_ReportPlayer");

	Params::ReportPlayer_C_ExecuteUbergraph_ReportPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.OnFeedbackSentCallback
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Succeeded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportPlayer_C::OnFeedbackSentCallback(bool Succeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnFeedbackSentCallback");

	Params::ReportPlayer_C_OnFeedbackSentCallback Parms{};

	Parms.Succeeded = Succeeded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportPlayer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "PreConstruct");

	Params::ReportPlayer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPlayer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Send_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__Button_Send_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__Button_Send_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__Button_Send_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.OnListViewSelectionMade
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    ReportingStep                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      SelectedText                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UReportPlayer_C::OnListViewSelectionMade(EPlayerReportingStep ReportingStep, const class FText& SelectedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnListViewSelectionMade");

	Params::ReportPlayer_C_OnListViewSelectionMade Parms{};

	Parms.ReportingStep = ReportingStep;
	Parms.SelectedText = std::move(SelectedText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    CurrentStep                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::OnPopulateView(EPlayerReportingStep CurrentStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnPopulateView");

	Params::ReportPlayer_C_OnPopulateView Parms{};

	Parms.CurrentStep = CurrentStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UReportPlayer_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayer.ReportPlayer_C.OnTabClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::OnTabClicked(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnTabClicked");

	Params::ReportPlayer_C_OnTabClicked Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature");

	Params::ReportPlayer_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayer.ReportPlayer_C.OnLoaded_69F2E4A6451E92C2AF9C36808D6C297B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::OnLoaded_69F2E4A6451E92C2AF9C36808D6C297B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "OnLoaded_69F2E4A6451E92C2AF9C36808D6C297B");

	Params::ReportPlayer_C_OnLoaded_69F2E4A6451E92C2AF9C36808D6C297B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.HandleBottomBarBackButtonClicked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Passhtrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportPlayer_C::HandleBottomBarBackButtonClicked(bool* Passhtrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "HandleBottomBarBackButtonClicked");

	Params::ReportPlayer_C_HandleBottomBarBackButtonClicked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Passhtrough != nullptr)
		*Passhtrough = Parms.Passhtrough;
}


// Function ReportPlayer.ReportPlayer_C.EnableTabByCurrentStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    CurrentStep                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::EnableTabByCurrentStep(EPlayerReportingStep CurrentStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "EnableTabByCurrentStep");

	Params::ReportPlayer_C_EnableTabByCurrentStep Parms{};

	Parms.CurrentStep = CurrentStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.SetEnableTabButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconTextButton_C*                InTabButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportPlayer_C::SetEnableTabButton(class UIconTextButton_C* InTabButton, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "SetEnableTabButton");

	Params::ReportPlayer_C_SetEnableTabButton Parms{};

	Parms.InTabButton = InTabButton;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.HandleTabsByCurrentStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    CurStep                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::HandleTabsByCurrentStep(EPlayerReportingStep CurStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "HandleTabsByCurrentStep");

	Params::ReportPlayer_C_HandleTabsByCurrentStep Parms{};

	Parms.CurStep = CurStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.DisableTabsByCurrentStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    CurStep                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::DisableTabsByCurrentStep(EPlayerReportingStep CurStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "DisableTabsByCurrentStep");

	Params::ReportPlayer_C_DisableTabsByCurrentStep Parms{};

	Parms.CurStep = CurStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.HandleDisplayNewReportPlayerEntryItemSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    DisplayedStep                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      DisplayedText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UReportPlayer_C::HandleDisplayNewReportPlayerEntryItemSelection(EPlayerReportingStep DisplayedStep, const class FText& DisplayedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "HandleDisplayNewReportPlayerEntryItemSelection");

	Params::ReportPlayer_C_HandleDisplayNewReportPlayerEntryItemSelection Parms{};

	Parms.DisplayedStep = DisplayedStep;
	Parms.DisplayedText = std::move(DisplayedText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.RemoveStackedEntriesByStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep                    CurrentStep                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReportPlayer_C::RemoveStackedEntriesByStep(EPlayerReportingStep CurrentStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "RemoveStackedEntriesByStep");

	Params::ReportPlayer_C_RemoveStackedEntriesByStep Parms{};

	Parms.CurrentStep = CurrentStep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ReportPlayer.ReportPlayer_C.ClearStackingEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::ClearStackingEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "ClearStackingEntries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayer.ReportPlayer_C.ResetSwitcherStates
// (Public, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::ResetSwitcherStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "ResetSwitcherStates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayer.ReportPlayer_C.ResetAnims
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::ResetAnims()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "ResetAnims");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ReportPlayer.ReportPlayer_C.PlayBackgroundImageAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::PlayBackgroundImageAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReportPlayer_C", "PlayBackgroundImageAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

