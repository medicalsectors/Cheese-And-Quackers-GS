﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: StoreMain_MTXOffer_B

#include "Basic.hpp"

#include "StoreMain_MTXOffer_B_classes.hpp"
#include "StoreMain_MTXOffer_B_parameters.hpp"


namespace SDK
{

// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.SetTileSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Large                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_MTXOffer_B_C::SetTileSize(bool Large)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "SetTileSize");

	Params::StoreMain_MTXOffer_B_C_SetTileSize Parms{};

	Parms.Large = Large;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.TriggerReset
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::TriggerReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "TriggerReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.InitialReset
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::InitialReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "InitialReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.TriggerIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::TriggerIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "TriggerIntro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.ShowDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.InitOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::InitOffer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "InitOffer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_B_C::OnClick(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "OnClick");

	Params::StoreMain_MTXOffer_B_C_OnClick Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStoreMain_MTXOffer_B_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreMain_MTXOffer_B.StoreMain_MTXOffer_B_C.ExecuteUbergraph_StoreMain_MTXOffer_B
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_B_C::ExecuteUbergraph_StoreMain_MTXOffer_B(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreMain_MTXOffer_B_C", "ExecuteUbergraph_StoreMain_MTXOffer_B");

	Params::StoreMain_MTXOffer_B_C_ExecuteUbergraph_StoreMain_MTXOffer_B Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

