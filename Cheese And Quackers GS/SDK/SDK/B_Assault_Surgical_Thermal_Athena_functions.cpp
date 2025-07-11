﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_Assault_Surgical_Thermal_Athena

#include "Basic.hpp"

#include "B_Assault_Surgical_Thermal_Athena_classes.hpp"
#include "B_Assault_Surgical_Thermal_Athena_parameters.hpp"


namespace SDK
{

// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Assault_Surgical_Thermal_Athena_C::ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena");

	Params::B_Assault_Surgical_Thermal_Athena_C_ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)

void AB_Assault_Surgical_Thermal_Athena_C::ForceScopeBackImmediatly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ForceScopeBackImmediatly");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_Assault_Surgical_Thermal_Athena_C::ReverseScopePP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ReverseScopePP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)

void AB_Assault_Surgical_Thermal_Athena_C::PlayScopePP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "PlayScopePP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bNewIsTargeting                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Assault_Surgical_Thermal_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "OnSetTargeting");

	Params::B_Assault_Surgical_Thermal_Athena_C_OnSetTargeting Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ScalePlayerThermal__FinishedFunc
// (BlueprintEvent)

void AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ScalePlayerThermal__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C.ScalePlayerThermal__UpdateFunc
// (BlueprintEvent)

void AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Assault_Surgical_Thermal_Athena_C", "ScalePlayerThermal__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}

