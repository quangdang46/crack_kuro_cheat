#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_CS_WeapGun_Rifle_556_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_WeapGun_Rifle_556_01.CS_WeapGun_Rifle_556_01_C
// 0x0000 (0x0140 - 0x0140)
class UCS_WeapGun_Rifle_556_01_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass CS_WeapGun_Rifle_556_01.CS_WeapGun_Rifle_556_01_C");
		return pStaticClass;
	}

};


}

