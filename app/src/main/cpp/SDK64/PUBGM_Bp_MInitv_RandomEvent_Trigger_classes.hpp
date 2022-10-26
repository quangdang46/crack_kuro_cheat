#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Bp_MInitv_RandomEvent_Trigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C
// 0x0018 (0x03B0 - 0x0398)
class ABp_MInitv_RandomEvent_Trigger_C : public AActor
{
public:
	class UBoxComponent*                               Box;                                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Bp_MInitv_RandomEvent_Trigger.Bp_MInitv_RandomEvent_Trigger_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

