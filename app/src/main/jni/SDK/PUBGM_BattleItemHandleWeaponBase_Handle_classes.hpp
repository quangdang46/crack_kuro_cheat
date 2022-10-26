#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BattleItemHandleWeaponBase_Handle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C
// 0x0089 (0x0491 - 0x0408)
class UBattleItemHandleWeaponBase_Handle_C : public UBackpackWeaponHandle
{
public:
	class ASTExtraPlayerController*                    OwningPlayerController;                                   // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASTExtraBaseCharacter*                       OwningCharacter;                                          // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBackpackComponent*                          OwningBackpackComponent;                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0414(0x000C) MISSED OFFSET
	struct FTransform                                  WrapperPutdownTrans;                                      // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SourceWrapperTrans;                                       // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABaseAIController*                           OwningAIController;                                       // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	struct FName                                       TargetLogicSocket;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetAutoUse;                                            // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandleWeaponBase_Handle.BattleItemHandleWeaponBase_Handle_C");
		return pStaticClass;
	}


	void GetBulletNumSaveToWrapper(int* Num);
	void ConditionalAddAdditionalData(TArray<struct FBattleItemAdditionalData>* InAdditionalData);
	void ConditionalAddAdditionalDataToWrapper(class APickUpWrapperActor* PickUpWrapper);
	void GetWeaponClassFromTable(bool* found, class UClass** WeaponClass);
	void EnableWeaponAttachmentBindDropToWeaponWrapper(bool* Out);
	void ParseAdditionalData(const struct FBattleItemPickupInfo& pickupInfo);
	void GetOwingtWeapon(class ASTExtraWeapon** NewParam);
	void SpawnWrapperOnGround(class UClass* WrapperClass, bool bUseRandomLoc, const struct FItemDefineID& InDefineID, class APickUpWrapperActor** TargetWrapper);
	class UWorld* GetWorldInternal();
	bool HandleDisuse(EBattleItemDisuseReason* Reason);
	bool HandleUse(struct FBattleItemUseTarget* Target, EBattleItemUseReason* Reason);
	bool HandleDrop(int* InCount, EBattleItemDropReason* Reason);
	bool HandlePickup(struct FBattleItemPickupInfo* pickupInfo, EBattleItemPickupReason* Reason, TScriptInterface<class UItemContainerInterface>* ItemContainer);
	struct FBattleItemData ExtractItemData();
};


}

