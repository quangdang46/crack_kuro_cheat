#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_KillerTracker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KillerTracker.BP_KillerTracker_C
// 0x000C (0x035C - 0x0350)
class ABP_KillerTracker_C : public AKillerTracker
{
public:
	class UCameraComponent*                            Camera;                                                   // 0x0350(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_KillerTracker.BP_KillerTracker_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

