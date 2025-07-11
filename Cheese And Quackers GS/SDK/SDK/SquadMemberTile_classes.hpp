﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: SquadMemberTile

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadMemberTile.SquadMemberTile_C
// 0x0078 (0x0C28 - 0x0BB0)
class USquadMemberTile_C final : public UAthenaSquadMemberDetailedEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnIntro;                                           // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnLocalUserDefined;                                // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSelected;                                        // 0x0BC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SetRibbonRotation;                                 // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleEmpty;                                        // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleNotReady;                                     // 0x0BE0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleReady;                                        // 0x0BE8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StyleSitOut;                                       // 0x0BF0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHovered;                                         // 0x0BF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoadingThrobberBacking;                            // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LocalUserIcon;                                     // 0x0C10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadOverlay;                                      // 0x0C18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadRibbon;                                       // 0x0C20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSitOutVisuals();
	void SetReadyVisuals();
	void SetNotReadyVisuals();
	void SetEmptyVisuals();
	void OnSquadAssigned();
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(class UObject* Loaded);
	void Construct();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void PreConstruct(bool IsDesignTime);
	void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
	void BP_OnSelected();
	void BP_OnDeselected();
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void ExecuteUbergraph_SquadMemberTile(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadMemberTile_C">();
	}
	static class USquadMemberTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadMemberTile_C>();
	}
};

}

