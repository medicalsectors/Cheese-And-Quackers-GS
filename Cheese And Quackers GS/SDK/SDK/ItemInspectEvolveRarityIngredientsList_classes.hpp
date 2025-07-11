﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: ItemInspectEvolveRarityIngredientsList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C
// 0x0070 (0x02A0 - 0x0230)
class UItemInspectEvolveRarityIngredientsList_C final : public UUserWidget
{
public:
	class UVerticalBox*                           IngredientsListBox;                                // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>          IngredientsList;                                   // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlateColor                            HaveColor;                                         // 0x0248(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NotHaveColor;                                      // 0x0270(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         HaveQuantity;                                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NeedQuantity;                                      // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_XP_Cost_to_Upgrade(class UFortItem* Target);
	void ClearIngredients();
	void SetIngredients(class UFortItem* Item, TArray<struct FFortItemQuantityPair>& InIngredients);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectEvolveRarityIngredientsList_C">();
	}
	static class UItemInspectEvolveRarityIngredientsList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectEvolveRarityIngredientsList_C>();
	}
};

}

