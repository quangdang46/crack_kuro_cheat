#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_Rifle_M16A4_10001_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rifle_M16A4_10001.BP_Rifle_M16A4_10000_C
// 0x0004 (0x07EC - 0x07E8)
class ABP_Rifle_M16A4_10000_C : public ABP_LobbyWeapon_C
{
public:
	class ULobbyWeaponAnimList_Rifle_C*                LobbyWeaponAnimList_Rifle;                                // 0x07E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_Rifle_M16A4_10001.BP_Rifle_M16A4_10000_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

