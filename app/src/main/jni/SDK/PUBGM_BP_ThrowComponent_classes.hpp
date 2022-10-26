#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_ThrowComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ThrowComponent.BP_ThrowComponent_C
// 0x0010 (0x0318 - 0x0308)
class UBP_ThrowComponent_C : public UCharacterThrowComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0004) (Transient, DuplicateTransient)
	TArray<EPawnState>                                 ThrowDisableStates;                                       // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_ThrowComponent.BP_ThrowComponent_C");
		return pStaticClass;
	}


	void SetPawnStateDisabled(class ASTExtraBaseCharacter* Pawn);
	void InitializeNewProjectile(class AEliteProjectile** NewProjectile, bool* bDrop, float* ExplosionDelay);
	void ReceiveThrowStateChanged(EThrowState* NewState, EThrowState* PrevState);
	void ReceiveBeginPlay();
	void ThrowCanceledDelegate_Event_1(class UThrowComponent* ThrowComponent);
	void ExecuteUbergraph_BP_ThrowComponent(int EntryPoint);
};


}

