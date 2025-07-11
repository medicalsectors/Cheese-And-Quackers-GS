﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: InputReflector

#include "Basic.hpp"

#include "InputReflector_classes.hpp"
#include "InputReflector_parameters.hpp"


namespace SDK
{

// Function InputReflector.InputReflector_C.StyleButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*&                   ButtonToStyle                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton**                   ButtonStyled                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflector_C::StyleButton(class UCommonButton*& ButtonToStyle, class UCommonButton** ButtonStyled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflector_C", "StyleButton");

	Params::InputReflector_C_StyleButton Parms{};

	Parms.ButtonToStyle = ButtonToStyle;

	UObject::ProcessEvent(Func, &Parms);

	ButtonToStyle = Parms.ButtonToStyle;

	if (ButtonStyled != nullptr)
		*ButtonStyled = Parms.ButtonStyled;
}


// Function InputReflector.InputReflector_C.HandleAddButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    AddedButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflector_C::HandleAddButton(class UCommonButton* AddedButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflector_C", "HandleAddButton");

	Params::InputReflector_C_HandleAddButton Parms{};

	Parms.AddedButton = AddedButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflector.InputReflector_C.OnButtonAdded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UCommonButton*                    AddedButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FCommonInputActionHandlerData&Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UInputReflector_C::OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflector_C", "OnButtonAdded");

	Params::InputReflector_C_OnButtonAdded Parms{};

	Parms.AddedButton = AddedButton;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflector.InputReflector_C.ExecuteUbergraph_InputReflector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflector_C::ExecuteUbergraph_InputReflector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflector_C", "ExecuteUbergraph_InputReflector");

	Params::InputReflector_C_ExecuteUbergraph_InputReflector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

