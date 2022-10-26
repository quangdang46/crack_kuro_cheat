#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Rifle_M16A4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_M16A4.BP_Rifle_M16A4_C
// 0x0008 (0x0D79 - 0x0D71)
class ABP_Rifle_M16A4_C : public ABP_ShootWeaponBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D71(0x0003) MISSED OFFSET
	class UWeaponAnimList_Rifle_M16A4_C*               WeaponAnimList_Rifle_M16A4;                               // 0x0D74(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIdleAnim_1;                                           // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_M16A4.BP_Rifle_M16A4_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

