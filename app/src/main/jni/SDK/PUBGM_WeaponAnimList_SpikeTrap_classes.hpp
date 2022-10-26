#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_WeaponAnimList_SpikeTrap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAnimList_SpikeTrap.WeaponAnimList_SpikeTrap_C
// 0x0000 (0x01F0 - 0x01F0)
class UWeaponAnimList_SpikeTrap_C : public UWeaponAnimList_Grenade_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponAnimList_SpikeTrap.WeaponAnimList_SpikeTrap_C");
		return pStaticClass;
	}

};


}

