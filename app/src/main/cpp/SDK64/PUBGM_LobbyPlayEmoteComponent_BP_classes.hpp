#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_LobbyPlayEmoteComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C
// 0x0070 (0x0410 - 0x03A0)
class ULobbyPlayEmoteComponent_BP_C : public ULobbyPlayEmoteComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_LevelSequenceCameraMask_C*               levelSequenceMask;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03C0(0x0050) UNKNOWN PROPERTY: SetProperty LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C.stopEmoteArray

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass LobbyPlayEmoteComponent_BP.LobbyPlayEmoteComponent_BP_C");
		return pStaticClass;
	}


	void OnEquipmentChange();
	void OnStartLevelSequence();
	void GetLobbyCamera(class ACameraActor** CameraActor);
	void OnStopLevelSequence();
	void ChangetoLevelSequenceCamera();
	void OnTrackEvent(const struct FString& EventData);
	void PlayCameraEmoteAnim(class ULevelSequence** CurrentCameraEmoteAnim);
	void StopCameraEmoteAnim();
	void ShowAvatarForEmote(bool* Show, bool* force);
	void ExecuteUbergraph_LobbyPlayEmoteComponent_BP(int EntryPoint);
};


}

