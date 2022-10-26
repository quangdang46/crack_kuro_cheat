#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_LobbyWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyWeapon.BP_LobbyWeapon_C
// 0x0058 (0x07E8 - 0x0790)
class ABP_LobbyWeapon_C : public ASTExtraLobbyWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0004) (Transient, DuplicateTransient)
	class UWeaponAvatarComp_BP_C*                      WeaponAvatarComp_BP;                                      // 0x0794(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldBack;                                                // 0x0798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0799(0x0003) MISSED OFFSET
	TMap<struct FString, struct FTransform>            WeaponAttachRelativeTransformMap;                         // 0x079C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isAutoTest;                                               // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponMeshAndMatLoaded;                                   // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSyncLoadWeapon;                                         // 0x07DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAnimLoaded;                                         // 0x07DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWeaponAllAssetsLoaded;                                  // 0x07DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyWeapon.BP_LobbyWeapon_C");
		return pStaticClass;
	}


	void OnAsyncLoadLobbyWeaponAnimDone();
	void CheckWeaponAssetsAllLoaded();
	void ResetWeaponLoadedStatus();
	void OnAsyncLoadLobbyWeaponAssetsDone();
	struct FTransform GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby(int* Level, int* SideType);
	void InitMesh(class UBattleItemHandleBase* Handle);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LobbyWeapon(int EntryPoint);
	void OnWeaponAllAssetsLoaded__DelegateSignature(class ASTExtraWeapon* Weapon);
};


}

