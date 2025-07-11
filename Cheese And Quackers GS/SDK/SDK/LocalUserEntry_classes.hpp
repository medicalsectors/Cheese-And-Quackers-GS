﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: LocalUserEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// 0x0060 (0x0BE0 - 0x0B80)
class ULocalUserEntry_C final : public UFortLocalUserEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x0B88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_OnlineStatusIndicator;                      // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MicIcon;                                     // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LocalUserEntryBorder;                              // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SettingsIcon;                                      // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           Online;                                            // 0x0BB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Offline;                                           // 0x0BC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Away;                                              // 0x0BD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LocalUserEntry(int32 EntryPoint);
	void OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void HandleOnlineIndicatorView(ELocalUserOnlineStatus InLocalUserOnlineStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserEntry_C">();
	}
	static class ULocalUserEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserEntry_C>();
	}
};

}

