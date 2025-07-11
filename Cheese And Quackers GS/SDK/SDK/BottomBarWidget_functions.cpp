﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BottomBarWidget

#include "Basic.hpp"

#include "BottomBarWidget_classes.hpp"
#include "BottomBarWidget_parameters.hpp"


namespace SDK
{

// Function BottomBarWidget.BottomBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBottomBarWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BottomBarWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BottomBarWidget.BottomBarWidget_C.ExecuteUbergraph_BottomBarWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBottomBarWidget_C::ExecuteUbergraph_BottomBarWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BottomBarWidget_C", "ExecuteUbergraph_BottomBarWidget");

	Params::BottomBarWidget_C_ExecuteUbergraph_BottomBarWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

