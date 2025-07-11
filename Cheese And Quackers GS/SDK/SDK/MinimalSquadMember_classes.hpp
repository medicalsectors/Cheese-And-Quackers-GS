﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: MinimalSquadMember

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// 0x0048 (0x0BC0 - 0x0B78)
class UMinimalSquadMember_C final : public UAthenaMinimalSquadMemberEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       StyleNotReady;                                     // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleSitOut;                                       // 0x0B88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleEmpty;                                        // 0x0B90(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnReady;                                           // 0x0B98(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Meeple;                                      // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LocalUserIndicator;                                // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MeepleContainer;                                   // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReadyFlash;                                        // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSitOutVisuals();
	void SetReadyVisuals();
	void SetNotReadyVisuals();
	void SetEmptyVisuals();
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void ExecuteUbergraph_MinimalSquadMember(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimalSquadMember_C">();
	}
	static class UMinimalSquadMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimalSquadMember_C>();
	}
};

}

