#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_ActorFilter_ProjGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActorFilter_ProjGrenade.ActorFilter_ProjGrenade_C
// 0x0000 (0x0050 - 0x0050)
class UActorFilter_ProjGrenade_C : public UActorFilter_Visibility
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass ActorFilter_ProjGrenade.ActorFilter_ProjGrenade_C");
		return pStaticClass;
	}


	bool IsTargetBlock(class AActor** InHitActor, class AActor** InTarget, struct FActorFilterParams* FilterParams);
};


}

