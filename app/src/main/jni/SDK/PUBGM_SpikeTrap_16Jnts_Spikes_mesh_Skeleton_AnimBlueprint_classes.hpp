#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint.SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_C
// 0x0C69 (0x0F59 - 0x02F0)
class USpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FAnimNode_Root                              AnimGraphNode_Root_2DB5FA3B439D0DB24910449194914443;      // 0x02F8(0x0038)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_0932B113493D850E099210A6A8E12CED;// 0x0330(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EF54C8E741E711296FD7EAA35D4A04C4;// 0x0360(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38F4ADA2425644835E1C96A27D85F189;// 0x0400(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5492275E4765921C13265FB393BE2A99;// 0x04A0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4E41846F47D4D296B9CD1BBEBB45287F;// 0x0540(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62B3BAA045C80D302B4099974A3B052D;// 0x05E0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5690AD374FFFC6F394277EA78CD83224;// 0x0680(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_915DA6024AEA86D2C1C7178A6CBA4E08;// 0x0720(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A042FAA645A24C2EEE3594BB60429671;// 0x07C0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_132645434D89A88070EE61876032E912;// 0x0860(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AE3FFDC14029CA1B16D479A4BA2EFCB3;// 0x0900(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9E6780B0492BFE9CFA8EBCABC42B1F15;// 0x09A0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0BA312A540B1A29D168E129F34DA8E70;// 0x0A40(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D6D54F3140B4AF5BAA4A3EB5BDAE313A;// 0x0AE0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2937D5A54DCE0E5F1DA0CAABB993A4D3;// 0x0B80(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E7639D1D44A0F344357A01A3129062DE;// 0x0C20(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A4DB934A474710A523DCCA9F881C740F;// 0x0CC0(0x00A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9FD94D6A47D5A848CEE378A957666C16;// 0x0D60(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EB1F08564A793033DD4696930DCA59C6;// 0x0E00(0x0098)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EC129EE64F60B4A57490F5ABB49A87B5;// 0x0E98(0x0038)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D6A071DD400783A8F5EC7C89BDED57FB;// 0x0ED0(0x0038)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_F81FA1404DC960DE08EBA9B34AB17648;// 0x0F08(0x0030)
	TArray<struct FVector>                             SegmentLocations;                                         // 0x0F38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            SegmentRotations;                                         // 0x0F44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Popped;                                                   // 0x0F50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F51(0x0003) MISSED OFFSET
	float                                              CapHalf;                                                  // 0x0F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<enum EBoneControlSpace>                CoordinateSpace;                                          // 0x0F58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint.SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_C");
		return pStaticClass;
	}


	void GetRotLoc(int Index, struct FVector* Loc, struct FRotator* Rot);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9E6780B0492BFE9CFA8EBCABC42B1F15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_0BA312A540B1A29D168E129F34DA8E70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D6D54F3140B4AF5BAA4A3EB5BDAE313A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_2937D5A54DCE0E5F1DA0CAABB993A4D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_E7639D1D44A0F344357A01A3129062DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_A4DB934A474710A523DCCA9F881C740F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9FD94D6A47D5A848CEE378A957666C16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_BlendListByBool_EB1F08564A793033DD4696930DCA59C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_AE3FFDC14029CA1B16D479A4BA2EFCB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_132645434D89A88070EE61876032E912();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_A042FAA645A24C2EEE3594BB60429671();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_915DA6024AEA86D2C1C7178A6CBA4E08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_5690AD374FFFC6F394277EA78CD83224();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_62B3BAA045C80D302B4099974A3B052D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_4E41846F47D4D296B9CD1BBEBB45287F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_5492275E4765921C13265FB393BE2A99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_38F4ADA2425644835E1C96A27D85F189();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_EF54C8E741E711296FD7EAA35D4A04C4();
	void ExecuteUbergraph_SpikeTrap_16Jnts_Spikes_mesh_Skeleton_AnimBlueprint(int EntryPoint);
};


}

