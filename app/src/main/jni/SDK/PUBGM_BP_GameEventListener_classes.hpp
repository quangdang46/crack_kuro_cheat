#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_GameEventListener_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C
// 0x0004 (0x017C - 0x0178)
class UBP_GameEventListener_C : public UGameEventListener
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0004) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_GameEventListener.BP_GameEventListener_C");
		return pStaticClass;
	}


	void SetDefaultNearClipPlane();
	void IsIOSPlatform(bool* IsIOS);
	void SetDefaultRendering();
	void EnableGrassLOD(int Enable);
	void ChangeStreamingLevel();
	void InitIncaseReconnect();
	void ReceiveBeginPlay();
	void CustomEvent_1(TEnumAsByte<enum EGamePawnEvent> gamePawnEvent);
	void ReceiveEndPlay(TEnumAsByte<enum EEndPlayReason>* EndPlayReason);
	void UnloadTree();
	void LoadTree();
	void ExecuteUbergraph_BP_GameEventListener(int EntryPoint);
};


}

