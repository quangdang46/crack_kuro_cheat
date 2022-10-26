#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_Common_DragDrop_Data_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C
// 0x001C (0x00A4 - 0x0088)
class UCommon_DragDrop_Data_C : public UDragDropOperation
{
public:
	int                                                dragItem;                                                 // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FString                                     dragExtendData;                                           // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                dragInst;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C");
		return pStaticClass;
	}

};


}

