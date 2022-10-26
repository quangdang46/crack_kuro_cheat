#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_SK_WEP_M16A4_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C
// 0x02AA (0x05DA - 0x0330)
class USK_WEP_M16A4_AnimBP_C : public UWeaponAnimInstanceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_0721978D48633F2330DAC1A1A8E59187;      // 0x0338(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6D4F4512407A8C6FFCEAC4BB78DA7372;// 0x0370(0x0098)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60B056D441FEB828494B73906C46690B;// 0x0408(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_600016D04CBB2D14E3E8629D7F9520D6;// 0x0468(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C831AC354DA3208A948B978EAE568FF5;// 0x04C8(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8C9B73E44BD740D91C12A482A82249EF;// 0x0568(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DC24AC264F9FE95AC1336D84A544401E;// 0x05A0(0x0038)
	bool                                               bScoping;                                                 // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SightType;                                                // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass SK_WEP_M16A4_AnimBP.SK_WEP_M16A4_AnimBP_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_WEP_M16A4_AnimBP_AnimGraphNode_BlendListByBool_6D4F4512407A8C6FFCEAC4BB78DA7372();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_WEP_M16A4_AnimBP(int EntryPoint);
};


}

