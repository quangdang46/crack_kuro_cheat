#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CS_DamageCameraShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_DamageCameraShake.CS_DamageCameraShake_C
// 0x0000 (0x0150 - 0x0150)
class UCS_DamageCameraShake_C : public USTDamageCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_DamageCameraShake.CS_DamageCameraShake_C");
		return pStaticClass;
	}

};


}

