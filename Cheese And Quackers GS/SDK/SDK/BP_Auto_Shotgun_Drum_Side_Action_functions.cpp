﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_Auto_Shotgun_Drum_Side_Action

#include "Basic.hpp"

#include "BP_Auto_Shotgun_Drum_Side_Action_classes.hpp"
#include "BP_Auto_Shotgun_Drum_Side_Action_parameters.hpp"


namespace SDK
{

// Function BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Auto_Shotgun_Drum_Side_Action_C::ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Auto_Shotgun_Drum_Side_Action_C", "ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action");

	Params::BP_Auto_Shotgun_Drum_Side_Action_C_ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

