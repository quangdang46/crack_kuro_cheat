#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_CameraShake_GrenadeDamage_Back_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_GrenadeDamage_Back.CameraShake_GrenadeDamage_Back_C
// 0x0000 (0x0140 - 0x0140)
class UCameraShake_GrenadeDamage_Back_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraShake_GrenadeDamage_Back.CameraShake_GrenadeDamage_Back_C");
		return pStaticClass;
	}

};


}

