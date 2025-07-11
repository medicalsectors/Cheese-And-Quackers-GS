﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: TournamentDateEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TournamentDateEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TournamentDateEntry.TournamentDateEntry_C.EventColor
// 0x0170 (0x0170 - 0x0000)
struct TournamentDateEntry_C_EventColor final
{
public:
	struct FFortTournamentDisplayInfo             showdownData;                                      // 0x0000(0x0170)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry
// 0x04D0 (0x04D0 - 0x0000)
struct TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortShowdownEventState                       CallFunc_GetEventTimeState_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-8 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_showdownData;                   // 0x0048(0x0170)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01B8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x01E0(0x0028)()
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0208(0x0028)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue;            // 0x0240(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue;           // 0x0248(0x0018)()
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue;              // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x0268(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_1;         // 0x0278(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue_1;          // 0x0298(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue;           // 0x02A0(0x0018)()
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue_1;            // 0x02B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x02C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue_1;         // 0x0300(0x0018)()
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue_2;          // 0x0318(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0320(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_2;         // 0x0360(0x0018)()
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue_2;            // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0380(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue_3;         // 0x03C0(0x0018)()
	bool                                          Temp_bool_Variable_4;                              // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-8 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x03E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0420(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         K2Node_Select_Default_3;                           // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0438(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x0450(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0468(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x04A8(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x04B8(0x0018)()
};

}

