#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyWeaponAnimationActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C
// 0x0028 (0x03C0 - 0x0398)
class ALobbyWeaponAnimationActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                WeaponMontage;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DelayTime;                                                // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalTime;                                                // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyWeaponAnimationActor.LobbyWeaponAnimationActor_C");
		return pStaticClass;
	}


	void PlayLobbyAnimation();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAnimEnd(class UAnimMontage* Montage, bool bInterrupted);
	void SetAnimTimeInfo(int DelayTime, int TotalTime);
	void ExecuteUbergraph_LobbyWeaponAnimationActor(int EntryPoint);
};


}

