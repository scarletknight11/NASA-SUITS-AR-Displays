#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_tA56D153C1EABC9FB802D4F354B4E536F249FF4FE;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_t13875FE3163CFA961C09134FFAA2E0903229691A;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009;
// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame>
struct List_1_t7047292520C88A40E765EA61E967062F583F6C2A;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// Microsoft.WindowsAzure.Storage.Blob.BlobContainerProperties
struct BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember
struct CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6;
// System.Linq.Expressions.CatchBlock
struct CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB;
// Cinemachine.CinemachineBlend
struct CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C;
// Cinemachine.CinemachineBlenderSettings
struct CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F;
// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83;
// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422;
// Cinemachine.CinemachineOrbitalTransposer
struct CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2;
// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5;
// System.Security.Claims.Claim
struct Claim_t6D300709533C6DC51B9779392A364173CF32633F;
// System.Security.Claims.ClaimsIdentity
struct ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6;
// Microsoft.WindowsAzure.Storage.Blob.CloudBlobClient
struct CloudBlobClient_t44C27ED6592B87AE409E23EF420D454D9AC8A04A;
// Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer
struct CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C;
// Microsoft.WindowsAzure.Storage.File.CloudFileClient
struct CloudFileClient_t075EC387BF96BF757C7E3871DCF1576E2BF8F983;
// Microsoft.WindowsAzure.Storage.File.CloudFileShare
struct CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// Microsoft.WindowsAzure.Storage.File.FileShareProperties
struct FileShareProperties_tD5DA5BFFE05A5D1A450047D120309AF49A0D8870;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608;
// Cinemachine.ICinemachineCamera
struct ICinemachineCamera_t6F02F958011535010196E7CDD88578BEDB9AE685;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t1A8D13688535CFE851EE667877C439AC8D1D38CC;
// Microsoft.CSharp.RuntimeBinder.Semantics.MethPropWithInst
struct MethPropWithInst_t22CBBCC9568731C65B093F0E0CBF62F396710322;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Microsoft.WindowsAzure.Storage.StorageUri
struct StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray
struct TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// Cinemachine.AxisState/IInputAxisProvider
struct IInputAxisProvider_t60E3751C2B79760C58FA84BC376D8A3DC1E7AE70;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Cinemachine.CinemachineBrain/BrainEvent
struct BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E;
// Cinemachine.CinemachineBrain/VcamActivatedEvent
struct VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296;
// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate
struct UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D;
// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate
struct CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19;
// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate
struct DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28;

IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1;
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E;
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
struct CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C;
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
struct CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3;
struct CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51;
struct CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F;
struct CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306;
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC;
struct CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973;
struct CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4;
struct CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A;
struct CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80;
struct ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A;
struct CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B;
struct CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Char>
struct NOVTABLE IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Char>
struct NOVTABLE IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m099434DF042C31618026185DCA6449264AA5C40C(uint32_t* comReturnValueArraySize, Il2CppChar** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Char>
struct NOVTABLE IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B(uint32_t ___index0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.IDisposable>
struct NOVTABLE IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Char>
struct NOVTABLE IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04(uint32_t ___index0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849(IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94(uint32_t ___index0, Il2CppChar ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A(uint32_t ___index0, Il2CppChar ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32(Il2CppChar ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01(uint32_t ___items0ArraySize, Il2CppChar* ___items0) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};

// System.Object


// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationCallbackInfo::Callback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Callback_0;
	// System.Object System.Threading.CancellationCallbackInfo::StateForCallback
	RuntimeObject * ___StateForCallback_1;
	// System.Threading.SynchronizationContext System.Threading.CancellationCallbackInfo::TargetSyncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___TargetSyncContext_2;
	// System.Threading.ExecutionContext System.Threading.CancellationCallbackInfo::TargetExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___TargetExecutionContext_3;
	// System.Threading.CancellationTokenSource System.Threading.CancellationCallbackInfo::CancellationTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___CancellationTokenSource_4;

public:
	inline static int32_t get_offset_of_Callback_0() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___Callback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Callback_0() const { return ___Callback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Callback_0() { return &___Callback_0; }
	inline void set_Callback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateForCallback_1() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___StateForCallback_1)); }
	inline RuntimeObject * get_StateForCallback_1() const { return ___StateForCallback_1; }
	inline RuntimeObject ** get_address_of_StateForCallback_1() { return &___StateForCallback_1; }
	inline void set_StateForCallback_1(RuntimeObject * value)
	{
		___StateForCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateForCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSyncContext_2() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___TargetSyncContext_2)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_TargetSyncContext_2() const { return ___TargetSyncContext_2; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_TargetSyncContext_2() { return &___TargetSyncContext_2; }
	inline void set_TargetSyncContext_2(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___TargetSyncContext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSyncContext_2), (void*)value);
	}

	inline static int32_t get_offset_of_TargetExecutionContext_3() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___TargetExecutionContext_3)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_TargetExecutionContext_3() const { return ___TargetExecutionContext_3; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_TargetExecutionContext_3() { return &___TargetExecutionContext_3; }
	inline void set_TargetExecutionContext_3(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___TargetExecutionContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetExecutionContext_3), (void*)value);
	}

	inline static int32_t get_offset_of_CancellationTokenSource_4() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B, ___CancellationTokenSource_4)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_CancellationTokenSource_4() const { return ___CancellationTokenSource_4; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_CancellationTokenSource_4() { return &___CancellationTokenSource_4; }
	inline void set_CancellationTokenSource_4(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___CancellationTokenSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancellationTokenSource_4), (void*)value);
	}
};

struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B_StaticFields
{
public:
	// System.Threading.ContextCallback System.Threading.CancellationCallbackInfo::s_executionContextCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_executionContextCallback_5;

public:
	inline static int32_t get_offset_of_s_executionContextCallback_5() { return static_cast<int32_t>(offsetof(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B_StaticFields, ___s_executionContextCallback_5)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_executionContextCallback_5() const { return ___s_executionContextCallback_5; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_executionContextCallback_5() { return &___s_executionContextCallback_5; }
	inline void set_s_executionContextCallback_5(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_executionContextCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_executionContextCallback_5), (void*)value);
	}
};


// Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember
struct CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethPropWithInst Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember::mpwi
	MethPropWithInst_t22CBBCC9568731C65B093F0E0CBF62F396710322 * ___mpwi_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember::params
	TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * ___params_1;
	// System.Byte Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember::ctypeLift
	uint8_t ___ctypeLift_2;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember::fExpanded
	bool ___fExpanded_3;

public:
	inline static int32_t get_offset_of_mpwi_0() { return static_cast<int32_t>(offsetof(CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599, ___mpwi_0)); }
	inline MethPropWithInst_t22CBBCC9568731C65B093F0E0CBF62F396710322 * get_mpwi_0() const { return ___mpwi_0; }
	inline MethPropWithInst_t22CBBCC9568731C65B093F0E0CBF62F396710322 ** get_address_of_mpwi_0() { return &___mpwi_0; }
	inline void set_mpwi_0(MethPropWithInst_t22CBBCC9568731C65B093F0E0CBF62F396710322 * value)
	{
		___mpwi_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mpwi_0), (void*)value);
	}

	inline static int32_t get_offset_of_params_1() { return static_cast<int32_t>(offsetof(CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599, ___params_1)); }
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * get_params_1() const { return ___params_1; }
	inline TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 ** get_address_of_params_1() { return &___params_1; }
	inline void set_params_1(TypeArray_tFFE8D794419341949CE8882FDE6D4C52E80DF4A2 * value)
	{
		___params_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___params_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctypeLift_2() { return static_cast<int32_t>(offsetof(CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599, ___ctypeLift_2)); }
	inline uint8_t get_ctypeLift_2() const { return ___ctypeLift_2; }
	inline uint8_t* get_address_of_ctypeLift_2() { return &___ctypeLift_2; }
	inline void set_ctypeLift_2(uint8_t value)
	{
		___ctypeLift_2 = value;
	}

	inline static int32_t get_offset_of_fExpanded_3() { return static_cast<int32_t>(offsetof(CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599, ___fExpanded_3)); }
	inline bool get_fExpanded_3() const { return ___fExpanded_3; }
	inline bool* get_address_of_fExpanded_3() { return &___fExpanded_3; }
	inline void set_fExpanded_3(bool value)
	{
		___fExpanded_3 = value;
	}
};


// System.Text.RegularExpressions.Capture
struct Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Linq.Expressions.CatchBlock
struct CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::<Variable>k__BackingField
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___U3CVariableU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.CatchBlock::<Test>k__BackingField
	Type_t * ___U3CTestU3Ek__BackingField_1;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Body>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CBodyU3Ek__BackingField_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Filter>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CVariableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CVariableU3Ek__BackingField_0)); }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * get_U3CVariableU3Ek__BackingField_0() const { return ___U3CVariableU3Ek__BackingField_0; }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** get_address_of_U3CVariableU3Ek__BackingField_0() { return &___U3CVariableU3Ek__BackingField_0; }
	inline void set_U3CVariableU3Ek__BackingField_0(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		___U3CVariableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVariableU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CTestU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTestU3Ek__BackingField_1() const { return ___U3CTestU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTestU3Ek__BackingField_1() { return &___U3CTestU3Ek__BackingField_1; }
	inline void set_U3CTestU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTestU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CBodyU3Ek__BackingField_2)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CBodyU3Ek__BackingField_2() const { return ___U3CBodyU3Ek__BackingField_2; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CBodyU3Ek__BackingField_2() { return &___U3CBodyU3Ek__BackingField_2; }
	inline void set_U3CBodyU3Ek__BackingField_2(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CBodyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CFilterU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// System.Security.Claims.Claim
struct Claim_t6D300709533C6DC51B9779392A364173CF32633F  : public RuntimeObject
{
public:
	// System.String System.Security.Claims.Claim::m_issuer
	String_t* ___m_issuer_0;
	// System.String System.Security.Claims.Claim::m_originalIssuer
	String_t* ___m_originalIssuer_1;
	// System.String System.Security.Claims.Claim::m_type
	String_t* ___m_type_2;
	// System.String System.Security.Claims.Claim::m_value
	String_t* ___m_value_3;
	// System.String System.Security.Claims.Claim::m_valueType
	String_t* ___m_valueType_4;
	// System.Byte[] System.Security.Claims.Claim::m_userSerializationData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_userSerializationData_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Claims.Claim::m_properties
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___m_properties_6;
	// System.Object System.Security.Claims.Claim::m_propertyLock
	RuntimeObject * ___m_propertyLock_7;
	// System.Security.Claims.ClaimsIdentity System.Security.Claims.Claim::m_subject
	ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * ___m_subject_8;

public:
	inline static int32_t get_offset_of_m_issuer_0() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_issuer_0)); }
	inline String_t* get_m_issuer_0() const { return ___m_issuer_0; }
	inline String_t** get_address_of_m_issuer_0() { return &___m_issuer_0; }
	inline void set_m_issuer_0(String_t* value)
	{
		___m_issuer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_issuer_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalIssuer_1() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_originalIssuer_1)); }
	inline String_t* get_m_originalIssuer_1() const { return ___m_originalIssuer_1; }
	inline String_t** get_address_of_m_originalIssuer_1() { return &___m_originalIssuer_1; }
	inline void set_m_originalIssuer_1(String_t* value)
	{
		___m_originalIssuer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalIssuer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_type_2() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_type_2)); }
	inline String_t* get_m_type_2() const { return ___m_type_2; }
	inline String_t** get_address_of_m_type_2() { return &___m_type_2; }
	inline void set_m_type_2(String_t* value)
	{
		___m_type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_type_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_value_3() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_value_3)); }
	inline String_t* get_m_value_3() const { return ___m_value_3; }
	inline String_t** get_address_of_m_value_3() { return &___m_value_3; }
	inline void set_m_value_3(String_t* value)
	{
		___m_value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_value_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueType_4() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_valueType_4)); }
	inline String_t* get_m_valueType_4() const { return ___m_valueType_4; }
	inline String_t** get_address_of_m_valueType_4() { return &___m_valueType_4; }
	inline void set_m_valueType_4(String_t* value)
	{
		___m_valueType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueType_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_userSerializationData_5() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_userSerializationData_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_userSerializationData_5() const { return ___m_userSerializationData_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_userSerializationData_5() { return &___m_userSerializationData_5; }
	inline void set_m_userSerializationData_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_userSerializationData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_userSerializationData_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_properties_6() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_properties_6)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_m_properties_6() const { return ___m_properties_6; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_m_properties_6() { return &___m_properties_6; }
	inline void set_m_properties_6(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___m_properties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_properties_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_propertyLock_7() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_propertyLock_7)); }
	inline RuntimeObject * get_m_propertyLock_7() const { return ___m_propertyLock_7; }
	inline RuntimeObject ** get_address_of_m_propertyLock_7() { return &___m_propertyLock_7; }
	inline void set_m_propertyLock_7(RuntimeObject * value)
	{
		___m_propertyLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_propertyLock_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_subject_8() { return static_cast<int32_t>(offsetof(Claim_t6D300709533C6DC51B9779392A364173CF32633F, ___m_subject_8)); }
	inline ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * get_m_subject_8() const { return ___m_subject_8; }
	inline ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 ** get_address_of_m_subject_8() { return &___m_subject_8; }
	inline void set_m_subject_8(ClaimsIdentity_t26C3CA2577EBD08609B8A70E4F35797A9AF900F6 * value)
	{
		___m_subject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subject_8), (void*)value);
	}
};


// Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer
struct CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C  : public RuntimeObject
{
public:
	// Microsoft.WindowsAzure.Storage.Blob.CloudBlobClient Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer::<ServiceClient>k__BackingField
	CloudBlobClient_t44C27ED6592B87AE409E23EF420D454D9AC8A04A * ___U3CServiceClientU3Ek__BackingField_0;
	// Microsoft.WindowsAzure.Storage.StorageUri Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer::<StorageUri>k__BackingField
	StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE * ___U3CStorageUriU3Ek__BackingField_1;
	// System.String Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer::<Metadata>k__BackingField
	RuntimeObject* ___U3CMetadataU3Ek__BackingField_3;
	// Microsoft.WindowsAzure.Storage.Blob.BlobContainerProperties Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer::<Properties>k__BackingField
	BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 * ___U3CPropertiesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CServiceClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C, ___U3CServiceClientU3Ek__BackingField_0)); }
	inline CloudBlobClient_t44C27ED6592B87AE409E23EF420D454D9AC8A04A * get_U3CServiceClientU3Ek__BackingField_0() const { return ___U3CServiceClientU3Ek__BackingField_0; }
	inline CloudBlobClient_t44C27ED6592B87AE409E23EF420D454D9AC8A04A ** get_address_of_U3CServiceClientU3Ek__BackingField_0() { return &___U3CServiceClientU3Ek__BackingField_0; }
	inline void set_U3CServiceClientU3Ek__BackingField_0(CloudBlobClient_t44C27ED6592B87AE409E23EF420D454D9AC8A04A * value)
	{
		___U3CServiceClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceClientU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorageUriU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C, ___U3CStorageUriU3Ek__BackingField_1)); }
	inline StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE * get_U3CStorageUriU3Ek__BackingField_1() const { return ___U3CStorageUriU3Ek__BackingField_1; }
	inline StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE ** get_address_of_U3CStorageUriU3Ek__BackingField_1() { return &___U3CStorageUriU3Ek__BackingField_1; }
	inline void set_U3CStorageUriU3Ek__BackingField_1(StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE * value)
	{
		___U3CStorageUriU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageUriU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C, ___U3CNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameU3Ek__BackingField_2() const { return ___U3CNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_2() { return &___U3CNameU3Ek__BackingField_2; }
	inline void set_U3CNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C, ___U3CMetadataU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CMetadataU3Ek__BackingField_3() const { return ___U3CMetadataU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CMetadataU3Ek__BackingField_3() { return &___U3CMetadataU3Ek__BackingField_3; }
	inline void set_U3CMetadataU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CMetadataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C, ___U3CPropertiesU3Ek__BackingField_4)); }
	inline BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 * get_U3CPropertiesU3Ek__BackingField_4() const { return ___U3CPropertiesU3Ek__BackingField_4; }
	inline BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 ** get_address_of_U3CPropertiesU3Ek__BackingField_4() { return &___U3CPropertiesU3Ek__BackingField_4; }
	inline void set_U3CPropertiesU3Ek__BackingField_4(BlobContainerProperties_t632E9745F16B621558065A86C3AB69A2585E0FA8 * value)
	{
		___U3CPropertiesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 
{
public:
	// System.Boolean Cinemachine.AxisState/Recentering::m_enabled
	bool ___m_enabled_0;
	// System.Single Cinemachine.AxisState/Recentering::m_WaitTime
	float ___m_WaitTime_1;
	// System.Single Cinemachine.AxisState/Recentering::m_RecenteringTime
	float ___m_RecenteringTime_2;
	// System.Single Cinemachine.AxisState/Recentering::mLastAxisInputTime
	float ___mLastAxisInputTime_3;
	// System.Single Cinemachine.AxisState/Recentering::mRecenteringVelocity
	float ___mRecenteringVelocity_4;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyHeadingDefinition
	int32_t ___m_LegacyHeadingDefinition_5;
	// System.Int32 Cinemachine.AxisState/Recentering::m_LegacyVelocityFilterStrength
	int32_t ___m_LegacyVelocityFilterStrength_6;

public:
	inline static int32_t get_offset_of_m_enabled_0() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_enabled_0)); }
	inline bool get_m_enabled_0() const { return ___m_enabled_0; }
	inline bool* get_address_of_m_enabled_0() { return &___m_enabled_0; }
	inline void set_m_enabled_0(bool value)
	{
		___m_enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitTime_1() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_WaitTime_1)); }
	inline float get_m_WaitTime_1() const { return ___m_WaitTime_1; }
	inline float* get_address_of_m_WaitTime_1() { return &___m_WaitTime_1; }
	inline void set_m_WaitTime_1(float value)
	{
		___m_WaitTime_1 = value;
	}

	inline static int32_t get_offset_of_m_RecenteringTime_2() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_RecenteringTime_2)); }
	inline float get_m_RecenteringTime_2() const { return ___m_RecenteringTime_2; }
	inline float* get_address_of_m_RecenteringTime_2() { return &___m_RecenteringTime_2; }
	inline void set_m_RecenteringTime_2(float value)
	{
		___m_RecenteringTime_2 = value;
	}

	inline static int32_t get_offset_of_mLastAxisInputTime_3() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mLastAxisInputTime_3)); }
	inline float get_mLastAxisInputTime_3() const { return ___mLastAxisInputTime_3; }
	inline float* get_address_of_mLastAxisInputTime_3() { return &___mLastAxisInputTime_3; }
	inline void set_mLastAxisInputTime_3(float value)
	{
		___mLastAxisInputTime_3 = value;
	}

	inline static int32_t get_offset_of_mRecenteringVelocity_4() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___mRecenteringVelocity_4)); }
	inline float get_mRecenteringVelocity_4() const { return ___mRecenteringVelocity_4; }
	inline float* get_address_of_mRecenteringVelocity_4() { return &___mRecenteringVelocity_4; }
	inline void set_mRecenteringVelocity_4(float value)
	{
		___mRecenteringVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingDefinition_5() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyHeadingDefinition_5)); }
	inline int32_t get_m_LegacyHeadingDefinition_5() const { return ___m_LegacyHeadingDefinition_5; }
	inline int32_t* get_address_of_m_LegacyHeadingDefinition_5() { return &___m_LegacyHeadingDefinition_5; }
	inline void set_m_LegacyHeadingDefinition_5(int32_t value)
	{
		___m_LegacyHeadingDefinition_5 = value;
	}

	inline static int32_t get_offset_of_m_LegacyVelocityFilterStrength_6() { return static_cast<int32_t>(offsetof(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427, ___m_LegacyVelocityFilterStrength_6)); }
	inline int32_t get_m_LegacyVelocityFilterStrength_6() const { return ___m_LegacyVelocityFilterStrength_6; }
	inline int32_t* get_address_of_m_LegacyVelocityFilterStrength_6() { return &___m_LegacyVelocityFilterStrength_6; }
	inline void set_m_LegacyVelocityFilterStrength_6(int32_t value)
	{
		___m_LegacyVelocityFilterStrength_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};
// Native definition for COM marshalling of Cinemachine.AxisState/Recentering
struct Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com
{
	int32_t ___m_enabled_0;
	float ___m_WaitTime_1;
	float ___m_RecenteringTime_2;
	float ___mLastAxisInputTime_3;
	float ___mRecenteringVelocity_4;
	int32_t ___m_LegacyHeadingDefinition_5;
	int32_t ___m_LegacyVelocityFilterStrength_6;
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B 
{
public:
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_Custom_0() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Custom_0)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Custom_0() const { return ___m_Custom_0; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Custom_0() { return &___m_Custom_0; }
	inline void set_m_Custom_0(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Custom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Custom_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType
struct CardinalAxisType_t834C02CB6DCF0447F2CBC4ACE99C271EBCF99078 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CardinalAxisType_t834C02CB6DCF0447F2CBC4ACE99C271EBCF99078, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Cinemachine.AxisState/SpeedMode
struct SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB 
{
public:
	// System.Int32 Cinemachine.AxisState/SpeedMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpeedMode_t7371A14D833762D166BB6C190C37DB1C30D053BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/GateFitMode
struct GateFitMode_tDBD4389C530FAD67ED78789C02808A1D2DB4A525 
{
public:
	// System.Int32 UnityEngine.Camera/GateFitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GateFitMode_tDBD4389C530FAD67ED78789C02808A1D2DB4A525, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CameraState/BlendHintValue
struct BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4 
{
public:
	// System.Int32 Cinemachine.CameraState/BlendHintValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHintValue_t7E87A2F98F21271FE108514B78A38754BEBE94F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBlendDefinition/Style
struct Style_t710EA49EB59E246B2C5DC218BDC1352DABAC757E 
{
public:
	// System.Int32 Cinemachine.CinemachineBlendDefinition/Style::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Style_t710EA49EB59E246B2C5DC218BDC1352DABAC757E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/BrainUpdateMethod
struct BrainUpdateMethod_t38DCF33A6BB4E3829652F644BDC79617BBBE6AEF 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/BrainUpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BrainUpdateMethod_t38DCF33A6BB4E3829652F644BDC79617BBBE6AEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineBrain/UpdateMethod
struct UpdateMethod_t2BC8740E83444F42609FCB121D59B2B147B7E2EA 
{
public:
	// System.Int32 Cinemachine.CinemachineBrain/UpdateMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMethod_t2BC8740E83444F42609FCB121D59B2B147B7E2EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/AngularDampingMode
struct AngularDampingMode_t7862BE26F11C587BCA89310C44F6BC89D2F9C33A 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/AngularDampingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AngularDampingMode_t7862BE26F11C587BCA89310C44F6BC89D2F9C33A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineTransposer/BindingMode
struct BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196 
{
public:
	// System.Int32 Cinemachine.CinemachineTransposer/BindingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingMode_tAE1CC7E6A8544E38A9E5D96BF5B0171B038AE196, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/BlendHint
struct BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/BlendHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendHint_t9B1FFA41B35EC74367AB4D7A1AE2A4D1FE29B7CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode
struct StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5 
{
public:
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StandbyUpdateMode_t60D677E92B072D6B19C7F69C3DD753EB3457F3A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.LensSettings/OverrideModes
struct OverrideModes_t9F50F7DC95547FC2670F467631715B79E53095C4 
{
public:
	// System.Int32 Cinemachine.LensSettings/OverrideModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverrideModes_t9F50F7DC95547FC2670F467631715B79E53095C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition
struct HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122 
{
public:
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HeadingDefinition_tEF350573F75F64F0AED93E50690DBDBA99343122, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.DateTimeOffset>
struct Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 
{
public:
	// T System.Nullable`1::value
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___value_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_value_0() const { return ___value_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8 
{
public:
	// System.Single Cinemachine.AxisState::Value
	float ___Value_0;
	// Cinemachine.AxisState/SpeedMode Cinemachine.AxisState::m_SpeedMode
	int32_t ___m_SpeedMode_1;
	// System.Single Cinemachine.AxisState::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single Cinemachine.AxisState::m_AccelTime
	float ___m_AccelTime_3;
	// System.Single Cinemachine.AxisState::m_DecelTime
	float ___m_DecelTime_4;
	// System.String Cinemachine.AxisState::m_InputAxisName
	String_t* ___m_InputAxisName_5;
	// System.Single Cinemachine.AxisState::m_InputAxisValue
	float ___m_InputAxisValue_6;
	// System.Boolean Cinemachine.AxisState::m_InvertInput
	bool ___m_InvertInput_7;
	// System.Single Cinemachine.AxisState::m_MinValue
	float ___m_MinValue_8;
	// System.Single Cinemachine.AxisState::m_MaxValue
	float ___m_MaxValue_9;
	// System.Boolean Cinemachine.AxisState::m_Wrap
	bool ___m_Wrap_10;
	// Cinemachine.AxisState/Recentering Cinemachine.AxisState::m_Recentering
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_Recentering_11;
	// System.Single Cinemachine.AxisState::m_CurrentSpeed
	float ___m_CurrentSpeed_12;
	// System.Single Cinemachine.AxisState::m_LastUpdateTime
	float ___m_LastUpdateTime_13;
	// System.Int32 Cinemachine.AxisState::m_LastUpdateFrame
	int32_t ___m_LastUpdateFrame_14;
	// Cinemachine.AxisState/IInputAxisProvider Cinemachine.AxisState::m_InputAxisProvider
	RuntimeObject* ___m_InputAxisProvider_16;
	// System.Int32 Cinemachine.AxisState::m_InputAxisIndex
	int32_t ___m_InputAxisIndex_17;
	// System.Boolean Cinemachine.AxisState::<ValueRangeLocked>k__BackingField
	bool ___U3CValueRangeLockedU3Ek__BackingField_18;
	// System.Boolean Cinemachine.AxisState::<HasRecentering>k__BackingField
	bool ___U3CHasRecenteringU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___Value_0)); }
	inline float get_Value_0() const { return ___Value_0; }
	inline float* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(float value)
	{
		___Value_0 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMode_1() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_SpeedMode_1)); }
	inline int32_t get_m_SpeedMode_1() const { return ___m_SpeedMode_1; }
	inline int32_t* get_address_of_m_SpeedMode_1() { return &___m_SpeedMode_1; }
	inline void set_m_SpeedMode_1(int32_t value)
	{
		___m_SpeedMode_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_AccelTime_3() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_AccelTime_3)); }
	inline float get_m_AccelTime_3() const { return ___m_AccelTime_3; }
	inline float* get_address_of_m_AccelTime_3() { return &___m_AccelTime_3; }
	inline void set_m_AccelTime_3(float value)
	{
		___m_AccelTime_3 = value;
	}

	inline static int32_t get_offset_of_m_DecelTime_4() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_DecelTime_4)); }
	inline float get_m_DecelTime_4() const { return ___m_DecelTime_4; }
	inline float* get_address_of_m_DecelTime_4() { return &___m_DecelTime_4; }
	inline void set_m_DecelTime_4(float value)
	{
		___m_DecelTime_4 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisName_5() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisName_5)); }
	inline String_t* get_m_InputAxisName_5() const { return ___m_InputAxisName_5; }
	inline String_t** get_address_of_m_InputAxisName_5() { return &___m_InputAxisName_5; }
	inline void set_m_InputAxisName_5(String_t* value)
	{
		___m_InputAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisValue_6() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisValue_6)); }
	inline float get_m_InputAxisValue_6() const { return ___m_InputAxisValue_6; }
	inline float* get_address_of_m_InputAxisValue_6() { return &___m_InputAxisValue_6; }
	inline void set_m_InputAxisValue_6(float value)
	{
		___m_InputAxisValue_6 = value;
	}

