#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_VehicleAvatarComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C
// 0x0039 (0x0601 - 0x05C8)
class UVehicleAvatarComponent_BP_C : public UVehicleAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x05D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C.CurLightEffect
	class UParticleSystemComponent*                    LightEffect;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VehicleBroken;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C");
		return pStaticClass;
	}


	struct FName GetReflectionCubeName_Lobby();
	void TryAddLightEffect();
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
	void OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B(class UObject* Loaded);
	void ReceiveBeginPlay();
	void VehicleAvatarEquiped();
	void OnAddLightEffect();
	void VehicleFPPMeshLoaded();
	void LoadedBrokenMat();
	void ClearVehicleLightEffect();
	void ExecuteUbergraph_VehicleAvatarComponent_BP(int EntryPoint);
};


}

