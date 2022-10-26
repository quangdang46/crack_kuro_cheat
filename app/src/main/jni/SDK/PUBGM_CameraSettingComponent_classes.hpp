#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CameraSettingComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraSettingComponent.CameraSettingComponent_C
// 0x0014 (0x00DC - 0x00C8)
class UCameraSettingComponent_C : public UActorComponent
{
public:
	float                                              Current_Target_Arm_Length;                                // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCameraLagSpeed;                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentSocketOffset;                                      // 0x00D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraSettingComponent.CameraSettingComponent_C");
		return pStaticClass;
	}


	void SaveCurCameraSetting(class USpringArmComponent* SprintArm);
	void LerpCameraSettings(float LerpAlpha, const struct FSTR_CameraSetting& CameraSettings, class USpringArmComponent* SpringArm);
};


}

