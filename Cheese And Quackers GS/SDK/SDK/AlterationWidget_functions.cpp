﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AlterationWidget

#include "Basic.hpp"

#include "AlterationWidget_classes.hpp"
#include "AlterationWidget_parameters.hpp"


namespace SDK
{

// Function AlterationWidget.AlterationWidget_C.GetValidLazyTexture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UAlterationWidget_C::GetValidLazyTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "GetValidLazyTexture");

	Params::AlterationWidget_C_GetValidLazyTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.HasValidTexture
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   ValidBrush                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::HasValidTexture(bool* ValidBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "HasValidTexture");

	Params::AlterationWidget_C_HasValidTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ValidBrush != nullptr)
		*ValidBrush = Parms.ValidBrush;
}


// Function AlterationWidget.AlterationWidget_C.IsGamplaySlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAlterationItemDefinition*    Alteration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::IsGamplaySlot(class UFortAlterationItemDefinition* Alteration, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "IsGamplaySlot");

	Params::AlterationWidget_C_IsGamplaySlot Parms{};

	Parms.Alteration = Alteration;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function AlterationWidget.AlterationWidget_C.TriggerTextAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::TriggerTextAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "TriggerTextAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.SetWidgetSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIncludeName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIncludeShortDescription                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIncludeDescription                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortBrushSize                          InIconSize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInUseLargeFormatName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InShouldShowRarity                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationWidget_C::SetWidgetSettings(bool bInIncludeName, bool bInIncludeShortDescription, bool bInIncludeDescription, EFortBrushSize InIconSize, bool bInUseLargeFormatName, bool InShouldShowRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "SetWidgetSettings");

	Params::AlterationWidget_C_SetWidgetSettings Parms{};

	Parms.bInIncludeName = bInIncludeName;
	Parms.bInIncludeShortDescription = bInIncludeShortDescription;
	Parms.bInIncludeDescription = bInIncludeDescription;
	Parms.InIconSize = InIconSize;
	Parms.bInUseLargeFormatName = bInUseLargeFormatName;
	Parms.InShouldShowRarity = InShouldShowRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationWidget.AlterationWidget_C.InitLockedLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitLockedLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "InitLockedLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::SetEvolutionDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "SetEvolutionDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.UpdatePips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::UpdatePips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "UpdatePips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.InitDescriptiveText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitDescriptiveText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "InitDescriptiveText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.InitIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationWidget_C::InitIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "InitIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAlterationWidget_C::ShouldFadeAlteration()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "ShouldFadeAlteration");

	Params::AlterationWidget_C_ShouldFadeAlteration Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.GetHighlightColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UAlterationWidget_C::GetHighlightColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "GetHighlightColor");

	Params::AlterationWidget_C_GetHighlightColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AlterationWidget.AlterationWidget_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAlterationWidget_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidget_C::ExecuteUbergraph_AlterationWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationWidget_C", "ExecuteUbergraph_AlterationWidget");

	Params::AlterationWidget_C_ExecuteUbergraph_AlterationWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

