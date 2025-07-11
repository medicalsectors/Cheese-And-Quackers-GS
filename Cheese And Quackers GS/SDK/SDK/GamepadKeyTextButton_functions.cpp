﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GamepadKeyTextButton

#include "Basic.hpp"

#include "GamepadKeyTextButton_classes.hpp"
#include "GamepadKeyTextButton_parameters.hpp"


namespace SDK
{

// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadKeyTextButton_C::SetNonInteractableStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "SetNonInteractableStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    ContentAlignment_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::SetContentAlignment(EHorizontalAlignment ContentAlignment_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "SetContentAlignment");

	Params::GamepadKeyTextButton_C_SetContentAlignment Parms{};

	Parms.ContentAlignment_0 = ContentAlignment_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UGamepadKeyTextButton_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "OnListItemObjectSet");

	Params::GamepadKeyTextButton_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// const class FText&                      DescText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::SetData(const struct FKey& Key, const class FText& DescText, class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "SetData");

	Params::GamepadKeyTextButton_C_SetData Parms{};

	Parms.Key = std::move(Key);
	Parms.DescText = std::move(DescText);
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "PreConstruct");

	Params::GamepadKeyTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// const class FText&                      DescText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::SetDataAndUpdateButton(const struct FKey& Key, const class FText& DescText, class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "SetDataAndUpdateButton");

	Params::GamepadKeyTextButton_C_SetDataAndUpdateButton Parms{};

	Parms.Key = std::move(Key);
	Parms.DescText = std::move(DescText);
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGamepadKeyTextButton_C*          Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::UpdateButton(class UGamepadKeyTextButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "UpdateButton");

	Params::GamepadKeyTextButton_C_UpdateButton Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FFortTabButtonLabelInfo&   TabLabelInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGamepadKeyTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "SetTabLabelInfo");

	Params::GamepadKeyTextButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::ExecuteUbergraph_GamepadKeyTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadKeyTextButton_C", "ExecuteUbergraph_GamepadKeyTextButton");

	Params::GamepadKeyTextButton_C_ExecuteUbergraph_GamepadKeyTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

