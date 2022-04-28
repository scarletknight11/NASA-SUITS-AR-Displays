#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UniRx.Unit>
struct Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>>
struct ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20;
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry>
struct Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153;
// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>[]
struct EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UniRx.ICancelable
struct ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.InputSystem.InputAction
struct InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126;
// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF73DB702E1356B2CC2F9C09D3443987A75954088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mF1535859D88E215E79053D8935FCE7DF3F2D7124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeOrStaticEventRegistrationImpl_AddEventHandler_TisRuntimeObject_m8E5074116B1AE98ECF1E3CF6F7FF8040E6221BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m20E7EDFF477647AD2AAEA5C01F2F96F086673299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF3A18A8F874B12CB2B14263BF4574ABB14FBCF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com;
struct DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject * ___state_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/EndOfFrameMainThreadScheduler UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>4__this
	EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___action_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_action_3() const { return ___action_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A, ___U3CU3E4__this_5)); }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<System.Object>
struct U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	RuntimeObject * ___state_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/FixedUpdateMainThreadScheduler UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>4__this
	FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___state_2)); }
	inline RuntimeObject * get_state_2() const { return ___state_2; }
	inline RuntimeObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(RuntimeObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_2), (void*)value);
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___action_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_action_3() const { return ___action_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7, ___U3CU3E4__this_5)); }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnSelf>d__2`1<System.Object>
struct U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnSelf>d__2`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnSelf>d__2`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<T> Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnSelf>d__2`1::awaiter
	SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * ___awaiter_2;
	// T Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnSelf>d__2`1::instruction
	RuntimeObject * ___instruction_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_2() { return static_cast<int32_t>(offsetof(U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB, ___awaiter_2)); }
	inline SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * get_awaiter_2() const { return ___awaiter_2; }
	inline SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 ** get_address_of_awaiter_2() { return &___awaiter_2; }
	inline void set_awaiter_2(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * value)
	{
		___awaiter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_2), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_3() { return static_cast<int32_t>(offsetof(U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB, ___instruction_3)); }
	inline RuntimeObject * get_instruction_3() const { return ___instruction_3; }
	inline RuntimeObject ** get_address_of_instruction_3() { return &___instruction_3; }
	inline void set_instruction_3(RuntimeObject * value)
	{
		___instruction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>
struct ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* ___data_0;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_1;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229, ___data_0)); }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* get_data_0() const { return ___data_0; }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_0), (void*)value);
	}

	inline static int32_t get_offset_of__lock_1() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229, ____lock_1)); }
	inline RuntimeObject * get__lock_1() const { return ____lock_1; }
	inline RuntimeObject ** get_address_of__lock_1() { return &____lock_1; }
	inline void set__lock_1(RuntimeObject * value)
	{
		____lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>
struct Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___entries_1)); }
	inline EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8D607320BF96B9AF7102AD17E8A0C7173DB1AF85* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___keys_7)); }
	inline KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6F870BF5CEDDFEB13959730E1D35AF53F95D1153 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ___values_8)); }
	inline ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tEA48E4B6DFB033F98ED189470457D6134F7C7AA9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____slots_8)); }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____items_1)); }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* get__items_1() const { return ____items_1; }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_StaticFields, ____emptyArray_5)); }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<System.Object>
struct QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<UniRx.Unit>
struct QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4  : public RuntimeObject
{
public:

public:
};

struct QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4_StaticFields
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4_StaticFields, ___Instance_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_Instance_0() const { return ___Instance_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// T Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	RuntimeObject * ___result_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0, ___U3CIsCompletedU3Ek__BackingField_3)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_3() const { return ___U3CIsCompletedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_3() { return &___U3CIsCompletedU3Ek__BackingField_3; }
	inline void set_U3CIsCompletedU3Ek__BackingField_3(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_3 = value;
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____array_0)); }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* get__array_0() const { return ____array_0; }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Tuple`3<UniRx.ICancelable,System.Object,System.Action`1<System.Object>>
struct Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject * ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180, ___m_Item1_0)); }
	inline RuntimeObject* get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180, ___m_Item3_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_m_Item3_2() const { return ___m_Item3_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers
struct InstructionWrappers_t9637E762AE6FE863EF62BE3D9BCD92E6924C1BA3  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174  : public RuntimeObject
{
public:

public:
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391, ___scheduleAction_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduleAction_0), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17  : public RuntimeObject
{
public:
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___scheduleAction_0;

public:
	inline static int32_t get_offset_of_scheduleAction_0() { return static_cast<int32_t>(offsetof(MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17, ___scheduleAction_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_scheduleAction_0() const { return ___scheduleAction_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_scheduleAction_0() { return &___scheduleAction_0; }
	inline void set_scheduleAction_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___scheduleAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduleAction_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl
struct ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB  : public RuntimeObject
{
public:

public:
};

struct ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Collections.Generic.Dictionary`2<System.Reflection.MethodInfo,System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::s_eventRegistrations
	ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * ___s_eventRegistrations_0;

public:
	inline static int32_t get_offset_of_s_eventRegistrations_0() { return static_cast<int32_t>(offsetof(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_StaticFields, ___s_eventRegistrations_0)); }
	inline ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * get_s_eventRegistrations_0() const { return ___s_eventRegistrations_0; }
	inline ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC ** get_address_of_s_eventRegistrations_0() { return &___s_eventRegistrations_0; }
	inline void set_s_eventRegistrations_0(ConditionalWeakTable_2_t15FB672E1FCD9A86D386950CA4AB07A87DFC64DC * value)
	{
		___s_eventRegistrations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventRegistrations_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl
struct NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4  : public RuntimeObject
{
public:

public:
};

struct NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheEntry> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::s_eventRegistrations
	Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * ___s_eventRegistrations_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::s_eventCacheRWLock
	MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * ___s_eventCacheRWLock_1;

public:
	inline static int32_t get_offset_of_s_eventRegistrations_0() { return static_cast<int32_t>(offsetof(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields, ___s_eventRegistrations_0)); }
	inline Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * get_s_eventRegistrations_0() const { return ___s_eventRegistrations_0; }
	inline Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 ** get_address_of_s_eventRegistrations_0() { return &___s_eventRegistrations_0; }
	inline void set_s_eventRegistrations_0(Dictionary_2_t0986F9D82B8D09D448B013D5071D700FA1CF22C8 * value)
	{
		___s_eventRegistrations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventRegistrations_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_eventCacheRWLock_1() { return static_cast<int32_t>(offsetof(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields, ___s_eventCacheRWLock_1)); }
	inline MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * get_s_eventCacheRWLock_1() const { return ___s_eventCacheRWLock_1; }
	inline MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD ** get_address_of_s_eventCacheRWLock_1() { return &___s_eventCacheRWLock_1; }
	inline void set_s_eventCacheRWLock_1(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * value)
	{
		___s_eventCacheRWLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_eventCacheRWLock_1), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock
struct MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::myLock
	int32_t ___myLock_0;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::owners
	int32_t ___owners_1;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::numWriteWaiters
	uint32_t ___numWriteWaiters_2;
	// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::numReadWaiters
	uint32_t ___numReadWaiters_3;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::writeEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___writeEvent_4;
	// System.Threading.EventWaitHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::readEvent
	EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * ___readEvent_5;

public:
	inline static int32_t get_offset_of_myLock_0() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___myLock_0)); }
	inline int32_t get_myLock_0() const { return ___myLock_0; }
	inline int32_t* get_address_of_myLock_0() { return &___myLock_0; }
	inline void set_myLock_0(int32_t value)
	{
		___myLock_0 = value;
	}

	inline static int32_t get_offset_of_owners_1() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___owners_1)); }
	inline int32_t get_owners_1() const { return ___owners_1; }
	inline int32_t* get_address_of_owners_1() { return &___owners_1; }
	inline void set_owners_1(int32_t value)
	{
		___owners_1 = value;
	}

	inline static int32_t get_offset_of_numWriteWaiters_2() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___numWriteWaiters_2)); }
	inline uint32_t get_numWriteWaiters_2() const { return ___numWriteWaiters_2; }
	inline uint32_t* get_address_of_numWriteWaiters_2() { return &___numWriteWaiters_2; }
	inline void set_numWriteWaiters_2(uint32_t value)
	{
		___numWriteWaiters_2 = value;
	}

	inline static int32_t get_offset_of_numReadWaiters_3() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___numReadWaiters_3)); }
	inline uint32_t get_numReadWaiters_3() const { return ___numReadWaiters_3; }
	inline uint32_t* get_address_of_numReadWaiters_3() { return &___numReadWaiters_3; }
	inline void set_numReadWaiters_3(uint32_t value)
	{
		___numReadWaiters_3 = value;
	}

	inline static int32_t get_offset_of_writeEvent_4() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___writeEvent_4)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_writeEvent_4() const { return ___writeEvent_4; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_writeEvent_4() { return &___writeEvent_4; }
	inline void set_writeEvent_4(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___writeEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_readEvent_5() { return static_cast<int32_t>(offsetof(MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD, ___readEvent_5)); }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * get_readEvent_5() const { return ___readEvent_5; }
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C ** get_address_of_readEvent_5() { return &___readEvent_5; }
	inline void set_readEvent_5(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * value)
	{
		___readEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readEvent_5), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___firstValue_1)); }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_t13F82470CEA8A9CF6130BF6DBA15D8E09DCF479A * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E, ___additionalValues_2)); }
	inline Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_tD347021417EDB6B0B8FE4FD5FDB2165ED3EE2929* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___firstValue_1)); }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t504ADD2DC8BBCBC19F82ECF2593226D94C98C1E4* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C, ___firstValue_1)); }
	inline InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tE67E6DD7E9EA3DF917DFCA0EBB711D71C4E25525* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Object>
struct InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	RuntimeObject * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722, ___firstValue_1)); }
	inline RuntimeObject * get_firstValue_1() const { return ___firstValue_1; }
	inline RuntimeObject ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(RuntimeObject * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722, ___additionalValues_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_additionalValues_2() const { return ___additionalValues_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_t1710BD7C885BD2A455A8C023AEE312C92CC84A2A* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t737C830E66AB85ACD6C38BB25EC3BE3D6F481B3B_marshaled_com* ___m_DeviceRequirements_2;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_3() const { return ____body_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8, ___table_0)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___table_0;
};

// UniRx.Unit
struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C__padding[1];
	};

public:
};

struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields
{
public:
	// UniRx.Unit UniRx.Unit::default
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___default_0;

public:
	inline static int32_t get_offset_of_default_0() { return static_cast<int32_t>(offsetof(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields, ___default_0)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_default_0() const { return ___default_0; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_default_0() { return &___default_0; }
	inline void set_default_0(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___default_0 = value;
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_State_0)); }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_pinvoke
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4_marshaled_com
{
	InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 
{
public:
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndexInMap
	int32_t ___m_BindingIndexInMap_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_ActionMap_0)); }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_Action_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndexInMap_2() { return static_cast<int32_t>(offsetof(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999, ___m_BindingIndexInMap_2)); }
	inline int32_t get_m_BindingIndexInMap_2() const { return ___m_BindingIndexInMap_2; }
	inline int32_t* get_address_of_m_BindingIndexInMap_2() { return &___m_BindingIndexInMap_2; }
	inline void set_m_BindingIndexInMap_2(int32_t value)
	{
		___m_BindingIndexInMap_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999_marshaled_pinvoke
{
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999_marshaled_com
{
	InputActionMap_t266476E849A2FE654FE49A0318A1623B68350422 * ___m_ActionMap_0;
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_Action_1;
	int32_t ___m_BindingIndexInMap_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * ___mapIndices_16;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionStates_7)); }
	inline TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_tB4F33EDD7B446E7E80559E407C41759477588506 * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___bindingStates_8)); }
	inline BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tE67DEEE6F840AD3BD8E87D340C65747627E235EA * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___interactionStates_9)); }
	inline InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_t645C6E2CA2BB15AD707F04983FEE453F5B0EC437 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_mapIndices_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584, ___mapIndices_16)); }
	inline ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * get_mapIndices_16() const { return ___mapIndices_16; }
	inline ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC ** get_address_of_mapIndices_16() { return &___mapIndices_16; }
	inline void set_mapIndices_16(ActionMapIndices_t9768A591CF1F5099737265F7E99D60FE429148EC * value)
	{
		___mapIndices_16 = value;
	}
};


// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B 
{
public:
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::<control>k__BackingField
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___U3CcontrolU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CcontrolU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B, ___U3CcontrolU3Ek__BackingField_0)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_U3CcontrolU3Ek__BackingField_0() const { return ___U3CcontrolU3Ek__BackingField_0; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_U3CcontrolU3Ek__BackingField_0() { return &___U3CcontrolU3Ek__BackingField_0; }
	inline void set_U3CcontrolU3Ek__BackingField_0(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___U3CcontrolU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontrolU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B_marshaled_pinvoke
{
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___U3CcontrolU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/ControlBuilder
struct ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B_marshaled_com
{
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___U3CcontrolU3Ek__BackingField_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D, ___table_0)); }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_pinvoke
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D_marshaled_com
{
	Dictionary_2_t5A5CE7CFBABDE0254D6FFCB29150059CBC5DE9D1 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutTypes_1)); }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutStrings_2)); }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutBuilders_3)); }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___baseLayoutTable_4)); }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrides_5)); }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutOverrideNames_6)); }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_precompiledLayouts_7() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___precompiledLayouts_7)); }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * get_precompiledLayouts_7() const { return ___precompiledLayouts_7; }
	inline Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 ** get_address_of_precompiledLayouts_7() { return &___precompiledLayouts_7; }
	inline void set_precompiledLayouts_7(Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * value)
	{
		___precompiledLayouts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___precompiledLayouts_7), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_8() { return static_cast<int32_t>(offsetof(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4, ___layoutMatchers_8)); }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * get_layoutMatchers_8() const { return ___layoutMatchers_8; }
	inline List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 ** get_address_of_layoutMatchers_8() { return &___layoutMatchers_8; }
	inline void set_layoutMatchers_8(List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * value)
	{
		___layoutMatchers_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_pinvoke
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4_marshaled_com
{
	Dictionary_2_t75EB1D28CC79DFFB0B12C5D9DE15E4C9228E0D9C * ___layoutTypes_1;
	Dictionary_2_tDE2F1A05CC67A4C7AD8066DA4F4C6B9E3899352A * ___layoutStrings_2;
	Dictionary_2_t66B8087CCFDBEF4D91C196294B34C6F95E5A0976 * ___layoutBuilders_3;
	Dictionary_2_t2985FD7C0FE89E5A3BE3AF5D236E323D91EAECB0 * ___baseLayoutTable_4;
	Dictionary_2_t5C1149C2852D073FF557F2E53E881E2B19DE3CB5 * ___layoutOverrides_5;
	HashSet_1_t2F59A462D84D42893DABD05E75AE31EDEB20D83C * ___layoutOverrideNames_6;
	Dictionary_2_t141A4B83A5000935B1B3E825BCCDB07F11854F20 * ___precompiledLayouts_7;
	List_1_tD64544516993D054E1CC6B5136B1F79CFB7C1EB0 * ___layoutMatchers_8;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ____hoistedParameters_1;

public:
	inline static int32_t get_offset_of__definedParameters_0() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____definedParameters_0)); }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * get__definedParameters_0() const { return ____definedParameters_0; }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** get_address_of__definedParameters_0() { return &____definedParameters_0; }
	inline void set__definedParameters_0(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * value)
	{
		____definedParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____definedParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of__hoistedParameters_1() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____hoistedParameters_1)); }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * get__hoistedParameters_1() const { return ____hoistedParameters_1; }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 ** get_address_of__hoistedParameters_1() { return &____hoistedParameters_1; }
	inline void set__hoistedParameters_1(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * value)
	{
		____hoistedParameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoistedParameters_1), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * ____shadowedVars_2;

public:
	inline static int32_t get_offset_of__variables_0() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____variables_0)); }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * get__variables_0() const { return ____variables_0; }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 ** get_address_of__variables_0() { return &____variables_0; }
	inline void set__variables_0(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * value)
	{
		____variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____variables_0), (void*)value);
	}

	inline static int32_t get_offset_of__frame_1() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____frame_1)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__frame_1() const { return ____frame_1; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__frame_1() { return &____frame_1; }
	inline void set__frame_1(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frame_1), (void*)value);
	}

	inline static int32_t get_offset_of__shadowedVars_2() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____shadowedVars_2)); }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * get__shadowedVars_2() const { return ____shadowedVars_2; }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 ** get_address_of__shadowedVars_2() { return &____shadowedVars_2; }
	inline void set__shadowedVars_2(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * value)
	{
		____shadowedVars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowedVars_2), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 
{
public:
	// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::target
	RuntimeObject * ___target_0;
	// System.Reflection.MethodInfo System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey::method
	MethodInfo_t * ___method_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639, ___target_0)); }
	inline RuntimeObject * get_target_0() const { return ___target_0; }
	inline RuntimeObject ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(RuntimeObject * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_pinvoke
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t * ___method_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey
struct EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639_marshaled_com
{
	Il2CppIUnknown* ___target_0;
	MethodInfo_t * ___method_1;
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state_2;
	// System.Action`1<T> UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/EndOfFrameMainThreadScheduler UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1::<>4__this
	EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___state_2)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_state_2() const { return ___state_2; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___action_3)); }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * get_action_3() const { return ___action_3; }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C, ___U3CU3E4__this_5)); }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<UniRx.Unit>
