﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: CreativeIslandLinkScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.ExecuteUbergraph_CreativeIslandLinkScreen
// 0x01B8 (0x01B8 - 0x0000)
struct CreativeIslandLinkScreen_C_ExecuteUbergraph_CreativeIslandLinkScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCreativeIslandLinkValidationResult       Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0048(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0060(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0078(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0090(0x0018)()
	class FText                                   K2Node_CustomEvent_Text;                           // 0x00A8(0x0018)(ConstParm)
	int32                                         CallFunc_GetNumItems_ReturnValue;                  // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_1;                 // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCreativeIslandLinkValidationResult       Temp_byte_Variable_1;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UObject*                                K2Node_Event_InitObject;                           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_IslandPortal_C*                    K2Node_DynamicCast_AsBGA_Island_Portal;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FA[0x6];                                       // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_1;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_2;     // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FText& Text)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	bool                                          K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0160(0x0018)()
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button_1;               // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCreativeIslandLinkValidationResult       K2Node_Event_ValidateResult;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0184(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_194[0x4];                                      // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   K2Node_Select_Default_2;                           // 0x0198(0x0018)()
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CreativeIslandLinkScreen_C_BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnCreativeIslandLinkValidated
// 0x0001 (0x0001 - 0x0000)
struct CreativeIslandLinkScreen_C_OnCreativeIslandLinkValidated final
{
public:
	EFortCreativeIslandLinkValidationResult       ValidateResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CreativeIslandLinkScreen_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CreativeIslandLinkScreen_C_BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature final
{
public:
	bool                                          bUsingGamepad;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CreativeIslandLinkScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.InitFromObject
// 0x0008 (0x0008 - 0x0000)
struct CreativeIslandLinkScreen_C_InitFromObject final
{
public:
	class UObject*                                InitObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnIslandLinkEntryTextChanged
// 0x0018 (0x0018 - 0x0000)
struct CreativeIslandLinkScreen_C_OnIslandLinkEntryTextChanged final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

