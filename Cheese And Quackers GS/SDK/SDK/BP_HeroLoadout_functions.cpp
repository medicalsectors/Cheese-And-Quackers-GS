﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_HeroLoadout

#include "Basic.hpp"

#include "BP_HeroLoadout_classes.hpp"
#include "BP_HeroLoadout_parameters.hpp"


namespace SDK
{

// Function BP_HeroLoadout.BP_HeroLoadout_C.SetVisiblityofDetailSpecificMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::SetVisiblityofDetailSpecificMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "SetVisiblityofDetailSpecificMeshes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.SetVisiblityofSceneLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HeroLoadout_C::SetVisiblityofSceneLighting(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "SetVisiblityofSceneLighting");

	Params::BP_HeroLoadout_C_SetVisiblityofSceneLighting Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.DisableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::DisableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "DisableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "UpdateSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.EnableLobbySetLighting
// (BlueprintCallable, BlueprintEvent)

void ABP_HeroLoadout_C::EnableLobbySetLighting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "EnableLobbySetLighting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HeroLoadout_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HeroLoadout.BP_HeroLoadout_C.ExecuteUbergraph_BP_HeroLoadout
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HeroLoadout_C::ExecuteUbergraph_BP_HeroLoadout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HeroLoadout_C", "ExecuteUbergraph_BP_HeroLoadout");

	Params::BP_HeroLoadout_C_ExecuteUbergraph_BP_HeroLoadout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

