﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: LiveLinkInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum LiveLinkInterface.ELiveLinkSourceMode
// NumValues: 0x0004
enum class ELiveLinkSourceMode : uint8
{
	Default                                  = 0,
	Interpolated                             = 1,
	TimeSynchronized                         = 2,
	ELiveLinkSourceMode_MAX                  = 3,
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060 (0x0060 - 0x0000)
struct FLiveLinkMetaData final
{
public:
	TMap<class FName, class FString>              StringMetadata;                                    // 0x0000(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                    SceneTime;                                         // 0x0050(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020 (0x0020 - 0x0000)
struct FLiveLinkRefSkeleton final
{
public:
	TArray<class FName>                           BoneNames;                                         // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                 BoneParents;                                       // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C (0x000C - 0x0000)
struct FLiveLinkCurveElement final
{
public:
	class FName                                   CurveName;                                         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurveValue;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkWorldTime final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        Offset;                                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090 (0x0090 - 0x0000)
struct FLiveLinkFrameData final
{
public:
	TArray<struct FTransform>                     Transforms;                                        // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkCurveElement>          CurveElements;                                     // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkWorldTime                     WorldTime;                                         // 0x0020(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                      MetaData;                                          // 0x0030(0x0060)(NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FLiveLinkSourceHandle final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-8 ])
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050 (0x0050 - 0x0000)
struct FLiveLinkCurveConversionSettings final
{
public:
	TMap<class FString, struct FSoftObjectPath>   CurveConversionAssetMap;                           // 0x0000(0x0050)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0004 (0x0004 - 0x0000)
struct FLiveLinkInterpolationSettings final
{
public:
	float                                         InterpolationOffset;                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x0008 (0x0008 - 0x0000)
struct FLiveLinkTimeSynchronizationSettings final
{
public:
	struct FFrameRate                             FrameRate;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkFrameRate final : public FFrameRate
{
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010 (0x0010 - 0x0000)
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	int32                                         Seconds;                                           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Frames;                                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameRate                     FrameRate;                                         // 0x0008(0x0008)(NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTimeCode final : public FLiveLinkTimeCode_Base_DEPRECATED
{
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008 (0x0008 - 0x0000)
struct FLiveLinkSubjectName final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

