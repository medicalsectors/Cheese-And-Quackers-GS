﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: BuildWatermark

#include "Basic.hpp"

#include "BuildWatermark_classes.hpp"
#include "BuildWatermark_parameters.hpp"


namespace SDK
{

// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "ExecuteUbergraph_BuildWatermark");

	Params::BuildWatermark_C_ExecuteUbergraph_BuildWatermark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortTeamMemberInfo&       PlayerInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBuildWatermark_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "HandlePlayerStateChanged");

	Params::BuildWatermark_C_HandlePlayerStateChanged Parms{};

	Parms.PlayerInfo = std::move(PlayerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildWatermark.BuildWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
// (BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::HandlePartyJoined()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "HandlePartyJoined");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBuildWatermark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildWatermark.BuildWatermark_C.Update Watermark
// (Public, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::Update_Watermark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "Update Watermark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BuildWatermark.BuildWatermark_C.SetTextCollapseIfDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       Text_Widget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FString&                    InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// const class FString&                    DefaultText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBuildWatermark_C::SetTextCollapseIfDefault(class UTextBlock* Text_Widget, const class FString& InputText, const class FString& DefaultText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "SetTextCollapseIfDefault");

	Params::BuildWatermark_C_SetTextCollapseIfDefault Parms{};

	Parms.Text_Widget = Text_Widget;
	Parms.InputText = std::move(InputText);
	Parms.DefaultText = std::move(DefaultText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BuildWatermark.BuildWatermark_C.UpdateCalenderOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildWatermark_C::UpdateCalenderOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildWatermark_C", "UpdateCalenderOffset");

	UObject::ProcessEvent(Func, nullptr);
}

}

