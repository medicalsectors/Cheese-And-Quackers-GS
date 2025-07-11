﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: HeroLoadoutActiveAbilityDetailRow

#include "Basic.hpp"

#include "HeroLoadoutActiveAbilityDetailRow_classes.hpp"
#include "HeroLoadoutActiveAbilityDetailRow_parameters.hpp"


namespace SDK
{

// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetBorderVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::SetBorderVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetBorderVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetTierImage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTexture2D>*       NewParam                                               (Parm, OutParm, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::GetTierImage(TSoftObjectPtr<class UTexture2D>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "GetTierImage");

	Params::HeroLoadoutActiveAbilityDetailRow_C_GetTierImage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetDisplayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ShowDescription                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    UseVerboseDescription_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailRow_C::SetDisplayState(bool ShowName, bool ShowDescription, bool UseVerboseDescription_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetDisplayState");

	Params::HeroLoadoutActiveAbilityDetailRow_C_SetDisplayState Parms{};

	Parms.ShowName = ShowName;
	Parms.ShowDescription = ShowDescription;
	Parms.UseVerboseDescription_0 = UseVerboseDescription_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetAbilityKit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*                  AbilityKit_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::SetAbilityKit(class UFortAbilityKit* AbilityKit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetAbilityKit");

	Params::HeroLoadoutActiveAbilityDetailRow_C_SetAbilityKit Parms{};

	Parms.AbilityKit_0 = AbilityKit_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.IsAbilityUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHeroLoadoutActiveAbilityDetailRow_C::IsAbilityUnlocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "IsAbilityUnlocked");

	Params::HeroLoadoutActiveAbilityDetailRow_C_IsAbilityUnlocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.GetAbilityKit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAbilityKit* UHeroLoadoutActiveAbilityDetailRow_C::GetAbilityKit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "GetAbilityKit");

	Params::HeroLoadoutActiveAbilityDetailRow_C_GetAbilityKit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                        Hero                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::SetHero(class UFortHero* Hero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "SetHero");

	Params::HeroLoadoutActiveAbilityDetailRow_C_SetHero Parms{};

	Parms.Hero = Hero;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateTextStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateTextStyles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "UpdateTextStyles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateFromState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "UpdateFromState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::UpdateFromStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "UpdateFromStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "PreConstruct");

	Params::HeroLoadoutActiveAbilityDetailRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroLoadoutActiveAbilityDetailRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutActiveAbilityDetailRow.HeroLoadoutActiveAbilityDetailRow_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailRow_C::ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailRow_C", "ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow");

	Params::HeroLoadoutActiveAbilityDetailRow_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

