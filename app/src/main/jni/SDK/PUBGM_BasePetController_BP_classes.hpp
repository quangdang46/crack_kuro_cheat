#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BasePetController_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BasePetController_BP.BasePetController_BP_C
// 0x0034 (0x03CC - 0x0398)
class ABasePetController_BP_C : public ASTExtraFightPetController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0004) (Transient, DuplicateTransient)
	class UBehaviorTree*                               CurBT;                                                    // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PetOwnerEmoteId;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       IsAirAttacking;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AirAttackArea;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CheckAirAttackTimer;                                      // 0x03B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     CurAttackArea;                                            // 0x03C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BasePetController_BP.BasePetController_BP_C");
		return pStaticClass;
	}


	void CalcInAirAttackArea();
	void OnPlayerStopEmote(int EmoteId, int Reason);
	void OnPlayerPlayEmote(int Emote);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAirAttackEvent(TEnumAsByte<enum EAirAttackInfo> airattacktype, int waveindex);
	void ExecuteUbergraph_BasePetController_BP(int EntryPoint);
};


}

