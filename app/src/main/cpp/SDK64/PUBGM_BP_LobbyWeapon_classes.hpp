#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_LobbyWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LobbyWeapon.BP_LobbyWeapon_C
// 0x0080 (0x0A80 - 0x0A00)
class ABP_LobbyWeapon_C : public ASTExtraLobbyWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)
	class UWeaponAvatarComp_BP_C*                      WeaponAvatarComp_BP;                                      // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldBack;                                                // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	TMap<struct FString, struct FTransform>            WeaponAttachRelativeTransformMap;                         // 0x0A18(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               WeaponMeshAndMatLoaded;                                   // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAnimLoaded;                                         // 0x0A69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0A6A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponAllAssetsLoaded;                                  // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyWeapon.BP_LobbyWeapon_C");
		return pStaticClass;
	}


	void RequestWeaponDIYData(const struct FString& PlayerUID, int WeaponAvatarID, int DIYPlanID);
	void EquipWeaponPandentByPandentId(int pendantID, EWeaponPendantSocketType PendantSocketType);
	void OnAsyncLoadLobbyWeaponAnimDone();
	void CheckWeaponAssetsAllLoaded();
	void ResetWeaponLoadedStatus();
	void OnAsyncLoadLobbyWeaponMeshDone();
	struct FTransform GetWeaponAttachToBackRelativeTransformByBagLevel_Lobby(int* Level, int* SideType);
	void InitMesh(class UBattleItemHandleBase* Handle);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LobbyWeapon(int EntryPoint);
	void OnWeaponAllAssetsLoaded__DelegateSignature(class ABP_LobbyWeapon_C* BPLobbyWeapon);
};


}

