﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: EnableMultiFactorAuthModalBP

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavDown
// 0x0008 (0x0008 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_NavDown final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavUp
// 0x0020 (0x0020 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_NavUp final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue_1;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_1;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavRight
// 0x0020 (0x0020 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_NavRight final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_1;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEnabled_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavLeft
// 0x0008 (0x0008 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_NavLeft final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnPanelTypeSet
// 0x0001 (0x0001 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_OnPanelTypeSet final
{
public:
	ESocialImportPanelType                        NewType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnIncentivizedSet
// 0x0001 (0x0001 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_OnIncentivizedSet final
{
public:
	bool                                          bIncentivized;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetExitButtonText
// 0x0018 (0x0018 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_OnSetExitButtonText final
{
public:
	class FText                                   NewButtonText;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnConsoleDisplayURLProvided
// 0x0018 (0x0018 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_OnConsoleDisplayURLProvided final
{
public:
	class FText                                   UniquePlayerURLText;                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetScreenConfiguration
// 0x0001 (0x0001 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_OnSetScreenConfiguration final
{
public:
	bool                                          bIsConsole;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ExecuteUbergraph_EnableMultiFactorAuthModalBP
// 0x00B8 (0x00B8 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_ExecuteUbergraph_EnableMultiFactorAuthModalBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-8 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFrontEndCamera                               K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0030(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESocialImportPanelType                        K2Node_Event_NewType;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIncentivized;                        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_NewButtonText;                        // 0x0068(0x0018)(ConstParm)
	class FText                                   K2Node_Event_UniquePlayerURLText;                  // 0x0080(0x0018)(ConstParm)
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsConsole;                           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleSetScreenMode
// 0x0010 (0x0010 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_HandleSetScreenMode final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue_1;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ScaleTitleForCulture
// 0x0050 (0x0050 - 0x0000)
struct EnableMultiFactorAuthModalBP_C_ScaleTitleForCulture final
{
public:
	float                                         ScaleCharThreshold;                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxCharCountForScale;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StartScaleAfterCharCount;                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