struct U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// T UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::state
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state_2;
	// System.Action`1<T> UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::action
	Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action_3;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::cancellation
	RuntimeObject* ___cancellation_4;
	// UniRx.Scheduler/FixedUpdateMainThreadScheduler UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1::<>4__this
	FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___state_2)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_state_2() const { return ___state_2; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___action_3)); }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * get_action_3() const { return ___action_3; }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_3), (void*)value);
	}

	inline static int32_t get_offset_of_cancellation_4() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___cancellation_4)); }
	inline RuntimeObject* get_cancellation_4() const { return ___cancellation_4; }
	inline RuntimeObject** get_address_of_cancellation_4() { return &___cancellation_4; }
	inline void set_cancellation_4(RuntimeObject* value)
	{
		___cancellation_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A, ___U3CU3E4__this_5)); }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>>
struct CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_Callbacks_1)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_tF216BB11708169B89E472AA0E3836EB78315D1FC  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40 
{
public:
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  ___m_CallbacksToRemove_3;

public:
	inline static int32_t get_offset_of_m_CannotMutateCallbacksArray_0() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CannotMutateCallbacksArray_0)); }
	inline bool get_m_CannotMutateCallbacksArray_0() const { return ___m_CannotMutateCallbacksArray_0; }
	inline bool* get_address_of_m_CannotMutateCallbacksArray_0() { return &___m_CannotMutateCallbacksArray_0; }
	inline void set_m_CannotMutateCallbacksArray_0(bool value)
	{
		___m_CannotMutateCallbacksArray_0 = value;
	}

	inline static int32_t get_offset_of_m_Callbacks_1() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_Callbacks_1)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_Callbacks_1() const { return ___m_Callbacks_1; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_Callbacks_1() { return &___m_Callbacks_1; }
	inline void set_m_Callbacks_1(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_Callbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToAdd_2() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CallbacksToAdd_2)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_CallbacksToAdd_2() const { return ___m_CallbacksToAdd_2; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_CallbacksToAdd_2() { return &___m_CallbacksToAdd_2; }
	inline void set_m_CallbacksToAdd_2(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_CallbacksToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CallbacksToRemove_3() { return static_cast<int32_t>(offsetof(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40, ___m_CallbacksToRemove_3)); }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  get_m_CallbacksToRemove_3() const { return ___m_CallbacksToRemove_3; }
	inline InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E * get_address_of_m_CallbacksToRemove_3() { return &___m_CallbacksToRemove_3; }
	inline void set_m_CallbacksToRemove_3(InlinedArray_1_t84DCCD93063361459597F40B4513FC4DE0D4B75E  value)
	{
		___m_CallbacksToRemove_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F  : public LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474
{
public:

public:
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___firstValue_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Tuple`3<UniRx.ICancelable,UniRx.Unit,System.Action`1<UniRx.Unit>>
struct Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60  : public RuntimeObject
{
public:
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___m_Item3_2;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60, ___m_Item1_0)); }
	inline RuntimeObject* get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject* value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60, ___m_Item2_1)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_m_Item2_1() const { return ___m_Item2_1; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___m_Item2_1 = value;
	}

	inline static int32_t get_offset_of_m_Item3_2() { return static_cast<int32_t>(offsetof(Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60, ___m_Item3_2)); }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * get_m_Item3_2() const { return ___m_Item3_2; }
	inline Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB ** get_address_of_m_Item3_2() { return &___m_Item3_2; }
	inline void set_m_Item3_2(Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * value)
	{
		___m_Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item3_2), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t36893252EB5C7E071BBB35D65953AE6FE8271BA1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t36893252EB5C7E071BBB35D65953AE6FE8271BA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields, ___s_Processors_0)); }
	inline TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8  value)
	{
		___s_Processors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Processors_0))->___table_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CformatU3Ek__BackingField_33)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CformatU3Ek__BackingField_33() const { return ___U3CformatU3Ek__BackingField_33; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CformatU3Ek__BackingField_33() { return &___U3CformatU3Ek__BackingField_33; }
	inline void set_U3CformatU3Ek__BackingField_33(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CformatU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbyteOffsetU3Ek__BackingField_34)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_34() const { return ___U3CbyteOffsetU3Ek__BackingField_34; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_34() { return &___U3CbyteOffsetU3Ek__BackingField_34; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_34(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CbitOffsetU3Ek__BackingField_35)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_35() const { return ___U3CbitOffsetU3Ek__BackingField_35; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_35() { return &___U3CbitOffsetU3Ek__BackingField_35; }
	inline void set_U3CbitOffsetU3Ek__BackingField_35(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7, ___U3CsizeInBitsU3Ek__BackingField_36)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_36() const { return ___U3CsizeInBitsU3Ek__BackingField_36; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_36() { return &___U3CsizeInBitsU3Ek__BackingField_36; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_36(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_36 = value;
	}
};

struct InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___FormatVector3Byte_32;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatBit_2)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSBit_4)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSBit_4() const { return ___FormatSBit_4; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSBit_4() { return &___FormatSBit_4; }
	inline void set_FormatSBit_4(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSBit_4 = value;
	}

	inline static int32_t get_offset_of_FormatInt_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatInt_6)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatInt_6() const { return ___FormatInt_6; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatInt_6() { return &___FormatInt_6; }
	inline void set_FormatInt_6(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatInt_6 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUInt_8)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUInt_8() const { return ___FormatUInt_8; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUInt_8() { return &___FormatUInt_8; }
	inline void set_FormatUInt_8(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUInt_8 = value;
	}

	inline static int32_t get_offset_of_FormatShort_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatShort_10)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatShort_10() const { return ___FormatShort_10; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatShort_10() { return &___FormatShort_10; }
	inline void set_FormatShort_10(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatShort_10 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatUShort_12)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatUShort_12() const { return ___FormatUShort_12; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatUShort_12() { return &___FormatUShort_12; }
	inline void set_FormatUShort_12(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatUShort_12 = value;
	}

	inline static int32_t get_offset_of_FormatByte_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatByte_14)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatByte_14() const { return ___FormatByte_14; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatByte_14() { return &___FormatByte_14; }
	inline void set_FormatByte_14(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatByte_14 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatSByte_16)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatSByte_16() const { return ___FormatSByte_16; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatSByte_16() { return &___FormatSByte_16; }
	inline void set_FormatSByte_16(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatSByte_16 = value;
	}

	inline static int32_t get_offset_of_FormatLong_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatLong_18)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatLong_18() const { return ___FormatLong_18; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatLong_18() { return &___FormatLong_18; }
	inline void set_FormatLong_18(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatLong_18 = value;
	}

	inline static int32_t get_offset_of_FormatULong_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatULong_20)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatULong_20() const { return ___FormatULong_20; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatULong_20() { return &___FormatULong_20; }
	inline void set_FormatULong_20(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatULong_20 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatFloat_22)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatFloat_22() const { return ___FormatFloat_22; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatFloat_22() { return &___FormatFloat_22; }
	inline void set_FormatFloat_22(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatFloat_22 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatDouble_24)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatDouble_24() const { return ___FormatDouble_24; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatDouble_24() { return &___FormatDouble_24; }
	inline void set_FormatDouble_24(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatDouble_24 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_26() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2_26)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2_26() const { return ___FormatVector2_26; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2_26() { return &___FormatVector2_26; }
	inline void set_FormatVector2_26(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2_26 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_27() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3_27)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3_27() const { return ___FormatVector3_27; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3_27() { return &___FormatVector3_27; }
	inline void set_FormatVector3_27(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3_27 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_28() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatQuaternion_28)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatQuaternion_28() const { return ___FormatQuaternion_28; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatQuaternion_28() { return &___FormatQuaternion_28; }
	inline void set_FormatQuaternion_28(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatQuaternion_28 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_29() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Short_29)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Short_29() const { return ___FormatVector2Short_29; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Short_29() { return &___FormatVector2Short_29; }
	inline void set_FormatVector2Short_29(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Short_29 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_30() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Short_30)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Short_30() const { return ___FormatVector3Short_30; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Short_30() { return &___FormatVector3Short_30; }
	inline void set_FormatVector3Short_30(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Short_30 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_31() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector2Byte_31)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector2Byte_31() const { return ___FormatVector2Byte_31; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector2Byte_31() { return &___FormatVector2Byte_31; }
	inline void set_FormatVector2Byte_31(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector2Byte_31 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_32() { return static_cast<int32_t>(offsetof(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7_StaticFields, ___FormatVector3Byte_32)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_FormatVector3Byte_32() const { return ___FormatVector3Byte_32; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_FormatVector3Byte_32() { return &___FormatVector3Byte_32; }
	inline void set_FormatVector3Byte_32(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___FormatVector3Byte_32 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_Asset_0)); }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6, ___m_ControlScheme_2)); }
	inline InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B  value)
	{
		___m_ControlScheme_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_BindingGroup_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_DeviceRequirements_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6_marshaled_pinvoke
{
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6_marshaled_com
{
	InputActionAsset_tCEAAE95DB7E22E75023FABD0298BE407A31568DE * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_t590E179B9767FF39B5BF319BC82D702CBD978D9B_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t904B93767740996C64FD20D5C1425440048E7BBF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t904B93767740996C64FD20D5C1425440048E7BBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4F538C23EE3512FB9E4189AA486CDED3DE70771B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* ___m_Controls_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CdisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_1() const { return ___U3CdisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_1() { return &___U3CdisplayNameU3Ek__BackingField_1; }
	inline void set_U3CdisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CtypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CstateFormatU3Ek__BackingField_3)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_U3CstateFormatU3Ek__BackingField_3() const { return ___U3CstateFormatU3Ek__BackingField_3; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_U3CstateFormatU3Ek__BackingField_3() { return &___U3CstateFormatU3Ek__BackingField_3; }
	inline void set_U3CstateFormatU3Ek__BackingField_3(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___U3CstateFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CstateSizeInBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateSizeInBytesU3Ek__BackingField_4() const { return ___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return &___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline void set_U3CstateSizeInBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateSizeInBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_m_ExtendsLayout_5() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_ExtendsLayout_5)); }
	inline String_t* get_m_ExtendsLayout_5() const { return ___m_ExtendsLayout_5; }
	inline String_t** get_address_of_m_ExtendsLayout_5() { return &___m_ExtendsLayout_5; }
	inline void set_m_ExtendsLayout_5(String_t* value)
	{
		___m_ExtendsLayout_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExtendsLayout_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___U3CupdateBeforeRenderU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CupdateBeforeRenderU3Ek__BackingField_6() const { return ___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return &___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline void set_U3CupdateBeforeRenderU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CupdateBeforeRenderU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_7() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_ControlCount_7)); }
	inline int32_t get_m_ControlCount_7() const { return ___m_ControlCount_7; }
	inline int32_t* get_address_of_m_ControlCount_7() { return &___m_ControlCount_7; }
	inline void set_m_ControlCount_7(int32_t value)
	{
		___m_ControlCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Controls_8() { return static_cast<int32_t>(offsetof(Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42, ___m_Controls_8)); }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* get_m_Controls_8() const { return ___m_Controls_8; }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3** get_address_of_m_Controls_8() { return &___m_Controls_8; }
	inline void set_m_Controls_8(ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* value)
	{
		___m_Controls_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_8), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_t32BB7462BDA6CB64EE04F3375BD7F7754C259C22 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t32BB7462BDA6CB64EE04F3375BD7F7754C259C22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::firstToken
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	// System.Collections.Generic.List`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::restTokens
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;

public:
	inline static int32_t get_offset_of_firstToken_0() { return static_cast<int32_t>(offsetof(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128, ___firstToken_0)); }
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  get_firstToken_0() const { return ___firstToken_0; }
	inline EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * get_address_of_firstToken_0() { return &___firstToken_0; }
	inline void set_firstToken_0(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  value)
	{
		___firstToken_0 = value;
	}

	inline static int32_t get_offset_of_restTokens_1() { return static_cast<int32_t>(offsetof(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128, ___restTokens_1)); }
	inline List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * get_restTokens_1() const { return ___restTokens_1; }
	inline List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 ** get_address_of_restTokens_1() { return &___restTokens_1; }
	inline void set_restTokens_1(List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * value)
	{
		___restTokens_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___restTokens_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_pinvoke
{
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;
};
// Native definition for COM marshalling of System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList
struct EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128_marshaled_com
{
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___firstToken_0;
	List_1_t01F23063BEF9E4FDEA5BD7414739DB35870B9ED9 * ___restTokens_1;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t46A486E2DB0EE268818D207578A4F2BEAB17BE0A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount
struct TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::_count
	int32_t ____count_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventCacheKey System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount::_key
	EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  ____key_1;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC, ____key_1)); }
	inline EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  get__key_1() const { return ____key_1; }
	inline EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639 * get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(EventCacheKey_t12702AEDF54C3DF6DAFF437A04ACE47ACEF1D639  value)
	{
		____key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_1))->___target_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____key_1))->___method_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E  : public InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E
{
public:

public:
};


// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29  : public InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Name_2)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Variants_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_StateFormat_5)); }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_tDD64E1ACC59544F800D5A5AA0DB0F7BD274D5E8A  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3 * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_tB9A54D409E2F2556AEBC8A5DEB5D04FA732F71C3  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t3459ADC2129EA8E4FC276351C72461F983ACEABD* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t1F53E55DC87916CA78FE431F1775C947F1A6ADC3* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_Layouts_15)); }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___precompiledLayouts_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808 
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState/GlobalState::globalList
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionChange
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState/GlobalState::onActionControlsChanged
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;

public:
	inline static int32_t get_offset_of_globalList_0() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___globalList_0)); }
	inline InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  get_globalList_0() const { return ___globalList_0; }
	inline InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535 * get_address_of_globalList_0() { return &___globalList_0; }
	inline void set_globalList_0(InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  value)
	{
		___globalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___globalList_0))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_onActionChange_1() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___onActionChange_1)); }
	inline CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  get_onActionChange_1() const { return ___onActionChange_1; }
	inline CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40 * get_address_of_onActionChange_1() { return &___onActionChange_1; }
	inline void set_onActionChange_1(CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  value)
	{
		___onActionChange_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onActionControlsChanged_2() { return static_cast<int32_t>(offsetof(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808, ___onActionControlsChanged_2)); }
	inline CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  get_onActionControlsChanged_2() const { return ___onActionControlsChanged_2; }
	inline CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88 * get_address_of_onActionControlsChanged_2() { return &___onActionControlsChanged_2; }
	inline void set_onActionControlsChanged_2(CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  value)
	{
		___onActionControlsChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808_marshaled_pinvoke
{
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/GlobalState
struct GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808_marshaled_com
{
	InlinedArray_1_t66C9ADF2C1B4648B820E3555F2CEB2DAB9204535  ___globalList_0;
	CallbackArray_1_t1259E48C44B652773538CC2965EAA6A3D4747E40  ___onActionChange_1;
	CallbackArray_1_t8CF36EE52235958E2E95A006997DAC32D7125A88  ___onActionControlsChanged_2;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount
struct EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::_tokenListCount
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ____tokenListCount_0;
	// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::_tokenList
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  ____tokenList_1;

public:
	inline static int32_t get_offset_of__tokenListCount_0() { return static_cast<int32_t>(offsetof(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6, ____tokenListCount_0)); }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * get__tokenListCount_0() const { return ____tokenListCount_0; }
	inline TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** get_address_of__tokenListCount_0() { return &____tokenListCount_0; }
	inline void set__tokenListCount_0(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * value)
	{
		____tokenListCount_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenListCount_0), (void*)value);
	}

	inline static int32_t get_offset_of__tokenList_1() { return static_cast<int32_t>(offsetof(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6, ____tokenList_1)); }
	inline EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  get__tokenList_1() const { return ____tokenList_1; }
	inline EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * get_address_of__tokenList_1() { return &____tokenList_1; }
	inline void set__tokenList_1(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  value)
	{
		____tokenList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____tokenList_1))->___restTokens_1), (void*)NULL);
	}
};


// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UniRx.Unit>
struct Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD 
{
public:
	// T System.Nullable`1::value
	InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___value_0)); }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  get_value_0() const { return ___value_0; }
	inline InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t156CE250074B5DF5F8E537E8D9988BB3962CBC9A  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_InProcessControlStateChange
	bool ___m_InProcessControlStateChange_10;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_11;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_12;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___maps_1)); }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_t82A3BFE06C5987307001E48D38CCA54FBAD3617E* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___controls_2)); }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_t85A6269B3B3CD77AABF0DF3A8B30E960895DEF27* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___interactions_3)); }
	inline IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_t47DD5806364E1AD98F76EC18A266D53F92F9D512* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___processors_4)); }
	inline InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_t1CFB97B0C54D6EDEEE8A71B2363A466923EF3DB4* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_t8A0AF54FB21FAA0E6519F260EF450C7ADCCDC5FF* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___memory_7)); }
	inline UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_tFF650FF0B1C2351FF3DC69366A06C7FCBE195584  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_InProcessControlStateChange_10() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_InProcessControlStateChange_10)); }
	inline bool get_m_InProcessControlStateChange_10() const { return ___m_InProcessControlStateChange_10; }
	inline bool* get_address_of_m_InProcessControlStateChange_10() { return &___m_InProcessControlStateChange_10; }
	inline void set_m_InProcessControlStateChange_10(bool value)
	{
		___m_InProcessControlStateChange_10 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_11() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnBeforeUpdateDelegate_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_11() const { return ___m_OnBeforeUpdateDelegate_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_11() { return &___m_OnBeforeUpdateDelegate_11; }
	inline void set_m_OnBeforeUpdateDelegate_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_12() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126, ___m_OnAfterUpdateDelegate_12)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_12() const { return ___m_OnAfterUpdateDelegate_12; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_12() { return &___m_OnAfterUpdateDelegate_12; }
	inline void set_m_OnAfterUpdateDelegate_12(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_12), (void*)value);
	}
};

