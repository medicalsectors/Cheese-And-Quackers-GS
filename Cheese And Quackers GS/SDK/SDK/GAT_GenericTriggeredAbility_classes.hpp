﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: GAT_GenericTriggeredAbility

#include "Basic.hpp"

#include "GAT_TriggeredAbility_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// 0x00C8 (0x0A20 - 0x0958)
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_GenericTriggeredAbility_C;      // 0x0958(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                     EventData;                                         // 0x0960(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0A10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isAutoCommitted;                                   // 0x0A18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          isStaminaLockedOut;                                // 0x0A19(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_GenericTriggeredAbility_C">();
	}
	static class UGAT_GenericTriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_GenericTriggeredAbility_C>();
	}
};

}