	inline static int32_t get_offset_of_m_InvertInput_7() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InvertInput_7)); }
	inline bool get_m_InvertInput_7() const { return ___m_InvertInput_7; }
	inline bool* get_address_of_m_InvertInput_7() { return &___m_InvertInput_7; }
	inline void set_m_InvertInput_7(bool value)
	{
		___m_InvertInput_7 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_8() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MinValue_8)); }
	inline float get_m_MinValue_8() const { return ___m_MinValue_8; }
	inline float* get_address_of_m_MinValue_8() { return &___m_MinValue_8; }
	inline void set_m_MinValue_8(float value)
	{
		___m_MinValue_8 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_9() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_MaxValue_9)); }
	inline float get_m_MaxValue_9() const { return ___m_MaxValue_9; }
	inline float* get_address_of_m_MaxValue_9() { return &___m_MaxValue_9; }
	inline void set_m_MaxValue_9(float value)
	{
		___m_MaxValue_9 = value;
	}

	inline static int32_t get_offset_of_m_Wrap_10() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Wrap_10)); }
	inline bool get_m_Wrap_10() const { return ___m_Wrap_10; }
	inline bool* get_address_of_m_Wrap_10() { return &___m_Wrap_10; }
	inline void set_m_Wrap_10(bool value)
	{
		___m_Wrap_10 = value;
	}

	inline static int32_t get_offset_of_m_Recentering_11() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_Recentering_11)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_Recentering_11() const { return ___m_Recentering_11; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_Recentering_11() { return &___m_Recentering_11; }
	inline void set_m_Recentering_11(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_Recentering_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSpeed_12() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_CurrentSpeed_12)); }
	inline float get_m_CurrentSpeed_12() const { return ___m_CurrentSpeed_12; }
	inline float* get_address_of_m_CurrentSpeed_12() { return &___m_CurrentSpeed_12; }
	inline void set_m_CurrentSpeed_12(float value)
	{
		___m_CurrentSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateTime_13() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_LastUpdateTime_13)); }
	inline float get_m_LastUpdateTime_13() const { return ___m_LastUpdateTime_13; }
	inline float* get_address_of_m_LastUpdateTime_13() { return &___m_LastUpdateTime_13; }
	inline void set_m_LastUpdateTime_13(float value)
	{
		___m_LastUpdateTime_13 = value;
	}

	inline static int32_t get_offset_of_m_LastUpdateFrame_14() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_LastUpdateFrame_14)); }
	inline int32_t get_m_LastUpdateFrame_14() const { return ___m_LastUpdateFrame_14; }
	inline int32_t* get_address_of_m_LastUpdateFrame_14() { return &___m_LastUpdateFrame_14; }
	inline void set_m_LastUpdateFrame_14(int32_t value)
	{
		___m_LastUpdateFrame_14 = value;
	}

	inline static int32_t get_offset_of_m_InputAxisProvider_16() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisProvider_16)); }
	inline RuntimeObject* get_m_InputAxisProvider_16() const { return ___m_InputAxisProvider_16; }
	inline RuntimeObject** get_address_of_m_InputAxisProvider_16() { return &___m_InputAxisProvider_16; }
	inline void set_m_InputAxisProvider_16(RuntimeObject* value)
	{
		___m_InputAxisProvider_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputAxisProvider_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputAxisIndex_17() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___m_InputAxisIndex_17)); }
	inline int32_t get_m_InputAxisIndex_17() const { return ___m_InputAxisIndex_17; }
	inline int32_t* get_address_of_m_InputAxisIndex_17() { return &___m_InputAxisIndex_17; }
	inline void set_m_InputAxisIndex_17(int32_t value)
	{
		___m_InputAxisIndex_17 = value;
	}

	inline static int32_t get_offset_of_U3CValueRangeLockedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CValueRangeLockedU3Ek__BackingField_18)); }
	inline bool get_U3CValueRangeLockedU3Ek__BackingField_18() const { return ___U3CValueRangeLockedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CValueRangeLockedU3Ek__BackingField_18() { return &___U3CValueRangeLockedU3Ek__BackingField_18; }
	inline void set_U3CValueRangeLockedU3Ek__BackingField_18(bool value)
	{
		___U3CValueRangeLockedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CHasRecenteringU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(AxisState_t376D19829A676B98933979F42845F6476071DDE8, ___U3CHasRecenteringU3Ek__BackingField_19)); }
	inline bool get_U3CHasRecenteringU3Ek__BackingField_19() const { return ___U3CHasRecenteringU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CHasRecenteringU3Ek__BackingField_19() { return &___U3CHasRecenteringU3Ek__BackingField_19; }
	inline void set_U3CHasRecenteringU3Ek__BackingField_19(bool value)
	{
		___U3CHasRecenteringU3Ek__BackingField_19 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_pinvoke
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	char* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_pinvoke ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};
// Native definition for COM marshalling of Cinemachine.AxisState
struct AxisState_t376D19829A676B98933979F42845F6476071DDE8_marshaled_com
{
	float ___Value_0;
	int32_t ___m_SpeedMode_1;
	float ___m_MaxSpeed_2;
	float ___m_AccelTime_3;
	float ___m_DecelTime_4;
	Il2CppChar* ___m_InputAxisName_5;
	float ___m_InputAxisValue_6;
	int32_t ___m_InvertInput_7;
	float ___m_MinValue_8;
	float ___m_MaxValue_9;
	int32_t ___m_Wrap_10;
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427_marshaled_com ___m_Recentering_11;
	float ___m_CurrentSpeed_12;
	float ___m_LastUpdateTime_13;
	int32_t ___m_LastUpdateFrame_14;
	RuntimeObject* ___m_InputAxisProvider_16;
	int32_t ___m_InputAxisIndex_17;
	int32_t ___U3CValueRangeLockedU3Ek__BackingField_18;
	int32_t ___U3CHasRecenteringU3Ek__BackingField_19;
};

// Cinemachine.CinemachineBlendDefinition
struct CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE 
{
public:
	// Cinemachine.CinemachineBlendDefinition/Style Cinemachine.CinemachineBlendDefinition::m_Style
	int32_t ___m_Style_0;
	// System.Single Cinemachine.CinemachineBlendDefinition::m_Time
	float ___m_Time_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBlendDefinition::m_CustomCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CustomCurve_2;

public:
	inline static int32_t get_offset_of_m_Style_0() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_Style_0)); }
	inline int32_t get_m_Style_0() const { return ___m_Style_0; }
	inline int32_t* get_address_of_m_Style_0() { return &___m_Style_0; }
	inline void set_m_Style_0(int32_t value)
	{
		___m_Style_0 = value;
	}

	inline static int32_t get_offset_of_m_Time_1() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_Time_1)); }
	inline float get_m_Time_1() const { return ___m_Time_1; }
	inline float* get_address_of_m_Time_1() { return &___m_Time_1; }
	inline void set_m_Time_1(float value)
	{
		___m_Time_1 = value;
	}

	inline static int32_t get_offset_of_m_CustomCurve_2() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE, ___m_CustomCurve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CustomCurve_2() const { return ___m_CustomCurve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CustomCurve_2() { return &___m_CustomCurve_2; }
	inline void set_m_CustomCurve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CustomCurve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomCurve_2), (void*)value);
	}
};

struct CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_StaticFields
{
public:
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineBlendDefinition::sStandardCurves
	AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* ___sStandardCurves_3;

public:
	inline static int32_t get_offset_of_sStandardCurves_3() { return static_cast<int32_t>(offsetof(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE_StaticFields, ___sStandardCurves_3)); }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* get_sStandardCurves_3() const { return ___sStandardCurves_3; }
	inline AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A** get_address_of_sStandardCurves_3() { return &___sStandardCurves_3; }
	inline void set_sStandardCurves_3(AnimationCurveU5BU5D_tE3C6891AFD2EF0188200F790D3120A09202E544A* value)
	{
		___sStandardCurves_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sStandardCurves_3), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA 
{
public:
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;

public:
	inline static int32_t get_offset_of_FieldOfView_1() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FieldOfView_1)); }
	inline float get_FieldOfView_1() const { return ___FieldOfView_1; }
	inline float* get_address_of_FieldOfView_1() { return &___FieldOfView_1; }
	inline void set_FieldOfView_1(float value)
	{
		___FieldOfView_1 = value;
	}

	inline static int32_t get_offset_of_OrthographicSize_2() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___OrthographicSize_2)); }
	inline float get_OrthographicSize_2() const { return ___OrthographicSize_2; }
	inline float* get_address_of_OrthographicSize_2() { return &___OrthographicSize_2; }
	inline void set_OrthographicSize_2(float value)
	{
		___OrthographicSize_2 = value;
	}

	inline static int32_t get_offset_of_NearClipPlane_3() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___NearClipPlane_3)); }
	inline float get_NearClipPlane_3() const { return ___NearClipPlane_3; }
	inline float* get_address_of_NearClipPlane_3() { return &___NearClipPlane_3; }
	inline void set_NearClipPlane_3(float value)
	{
		___NearClipPlane_3 = value;
	}

	inline static int32_t get_offset_of_FarClipPlane_4() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___FarClipPlane_4)); }
	inline float get_FarClipPlane_4() const { return ___FarClipPlane_4; }
	inline float* get_address_of_FarClipPlane_4() { return &___FarClipPlane_4; }
	inline void set_FarClipPlane_4(float value)
	{
		___FarClipPlane_4 = value;
	}

	inline static int32_t get_offset_of_Dutch_5() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___Dutch_5)); }
	inline float get_Dutch_5() const { return ___Dutch_5; }
	inline float* get_address_of_Dutch_5() { return &___Dutch_5; }
	inline void set_Dutch_5(float value)
	{
		___Dutch_5 = value;
	}

	inline static int32_t get_offset_of_ModeOverride_6() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___ModeOverride_6)); }
	inline int32_t get_ModeOverride_6() const { return ___ModeOverride_6; }
	inline int32_t* get_address_of_ModeOverride_6() { return &___ModeOverride_6; }
	inline void set_ModeOverride_6(int32_t value)
	{
		___ModeOverride_6 = value;
	}

	inline static int32_t get_offset_of_LensShift_7() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___LensShift_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_LensShift_7() const { return ___LensShift_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_LensShift_7() { return &___LensShift_7; }
	inline void set_LensShift_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___LensShift_7 = value;
	}

	inline static int32_t get_offset_of_GateFit_8() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___GateFit_8)); }
	inline int32_t get_GateFit_8() const { return ___GateFit_8; }
	inline int32_t* get_address_of_GateFit_8() { return &___GateFit_8; }
	inline void set_GateFit_8(int32_t value)
	{
		___GateFit_8 = value;
	}

	inline static int32_t get_offset_of_m_SensorSize_9() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___m_SensorSize_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_SensorSize_9() const { return ___m_SensorSize_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_SensorSize_9() { return &___m_SensorSize_9; }
	inline void set_m_SensorSize_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_SensorSize_9 = value;
	}

	inline static int32_t get_offset_of_m_OrthoFromCamera_10() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___m_OrthoFromCamera_10)); }
	inline bool get_m_OrthoFromCamera_10() const { return ___m_OrthoFromCamera_10; }
	inline bool* get_address_of_m_OrthoFromCamera_10() { return &___m_OrthoFromCamera_10; }
	inline void set_m_OrthoFromCamera_10(bool value)
	{
		___m_OrthoFromCamera_10 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalFromCamera_11() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA, ___m_PhysicalFromCamera_11)); }
	inline bool get_m_PhysicalFromCamera_11() const { return ___m_PhysicalFromCamera_11; }
	inline bool* get_address_of_m_PhysicalFromCamera_11() { return &___m_PhysicalFromCamera_11; }
	inline void set_m_PhysicalFromCamera_11(bool value)
	{
		___m_PhysicalFromCamera_11 = value;
	}
};

struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields
{
public:
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_StaticFields, ___Default_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_Default_0() const { return ___Default_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___Default_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};

// Cinemachine.CinemachineOrbitalTransposer/Heading
struct Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading/HeadingDefinition Cinemachine.CinemachineOrbitalTransposer/Heading::m_Definition
	int32_t ___m_Definition_0;
	// System.Int32 Cinemachine.CinemachineOrbitalTransposer/Heading::m_VelocityFilterStrength
	int32_t ___m_VelocityFilterStrength_1;
	// System.Single Cinemachine.CinemachineOrbitalTransposer/Heading::m_Bias
	float ___m_Bias_2;

public:
	inline static int32_t get_offset_of_m_Definition_0() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Definition_0)); }
	inline int32_t get_m_Definition_0() const { return ___m_Definition_0; }
	inline int32_t* get_address_of_m_Definition_0() { return &___m_Definition_0; }
	inline void set_m_Definition_0(int32_t value)
	{
		___m_Definition_0 = value;
	}

	inline static int32_t get_offset_of_m_VelocityFilterStrength_1() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_VelocityFilterStrength_1)); }
	inline int32_t get_m_VelocityFilterStrength_1() const { return ___m_VelocityFilterStrength_1; }
	inline int32_t* get_address_of_m_VelocityFilterStrength_1() { return &___m_VelocityFilterStrength_1; }
	inline void set_m_VelocityFilterStrength_1(int32_t value)
	{
		___m_VelocityFilterStrength_1 = value;
	}

	inline static int32_t get_offset_of_m_Bias_2() { return static_cast<int32_t>(offsetof(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9, ___m_Bias_2)); }
	inline float get_m_Bias_2() const { return ___m_Bias_2; }
	inline float* get_address_of_m_Bias_2() { return &___m_Bias_2; }
	inline void set_m_Bias_2(float value)
	{
		___m_Bias_2 = value;
	}
};


// Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C 
{
public:
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_BlendHint
	int32_t ___m_BlendHint_0;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_InheritPosition
	bool ___m_InheritPosition_1;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineVirtualCameraBase/TransitionParams::m_OnCameraLive
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;

public:
	inline static int32_t get_offset_of_m_BlendHint_0() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_BlendHint_0)); }
	inline int32_t get_m_BlendHint_0() const { return ___m_BlendHint_0; }
	inline int32_t* get_address_of_m_BlendHint_0() { return &___m_BlendHint_0; }
	inline void set_m_BlendHint_0(int32_t value)
	{
		___m_BlendHint_0 = value;
	}

	inline static int32_t get_offset_of_m_InheritPosition_1() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_InheritPosition_1)); }
	inline bool get_m_InheritPosition_1() const { return ___m_InheritPosition_1; }
	inline bool* get_address_of_m_InheritPosition_1() { return &___m_InheritPosition_1; }
	inline void set_m_InheritPosition_1(bool value)
	{
		___m_InheritPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_OnCameraLive_2() { return static_cast<int32_t>(offsetof(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C, ___m_OnCameraLive_2)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_OnCameraLive_2() const { return ___m_OnCameraLive_2; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_OnCameraLive_2() { return &___m_OnCameraLive_2; }
	inline void set_m_OnCameraLive_2(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_OnCameraLive_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCameraLive_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_pinvoke
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};
// Native definition for COM marshalling of Cinemachine.CinemachineVirtualCameraBase/TransitionParams
struct TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C_marshaled_com
{
	int32_t ___m_BlendHint_0;
	int32_t ___m_InheritPosition_1;
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_OnCameraLive_2;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 
{
public:
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_Lens_0() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___Lens_0)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_Lens_0() const { return ___Lens_0; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_Lens_0() { return &___Lens_0; }
	inline void set_Lens_0(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___Lens_0 = value;
	}

	inline static int32_t get_offset_of_ReferenceUp_1() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___ReferenceUp_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_ReferenceUp_1() const { return ___ReferenceUp_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_ReferenceUp_1() { return &___ReferenceUp_1; }
	inline void set_ReferenceUp_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___ReferenceUp_1 = value;
	}

	inline static int32_t get_offset_of_ReferenceLookAt_2() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___ReferenceLookAt_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_ReferenceLookAt_2() const { return ___ReferenceLookAt_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_ReferenceLookAt_2() { return &___ReferenceLookAt_2; }
	inline void set_ReferenceLookAt_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___ReferenceLookAt_2 = value;
	}

	inline static int32_t get_offset_of_RawPosition_4() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___RawPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RawPosition_4() const { return ___RawPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RawPosition_4() { return &___RawPosition_4; }
	inline void set_RawPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RawPosition_4 = value;
	}

	inline static int32_t get_offset_of_RawOrientation_5() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___RawOrientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_RawOrientation_5() const { return ___RawOrientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_RawOrientation_5() { return &___RawOrientation_5; }
	inline void set_RawOrientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___RawOrientation_5 = value;
	}

	inline static int32_t get_offset_of_PositionDampingBypass_6() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___PositionDampingBypass_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_PositionDampingBypass_6() const { return ___PositionDampingBypass_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_PositionDampingBypass_6() { return &___PositionDampingBypass_6; }
	inline void set_PositionDampingBypass_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___PositionDampingBypass_6 = value;
	}

	inline static int32_t get_offset_of_ShotQuality_7() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___ShotQuality_7)); }
	inline float get_ShotQuality_7() const { return ___ShotQuality_7; }
	inline float* get_address_of_ShotQuality_7() { return &___ShotQuality_7; }
	inline void set_ShotQuality_7(float value)
	{
		___ShotQuality_7 = value;
	}

	inline static int32_t get_offset_of_PositionCorrection_8() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___PositionCorrection_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_PositionCorrection_8() const { return ___PositionCorrection_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_PositionCorrection_8() { return &___PositionCorrection_8; }
	inline void set_PositionCorrection_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___PositionCorrection_8 = value;
	}

	inline static int32_t get_offset_of_OrientationCorrection_9() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___OrientationCorrection_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_OrientationCorrection_9() const { return ___OrientationCorrection_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_OrientationCorrection_9() { return &___OrientationCorrection_9; }
	inline void set_OrientationCorrection_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___OrientationCorrection_9 = value;
	}

	inline static int32_t get_offset_of_BlendHint_10() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___BlendHint_10)); }
	inline int32_t get_BlendHint_10() const { return ___BlendHint_10; }
	inline int32_t* get_address_of_BlendHint_10() { return &___BlendHint_10; }
	inline void set_BlendHint_10(int32_t value)
	{
		___BlendHint_10 = value;
	}

	inline static int32_t get_offset_of_mCustom0_11() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom0_11)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom0_11() const { return ___mCustom0_11; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom0_11() { return &___mCustom0_11; }
	inline void set_mCustom0_11(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom0_11))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom1_12() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom1_12)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom1_12() const { return ___mCustom1_12; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom1_12() { return &___mCustom1_12; }
	inline void set_mCustom1_12(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom1_12))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom2_13() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom2_13)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom2_13() const { return ___mCustom2_13; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom2_13() { return &___mCustom2_13; }
	inline void set_mCustom2_13(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom2_13))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCustom3_14() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___mCustom3_14)); }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  get_mCustom3_14() const { return ___mCustom3_14; }
	inline CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B * get_address_of_mCustom3_14() { return &___mCustom3_14; }
	inline void set_mCustom3_14(CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  value)
	{
		___mCustom3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mCustom3_14))->___m_Custom_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomOverflow_15() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___m_CustomOverflow_15)); }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * get_m_CustomOverflow_15() const { return ___m_CustomOverflow_15; }
	inline List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 ** get_address_of_m_CustomOverflow_15() { return &___m_CustomOverflow_15; }
	inline void set_m_CustomOverflow_15(List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * value)
	{
		___m_CustomOverflow_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomOverflow_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601, ___U3CNumCustomBlendablesU3Ek__BackingField_16)); }
	inline int32_t get_U3CNumCustomBlendablesU3Ek__BackingField_16() const { return ___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CNumCustomBlendablesU3Ek__BackingField_16() { return &___U3CNumCustomBlendablesU3Ek__BackingField_16; }
	inline void set_U3CNumCustomBlendablesU3Ek__BackingField_16(int32_t value)
	{
		___U3CNumCustomBlendablesU3Ek__BackingField_16 = value;
	}
};

struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields
{
public:
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___kNoPoint_3;

public:
	inline static int32_t get_offset_of_kNoPoint_3() { return static_cast<int32_t>(offsetof(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_StaticFields, ___kNoPoint_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_kNoPoint_3() const { return ___kNoPoint_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_kNoPoint_3() { return &___kNoPoint_3; }
	inline void set_kNoPoint_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___kNoPoint_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_pinvoke
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_pinvoke ___Lens_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ReferenceUp_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ReferenceLookAt_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RawPosition_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___RawOrientation_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionCorrection_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601_marshaled_com
{
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA_marshaled_com ___Lens_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ReferenceUp_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ReferenceLookAt_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RawPosition_4;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___RawOrientation_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___PositionCorrection_8;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom0_11;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom1_12;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom2_13;
	CustomBlendable_t8E179439D0939CA1F23354DD785283354767EA6B  ___mCustom3_14;
	List_1_tA61023C4AB12456AD9E3F6DFCAEC43B9536C6009 * ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// Microsoft.WindowsAzure.Storage.File.CloudFileShare
struct CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7  : public RuntimeObject
{
public:
	// Microsoft.WindowsAzure.Storage.File.CloudFileClient Microsoft.WindowsAzure.Storage.File.CloudFileShare::<ServiceClient>k__BackingField
	CloudFileClient_t075EC387BF96BF757C7E3871DCF1576E2BF8F983 * ___U3CServiceClientU3Ek__BackingField_0;
	// Microsoft.WindowsAzure.Storage.StorageUri Microsoft.WindowsAzure.Storage.File.CloudFileShare::<StorageUri>k__BackingField
	StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE * ___U3CStorageUriU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTimeOffset> Microsoft.WindowsAzure.Storage.File.CloudFileShare::<SnapshotTime>k__BackingField
	Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  ___U3CSnapshotTimeU3Ek__BackingField_2;
	// System.String Microsoft.WindowsAzure.Storage.File.CloudFileShare::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.WindowsAzure.Storage.File.CloudFileShare::<Metadata>k__BackingField
	RuntimeObject* ___U3CMetadataU3Ek__BackingField_4;
	// Microsoft.WindowsAzure.Storage.File.FileShareProperties Microsoft.WindowsAzure.Storage.File.CloudFileShare::<Properties>k__BackingField
	FileShareProperties_tD5DA5BFFE05A5D1A450047D120309AF49A0D8870 * ___U3CPropertiesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CServiceClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7, ___U3CServiceClientU3Ek__BackingField_0)); }
	inline CloudFileClient_t075EC387BF96BF757C7E3871DCF1576E2BF8F983 * get_U3CServiceClientU3Ek__BackingField_0() const { return ___U3CServiceClientU3Ek__BackingField_0; }
	inline CloudFileClient_t075EC387BF96BF757C7E3871DCF1576E2BF8F983 ** get_address_of_U3CServiceClientU3Ek__BackingField_0() { return &___U3CServiceClientU3Ek__BackingField_0; }
	inline void set_U3CServiceClientU3Ek__BackingField_0(CloudFileClient_t075EC387BF96BF757C7E3871DCF1576E2BF8F983 * value)
	{
		___U3CServiceClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceClientU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorageUriU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7, ___U3CStorageUriU3Ek__BackingField_1)); }
	inline StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE * get_U3CStorageUriU3Ek__BackingField_1() const { return ___U3CStorageUriU3Ek__BackingField_1; }
	inline StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE ** get_address_of_U3CStorageUriU3Ek__BackingField_1() { return &___U3CStorageUriU3Ek__BackingField_1; }
	inline void set_U3CStorageUriU3Ek__BackingField_1(StorageUri_t9614AF33F21514C00451710C7D68094BA1FD07DE * value)
	{
		___U3CStorageUriU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageUriU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSnapshotTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7, ___U3CSnapshotTimeU3Ek__BackingField_2)); }
	inline Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  get_U3CSnapshotTimeU3Ek__BackingField_2() const { return ___U3CSnapshotTimeU3Ek__BackingField_2; }
	inline Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 * get_address_of_U3CSnapshotTimeU3Ek__BackingField_2() { return &___U3CSnapshotTimeU3Ek__BackingField_2; }
	inline void set_U3CSnapshotTimeU3Ek__BackingField_2(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  value)
	{
		___U3CSnapshotTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7, ___U3CMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CMetadataU3Ek__BackingField_4() const { return ___U3CMetadataU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CMetadataU3Ek__BackingField_4() { return &___U3CMetadataU3Ek__BackingField_4; }
	inline void set_U3CMetadataU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7, ___U3CPropertiesU3Ek__BackingField_5)); }
	inline FileShareProperties_tD5DA5BFFE05A5D1A450047D120309AF49A0D8870 * get_U3CPropertiesU3Ek__BackingField_5() const { return ___U3CPropertiesU3Ek__BackingField_5; }
	inline FileShareProperties_tD5DA5BFFE05A5D1A450047D120309AF49A0D8870 ** get_address_of_U3CPropertiesU3Ek__BackingField_5() { return &___U3CPropertiesU3Ek__BackingField_5; }
	inline void set_U3CPropertiesU3Ek__BackingField_5(FileShareProperties_tD5DA5BFFE05A5D1A450047D120309AF49A0D8870 * value)
	{
		___U3CPropertiesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_5), (void*)value);
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Cinemachine.CinemachineBrain
struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowDebugText
	bool ___m_ShowDebugText_4;
	// System.Boolean Cinemachine.CinemachineBrain::m_ShowCameraFrustum
	bool ___m_ShowCameraFrustum_5;
	// System.Boolean Cinemachine.CinemachineBrain::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;
	// UnityEngine.Transform Cinemachine.CinemachineBrain::m_WorldUpOverride
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_WorldUpOverride_7;
	// Cinemachine.CinemachineBrain/UpdateMethod Cinemachine.CinemachineBrain::m_UpdateMethod
	int32_t ___m_UpdateMethod_8;
	// Cinemachine.CinemachineBrain/BrainUpdateMethod Cinemachine.CinemachineBrain::m_BlendUpdateMethod
	int32_t ___m_BlendUpdateMethod_9;
	// Cinemachine.CinemachineBlendDefinition Cinemachine.CinemachineBrain::m_DefaultBlend
	CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  ___m_DefaultBlend_10;
	// Cinemachine.CinemachineBlenderSettings Cinemachine.CinemachineBrain::m_CustomBlends
	CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * ___m_CustomBlends_11;
	// UnityEngine.Camera Cinemachine.CinemachineBrain::m_OutputCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_OutputCamera_12;
	// Cinemachine.CinemachineBrain/BrainEvent Cinemachine.CinemachineBrain::m_CameraCutEvent
	BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * ___m_CameraCutEvent_13;
	// Cinemachine.CinemachineBrain/VcamActivatedEvent Cinemachine.CinemachineBrain::m_CameraActivatedEvent
	VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * ___m_CameraActivatedEvent_14;
	// UnityEngine.Coroutine Cinemachine.CinemachineBrain::mPhysicsCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___mPhysicsCoroutine_16;
	// System.Int32 Cinemachine.CinemachineBrain::m_LastFrameUpdated
	int32_t ___m_LastFrameUpdated_17;
	// UnityEngine.WaitForFixedUpdate Cinemachine.CinemachineBrain::mWaitForFixedUpdate
	WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * ___mWaitForFixedUpdate_18;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineBrain/BrainFrame> Cinemachine.CinemachineBrain::mFrameStack
	List_1_t7047292520C88A40E765EA61E967062F583F6C2A * ___mFrameStack_19;
	// System.Int32 Cinemachine.CinemachineBrain::mNextFrameId
	int32_t ___mNextFrameId_20;
	// Cinemachine.CinemachineBlend Cinemachine.CinemachineBrain::mCurrentLiveCameras
	CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * ___mCurrentLiveCameras_21;
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mActiveCameraPreviousFrame
	RuntimeObject* ___mActiveCameraPreviousFrame_23;
	// UnityEngine.GameObject Cinemachine.CinemachineBrain::mActiveCameraPreviousFrameGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mActiveCameraPreviousFrameGameObject_24;
	// Cinemachine.CameraState Cinemachine.CinemachineBrain::<CurrentCameraState>k__BackingField
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___U3CCurrentCameraStateU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_ShowDebugText_4() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_ShowDebugText_4)); }
	inline bool get_m_ShowDebugText_4() const { return ___m_ShowDebugText_4; }
	inline bool* get_address_of_m_ShowDebugText_4() { return &___m_ShowDebugText_4; }
	inline void set_m_ShowDebugText_4(bool value)
	{
		___m_ShowDebugText_4 = value;
	}

	inline static int32_t get_offset_of_m_ShowCameraFrustum_5() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_ShowCameraFrustum_5)); }
	inline bool get_m_ShowCameraFrustum_5() const { return ___m_ShowCameraFrustum_5; }
	inline bool* get_address_of_m_ShowCameraFrustum_5() { return &___m_ShowCameraFrustum_5; }
	inline void set_m_ShowCameraFrustum_5(bool value)
	{
		___m_ShowCameraFrustum_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}

	inline static int32_t get_offset_of_m_WorldUpOverride_7() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_WorldUpOverride_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_WorldUpOverride_7() const { return ___m_WorldUpOverride_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_WorldUpOverride_7() { return &___m_WorldUpOverride_7; }
	inline void set_m_WorldUpOverride_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_WorldUpOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WorldUpOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMethod_8() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_UpdateMethod_8)); }
	inline int32_t get_m_UpdateMethod_8() const { return ___m_UpdateMethod_8; }
	inline int32_t* get_address_of_m_UpdateMethod_8() { return &___m_UpdateMethod_8; }
	inline void set_m_UpdateMethod_8(int32_t value)
	{
		___m_UpdateMethod_8 = value;
	}

	inline static int32_t get_offset_of_m_BlendUpdateMethod_9() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_BlendUpdateMethod_9)); }
	inline int32_t get_m_BlendUpdateMethod_9() const { return ___m_BlendUpdateMethod_9; }
	inline int32_t* get_address_of_m_BlendUpdateMethod_9() { return &___m_BlendUpdateMethod_9; }
	inline void set_m_BlendUpdateMethod_9(int32_t value)
	{
		___m_BlendUpdateMethod_9 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBlend_10() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_DefaultBlend_10)); }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  get_m_DefaultBlend_10() const { return ___m_DefaultBlend_10; }
	inline CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE * get_address_of_m_DefaultBlend_10() { return &___m_DefaultBlend_10; }
	inline void set_m_DefaultBlend_10(CinemachineBlendDefinition_tFCB9356176B08582D6AB0B036E25729EBEDBFAEE  value)
	{
		___m_DefaultBlend_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultBlend_10))->___m_CustomCurve_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CustomBlends_11() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CustomBlends_11)); }
	inline CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * get_m_CustomBlends_11() const { return ___m_CustomBlends_11; }
	inline CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F ** get_address_of_m_CustomBlends_11() { return &___m_CustomBlends_11; }
	inline void set_m_CustomBlends_11(CinemachineBlenderSettings_tCF3367AA417C05816117E15FE608928CAF40554F * value)
	{
		___m_CustomBlends_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomBlends_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputCamera_12() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_OutputCamera_12)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_OutputCamera_12() const { return ___m_OutputCamera_12; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_OutputCamera_12() { return &___m_OutputCamera_12; }
	inline void set_m_OutputCamera_12(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_OutputCamera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OutputCamera_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraCutEvent_13() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CameraCutEvent_13)); }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * get_m_CameraCutEvent_13() const { return ___m_CameraCutEvent_13; }
	inline BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E ** get_address_of_m_CameraCutEvent_13() { return &___m_CameraCutEvent_13; }
	inline void set_m_CameraCutEvent_13(BrainEvent_t7DDC9AFC269C95A82A9348F1F7120BA402DCFE5E * value)
	{
		___m_CameraCutEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraCutEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CameraActivatedEvent_14() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_CameraActivatedEvent_14)); }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * get_m_CameraActivatedEvent_14() const { return ___m_CameraActivatedEvent_14; }
	inline VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 ** get_address_of_m_CameraActivatedEvent_14() { return &___m_CameraActivatedEvent_14; }
	inline void set_m_CameraActivatedEvent_14(VcamActivatedEvent_tFC99CBCF86077996502503BCD7019E23C7787296 * value)
	{
		___m_CameraActivatedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraActivatedEvent_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPhysicsCoroutine_16() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mPhysicsCoroutine_16)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_mPhysicsCoroutine_16() const { return ___mPhysicsCoroutine_16; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_mPhysicsCoroutine_16() { return &___mPhysicsCoroutine_16; }
	inline void set_mPhysicsCoroutine_16(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___mPhysicsCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPhysicsCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastFrameUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___m_LastFrameUpdated_17)); }
	inline int32_t get_m_LastFrameUpdated_17() const { return ___m_LastFrameUpdated_17; }
	inline int32_t* get_address_of_m_LastFrameUpdated_17() { return &___m_LastFrameUpdated_17; }
	inline void set_m_LastFrameUpdated_17(int32_t value)
	{
		___m_LastFrameUpdated_17 = value;
	}

	inline static int32_t get_offset_of_mWaitForFixedUpdate_18() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mWaitForFixedUpdate_18)); }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * get_mWaitForFixedUpdate_18() const { return ___mWaitForFixedUpdate_18; }
	inline WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 ** get_address_of_mWaitForFixedUpdate_18() { return &___mWaitForFixedUpdate_18; }
	inline void set_mWaitForFixedUpdate_18(WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * value)
	{
		___mWaitForFixedUpdate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWaitForFixedUpdate_18), (void*)value);
	}

	inline static int32_t get_offset_of_mFrameStack_19() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mFrameStack_19)); }
	inline List_1_t7047292520C88A40E765EA61E967062F583F6C2A * get_mFrameStack_19() const { return ___mFrameStack_19; }
	inline List_1_t7047292520C88A40E765EA61E967062F583F6C2A ** get_address_of_mFrameStack_19() { return &___mFrameStack_19; }
	inline void set_mFrameStack_19(List_1_t7047292520C88A40E765EA61E967062F583F6C2A * value)
	{
		___mFrameStack_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFrameStack_19), (void*)value);
	}

	inline static int32_t get_offset_of_mNextFrameId_20() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mNextFrameId_20)); }
	inline int32_t get_mNextFrameId_20() const { return ___mNextFrameId_20; }
	inline int32_t* get_address_of_mNextFrameId_20() { return &___mNextFrameId_20; }
	inline void set_mNextFrameId_20(int32_t value)
	{
		___mNextFrameId_20 = value;
	}

	inline static int32_t get_offset_of_mCurrentLiveCameras_21() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mCurrentLiveCameras_21)); }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * get_mCurrentLiveCameras_21() const { return ___mCurrentLiveCameras_21; }
	inline CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C ** get_address_of_mCurrentLiveCameras_21() { return &___mCurrentLiveCameras_21; }
	inline void set_mCurrentLiveCameras_21(CinemachineBlend_tA1423010B6E480A1066D469A77F1CB4E2BC6925C * value)
	{
		___mCurrentLiveCameras_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentLiveCameras_21), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrame_23() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mActiveCameraPreviousFrame_23)); }
	inline RuntimeObject* get_mActiveCameraPreviousFrame_23() const { return ___mActiveCameraPreviousFrame_23; }
	inline RuntimeObject** get_address_of_mActiveCameraPreviousFrame_23() { return &___mActiveCameraPreviousFrame_23; }
	inline void set_mActiveCameraPreviousFrame_23(RuntimeObject* value)
	{
		___mActiveCameraPreviousFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCameraPreviousFrameGameObject_24() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___mActiveCameraPreviousFrameGameObject_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mActiveCameraPreviousFrameGameObject_24() const { return ___mActiveCameraPreviousFrameGameObject_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mActiveCameraPreviousFrameGameObject_24() { return &___mActiveCameraPreviousFrameGameObject_24; }
	inline void set_mActiveCameraPreviousFrameGameObject_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mActiveCameraPreviousFrameGameObject_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCameraPreviousFrameGameObject_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentCameraStateU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83, ___U3CCurrentCameraStateU3Ek__BackingField_25)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_U3CCurrentCameraStateU3Ek__BackingField_25() const { return ___U3CCurrentCameraStateU3Ek__BackingField_25; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_U3CCurrentCameraStateU3Ek__BackingField_25() { return &___U3CCurrentCameraStateU3Ek__BackingField_25; }
	inline void set_U3CCurrentCameraStateU3Ek__BackingField_25(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___U3CCurrentCameraStateU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCurrentCameraStateU3Ek__BackingField_25))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}
};

struct CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields
{
public:
	// Cinemachine.ICinemachineCamera Cinemachine.CinemachineBrain::mSoloCamera
	RuntimeObject* ___mSoloCamera_15;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineBrain::mDefaultLinearAnimationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mDefaultLinearAnimationCurve_22;

public:
	inline static int32_t get_offset_of_mSoloCamera_15() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields, ___mSoloCamera_15)); }
	inline RuntimeObject* get_mSoloCamera_15() const { return ___mSoloCamera_15; }
	inline RuntimeObject** get_address_of_mSoloCamera_15() { return &___mSoloCamera_15; }
	inline void set_mSoloCamera_15(RuntimeObject* value)
	{
		___mSoloCamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSoloCamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLinearAnimationCurve_22() { return static_cast<int32_t>(offsetof(CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83_StaticFields, ___mDefaultLinearAnimationCurve_22)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mDefaultLinearAnimationCurve_22() const { return ___mDefaultLinearAnimationCurve_22; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mDefaultLinearAnimationCurve_22() { return &___mDefaultLinearAnimationCurve_22; }
	inline void set_mDefaultLinearAnimationCurve_22(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mDefaultLinearAnimationCurve_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLinearAnimationCurve_22), (void*)value);
	}
};


// Cinemachine.CinemachineComponentBase
struct CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineComponentBase::m_vcamOwner
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_vcamOwner_5;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}
};


// Cinemachine.CinemachineExtension
struct CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_tA56D153C1EABC9FB802D4F354B4E536F249FF4FE * ___mExtraState_6;

