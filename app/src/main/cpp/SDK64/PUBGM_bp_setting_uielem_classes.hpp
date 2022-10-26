#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_bp_setting_uielem_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C
// 0x0058 (0x0458 - 0x0400)
class Abp_setting_uielem_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_Setting_IsSelectFPP;                                   // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	struct FString                                     BP_Setting_SelectLayoutName;                              // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Setting_SelectLayoutFileName;                          // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SettingSerachResult_PreviewOwnerName;                  // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SelectGameModeIndex;                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_SelectLayoutIndex;                             // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Setting_SelectFireMode;                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingSerachResult_IsPreviewTPP;                      // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_uielem.bp_setting_uielem_C");
		return pStaticClass;
	}


	void EventShowResetMsgBox_NoFetch();
	void EventShowResetMsgBox();
	void EventOnClickQuitButton_NoFetch();
	void EventOnClickQuitButton();
	void EventShowLayoutChangeExistMsgBox_NoFetch();
	void EventShowLayoutChangeExistMsgBox();
	void EventTPPFPPPreviewPopupTips_NoFetch();
	void EventTPPFPPPreviewPopupTips();
	void EventRefreshLoadUIElemFileName_NoFetch();
	void EventRefreshLoadUIElemFileName();
	void EventLRSwitcherChanged_NoFetch();
	void EventLRSwitcherChanged();
	void EventShowPreviewConfirmUI_NoFetch();
	void EventShowPreviewConfirmUI();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShowChangeModeMsgBox_NoFetch();
	void EventShowChangeModeMsgBox();
	void EventExitPreview_NoFetch();
	void EventExitPreview();
	void EventTryDownloadSaveData_NoFetch();
	void EventTryDownloadSaveData();
	void EventShowSelectPanel_NoFetch();
	void EventShowSelectPanel();
	void EventAntiCopyRedPointChanged_NoFetch();
	void EventAntiCopyRedPointChanged();
	void EventShowSightCopyMsgBox_NoFetch();
	void EventShowSightCopyMsgBox();
	void EventShowModeCopyMsgBox_NoFetch();
	void EventShowModeCopyMsgBox();
	void EventShowExitMsgBox_NoFetch();
	void EventShowExitMsgBox();
	void EventUploadSaveData_NoFetch();
	void EventUploadSaveData();
	void EventBigHandOperateRedPointChanged_NoFetch();
	void EventBigHandOperateRedPointChanged();
	void UserConstructionScript();
};


}

