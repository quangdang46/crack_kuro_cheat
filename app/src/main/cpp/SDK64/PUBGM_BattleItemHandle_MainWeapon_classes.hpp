#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BattleItemHandle_MainWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C
// 0x0170 (0x0791 - 0x0621)
class UBattleItemHandle_MainWeapon_C : public UBattleItemHandleWeaponBase_Handle_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0628(0x0008) (Transient, DuplicateTransient)
	class UWeaponManagerComponent*                     WeaponManager;                                            // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       socket;                                                   // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBattleItemHandleBase*                       CharacterItemHandle;                                      // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0648(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponAttachmentSlot>               AvailableWeaponAttachment;                                // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ASTExtraWeapon*                              TargetWeaponActor;                                        // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot1Name;                                       // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MainLogicSlot2Name;                                       // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, bool>            WeaponAttachmentSockTypeList;                             // 0x0680(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      BulletWrapperClass;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EWeaponAttachmentSocketType, class UBattleItemHandle_WeapAttachment_C*> EquipedWeapAttachments;                                   // 0x06D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bResetInitBulletInBullet;                                 // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPistol;                                                // 0x0729(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x072A(0x0006) MISSED OFFSET
	struct FName                                       SubLogicSlotName;                                         // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBattleItemPickupInfo                       BattleIItemHandlePickInfo;                                // 0x0738(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsAttachPendant;                                          // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_MainWeapon.BattleItemHandle_MainWeapon_C");
		return pStaticClass;
	}


	void AutoEquipAttachmentsInArray(bool bReplaceUse, TArray<class UBattleItemHandleBase*>* Array);
	void ReturnMultiBullet(int WantReturnCount);
	void GetWrapperClass(bool* found, class UClass** WrapperClass);
	void GetBulletWrapperClass(int BulletID, bool* found, class UClass** WrapperClass);
	void GetWeaponClass(bool* found, class UClass** WeaponClass);
	void CreateVirtualPendantItemHandle(const struct FItemDefineID& ItemDefineID, class UBattleItemHandleBase** ItemHandle);
	void AutoEquipPendant();
	void EquipPendant(int pendantID);
	void CheckPendantCanAttach(bool* CanAttach);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void AutoEquipAttachments();
	void ReturnBullets(int Count);
	void UpdateEquipedAttach(EWeaponAttachmentSocketType WeapAttachSockType, class UBattleItemHandle_WeapAttachment_C* WeapAttachItemHandle, bool IsEquip);
	void LocalHandleDisuse(EBattleItemDisuseReason Reason);
	void CreateWrapperOnGround();
	void GetAvailableTargetLogicSocketName(const struct FName& TargetSocket, struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void GetAvailableInstantLogicSocketName(struct FName* Ret, bool* bNeedPutDownOldWeapon, bool* bAutoUse);
	void JudgeHasTargetAttachmentSlot(int AttachBPID, EWeaponAttachmentSocketType AttachType, class UBackpackWeaponAttachHandle* AttachHandle, bool CanSwap, int AttachResID, bool* canEquip, bool* HasOcupied, bool* CanReplace);
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* pickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	void ReturnAllBullets();
	void LocalAutoEquipAttachments();
	void ExecuteUbergraph_BattleItemHandle_MainWeapon(int EntryPoint);
};


}

