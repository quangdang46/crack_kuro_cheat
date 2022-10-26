#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_Rifle_SCAR_10001_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_SCAR_10001.BP_Rifle_SCAR_10000_C
// 0x0008 (0x0A88 - 0x0A80)
class ABP_Rifle_SCAR_10000_C : public ABP_LobbyWeapon_C
{
public:
	class ULobbyWeaponAnimList_Rifle_C*                LobbyWeaponAnimList_Rifle;                                // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_SCAR_10001.BP_Rifle_SCAR_10000_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

