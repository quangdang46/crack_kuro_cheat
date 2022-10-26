#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Grenade_StickyBomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C
// 0x0034 (0x0544 - 0x0510)
class ABP_Grenade_StickyBomb_C : public AEliteProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0004) (Transient, DuplicateTransient)
	class UAkComponent*                                AkComponent;                                              // 0x0514(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FExplosionFinderWrapper                     RadialTargetsFinder;                                      // 0x0518(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProjectileExplosionNoise                   Noise;                                                    // 0x051C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PreExplosionSoundDelayTime;                               // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_StickyBomb.BP_Grenade_StickyBomb_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void ReceiveProjectileExplodedEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Grenade_StickyBomb(int EntryPoint);
};


}