struct InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126_StaticFields
{
public:
	// UnityEngine.InputSystem.InputActionState/GlobalState UnityEngine.InputSystem.InputActionState::s_GlobalState
	GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  ___s_GlobalState_13;

public:
	inline static int32_t get_offset_of_s_GlobalState_13() { return static_cast<int32_t>(offsetof(InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126_StaticFields, ___s_GlobalState_13)); }
	inline GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  get_s_GlobalState_13() const { return ___s_GlobalState_13; }
	inline GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808 * get_address_of_s_GlobalState_13() { return &___s_GlobalState_13; }
	inline void set_s_GlobalState_13(GlobalState_tFAE22AA56ECFBF118688B49E2DC22E570DBA5808  value)
	{
		___s_GlobalState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___s_GlobalState_13))->___globalList_0))->___additionalValues_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionChange_1))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_Callbacks_1))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_Callbacks_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToAdd_2))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___firstValue_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___s_GlobalState_13))->___onActionControlsChanged_2))->___m_CallbacksToRemove_3))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_StateBlock_0)); }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tAEF24EBDB898CB135BFFC1597931741ED20F6FB7  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Name_1)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Layout_7)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Variants_8)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Device_9)); }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_tBBA7C2969BF5304FDFE6ABBB41C001737B0E7A7B * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_Parent_10)); }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_DefaultState_18)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MinValue_19)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275, ___m_MaxValue_20)); }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_t0C949A6884CDF3283D904383FDFC7AA6DF5CD82D  value)
	{
		___m_MaxValue_20 = value;
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0  : public InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * ___m_StartingActuations_31;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ActionToRebind_1)); }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t6A98B97EBEBFB429688297BC2EFBE4D7ED3F74A6 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingMask_2)); }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_t512E94BA2F307CA55A4074B4856C7099AE6635FD  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExpectedLayout_4)); }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Candidates_19)); }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_t93EF19606838D35DD384F2FA70936A23C387CDE8  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComplete_20)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnCancel_21)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnPotentialMatch_22)); }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t7006AB702677758EF5C703F3BC064E529CCCB13B * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnGeneratePath_23)); }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t98DA4F6FDB8252DB2E23D85DA4AFD83E31126912 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnComputeScore_24)); }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_t18B48906F1B089C7F2B521F0A6C36D03976CCF6E * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnApplyBinding_25)); }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_tCD3A19F09D928B91560C314DF9651496E00DD76F * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnEventDelegate_26)); }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_tF65A5F98D231944A6E014A2BCB9459A3990EC493 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_LayoutCache_28)); }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t3D48128A310BE1BE535C7423F3C8ACF7E068B86D  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuations_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F, ___m_StartingActuations_31)); }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * get_m_StartingActuations_31() const { return ___m_StartingActuations_31; }
	inline Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 ** get_address_of_m_StartingActuations_31() { return &___m_StartingActuations_31; }
	inline void set_m_StartingActuations_31(Dictionary_2_tD9AF58FD2A2776973AD15D0D2222092EB1DC03A4 * value)
	{
		___m_StartingActuations_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuations_31), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * m_Items[1];

