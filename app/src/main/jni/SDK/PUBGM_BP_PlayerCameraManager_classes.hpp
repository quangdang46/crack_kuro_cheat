#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_PlayerCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerCameraManager.BP_PlayerCameraManager_C
// 0x0000 (0x1AB0 - 0x1AB0)
class ABP_PlayerCameraManager_C : public ASTPlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCameraManager.BP_PlayerCameraManager_C");
		return pStaticClass;
	}

};


}

