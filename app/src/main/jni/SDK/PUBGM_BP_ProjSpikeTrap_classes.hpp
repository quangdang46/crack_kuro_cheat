#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ProjSpikeTrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProjSpikeTrap.BP_ProjSpikeTrap_C
// 0x0004 (0x0524 - 0x0520)
class ABP_ProjSpikeTrap_C : public AEliteProjectile_SpikeTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ProjSpikeTrap.BP_ProjSpikeTrap_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void ReceiveProjectileBouncedEvent(struct FHitResult* ImpactResult, struct FVector* ImpactVelocity);
	void ExecuteUbergraph_BP_ProjSpikeTrap(int EntryPoint);
};


}

