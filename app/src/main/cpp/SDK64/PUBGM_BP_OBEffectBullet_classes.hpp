#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_OBEffectBullet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OBEffectBullet.BP_OBEffectBullet_C
// 0x0010 (0x0408 - 0x03F8)
class ABP_OBEffectBullet_C : public AOBEffectBullet
{
public:
	class UParticleSystemComponent*                    P_signal_bullet_01;                                       // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_OBEffectBullet.BP_OBEffectBullet_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

