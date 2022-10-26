#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_ScriptBinder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ScriptBinder.BP_ScriptBinder_C
// 0x0008 (0x0468 - 0x0460)
class ABP_ScriptBinder_C : public ALuaActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ScriptBinder.BP_ScriptBinder_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

