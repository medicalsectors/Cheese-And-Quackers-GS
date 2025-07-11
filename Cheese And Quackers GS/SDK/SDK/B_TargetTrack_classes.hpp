﻿#pragma once

/*
* SDK generated by Dumper-8
*
* https://github.com/NotTacs/Dumper-8
*/

// Package: B_TargetTrack

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C
// 0x0110 (0x0C20 - 0x0B10)
class AB_TargetTrack_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Target_Move_Loop_Cue;                              // 0x0B18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Target_Move_Stop_Cue;                              // 0x0B20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Target_Move_Start_Cue;                             // 0x0B28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       ProximityTrigger;                                  // 0x0B30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                 ToyOptionsComponent;                               // 0x0B38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TargetAttachPoint;                                 // 0x0B40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Target_Track;                                   // 0x0B48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC; // 0x0B50(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC; // 0x0B54(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B55[0x3];                                      // 0x0B55(0x0003)(Fixing Size After Last Property [ Dumper-8 ])
	class UTimelineComponent*                     TargetMovement;                                    // 0x0B58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             BaseTransformForTarget;                            // 0x0B60(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         LengthScaleSetting;                                // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayAtEndSetting;                                 // 0x0B94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ProximityTriggerSizeSetting;                       // 0x0B98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialMovementDelaySetting;                       // 0x0B9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrackSpeedSetting;                                 // 0x0BA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCurrentlyMoving;                                 // 0x0BA4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AtStartPoint;                                      // 0x0BA5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoopingSetting;                                    // 0x0BA6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA7[0x1];                                      // 0x0BA7(0x0001)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         RotationSetting;                                   // 0x0BA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BAC[0x4];                                      // 0x0BAC(0x0004)(Fixing Size After Last Property [ Dumper-8 ])
	class AB_ShootingTarget_Master_C*             AttachedTarget;                                    // 0x0BB0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             LeftRightTargetBaseMesh;                           // 0x0BB8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>             ForwardBackwardTargetBaseMesh;                     // 0x0BE0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            NewVar_0;                                          // 0x0C08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          IsTargetUp;                                        // 0x0C18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         CurrentMovementState;                              // 0x0C19(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1A[0x2];                                      // 0x0C1A(0x0002)(Fixing Size After Last Property [ Dumper-8 ])
	int32                                         Audio_Speed_Parameter;                             // 0x0C1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_TargetTrack(int32 EntryPoint);
	void ReceiveDestroyed();
	void Stop_Move_Target_Audio();
	void Move_Target_Audio();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void InitializeSettings();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AsyncLoadTargetBase();
	void ReverseTargetMovement();
	void ResumeTargetMovement();
	void AttachedTargetPoppedUp();
	void StopTargetMovement();
	void AttachedTargetKnockedDown();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void MoveTarget();
	void ReceiveBeginPlay();
	void OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded);
	void OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded);
	void TargetMovement__UpdateFunc();
	void TargetMovement__FinishedFunc();
	void GetFinalDestinationOfTarget(struct FVector* Destination);
	float CalculatePlayRate();
	void SetTargetRotationAndBaseMesh();
	void SetTrackLength();
	void OnRep_ServerMoveStartTime();
	void OnRep_IsTargetUp();
	void OnRep_CurrentDirection();
	void OnRep_IsCurrentlyMoving();
	void UpdateForRepNotify();
	void OnRep_CurrentLerpValue();
	void UpdateLerpedPosition(float Alpha);
	void SetMovementState(uint8 State);
	void OnRep_CurrentMovementState();
	void Set_Audio_Speed_Sound(float Target_Speed);

	class UStaticMesh* GetCollisionStaticMesh() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_TargetTrack_C">();
	}
	static class AB_TargetTrack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_TargetTrack_C>();
	}
};

}

