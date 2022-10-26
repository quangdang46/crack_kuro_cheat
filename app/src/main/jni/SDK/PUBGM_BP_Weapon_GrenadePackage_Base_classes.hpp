#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Weapon_GrenadePackage_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_GrenadePackage_Base.BP_Weapon_GrenadePackage_Base_C
// 0x0020 (0x07B0 - 0x0790)
class ABP_Weapon_GrenadePackage_Base_C : public ASTExtraWeapon
{
public:
	class UGrenadeAvatarComponent_BP_C*                GrenadeAvatarComponent_BP;                                // 0x0790(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UThrowableWeaponCrossHairComponent*          ThrowableWeaponCrossHair;                                 // 0x0794(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponAnimList_Grenade_C*                   WeaponAnimList_Grenade;                                   // 0x0798(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x079C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponEntity*                               WeaponEntity;                                             // 0x07A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponSpecificHandler*                      WeaponSpecificHandler;                                    // 0x07A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateDefault*                         WeaponStateDefault;                                       // 0x07A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateManager*                         WeaponStateManager;                                       // 0x07AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_GrenadePackage_Base.BP_Weapon_GrenadePackage_Base_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

