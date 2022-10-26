#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Lobby_Main_int_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Lobby_Main_int.Lobby_Main_int_C
// 0x0060 (0x0470 - 0x0410)
class ALobby_Main_int_C : public ALuaLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class UFrontendUtils*                              frontUtils;                                               // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               blockBackScene;                                           // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FName                                       lastSceneCamera;                                          // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USettingConfig_C*                            SetConfig;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Dispatcher_OpenBox;                                       // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ASkyLight*                                   SkyLight_1_EdGraph_6_RefProperty;                         // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class APointLight*                                 PointLight_0_EdGraph_6_RefProperty;                       // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_0_EdGraph_6_RefProperty;                 // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                LobbySecondCam_EdGraph_6_RefProperty;                     // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                LobbyFirstCam_EdGraph_6_RefProperty;                      // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Lobby_Main_int.Lobby_Main_int_C");
		return pStaticClass;
	}


	void OnAndroidBack();
	void RegistPersistLevelObjs(class UFrontendUtils* Utils);
	void InpActEvt_Android_Back_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_N_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_RotationRate_K2Node_InputVectorAxisEvent_1(const struct FVector& AxisValue);
	void ExecuteUbergraph_Lobby_Main_int(int EntryPoint);
	void Dispatcher_OpenBox__DelegateSignature(class ASkeletalMeshActor* NewParam);
};


}

