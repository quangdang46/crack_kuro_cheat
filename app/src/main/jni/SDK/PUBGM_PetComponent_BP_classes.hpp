#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_PetComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PetComponent_BP.PetComponent_BP_C
// 0x0068 (0x02E8 - 0x0280)
class UPetComponent_BP_C : public USTExtraFightPetComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0004) (Transient, DuplicateTransient)
	class UClass*                                      SpawnPetClass;                                            // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                                  SpawnTrans;                                               // 0x02A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              NewVar_1;                                                 // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnRepPetPawnCalled;                                       // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass PetComponent_BP.PetComponent_BP_C");
		return pStaticClass;
	}


	void IsFppMode(bool* Out);
	void GetPetOwnerPlayerPawn(class ABP_PlayerPawn_C** Out);
	void GetPetPawn(class ABasePetCharacter_BP_C** Out);
	void SetPetPawn(class ASTExtraPetCharacter* InPetPawn, class ASTExtraPetCharacter** Out);
	void SetPetOwnerPlayerPawn(class ASTExtraBaseCharacter* InPlayerPawn, class ASTExtraBaseCharacter** Out);
	void ResetAttachTrans();
	void SpawnPetWithInfo(const struct FGameModePlayerPetInfo& Info);
	void SpawnPet(class UClass* PetClass);
	void RemovePet();
	void PlayerStateChange(EPawnState State, TEnumAsByte<enum EPawnStateChangeType> changeType);
	void OnOwnerPlayerPossessed(const struct FGameModePlayerPetInfo& PetInfo);
	void OnOwnerDetachedVehicle();
	void OnRep_PetPawn();
	void OnRep_PetOwnerPlayerPawn();
	void ExecuteUbergraph_PetComponent_BP(int EntryPoint);
	void OnRepPetPawnCalled__DelegateSignature();
};


}