public:
	inline static int32_t get_offset_of_m_vcamOwner_5() { return static_cast<int32_t>(offsetof(CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422, ___m_vcamOwner_5)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_vcamOwner_5() const { return ___m_vcamOwner_5; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_vcamOwner_5() { return &___m_vcamOwner_5; }
	inline void set_m_vcamOwner_5(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_vcamOwner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_vcamOwner_5), (void*)value);
	}

	inline static int32_t get_offset_of_mExtraState_6() { return static_cast<int32_t>(offsetof(CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422, ___mExtraState_6)); }
	inline Dictionary_2_tA56D153C1EABC9FB802D4F354B4E536F249FF4FE * get_mExtraState_6() const { return ___mExtraState_6; }
	inline Dictionary_2_tA56D153C1EABC9FB802D4F354B4E536F249FF4FE ** get_address_of_mExtraState_6() { return &___mExtraState_6; }
	inline void set_mExtraState_6(Dictionary_2_tA56D153C1EABC9FB802D4F354B4E536F249FF4FE * value)
	{
		___mExtraState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mExtraState_6), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_m_ExcludedPropertiesInInspector_4() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ExcludedPropertiesInInspector_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludedPropertiesInInspector_4() const { return ___m_ExcludedPropertiesInInspector_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludedPropertiesInInspector_4() { return &___m_ExcludedPropertiesInInspector_4; }
	inline void set_m_ExcludedPropertiesInInspector_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludedPropertiesInInspector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludedPropertiesInInspector_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_LockStageInInspector_5() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_LockStageInInspector_5)); }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* get_m_LockStageInInspector_5() const { return ___m_LockStageInInspector_5; }
	inline StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949** get_address_of_m_LockStageInInspector_5() { return &___m_LockStageInInspector_5; }
	inline void set_m_LockStageInInspector_5(StageU5BU5D_t605193BD653BA57911AFE8A2D01B1D799F7BB949* value)
	{
		___m_LockStageInInspector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LockStageInInspector_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ValidatingStreamVersion_6() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ValidatingStreamVersion_6)); }
	inline int32_t get_m_ValidatingStreamVersion_6() const { return ___m_ValidatingStreamVersion_6; }
	inline int32_t* get_address_of_m_ValidatingStreamVersion_6() { return &___m_ValidatingStreamVersion_6; }
	inline void set_m_ValidatingStreamVersion_6(int32_t value)
	{
		___m_ValidatingStreamVersion_6 = value;
	}

	inline static int32_t get_offset_of_m_OnValidateCalled_7() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_OnValidateCalled_7)); }
	inline bool get_m_OnValidateCalled_7() const { return ___m_OnValidateCalled_7; }
	inline bool* get_address_of_m_OnValidateCalled_7() { return &___m_OnValidateCalled_7; }
	inline void set_m_OnValidateCalled_7(bool value)
	{
		___m_OnValidateCalled_7 = value;
	}

	inline static int32_t get_offset_of_m_StreamingVersion_8() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StreamingVersion_8)); }
	inline int32_t get_m_StreamingVersion_8() const { return ___m_StreamingVersion_8; }
	inline int32_t* get_address_of_m_StreamingVersion_8() { return &___m_StreamingVersion_8; }
	inline void set_m_StreamingVersion_8(int32_t value)
	{
		___m_StreamingVersion_8 = value;
	}

	inline static int32_t get_offset_of_m_Priority_9() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_Priority_9)); }
	inline int32_t get_m_Priority_9() const { return ___m_Priority_9; }
	inline int32_t* get_address_of_m_Priority_9() { return &___m_Priority_9; }
	inline void set_m_Priority_9(int32_t value)
	{
		___m_Priority_9 = value;
	}

	inline static int32_t get_offset_of_m_ActivationId_10() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_ActivationId_10)); }
	inline int32_t get_m_ActivationId_10() const { return ___m_ActivationId_10; }
	inline int32_t* get_address_of_m_ActivationId_10() { return &___m_ActivationId_10; }
	inline void set_m_ActivationId_10(int32_t value)
	{
		___m_ActivationId_10 = value;
	}

	inline static int32_t get_offset_of_FollowTargetAttachment_11() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___FollowTargetAttachment_11)); }
	inline float get_FollowTargetAttachment_11() const { return ___FollowTargetAttachment_11; }
	inline float* get_address_of_FollowTargetAttachment_11() { return &___FollowTargetAttachment_11; }
	inline void set_FollowTargetAttachment_11(float value)
	{
		___FollowTargetAttachment_11 = value;
	}

	inline static int32_t get_offset_of_LookAtTargetAttachment_12() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___LookAtTargetAttachment_12)); }
	inline float get_LookAtTargetAttachment_12() const { return ___LookAtTargetAttachment_12; }
	inline float* get_address_of_LookAtTargetAttachment_12() { return &___LookAtTargetAttachment_12; }
	inline void set_LookAtTargetAttachment_12(float value)
	{
		___LookAtTargetAttachment_12 = value;
	}

	inline static int32_t get_offset_of_m_StandbyUpdate_13() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_StandbyUpdate_13)); }
	inline int32_t get_m_StandbyUpdate_13() const { return ___m_StandbyUpdate_13; }
	inline int32_t* get_address_of_m_StandbyUpdate_13() { return &___m_StandbyUpdate_13; }
	inline void set_m_StandbyUpdate_13(int32_t value)
	{
		___m_StandbyUpdate_13 = value;
	}

	inline static int32_t get_offset_of_U3CmExtensionsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CmExtensionsU3Ek__BackingField_14)); }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * get_U3CmExtensionsU3Ek__BackingField_14() const { return ___U3CmExtensionsU3Ek__BackingField_14; }
	inline List_1_t13875FE3163CFA961C09134FFAA2E0903229691A ** get_address_of_U3CmExtensionsU3Ek__BackingField_14() { return &___U3CmExtensionsU3Ek__BackingField_14; }
	inline void set_U3CmExtensionsU3Ek__BackingField_14(List_1_t13875FE3163CFA961C09134FFAA2E0903229691A * value)
	{
		___U3CmExtensionsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmExtensionsU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateIsValidU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CPreviousStateIsValidU3Ek__BackingField_15)); }
	inline bool get_U3CPreviousStateIsValidU3Ek__BackingField_15() const { return ___U3CPreviousStateIsValidU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CPreviousStateIsValidU3Ek__BackingField_15() { return &___U3CPreviousStateIsValidU3Ek__BackingField_15; }
	inline void set_U3CPreviousStateIsValidU3Ek__BackingField_15(bool value)
	{
		___U3CPreviousStateIsValidU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_m_WasStarted_16() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_WasStarted_16)); }
	inline bool get_m_WasStarted_16() const { return ___m_WasStarted_16; }
	inline bool* get_address_of_m_WasStarted_16() { return &___m_WasStarted_16; }
	inline void set_m_WasStarted_16(bool value)
	{
		___m_WasStarted_16 = value;
	}

	inline static int32_t get_offset_of_mSlaveStatusUpdated_17() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___mSlaveStatusUpdated_17)); }
	inline bool get_mSlaveStatusUpdated_17() const { return ___mSlaveStatusUpdated_17; }
	inline bool* get_address_of_mSlaveStatusUpdated_17() { return &___mSlaveStatusUpdated_17; }
	inline void set_mSlaveStatusUpdated_17(bool value)
	{
		___mSlaveStatusUpdated_17 = value;
	}

	inline static int32_t get_offset_of_m_parentVcam_18() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_parentVcam_18)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_parentVcam_18() const { return ___m_parentVcam_18; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_parentVcam_18() { return &___m_parentVcam_18; }
	inline void set_m_parentVcam_18(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_parentVcam_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parentVcam_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_QueuePriority_19() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_QueuePriority_19)); }
	inline int32_t get_m_QueuePriority_19() const { return ___m_QueuePriority_19; }
	inline int32_t* get_address_of_m_QueuePriority_19() { return &___m_QueuePriority_19; }
	inline void set_m_QueuePriority_19(int32_t value)
	{
		___m_QueuePriority_19 = value;
	}

	inline static int32_t get_offset_of_m_CachedFollowTarget_20() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_CachedFollowTarget_20)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CachedFollowTarget_20() const { return ___m_CachedFollowTarget_20; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CachedFollowTarget_20() { return &___m_CachedFollowTarget_20; }
	inline void set_m_CachedFollowTarget_20(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CachedFollowTarget_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedFollowTarget_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedFollowTargetVcam_21() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_CachedFollowTargetVcam_21)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_CachedFollowTargetVcam_21() const { return ___m_CachedFollowTargetVcam_21; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_CachedFollowTargetVcam_21() { return &___m_CachedFollowTargetVcam_21; }
	inline void set_m_CachedFollowTargetVcam_21(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_CachedFollowTargetVcam_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedFollowTargetVcam_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedFollowTargetGroup_22() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_CachedFollowTargetGroup_22)); }
	inline RuntimeObject* get_m_CachedFollowTargetGroup_22() const { return ___m_CachedFollowTargetGroup_22; }
	inline RuntimeObject** get_address_of_m_CachedFollowTargetGroup_22() { return &___m_CachedFollowTargetGroup_22; }
	inline void set_m_CachedFollowTargetGroup_22(RuntimeObject* value)
	{
		___m_CachedFollowTargetGroup_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedFollowTargetGroup_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedLookAtTarget_23() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_CachedLookAtTarget_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CachedLookAtTarget_23() const { return ___m_CachedLookAtTarget_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CachedLookAtTarget_23() { return &___m_CachedLookAtTarget_23; }
	inline void set_m_CachedLookAtTarget_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CachedLookAtTarget_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedLookAtTarget_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedLookAtTargetVcam_24() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_CachedLookAtTargetVcam_24)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_m_CachedLookAtTargetVcam_24() const { return ___m_CachedLookAtTargetVcam_24; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_m_CachedLookAtTargetVcam_24() { return &___m_CachedLookAtTargetVcam_24; }
	inline void set_m_CachedLookAtTargetVcam_24(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___m_CachedLookAtTargetVcam_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedLookAtTargetVcam_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedLookAtTargetGroup_25() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___m_CachedLookAtTargetGroup_25)); }
	inline RuntimeObject* get_m_CachedLookAtTargetGroup_25() const { return ___m_CachedLookAtTargetGroup_25; }
	inline RuntimeObject** get_address_of_m_CachedLookAtTargetGroup_25() { return &___m_CachedLookAtTargetGroup_25; }
	inline void set_m_CachedLookAtTargetGroup_25(RuntimeObject* value)
	{
		___m_CachedLookAtTargetGroup_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedLookAtTargetGroup_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFollowTargetChangedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CFollowTargetChangedU3Ek__BackingField_26)); }
	inline bool get_U3CFollowTargetChangedU3Ek__BackingField_26() const { return ___U3CFollowTargetChangedU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CFollowTargetChangedU3Ek__BackingField_26() { return &___U3CFollowTargetChangedU3Ek__BackingField_26; }
	inline void set_U3CFollowTargetChangedU3Ek__BackingField_26(bool value)
	{
		___U3CFollowTargetChangedU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CLookAtTargetChangedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5, ___U3CLookAtTargetChangedU3Ek__BackingField_27)); }
	inline bool get_U3CLookAtTargetChangedU3Ek__BackingField_27() const { return ___U3CLookAtTargetChangedU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CLookAtTargetChangedU3Ek__BackingField_27() { return &___U3CLookAtTargetChangedU3Ek__BackingField_27; }
	inline void set_U3CLookAtTargetChangedU3Ek__BackingField_27(bool value)
	{
		___U3CLookAtTargetChangedU3Ek__BackingField_27 = value;
	}
};


