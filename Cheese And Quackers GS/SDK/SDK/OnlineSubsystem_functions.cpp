﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: OnlineSubsystem

#include "Basic.hpp"

#include "OnlineSubsystem_classes.hpp"
#include "OnlineSubsystem_parameters.hpp"


namespace SDK
{

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// const class FString&                    Match                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");

	Params::TurnBasedMatchInterface_OnMatchEnded Parms{};

	Parms.Match = std::move(Match);

	AsUObject()->ProcessEvent(Func, &Parms);
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// const class FString&                    Match                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bDidBecomeActive                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = AsUObject()->Class->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");

	Params::TurnBasedMatchInterface_OnMatchReceivedTurn Parms{};

	Parms.Match = std::move(Match);
	Parms.bDidBecomeActive = bDidBecomeActive;

	AsUObject()->ProcessEvent(Func, &Parms);
}

}

