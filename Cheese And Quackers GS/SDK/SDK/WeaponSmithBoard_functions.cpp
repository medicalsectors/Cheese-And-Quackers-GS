﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: WeaponSmithBoard

#include "Basic.hpp"

#include "WeaponSmithBoard_classes.hpp"
#include "WeaponSmithBoard_parameters.hpp"


namespace SDK
{

// Function WeaponSmithBoard.WeaponSmithBoard_C.ExecuteUbergraph_WeaponSmithBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::ExecuteUbergraph_WeaponSmithBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "ExecuteUbergraph_WeaponSmithBoard");

	Params::WeaponSmithBoard_C_ExecuteUbergraph_WeaponSmithBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.OnAsyncLoadComplete
// (Event, Public, BlueprintEvent)

void AWeaponSmithBoard_C::OnAsyncLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "OnAsyncLoadComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "CameraChanged");

	Params::WeaponSmithBoard_C_CameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateWeaponBoard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponSmithBoardOrganizationEnum       Organization                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::PopulateWeaponBoard(EWeaponSmithBoardOrganizationEnum Organization)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateWeaponBoard");

	Params::WeaponSmithBoard_C_PopulateWeaponBoard Parms{};

	Parms.Organization = Organization;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.LoadAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UStaticMesh>       StaticMeshAsset                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UStaticMeshComponent*             MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::LoadAsync(TSoftObjectPtr<class UStaticMesh> StaticMeshAsset, class UStaticMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "LoadAsync");

	Params::WeaponSmithBoard_C_LoadAsync Parms{};

	Parms.StaticMeshAsset = StaticMeshAsset;
	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponSmithBoard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.OnLoaded_2931F78441AF4AD6B643BEB635F904F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeaponSmithBoard_C::OnLoaded_2931F78441AF4AD6B643BEB635F904F1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "OnLoaded_2931F78441AF4AD6B643BEB635F904F1");

	Params::WeaponSmithBoard_C_OnLoaded_2931F78441AF4AD6B643BEB635F904F1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Schematic Favs
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Populate_Schematic_Favs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Populate Schematic Favs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Generate StaticMesh Array
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Generate_StaticMesh_Array()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Generate StaticMesh Array");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Ranged
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Populate_Ranged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Populate Ranged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.Populate Skeletal Mesh Slots
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::Populate_Skeletal_Mesh_Slots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "Populate Skeletal Mesh Slots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestRangedWeaponSchematics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    MakeVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::PopulateSceneWithBestRangedWeaponSchematics(bool MakeVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneWithBestRangedWeaponSchematics");

	Params::WeaponSmithBoard_C_PopulateSceneWithBestRangedWeaponSchematics Parms{};

	Parms.MakeVisible = MakeVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithBestMeleeWeaponSchematics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Make_Visible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeaponSmithBoard_C::PopulateSceneWithBestMeleeWeaponSchematics(bool Make_Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneWithBestMeleeWeaponSchematics");

	Params::WeaponSmithBoard_C_PopulateSceneWithBestMeleeWeaponSchematics Parms{};

	Parms.Make_Visible = Make_Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeRangedSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSchematicItem*>*      RangedSchematicsForBoard                               (Parm, OutParm, ZeroConstructor)

void AWeaponSmithBoard_C::RandomizeRangedSchematics(TArray<class UFortSchematicItem*>* RangedSchematicsForBoard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "RandomizeRangedSchematics");

	Params::WeaponSmithBoard_C_RandomizeRangedSchematics Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RangedSchematicsForBoard != nullptr)
		*RangedSchematicsForBoard = std::move(Parms.RangedSchematicsForBoard);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.RandomizeMeleeSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>*        MeleeSchematicsForBoard                                (Parm, OutParm, ZeroConstructor)

void AWeaponSmithBoard_C::RandomizeMeleeSchematics(TArray<class UFortAccountItem*>* MeleeSchematicsForBoard)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "RandomizeMeleeSchematics");

	Params::WeaponSmithBoard_C_RandomizeMeleeSchematics Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MeleeSchematicsForBoard != nullptr)
		*MeleeSchematicsForBoard = std::move(Parms.MeleeSchematicsForBoard);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneFromCustomStoredRangedSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>&        CustomizedRangedWeaponSchematics                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeaponSmithBoard_C::PopulateSceneFromCustomStoredRangedSchematics(TArray<class UFortAccountItem*>& CustomizedRangedWeaponSchematics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneFromCustomStoredRangedSchematics");

	Params::WeaponSmithBoard_C_PopulateSceneFromCustomStoredRangedSchematics Parms{};

	Parms.CustomizedRangedWeaponSchematics = std::move(CustomizedRangedWeaponSchematics);

	UObject::ProcessEvent(Func, &Parms);

	CustomizedRangedWeaponSchematics = std::move(Parms.CustomizedRangedWeaponSchematics);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.PopulateSceneWithCustomStoredMeleeSchematics
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>&        CustomizedMeleeWeaponSchematics                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeaponSmithBoard_C::PopulateSceneWithCustomStoredMeleeSchematics(TArray<class UFortAccountItem*>& CustomizedMeleeWeaponSchematics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "PopulateSceneWithCustomStoredMeleeSchematics");

	Params::WeaponSmithBoard_C_PopulateSceneWithCustomStoredMeleeSchematics Parms{};

	Parms.CustomizedMeleeWeaponSchematics = std::move(CustomizedMeleeWeaponSchematics);

	UObject::ProcessEvent(Func, &Parms);

	CustomizedMeleeWeaponSchematics = std::move(Parms.CustomizedMeleeWeaponSchematics);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomMeleeSchematics
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::GetCustomMeleeSchematics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "GetCustomMeleeSchematics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSmithBoard.WeaponSmithBoard_C.GetCustomRangedSchematics
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponSmithBoard_C::GetCustomRangedSchematics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSmithBoard_C", "GetCustomRangedSchematics");

	UObject::ProcessEvent(Func, nullptr);
}

}

