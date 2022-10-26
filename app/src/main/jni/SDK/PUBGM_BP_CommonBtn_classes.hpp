#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_CommonBtn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CommonBtn.BP_CommonBtn_C
// 0x000B (0x00E3 - 0x00D8)
class UBP_CommonBtn_C : public UCommonBtnComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D8(0x0004) (Transient, DuplicateTransient)
	int                                                openmode;                                                 // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum ECommonBtn>                       BtnType;                                                  // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShow;                                                    // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpen;                                                    // 0x00E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_CommonBtn.BP_CommonBtn_C");
		return pStaticClass;
	}


	void OnChangeOpenDoorMode(int openmode);
	void UnRegistShowDoorButton();
	void OnShowDoorButton(TEnumAsByte<enum ECommonBtn> Type);
	void RegistShowDoorButton();
	void ShowDoorButton(bool Show, bool Open, int openmode);
	void GetPlayerController(class ABP_STExtraPlayerController_C** PlayerController);
	void ReceiveBeginPlay();
	void CharacterStatusChanged(bool IsNearDeath, bool IsRescueingOther);
	void PlayerControllerReconnectedDelegate_Event_1();
	void UI_Click(bool bSimulateExtraDoor);
	void ToogleDoor();
	void BP_ShowDoorBtn(bool* bShow, bool* bOpen, int* doorOpenMode);
	void AutoOpenDoor(bool BoolValue);
	void BP_SimulateUIClick(bool* bExtraDoor);
	void ExecuteUbergraph_BP_CommonBtn(int EntryPoint);
};


}

