#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Weapon_GrenadePackage_Firstaid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_GrenadePackage_Firstaid.BP_Weapon_GrenadePackage_Firstaid_C
// 0x0000 (0x07B0 - 0x07B0)
class ABP_Weapon_GrenadePackage_Firstaid_C : public ABP_Weapon_GrenadePackage_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_GrenadePackage_Firstaid.BP_Weapon_GrenadePackage_Firstaid_C");
		return pStaticClass;
	}

};


}

