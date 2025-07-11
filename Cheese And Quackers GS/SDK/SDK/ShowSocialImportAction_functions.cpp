﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ShowSocialImportAction

#include "Basic.hpp"

#include "ShowSocialImportAction_classes.hpp"
#include "ShowSocialImportAction_parameters.hpp"


namespace SDK
{

// Function ShowSocialImportAction.ShowSocialImportAction_C.ShouldShowSocialImport
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AShowSocialImportAction_C::ShouldShowSocialImport(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowSocialImportAction_C", "ShouldShowSocialImport");

	Params::ShowSocialImportAction_C_ShouldShowSocialImport Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.HandleSocialImportClosed
// (Public, BlueprintCallable, BlueprintEvent)

void AShowSocialImportAction_C::HandleSocialImportClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowSocialImportAction_C", "HandleSocialImportClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.ShowSocialImport
// (Public, BlueprintCallable, BlueprintEvent)

void AShowSocialImportAction_C::ShowSocialImport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowSocialImportAction_C", "ShowSocialImport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FFortScriptedActionParams& Params_0                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AShowSocialImportAction_C::Execute(const struct FFortScriptedActionParams& Params_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowSocialImportAction_C", "Execute");

	Params::ShowSocialImportAction_C_Execute Parms{};

	Parms.Params_0 = std::move(Params_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowSocialImportAction.ShowSocialImportAction_C.ExecuteUbergraph_ShowSocialImportAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShowSocialImportAction_C::ExecuteUbergraph_ShowSocialImportAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowSocialImportAction_C", "ExecuteUbergraph_ShowSocialImportAction");

	Params::ShowSocialImportAction_C_ExecuteUbergraph_ShowSocialImportAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

