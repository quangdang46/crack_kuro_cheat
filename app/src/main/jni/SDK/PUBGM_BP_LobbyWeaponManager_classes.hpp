#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_LobbyWeaponManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyWeaponManager.BP_LobbyWeaponManager_C
// 0x0000 (0x02B8 - 0x02B8)
class UBP_LobbyWeaponManager_C : public ULobbyWeaponManagerComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyWeaponManager.BP_LobbyWeaponManager_C");
		return pStaticClass;
	}


	void SetWeaponVisibility(bool bHide);
	void SetWeaponPendantSocketType(class ASTExtraWeapon* Target, EWeaponPendantSocketType SocketType);
	void OnWeaponEquipDone();
	void CreateWeapon(int inInt, class ASTExtraWeapon** Weapon, class UBattleItemHandleBase** Handle);
	class UClass* GetLobbyWeaponClass(int InWeaponAvatarID);
	class ASTExtraWeapon* CreateWeaponAndChangeSkin(int* WeaponSkinID, bool* bSync);
};


}

