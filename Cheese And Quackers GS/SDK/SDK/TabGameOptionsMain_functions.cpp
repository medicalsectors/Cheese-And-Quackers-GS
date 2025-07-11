﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: TabGameOptionsMain

#include "Basic.hpp"

#include "TabGameOptionsMain_classes.hpp"
#include "TabGameOptionsMain_parameters.hpp"


namespace SDK
{

// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "ExecuteUbergraph_TabGameOptionsMain");

	Params::TabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptionsMain_C::UpdateOptionsTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "UpdateOptionsTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::Setting_Value_Changed(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "Setting Value Changed");

	Params::TabGameOptionsMain_C_Setting_Value_Changed Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	Params::TabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	Params::TabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabGameOptionsMain_C::CenterOnTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "CenterOnTab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabGameOptionsMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
// (Event, Public, BlueprintEvent)

void UTabGameOptionsMain_C::UpdatePossibleLanguages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TabGameOptionsMain_C", "UpdatePossibleLanguages");

	UObject::ProcessEvent(Func, nullptr);
}

}

