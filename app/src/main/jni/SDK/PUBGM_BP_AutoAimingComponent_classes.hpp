#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_AutoAimingComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C
// 0x0001 (0x01F1 - 0x01F0)
class UBP_AutoAimingComponent_C : public UWeaponAutoAimingComponent
{
public:
	TEnumAsByte<enum EDrawDebugTrace>                  DrawDebugType;                                            // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_AutoAimingComponent.BP_AutoAimingComponent_C");
		return pStaticClass;
	}


	bool CheckInAngle(class ASTExtraBaseCharacter** MyPawn, class ASTExtraBaseCharacter** EnemyPawn, float* MaxAngle);
	bool CheckSmoke(struct FVector* StartPoint, class ASTExtraPlayerCharacter** Pawn);
	bool CanEnemeyRaycastReach(struct FVector* StartPoint, class ASTExtraPlayerCharacter** Pawn);
};


}