// Cinemachine.CinemachineTransposer
struct CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881  : public CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D
{
public:
	// Cinemachine.CinemachineTransposer/BindingMode Cinemachine.CinemachineTransposer::m_BindingMode
	int32_t ___m_BindingMode_6;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_FollowOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FollowOffset_7;
	// System.Single Cinemachine.CinemachineTransposer::m_XDamping
	float ___m_XDamping_8;
	// System.Single Cinemachine.CinemachineTransposer::m_YDamping
	float ___m_YDamping_9;
	// System.Single Cinemachine.CinemachineTransposer::m_ZDamping
	float ___m_ZDamping_10;
	// Cinemachine.CinemachineTransposer/AngularDampingMode Cinemachine.CinemachineTransposer::m_AngularDampingMode
	int32_t ___m_AngularDampingMode_11;
	// System.Single Cinemachine.CinemachineTransposer::m_PitchDamping
	float ___m_PitchDamping_12;
	// System.Single Cinemachine.CinemachineTransposer::m_YawDamping
	float ___m_YawDamping_13;
	// System.Single Cinemachine.CinemachineTransposer::m_RollDamping
	float ___m_RollDamping_14;
	// System.Single Cinemachine.CinemachineTransposer::m_AngularDamping
	float ___m_AngularDamping_15;
	// System.Boolean Cinemachine.CinemachineTransposer::<HideOffsetInInspector>k__BackingField
	bool ___U3CHideOffsetInInspectorU3Ek__BackingField_16;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_PreviousTargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousTargetPosition_17;
	// UnityEngine.Quaternion Cinemachine.CinemachineTransposer::m_PreviousReferenceOrientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_PreviousReferenceOrientation_18;
	// UnityEngine.Quaternion Cinemachine.CinemachineTransposer::m_targetOrientationOnAssign
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_targetOrientationOnAssign_19;
	// UnityEngine.Vector3 Cinemachine.CinemachineTransposer::m_PreviousOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PreviousOffset_20;
	// UnityEngine.Transform Cinemachine.CinemachineTransposer::m_previousTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_previousTarget_21;

public:
	inline static int32_t get_offset_of_m_BindingMode_6() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_BindingMode_6)); }
	inline int32_t get_m_BindingMode_6() const { return ___m_BindingMode_6; }
	inline int32_t* get_address_of_m_BindingMode_6() { return &___m_BindingMode_6; }
	inline void set_m_BindingMode_6(int32_t value)
	{
		___m_BindingMode_6 = value;
	}

	inline static int32_t get_offset_of_m_FollowOffset_7() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_FollowOffset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FollowOffset_7() const { return ___m_FollowOffset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FollowOffset_7() { return &___m_FollowOffset_7; }
	inline void set_m_FollowOffset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FollowOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_XDamping_8() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_XDamping_8)); }
	inline float get_m_XDamping_8() const { return ___m_XDamping_8; }
	inline float* get_address_of_m_XDamping_8() { return &___m_XDamping_8; }
	inline void set_m_XDamping_8(float value)
	{
		___m_XDamping_8 = value;
	}

	inline static int32_t get_offset_of_m_YDamping_9() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_YDamping_9)); }
	inline float get_m_YDamping_9() const { return ___m_YDamping_9; }
	inline float* get_address_of_m_YDamping_9() { return &___m_YDamping_9; }
	inline void set_m_YDamping_9(float value)
	{
		___m_YDamping_9 = value;
	}

	inline static int32_t get_offset_of_m_ZDamping_10() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_ZDamping_10)); }
	inline float get_m_ZDamping_10() const { return ___m_ZDamping_10; }
	inline float* get_address_of_m_ZDamping_10() { return &___m_ZDamping_10; }
	inline void set_m_ZDamping_10(float value)
	{
		___m_ZDamping_10 = value;
	}

	inline static int32_t get_offset_of_m_AngularDampingMode_11() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_AngularDampingMode_11)); }
	inline int32_t get_m_AngularDampingMode_11() const { return ___m_AngularDampingMode_11; }
	inline int32_t* get_address_of_m_AngularDampingMode_11() { return &___m_AngularDampingMode_11; }
	inline void set_m_AngularDampingMode_11(int32_t value)
	{
		___m_AngularDampingMode_11 = value;
	}

	inline static int32_t get_offset_of_m_PitchDamping_12() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PitchDamping_12)); }
	inline float get_m_PitchDamping_12() const { return ___m_PitchDamping_12; }
	inline float* get_address_of_m_PitchDamping_12() { return &___m_PitchDamping_12; }
	inline void set_m_PitchDamping_12(float value)
	{
		___m_PitchDamping_12 = value;
	}

	inline static int32_t get_offset_of_m_YawDamping_13() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_YawDamping_13)); }
	inline float get_m_YawDamping_13() const { return ___m_YawDamping_13; }
	inline float* get_address_of_m_YawDamping_13() { return &___m_YawDamping_13; }
	inline void set_m_YawDamping_13(float value)
	{
		___m_YawDamping_13 = value;
	}

	inline static int32_t get_offset_of_m_RollDamping_14() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_RollDamping_14)); }
	inline float get_m_RollDamping_14() const { return ___m_RollDamping_14; }
	inline float* get_address_of_m_RollDamping_14() { return &___m_RollDamping_14; }
	inline void set_m_RollDamping_14(float value)
	{
		___m_RollDamping_14 = value;
	}

	inline static int32_t get_offset_of_m_AngularDamping_15() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_AngularDamping_15)); }
	inline float get_m_AngularDamping_15() const { return ___m_AngularDamping_15; }
	inline float* get_address_of_m_AngularDamping_15() { return &___m_AngularDamping_15; }
	inline void set_m_AngularDamping_15(float value)
	{
		___m_AngularDamping_15 = value;
	}

	inline static int32_t get_offset_of_U3CHideOffsetInInspectorU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___U3CHideOffsetInInspectorU3Ek__BackingField_16)); }
	inline bool get_U3CHideOffsetInInspectorU3Ek__BackingField_16() const { return ___U3CHideOffsetInInspectorU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CHideOffsetInInspectorU3Ek__BackingField_16() { return &___U3CHideOffsetInInspectorU3Ek__BackingField_16; }
	inline void set_U3CHideOffsetInInspectorU3Ek__BackingField_16(bool value)
	{
		___U3CHideOffsetInInspectorU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTargetPosition_17() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PreviousTargetPosition_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousTargetPosition_17() const { return ___m_PreviousTargetPosition_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousTargetPosition_17() { return &___m_PreviousTargetPosition_17; }
	inline void set_m_PreviousTargetPosition_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousTargetPosition_17 = value;
	}

	inline static int32_t get_offset_of_m_PreviousReferenceOrientation_18() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PreviousReferenceOrientation_18)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_PreviousReferenceOrientation_18() const { return ___m_PreviousReferenceOrientation_18; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_PreviousReferenceOrientation_18() { return &___m_PreviousReferenceOrientation_18; }
	inline void set_m_PreviousReferenceOrientation_18(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_PreviousReferenceOrientation_18 = value;
	}

	inline static int32_t get_offset_of_m_targetOrientationOnAssign_19() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_targetOrientationOnAssign_19)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_targetOrientationOnAssign_19() const { return ___m_targetOrientationOnAssign_19; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_targetOrientationOnAssign_19() { return &___m_targetOrientationOnAssign_19; }
	inline void set_m_targetOrientationOnAssign_19(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_targetOrientationOnAssign_19 = value;
	}

	inline static int32_t get_offset_of_m_PreviousOffset_20() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_PreviousOffset_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PreviousOffset_20() const { return ___m_PreviousOffset_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PreviousOffset_20() { return &___m_PreviousOffset_20; }
	inline void set_m_PreviousOffset_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PreviousOffset_20 = value;
	}

	inline static int32_t get_offset_of_m_previousTarget_21() { return static_cast<int32_t>(offsetof(CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881, ___m_previousTarget_21)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_previousTarget_21() const { return ___m_previousTarget_21; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_previousTarget_21() { return &___m_previousTarget_21; }
	inline void set_m_previousTarget_21(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_previousTarget_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_previousTarget_21), (void*)value);
	}
};


// Cinemachine.CinemachineVirtualCamera
struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C  : public CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5
{
public:
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_LookAt
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_LookAt_28;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_Follow
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Follow_29;
	// Cinemachine.LensSettings Cinemachine.CinemachineVirtualCamera::m_Lens
	LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  ___m_Lens_30;
	// Cinemachine.CinemachineVirtualCameraBase/TransitionParams Cinemachine.CinemachineVirtualCamera::m_Transitions
	TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  ___m_Transitions_31;
	// Cinemachine.CinemachineVirtualCameraBase/BlendHint Cinemachine.CinemachineVirtualCamera::m_LegacyBlendHint
	int32_t ___m_LegacyBlendHint_32;
	// System.Boolean Cinemachine.CinemachineVirtualCamera::m_UserIsDragging
	bool ___m_UserIsDragging_36;
	// Cinemachine.CameraState Cinemachine.CinemachineVirtualCamera::m_State
	CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  ___m_State_37;
	// Cinemachine.CinemachineComponentBase[] Cinemachine.CinemachineVirtualCamera::m_ComponentPipeline
	CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* ___m_ComponentPipeline_38;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::m_ComponentOwner
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_ComponentOwner_39;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCamera::mCachedLookAtTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCachedLookAtTarget_40;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCamera::mCachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * ___mCachedLookAtTargetVcam_41;

public:
	inline static int32_t get_offset_of_m_LookAt_28() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LookAt_28)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_LookAt_28() const { return ___m_LookAt_28; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_LookAt_28() { return &___m_LookAt_28; }
	inline void set_m_LookAt_28(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_LookAt_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LookAt_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Follow_29() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Follow_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Follow_29() const { return ___m_Follow_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Follow_29() { return &___m_Follow_29; }
	inline void set_m_Follow_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Follow_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Follow_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lens_30() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Lens_30)); }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  get_m_Lens_30() const { return ___m_Lens_30; }
	inline LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA * get_address_of_m_Lens_30() { return &___m_Lens_30; }
	inline void set_m_Lens_30(LensSettings_tDBD2B66E4841DEDB5E221053F9B74AE2625014CA  value)
	{
		___m_Lens_30 = value;
	}

	inline static int32_t get_offset_of_m_Transitions_31() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_Transitions_31)); }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  get_m_Transitions_31() const { return ___m_Transitions_31; }
	inline TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C * get_address_of_m_Transitions_31() { return &___m_Transitions_31; }
	inline void set_m_Transitions_31(TransitionParams_t2EE11D8A937A8C60D8C27C6D24C37B0D096AA11C  value)
	{
		___m_Transitions_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Transitions_31))->___m_OnCameraLive_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_LegacyBlendHint_32() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_LegacyBlendHint_32)); }
	inline int32_t get_m_LegacyBlendHint_32() const { return ___m_LegacyBlendHint_32; }
	inline int32_t* get_address_of_m_LegacyBlendHint_32() { return &___m_LegacyBlendHint_32; }
	inline void set_m_LegacyBlendHint_32(int32_t value)
	{
		___m_LegacyBlendHint_32 = value;
	}

	inline static int32_t get_offset_of_m_UserIsDragging_36() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_UserIsDragging_36)); }
	inline bool get_m_UserIsDragging_36() const { return ___m_UserIsDragging_36; }
	inline bool* get_address_of_m_UserIsDragging_36() { return &___m_UserIsDragging_36; }
	inline void set_m_UserIsDragging_36(bool value)
	{
		___m_UserIsDragging_36 = value;
	}

	inline static int32_t get_offset_of_m_State_37() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_State_37)); }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  get_m_State_37() const { return ___m_State_37; }
	inline CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601 * get_address_of_m_State_37() { return &___m_State_37; }
	inline void set_m_State_37(CameraState_t013E2FD0AB221E45E189CCBE69E25F79E2446601  value)
	{
		___m_State_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom0_11))->___m_Custom_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom1_12))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom2_13))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_State_37))->___mCustom3_14))->___m_Custom_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_State_37))->___m_CustomOverflow_15), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ComponentPipeline_38() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentPipeline_38)); }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* get_m_ComponentPipeline_38() const { return ___m_ComponentPipeline_38; }
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC** get_address_of_m_ComponentPipeline_38() { return &___m_ComponentPipeline_38; }
	inline void set_m_ComponentPipeline_38(CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC* value)
	{
		___m_ComponentPipeline_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentPipeline_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentOwner_39() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___m_ComponentOwner_39)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_ComponentOwner_39() const { return ___m_ComponentOwner_39; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_ComponentOwner_39() { return &___m_ComponentOwner_39; }
	inline void set_m_ComponentOwner_39(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_ComponentOwner_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentOwner_39), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTarget_40() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTarget_40)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCachedLookAtTarget_40() const { return ___mCachedLookAtTarget_40; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCachedLookAtTarget_40() { return &___mCachedLookAtTarget_40; }
	inline void set_mCachedLookAtTarget_40(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCachedLookAtTarget_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTarget_40), (void*)value);
	}

	inline static int32_t get_offset_of_mCachedLookAtTargetVcam_41() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C, ___mCachedLookAtTargetVcam_41)); }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * get_mCachedLookAtTargetVcam_41() const { return ___mCachedLookAtTargetVcam_41; }
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** get_address_of_mCachedLookAtTargetVcam_41() { return &___mCachedLookAtTargetVcam_41; }
	inline void set_mCachedLookAtTargetVcam_41(CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		___mCachedLookAtTargetVcam_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCachedLookAtTargetVcam_41), (void*)value);
	}
};

struct CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields
{
public:
	// Cinemachine.CinemachineVirtualCamera/CreatePipelineDelegate Cinemachine.CinemachineVirtualCamera::CreatePipelineOverride
	CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * ___CreatePipelineOverride_34;
	// Cinemachine.CinemachineVirtualCamera/DestroyPipelineDelegate Cinemachine.CinemachineVirtualCamera::DestroyPipelineOverride
	DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * ___DestroyPipelineOverride_35;

public:
	inline static int32_t get_offset_of_CreatePipelineOverride_34() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___CreatePipelineOverride_34)); }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * get_CreatePipelineOverride_34() const { return ___CreatePipelineOverride_34; }
	inline CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 ** get_address_of_CreatePipelineOverride_34() { return &___CreatePipelineOverride_34; }
	inline void set_CreatePipelineOverride_34(CreatePipelineDelegate_tB2027A3AD25F49EFC2BE7B2872BB15C1B7856C19 * value)
	{
		___CreatePipelineOverride_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreatePipelineOverride_34), (void*)value);
	}

	inline static int32_t get_offset_of_DestroyPipelineOverride_35() { return static_cast<int32_t>(offsetof(CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C_StaticFields, ___DestroyPipelineOverride_35)); }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * get_DestroyPipelineOverride_35() const { return ___DestroyPipelineOverride_35; }
	inline DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 ** get_address_of_DestroyPipelineOverride_35() { return &___DestroyPipelineOverride_35; }
	inline void set_DestroyPipelineOverride_35(DestroyPipelineDelegate_tA69D0FA40EDBF1EF43F75E7FE8A33D85F8DD1B28 * value)
	{
		___DestroyPipelineOverride_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DestroyPipelineOverride_35), (void*)value);
	}
};


