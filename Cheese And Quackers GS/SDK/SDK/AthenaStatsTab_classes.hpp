﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: AthenaStatsTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaStatsTab.AthenaStatsTab_C
// 0x00E8 (0x05B0 - 0x04C8)
class UAthenaStatsTab_C final : public UAthenaStatsScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Entrance;                                          // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Tabs_Paginate;                                     // 0x04D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AccountLevelLabel;                                 // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CloseIcon;                                         // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider1;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Divider2;                                          // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FriendMatchXpBoostPointsLabel;                     // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxNoStats;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  HiddenSwitcher;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LastUpdatedTimeBox;                                // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  MainStatWidgetSwitcher;                            // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MatchXpBoostPointsLabel;                           // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         MobileCloseButton;                                 // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         MobileCloseButton_Disabled;                        // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoStatsText;                                       // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton;                                // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayCloseButton_Disabled;                       // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerRankEmblem_C*                    PlayerRankEmblem;                                  // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonLabel;                                       // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         UpdatingBox;                                       // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxbannerstats;                                   // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxStats;                                         // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Back_Action;                                       // 0x05A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void Init_Back_Action();
	void HandleBack(bool* PassThrough);
	void OnActivated();
	void OnQueryFinished(bool bWasSuccessful, bool bHasStatsToDisplay);
	void BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId);
	void OnQueryStarted();
	void OnDeactivated();
	void Construct();
	void OnInputMethodChanged_Event_0(ECommonInputType bNewInputType);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetPlatformButtonText(const class FText& PlatformButtonText);
	void BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaStatsTab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaStatsTab_C">();
	}
	static class UAthenaStatsTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaStatsTab_C>();
	}
};

}

