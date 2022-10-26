#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_bp_camera_manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_camera_manager.bp_camera_manager_C
// 0x005C (0x036C - 0x0310)
class Abp_camera_manager_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_LobbyCameraManager_ExtraData;                          // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              BP_LobbyCamera_BlendTime_f;                               // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LobbyCameraManager_ClassPath;                          // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CameraManager_FullscreenCameraData BP_STRUCT_CameraManager_FullscreenCameraData;             // 0x0330(0x0014) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CameraManager_DefaultCameraData  BP_STRUCT_CameraManager_DefaultCameraData;                // 0x0344(0x0008) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CameraManager_EnlargeLensCameraData BP_STRUCT_CameraManager_EnlargeLensCameraData;            // 0x034C(0x0014) (Edit, BlueprintVisible)
	int                                                BP_MallFullscreenRootCameraID;                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentCameraAdapt;                                    // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_camera_manager.bp_camera_manager_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

