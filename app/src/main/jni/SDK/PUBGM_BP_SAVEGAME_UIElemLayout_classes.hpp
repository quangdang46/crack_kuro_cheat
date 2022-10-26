#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BP_SAVEGAME_UIElemLayout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C
// 0x011C (0x013C - 0x0020)
class UBP_SAVEGAME_UIElemLayout_C : public USaveGame
{
public:
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict1;                                        // 0x0020(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict2;                                        // 0x005C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict3;                                        // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsDataValid1;                                             // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDataValid2;                                             // 0x00D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDataValid3;                                             // 0x00D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00D7(0x0001) MISSED OFFSET
	float                                              RushTriggerLength1;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RushTriggerLength2;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RushTriggerLength3;                                       // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     SaveSlotName;                                             // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LayoutName1;                                              // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LayoutName2;                                              // 0x00FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LayoutName3;                                              // 0x0108(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TimeTag;                                                  // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        InvalidArray1;                                            // 0x0118(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        InvalidArray2;                                            // 0x0124(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        InvalidArray3;                                            // 0x0130(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C");
		return pStaticClass;
	}

};


}

