#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_GlobalBattleUIFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutValidByType
struct UGlobalBattleUIFunctionLibrary_C_GetLayoutValidByType_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBP_UIENUM_UIElemTypes>           ElemKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetAudioIDSignType
struct UGlobalBattleUIFunctionLibrary_C_GetAudioIDSignType_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SignType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                audioID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsBankExistByActorID
struct UGlobalBattleUIFunctionLibrary_C_IsBankExistByActorID_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bExist;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetButtomQualityPath
struct UGlobalBattleUIFunctionLibrary_C_GetButtomQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetBgQualityPath
struct UGlobalBattleUIFunctionLibrary_C_GetBgQualityPath_Params
{
	int                                                Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsCustomUIDataValid
struct UGlobalBattleUIFunctionLibrary_C_IsCustomUIDataValid_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveDateSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.UpdateCustomUIInfo
struct UGlobalBattleUIFunctionLibrary_C_UpdateCustomUIInfo_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBP_UIENUM_UIElemTypes>           ElemKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                CanvasPanel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     Border;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetDurabilityColorConfig
struct UGlobalBattleUIFunctionLibrary_C_GetDurabilityColorConfig_Params
{
	int                                                Durability;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxDurability;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 OutColor;                                                 // (Parm, OutParm)
	int                                                Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetPreviewSaveGame
struct UGlobalBattleUIFunctionLibrary_C_GetPreviewSaveGame_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 Save_Game;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignText
struct UGlobalBattleUIFunctionLibrary_C_GetQuickSignText_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SignType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TextId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetQuickSignAudio
struct UGlobalBattleUIFunctionLibrary_C_GetQuickSignAudio_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SignType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                audioID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutName
struct UGlobalBattleUIFunctionLibrary_C_GetLayoutName_Params
{
	int                                                GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NewParam1;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetUserSettingSaveGame
struct UGlobalBattleUIFunctionLibrary_C_GetUserSettingSaveGame_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USettingConfig_C*                            rlt;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCustomSettingSaveGame
struct UGlobalBattleUIFunctionLibrary_C_GetCustomSettingSaveGame_Params
{
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeVoiceText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeVoiceText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSGWithName
struct UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSGWithName_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     SlotName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchSwitch
struct UGlobalBattleUIFunctionLibrary_C_Get3DTouchSwitch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TouchSwitch;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.Get3DTouchValue
struct UGlobalBattleUIFunctionLibrary_C_Get3DTouchValue_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TouchValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCurrentGameModeIndex
struct UGlobalBattleUIFunctionLibrary_C_GetCurrentGameModeIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameModeIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetCurrentLayoutIndex
struct UGlobalBattleUIFunctionLibrary_C_GetCurrentLayoutIndex_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UIElemIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetGameFireMode
struct UGlobalBattleUIFunctionLibrary_C_GetGameFireMode_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSGBySetting
struct UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSGBySetting_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSGByIndex
struct UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSGByIndex_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UIElemIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameModeTab;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.PrintLayoutDetail
struct UGlobalBattleUIFunctionLibrary_C_PrintLayoutDetail_Params
{
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetail;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              RushLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.PrintUIElemSaveGame
struct UGlobalBattleUIFunctionLibrary_C_PrintUIElemSaveGame_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveSelectUIElemIndex
struct UGlobalBattleUIFunctionLibrary_C_SaveSelectUIElemIndex_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetFireModeBySetting
struct UGlobalBattleUIFunctionLibrary_C_GetFireModeBySetting_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FireMode;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetJsonSlotName
struct UGlobalBattleUIFunctionLibrary_C_GetJsonSlotName_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ElemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameModeTab;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SlotName;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelectUIElemIndex
struct UGlobalBattleUIFunctionLibrary_C_GetSelectUIElemIndex_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                UIElemIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadJsonUIElemLayoutSGBySetting
struct UGlobalBattleUIFunctionLibrary_C_LoadJsonUIElemLayoutSGBySetting_Params
{
	bool                                               IsFPP;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveJsonUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_SaveJsonUIElemLayoutSG_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadJsonUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadJsonUIElemLayoutSG_Params
{
	struct FString                                     LayoutName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsIOSOneGigabyteDevice
struct UGlobalBattleUIFunctionLibrary_C_IsIOSOneGigabyteDevice_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeBattleText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeBattleText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetReportBugSwitch
struct UGlobalBattleUIFunctionLibrary_C_GetReportBugSwitch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetSelfieSwitch
struct UGlobalBattleUIFunctionLibrary_C_GetSelfieSwitch_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadDownloadUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadDownloadUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExist;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameList;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadAllUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadAllUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UBP_SAVEGAME_UIElemLayout_C*>         SaveGameList;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<bool>                                       IsExistList;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetRushTriggerLengthByType
struct UGlobalBattleUIFunctionLibrary_C_GetRushTriggerLengthByType_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RushTriggerLength;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLayoutDetailByType
struct UGlobalBattleUIFunctionLibrary_C_GetLayoutDetailByType_Params
{
	class UBP_SAVEGAME_UIElemLayout_C*                 SaveGameObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                LayoutIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<enum EBP_UIENUM_UIElemTypes>           ElemKey;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_UIElemLayoutDetail               LayoutDetail;                                             // (Parm, OutParm)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.ShowGender
struct UGlobalBattleUIFunctionLibrary_C_ShowGender_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BShowGender;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.IsWidgetVisible
struct UGlobalBattleUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetTimeByInt
struct UGlobalBattleUIFunctionLibrary_C_GetTimeByInt_Params
{
	int                                                second_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Time;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SetImageWithSpriteResInBattle
struct UGlobalBattleUIFunctionLibrary_C_SetImageWithSpriteResInBattle_Params
{
	struct FString                                     ResPath;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationInfoInBattle
struct UGlobalBattleUIFunctionLibrary_C_GetNationInfoInBattle_Params
{
	struct FString                                     NationCode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RegionConfig_type                NationInfo;                                               // (Parm, OutParm)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetNationSwitch
struct UGlobalBattleUIFunctionLibrary_C_GetNationSwitch_Params
{
	struct FString                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.CreateUAEUserWidget
struct UGlobalBattleUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.GetLocalizeText
struct UGlobalBattleUIFunctionLibrary_C_GetLocalizeText_Params
{
	struct FString                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.SaveUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_SaveUIElemLayoutSG_Params
{
	class USaveGame*                                   SaveGameObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlobalBattleUIFunctionLibrary.GlobalBattleUIFunctionLibrary_C.LoadUIElemLayoutSG
struct UGlobalBattleUIFunctionLibrary_C_LoadUIElemLayoutSG_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_SAVEGAME_UIElemLayout_C*                 UIElemSaveGame;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

