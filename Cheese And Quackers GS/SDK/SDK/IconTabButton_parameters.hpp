﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: IconTabButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function IconTabButton.IconTabButton_C.Play Hover Sound
// 0x0048 (0x0048 - 0x0000)
struct IconTabButton_C_Play_Hover_Sound final
{
public:
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected
// 0x0088 (0x0088 - 0x0000)
struct IconTabButton_C_SetChangeIconColorWhenSelected final
{
public:
	bool                                          ChangeColorWhenSelected;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSlateColor                            SelectedColor;                                     // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                            UnselectedColor;                                   // 0x0030(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0060(0x0028)()
};

// Function IconTabButton.IconTabButton_C.Update Bang State
// 0x000C (0x000C - 0x0000)
struct IconTabButton_C_Update_Bang_State final
{
public:
	bool                                          bBangEnabled_0;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         Count;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
// 0x0008 (0x0008 - 0x0000)
struct IconTabButton_C_SetTutorialBorderStyle final
{
public:
	class UClass*                                 BorderStyle;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconTabButton.IconTabButton_C.Set Icon
// 0x0088 (0x0088 - 0x0000)
struct IconTabButton_C_Set_Icon final
{
public:
	struct FSlateBrush                            IconBrush_0;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButton.IconTabButton_C.Set Text
// 0x0038 (0x0038 - 0x0000)
struct IconTabButton_C_Set_Text final
{
public:
	class FText                                   ButtonText_0;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconTabButton.IconTabButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct IconTabButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
// 0x00A0 (0x00A0 - 0x0000)
struct IconTabButton_C_SetTabLabelInfo final
{
public:
	struct FFortTabButtonLabelInfo                TabLabelInfo;                                      // 0x0000(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
// 0x01E8 (0x01E8 - 0x0000)
struct IconTabButton_C_ExecuteUbergraph_IconTabButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UClass*                                 CallFunc_GetCurrentTextStyleClass_ReturnValue_1;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTabButtonLabelInfo                K2Node_Event_TabLabelInfo;                         // 0x0020(0x00A0)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue_1;                // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C3[0x5];                                       // 0x00C3(0x0005)(Fixing Size After Last Property [ Dumper-8 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00C8(0x0088)()
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x0158(0x0088)()
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

