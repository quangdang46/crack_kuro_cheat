#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CameraShake_GrenadeDamage_Front_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_GrenadeDamage_Front.CameraShake_GrenadeDamage_Front_C
// 0x0000 (0x0140 - 0x0140)
class UCameraShake_GrenadeDamage_Front_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraShake_GrenadeDamage_Front.CameraShake_GrenadeDamage_Front_C");
		return pStaticClass;
	}

};


}