// Cinemachine.CinemachineOrbitalTransposer
struct CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2  : public CinemachineTransposer_t9FCC82712B195697FDC6610AAFE4A087A8A96881
{
public:
	// Cinemachine.CinemachineOrbitalTransposer/Heading Cinemachine.CinemachineOrbitalTransposer::m_Heading
	Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  ___m_Heading_22;
	// Cinemachine.AxisState/Recentering Cinemachine.CinemachineOrbitalTransposer::m_RecenterToTargetHeading
	Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  ___m_RecenterToTargetHeading_23;
	// Cinemachine.AxisState Cinemachine.CinemachineOrbitalTransposer::m_XAxis
	AxisState_t376D19829A676B98933979F42845F6476071DDE8  ___m_XAxis_24;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyRadius
	float ___m_LegacyRadius_25;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyHeightOffset
	float ___m_LegacyHeightOffset_26;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LegacyHeadingBias
	float ___m_LegacyHeadingBias_27;
	// System.Boolean Cinemachine.CinemachineOrbitalTransposer::m_HeadingIsSlave
	bool ___m_HeadingIsSlave_28;
	// Cinemachine.CinemachineOrbitalTransposer/UpdateHeadingDelegate Cinemachine.CinemachineOrbitalTransposer::HeadingUpdater
	UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * ___HeadingUpdater_29;
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer::m_LastTargetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LastTargetPosition_30;
	// Cinemachine.Utility.HeadingTracker Cinemachine.CinemachineOrbitalTransposer::mHeadingTracker
	HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 * ___mHeadingTracker_31;
	// UnityEngine.Rigidbody Cinemachine.CinemachineOrbitalTransposer::m_TargetRigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_TargetRigidBody_32;
	// UnityEngine.Transform Cinemachine.CinemachineOrbitalTransposer::m_PreviousTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_PreviousTarget_33;
	// UnityEngine.Vector3 Cinemachine.CinemachineOrbitalTransposer::m_LastCameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LastCameraPosition_34;
	// System.Single Cinemachine.CinemachineOrbitalTransposer::m_LastHeading
	float ___m_LastHeading_35;

public:
	inline static int32_t get_offset_of_m_Heading_22() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_Heading_22)); }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  get_m_Heading_22() const { return ___m_Heading_22; }
	inline Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9 * get_address_of_m_Heading_22() { return &___m_Heading_22; }
	inline void set_m_Heading_22(Heading_t14CCFFECBCC7F32EB9E239544B8958DFDC5F29C9  value)
	{
		___m_Heading_22 = value;
	}

	inline static int32_t get_offset_of_m_RecenterToTargetHeading_23() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_RecenterToTargetHeading_23)); }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  get_m_RecenterToTargetHeading_23() const { return ___m_RecenterToTargetHeading_23; }
	inline Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427 * get_address_of_m_RecenterToTargetHeading_23() { return &___m_RecenterToTargetHeading_23; }
	inline void set_m_RecenterToTargetHeading_23(Recentering_t3B320CE750DA39B1C1E60536E3ED006253605427  value)
	{
		___m_RecenterToTargetHeading_23 = value;
	}

	inline static int32_t get_offset_of_m_XAxis_24() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_XAxis_24)); }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8  get_m_XAxis_24() const { return ___m_XAxis_24; }
	inline AxisState_t376D19829A676B98933979F42845F6476071DDE8 * get_address_of_m_XAxis_24() { return &___m_XAxis_24; }
	inline void set_m_XAxis_24(AxisState_t376D19829A676B98933979F42845F6476071DDE8  value)
	{
		___m_XAxis_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_24))->___m_InputAxisName_5), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_XAxis_24))->___m_InputAxisProvider_16), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LegacyRadius_25() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LegacyRadius_25)); }
	inline float get_m_LegacyRadius_25() const { return ___m_LegacyRadius_25; }
	inline float* get_address_of_m_LegacyRadius_25() { return &___m_LegacyRadius_25; }
	inline void set_m_LegacyRadius_25(float value)
	{
		___m_LegacyRadius_25 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeightOffset_26() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LegacyHeightOffset_26)); }
	inline float get_m_LegacyHeightOffset_26() const { return ___m_LegacyHeightOffset_26; }
	inline float* get_address_of_m_LegacyHeightOffset_26() { return &___m_LegacyHeightOffset_26; }
	inline void set_m_LegacyHeightOffset_26(float value)
	{
		___m_LegacyHeightOffset_26 = value;
	}

	inline static int32_t get_offset_of_m_LegacyHeadingBias_27() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LegacyHeadingBias_27)); }
	inline float get_m_LegacyHeadingBias_27() const { return ___m_LegacyHeadingBias_27; }
	inline float* get_address_of_m_LegacyHeadingBias_27() { return &___m_LegacyHeadingBias_27; }
	inline void set_m_LegacyHeadingBias_27(float value)
	{
		___m_LegacyHeadingBias_27 = value;
	}

	inline static int32_t get_offset_of_m_HeadingIsSlave_28() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_HeadingIsSlave_28)); }
	inline bool get_m_HeadingIsSlave_28() const { return ___m_HeadingIsSlave_28; }
	inline bool* get_address_of_m_HeadingIsSlave_28() { return &___m_HeadingIsSlave_28; }
	inline void set_m_HeadingIsSlave_28(bool value)
	{
		___m_HeadingIsSlave_28 = value;
	}

	inline static int32_t get_offset_of_HeadingUpdater_29() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___HeadingUpdater_29)); }
	inline UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * get_HeadingUpdater_29() const { return ___HeadingUpdater_29; }
	inline UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D ** get_address_of_HeadingUpdater_29() { return &___HeadingUpdater_29; }
	inline void set_HeadingUpdater_29(UpdateHeadingDelegate_t11985A8C86B860B11663010E921F4E3D80D7E20D * value)
	{
		___HeadingUpdater_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeadingUpdater_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastTargetPosition_30() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LastTargetPosition_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LastTargetPosition_30() const { return ___m_LastTargetPosition_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LastTargetPosition_30() { return &___m_LastTargetPosition_30; }
	inline void set_m_LastTargetPosition_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LastTargetPosition_30 = value;
	}

	inline static int32_t get_offset_of_mHeadingTracker_31() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___mHeadingTracker_31)); }
	inline HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 * get_mHeadingTracker_31() const { return ___mHeadingTracker_31; }
	inline HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 ** get_address_of_mHeadingTracker_31() { return &___mHeadingTracker_31; }
	inline void set_mHeadingTracker_31(HeadingTracker_tF2A08BA29340D35C623F22434237C5372641E608 * value)
	{
		___mHeadingTracker_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHeadingTracker_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetRigidBody_32() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_TargetRigidBody_32)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_TargetRigidBody_32() const { return ___m_TargetRigidBody_32; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_TargetRigidBody_32() { return &___m_TargetRigidBody_32; }
	inline void set_m_TargetRigidBody_32(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_TargetRigidBody_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetRigidBody_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousTarget_33() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_PreviousTarget_33)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_PreviousTarget_33() const { return ___m_PreviousTarget_33; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_PreviousTarget_33() { return &___m_PreviousTarget_33; }
	inline void set_m_PreviousTarget_33(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_PreviousTarget_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PreviousTarget_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastCameraPosition_34() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LastCameraPosition_34)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LastCameraPosition_34() const { return ___m_LastCameraPosition_34; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LastCameraPosition_34() { return &___m_LastCameraPosition_34; }
	inline void set_m_LastCameraPosition_34(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LastCameraPosition_34 = value;
	}

	inline static int32_t get_offset_of_m_LastHeading_35() { return static_cast<int32_t>(offsetof(CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2, ___m_LastHeading_35)); }
	inline float get_m_LastHeading_35() const { return ___m_LastHeading_35; }
	inline float* get_address_of_m_LastHeading_35() { return &___m_LastHeading_35; }
	inline void set_m_LastHeading_35(float value)
	{
		___m_LastHeading_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.CancellationCallbackInfo[]
struct CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * m_Items[1];

public:
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Threading.CancellationToken[]
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  m_Items[1];

public:
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_source_0), (void*)NULL);
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_source_0), (void*)NULL);
	}
};
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  m_Items[1];

public:
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}
};
// Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember[]
struct CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 * m_Items[1];

public:
	inline CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CandidateFunctionMember_t7A66104E540A23296E75A5490B351904CF787599 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * m_Items[1];

public:
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * m_Items[1];

public:
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * m_Items[1];

public:
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Capture_t048191E7E0D3177DCD8610E4968075AB41FB91D6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType[]
struct CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.CatchBlock[]
struct CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * m_Items[1];

public:
	inline CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// Cinemachine.CinemachineBrain[]
struct CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * m_Items[1];

public:
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineBrain_tD6C5DB266906E4033463D5B2F94EA48246959E83 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * m_Items[1];

public:
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineComponentBase_tCB9029D861525FDAF243B8F6F5B910145DB63B7D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineExtension[]
struct CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 * m_Items[1];

public:
	inline CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineExtension_t8FBFE85287359DD26462EE5C24031D8433801422 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineOrbitalTransposer[]
struct CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * m_Items[1];

public:
	inline CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineOrbitalTransposer_tD7A09D3A12B36C905C843BA199B7EEAD6D4677A2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineVirtualCamera[]
struct CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * m_Items[1];

public:
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineVirtualCamera_t5BD4629093D8B75CE9F4A382AD28E6F96938C43C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Cinemachine.CinemachineVirtualCameraBase[]
struct CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * m_Items[1];

public:
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CinemachineVirtualCameraBase_tFF7E3B9D8C53B0FFEBF8969BED5854D1EEB76AD5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Security.Claims.Claim[]
struct ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Claim_t6D300709533C6DC51B9779392A364173CF32633F * m_Items[1];

public:
	inline Claim_t6D300709533C6DC51B9779392A364173CF32633F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Claim_t6D300709533C6DC51B9779392A364173CF32633F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Claim_t6D300709533C6DC51B9779392A364173CF32633F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Claim_t6D300709533C6DC51B9779392A364173CF32633F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Claim_t6D300709533C6DC51B9779392A364173CF32633F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Claim_t6D300709533C6DC51B9779392A364173CF32633F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer[]
struct CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C * m_Items[1];

public:
	inline CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CloudBlobContainer_t870F9AF699133FC09EFEA94054B7EE1B68AE4E1C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.WindowsAzure.Storage.File.CloudFileShare[]
struct CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 * m_Items[1];

public:
	inline CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CloudFileShare_t2AC564664A9F71BAF9A9955F024E82CC0AACA5B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar ___value1);
il2cpp_hresult_t IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, Il2CppChar* ___items0);
il2cpp_hresult_t IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue);
il2cpp_hresult_t IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppChar* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue);



// COM Callable Wrapper for UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.CancellationCallbackInfo[]
struct CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CancellationCallbackInfoU5BU5D_t044BC5A41ACFAC596EA3C563F024F86BD3A0CCF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.CancellationToken[]
struct CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CancellationTokenU5BU5D_t9A731157500814DA284A6F1E2E911CB755A65A7E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper>, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_tF548FBFC73854E307F2AA2286569F664A1E4591E::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348(uint32_t ___index0, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mAAA90556845E6A9FA05500C3DA1B62AFCD594348_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_mD62BFB5D4843800B4A741E45A641F4ADE113D420_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896(IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m746B31C36F4EA4DEE36100C137BB622A7FE4F896_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m901FA6BCD9F6C87B5EBD41947DF80ACD2028AA55_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.CSharp.RuntimeBinder.Semantics.CandidateFunctionMember[]
struct CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CandidateFunctionMemberU5BU5D_t076F2FE8B77672D0C1F2EB3ABE6827C972C78C4C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CanvasGroupU5BU5D_tD15991E2AD8921B3EF210F22C13BACAD865CBFE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CaptureU5BU5D_tB69FAE66BAF857B6A1CA22EED6141C40DCFE9B51_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.BoundsControlTypes.CardinalAxisType[]
struct CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CardinalAxisTypeU5BU5D_t42579BC9AC5AF91339D2F5C5AD7C08743C9BC26F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Linq.Expressions.CatchBlock[]
struct CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CatchBlockU5BU5D_t73B4BB5578892583829FD44607465D9950296610_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper>, IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D, IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(7);
		interfaceIds[0] = IVector_1_t01F3BFC7B8A03AE0E8DC4CDCC7148298181B9F6D::IID;
		interfaceIds[1] = IIterable_1_t76BB785EC29C8526627DE0ACEA068DB15E5388CE::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963::IID;
		interfaceIds[4] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[5] = IReferenceArray_1_t44893C71B9484A1AC8DC0319C72EDF5595B377C2::IID;
		interfaceIds[6] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 7;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04(uint32_t ___index0, Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m748C31DF1B839957085C344B20F7C846CE73FA04_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_m59ABF119A35D30463D62BC61B6835D50FB550CE0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849(IVectorView_1_t07EE380B87DAE04F80BF240C33EBA5F94DC4F963** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_m3B25238E4F477BFCE3926AC1AE69203401228849_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_mF8723A0134A529417BCFD3CB3F9CD8A7A14F6FCC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94(uint32_t ___index0, Il2CppChar ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_mDC423B4B39897AF5431CEAD55EA9C77DED933F94_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A(uint32_t ___index0, Il2CppChar ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_m751E6BFCE78DA43C2EF5CFFBAEE0FACEC552BF2A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_mA9A46489A59CE935BBA18D9A61E40902B5336A9D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32(Il2CppChar ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0707635441C33442A259DBD541F0071C6C94BF32_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_m6042DDE05A3409CA659A7032BB36BA62176AD7AE_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_mCB108D79E701A431A52D6955D32B3CAE380814FB_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m351AFFB7AE93A6CA22ED744B65C8097CD0636D5C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01(uint32_t ___items0ArraySize, Il2CppChar* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mBE6BF0B9831855EB8D46EFB56083D93D1B045A01_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA(IIterator_1_tC3877F062B34DD4C7EA4B4D797B326073FC95B72** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB416B18AB4E9562AAD05C38EB9AD14CC685574CA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B(uint32_t ___index0, Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD6566FF83AA2BD6AE2FD905EDA8D22D9A9CBF02B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m3A0B8FA4B76226626A72CE81746018BDD300CB6C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84(Il2CppChar ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1C012CE174957E984C34395A1AE3C36C5F56AE84_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppChar* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mF48F2DE322793CB0473D5522721E1C243EE3C639_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m099434DF042C31618026185DCA6449264AA5C40C(uint32_t* comReturnValueArraySize, Il2CppChar** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* returnValue;
		try
		{
			returnValue = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		uint32_t _returnValue_marshaledArraySize = 0;
		Il2CppChar* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			_returnValue_marshaledArraySize = static_cast<uint32_t>((returnValue)->max_length);
			_returnValue_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppChar>(static_cast<int32_t>(_returnValue_marshaledArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(_returnValue_marshaledArraySize)); i++)
			{
				(_returnValue_marshaled)[i] = (returnValue)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}

		*comReturnValueArraySize = _returnValue_marshaledArraySize;
		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 1034;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Byte", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Int16", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "UInt16", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Int32", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "UInt32", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Int64", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "UInt64", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Single", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Double", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			____value0_empty = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppChar>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "String", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				if ((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL);
				}
				(*___value0)[i] = il2cpp_codegen_create_hstring((____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		GuidU5BU5D_t6DCED1B9FC5592C43FAA73D81705104BD18151B8* ____value0_empty = NULL;

		// Managed method invocation
		try
		{
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* managedArray = static_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>(GetManagedObjectInline());
			il2cpp_array_size_t arrayLength = managedArray->max_length;
			if (arrayLength > 0)
			{
				return il2cpp_codegen_com_handle_invalid_ipropertyarray_conversion("Char16Array", "Char16", "Guid", 0);
			}

			____value0_empty = NULL;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___value0' back from managed representation
		if (____value0_empty != NULL)
		{
			*___value0ArraySize = static_cast<uint32_t>((____value0_empty)->max_length);
			*___value0 = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(*___value0ArraySize));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(*___value0ArraySize)); i++)
			{
				(*___value0)[i] = (____value0_empty)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			}
		}
		else
		{
			*___value0ArraySize = 0;
			*___value0 = NULL;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Char16Array", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cinemachine.CinemachineBrain[]
struct CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CinemachineBrainU5BU5D_t2F1542123C91A889BBDF73A37C0D918E962DA306_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cinemachine.CinemachineComponentBase[]
struct CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CinemachineComponentBaseU5BU5D_t103C5C1C3257AA526385CAD3B1FD18E5CC1446EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cinemachine.CinemachineExtension[]
struct CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CinemachineExtensionU5BU5D_tD1B8E4F9FE636358D4FFCD86534575DB3AC49973_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cinemachine.CinemachineOrbitalTransposer[]
struct CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CinemachineOrbitalTransposerU5BU5D_t262EAE08AEDA55E53176DB1697F768E1DA37C2E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cinemachine.CinemachineVirtualCamera[]
struct CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CinemachineVirtualCameraU5BU5D_tC889EF06476C516ECD8E2A99BD4C4067B8F8E57A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cinemachine.CinemachineVirtualCameraBase[]
struct CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CinemachineVirtualCameraBaseU5BU5D_tDFD527B822E4C563323A3AEB49E8FDE6147A3E80_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Claims.Claim[]
struct ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ClaimU5BU5D_t7C3A5321E7254414A82B55D28E3199DA0BF5945A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.WindowsAzure.Storage.Blob.CloudBlobContainer[]
struct CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CloudBlobContainerU5BU5D_t64A0728C883D9578DF3EC721A6FEDF5445D03E8B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.WindowsAzure.Storage.File.CloudFileShare[]
struct CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;
		interfaceIds[3] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CloudFileShareU5BU5D_tB31603D95A356BF667975D9EF95BD67A0EDE7B49_ComCallableWrapper(obj));
}
