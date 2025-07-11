﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AthenaPlayerLevel

#include "Basic.hpp"

#include "AthenaPlayerLevel_classes.hpp"
#include "AthenaPlayerLevel_parameters.hpp"


namespace SDK
{

// Function AthenaPlayerLevel.AthenaPlayerLevel_C.AnimateBar
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaPlayerLevel_C::AnimateBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "AnimateBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::UpdateLevel(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "UpdateLevel");

	Params::AthenaPlayerLevel_C_UpdateLevel Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.UpdateXp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LevelXp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LevelXpForLevel_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxLevel_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::UpdateXp(int32 LevelXp, int32 LevelXpForLevel_0, int32 Level, int32 MaxLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "UpdateXp");

	Params::AthenaPlayerLevel_C_UpdateXp Parms{};

	Parms.LevelXp = LevelXp;
	Parms.LevelXpForLevel_0 = LevelXpForLevel_0;
	Parms.Level = Level;
	Parms.MaxLevel_0 = MaxLevel_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.IsReadyForNextXpReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Ready                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::IsReadyForNextXpReward(bool* Ready)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "IsReadyForNextXpReward");

	Params::AthenaPlayerLevel_C_IsReadyForNextXpReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromLevelInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FAthenaLevelInfo&          LevelInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UAthenaPlayerLevel_C::InitializeFromLevelInfo(const struct FAthenaLevelInfo& LevelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "InitializeFromLevelInfo");

	Params::AthenaPlayerLevel_C_InitializeFromLevelInfo Parms{};

	Parms.LevelInfo = std::move(LevelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.InitializeFromAccount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo&          FortPublicAccountInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaPlayerLevel_C::InitializeFromAccount(struct FFortPublicAccountInfo& FortPublicAccountInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "InitializeFromAccount");

	Params::AthenaPlayerLevel_C_InitializeFromAccount Parms{};

	Parms.FortPublicAccountInfo = std::move(FortPublicAccountInfo);

	UObject::ProcessEvent(Func, &Parms);

	FortPublicAccountInfo = std::move(Parms.FortPublicAccountInfo);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play Xp Reward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FAthenaMatchXpReward&      Reward                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerLevel_C::Play_Xp_Reward(const struct FAthenaMatchXpReward& Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Play Xp Reward");

	Params::AthenaPlayerLevel_C_Play_Xp_Reward Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Tick");

	Params::AthenaPlayerLevel_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Play XP Reward Directly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   XpToAdd_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::Play_XP_Reward_Directly(int32 XpToAdd_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Play XP Reward Directly");

	Params::AthenaPlayerLevel_C_Play_XP_Reward_Directly Parms{};

	Parms.XpToAdd_0 = XpToAdd_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.EventTrack_Leveled
// (BlueprintCallable, BlueprintEvent)

void UAthenaPlayerLevel_C::EventTrack_Leveled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "EventTrack_Leveled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerLevel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaPlayerLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "PreConstruct");

	Params::AthenaPlayerLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.WidgetAnimationEvt_AnimateXp_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UAthenaPlayerLevel_C::WidgetAnimationEvt_AnimateXp_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "WidgetAnimationEvt_AnimateXp_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.WidgetAnimationEvt_AnimateXpAndLevel_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UAthenaPlayerLevel_C::WidgetAnimationEvt_AnimateXpAndLevel_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "WidgetAnimationEvt_AnimateXpAndLevel_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaPlayerLevel.AthenaPlayerLevel_C.ExecuteUbergraph_AthenaPlayerLevel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerLevel_C::ExecuteUbergraph_AthenaPlayerLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaPlayerLevel_C", "ExecuteUbergraph_AthenaPlayerLevel");

	Params::AthenaPlayerLevel_C_ExecuteUbergraph_AthenaPlayerLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

