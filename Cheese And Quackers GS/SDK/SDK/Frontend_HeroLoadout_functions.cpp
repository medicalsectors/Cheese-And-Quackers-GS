﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: Frontend_HeroLoadout

#include "Basic.hpp"

#include "Frontend_HeroLoadout_classes.hpp"
#include "Frontend_HeroLoadout_parameters.hpp"


namespace SDK
{

// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ExecuteUbergraph_Frontend_HeroLoadout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_HeroLoadout_C::ExecuteUbergraph_Frontend_HeroLoadout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_HeroLoadout_C", "ExecuteUbergraph_Frontend_HeroLoadout");

	Params::Frontend_HeroLoadout_C_ExecuteUbergraph_Frontend_HeroLoadout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HandleFrontendCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_HeroLoadout_C::HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_HeroLoadout_C", "HandleFrontendCameraChanged");

	Params::Frontend_HeroLoadout_C_HandleFrontendCameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.Command - Transform
// (BlueprintCallable, BlueprintEvent)

void AFrontend_HeroLoadout_C::Command___Transform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_HeroLoadout_C", "Command - Transform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.HeroLoadout - Transfrom
// (BlueprintCallable, BlueprintEvent)

void AFrontend_HeroLoadout_C::HeroLoadout___Transfrom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_HeroLoadout_C", "HeroLoadout - Transfrom");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_HeroLoadout.Frontend_HeroLoadout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontend_HeroLoadout_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_HeroLoadout_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

