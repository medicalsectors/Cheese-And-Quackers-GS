﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BP_ARDronePawn

#include "Basic.hpp"

#include "BP_ARDronePawn_classes.hpp"
#include "BP_ARDronePawn_parameters.hpp"


namespace SDK
{

// Function BP_ARDronePawn.BP_ARDronePawn_C.ExecuteUbergraph_BP_ARDronePawn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ExecuteUbergraph_BP_ARDronePawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "ExecuteUbergraph_BP_ARDronePawn");

	Params::BP_ARDronePawn_C_ExecuteUbergraph_BP_ARDronePawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.Update Wind Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_ARDronePawn_C::Update_Wind_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "Update Wind Audio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ARDronePawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "ReceiveTick");

	Params::BP_ARDronePawn_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "ReceivePossessed");

	Params::BP_ARDronePawn_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      OldController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "ReceiveUnpossessed");

	Params::BP_ARDronePawn_C_ReceiveUnpossessed Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.SetWindAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ARDronePawn_C::SetWindAudioEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "SetWindAudioEnabled");

	Params::BP_ARDronePawn_C_SetWindAudioEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ARDronePawn.BP_ARDronePawn_C.GetWindVolumeFromAltitude
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Altitude                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  Volume                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ARDronePawn_C::GetWindVolumeFromAltitude(float Altitude, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ARDronePawn_C", "GetWindVolumeFromAltitude");

	Params::BP_ARDronePawn_C_GetWindVolumeFromAltitude Parms{};

	Parms.Altitude = Altitude;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;
}

}

