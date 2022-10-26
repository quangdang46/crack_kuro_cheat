#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C
// 0x0100 (0x0580 - 0x0480)
class ABP_LobbyVehicle_C : public ASTExtraLobbyVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	class UVehicleAdvanceAvatarComp_BP_C*              VehicleAdvanceAvatarComp_BP;                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleAvatarComponent_BP_C*                VehicleAvatarComponent_BP;                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI;                                                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FPPDynamicMat;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TailLightParamName;                                       // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FrontLightParamName;                                      // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FPPBoostLightParamName;                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                vehicleResId;                                             // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DMI_TailLight;                                            // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_AdvanceVehicle;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighlightTryTime;                                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x04DC(0x0050) UNKNOWN PROPERTY: SetProperty BP_LobbyVehicle.BP_LobbyVehicle_C.SkyMotors
	unsigned char                                      UnknownData03[0x50];                                      // 0x0530(0x0050) UNKNOWN PROPERTY: SetProperty BP_LobbyVehicle.BP_LobbyVehicle_C.SpecialMotors

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C");
		return pStaticClass;
	}


	void SetHighLight(float invincible, float FreExp, float Speed);
	int GetDefaultAvatarID(int* InAvatarID);
	void SetDMIParam(class UMaterialInstanceDynamic* Target, const struct FName& Name, float Value);
	void GetVehicleMasterPath(int VehicleSkinID, struct FString* MeshBasePath);
	bool ClearAllVehicleItems();
	bool PreChangeVehicleAvatar_Old(int* InAvatarID, int* InAdvanceAvatarID);
	bool PutOffVehicleSlot(EVehicleSlotType* InSlotType);
	bool PutOffVehicleItem(int* InModelID);
	bool PutOnVehicleItem(int* InModelID, int* ColorID, int* PatternID, int* ParticleID);
	void GetNewVehicleMasterAnimBPPath(int InSkinID, struct FString* AnimBpPath);
	void GetNewVehilceMasterPath(int VehicleSkinID, struct FString* MeshBasePath);
	bool PreChangeVehicleAvatar(int* InAvatarID, int* InAdvanceAvatarID);
	bool ClearAllVehicleStyleID();
	bool PutOffVehicleStyleID(int* InStyleID);
	bool PutOnVehicleStyleID(int* InStyleID);
	void UserConstructionScript();
	void TrySetHighlight(float invincible, float Freq, float Speed);
	void ExecuteUbergraph_BP_LobbyVehicle(int EntryPoint);
};


}

