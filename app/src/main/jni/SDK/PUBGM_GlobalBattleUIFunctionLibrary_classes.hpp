#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GlobalBattleUIFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C
// 0x0000 (0x0020 - 0x0020)
class UGlobalBattleUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C");
		return pStaticClass;
	}


	static void GetLayoutValidByType(class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj, int LayoutIndex, TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, bool* IsValid);
	static void GetAudioIDSignType(class UObject* WorldContext, int ActorId, int SignType, class UObject* __WorldContext, int* audioID);
	static void IsBankExistByActorID(class UObject* WorldContext, int ActorId, class UObject* __WorldContext, bool* bExist);
	static void GetButtomQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path);
	static void IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDateSize, class UObject* __WorldContext, bool* IsValid);
	static void UpdateCustomUIInfo(class UObject* WorldContext, class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex, TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey, class UCanvasPanel* CanvasPanel, class UBorder* Border, class UObject* __WorldContext);
	static void GetDurabilityColorConfig(int Durability, int MaxDurability, class UObject* __WorldContext, struct FSlateColor* OutColor, int* Status);
	static void GetPreviewSaveGame(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** Save_Game);
	static void GetQuickSignText(class UObject* WorldContext, int SignType, int ActorId, class UObject* __WorldContext, int* TextId);
	static void GetQuickSignAudio(class UObject* WorldContext, int SignType, class UObject* __WorldContext, int* audioID);
	static void GetLayoutName(int GameMode, int LayoutIndex, class UObject* __WorldContext, struct FString* NewParam1);
	static void GetUserSettingSaveGame(class UObject* __WorldContext, class USettingConfig_C** rlt);
	static void GetCustomSettingSaveGame(int idx, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame);
	static void GetLocalizeVoiceText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	static bool SaveUIElemLayoutSGWithName(const struct FString& SlotName, class UObject* __WorldContext, class USaveGame** SaveGameObject);
	static void Get3DTouchSwitch(class UObject* __WorldContext, bool* TouchSwitch);
	static void Get3DTouchValue(class UObject* __WorldContext, float* TouchValue);
	static void GetCurrentGameModeIndex(class UObject* __WorldContext, int* GameModeIndex);
	static void GetCurrentLayoutIndex(bool IsFPP, class UObject* __WorldContext, int* UIElemIndex);
	static void GetGameFireMode(class UObject* __WorldContext, int* FireMode);
	static void LoadUIElemLayoutSGBySetting(bool IsFPP, int GameMode, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame);
	static void LoadUIElemLayoutSGByIndex(bool IsFPP, int UIElemIndex, int GameModeTab, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame, bool* IsExist);
	static void PrintLayoutDetail(TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> LayoutDetail, float RushLength, class UObject* __WorldContext);
	static void PrintUIElemSaveGame(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj);
	static void SaveSelectUIElemIndex(bool IsFPP, int LayoutIndex, int GameMode, class UObject* __WorldContext);
	static void GetFireModeBySetting(bool IsFPP, class UObject* __WorldContext, int* FireMode);
	static void GetJsonSlotName(bool IsFPP, int ElemIndex, int GameModeTab, class UObject* __WorldContext, struct FString* SlotName);
	static void GetSelectUIElemIndex(bool IsFPP, int GameMode, class UObject* __WorldContext, int* UIElemIndex);
	static void LoadJsonUIElemLayoutSGBySetting(bool IsFPP, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame);
	static bool SaveJsonUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject);
	static void LoadJsonUIElemLayoutSG(const struct FString& LayoutName, class UObject* __WorldContext, bool* IsExist, class UBP_SAVEGAME_UIElemLayout_C** SaveGame);
	static void IsIOSOneGigabyteDevice(class UObject* __WorldContext, bool* Output);
	static void GetLocalizeBattleText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	static void GetReportBugSwitch(class UObject* __WorldContext, bool* Ret);
	static void GetSelfieSwitch(class UObject* __WorldContext, bool* Ret);
	static void LoadDownloadUIElemLayoutSG(class UObject* __WorldContext, bool* IsExist, class UBP_SAVEGAME_UIElemLayout_C** SaveGameList);
	static void LoadAllUIElemLayoutSG(class UObject* __WorldContext, TArray<class UBP_SAVEGAME_UIElemLayout_C*>* SaveGameList, TArray<bool>* IsExistList);
	static void GetRushTriggerLengthByType(class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj, int LayoutIndex, class UObject* __WorldContext, float* RushTriggerLength);
	static void GetLayoutDetailByType(int LayoutIndex, TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetail, bool* IsFound);
	static void ShowGender(class UObject* __WorldContext, bool* BShowGender);
	static void IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	static void GetTimeByInt(int second_, class UObject* __WorldContext, struct FString* Time);
	static void SetImageWithSpriteResInBattle(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext);
	static void GetNationInfoInBattle(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo);
	static void GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret);
	static void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	static void GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text);
	static bool SaveUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject);
	static void LoadUIElemLayoutSG(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame);
};


}

