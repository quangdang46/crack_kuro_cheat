#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_WeaponAnimList_Rifle_M16A4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponAnimList_Rifle_M16A4.WeaponAnimList_Rifle_M16A4_C
// 0x0000 (0x01F0 - 0x01F0)
class UWeaponAnimList_Rifle_M16A4_C : public UUAECharacterAnimListComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass WeaponAnimList_Rifle_M16A4.WeaponAnimList_Rifle_M16A4_C");
		return pStaticClass;
	}

};


}

