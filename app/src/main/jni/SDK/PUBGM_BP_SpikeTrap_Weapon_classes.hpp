#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SpikeTrap_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C
// 0x0024 (0x07B4 - 0x0790)
class ABP_SpikeTrap_Weapon_C : public ASTExtraWeapon_Throw
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0004) (Transient, DuplicateTransient)
	class UUAEMeshComponent*                           UAEMesh;                                                  // 0x0794(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponAnimList_SpikeTrap_C*                 WeaponAnimList_SpikeTrap;                                 // 0x0798(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ThrowComponent_C*                        BP_ThrowComponent;                                        // 0x079C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UThrowableWeaponCrossHairComponent*          ThrowableWeaponCrossHair;                                 // 0x07A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponEntity*                               WeaponEntity;                                             // 0x07A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponSpecificHandler*                      WeaponSpecificHandler;                                    // 0x07A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateDefault*                         WeaponStateDefault;                                       // 0x07AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponStateManager*                         WeaponStateManager;                                       // 0x07B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SpikeTrap_Weapon.BP_SpikeTrap_Weapon_C");
		return pStaticClass;
	}


	void HideAvatar(bool NewHidden);
	void Vehicle(EThrowState CurrentState);
	EUTSkillEntry GetSkillEntryForMeleeWeapon(bool IsPressed);
	void UserConstructionScript();
	void HandleThrowStateChanged(EThrowState* NewState, EThrowState* PrevState);
	void ReceiveBeginPlay();
	void OnDetachedFromVehicle_Event_1(class ASTExtraVehicleBase* LastVehicle);
	void OnWeaponChangeStateCommon_Event_1(TEnumAsByte<enum EFreshWeaponStateType> LastState, TEnumAsByte<enum EFreshWeaponStateType> NewState);
	void OnAttachedToVehicle_Event_1(class ASTExtraVehicleBase* InVehicle);
	void ExecuteUbergraph_BP_SpikeTrap_Weapon(int EntryPoint);
};


}

