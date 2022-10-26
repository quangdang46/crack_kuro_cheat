#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_STExtraWheeledVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C
// 0x003D (0x119D - 0x1160)
class ABP_STExtraWheeledVehicle_C : public ASTExtraWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1160(0x0004) (Transient, DuplicateTransient)
	class UBP_VehicleShowFrameComp_C*                  BP_VehicleShowFrameComp;                                  // 0x1164(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleAvatarComponent_BP_C*                VehicleAvatarComponent_BP;                                // 0x1168(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x116C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSpringArmComponent*                  vehicleSpringArm;                                         // 0x1170(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlayingEngineAk;                                        // 0x1174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1175(0x0003) MISSED OFFSET
	struct FName                                       TailLightParamName;                                       // 0x1178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FrontLightParamName;                                      // 0x1180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPPBoostLightParamName;                                   // 0x1188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEngineStarted;                                           // 0x1190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1191(0x0003) MISSED OFFSET
	float                                              LastOverlapShakeTime;                                     // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverlapShakeInterval;                                     // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLobbyShow;                                               // 0x119C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_STExtraWheeledVehicle.BP_STExtraWheeledVehicle_C");
		return pStaticClass;
	}


	void HandleRepCandidateAvatar();
	void HandleSeatChanged(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIndex, ESTExtraVehicleSeatType NewSeatType, int NewSeatIndex);
	void HandleAvatarEquiped();
	void HandleSeatOccupiersChanged();
	void HandleDriverChanged(class ASTExtraPlayerCharacter* LastDriver, class ASTExtraPlayerCharacter* NewDriver);
	void OnClientVehicleHealthStateChangedToDestory();
	void CreateDMI();
	void SetDMIParam(class UMaterialInstanceDynamic* Dim, const struct FName& Name, float Value);
	void UpdateExhaustFx(const struct FName& ExhaustName);
	void OnClientVehicleHealthStateChanged(ESTExtraVehicleHealthState VehicleHealthState);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatAttachDelegate__DelegateSignature(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType SeatType, int SeatIdx);
	void OnEngineStart();
	void OnEngineStop();
	void OnSetTailLightValue(float* LightValue);
	void OnBoostingChanged();
	void VehicleMeshChanged();
	void BPPlayOverlapDamageCameraShake();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void AdvanceVehicleMeshChanged();
	void BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_1_DriverChangeDelegate__DelegateSignature(class ASTExtraPlayerCharacter* OldChara, class ASTExtraPlayerCharacter* NewChara);
	void BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatOccupiersChangedDelegate__DelegateSignature();
	void BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleAvatarEquiped__DelegateSignature();
	void BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_VehicleLoadedFPPMesh__DelegateSignature();
	void BndEvt__VehicleSeats_K2Node_ComponentBoundEvent_0_SeatChangeDelegate__DelegateSignature(class ASTExtraPlayerCharacter* Character, ESTExtraVehicleSeatType LastSeatType, int LastSeatIdx, ESTExtraVehicleSeatType NewSeatType, int NewSeatIdx);
	void BndEvt__VehicleAvatarComponent_BP_K2Node_ComponentBoundEvent_0_OnServerAvatarEquipedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_STExtraWheeledVehicle(int EntryPoint);
};


}

