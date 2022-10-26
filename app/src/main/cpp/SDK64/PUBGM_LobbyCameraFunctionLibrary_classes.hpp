#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyCameraFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C
// 0x0000 (0x0098 - 0x0098)
class ULobbyCameraFunctionLibrary_C : public UBlueprintFunctionOverride
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyCameraFunctionLibrary.LobbyCameraFunctionLibrary_C");
		return pStaticClass;
	}


	static void LevelSequence_ExecuteStartCallback(class UObject* __WorldContext);
	static void GetCurrentCameraActor(class UObject* __WorldContext, class ACameraActor** CameraActor);
	static void LevelSequence_ExecuteEndCallback(class UObject* __WorldContext);
	static void SwitchCamera_Only(int CameraID, float blendTime, class UObject* __WorldContext);
	static class ULevelSequencePlayer* CreateLevelSequencePlayerAndActor(class ULevelSequence* level_sequence, class UObject* __WorldContext, class ALevelSequenceActor** OutActor);
	static void SwitchCamera(int NewCameraID, float blendTime, class UObject* __WorldContext);
};


}

