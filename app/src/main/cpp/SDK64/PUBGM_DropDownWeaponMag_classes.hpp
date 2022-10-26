#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_DropDownWeaponMag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DropDownWeaponMag.DropDownWeaponMag_C
// 0x002A (0x03C2 - 0x0398)
class ADropDownWeaponMag_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Up;                                                       // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           Down;                                                     // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mag;                                                      // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PendingDestroy;                                           // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckRollDown;                                            // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass DropDownWeaponMag.DropDownWeaponMag_C");
		return pStaticClass;
	}


	void SetPendingDestroyState(bool isPendingDestroy);
	void SetCollisionEnable(bool Enable);
	void SetVisible(bool Visible, class APawn* Owner);
	void SetSimulatePhysics(bool Enable);
	void SetMagMesh(class UStaticMesh* Mesh);
	void UserConstructionScript();
	void WaitforDestroy(float leftTime);
	void ExecuteUbergraph_DropDownWeaponMag(int EntryPoint);
};


}

