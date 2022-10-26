#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Rifle_SCAR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_SCAR.BP_Rifle_SCAR_C
// 0x000C (0x1179 - 0x116D)
class ABP_Rifle_SCAR_C : public ABP_ShootWeaponBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x116D(0x0003) MISSED OFFSET
	class UWeaponAnimList_Rifle_SCAR_C*                WeaponAnimList_Rifle_SCAR;                                // 0x1170(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim_1;                                           // 0x1178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_SCAR.BP_Rifle_SCAR_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

