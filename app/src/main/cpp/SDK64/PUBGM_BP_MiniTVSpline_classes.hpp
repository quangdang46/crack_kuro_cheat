#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK

#include "PUBGM_BP_MiniTVSpline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiniTVSpline.BP_MiniTVSpline_C
// 0x0009 (0x03A1 - 0x0398)
class ABP_MiniTVSpline_C : public AActor
{
public:
	class USplineComponent*                            Spline;                                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MoveActor;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_MiniTVSpline.BP_MiniTVSpline_C");
		return pStaticClass;
	}


	void UserConstructionScript();
};


}

