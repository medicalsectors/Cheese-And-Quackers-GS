﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_SniperRifle_FCSA

#include "Basic.hpp"

#include "BP_SniperRifle_FCSA_classes.hpp"
#include "BP_SniperRifle_FCSA_parameters.hpp"


namespace SDK
{

// Function BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.ExecuteUbergraph_BP_SniperRifle_FCSA
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SniperRifle_FCSA_C::ExecuteUbergraph_BP_SniperRifle_FCSA(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SniperRifle_FCSA_C", "ExecuteUbergraph_BP_SniperRifle_FCSA");

	Params::BP_SniperRifle_FCSA_C_ExecuteUbergraph_BP_SniperRifle_FCSA Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

