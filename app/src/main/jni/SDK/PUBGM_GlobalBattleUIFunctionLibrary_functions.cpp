// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GlobalBattleUIFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutValidByType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetLayoutValidByType(class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj, int LayoutIndex, TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, bool* IsValid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutValidByType");

	UGlobalBattleUIFunctionLibrary_C_GetLayoutValidByType_Params params;
	params.SaveGameObj = SaveGameObj;
	params.LayoutIndex = LayoutIndex;
	params.ElemKey = ElemKey;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SignType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            audioID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetAudioIDSignType(class UObject* WorldContext, int ActorId, int SignType, class UObject* __WorldContext, int* audioID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType");

	UGlobalBattleUIFunctionLibrary_C_GetAudioIDSignType_Params params;
	params.WorldContext = WorldContext;
	params.ActorId = ActorId;
	params.SignType = SignType;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (audioID != nullptr)
		*audioID = params.audioID;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExist                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsBankExistByActorID(class UObject* WorldContext, int ActorId, class UObject* __WorldContext, bool* bExist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID");

	UGlobalBattleUIFunctionLibrary_C_IsBankExistByActorID_Params params;
	params.WorldContext = WorldContext;
	params.ActorId = ActorId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bExist != nullptr)
		*bExist = params.bExist;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetButtomQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath");

	UGlobalBattleUIFunctionLibrary_C_GetButtomQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetBgQualityPath(int Quality, class UObject* __WorldContext, struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath");

	UGlobalBattleUIFunctionLibrary_C_GetBgQualityPath_Params params;
	params.Quality = Quality;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               SaveDateSize                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsCustomUIDataValid(class UWidget* Widget, const struct FVector2D& SaveDateSize, class UObject* __WorldContext, bool* IsValid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid");

	UGlobalBattleUIFunctionLibrary_C_IsCustomUIDataValid_Params params;
	params.Widget = Widget;
	params.SaveDateSize = SaveDateSize;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.UpdateCustomUIInfo
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            CanvasPanel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBorder*                 Border                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::UpdateCustomUIInfo(class UObject* WorldContext, class UBP_SAVEGAME_UIElemLayout_C* SaveGame, int LayoutIndex, TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey, class UCanvasPanel* CanvasPanel, class UBorder* Border, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.UpdateCustomUIInfo");

	UGlobalBattleUIFunctionLibrary_C_UpdateCustomUIInfo_Params params;
	params.WorldContext = WorldContext;
	params.SaveGame = SaveGame;
	params.LayoutIndex = LayoutIndex;
	params.ElemKey = ElemKey;
	params.CanvasPanel = CanvasPanel;
	params.Border = Border;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Durability                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxDurability                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             OutColor                       (Parm, OutParm)
// int                            Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetDurabilityColorConfig(int Durability, int MaxDurability, class UObject* __WorldContext, struct FSlateColor* OutColor, int* Status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig");

	UGlobalBattleUIFunctionLibrary_C_GetDurabilityColorConfig_Params params;
	params.Durability = Durability;
	params.MaxDurability = MaxDurability;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
	if (Status != nullptr)
		*Status = params.Status;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPreviewSaveGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* Save_Game                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetPreviewSaveGame(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** Save_Game)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPreviewSaveGame");

	UGlobalBattleUIFunctionLibrary_C_GetPreviewSaveGame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Save_Game != nullptr)
		*Save_Game = params.Save_Game;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SignType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ActorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TextId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetQuickSignText(class UObject* WorldContext, int SignType, int ActorId, class UObject* __WorldContext, int* TextId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText");

	UGlobalBattleUIFunctionLibrary_C_GetQuickSignText_Params params;
	params.WorldContext = WorldContext;
	params.SignType = SignType;
	params.ActorId = ActorId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TextId != nullptr)
		*TextId = params.TextId;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignAudio
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SignType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            audioID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetQuickSignAudio(class UObject* WorldContext, int SignType, class UObject* __WorldContext, int* audioID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignAudio");

	UGlobalBattleUIFunctionLibrary_C_GetQuickSignAudio_Params params;
	params.WorldContext = WorldContext;
	params.SignType = SignType;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (audioID != nullptr)
		*audioID = params.audioID;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewParam1                      (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLayoutName(int GameMode, int LayoutIndex, class UObject* __WorldContext, struct FString* NewParam1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutName");

	UGlobalBattleUIFunctionLibrary_C_GetLayoutName_Params params;
	params.GameMode = GameMode;
	params.LayoutIndex = LayoutIndex;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetUserSettingSaveGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USettingConfig_C*        rlt                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetUserSettingSaveGame(class UObject* __WorldContext, class USettingConfig_C** rlt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetUserSettingSaveGame");

	UGlobalBattleUIFunctionLibrary_C_GetUserSettingSaveGame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (rlt != nullptr)
		*rlt = params.rlt;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCustomSettingSaveGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetCustomSettingSaveGame(int idx, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCustomSettingSaveGame");

	UGlobalBattleUIFunctionLibrary_C_GetCustomSettingSaveGame_Params params;
	params.idx = idx;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeVoiceText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeVoiceText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSGWithName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGlobalBattleUIFunctionLibrary_C::SaveUIElemLayoutSGWithName(const struct FString& SlotName, class UObject* __WorldContext, class USaveGame** SaveGameObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSGWithName");

	UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSGWithName_Params params;
	params.SlotName = SlotName;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObject != nullptr)
		*SaveGameObject = params.SaveGameObject;

	return params.ReturnValue;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TouchSwitch                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::Get3DTouchSwitch(class UObject* __WorldContext, bool* TouchSwitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch");

	UGlobalBattleUIFunctionLibrary_C_Get3DTouchSwitch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchSwitch != nullptr)
		*TouchSwitch = params.TouchSwitch;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TouchValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::Get3DTouchValue(class UObject* __WorldContext, float* TouchValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue");

	UGlobalBattleUIFunctionLibrary_C_Get3DTouchValue_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchValue != nullptr)
		*TouchValue = params.TouchValue;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCurrentGameModeIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameModeIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetCurrentGameModeIndex(class UObject* __WorldContext, int* GameModeIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCurrentGameModeIndex");

	UGlobalBattleUIFunctionLibrary_C_GetCurrentGameModeIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (GameModeIndex != nullptr)
		*GameModeIndex = params.GameModeIndex;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCurrentLayoutIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UIElemIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetCurrentLayoutIndex(bool IsFPP, class UObject* __WorldContext, int* UIElemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCurrentLayoutIndex");

	UGlobalBattleUIFunctionLibrary_C_GetCurrentLayoutIndex_Params params;
	params.IsFPP = IsFPP;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UIElemIndex != nullptr)
		*UIElemIndex = params.UIElemIndex;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetGameFireMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetGameFireMode(class UObject* __WorldContext, int* FireMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetGameFireMode");

	UGlobalBattleUIFunctionLibrary_C_GetGameFireMode_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSGBySetting
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadUIElemLayoutSGBySetting(bool IsFPP, int GameMode, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSGBySetting");

	UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSGBySetting_Params params;
	params.IsFPP = IsFPP;
	params.GameMode = GameMode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSGByIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UIElemIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameModeTab                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadUIElemLayoutSGByIndex(bool IsFPP, int UIElemIndex, int GameModeTab, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame, bool* IsExist)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSGByIndex");

	UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSGByIndex_Params params;
	params.IsFPP = IsFPP;
	params.UIElemIndex = UIElemIndex;
	params.GameModeTab = GameModeTab;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
	if (IsExist != nullptr)
		*IsExist = params.IsExist;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.PrintLayoutDetail
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> LayoutDetail                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          RushLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::PrintLayoutDetail(TMap<int, struct FBP_STRUCT_UIElemLayoutDetail> LayoutDetail, float RushLength, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.PrintLayoutDetail");

	UGlobalBattleUIFunctionLibrary_C_PrintLayoutDetail_Params params;
	params.LayoutDetail = LayoutDetail;
	params.RushLength = RushLength;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.PrintUIElemSaveGame
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::PrintUIElemSaveGame(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.PrintUIElemSaveGame");

	UGlobalBattleUIFunctionLibrary_C_PrintUIElemSaveGame_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObj != nullptr)
		*SaveGameObj = params.SaveGameObj;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveSelectUIElemIndex
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::SaveSelectUIElemIndex(bool IsFPP, int LayoutIndex, int GameMode, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveSelectUIElemIndex");

	UGlobalBattleUIFunctionLibrary_C_SaveSelectUIElemIndex_Params params;
	params.IsFPP = IsFPP;
	params.LayoutIndex = LayoutIndex;
	params.GameMode = GameMode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetFireModeBySetting
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FireMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetFireModeBySetting(bool IsFPP, class UObject* __WorldContext, int* FireMode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetFireModeBySetting");

	UGlobalBattleUIFunctionLibrary_C_GetFireModeBySetting_Params params;
	params.IsFPP = IsFPP;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FireMode != nullptr)
		*FireMode = params.FireMode;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetJsonSlotName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ElemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameModeTab                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SlotName                       (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetJsonSlotName(bool IsFPP, int ElemIndex, int GameModeTab, class UObject* __WorldContext, struct FString* SlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetJsonSlotName");

	UGlobalBattleUIFunctionLibrary_C_GetJsonSlotName_Params params;
	params.IsFPP = IsFPP;
	params.ElemIndex = ElemIndex;
	params.GameModeTab = GameModeTab;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SlotName != nullptr)
		*SlotName = params.SlotName;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelectUIElemIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            UIElemIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetSelectUIElemIndex(bool IsFPP, int GameMode, class UObject* __WorldContext, int* UIElemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelectUIElemIndex");

	UGlobalBattleUIFunctionLibrary_C_GetSelectUIElemIndex_Params params;
	params.IsFPP = IsFPP;
	params.GameMode = GameMode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UIElemIndex != nullptr)
		*UIElemIndex = params.UIElemIndex;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadJsonUIElemLayoutSGBySetting
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFPP                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadJsonUIElemLayoutSGBySetting(bool IsFPP, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadJsonUIElemLayoutSGBySetting");

	UGlobalBattleUIFunctionLibrary_C_LoadJsonUIElemLayoutSGBySetting_Params params;
	params.IsFPP = IsFPP;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveJsonUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGlobalBattleUIFunctionLibrary_C::SaveJsonUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveJsonUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_SaveJsonUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObject != nullptr)
		*SaveGameObject = params.SaveGameObject;

	return params.ReturnValue;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadJsonUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 LayoutName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGame                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadJsonUIElemLayoutSG(const struct FString& LayoutName, class UObject* __WorldContext, bool* IsExist, class UBP_SAVEGAME_UIElemLayout_C** SaveGame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadJsonUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadJsonUIElemLayoutSG_Params params;
	params.LayoutName = LayoutName;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsExist != nullptr)
		*IsExist = params.IsExist;
	if (SaveGame != nullptr)
		*SaveGame = params.SaveGame;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsIOSOneGigabyteDevice(class UObject* __WorldContext, bool* Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice");

	UGlobalBattleUIFunctionLibrary_C_IsIOSOneGigabyteDevice_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeBattleText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeBattleText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetReportBugSwitch(class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch");

	UGlobalBattleUIFunctionLibrary_C_GetReportBugSwitch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetSelfieSwitch(class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch");

	UGlobalBattleUIFunctionLibrary_C_GetSelfieSwitch_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadDownloadUIElemLayoutSG
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsExist                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameList                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadDownloadUIElemLayoutSG(class UObject* __WorldContext, bool* IsExist, class UBP_SAVEGAME_UIElemLayout_C** SaveGameList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadDownloadUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadDownloadUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsExist != nullptr)
		*IsExist = params.IsExist;
	if (SaveGameList != nullptr)
		*SaveGameList = params.SaveGameList;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadAllUIElemLayoutSG
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_SAVEGAME_UIElemLayout_C*> SaveGameList                   (Parm, OutParm, ZeroConstructor)
// TArray<bool>                   IsExistList                    (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::LoadAllUIElemLayoutSG(class UObject* __WorldContext, TArray<class UBP_SAVEGAME_UIElemLayout_C*>* SaveGameList, TArray<bool>* IsExistList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadAllUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadAllUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameList != nullptr)
		*SaveGameList = params.SaveGameList;
	if (IsExistList != nullptr)
		*IsExistList = params.IsExistList;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetRushTriggerLengthByType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RushTriggerLength              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetRushTriggerLengthByType(class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj, int LayoutIndex, class UObject* __WorldContext, float* RushTriggerLength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetRushTriggerLengthByType");

	UGlobalBattleUIFunctionLibrary_C_GetRushTriggerLengthByType_Params params;
	params.SaveGameObj = SaveGameObj;
	params.LayoutIndex = LayoutIndex;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RushTriggerLength != nullptr)
		*RushTriggerLength = params.RushTriggerLength;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SAVEGAME_UIElemLayout_C* SaveGameObj                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            LayoutIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_UIElemLayoutDetail LayoutDetail                   (Parm, OutParm)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetLayoutDetailByType(int LayoutIndex, TEnumAsByte<enum EBP_UIENUM_UIElemTypes> ElemKey, class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** SaveGameObj, struct FBP_STRUCT_UIElemLayoutDetail* LayoutDetail, bool* IsFound)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType");

	UGlobalBattleUIFunctionLibrary_C_GetLayoutDetailByType_Params params;
	params.LayoutIndex = LayoutIndex;
	params.ElemKey = ElemKey;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObj != nullptr)
		*SaveGameObj = params.SaveGameObj;
	if (LayoutDetail != nullptr)
		*LayoutDetail = params.LayoutDetail;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BShowGender                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::ShowGender(class UObject* __WorldContext, bool* BShowGender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender");

	UGlobalBattleUIFunctionLibrary_C_ShowGender_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BShowGender != nullptr)
		*BShowGender = params.BShowGender;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            second_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Time                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetTimeByInt(int second_, class UObject* __WorldContext, struct FString* Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt");

	UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params params;
	params.second_ = second_;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ResPath                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::SetImageWithSpriteResInBattle(const struct FString& ResPath, class UImage* Image, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle");

	UGlobalBattleUIFunctionLibrary_C_SetImageWithSpriteResInBattle_Params params;
	params.ResPath = ResPath;
	params.Image = Image;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NationCode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_RegionConfig_type NationInfo                     (Parm, OutParm)

void UGlobalBattleUIFunctionLibrary_C::GetNationInfoInBattle(const struct FString& NationCode, class UObject* __WorldContext, struct FBP_STRUCT_RegionConfig_type* NationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle");

	UGlobalBattleUIFunctionLibrary_C_GetNationInfoInBattle_Params params;
	params.NationCode = NationCode;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NationInfo != nullptr)
		*NationInfo = params.NationInfo;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::GetNationSwitch(const struct FString& Name, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch");

	UGlobalBattleUIFunctionLibrary_C_GetNationSwitch_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void UGlobalBattleUIFunctionLibrary_C::GetLocalizeText(const struct FString& Key, class UObject* __WorldContext, struct FString* Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText");

	UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGlobalBattleUIFunctionLibrary_C::SaveUIElemLayoutSG(class UObject* __WorldContext, class USaveGame** SaveGameObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveGameObject != nullptr)
		*SaveGameObject = params.SaveGameObject;

	return params.ReturnValue;
}

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_SAVEGAME_UIElemLayout_C* UIElemSaveGame                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalBattleUIFunctionLibrary_C::LoadUIElemLayoutSG(class UObject* __WorldContext, class UBP_SAVEGAME_UIElemLayout_C** UIElemSaveGame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc = UObject::FindObject<UFunction>("Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG");

	UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSG_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UIElemSaveGame != nullptr)
		*UIElemSaveGame = params.UIElemSaveGame;
}

}