public:
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Object>::Append(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InlinedArray_1_Append_m195F7A15918429EE73ACADA6B4C0F9294039B75F_gshared (InlinedArray_1_t72D8291C9FDC5DF7FE2F7468469720797A7CA722 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,System.Single>(TProcessor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,UnityEngine.Vector2>(TProcessor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_gshared (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, RuntimeObject * ___key0, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7_gshared (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, RuntimeObject * ___key0, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C_gshared (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___obj0, const RuntimeMethod* method);
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::FindEquivalentKeyUnsafe(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mE374DB04CE4CDA882F4AA25E26375C46728BA8AA_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m92A993D020EA2EE92A0C05D9AA35E65E043E7805_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m0B765A2BAD7A3874D8B33A87AC105A25764895FB_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D (Type_t * ___t0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703 (intptr_t ___array0, const RuntimeMethod* method);
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF (intptr_t ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8 (intptr_t ___array0, const RuntimeMethod* method);
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D (intptr_t ___array0, const RuntimeMethod* method);
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD (intptr_t ___array0, const RuntimeMethod* method);
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA (intptr_t ___array0, const RuntimeMethod* method);
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D (intptr_t ___array0, const RuntimeMethod* method);
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8 (intptr_t ___array0, const RuntimeMethod* method);
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305 (intptr_t ___array0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56 (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8 (intptr_t ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39 (intptr_t ___localref0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputExtensions::IsInProgress(UnityEngine.InputSystem.InputActionPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520 (int32_t ___phase0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605 (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_mB2F2D1ECFCC24D57DC8027C0EF426DD47C417570 (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * RebindingOperation_WithExpectedControlType_m4E9CECE0DF038E90E3B73B930631DAECF3303CA6 (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC (TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  ___str0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_m064BA21DC5FD3B43EAF7B997A398D73574582A5E (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  (*) (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_m4132AC6063E201139EF430A3BCC2675EBDD9C37F (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9 (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  (*) (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  Collection_TryFindLayoutForType_mFCC2016FF39C1851AF868A20F5192AE0543AB96B (Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 * __this, Type_t * ___layoutType0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_m5492402BB76228A8640E86DC193EC91DBDF1DD43 (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73 (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  (*) (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared)(__this, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::get_control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>::Append(TValue)
inline int32_t InlinedArray_1_Append_mEBFD1065C9722EEC4756FB770F5F274DA481234B (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * __this, InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *, InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E *, const RuntimeMethod*))InlinedArray_1_Append_m195F7A15918429EE73ACADA6B4C0F9294039B75F_gshared)(__this, ___value0, method);
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,System.Single>(TProcessor)
inline ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  (*) (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *, RuntimeObject *, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared_inline)(__this, ___processor0, method);
}
// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>::Append(TValue)
inline int32_t InlinedArray_1_Append_m30E33D84F5B20A6A532E2B2DF48D732DC11C410D (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * __this, InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *, InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 *, const RuntimeMethod*))InlinedArray_1_Append_m195F7A15918429EE73ACADA6B4C0F9294039B75F_gshared)(__this, ___value0, method);
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,UnityEngine.Vector2>(TProcessor)
inline ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  (*) (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *, RuntimeObject *, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared_inline)(__this, ___processor0, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, Type_t * ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30 (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(!0)
inline void List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708 (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(!0)
inline void Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void UniRx.MainThreadDispatcher::StartEndOfFrameMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mB4C6BE72499806EFF47F613C894839FF66922F83 (RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UniRx.MainThreadDispatcher::StartFixedUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartFixedUpdateMicroCoroutine_mB2018129DF3E65A38F316D61DF0F3255AFB5F459 (RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UniRx.MainThreadDispatcher::Post(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Post_mCFC533A6A5332BA5AA6816373F4D96CA5831ABE2 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::GetEventRegistrationTokenTable(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_m8BBB3CF664BBC6EA31B8469EADEFD8EC1D82B8D3 (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, RuntimeObject * ___key0, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *, RuntimeObject *, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *, const RuntimeMethod*))Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::.ctor(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7 (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, RuntimeObject * ___key0, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *, RuntimeObject *, EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 , const RuntimeMethod*))Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8 (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * ___token0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/EventRegistrationTokenList>::Remove(TKey)
inline bool Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C_gshared)(__this, ___key0, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::Invoke(T)
inline void Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 , const RuntimeMethod*))Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_gshared)(__this, ___obj0, method);
}
// System.Object System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetInstanceKey(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NativeOrStaticEventRegistrationImpl_GetInstanceKey_m609103D809620576492B03F7BFB8FC959231E174 (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::AcquireReaderLock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_AcquireReaderLock_m4C64A27901CB970D8F6FA8A4AE98B8980C8138AD (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetOrCreateEventRegistrationTokenTable(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * NativeOrStaticEventRegistrationImpl_GetOrCreateEventRegistrationTokenTable_mE0D26BCAD8501EEF779A9CB54A47E7621638426F (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** ___tokenListCount2, const RuntimeMethod* method);
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::FindEquivalentKeyUnsafe(TKey,TValue&)
inline RuntimeObject * ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713 (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * __this, RuntimeObject * ___key0, EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 ** ___value1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *, RuntimeObject *, EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 **, const RuntimeMethod*))ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mE374DB04CE4CDA882F4AA25E26375C46728BA8AA_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::.ctor(System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount__ctor_m09819A938F29C2DD7D8E2ACCC5249E6B7275E748 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * ___tokenListCount0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF73DB702E1356B2CC2F9C09D3443987A75954088 (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * __this, RuntimeObject * ___key0, EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *, RuntimeObject *, EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *, const RuntimeMethod*))ConditionalWeakTable_2_Add_m92A993D020EA2EE92A0C05D9AA35E65E043E7805_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Push(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventRegistrationTokenListWithCount_Push_m966CF9B4B55E54DADA94B9B325053F115B9421F5 (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/MyReaderWriterLock::ReleaseReaderLock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyReaderWriterLock_ReleaseReaderLock_m9957FB580A0C803C269D10DB3C7B9482FF46A94D (MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount> System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::GetEventRegistrationTokenTableNoCreate(System.Object,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/TokenListCount&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableNoCreate_m2FDC87A2509BEB899C090FC0D2C3A5D0888B3250 (RuntimeObject * ___instance0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC ** ___tokenListCount2, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount::Pop(System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventRegistrationTokenListWithCount_Pop_mB0D869EA5FC0BB430DB9BCF253396C6B5F7D20FB (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * __this, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * ___token0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl/EventRegistrationTokenListWithCount>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mF1535859D88E215E79053D8935FCE7DF3F2D7124 (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *, RuntimeObject *, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m0B765A2BAD7A3874D8B33A87AC105A25764895FB_gshared)(__this, ___key0, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m20E7EDFF477647AD2AAEA5C01F2F96F086673299_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (bool)((*(bool*)((bool*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m20E7EDFF477647AD2AAEA5C01F2F96F086673299_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(bool));
		bool L_107 = V_24;
		V_3 = (bool)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		bool L_108 = V_3;
		return (bool)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF3A18A8F874B12CB2B14263BF4574ABB14FBCF1E_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppChar V_24 = 0x0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (Il2CppChar)((*(Il2CppChar*)((Il2CppChar*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF3A18A8F874B12CB2B14263BF4574ABB14FBCF1E_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(Il2CppChar));
		Il2CppChar L_107 = V_24;
		V_3 = (Il2CppChar)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		Il2CppChar L_108 = V_3;
		return (Il2CppChar)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (double)((*(double*)((double*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m5DFA0BED6B580096B2E3ADB1394F918653E21D07_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_107 = V_24;
		V_3 = (double)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		double L_108 = V_3;
		return (double)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int16_t)((*(int16_t*)((int16_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m8139D52A1384EE34677345013798688D522DFF37_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_107 = V_24;
		V_3 = (int16_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int16_t L_108 = V_3;
		return (int16_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int32_t)((*(int32_t*)((int32_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m46E475527292788C29DD62A991E948CE3D9189A3_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_107 = V_24;
		V_3 = (int32_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int32_t L_108 = V_3;
		return (int32_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = (int64_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return (int64_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject * V_24 = NULL;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject *));
		RuntimeObject * L_107 = V_24;
		V_3 = (RuntimeObject *)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject * L_108 = V_3;
		return (RuntimeObject *)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = (int8_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return (int8_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(110 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = (float)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return (float)L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA6A3AB087792C0011A244BF219EB013D009592B2_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF091800677E029891EFE21CF853FAF7A59EAA5EB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m2AC2F0071B32B0242BD624B60ED4DF0989C8FA51_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m75B0CDC857E28490BBB6B93E24923ECA7D896754_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m74985872D44523341B02768E3167C022A0BB74C0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m94135D9C37BCAFBC5C814AB2EB52A4A2B46A92A4_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_mE923D006BD57E879AAE0EF692E8D0045CF7E0748_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m33DBC436D5D48BD8B087CC4D6BDC0FF2B658D402_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m056304D259B1FDB717A6CEE1A2262C45CE33DEBC_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBD54DD62EF90673A4806A2CEFA031CFE3C998274_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB636DED19D226BEDFC17AE941CAD220377CA0584_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mD09A1E6993B600273E5DA6DD5A610B0A45E10035_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m53EA03473D7F4C2525577E0D9E0999F78F5E7F7B_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83D9133FDC0884534CE97F82ED983AC5AE9465CA_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m413740B31E01EB314EE0D3A2B1CF91DAD24A9659_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_mC6BEA8EDE34CA523E26ACA072A4E246C7FF6DB25_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA275B45366DA25AFB161A011BC8F1888F54B0BF2_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m82A85440F4B906A83640CA6939D1BC0D1BDEB2C3_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers::ReturnSelf<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnSelf_TisRuntimeObject_m62381ADDA5A08F283EAD4383C2955B85EB283BCE_gshared (SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * ___awaiter0, RuntimeObject * ___instruction1, const RuntimeMethod* method)
{
	{
		U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB * L_0 = (U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB * L_1 = (U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB *)L_0;
		SimpleCoroutineAwaiter_1_t60ED5C5324901387FCE43476A07F5C25F01A65F0 * L_2 = ___awaiter0;
		NullCheck(L_1);
		L_1->set_awaiter_2(L_2);
		U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB * L_3 = (U3CReturnSelfU3Ed__2_1_t8B359EB65591DB34B15F6451FD64C4896B6B88DB *)L_1;
		RuntimeObject * L_4 = ___instruction1;
		NullCheck(L_3);
		L_3->set_instruction_3(L_4);
		return (RuntimeObject*)L_3;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_4 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4, (int32_t)L_5, (int32_t)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_7;
	}

IL_003c:
	{
		// return value;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = V_0;
		V_2 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_8;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = V_2;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_9;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mD77E42BBF29D81949642EB50B78FFDAA1E508D20(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_4 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4);
		float L_7;
		L_7 = ((  float (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4, (int32_t)L_5, (int32_t)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (float)L_7;
	}

IL_003c:
	{
		// return value;
		float L_8 = V_0;
		V_2 = (float)L_8;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		float L_9 = V_2;
		return (float)L_9;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mADDE78BF56F33D2812D79AEF4E913A8F4E3707CE(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_4 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4, (int32_t)L_5, (int32_t)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_7;
	}

IL_003c:
	{
		// return value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		V_2 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_8;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_2;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_9;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m697FDAAB8A92941B0D224874E2D95C137CFE397B(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_gshared (CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (m_State != null && phase.IsInProgress())
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_0 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mB2F37A4E4FEF8CA979143ECA833FE51459DCADEF((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m04D3864091F62DBE430181FFF998C9B40FD45520((int32_t)L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 * L_4 = (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)__this->get_m_State_0();
		int32_t L_5;
		L_5 = CallbackContext_get_bindingIndex_m2F1192A1549DE1CD52BC54DBA447BF023B351426((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = CallbackContext_get_controlIndex_mA51565B477D1AF728DB6D49D45388F27BBE4F335((CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)(CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_t804AA94197C8E0CD63C26645B42DD47682ECB126 *)L_4, (int32_t)L_5, (int32_t)L_6, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_7;
	}

IL_003c:
	{
		// return value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		V_2 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_8;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_2;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_9;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 * _thisAdjusted = reinterpret_cast<CallbackContext_tE43847A0BA3A675EDD96D755AC6EC5B98763FBC4 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m612AEF4F27E09AD27CE0B3FC9F52DAFBB8B11605(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * RebindingOperation_WithExpectedControlType_TisRuntimeObject_mBA6BE8CEC8B7EB2CBA1ECA0816AC71C921A76EE6_gshared (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * V_0 = NULL;
	{
		// ThrowIfRebindInProgress();
		NullCheck((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this);
		RebindingOperation_ThrowIfRebindInProgress_mB2F2D1ECFCC24D57DC8027C0EF426DD47C417570((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this, /*hidden argument*/NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this);
		RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m4E9CECE0DF038E90E3B73B930631DAECF3303CA6((RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)L_2;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F * L_3 = V_0;
		return (RebindingOperation_t22A642E7895F91EEF213E5C3352B9DDDE13D922F *)L_3;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var)));
	}

IL_0019:
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_5;
		L_5 = TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC((TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(((InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_4, /*hidden argument*/NULL);
		V_0 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_5;
		// if (interactionName.IsEmpty())
		bool L_6;
		L_6 = InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_0), /*hidden argument*/NULL);
		V_2 = (bool)L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, (String_t*)L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_RuntimeMethod_var)));
	}

IL_0053:
	{
		// return WithInteraction(interactionName);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_12 = V_0;
		String_t* L_13;
		L_13 = InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_12, /*hidden argument*/NULL);
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_14;
		L_14 = BindingSyntax_WithInteraction_m064BA21DC5FD3B43EAF7B997A398D73574582A5E((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, (String_t*)L_13, /*hidden argument*/NULL);
		V_3 = (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_15 = V_3;
		return (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * _thisAdjusted = reinterpret_cast<BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *>(__this + _offset);
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_m61B8DFA18F8C074B52E8EA5CF17469097E33C00C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_gshared (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!valid)
		bool L_0;
		L_0 = BindingSyntax_get_valid_m9DA9E1130E31D2D24B5C31EFE01E9D148D60C46A((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new InvalidOperationException("Accessor is not valid");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var)));
	}

IL_0019:
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_5;
		L_5 = TypeTable_FindNameForType_mC42C22FB1DD7AAFB1253F178397570182422D7FC((TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(TypeTable_t48256E36F9991CE4E19A2AB0D5BA0F142DE182C8 *)(((InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tF36B761FDEE5A27FFF51E6BF160F6F69B6D8CF2E_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_4, /*hidden argument*/NULL);
		V_0 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_5;
		// if (processorName.IsEmpty())
		bool L_6;
		L_6 = InternedString_IsEmpty_m9D6CC79675BF2889F61E20F7D5AB05BABB3AA4C2((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_0), /*hidden argument*/NULL);
		V_2 = (bool)L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, (String_t*)L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_RuntimeMethod_var)));
	}

IL_0053:
	{
		// return WithProcessor(processorName);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_12 = V_0;
		String_t* L_13;
		L_13 = InternedString_op_Implicit_m2A5DA30CC7E75E65560A7A3C790644F1D191C800((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_12, /*hidden argument*/NULL);
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_14;
		L_14 = BindingSyntax_WithProcessor_m4132AC6063E201139EF430A3BCC2675EBDD9C37F((BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)(BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *)__this, (String_t*)L_13, /*hidden argument*/NULL);
		V_3 = (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_14;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  L_15 = V_3;
		return (BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 )L_15;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 * _thisAdjusted = reinterpret_cast<BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999 *>(__this + _offset);
	BindingSyntax_t4CF53EA4AD1D3551D228A917E9DE0CFD90C20999  _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_mA398DD821607175E7D62C3340441B234E8A2A1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9  L_2;
		L_2 = Collection_TryFindLayoutForType_mFCC2016FF39C1851AF868A20F5192AE0543AB96B((Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 *)(Collection_tE206B59A9571E9A3C0E2ECE7D4C8F5F209F2FBD4 *)(((InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_tF9BB59A7C099E93E5D86599E4777FBC19597A4A0_il2cpp_TypeInfo_var))->get_address_of_s_Layouts_15()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 )L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_m5492402BB76228A8640E86DC193EC91DBDF1DD43((InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(InternedString_tCD9FB98956EDF6D07A8ABF907C05C5B5257C08F9 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C((String_t*)L_4, /*hidden argument*/NULL);
		V_2 = (bool)L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_8);
		V_0 = (String_t*)L_9;
	}

IL_003e:
	{
		// return $"<{layoutName}>";
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, (String_t*)L_10, (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		V_3 = (String_t*)L_11;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		String_t* L_12 = V_3;
		return (String_t*)L_12;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		V_0 = (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_2 = V_0;
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mD44EDFE5979C04D49B8C37EE8650F026CAC7E5E3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		V_0 = (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_2 = V_0;
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m21B23847CECEBF7E66FEAA9E5BFBDBB5F719B8AE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m0B656A7C061C7754B5E2415834155849A82060BD((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		V_0 = (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_2 = V_0;
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m7C9BBC397499EA3BC974511EF7D24CC82D553B73(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_gshared (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_m6C5E6F6BA4C8A36529FDA0DF447941C9646FFF76((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mD5C45262A99D15301860F6498F445A229EA66B7D((ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)(ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		V_0 = (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  L_2 = V_0;
		return (ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 )L_2;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6 *>(__this + _offset);
	ControlSchemeSyntax_t8C3B0759B5D3FAED90417626B94370258B9909A6  _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mD852E79924D3C2087DDCDBDD63F3F6E202E7DEBA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,System.Single>(TProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (processor == null)
		RuntimeObject * L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(processor));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_RuntimeMethod_var)));
	}

IL_0019:
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_3;
		L_3 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * L_4 = (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_5 = ___processor0;
		int32_t L_6;
		L_6 = InlinedArray_1_Append_mEBFD1065C9722EEC4756FB770F5F274DA481234B((InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)L_4, (InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_7 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		V_1 = (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_8 = V_1;
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_8;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * _thisAdjusted = reinterpret_cast<ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *>(__this + _offset);
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_inline(_thisAdjusted, ___processor0, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputControlExtensions/ControlBuilder UnityEngine.InputSystem.InputControlExtensions/ControlBuilder::WithProcessor<System.Object,UnityEngine.Vector2>(TProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (processor == null)
		RuntimeObject * L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(processor));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_RuntimeMethod_var)));
	}

IL_0019:
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_3;
		L_3 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * L_4 = (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_5 = ___processor0;
		int32_t L_6;
		L_6 = InlinedArray_1_Append_m30E33D84F5B20A6A532E2B2DF48D732DC11C410D((InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)L_4, (InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_7 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		V_1 = (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_8 = V_1;
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_8;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * _thisAdjusted = reinterpret_cast<ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *>(__this + _offset);
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_inline(_thisAdjusted, ___processor0, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * Builder_WithType_TisRuntimeObject_mF3C7336CC3DDF12C9B5B2CBACE3B5B5BBEB0498D_gshared (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * V_0 = NULL;
	{
		// type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this);
		Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline((Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return this;
		V_0 = (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)__this;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * L_2 = V_0;
		return (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 *)L_2;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * QuoteVisitor_VisitLambda_TisRuntimeObject_mF0A4AC2198AACA7CB1D4527BC7E79D3D9DAF8F72_gshared (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_0;
		L_0 = Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_inline(/*hidden argument*/Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_1 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_1);
		V_1 = (int32_t)L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_5 = (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)il2cpp_codegen_object_new(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var);
		List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30(L_5, (int32_t)L_4, /*hidden argument*/List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var);
		V_2 = (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_5;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_6 = V_2;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_7);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_9;
		L_9 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_7, (int32_t)L_8);
		NullCheck((List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_6);
		List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708((List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_6, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_9, /*hidden argument*/List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		NullCheck((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this);
		QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this, (RuntimeObject*)L_14, /*hidden argument*/NULL);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = ((  Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * (*) (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		NullCheck((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this);
		QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this, (RuntimeObject*)L_17, /*hidden argument*/NULL);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_gshared (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_0 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_2 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_2, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		V_1 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_2;
		V_2 = (int32_t)0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_3 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		V_3 = (int32_t)L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_5 = V_1;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8;
		L_8 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6, (int32_t)L_7);
		NullCheck((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_8, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_13 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_14 = V_1;
		NullCheck((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13, (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_14, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15, /*hidden argument*/NULL);
		NullCheck((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_17;
		L_17 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16);
		V_0 = (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_17;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_20 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		NullCheck((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_21;
		L_21 = Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_22 = V_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_23 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_24;
		L_24 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_22) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_25 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_25;
	}

IL_0069:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_26 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_27 = V_0;
		NullCheck((Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_28;
		L_28 = VirtFuncInvoker2< Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* >::Invoke(19 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_27, (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)NULL);
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_28;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisRuntimeObject_mD48C3F8DC6881004DF2E69BA2AE75BE183138526_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, RuntimeObject * ___state0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_0 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_1 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_2 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_1;
		RuntimeObject * L_3 = ___state0;
		NullCheck(L_2);
		L_2->set_state_2(L_3);
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_4 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_2;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_5 = ___action1;
		NullCheck(L_4);
		L_4->set_action_3(L_5);
		U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A * L_6 = (U3CImmediateActionU3Ed__1_1_tBE5C13D6C8057632B4378BF49E626A8390B9313A *)L_4;
		RuntimeObject* L_7 = ___cancellation2;
		NullCheck(L_6);
		L_6->set_cancellation_4(L_7);
		return (RuntimeObject*)L_6;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_mA33AFDA7F134DEC20068A69CF61087E993A0BBD1_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state0, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_0 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_1 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_2 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_1;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_3 = ___state0;
		NullCheck(L_2);
		L_2->set_state_2(L_3);
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_4 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_2;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_5 = ___action1;
		NullCheck(L_4);
		L_4->set_action_3(L_5);
		U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C * L_6 = (U3CImmediateActionU3Ed__1_1_tF69CE22FC58BF3C9F4EAD13FB229A5288C745E1C *)L_4;
		RuntimeObject* L_7 = ___cancellation2;
		NullCheck(L_6);
		L_6->set_cancellation_4(L_7);
		return (RuntimeObject*)L_6;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mE015320EE23ACD1967D1903D57D6ABCC09B2CC21_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject * L_0 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this, (RuntimeObject *)L_0, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mB4C6BE72499806EFF47F613C894839FF66922F83((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m0787276F00BD0C2CC80BC5084708A1965C54E57E_gshared (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_0 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((EndOfFrameMainThreadScheduler_tE8B7A08578A0DC4A88F92C54593F3E40A4FF0FC9 *)__this, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_0, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mB4C6BE72499806EFF47F613C894839FF66922F83((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<System.Object>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisRuntimeObject_m4DD48596C2B6510E6A49714EA82341E2F086D46D_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, RuntimeObject * ___state0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_0 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_1 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_2 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_1;
		RuntimeObject * L_3 = ___state0;
		NullCheck(L_2);
		L_2->set_state_2(L_3);
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_4 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_2;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_5 = ___action1;
		NullCheck(L_4);
		L_4->set_action_3(L_5);
		U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 * L_6 = (U3CImmediateActionU3Ed__1_1_tDEC74675D78C0B902C292A0203E42A107C713BA7 *)L_4;
		RuntimeObject* L_7 = ___cancellation2;
		NullCheck(L_6);
		L_6->set_cancellation_4(L_7);
		return (RuntimeObject*)L_6;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<UniRx.Unit>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_mA172FB291BE32CAFD2B4A201DC0CFA239F0F966D_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state0, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method)
{
	{
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_0 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_1 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_5(__this);
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_2 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_1;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_3 = ___state0;
		NullCheck(L_2);
		L_2->set_state_2(L_3);
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_4 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_2;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_5 = ___action1;
		NullCheck(L_4);
		L_4->set_action_3(L_5);
		U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A * L_6 = (U3CImmediateActionU3Ed__1_1_tC8E6D01350CE66F84B632D7260A5729F458FC03A *)L_4;
		RuntimeObject* L_7 = ___cancellation2;
		NullCheck(L_6);
		L_6->set_cancellation_4(L_7);
		return (RuntimeObject*)L_6;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mDE2A8E62E4144895E4050EDC73EA7E88A8B08FF1_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		RuntimeObject * L_0 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this, (RuntimeObject *)L_0, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_mB2018129DF3E65A38F316D61DF0F3255AFB5F459((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m22BD1A3BEFB9B3D9A95536BFE030FE37C07501AE_gshared (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_0 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((FixedUpdateMainThreadScheduler_t47CBBD1634E2D14FE826AFC0F218E5FBFF881174 *)__this, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_0, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_mB2018129DF3E65A38F316D61DF0F3255AFB5F459((RuntimeObject*)L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisRuntimeObject_mCCF0E62BCFE742CDAA9A68C5F75298758DCADA12_gshared (IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_t50C0568F2DDED238F1F5FC3F7340C11C89141685_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		RuntimeObject * L_2 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___action2;
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_4;
		L_4 = ((  Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * (*) (RuntimeObject*, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (RuntimeObject *)L_2, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mCFC533A6A5332BA5AA6816373F4D96CA5831ABE2((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m0468DF44B7C7A179A363300D5E95C3C41D792449_gshared (IgnoreTimeScaleMainThreadScheduler_tDE9B9647AE60FF7CE670C3CD55E364031A861391 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_tA0367D61EBD41502D62CD8F384695E9AEA3DA72A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_2 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_3 = ___action2;
		Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * L_4;
		L_4 = ((  Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * (*) (RuntimeObject*, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_2, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mCFC533A6A5332BA5AA6816373F4D96CA5831ABE2((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m3FC6E85DC4BD3467E282CA05F26D00286995C182_gshared (MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * V_0 = NULL;
	bool V_1 = false;
	{
		// var t = (Tuple<ICancelable, T, Action<T>>)state;
		RuntimeObject * L_0 = ___state0;
		V_0 = (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		// if (!t.Item1.IsDisposed)
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_1 = V_0;
		NullCheck((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_1);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck((RuntimeObject*)L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// t.Item3(t.Item2);
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_5 = V_0;
		NullCheck((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_5);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_6;
		L_6 = ((  Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * (*) (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_7 = V_0;
		NullCheck((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_7);
		RuntimeObject * L_8;
		L_8 = ((  RuntimeObject * (*) (Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		NullCheck((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_6);
		((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_6, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<System.Object>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisRuntimeObject_m29FA3BFE909538143108E6817B1A8733667E027D_gshared (MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * __this, RuntimeObject* ___cancel0, RuntimeObject * ___state1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_t8B923A96D8CEF02F76AC59E247833940F1108186_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		RuntimeObject * L_2 = ___state1;
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = ___action2;
		Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * L_4;
		L_4 = ((  Tuple_3_tC20C504301A67D684EFACB83D79686E8FC339180 * (*) (RuntimeObject*, RuntimeObject *, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (RuntimeObject *)L_2, (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mCFC533A6A5332BA5AA6816373F4D96CA5831ABE2((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<UniRx.Unit>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisUnit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_m541C8DD13509D03E3E89F2CB95B560C2C0B898C0_gshared (MainThreadScheduler_t48B46CA8F52051759E6ED7B3E9FF42C2F9B77C17 * __this, RuntimeObject* ___cancel0, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___state1, Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * ___action2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((QueuedAction_1_t9CF0ECC8268337E2E3A2EA2B206B3002EEFA4EA4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Instance_0();
		RuntimeObject* L_1 = ___cancel0;
		Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  L_2 = ___state1;
		Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB * L_3 = ___action2;
		Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * L_4;
		L_4 = ((  Tuple_3_tB8C67E42D80E6DDADBE0C0C0AA6A676EC1701E60 * (*) (RuntimeObject*, Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C , Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_1, (Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C )L_2, (Action_1_tF551EBC62DEE5ED00F916E54E90DC0CBD0D158EB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		IL2CPP_RUNTIME_CLASS_INIT(MainThreadDispatcher_t2FAB1FD77FC682D33CF5764698C0589FD9C918A7_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_mCFC533A6A5332BA5AA6816373F4D96CA5831ABE2((Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)L_0, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::AddEventHandler<System.Object>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedEventRegistrationImpl_AddEventHandler_TisRuntimeObject_m22C549D6251D785B853C0F4CC2CC687EEAFDDAF1_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, RuntimeObject * ___handler2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * V_0 = NULL;
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * V_2 = NULL;
	bool V_3 = false;
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_0 = ___removeMethod1;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_2 = ___removeMethod1;
		IL2CPP_RUNTIME_CLASS_INIT(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_3;
		L_3 = ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_m8BBB3CF664BBC6EA31B8469EADEFD8EC1D82B8D3((RuntimeObject *)L_1, (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_2, /*hidden argument*/NULL);
		V_0 = (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_3;
		Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * L_4 = ___addMethod0;
		RuntimeObject * L_5 = ___handler2;
		NullCheck((Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 *)L_4);
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_6;
		L_6 = ((  EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  (*) (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_6;
		Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_7 = V_0;
		V_2 = (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_7;
		V_3 = (bool)0;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_8 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_8, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_9 = V_0;
			RuntimeObject * L_10 = ___handler2;
			NullCheck((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_9);
			bool L_11;
			L_11 = Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_9, (RuntimeObject *)L_10, (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0049;
			}
		}

IL_0031:
		{
			EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_12 = V_1;
			EventRegistrationTokenList__ctor_m06470FB422418EBC781CFC09992EE7D2F4EF9772((EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(&V_4), (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_12, /*hidden argument*/NULL);
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_13 = V_0;
			RuntimeObject * L_14 = ___handler2;
			EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  L_15 = V_4;
			NullCheck((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_13);
			Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_13, (RuntimeObject *)L_14, (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 )L_15, /*hidden argument*/Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7_RuntimeMethod_var);
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}

IL_0049:
		{
			EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_16 = V_1;
			bool L_17;
			L_17 = EventRegistrationTokenList_Push_mA05262483205E888368D766263A039078C98D8E8((EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(&V_4), (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0061;
			}
		}

IL_0053:
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_18 = V_0;
			RuntimeObject * L_19 = ___handler2;
			EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  L_20 = V_4;
			NullCheck((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_18);
			Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_18, (RuntimeObject *)L_19, (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 )L_20, /*hidden argument*/Dictionary_2_set_Item_mC31C547D1D8807C284FEE2E67821F99533C54EB7_RuntimeMethod_var);
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			bool L_21 = V_3;
			if (!L_21)
			{
				goto IL_006c;
			}
		}

IL_0066:
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_22 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_22, /*hidden argument*/NULL);
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/ManagedEventRegistrationImpl::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedEventRegistrationImpl_RemoveEventHandler_TisRuntimeObject_mD97F895A37C0E52B1E901B4E0E072FFE0CCF363F_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, RuntimeObject * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * V_0 = NULL;
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * V_2 = NULL;
	bool V_3 = false;
	EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_0 = ___removeMethod0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1;
		L_1 = Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_2 = ___removeMethod0;
		IL2CPP_RUNTIME_CLASS_INIT(ManagedEventRegistrationImpl_t68BCFDC6DFC89A0F8CF53836672DD1F41C47CEEB_il2cpp_TypeInfo_var);
		Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_3;
		L_3 = ManagedEventRegistrationImpl_GetEventRegistrationTokenTable_m8BBB3CF664BBC6EA31B8469EADEFD8EC1D82B8D3((RuntimeObject *)L_1, (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_2, /*hidden argument*/NULL);
		V_0 = (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_3;
		Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_4 = V_0;
		V_2 = (Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_4;
		V_3 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_5 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_5, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_6 = V_0;
			RuntimeObject * L_7 = ___handler1;
			NullCheck((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_6);
			bool L_8;
			L_8 = Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_6, (RuntimeObject *)L_7, (EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_mF842EC8D110A281144B0082DE75F29AE5261F24F_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_002b;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0045);
		}

IL_002b:
		{
			bool L_9;
			L_9 = EventRegistrationTokenList_Pop_mEDB55C6642FBEE0B03BDC2C06E84FBEFAE96FCDB((EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(EventRegistrationTokenList_t0B8EB3E0DA8A305BFCD313936266A15F50B4B128 *)(&V_4), (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)(&V_1), /*hidden argument*/NULL);
			if (L_9)
			{
				goto IL_0043;
			}
		}

IL_0036:
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_10 = V_0;
			RuntimeObject * L_11 = ___handler1;
			NullCheck((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_10);
			bool L_12;
			L_12 = Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C((Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/Dictionary_2_Remove_mF26A9D605B336E64E00D3E9B1A2B24D23F440D1C_RuntimeMethod_var);
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_3;
			if (!L_13)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			Dictionary_2_t5BB631D653FC099355128DBC14DC44E27AD30739 * L_14 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_14, /*hidden argument*/NULL);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
	}

IL_004f:
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_15 = ___removeMethod0;
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_16 = V_1;
		NullCheck((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_15);
		Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_15, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_16, /*hidden argument*/Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_RuntimeMethod_var);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::AddEventHandler<System.Object>(System.Func`2<T,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeOrStaticEventRegistrationImpl_AddEventHandler_TisRuntimeObject_m8E5074116B1AE98ECF1E3CF6F7FF8040E6221BE2_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, RuntimeObject * ___handler2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF73DB702E1356B2CC2F9C09D3443987A75954088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * V_3 = NULL;
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * V_4 = NULL;
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * V_5 = NULL;
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_0 = ___removeMethod1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = NativeOrStaticEventRegistrationImpl_GetInstanceKey_m609103D809620576492B03F7BFB8FC959231E174((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_1;
		Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * L_2 = ___addMethod0;
		RuntimeObject * L_3 = ___handler2;
		NullCheck((Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 *)L_2);
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_4;
		L_4 = ((  EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  (*) (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_4;
		V_2 = (bool)0;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
			MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_5 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
			il2cpp_codegen_memory_barrier();
			NullCheck((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_5);
			MyReaderWriterLock_AcquireReaderLock_m4C64A27901CB970D8F6FA8A4AE98B8980C8138AD((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_5, (int32_t)(-1), /*hidden argument*/NULL);
		}

IL_001e:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_6 = V_0;
				Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_7 = ___removeMethod1;
				IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
				ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_8;
				L_8 = NativeOrStaticEventRegistrationImpl_GetOrCreateEventRegistrationTokenTable_mE0D26BCAD8501EEF779A9CB54A47E7621638426F((RuntimeObject *)L_6, (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_7, (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC **)(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC **)(&V_4), /*hidden argument*/NULL);
				V_5 = (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_8;
				ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_9 = V_5;
				V_6 = (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_9;
				V_7 = (bool)0;
			}

IL_0030:
			try
			{ // begin try (depth: 3)
				{
					ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_10 = V_6;
					Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_10, (bool*)(bool*)(&V_7), /*hidden argument*/NULL);
					ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_11 = V_5;
					RuntimeObject * L_12 = ___handler2;
					NullCheck((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_11);
					RuntimeObject * L_13;
					L_13 = ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_11, (RuntimeObject *)L_12, (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 **)(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 **)(&V_3), /*hidden argument*/ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713_RuntimeMethod_var);
					if (L_13)
					{
						goto IL_0063;
					}
				}

IL_004a:
				{
					TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * L_14 = V_4;
					EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_15 = V_1;
					EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * L_16 = (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)il2cpp_codegen_object_new(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6_il2cpp_TypeInfo_var);
					EventRegistrationTokenListWithCount__ctor_m09819A938F29C2DD7D8E2ACCC5249E6B7275E748(L_16, (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC *)L_14, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_15, /*hidden argument*/NULL);
					V_3 = (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)L_16;
					ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_17 = V_5;
					RuntimeObject * L_18 = ___handler2;
					EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * L_19 = V_3;
					NullCheck((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_17);
					ConditionalWeakTable_2_Add_mF73DB702E1356B2CC2F9C09D3443987A75954088((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_17, (RuntimeObject *)L_18, (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)L_19, /*hidden argument*/ConditionalWeakTable_2_Add_mF73DB702E1356B2CC2F9C09D3443987A75954088_RuntimeMethod_var);
					goto IL_006a;
				}

IL_0063:
				{
					EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * L_20 = V_3;
					EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_21 = V_1;
					NullCheck((EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)L_20);
					EventRegistrationTokenListWithCount_Push_m966CF9B4B55E54DADA94B9B325053F115B9421F5((EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)L_20, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_21, /*hidden argument*/NULL);
				}

IL_006a:
				{
					V_2 = (bool)1;
					IL2CPP_LEAVE(0x7A, FINALLY_006e);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_006e;
			}

FINALLY_006e:
			{ // begin finally (depth: 3)
				{
					bool L_22 = V_7;
					if (!L_22)
					{
						goto IL_0079;
					}
				}

IL_0072:
				{
					ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_23 = V_6;
					Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_23, /*hidden argument*/NULL);
				}

IL_0079:
				{
					IL2CPP_END_FINALLY(110)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(110)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x7A, IL_007a)
			}

IL_007a:
			{
				IL2CPP_LEAVE(0x89, FINALLY_007c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007c;
		}

FINALLY_007c:
		{ // begin finally (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
			MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_24 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
			il2cpp_codegen_memory_barrier();
			NullCheck((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_24);
			MyReaderWriterLock_ReleaseReaderLock_m9957FB580A0C803C269D10DB3C7B9482FF46A94D((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_24, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(124)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(124)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x89, IL_0089)
		}

IL_0089:
		{
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Exception)
		{
			bool L_25 = V_2;
			if (L_25)
			{
				goto IL_0096;
			}
		}

IL_008f:
		{
			Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_26 = ___removeMethod1;
			EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_27 = V_1;
			NullCheck((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_26);
			Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_26, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_27, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_RuntimeMethod_var)));
		}

IL_0096:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeOrStaticEventRegistrationImpl_AddEventHandler_TisRuntimeObject_m8E5074116B1AE98ECF1E3CF6F7FF8040E6221BE2_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0098:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal/NativeOrStaticEventRegistrationImpl::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeOrStaticEventRegistrationImpl_RemoveEventHandler_TisRuntimeObject_mD2BD38B2B3F52E3A92A6C2A48E74B8396671E01B_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, RuntimeObject * ___handler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mF1535859D88E215E79053D8935FCE7DF3F2D7124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC * V_2 = NULL;
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * V_3 = NULL;
	ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * V_4 = NULL;
	bool V_5 = false;
	EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * V_6 = NULL;
	RuntimeObject * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_0 = ___removeMethod0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = NativeOrStaticEventRegistrationImpl_GetInstanceKey_m609103D809620576492B03F7BFB8FC959231E174((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_1;
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_2 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
		il2cpp_codegen_memory_barrier();
		NullCheck((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_2);
		MyReaderWriterLock_AcquireReaderLock_m4C64A27901CB970D8F6FA8A4AE98B8980C8138AD((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_2, (int32_t)(-1), /*hidden argument*/NULL);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_3 = V_0;
			Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_4 = ___removeMethod0;
			IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
			ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_5;
			L_5 = NativeOrStaticEventRegistrationImpl_GetEventRegistrationTokenTableNoCreate_m2FDC87A2509BEB899C090FC0D2C3A5D0888B3250((RuntimeObject *)L_3, (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_4, (TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC **)(TokenListCount_t769EA62356D8C37857DCC81DB79A76FA75E319AC **)(&V_2), /*hidden argument*/NULL);
			V_3 = (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_5;
			ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_6 = V_3;
			if (L_6)
			{
				goto IL_0023;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_006a);
		}

IL_0023:
		{
			ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_7 = V_3;
			V_4 = (ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_7;
			V_5 = (bool)0;
		}

IL_0029:
		try
		{ // begin try (depth: 2)
			{
				ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_8 = V_4;
				Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_8, (bool*)(bool*)(&V_5), /*hidden argument*/NULL);
				ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_9 = V_3;
				RuntimeObject * L_10 = ___handler1;
				NullCheck((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_9);
				RuntimeObject * L_11;
				L_11 = ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_9, (RuntimeObject *)L_10, (EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 **)(EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 **)(&V_6), /*hidden argument*/ConditionalWeakTable_2_FindEquivalentKeyUnsafe_mC28129CC24B2F2D4CACEEC954DB5F99E4EEE0713_RuntimeMethod_var);
				V_7 = (RuntimeObject *)L_11;
				EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * L_12 = V_6;
				if (L_12)
				{
					goto IL_0048;
				}
			}

IL_0046:
			{
				IL2CPP_LEAVE(0x7E, FINALLY_005e);
			}

IL_0048:
			{
				EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 * L_13 = V_6;
				NullCheck((EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)L_13);
				bool L_14;
				L_14 = EventRegistrationTokenListWithCount_Pop_mB0D869EA5FC0BB430DB9BCF253396C6B5F7D20FB((EventRegistrationTokenListWithCount_t8BA708F75B90C86A7CA1F3FD1DFCBD742D458FC6 *)L_13, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 *)(&V_1), /*hidden argument*/NULL);
				if (L_14)
				{
					goto IL_005c;
				}
			}

IL_0053:
			{
				ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_15 = V_3;
				RuntimeObject * L_16 = V_7;
				NullCheck((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_15);
				bool L_17;
				L_17 = ConditionalWeakTable_2_Remove_mF1535859D88E215E79053D8935FCE7DF3F2D7124((ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 *)L_15, (RuntimeObject *)L_16, /*hidden argument*/ConditionalWeakTable_2_Remove_mF1535859D88E215E79053D8935FCE7DF3F2D7124_RuntimeMethod_var);
			}

IL_005c:
			{
				IL2CPP_LEAVE(0x77, FINALLY_005e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_005e;
		}

FINALLY_005e:
		{ // begin finally (depth: 2)
			{
				bool L_18 = V_5;
				if (!L_18)
				{
					goto IL_0069;
				}
			}

IL_0062:
			{
				ConditionalWeakTable_2_tDE9E02FF583A5D6707A2CCEF9E15BD2791EA4229 * L_19 = V_4;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_19, /*hidden argument*/NULL);
			}

IL_0069:
			{
				IL2CPP_END_FINALLY(94)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(94)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x7E, FINALLY_006a);
			IL2CPP_END_CLEANUP(0x77, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var);
		MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD * L_20 = ((NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_StaticFields*)il2cpp_codegen_static_fields_for(NativeOrStaticEventRegistrationImpl_tCA81B1033AD6FCE9E03C1E043758D4A1815B90E4_il2cpp_TypeInfo_var))->get_s_eventCacheRWLock_1();
		il2cpp_codegen_memory_barrier();
		NullCheck((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_20);
		MyReaderWriterLock_ReleaseReaderLock_m9957FB580A0C803C269D10DB3C7B9482FF46A94D((MyReaderWriterLock_t0EAF7040A5BCE7C816030732D088A8DB81FB97AD *)L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_21 = ___removeMethod0;
		EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  L_22 = V_1;
		NullCheck((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_21);
		Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA((Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)L_21, (EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 )L_22, /*hidden argument*/Action_1_Invoke_m0670A1DF770A18B2D457A2B700EEF92B463652DA_RuntimeMethod_var);
	}

IL_007e:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, const RuntimeMethod* method)
{
	{
		// public InputControl control { get; internal set; }
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_0 = __this->get_U3CcontrolU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m7C7D8F865861F0FA90DDF8383211C44DF9AF05A3_inline (Builder_tDCC142A1C1FBF17507DFFADD66F57F2D46191E42 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get__body_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_mA4C35D598EE379F0F1D49EA8670620792D25EAB1_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (processor == null)
		RuntimeObject * L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(processor));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD190944135E6BB3A22CCC7AB66BE0562DE988599_RuntimeMethod_var)));
	}

IL_0019:
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_3;
		L_3 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 * L_4 = (InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)((InputControl_1_tF42354375D56413009EB7AB67EFF86499C75FC1A *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_5 = ___processor0;
		int32_t L_6;
		L_6 = InlinedArray_1_Append_mEBFD1065C9722EEC4756FB770F5F274DA481234B((InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)(InlinedArray_1_t173A4AAA1091B685D54763E7BDA0B2A969D5B7A8 *)L_4, (InputProcessor_1_tAED37F2E21277FB5FEC75E41A9DC6E509588A27E *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_7 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		V_1 = (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_8 = V_1;
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_gshared_inline (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B * __this, RuntimeObject * ___processor0, const RuntimeMethod* method)
{
	bool V_0 = false;
	ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (processor == null)
		RuntimeObject * L_0 = ___processor0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(processor));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECA399E538EA49F0F44550B6F83C20738623A9E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ControlBuilder_WithProcessor_TisRuntimeObject_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m35B9B10F180C1774252C993F0BA5051D6BC620BE_RuntimeMethod_var)));
	}

IL_0019:
	{
		// ((InputControl<TValue>)control).m_ProcessorStack.Append(processor);
		InputControl_t8E008E36B2D6E8306C45DE55CDC77B764463D275 * L_3;
		L_3 = ControlBuilder_get_control_mF8426301777E0DBF85BEC9EFE8381F5B5CAD9D26_inline((ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this, /*hidden argument*/NULL);
		NullCheck(((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C * L_4 = (InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)((InputControl_1_t1E1FD9F2A786761164D7DFB99D19F52A40658CC0 *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))->get_address_of_m_ProcessorStack_21();
		RuntimeObject * L_5 = ___processor0;
		int32_t L_6;
		L_6 = InlinedArray_1_Append_m30E33D84F5B20A6A532E2B2DF48D732DC11C410D((InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)(InlinedArray_1_t964569D47A63F7EA752EC60C276F8489881B9F1C *)L_4, (InputProcessor_1_tA00463C7E0B0EA9E67F1B032382A8FA707239E29 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return this;
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_7 = (*(ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B *)__this);
		V_1 = (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B  L_8 = V_1;
		return (ControlBuilder_t2360737ED79BB5BBE10DB67C43AFE5F3873B709B )L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
