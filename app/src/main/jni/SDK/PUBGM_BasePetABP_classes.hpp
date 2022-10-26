#pragma once

// PlayerUnknown's Battle Ground Mobile (1.6.0) SDK

#include "PUBGM_BasePetABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BasePetABP.BasePetABP_C
// 0x0CD0 (0x1030 - 0x0360)
class UBasePetABP_C : public USTExtraPetAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0004) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F8D526254A85A7BD5DE9D1AE4A14B263;      // 0x0368(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D446CD9D4A7FFAC8981A65A8F1F45569;// 0x03C0(0x0098)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B89A0BC6474DBAE52C326BAA23D88647;// 0x0458(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F6B2889A4DE765AE4D2D889584A98B18;// 0x0498(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C858314E1DA79D3BCF90B5A415C27D;// 0x04F8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9CDD1514C4A20F836475FBD2BB36DCE;// 0x0530(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1BB357F64C76570843AE5B84C2F7CEB2;// 0x05D8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6813BADF4F7EEFC3B3DBD08B1D8DADC6;// 0x0658(0x0098)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CE743A514D5E4D277DBD2AB141552806;// 0x06F0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12236F064CD7AE7B7333CD83216CC82F;// 0x0730(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_70CC06554CE62E26B9B290830BAB759E;// 0x0770(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C3F6ACAD4099926E95FBCA9EA23545DC;// 0x07F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E21B1F9345DC795DABC8D1A9DC21356B;// 0x0870(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88086AE94D458BF339DDF49C030BAC8D;// 0x08A8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6D41291441BF31781A90EB8AA878F524;// 0x08E0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7923B5546659CBBB05F978557E7984B;// 0x0918(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F1217244C743912C63308A2C19461F3;// 0x0950(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45C4DF654B7ABA309EAE7B91D9A59978;// 0x0988(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5F4D4094E2A63878ED042A083D69675;// 0x09C0(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_235007F846A892725CD6AAAC8E0894F8;// 0x09F8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E1B6E3C4295EDAD81F9A2BA3ABAF7B1;// 0x0A30(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_884772EB4E9B0F6FFBCA8491829B68BA;// 0x0A90(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C030F17142ACE73779C04D8C52F73E4A;// 0x0AC8(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB913D964FFC2560A0F5A086FA82355A;// 0x0B00(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A37FE82C4EA834252D40C28F6A1FCD50;// 0x0B38(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D8F7DC594A7D125E69D5B8BE2B0AB059;// 0x0B98(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4186564B4D382D04BA589A87C3B35D6E;// 0x0BD0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1AC949FC454200AE969E5A81393827F3;// 0x0C30(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C40199904EDBAB995784A981C137D7FF;// 0x0C68(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_026886AB43567BC65904908A6B0212DB;// 0x0D10(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2AA8C592476168C6320361962A2F6A2A;// 0x0D48(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65BC131A4608DACA84EADB9677488FE2;// 0x0DA8(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1CF96EC64FCAB2CDD495BE863F050AF9;// 0x0DE0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3B1F1823464A230A961F18ACBED76AB5;// 0x0E40(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAABD589489563EA761DB79D58B83DB1;// 0x0E78(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_71742F2B4652E176857298B636317F5B;// 0x0ED8(0x0038)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C91D704D47A762EB4FEEF8A07C3D62DA;// 0x0F10(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AC03404E455535C444C431AF45F64262;// 0x0FB8(0x0040)
	struct FAnimNode_Root                              AnimGraphNode_Root_D982C72548DF7C2CB7D2D0A8197E4659;      // 0x0FF8(0x0038)

	static UClass* StaticClass()
	{
		static UClass *pStaticClass = 0;
		if (!pStaticClass)
			 pStaticClass = UObject::FindClass("AnimBlueprintGeneratedClass BasePetABP.BasePetABP_C");
		return pStaticClass;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_4E1B6E3C4295EDAD81F9A2BA3ABAF7B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_45C4DF654B7ABA309EAE7B91D9A59978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_C030F17142ACE73779C04D8C52F73E4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_DB913D964FFC2560A0F5A086FA82355A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_A37FE82C4EA834252D40C28F6A1FCD50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_1F1217244C743912C63308A2C19461F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_4186564B4D382D04BA589A87C3B35D6E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_C7923B5546659CBBB05F978557E7984B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_2AA8C592476168C6320361962A2F6A2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_1CF96EC64FCAB2CDD495BE863F050AF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_88086AE94D458BF339DDF49C030BAC8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_CAABD589489563EA761DB79D58B83DB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_E21B1F9345DC795DABC8D1A9DC21356B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_BlendListByBool_6813BADF4F7EEFC3B3DBD08B1D8DADC6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_SequencePlayer_F6B2889A4DE765AE4D2D889584A98B18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_BlendListByBool_D446CD9D4A7FFAC8981A65A8F1F45569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_235007F846A892725CD6AAAC8E0894F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BasePetABP_AnimGraphNode_TransitionResult_D5F4D4094E2A63878ED042A083D69675();
	void ExecuteUbergraph_BasePetABP(int EntryPoint);
};


}

