#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_VehicleUser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C
// 0x0039 (0x02E9 - 0x02B0)
class UBP_VehicleUser_C : public UVehicleUserComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0004) (Transient, DuplicateTransient)
	bool                                               AxisMoveForwardFreezed;                                   // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AxisMoveRightFreezed;                                     // 0x02B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	float                                              Fuel;                                                     // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HP;                                                       // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPMax;                                                    // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutMoveRightRate;                                         // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawSpeed;                                                 // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESTExtraVehicleSeatType                            SeatType;                                                 // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ESurviveWeaponPropSlot>           LastWeaponSlot;                                           // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02D2(0x0002) MISSED OFFSET
	float                                              UnmanedFuel;                                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedFuelMax;                                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedHP;                                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedHPMax;                                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnmanedCallBackTime;                                      // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowUnmanedLowPowerTips;                                 // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_VehicleUser.BP_VehicleUser_C");
		return pStaticClass;
	}


	void EditorAxisMoveFreezed();
	void SetUAVSpeedPercent(float SpeedPercent);
	void SetUAVCameraMode(bool FreeCamera);
	void OnUnmanedVehicleHPChanged(float HP, float MaxHp);
	void OnUnmanedVehicleFuelChanged(float Fuel, float MacFuel);
	void SendUIMsgWhenChangeSeatCompleted();
	void SendUIMsgWhenEnterVehicleCompleted();
	void SendUIMsgWhenExitVehicleCompleted();
	void GetVehicleGoStraight(float* VehicleGoStraight);
	void SetHelicopterCameraMode(bool IsFreeCamera);
	void HandleCharacterUnequipWeapon(class ASTExtraWeapon* NewParam);
	void HandleCharacterEquipWeapon(class ASTExtraWeapon* NewWeapon, TEnumAsByte<enum ESurviveWeaponPropSlot> Slot);
	void SwitchToLastWeapon();
	void CacheLastUseWeaponSlot();
	void SetPlayMusic(bool Enabled);
	void SetDrivingViewMode(int int_mode);
	void ResetInputs();
	void OnMotorcycleContactChanged();
	void FixGoStraight(float InMoveRightRate, float GoStraightThreshold, float* OutMoveRightRate);
	void OnUpdateSeatGUI();
	void OnVehicleWheelsHPChanged();
	void StopPlayerAutoSprint();
	void OnVehicleFuelChanged(float Fuel, float FuelMax);
	void OnVehicleHPChanged(float HP, float HPMax);
	void GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController);
	void ExitVehicle();
	void EnterVehicle(bool IsDriver);
	void OnEnterVehicleCompleted(ESTExtraVehicleSeatType* SeatType);
	void OnExitVehicleCompleted();
	void ReceiveBeginPlay();
	void OnChangeVehicleSeatCompleted(ESTExtraVehicleSeatType* SeatType);
	void OnCurrrentClosestVehicleChanged();
	void EventSetDrivingViewMode(int IntValue);
	void OnInputAxisMoveForward(float* Rate);
	void OnInputAxisMoveRight(float* Rate);
	void EventSetCarMusicSwitch(bool BoolValue);
	void EventSetHelicopterFreeCamera(bool BoolValue);
	void OnShutDownUnmannedVehicleCompleted(float* cdTime);
	void OnLaunchUnmannedVehicleCompleted();
	void OnPauseUnmannedVehicleCompleted();
	void EventSetUAVFreeCamera(bool BoolValue);
	void EventSetSpeedPercent(float FloatValue);
	void EventUAVSingleOperate(bool BoolValue);
	void ExecuteUbergraph_BP_VehicleUser(int EntryPoint);
};


}

