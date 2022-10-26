#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BackpackSys_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BackpackSys.BackpackSys_C
// 0x003D (0x00B5 - 0x0078)
class UBackpackSys_C : public ULuaBluepirntSys
{
public:
	TMap<int, EWeaponAttachmentSocketType>             WeaponAttachPos;                                          // 0x0078(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bPickupListPanelMoveOut;                                  // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BackpackSys.BackpackSys_C");
		return pStaticClass;
	}


	bool IsLocalpositionInBorder(const struct FVector2D& LocalCoordinate, class UWidget* Border);
	void GetAddExtraWidget(TMap<struct FString, struct FString>* WidgetMap);
	void CheckNeedVehicleBackPack(bool* need);
	void IsGunSupportAttachByDefine(const struct FItemDefineID& gunDefine, const struct FItemDefineID& attachDefine, bool* support);
	void IsGunSupportAttachByRes(int gunResID, int AttachResID, bool* support);
	void GetWeaponSupportSocket(int WeaponId, TArray<EWeaponAttachmentSocketType>* socketList);
	void GetWeaponSupportAttachResID(int WeaponId, TArray<int>* attachID);
	void GetWeaponAttachPosByResID(int resID, EWeaponAttachmentSocketType* socket);
	void AddToWeaponAttachPos(EWeaponAttachmentSocketType socket, int* attachID);
};


}

