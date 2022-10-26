#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_WeaponAnimList_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAnimList_Grenade.WeaponAnimList_Grenade_C
// 0x0000 (0x01F0 - 0x01F0)
class UWeaponAnimList_Grenade_C : public UUAECharacterAnimListComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponAnimList_Grenade.WeaponAnimList_Grenade_C");
		return pStaticClass;
	}

};


}

