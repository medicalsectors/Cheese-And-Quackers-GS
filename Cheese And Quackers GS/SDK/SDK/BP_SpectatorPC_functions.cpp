﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_SpectatorPC

#include "Basic.hpp"

#include "BP_SpectatorPC_classes.hpp"
#include "BP_SpectatorPC_parameters.hpp"


namespace SDK
{

// Function BP_SpectatorPC.BP_SpectatorPC_C.ExecuteUbergraph_BP_SpectatorPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorPC_C::ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorPC_C", "ExecuteUbergraph_BP_SpectatorPC");

	Params::BP_SpectatorPC_C_ExecuteUbergraph_BP_SpectatorPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SpectatorPC.BP_SpectatorPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SpectatorPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

