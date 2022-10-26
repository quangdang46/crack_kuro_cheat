#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CameraSettingComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CameraSettingComponent.CameraSettingComponent_C.SaveCurCameraSetting
struct UCameraSettingComponent_C_SaveCurCameraSetting_Params
{
	class USpringArmComponent*                         SprintArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CameraSettingComponent.CameraSettingComponent_C.LerpCameraSettings
struct UCameraSettingComponent_C_LerpCameraSettings_Params
{
	float                                              LerpAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTR_CameraSetting                          CameraSettings;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USpringArmComponent*                         SpringArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

