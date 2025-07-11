﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemRatingIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemRatingIndicator.ItemRatingIndicator_C
// 0x0018 (0x05B8 - 0x05A0)
class UItemRatingIndicator_C final : public UFortItemRatingIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 PowerRatingIconImage;                              // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatNumericTextBlock_C*                PowerRatingText;                                   // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HandleViewModelChanged();
	void ExecuteUbergraph_ItemRatingIndicator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemRatingIndicator_C">();
	}
	static class UItemRatingIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemRatingIndicator_C>();
	}
};

}

