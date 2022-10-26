#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_QuickSignComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QuickSignComponent_BP.QuickSignComponent_BP_C
// 0x01A4 (0x05C4 - 0x0420)
class UQuickSignComponent_BP_C : public UQuickSignComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0004) (Transient, DuplicateTransient)
	class UUAEDataTable*                               QuickSignDataTable;                                       // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FBP_STRUCT_QuickSignCfg_type> QuickTableConfigMap;                                      // 0x0428(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FQuickSignMark>        QuickMarkMap;                                             // 0x0464(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     TeammateColor;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SelfColor;                                                // 0x04AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ColonChar;                                                // 0x04B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EndChar;                                                  // 0x04C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SelfName;                                                 // 0x04D0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FQuickSignMsg                               CurrMsg;                                                  // 0x04DC(0x0050) (Edit, BlueprintVisible)
	bool                                               IsPlayVoiceCooldown;                                      // 0x052C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	TMap<EWeaponAttachmentSocketType, int>             WeaponAttachmentSocketTextIDMap;                          // 0x0530(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     DefaultAudioMap;                                          // 0x056C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       distanceString;                                           // 0x05A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isShowDistance;                                           // 0x05B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	TArray<EQuickSignSubType>                          ShowDistanceTypes;                                        // 0x05B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass QuickSignComponent_BP.QuickSignComponent_BP_C");
		return pStaticClass;
	}


	void SetDistanceText(const struct FVector& HidPosition, EQuickSignSubType MsgType);
	void GetAudioEventAndBank(int audioID, int ActorId, struct FString* OutBankName, struct FString* OutEventName);
	void GetLocalizeActorID(int AudioKey, int* ActorId);
	void PlayVoiceAndText(const struct FQuickSignMsg& msgItem, bool IsSelf);
	int GetVoiceAudioID(EQuickSignSubType* MsgType);
	void GetStrArgument(const struct FString& QuickSignID, const struct FString& StringParam, struct FString* StrArgument);
	void OrganizeMsg(int TextId, const struct FString& PlayerName, bool IsSelf, const struct FString& StrParam, const struct FVector& HitPos, EQuickSignSubType MsgType, struct FString* MsgString);
	void PickupWrapperActorHandle(const struct FString& Param, struct FQuickSignMark* MarkInfo);
	bool GenerateMarkInfo(struct FQuickSignMsg* msgItem, struct FQuickSignMark* MarkInfo);
	void LoadConfig();
	void ReceiveBeginPlay();
	void ShowMsgTipsVoice(struct FQuickSignMsg* msgItem, bool* IsSelf);
	void PlayVoiceCD(float Duration);
	void ReportQuickSign(struct FQuickSignMsg* msgItem);
	void ExecuteUbergraph_QuickSignComponent_BP(int EntryPoint);
};


}

