#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimationComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C
// 0x0011 (0x0121 - 0x0110)
class ULobbyWeaponAnimationComponent_C : public UActorComponent
{
public:
	class ABP_PlayerLobbyPawn_C*                       LobbyPlayer;                                              // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ALobbyWeaponAnimationActor_C*                WeaponAnimationActor;                                     // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnable;                                                 // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyWeaponAnimationComponent.LobbyWeaponAnimationComponent_C");
		return pStaticClass;
	}


	void SyncMontage(float Position);
	void StopLobbyWeaponAnimation();
	void PlayOnAction(int ActionID, bool isMVPMotion);
	void PlayLobbyWeaponAnimationByID(int WeaponAnimationID, bool isMVPMotion);
	void Destroy();
	void SetLobbyPlayerObj(class ABP_PlayerLobbyPawn_C* LobbyPlayerObj);
};


}

