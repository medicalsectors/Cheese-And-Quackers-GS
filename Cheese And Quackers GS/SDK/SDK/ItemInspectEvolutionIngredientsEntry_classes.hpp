﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemInspectEvolutionIngredientsEntry

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C
// 0x00B8 (0x02E8 - 0x0230)
class UItemInspectEvolutionIngredientsEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CheckMarkIcon;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                         ItemIcon;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemName;                                          // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuantityText;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemQuantityPair                  IngredientItemQuantity;                            // 0x0258(0x0040)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                            NotHaveColor;                                      // 0x0298(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            HaveColor;                                         // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	int32 GetHaveQuantity(struct FFortItemQuantityPair& InPair);
	void SetIngredientCount();
	void GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush);
	void Construct();
	void ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectEvolutionIngredientsEntry_C">();
	}
	static class UItemInspectEvolutionIngredientsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectEvolutionIngredientsEntry_C>();
	}
};

}

