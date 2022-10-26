#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_TDM_HitCameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TDM_HitCameraShake.TDM_HitCameraShake_C
// 0x0000 (0x0140 - 0x0140)
class UTDM_HitCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass TDM_HitCameraShake.TDM_HitCameraShake_C");
		return pStaticClass;
	}

};


}

