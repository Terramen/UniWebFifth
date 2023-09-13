#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6;
// System.Collections.Generic.Dictionary`2<System.String,Randomness>
struct Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct KeyCollection_t5D26B946C26464345D91A3DF860C02A5D3E535D2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action>
struct KeyCollection_t94F67CDF5E978000C16F49D121E96AC2F10CE60F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Randomness>
struct KeyCollection_tE81783CC5E2EB5443E150B28CE340EFFDEFD0668;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct ValueCollection_t8AFB67E2CB3D3975905C5C4CB69FC38C4CFBDD22;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action>
struct ValueCollection_tB6C7A8B6372F17E2F4C197D8E93B44F04165E83B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Randomness>
struct ValueCollection_t129403656E228FA1872CB59A54AA27FBDE3D5B35;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<UniWebViewNativeResultPayload>>[]
struct EntryU5BU5D_t0B236C71AE1FDD11192BEAB2606FFCF0606AE7BF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action>[]
struct EntryU5BU5D_t34DD94604A143A63F891FD7F17CE3D5ABA76DEA4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Randomness>[]
struct EntryU5BU5D_t048BEDA4FF4D879BCEE9ED1910DDC1C0E1CF9274;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gfsfswerwefsdfsdf
struct Gfsfswerwefsdfsdf_t7E81487E7E9CEA76F49E5AD99E565E032B3BB201;
// Ghost
struct Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Randomness
struct Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Refsdkfopdskgdwqueq
struct Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1;
// SDfsdfsdfsvxc
struct SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83;
// UniWebViewInterface
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4;
// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// zvbvbdfgdfgdfg
struct zvbvbdfgdfgdfg_t6B46D1889C31E1963B367A443ACCB5F3A71B738A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Ghost/Jacket
struct Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Refsdkfopdskgdwqueq/<>c__DisplayClass151_0
struct U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036;
// Refsdkfopdskgdwqueq/EWrrwrwerwer
struct EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193;
// Refsdkfopdskgdwqueq/Hfddfgdfgdfg
struct Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972;
// Refsdkfopdskgdwqueq/Hsfsdfsdfsdf
struct Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2;
// Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D;
// Refsdkfopdskgdwqueq/Mdgddfddfgdfg
struct Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23;
// Refsdkfopdskgdwqueq/SDFSdfsdfdfdf
struct SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506;
// Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf
struct SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE;
// Refsdkfopdskgdwqueq/SDfsdfsdffs
struct SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0;
// Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf
struct Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7;
// Refsdkfopdskgdwqueq/Shfhfghfghfdgf
struct Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C;
// Refsdkfopdskgdwqueq/Tsfsdfsdfsdf
struct Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146;
// Refsdkfopdskgdwqueq/Wsdfsdfsdfsf
struct Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7;
// Refsdkfopdskgdwqueq/Zgblfgflgfgh
struct Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A;
// Refsdkfopdskgdwqueq/ghfghfgghdfgdfg
struct ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Number_t9994D59A73B14DD25B9702E419BD9342BFB2766D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E;
IL2CPP_EXTERN_C String_t* _stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621;
IL2CPP_EXTERN_C String_t* _stringLiteral0537E826CEC4233BE28552114535F51A3D777943;
IL2CPP_EXTERN_C String_t* _stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72;
IL2CPP_EXTERN_C String_t* _stringLiteral074A3DC1C0E462D06A2CA56C9F794552A5ADA0B4;
IL2CPP_EXTERN_C String_t* _stringLiteral0756011DA72334260EBD420AB059FE9EE40137F0;
IL2CPP_EXTERN_C String_t* _stringLiteral08633C2377AF3DFC94C5CB3D03DC2D64ED6FAF79;
IL2CPP_EXTERN_C String_t* _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265;
IL2CPP_EXTERN_C String_t* _stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6;
IL2CPP_EXTERN_C String_t* _stringLiteral133E9AF1FE3790D58DE1710B9E135F8D36C4C3C7;
IL2CPP_EXTERN_C String_t* _stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB;
IL2CPP_EXTERN_C String_t* _stringLiteral28FF6DFD3E8AA3191D3F2B382C632FB66418CA6D;
IL2CPP_EXTERN_C String_t* _stringLiteral29BA19E2B4BDE90186D0B8DCAD4A123979EEAD0C;
IL2CPP_EXTERN_C String_t* _stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962;
IL2CPP_EXTERN_C String_t* _stringLiteral2A38FB2700085B9154A42E8C6B30D012B08A2B8C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA4D4FFDA2F3867A69AE20E02C8940E7AC32326;
IL2CPP_EXTERN_C String_t* _stringLiteral2C074D8D758D5BD2A6E4A5D35E28636464FDE887;
IL2CPP_EXTERN_C String_t* _stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7;
IL2CPP_EXTERN_C String_t* _stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81;
IL2CPP_EXTERN_C String_t* _stringLiteral33EAFB53CE0246B53D3BDC39F1CE404D952898A5;
IL2CPP_EXTERN_C String_t* _stringLiteral34820D8607BA4209C8866953F3A176304856830C;
IL2CPP_EXTERN_C String_t* _stringLiteral37DD53F3C91602BAB84363C053188A81B762168F;
IL2CPP_EXTERN_C String_t* _stringLiteral3876F6A56E549811D017FAF04728F1079ECDA0DB;
IL2CPP_EXTERN_C String_t* _stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154;
IL2CPP_EXTERN_C String_t* _stringLiteral3D843C4566F06ECE30745C8A376EAF45D8FF93C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182;
IL2CPP_EXTERN_C String_t* _stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403;
IL2CPP_EXTERN_C String_t* _stringLiteral404882E89AE1D7D5D95ECFB5E4BF8ADE10C810CC;
IL2CPP_EXTERN_C String_t* _stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595;
IL2CPP_EXTERN_C String_t* _stringLiteral418218478E990A3D17DFC164A6D02CC3417709AB;
IL2CPP_EXTERN_C String_t* _stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F;
IL2CPP_EXTERN_C String_t* _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A;
IL2CPP_EXTERN_C String_t* _stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4;
IL2CPP_EXTERN_C String_t* _stringLiteral46235E42561BC75195410C8FD01B7026927BA27E;
IL2CPP_EXTERN_C String_t* _stringLiteral47816BB6EC7ED3FCABFA9FB3F3D72045A97E62FE;
IL2CPP_EXTERN_C String_t* _stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF168F3714F825A36ADAAD0ED659369923AD291;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184;
IL2CPP_EXTERN_C String_t* _stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4;
IL2CPP_EXTERN_C String_t* _stringLiteral59603CAEA09E8E5B561C04BFB39327833068B254;
IL2CPP_EXTERN_C String_t* _stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1BC1E5019F17303448092B414A15E129286900;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA503855111C346E6CBE6DEF890CC86D08F832F;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6;
IL2CPP_EXTERN_C String_t* _stringLiteral5EB5A3602F63E6B40BD6A0ED7104737056B22E35;
IL2CPP_EXTERN_C String_t* _stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560;
IL2CPP_EXTERN_C String_t* _stringLiteral6273268A800B8837D5B315F1A0CB73F9116AA007;
IL2CPP_EXTERN_C String_t* _stringLiteral63640ECC5622F470E8646963A0C44E3C867DBD1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407;
IL2CPP_EXTERN_C String_t* _stringLiteral6B79AA41BC8919BC684CCF5E61DD490FB3DD00E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6BCB0E905A45A66BA5504F5958879C3852928877;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE50CF92E8553163769B3851BEC74389979CF9D;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95;
IL2CPP_EXTERN_C String_t* _stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22;
IL2CPP_EXTERN_C String_t* _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral74A5881238A30DEB9EF11A8EE6B92E2B642BF6AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8228F26A547DD52F870220D24F4F243E35286F25;
IL2CPP_EXTERN_C String_t* _stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2;
IL2CPP_EXTERN_C String_t* _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789;
IL2CPP_EXTERN_C String_t* _stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763;
IL2CPP_EXTERN_C String_t* _stringLiteral859C2E996D52B6C47039DC1B9F8A66A35C01D84E;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE8094A679F5B0B98B060E6C9BCECEE3CE3B544;
IL2CPP_EXTERN_C String_t* _stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF;
IL2CPP_EXTERN_C String_t* _stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096;
IL2CPP_EXTERN_C String_t* _stringLiteral8C996CCB2622D400C432C4F76395CEF7E782B58C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA23FF44587D3C9E78BC35B69214D19422CD06F;
IL2CPP_EXTERN_C String_t* _stringLiteral936CE6919C99DBE2A0544D68CA4F6B3B152B06F7;
IL2CPP_EXTERN_C String_t* _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921;
IL2CPP_EXTERN_C String_t* _stringLiteral985A122C449B71C67A7F520F29E01A4E498BA359;
IL2CPP_EXTERN_C String_t* _stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8;
IL2CPP_EXTERN_C String_t* _stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022;
IL2CPP_EXTERN_C String_t* _stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC3B647344371B61D6948D8A3F3C7B7191EE5C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA1738FA234DD23984A6C35D65687B65D92536008;
IL2CPP_EXTERN_C String_t* _stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA;
IL2CPP_EXTERN_C String_t* _stringLiteralA8470149B0407466650F06766939AC3FAF9A75DC;
IL2CPP_EXTERN_C String_t* _stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1330B9ABCDB144D4A6B6091457917791ADAA5A;
IL2CPP_EXTERN_C String_t* _stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324;
IL2CPP_EXTERN_C String_t* _stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4CB387AAEB2718852B6346A1018371E1A1CEE3D;
IL2CPP_EXTERN_C String_t* _stringLiteralB643B65A6594ED526129C75845CA1B2571532D7B;
IL2CPP_EXTERN_C String_t* _stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB;
IL2CPP_EXTERN_C String_t* _stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A;
IL2CPP_EXTERN_C String_t* _stringLiteralB9DECC3795BF71CC5D2B2A8BE5AF206B97C7ED60;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595;
IL2CPP_EXTERN_C String_t* _stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3;
IL2CPP_EXTERN_C String_t* _stringLiteralD20DC7690F6F3E7A33739D9F454BBD93A8C2A06F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC757D3DEBA39A9CAC85CE7B248E1A2290EA3C93;
IL2CPP_EXTERN_C String_t* _stringLiteralDDC0EB7320557FA6948002573D6EC440B69CA3C5;
IL2CPP_EXTERN_C String_t* _stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21;
IL2CPP_EXTERN_C String_t* _stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FD7533D578834C52F955AF663C262434D950DE;
IL2CPP_EXTERN_C String_t* _stringLiteralE427F9EA7E037693EAF1FD0C5157CE4E5E94683D;
IL2CPP_EXTERN_C String_t* _stringLiteralE65128A8F29D16CFF257B7118A6340A8224C16F8;
IL2CPP_EXTERN_C String_t* _stringLiteralE714CCB7AA8B954DDF0F7B8E191A95D04A3E92AF;
IL2CPP_EXTERN_C String_t* _stringLiteralE9FD5A0E37F7B3D0F9AE7CD4683178F182DF0CEF;
IL2CPP_EXTERN_C String_t* _stringLiteralEE880F8BDE467F8CBE2494BFD8755D0E20319D2D;
IL2CPP_EXTERN_C String_t* _stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED;
IL2CPP_EXTERN_C String_t* _stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206;
IL2CPP_EXTERN_C String_t* _stringLiteralF631279E75EEAC56F1CF12AF5DF7D851E743117E;
IL2CPP_EXTERN_C String_t* _stringLiteralF87DAB5CB43A5864DA1E61ADF16C8269A6B56FCB;
IL2CPP_EXTERN_C String_t* _stringLiteralFC809057EAA66F586A38B1AE8A151B5D0CF4C74C;
IL2CPP_EXTERN_C String_t* _stringLiteralFE0C6E1862C24014642E397665721C85D0C403E6;
IL2CPP_EXTERN_C String_t* _stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3D7A964C1BAE85CB0BC40B72953328F1AA4D39A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB1241EB140A74D043769E94B1F0D22A1F669651C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2880B6C6370C537784F622B21500CB40A89A7DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB2D8F2483518BB09C9D769B48624A4219DB6A8D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass151_0_U3CGU3Eb__0_m41AE61BC8ABA40392F9A48711C9E65E2A73AFEAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0CA68B4774C0576102C22D9907CBF946C9F36D3D 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0B236C71AE1FDD11192BEAB2606FFCF0606AE7BF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5D26B946C26464345D91A3DF860C02A5D3E535D2* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8AFB67E2CB3D3975905C5C4CB69FC38C4CFBDD22* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t34DD94604A143A63F891FD7F17CE3D5ABA76DEA4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t94F67CDF5E978000C16F49D121E96AC2F10CE60F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB6C7A8B6372F17E2F4C197D8E93B44F04165E83B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Randomness>
struct Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t048BEDA4FF4D879BCEE9ED1910DDC1C0E1CF9274* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE81783CC5E2EB5443E150B28CE340EFFDEFD0668* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t129403656E228FA1872CB59A54AA27FBDE3D5B35* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Gfsfswerwefsdfsdf
struct Gfsfswerwefsdfsdf_t7E81487E7E9CEA76F49E5AD99E565E032B3BB201  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// SDfsdfsdfsvxc
struct SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51  : public RuntimeObject
{
	// SDfsdfsdfsvxc/Number SDfsdfsdfsvxc::_number
	int32_t ____number_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UniWebViewInterface
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4  : public RuntimeObject
{
};

// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28  : public RuntimeObject
{
	// System.String UniWebViewNativeResultPayload::identifier
	String_t* ___identifier_0;
	// System.String UniWebViewNativeResultPayload::resultCode
	String_t* ___resultCode_1;
	// System.String UniWebViewNativeResultPayload::data
	String_t* ___data_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Refsdkfopdskgdwqueq/<>c__DisplayClass151_0
struct U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036  : public RuntimeObject
{
	// System.Action`1<System.String> Refsdkfopdskgdwqueq/<>c__DisplayClass151_0::handler
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___handler_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Gfrrasdu
struct Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 
{
	// System.String Gfrrasdu::<G>k__BackingField
	String_t* ___U3CGU3Ek__BackingField_0;
	// System.String Gfrrasdu::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
	// System.String Gfrrasdu::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Gfrrasdu::<Args>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of Gfrrasdu
struct Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_pinvoke
{
	char* ___U3CGU3Ek__BackingField_0;
	char* ___U3CSchemeU3Ek__BackingField_1;
	char* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Gfrrasdu
struct Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_com
{
	Il2CppChar* ___U3CGU3Ek__BackingField_0;
	Il2CppChar* ___U3CSchemeU3Ek__BackingField_1;
	Il2CppChar* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CArgsU3Ek__BackingField_3;
};

// System.Guid
struct Guid_t 
{
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
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Ghost
struct Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// Ghost/Jacket Ghost::GetOut
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* ___GetOut_4;
	// System.String Ghost::m
	String_t* ___m_5;
	// Randomness Ghost::p
	Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* ___p_6;
	// System.String Ghost::g
	String_t* ___g_7;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Ghost/Jacket
struct Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/EWrrwrwerwer
struct EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Hfddfgdfgdfg
struct Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Hsfsdfsdfsdf
struct Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Mdgddfddfgdfg
struct Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/SDFSdfsdfdfdf
struct SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf
struct SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/SDfsdfsdffs
struct SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf
struct Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Shfhfghfghfdgf
struct Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Tsfsdfsdfsdf
struct Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Wsdfsdfsdfsf
struct Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/Zgblfgflgfgh
struct Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A  : public MulticastDelegate_t
{
};

// Refsdkfopdskgdwqueq/ghfghfgghdfgdfg
struct ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Randomness
struct Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Refsdkfopdskgdwqueq Randomness::webView
	Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___webView_5;
	// Ghost Randomness::safeBrowsing
	Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___safeBrowsing_6;
};

// Refsdkfopdskgdwqueq
struct Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf Refsdkfopdskgdwqueq::OnPageStarted
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* ___OnPageStarted_4;
	// Refsdkfopdskgdwqueq/SDfsdfsdffs Refsdkfopdskgdwqueq::Youyidas
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* ___Youyidas_5;
	// Refsdkfopdskgdwqueq/Hfddfgdfgdfg Refsdkfopdskgdwqueq::OnPageErrorReceived
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* ___OnPageErrorReceived_6;
	// Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf Refsdkfopdskgdwqueq::OnPageProgressChanged
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* ___OnPageProgressChanged_7;
	// Refsdkfopdskgdwqueq/SDFSdfsdfdfdf Refsdkfopdskgdwqueq::Hdgfgfsdgdfgdfg
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* ___Hdgfgfsdgdfgdfg_8;
	// Refsdkfopdskgdwqueq/Shfhfghfghfdgf Refsdkfopdskgdwqueq::Jhfdhdgdfdgd
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* ___Jhfdhdgdfdgd_9;
	// Refsdkfopdskgdwqueq/ghfghfgghdfgdfg Refsdkfopdskgdwqueq::Kldasdadasd
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* ___Kldasdadasd_10;
	// Refsdkfopdskgdwqueq/Tsfsdfsdfsdf Refsdkfopdskgdwqueq::Iyreyertersdfds
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* ___Iyreyertersdfds_11;
	// Refsdkfopdskgdwqueq/EWrrwrwerwer Refsdkfopdskgdwqueq::Rwqewrwerwsdfs
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* ___Rwqewrwerwsdfs_12;
	// Refsdkfopdskgdwqueq/Hsfsdfsdfsdf Refsdkfopdskgdwqueq::OnFileDownloadFinished
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* ___OnFileDownloadFinished_13;
	// Refsdkfopdskgdwqueq/Wsdfsdfsdfsf Refsdkfopdskgdwqueq::Ddadasdasdas
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* ___Ddadasdasdas_14;
	// Refsdkfopdskgdwqueq/Zgblfgflgfgh Refsdkfopdskgdwqueq::Trqweqweq
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* ___Trqweqweq_15;
	// Refsdkfopdskgdwqueq/Mdgddfddfgdfg Refsdkfopdskgdwqueq::Hfsdfsdfs
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* ___Hfsdfsdfs_16;
	// System.String Refsdkfopdskgdwqueq::id
	String_t* ___id_17;
	// Randomness Refsdkfopdskgdwqueq::listener
	Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* ___listener_18;
	// System.Boolean Refsdkfopdskgdwqueq::jhjj
	bool ___jhjj_19;
	// System.String Refsdkfopdskgdwqueq::urlOnStart
	String_t* ___urlOnStart_20;
	// System.Boolean Refsdkfopdskgdwqueq::showOnStart
	bool ___showOnStart_21;
	// System.Boolean Refsdkfopdskgdwqueq::fullScreen
	bool ___fullScreen_22;
	// System.Boolean Refsdkfopdskgdwqueq::useToolbar
	bool ___useToolbar_23;
	// Hfdfgeiq Refsdkfopdskgdwqueq::toolbarPosition
	int32_t ___toolbarPosition_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> Refsdkfopdskgdwqueq::n_
	Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* ___n__25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>> Refsdkfopdskgdwqueq::p_
	Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* ___p__26;
	// UnityEngine.Rect Refsdkfopdskgdwqueq::y
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___y_27;
	// UnityEngine.RectTransform Refsdkfopdskgdwqueq::hre
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___hre_28;
	// System.Boolean Refsdkfopdskgdwqueq::ljjgh
	bool ___ljjgh_29;
	// System.Boolean Refsdkfopdskgdwqueq::bgbsd
	bool ___bgbsd_30;
	// UnityEngine.Color Refsdkfopdskgdwqueq::r
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___r_31;
	// Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate Refsdkfopdskgdwqueq::OnKeyCodeReceived
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* ___OnKeyCodeReceived_32;
};

// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// zvbvbdfgdfgdfg
struct zvbvbdfgdfgdfg_t6B46D1889C31E1963B367A443ACCB5F3A71B738A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String zvbvbdfgdfgdfg::url
	String_t* ___url_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action>

// System.Collections.Generic.Dictionary`2<System.String,System.Action>

// System.Collections.Generic.Dictionary`2<System.String,Randomness>

// System.Collections.Generic.Dictionary`2<System.String,Randomness>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Gfsfswerwefsdfsdf

// Gfsfswerwefsdfsdf

// SDfsdfsdfsvxc
struct SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_StaticFields
{
	// SDfsdfsdfsvxc SDfsdfsdfsvxc::instance
	SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* ___instance_0;
};

// SDfsdfsdfsvxc

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UniWebViewInterface
struct UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields
{
	// UnityEngine.AndroidJavaClass UniWebViewInterface::plugin
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___plugin_0;
	// System.Boolean UniWebViewInterface::correctPlatform
	bool ___correctPlatform_1;
};

// UniWebViewInterface

// UniWebViewNativeResultPayload

// UniWebViewNativeResultPayload

// Refsdkfopdskgdwqueq/<>c__DisplayClass151_0

// Refsdkfopdskgdwqueq/<>c__DisplayClass151_0

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// Gfrrasdu

// Gfrrasdu

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Ghost

// Ghost

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<UniWebViewNativeResultPayload>

// System.Action`1<UniWebViewNativeResultPayload>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.Transform

// UnityEngine.Transform

// Ghost/Jacket

// Ghost/Jacket

// Refsdkfopdskgdwqueq/EWrrwrwerwer

// Refsdkfopdskgdwqueq/EWrrwrwerwer

// Refsdkfopdskgdwqueq/Hfddfgdfgdfg

// Refsdkfopdskgdwqueq/Hfddfgdfgdfg

// Refsdkfopdskgdwqueq/Hsfsdfsdfsdf

// Refsdkfopdskgdwqueq/Hsfsdfsdfsdf

// Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate

// Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate

// Refsdkfopdskgdwqueq/Mdgddfddfgdfg

// Refsdkfopdskgdwqueq/Mdgddfddfgdfg

// Refsdkfopdskgdwqueq/SDFSdfsdfdfdf

// Refsdkfopdskgdwqueq/SDFSdfsdfdfdf

// Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf

// Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf

// Refsdkfopdskgdwqueq/SDfsdfsdffs

// Refsdkfopdskgdwqueq/SDfsdfsdffs

// Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf

// Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf

// Refsdkfopdskgdwqueq/Shfhfghfghfdgf

// Refsdkfopdskgdwqueq/Shfhfghfghfdgf

// Refsdkfopdskgdwqueq/Tsfsdfsdfsdf

// Refsdkfopdskgdwqueq/Tsfsdfsdfsdf

// Refsdkfopdskgdwqueq/Wsdfsdfsdfsf

// Refsdkfopdskgdwqueq/Wsdfsdfsdfsf

// Refsdkfopdskgdwqueq/Zgblfgflgfgh

// Refsdkfopdskgdwqueq/Zgblfgflgfgh

// Refsdkfopdskgdwqueq/ghfghfgghdfgdfg

// Refsdkfopdskgdwqueq/ghfghfgghdfgdfg

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Randomness
struct Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Randomness> Randomness::listeners
	Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* ___listeners_4;
};

// Randomness

// Refsdkfopdskgdwqueq

// Refsdkfopdskgdwqueq

// UniWebViewAndroidStaticListener

// UniWebViewAndroidStaticListener

// zvbvbdfgdfgdfg

// zvbvbdfgdfgdfg
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UniWebViewAndroidStaticListener>()
inline UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// Randomness Randomness::GetListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* Randomness_GetListener_m4D46CD51E09177071FD8B999EC614AAF0DC16661 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String Gfrrasdu::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_G_m3C2099066FED75498BCBA80CCDCA71587807AA05_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) ;
// System.Void Gfrrasdu::set_G(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_G_mE2E30C103A834D160ED3833FC7AA45019A3669FF_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Gfrrasdu::get_Scheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_Scheme_m7D36BFECFF32FD3F6204E30ACF381558EC92BC0A_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) ;
// System.Void Gfrrasdu::set_Scheme(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_Scheme_mDE309C38BAABB10270A5A2D7394DF2567CCF61E2_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Gfrrasdu::get_Path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_Path_m81F6751518AE1FD05319FED6621CA50B3FCF0FD4_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) ;
// System.Void Gfrrasdu::set_Path(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_Path_m32650CD3AA76CD8F8466C4F8EAED33E8F414B378_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Gfrrasdu::get_Args()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) ;
// System.Void Gfrrasdu::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_Args_m9891C873A1799B5AFAFAE1CDC5CADCEECC70548C_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// SDfsdfsdfsvxc SDfsdfsdfsvxc::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A (const RuntimeMethod* method) ;
// System.Void SDfsdfsdfsvxc::TenKek(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_TenKek_m33C45296C5913CF03B99813227DA94B12207FCF1 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void SDfsdfsdfsvxc::ZeroKek(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_ZeroKek_m95E4C4190E5A51BA50ACE2A01A52767D0E6584FA (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8 (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void SDfsdfsdfsvxc::EightyGreat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Gfrrasdu::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfrrasdu__ctor_m32D9E56F7C883FBF1E639301B4A8F2C437C2669B (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_g, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_IsSafeBrowsingSupported_m9F76E5D4EBAA15D5E2243D40D9BD34D0879AB938 (const RuntimeMethod* method) ;
// System.Void Ghost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost__ctor_mC0469618EB9391051E1DDF7924AED132374E14B4 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) ;
// System.Boolean Gfsfswerwefsdfsdf::get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gfsfswerwefsdfsdf_get_IsEditor_m9C5FCCC1BC4E19B9D52FB3894350D1D100D43F50 (const RuntimeMethod* method) ;
// System.Void Ghost::NetJet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_NetJet_mB6EFFD8DF7214A890F6A0DBB62C2F4FDAF4F9A25 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Boolean Ghost::get_LeetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ghost_get_LeetCode_m7633DDE81B61DF8044D3477289DB30E2CE18DD47 (const RuntimeMethod* method) ;
// System.String Randomness::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SafeBrowsingShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SafeBrowsingSetToolbarColor(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Randomness>()
inline Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Randomness::AddListener(Randomness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_AddListener_mA47076792E124D20CD97795A2224840CA4888DA6 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* ___0_target, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SafeBrowsingInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6 (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) ;
// System.Void Ghost/Jacket::Invoke(Ghost)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_inline (Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method) ;
// System.Void Randomness::RemoveListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_RemoveListener_mE8194F958CE9011D3E2BFA86CE922525BAD56B9D (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Randomness>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3D7A964C1BAE85CB0BC40B72953328F1AA4D39A3 (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* __this, String_t* ___0_key, Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009*, String_t*, Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Randomness>::Remove(TKey)
inline bool Dictionary_2_Remove_mB1241EB140A74D043769E94B1F0D22A1F669651C (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Randomness>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2880B6C6370C537784F622B21500CB40A89A7DF3 (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* __this, String_t* ___0_key, Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009*, String_t*, Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void SDfsdfsdfsvxc::TwentyLol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnPageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageStarted_mB1D4FA4E41F244812422E9C947BA6F374F68B435 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_fsdfsdfsdf, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<UniWebViewNativeResultPayload>(System.String)
inline UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void Refsdkfopdskgdwqueq::InternalOnPageFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageFinished_m2A7625D362819DB64B1B9B86903DD0C3EC2DE4EC (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_bc, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageErrorReceived_m5EA712C322D494DA40E4FC29DE7FB8C09AF9CB31 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_jg, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423 (String_t* ___0_s, float* ___1_result, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnPageProgressChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageProgressChanged_mD7D46B2E1153A0D7F8183065D28A0C192D98896A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, float ___0_progress, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnShowTransitionFinished_m3EF50043C9C9F17FA39DB06907D9C1517ACA5E41 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnHideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnHideTransitionFinished_m7B22B04757D07985177B116BE6A3431103BE4B59 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnAnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnAnimateToFinished_m93888B77947C8ABA62FBF473521FED52A2A27D49 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_identifier, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnAddJavaScriptFinished_mF0BD6A8E3FF84E71AE28C90DFB350789E5FAD088 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnEvalJavaScriptFinished_mB517C1C5AA102495590D7F40E82C63070B3DC981 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnMessageReceived_mCF3AA22C6BE2DF74A113B870A539EE2979F53071 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_result, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnShouldClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnShouldClose_m38C39D38B3DE41871E1C20651658151DC1D6249E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnWebContentProcessDidTerminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnWebContentProcessDidTerminate_mD35DC123F358BC1D2F84D748C62DE9EA252F6548 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) ;
// System.Void Ghost::GetOutAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_GetOutAlive_mA7847B05BA974AE61AAFA987959B10FCD5E0BBBD (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnMultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnMultipleWindowOpened_m39C46A2FE868CD42C7084B25EAD0CC58BAB2FD59 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_gdfgdfgdf, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnMultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnMultipleWindowClosed_m7A428077E460A9C540354FE15DED83FEC0030636 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_ggdfdgdf, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnFileDownloadStarted(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnFileDownloadStarted_m6522041496ABBCF4E9107D0A9A9E5145F7D938AD (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_fsfdsfsdf, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnFileDownloadFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnFileDownloadFinished_m73EBD8AEC728614D9B021684BEAFBB4FF84A1B06 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_fsfdsdfsdfs, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnCaptureSnapshotFinished_mA5A7E9B32B5698F75269AF786CC116F841F2911B (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_fdsfsdfsdfsdf, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Randomness>::.ctor()
inline void Dictionary_2__ctor_mB2D8F2483518BB09C9D769B48624A4219DB6A8D2 (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Refsdkfopdskgdwqueq::BG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_BG_m9D9D06BC0F3243ADBDEF8603295561676BC61814 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) ;
// System.String UniWebViewInterface::GetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Rect Refsdkfopdskgdwqueq::NextFrameRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Refsdkfopdskgdwqueq_NextFrameRect_m6B5B85BE6A9E646BA922D429092595E5FF9A80D5 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_fourCornersArray, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UniWebViewInterface::NativeScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single UniWebViewInterface::NativeScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) ;
// System.Boolean Refsdkfopdskgdwqueq::M(System.Boolean,MendGrom,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_M_m2235893E95EA7AD20647131F211C2110DFDABAED (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::H(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_H_mF0828A2BF59DD07942F606D1446869102328D5F7 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_j, bool ___1_f, String_t* ___2_h, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/ghfghfgghdfgdfg::Invoke(Refsdkfopdskgdwqueq,UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_inline (ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean Refsdkfopdskgdwqueq::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_get_CanGoBack_m0843B20CB166431E88D546C5AE8A7E24504A4B56 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_GoBack_m0F5AEDA8236F523C606D54ECBB89199053EC2995 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) ;
// System.Boolean Refsdkfopdskgdwqueq::_Show(System.Boolean,MendGrom,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq__Show_m17A72C61E63BC0772FDD9595A5CDB0B8B08C79A5 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) ;
// System.Boolean Refsdkfopdskgdwqueq::_Hide(System.Boolean,MendGrom,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq__Hide_m397161DBF5DDD9B9F3877A4386A929DD9CF8E6D8 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59 (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Reload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::GoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::GoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::Add(TKey,TValue)
inline void Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetShowToolbar_m9D938F2AAD8236EA2D15D15BE60C47C0A99F6C00 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_show, bool ___1_animated, bool ___2_onTop, bool ___3_adjustInset, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) ;
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9 (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49 (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) ;
// System.String UniWebViewInterface::GetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2 (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowFileAccess(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156 (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetEnableKeyboardAvoidance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetEnableKeyboardAvoidance_mD6B9866731E8A9FE608A798425DBA42B0E9A48CE (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1 (bool ___0_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24 (bool ___0_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::CleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3 (const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) ;
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemoveCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) ;
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::AddPermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddPermissionTrustDomain_mEB9C21E5A179925F0C536DBE837761AF28766075 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::RemovePermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemovePermissionTrustDomain_m0EBFFD7F79AD89A2CA27E57092137E4CB328B1EC (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetUseWideViewPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUseWideViewPort_m47489E0088289ECA21D0CA5CA5CE0840F88CC6CB (String_t* ___0_name, bool ___1_use, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetLoadWithOverviewMode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLoadWithOverviewMode_m75E8005ED6FA15DCDAF5467988D2D0C47BAB0729 (String_t* ___0_name, bool ___1_overview, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetUserInteractionEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetTransparencyClickingThroughEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E (bool ___0_enabled, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/<>c__DisplayClass151_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass151_0__ctor_m6AFFAA5D7E71A15C912EF61B6765F95D5719FE85 (U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UniWebViewNativeResultPayload>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7 (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Refsdkfopdskgdwqueq::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_EvaluateJavaScript_mA00E1A6913F6A04A80D8B72C6BEB8EB9A00FF114 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetSupportMultipleWindows(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m521B45A2CAC7D83C0482BB365454E991A6C8573B (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetDefaultFontSize(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDefaultFontSize_mB805E508F0BA6B9075B6B3C231A80C7A3DE2B24B (String_t* ___0_name, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetTextZoom(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTextZoom_m419910B15BA5AEBCE6E170B55A2F3DD72DF96E12 (String_t* ___0_name, int32_t ___1_textZoom, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::CaptureSnapshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD (String_t* ___0_name, String_t* ___1_filename, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetDownloadEventForContextMenuEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m67EE6C45B99ABE4CF3B8E119FC36F06E06E2141F (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::Destroy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::Remove(TKey)
inline bool Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0 (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5 (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Action`1<UniWebViewNativeResultPayload>::Invoke(T)
inline void Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Remove(TKey)
inline bool Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/SDfsdfsdffs::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_inline (SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf::Invoke(Refsdkfopdskgdwqueq,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_inline (Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Hfddfgdfgdfg::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_inline (Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf::Invoke(Refsdkfopdskgdwqueq,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_inline (SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/SDFSdfsdfdfdf::Invoke(Refsdkfopdskgdwqueq,Gfrrasdu)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_inline (SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method) ;
// System.Boolean Refsdkfopdskgdwqueq/Shfhfghfghfdgf::Invoke(Refsdkfopdskgdwqueq)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_inline (Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Tsfsdfsdfsdf::Invoke(Refsdkfopdskgdwqueq)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_inline (Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Zgblfgflgfgh::Invoke(Refsdkfopdskgdwqueq,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_inline (Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Mdgddfddfgdfg::Invoke(Refsdkfopdskgdwqueq,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_inline (Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/EWrrwrwerwer::Invoke(Refsdkfopdskgdwqueq,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_inline (EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Hsfsdfsdfsdf::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_inline (Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method) ;
// System.Void Refsdkfopdskgdwqueq/Wsdfsdfsdfsf::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_inline (Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::.ctor()
inline void Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::.ctor()
inline void Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void SDfsdfsdfsvxc::Log(SDfsdfsdfsvxc/Number,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, int32_t ___0_number, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503 (int32_t ___0_level, const RuntimeMethod* method) ;
// System.Void SDfsdfsdfsvxc::.ctor(SDfsdfsdfsvxc/Number)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc__ctor_mECCACF91B1FA9B5D8C21029833B3969A1EF525A7 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, int32_t ___0_number, const RuntimeMethod* method) ;
// SDfsdfsdfsvxc/Number SDfsdfsdfsvxc::get_LogNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SDfsdfsdfsvxc_get_LogNumber_mFF5737B7E53AE9C896E26EBE1123AB845DDCAF41_inline (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, const RuntimeMethod* method) ;
// Ghost Ghost::Hoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* Ghost_Hoke_m2AB29B298938AB886FD6B6048D834AC4235939FB (String_t* ___0_j, const RuntimeMethod* method) ;
// System.Void Ghost::Ledion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_Ledion_mD23D21CF07DAC43BE9A8929A02F9CF7D09D94B02 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewInterface::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__cctor_mDFE83B914E15539C37FEFD93ED2FF076F3ED153F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449E90EA94A719309FD246952C6B4621E65F159A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool correctPlatform = Application.platform == RuntimePlatform.Android;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___correctPlatform_1 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		// var go = new GameObject("UniWebViewAndroidStaticListener");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteral4982677CA430F6BEEBF6DE62DB068943C678A403, NULL);
		// go.AddComponent<UniWebViewAndroidStaticListener>();
		NullCheck(L_1);
		UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* L_2;
		L_2 = GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B(L_1, GameObject_AddComponent_TisUniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83_m8C7A35BD6AEE3D8EAB53ED9B42814509C1135B6B_RuntimeMethod_var);
		// plugin = new AndroidJavaClass("com.onevcat.uniwebview.UniWebViewInterface");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral8D352394D321D77D5B5C61F342DAB35C989C220B, NULL);
		((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0), (void*)L_3);
		// CheckPlatform();
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("prepare");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A, L_5, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503 (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setLogLevel", level);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_level;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("init", name, x, y, width, height);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_width;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___4_height;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1C7A9E8795DAC93A625C23D6E9F2BC7332ABF459, L_16, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Destroy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("destroy", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB (String_t* ___0_name, String_t* ___1_url, bool ___2_skipEncoding, String_t* ___3_readAccessURL, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("load", name, url);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_url;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59 (String_t* ___0_name, String_t* ___1_html, String_t* ___2_baseUrl, bool ___3_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("loadHTMLString", name, html, baseUrl);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_html;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_baseUrl;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6B26F376A2CF6E95830794F6706E4612161CC407, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Reload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("reload", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE18B612F2CEC49FD22137D4676C2F419D6CF46D5, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("stop", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, L_2, NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1738FA234DD23984A6C35D65687B65D92536008);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<string>("getUrl", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralA1738FA234DD23984A6C35D65687B65D92536008, L_2, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setFrame", name, x, y, width, height);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_width;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___4_height;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE1564FAE4D046D79DE761266060204AEEDC4BB21, L_16, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetPosition(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetPosition_m99848646D1312836E3CF5C42120B3FCC2E253893 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setPosition", name, x, y);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral3C42779679BDC28CFAB9F9AA08B6EDF9C575B154, L_8, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSize(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSize_mFC520293677926F6247850F1C194A742E549C040 (String_t* ___0_name, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setSize", name, width, height);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_width;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_height;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4204A6CCA8578136B4A25CA2537C7C3C31BD1AC4, L_8, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04 (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74A5881238A30DEB9EF11A8EE6B92E2B642BF6AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// if (useAsync) {
		bool L_0 = ___4_useAsync;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// plugin.CallStatic("showAsync", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_name;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		bool L_6 = ___1_fade;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = ___2_edge;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = ___3_duration;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		String_t* L_18 = ___5_identifier;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral74A5881238A30DEB9EF11A8EE6B92E2B642BF6AD, L_17, NULL);
		// return true;
		return (bool)1;
	}

IL_0044:
	{
		// return plugin.CallStatic<bool>("show", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		bool L_24 = ___1_fade;
		bool L_25 = L_24;
		RuntimeObject* L_26 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		int32_t L_28 = ___2_edge;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
		float L_32 = ___3_duration;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		String_t* L_36 = ___5_identifier;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_36);
		NullCheck(L_19);
		bool L_37;
		L_37 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_19, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_35, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_37;
	}
}
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE (String_t* ___0_name, bool ___1_fade, int32_t ___2_edge, float ___3_duration, bool ___4_useAsync, String_t* ___5_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6273268A800B8837D5B315F1A0CB73F9116AA007);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// if (useAsync) {
		bool L_0 = ___4_useAsync;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// plugin.CallStatic("hideAsync", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_name;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		bool L_6 = ___1_fade;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = ___2_edge;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = ___3_duration;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		String_t* L_18 = ___5_identifier;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteral6273268A800B8837D5B315F1A0CB73F9116AA007, L_17, NULL);
		// return true;
		return (bool)1;
	}

IL_0044:
	{
		// return plugin.CallStatic<bool>("hide", name, fade, edge, duration, identifier);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_19 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		String_t* L_22 = ___0_name;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		bool L_24 = ___1_fade;
		bool L_25 = L_24;
		RuntimeObject* L_26 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_23;
		int32_t L_28 = ___2_edge;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
		float L_32 = ___3_duration;
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_31;
		String_t* L_36 = ___5_identifier;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_36);
		NullCheck(L_19);
		bool L_37;
		L_37 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_19, _stringLiteral31D307275CC464AFDCC4A193A3D0DADE7D308F81, L_35, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_37;
	}
}
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12 (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, int32_t ___3_width, int32_t ___4_height, float ___5_duration, float ___6_delay, String_t* ___7_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("animateTo", name, x, y, width, height, duration, delay, identifier);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		int32_t L_13 = ___3_width;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		int32_t L_17 = ___4_height;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		float L_21 = ___5_duration;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = ___6_delay;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		String_t* L_29 = ___7_identifier;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_29);
		NullCheck(L_0);
		bool L_30;
		L_30 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral8B68C1399A90D4E6E6DAFEAE7DA08343E2346DFF, L_28, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_30;
	}
}
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addJavaScript", name, jsString, identifier);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_jsString;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_identifier;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralFF07018CB5269D45FB2053AE059DB7FC9C54FFCF, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4 (String_t* ___0_name, String_t* ___1_jsString, String_t* ___2_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("evaluateJavaScript", name, jsString, identifier);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_jsString;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_identifier;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5DE79C2CD63575AC9ECB35E88C658273A77D75C6, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49 (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addUrlScheme", name, scheme);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_scheme;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2A1B34F4E0F4F3FF85FE2672E1618493EC7BF962, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B (String_t* ___0_name, String_t* ___1_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeUrlScheme", name, scheme);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_scheme;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralA86C50F4B1AF6D3E1A77D83ECBCA14EBF7A7317C, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addSslExceptionDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral22E046D5EAA69E6183B74E3ADD1F2A965C25CCAB, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeSslExceptionDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF4353B18CB89F76878CA8731D22DC482A64B7206, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::AddPermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_AddPermissionTrustDomain_mEB9C21E5A179925F0C536DBE837761AF28766075 (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("addPermissionTrustDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4093128DE4F5C95C1AE42C92BE048800C32CA595, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemovePermissionTrustDomain(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemovePermissionTrustDomain_m0EBFFD7F79AD89A2CA27E57092137E4CB328B1EC (String_t* ___0_name, String_t* ___1_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removePermissionTrustDomain", name, domain);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_domain;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral06F202F9CA9A342E04166C9B0B1536FA0A6D0D72, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41 (String_t* ___0_name, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setHeaderField", name, key, value);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_key;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_value;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5A736AD385143771CC7BE3FD81F63BDA24D69631, L_6, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3 (String_t* ___0_name, String_t* ___1_userAgent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setUserAgent", name, userAgent);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_userAgent;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral3E404FE03936D628606B7DF9E734BAF95D344182, L_4, NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<string>("getUserAgent", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD0B15CD4BA910CF8A2015DE9963A3CB48505CFB3, L_2, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowAutoPlay", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralAA87EF6D24F8EDBD189F60E8FAE8346868873324, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowJavaScriptOpenWindow", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6033B666C1911ABDF46C78670D40C8F32780B560, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowFileAccess(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowFileAccess", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral029E36FE6D3C7D0CD9D986C1E8AE6547739A749E, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowFileAccessFromFileURLs", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9E6CABDC4F759622270ECC237B019B4E14689CEB, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowUniversalAccessFromFileURLs", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5DB433FA1CA23852AD151D359F13726ACC32A782, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetEnableKeyboardAvoidance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetEnableKeyboardAvoidance_mD6B9866731E8A9FE608A798425DBA42B0E9A48CE (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA503855111C346E6CBE6DEF890CC86D08F832F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setEnableKeyboardAvoidance", flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_flag;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral5DA503855111C346E6CBE6DEF890CC86D08F832F, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1 (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setJavaScriptEnabled", enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enabled;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral395ECB59DB769072648B57BDAF32B2A495C441DF, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CleanCache(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("cleanCache", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralA3DB671BED62CD86E812C71F3652AB2E471465EA, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("clearCookies");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC89C610EB715737B1E54BE9F8381DDD2A0330595, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD (String_t* ___0_url, String_t* ___1_cookie, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DD53F3C91602BAB84363C053188A81B762168F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setCookie", url, cookie);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_cookie;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral37DD53F3C91602BAB84363C053188A81B762168F, L_4, NULL);
		// }
		return;
	}
}
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<string>("getCookie", url, key);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_key;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		String_t* L_6;
		L_6 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral433BD28268DDF7A851125C0EA573CB011A17DE0F, L_4, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UniWebViewInterface::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE (String_t* ___0_url, bool ___1_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeCookies", url);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral03D5DA6E4D76C515B2D2D891E3D49E2CD56AC621, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::RemoveCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0537E826CEC4233BE28552114535F51A3D777943);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("removeCookie", url, key);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_url;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_key;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral0537E826CEC4233BE28552114535F51A3D777943, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B (String_t* ___0_host, String_t* ___1_realm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("clearHttpAuthUsernamePassword", host, realm);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_host;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_realm;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1B427C9375E8A39E06270E0F15A74777D8215AD9, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, float ___4_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setBackgroundColor", name, r, g, b, a);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		float L_5 = ___1_r;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		float L_9 = ___2_g;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		float L_13 = ___3_b;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		float L_17 = ___4_a;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_19);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265, L_16, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A (String_t* ___0_name, float ___1_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setWebViewAlpha", name, alpha);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		float L_5 = ___1_alpha;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral11F8F3AD91743D3DBFBCCB6118C2EE0BA9D432D6, L_4, NULL);
		// }
		return;
	}
}
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<float>("getWebViewAlpha", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		float L_4;
		L_4 = AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6(L_0, _stringLiteralB8A3E57D6C0E3D6E5792B76D2BE42E5545BD556A, L_2, AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74 (String_t* ___0_name, bool ___1_show, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46235E42561BC75195410C8FD01B7026927BA27E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setShowSpinnerWhileLoading", name, show);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_show;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral46235E42561BC75195410C8FD01B7026927BA27E, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6 (String_t* ___0_name, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setSpinnerText", name, text);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_text;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC8B901F66CF2B99391DC4E891559A18A028D71D4, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("canGoBack", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral710CA85CF56FB6B6924F6875619A9086DFD91F22, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("canGoForward", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		bool L_4;
		L_4 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteral3F2E2E820A878C46D32D963317798EEE3BE34403, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void UniWebViewInterface::GoBack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("goBack", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB036D1A4504D6BE029CD2101E1DC9042111887D4, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::GoForward(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("goForward", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4A6EB1DA1F4B3316972BF1771C95A00AC23DD8A3, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setOpenLinksInExternalBrowser", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2D138BB75B176FF5113F46C50CFC104D0B972CC7, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setHorizontalScrollBarEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9F0E0B1C4FE73607CBBE0A93116CEA4E3B3C5E98, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setVerticalScrollBarEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralBC6EBD9A055FC3B845472AB3361F0A61570C0D41, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setBouncesEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9A86A622B347650DFF5FD90343DE9EAE977A4022, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setZoomEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral521BA50AE923A8AA765D9A160E356FC0058FADA4, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUseWideViewPort(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUseWideViewPort_m47489E0088289ECA21D0CA5CA5CE0840F88CC6CB (String_t* ___0_name, bool ___1_use, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setUseWideViewPort", name, use);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_use;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9D79C985DF4F73247A0EA6C97EA17838838770DF, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetLoadWithOverviewMode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLoadWithOverviewMode_m75E8005ED6FA15DCDAF5467988D2D0C47BAB0729 (String_t* ___0_name, bool ___1_overview, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setLoadWithOverviewMode", name, overview);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_overview;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral845163A85B4BECE047C59BD2EB47E4514ABB7EB2, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetImmersiveModeEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetImmersiveModeEnabled_m5F961435C25E9375EAE978B2CFA5D65C8FD6DBEE (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FD7533D578834C52F955AF663C262434D950DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setImmersiveModeEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE1FD7533D578834C52F955AF663C262434D950DE, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetUserInteractionEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179 (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setUserInteractionEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF21A93EC208F504071591F17D29A4DFF8618C40D, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetTransparencyClickingThroughEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral936CE6919C99DBE2A0544D68CA4F6B3B152B06F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setTransparencyClickingThroughEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral936CE6919C99DBE2A0544D68CA4F6B3B152B06F7, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8228F26A547DD52F870220D24F4F243E35286F25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setWebContentsDebuggingEnabled", enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enabled;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8228F26A547DD52F870220D24F4F243E35286F25, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setAllowHTTPAuthPopUpWindow", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralBA589491DB924192C93098407D4F8B9B7EEF76D2, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::Print(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("print", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB4B0363E97F5C708A44E3F0E479DA7A612B280F4, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CaptureSnapshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD (String_t* ___0_name, String_t* ___1_filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("captureSnapshot", name, filename);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_filename;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4EE85B87204B902A0E1E3E81167C944BE6A0C184, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C (String_t* ___0_name, int32_t ___1_x, int32_t ___2_y, bool ___3_animated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("scrollTo", name, x, y, animated);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_x;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___2_y;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		bool L_13 = ___3_animated;
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6FA865AA2F7454A02C1711C57C6D21DB3891BF95, L_12, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3 (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setCalloutEnabled", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralC2FAA96F1CF4242C66CF32B08B785D1BC27649DD, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetSupportMultipleWindows(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSupportMultipleWindows_m521B45A2CAC7D83C0482BB365454E991A6C8573B (String_t* ___0_name, bool ___1_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setSupportMultipleWindows", name, flag);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_flag;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral996FFF30D4EC57E5E421FFBFD6250F0BC3FFE8D8, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetDefaultFontSize(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDefaultFontSize_mB805E508F0BA6B9075B6B3C231A80C7A3DE2B24B (String_t* ___0_name, int32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setDefaultFontSize", name, size);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_size;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral44BBEAE09912D601CF961A5326005AF34AA2C3A4, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SetTextZoom(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetTextZoom_m419910B15BA5AEBCE6E170B55A2F3DD72DF96E12 (String_t* ___0_name, int32_t ___1_textZoom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setTextZoom", name, textZoom);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = ___1_textZoom;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral47A1F293CBA4EB0AA9AD617D6BB2A7C2D8CEECF2, L_4, NULL);
		// }
		return;
	}
}
// System.Single UniWebViewInterface::NativeScreenWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<float>("screenWidth");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6(L_0, _stringLiteral95A5D8F8216FEF6AB6DA124B8556B99686008921, L_1, AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Single UniWebViewInterface::NativeScreenHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<float>("screenHeight");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		float L_2;
		L_2 = AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6(L_0, _stringLiteral848E244106FAAF80CBD208A47B17E360C4FAA789, L_1, AndroidJavaObject_CallStatic_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6BB0A664B4D565DD41578EB08B9A36C16EAE9FD6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UniWebViewInterface::SetDownloadEventForContextMenuEnabled(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m67EE6C45B99ABE4CF3B8E119FC36F06E06E2141F (String_t* ___0_name, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("setDownloadEventForContextMenuEnabled", name, enabled);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_enabled;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral8C56C4E22347BBB0FE3C2050A1C6964821D2E096, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean UniWebViewInterface::IsSafeBrowsingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniWebViewInterface_IsSafeBrowsingSupported_m9F76E5D4EBAA15D5E2243D40D9BD34D0879AB938 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// return plugin.CallStatic<bool>("isSafeBrowsingSupported");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteralA1D7DF7FCDFC442F5402FE6C9E7DA92ACC2E6A4A, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingInit(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6 (String_t* ___0_name, String_t* ___1_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("safeBrowsingInit", name, url);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_url;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF03D4C9423969F49E57441A7021C07D475E7DEED, L_4, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingSetToolbarColor(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD (String_t* ___0_name, float ___1_r, float ___2_g, float ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("safeBrowsingSetToolbarColor", name, r, g, b);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		float L_5 = ___1_r;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		float L_9 = ___2_g;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		float L_13 = ___3_b;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralB8204672E3B98F5C38D20D9B5A097E06317E9CCB, L_12, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::SafeBrowsingShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CheckPlatform();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C(NULL);
		// plugin.CallStatic("safeBrowsingShow", name);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___plugin_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral84F1DBEFF9F154BEB8FDC3E83BF705C0C602A763, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewInterface::CheckPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!correctPlatform) {
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_0 = ((UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var))->___correctPlatform_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new System.InvalidOperationException("ASDasdasdasdasfdshhfg.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDDC0EB7320557FA6948002573D6EC440B69CA3C5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniWebViewInterface_CheckPlatform_m6AF053C64524670C4A7F22FDA9344AB0CFB60B0C_RuntimeMethod_var)));
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void UniWebViewInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewInterface__ctor_m157CD2615373AA53DFA457D91782AD33A0FE794D (UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewAndroidStaticListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_Awake_m70ABEC4CEC6CE2F537B73010A2703FBEC4992B5F (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::OnJavaMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_OnJavaMessage_m05F2A2459168497BAE57653377B40DB98D61100B (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3876F6A56E549811D017FAF04728F1079ECDA0DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9FD5A0E37F7B3D0F9AE7CD4683178F182DF0CEF);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// string[] ab = message.Split("@"[0]);
		String_t* L_0 = ___0_message;
		NullCheck(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, 0, NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, L_1, 0, NULL);
		V_0 = L_2;
		// if (ab.Length < 3) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0024;
		}
	}
	{
		// Debug.Log("Gfdfsd dsfsds eqweqweqwe.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE9FD5A0E37F7B3D0F9AE7CD4683178F182DF0CEF, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// var s = Randomness.GetListener(ab[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_7;
		L_7 = Randomness_GetListener_m4D46CD51E09177071FD8B999EC614AAF0DC16661(L_6, NULL);
		V_1 = L_7;
		// if (s == null) {
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return;
		return;
	}

IL_0037:
	{
		// MethodInfo t = typeof(Randomness).GetMethod(ab[1]);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		String_t* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		MethodInfo_t* L_15;
		L_15 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_11, L_14, NULL);
		V_2 = L_15;
		// if (t == null) {
		MethodInfo_t* L_16 = V_2;
		bool L_17;
		L_17 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_16, (MethodInfo_t*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		// Debug.Log("Fsdfsdfsdfsdf: " + ab[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3876F6A56E549811D017FAF04728F1079ECDA0DB, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
	}

IL_0065:
	{
		// var u = ab.Length - 2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 2));
		// var k = new string[u];
		int32_t L_23 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_4 = L_24;
		// for (int i = 0; i < u; i++) {
		V_5 = 0;
		goto IL_0089;
	}

IL_0078:
	{
		// k[i] = ab[i + 2];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_4;
		int32_t L_26 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		String_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_30);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (String_t*)L_30);
		// for (int i = 0; i < u; i++) {
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0089:
	{
		// for (int i = 0; i < u; i++) {
		int32_t L_32 = V_5;
		int32_t L_33 = V_3;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0078;
		}
	}
	{
		// t.Invoke(s, new object[] { String.Join("@", k) });
		MethodInfo_t* L_34 = V_2;
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_35 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_36;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_4;
		String_t* L_39;
		L_39 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_39);
		NullCheck(L_34);
		RuntimeObject* L_40;
		L_40 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_34, L_35, L_37, NULL);
		// }
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener__ctor_m89F9ACC2686C80F00F7A6823E4A8A44709246E24 (UniWebViewAndroidStaticListener_tB98B3EA4026DA0775D9FA33BA27E8CB9D452BB83* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Gfrrasdu
IL2CPP_EXTERN_C void Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshal_pinvoke(const Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2& unmarshaled, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'Gfrrasdu'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshal_pinvoke_back(const Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_pinvoke& marshaled, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'Gfrrasdu'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Gfrrasdu
IL2CPP_EXTERN_C void Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshal_pinvoke_cleanup(Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Gfrrasdu
IL2CPP_EXTERN_C void Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshal_com(const Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2& unmarshaled, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_com& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'Gfrrasdu'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshal_com_back(const Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_com& marshaled, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'Gfrrasdu'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Gfrrasdu
IL2CPP_EXTERN_C void Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshal_com_cleanup(Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_marshaled_com& marshaled)
{
}
// System.String Gfrrasdu::get_G()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_G_m3C2099066FED75498BCBA80CCDCA71587807AA05 (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public string G {get; private set;}
		String_t* L_0 = __this->___U3CGU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Gfrrasdu_get_G_m3C2099066FED75498BCBA80CCDCA71587807AA05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Gfrrasdu_get_G_m3C2099066FED75498BCBA80CCDCA71587807AA05_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Gfrrasdu::set_G(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfrrasdu_set_G_mE2E30C103A834D160ED3833FC7AA45019A3669FF (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string G {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CGU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Gfrrasdu_set_G_mE2E30C103A834D160ED3833FC7AA45019A3669FF_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	Gfrrasdu_set_G_mE2E30C103A834D160ED3833FC7AA45019A3669FF_inline(_thisAdjusted, ___0_value, method);
}
// System.String Gfrrasdu::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_Scheme_m7D36BFECFF32FD3F6204E30ACF381558EC92BC0A (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = __this->___U3CSchemeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Gfrrasdu_get_Scheme_m7D36BFECFF32FD3F6204E30ACF381558EC92BC0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Gfrrasdu_get_Scheme_m7D36BFECFF32FD3F6204E30ACF381558EC92BC0A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Gfrrasdu::set_Scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfrrasdu_set_Scheme_mDE309C38BAABB10270A5A2D7394DF2567CCF61E2 (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CSchemeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Gfrrasdu_set_Scheme_mDE309C38BAABB10270A5A2D7394DF2567CCF61E2_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	Gfrrasdu_set_Scheme_mDE309C38BAABB10270A5A2D7394DF2567CCF61E2_inline(_thisAdjusted, ___0_value, method);
}
// System.String Gfrrasdu::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_Path_m81F6751518AE1FD05319FED6621CA50B3FCF0FD4 (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Gfrrasdu_get_Path_m81F6751518AE1FD05319FED6621CA50B3FCF0FD4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Gfrrasdu_get_Path_m81F6751518AE1FD05319FED6621CA50B3FCF0FD4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Gfrrasdu::set_Path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfrrasdu_set_Path_m32650CD3AA76CD8F8466C4F8EAED33E8F414B378 (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Gfrrasdu_set_Path_m32650CD3AA76CD8F8466C4F8EAED33E8F414B378_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	Gfrrasdu_set_Path_m32650CD3AA76CD8F8466C4F8EAED33E8F414B378_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Gfrrasdu::get_Args()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3 (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CArgsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _returnValue;
	_returnValue = Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Gfrrasdu::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfrrasdu_set_Args_m9891C873A1799B5AFAFAE1CDC5CADCEECC70548C (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CArgsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Gfrrasdu_set_Args_m9891C873A1799B5AFAFAE1CDC5CADCEECC70548C_AdjustorThunk (RuntimeObject* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	Gfrrasdu_set_Args_m9891C873A1799B5AFAFAE1CDC5CADCEECC70548C_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Gfrrasdu::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfrrasdu__ctor_m32D9E56F7C883FBF1E639301B4A8F2C437C2669B (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_g, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47816BB6EC7ED3FCABFA9FB3F3D72045A97E62FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B79AA41BC8919BC684CCF5E61DD490FB3DD00E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral859C2E996D52B6C47039DC1B9F8A66A35C01D84E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA1330B9ABCDB144D4A6B6091457917791ADAA5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4CB387AAEB2718852B6346A1018371E1A1CEE3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC757D3DEBA39A9CAC85CE7B248E1A2290EA3C93);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		// public Gfrrasdu(string g): this() {
		il2cpp_codegen_initobj(__this, sizeof(Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2));
		// SDfsdfsdfsvxc.Instance.TenKek("Tsetsrasfsdfsdfsdf: " + g);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_g;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAA1330B9ABCDB144D4A6B6091457917791ADAA5A, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TenKek_m33C45296C5913CF03B99813227DA94B12207FCF1(L_0, L_2, NULL);
		// this.G = g;
		String_t* L_3 = ___0_g;
		Gfrrasdu_set_G_mE2E30C103A834D160ED3833FC7AA45019A3669FF_inline(__this, L_3, NULL);
		// string[] a = g.Split(new string[] {"://"}, System.StringSplitOptions.None);
		String_t* L_4 = ___0_g;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_4, L_6, 0, NULL);
		V_0 = L_7;
		// if (a.Length == 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0055;
		}
	}
	{
		// a = g.Split(new string[] {":/"}, System.StringSplitOptions.None);
		String_t* L_9 = ___0_g;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCAE6B383FC259C6D8E02FFF07CC62BD90BA58157);
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_9, L_11, 0, NULL);
		V_0 = L_12;
	}

IL_0055:
	{
		// if (a.Length == 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		// a = g.Split(new string[] {":"}, System.StringSplitOptions.None);
		String_t* L_14 = ___0_g;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		NullCheck(L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_14, L_16, 0, NULL);
		V_0 = L_17;
	}

IL_0071:
	{
		// if (a.Length >= 2) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) < ((int32_t)2)))
		{
			goto IL_01e9;
		}
	}
	{
		// this.Scheme = a[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Gfrrasdu_set_Scheme_mDE309C38BAABB10270A5A2D7394DF2567CCF61E2_inline(__this, L_21, NULL);
		// SDfsdfsdfsvxc.Instance.TenKek("Trssdfsdfsdf: " + this.Scheme);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_22;
		L_22 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_23;
		L_23 = Gfrrasdu_get_Scheme_m7D36BFECFF32FD3F6204E30ACF381558EC92BC0A_inline(__this, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral47816BB6EC7ED3FCABFA9FB3F3D72045A97E62FE, L_23, NULL);
		NullCheck(L_22);
		SDfsdfsdfsvxc_TenKek_m33C45296C5913CF03B99813227DA94B12207FCF1(L_22, L_24, NULL);
		// string m = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int i = 1;
		V_2 = 1;
		goto IL_00b5;
	}

IL_00a7:
	{
		// m = string.Concat(m, a[i]);
		String_t* L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_0;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_25, L_29, NULL);
		V_1 = L_30;
		// i++;
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b5:
	{
		// while (i < a.Length) {
		int32_t L_32 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.ZeroKek("dasdadadsad: " + m);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_34;
		L_34 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_35 = V_1;
		String_t* L_36;
		L_36 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDC757D3DEBA39A9CAC85CE7B248E1A2290EA3C93, L_35, NULL);
		NullCheck(L_34);
		SDfsdfsdfsvxc_ZeroKek_m95E4C4190E5A51BA50ACE2A01A52767D0E6584FA(L_34, L_36, NULL);
		// string[] k = m.Split("?"[0]);
		String_t* L_37 = V_1;
		NullCheck(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, 0, NULL);
		NullCheck(L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_37, L_38, 0, NULL);
		V_3 = L_39;
		// this.Path = Net.UnEscapeURL(k[0].TrimEnd('/'));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_3;
		NullCheck(L_40);
		int32_t L_41 = 0;
		String_t* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		String_t* L_43;
		L_43 = String_TrimEnd_mDB4D96F8312F563656D4115A9F280062E05D2EE8(L_42, ((int32_t)47), NULL);
		String_t* L_44;
		L_44 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_43, NULL);
		Gfrrasdu_set_Path_m32650CD3AA76CD8F8466C4F8EAED33E8F414B378_inline(__this, L_44, NULL);
		// this.Args = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_45, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Gfrrasdu_set_Args_m9891C873A1799B5AFAFAE1CDC5CADCEECC70548C_inline(__this, L_45, NULL);
		// if (k.Length > 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = V_3;
		NullCheck(L_46);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))) <= ((int32_t)1)))
		{
			goto IL_01fe;
		}
	}
	{
		// foreach (string pair in k[1].Split("&"[0])) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48 = 1;
		String_t* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		Il2CppChar L_50;
		L_50 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, 0, NULL);
		NullCheck(L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51;
		L_51 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_49, L_50, 0, NULL);
		V_4 = L_51;
		V_5 = 0;
		goto IL_01dd;
	}

IL_012a:
	{
		// foreach (string pair in k[1].Split("&"[0])) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = V_4;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		// string[] f = pair.Split("="[0]);
		NullCheck(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		Il2CppChar L_56;
		L_56 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, 0, NULL);
		NullCheck(L_55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57;
		L_57 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_55, L_56, 0, NULL);
		V_6 = L_57;
		// if (f.Length > 1) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = V_6;
		NullCheck(L_58);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))) <= ((int32_t)1)))
		{
			goto IL_01d7;
		}
	}
	{
		// var key = Net.UnEscapeURL(f[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = V_6;
		NullCheck(L_59);
		int32_t L_60 = 0;
		String_t* L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		String_t* L_62;
		L_62 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_61, NULL);
		V_7 = L_62;
		// if (Args.ContainsKey(key)) {
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_63;
		L_63 = Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline(__this, NULL);
		String_t* L_64 = V_7;
		NullCheck(L_63);
		bool L_65;
		L_65 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_63, L_64, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_65)
		{
			goto IL_0199;
		}
	}
	{
		// var value = Args[key];
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_66;
		L_66 = Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline(__this, NULL);
		String_t* L_67 = V_7;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_66, L_67, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_8 = L_68;
		// Args[key] = value + "," + Net.UnEscapeURL(f[1]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_69;
		L_69 = Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline(__this, NULL);
		String_t* L_70 = V_7;
		String_t* L_71 = V_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = V_6;
		NullCheck(L_72);
		int32_t L_73 = 1;
		String_t* L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		String_t* L_75;
		L_75 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_74, NULL);
		String_t* L_76;
		L_76 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_71, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_75, NULL);
		NullCheck(L_69);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_69, L_70, L_76, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_01af;
	}

IL_0199:
	{
		// Args[key] = Net.UnEscapeURL(f[1]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_77;
		L_77 = Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline(__this, NULL);
		String_t* L_78 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = V_6;
		NullCheck(L_79);
		int32_t L_80 = 1;
		String_t* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		String_t* L_82;
		L_82 = UnityWebRequest_UnEscapeURL_mF32D6DA1A428A932B9A57A48FE5FA86D4B1446BB(L_81, NULL);
		NullCheck(L_77);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_77, L_78, L_82, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_01af:
	{
		// SDfsdfsdfsvxc.Instance.TenKek("DSdasdasdasd: " + key + " adasdasde: " + Args[key]);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_83;
		L_83 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_84 = V_7;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_85;
		L_85 = Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline(__this, NULL);
		String_t* L_86 = V_7;
		NullCheck(L_85);
		String_t* L_87;
		L_87 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_85, L_86, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		String_t* L_88;
		L_88 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral6B79AA41BC8919BC684CCF5E61DD490FB3DD00E8, L_84, _stringLiteral859C2E996D52B6C47039DC1B9F8A66A35C01D84E, L_87, NULL);
		NullCheck(L_83);
		SDfsdfsdfsvxc_TenKek_m33C45296C5913CF03B99813227DA94B12207FCF1(L_83, L_88, NULL);
	}

IL_01d7:
	{
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01dd:
	{
		// foreach (string pair in k[1].Split("&"[0])) {
		int32_t L_90 = V_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = V_4;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_012a;
		}
	}
	{
		return;
	}

IL_01e9:
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("SSfsdfsdfsdfsdfsdfdsfsd: " + g);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_92;
		L_92 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_93 = ___0_g;
		String_t* L_94;
		L_94 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB4CB387AAEB2718852B6346A1018371E1A1CEE3D, L_93, NULL);
		NullCheck(L_92);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_92, L_94, NULL);
	}

IL_01fe:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Gfrrasdu__ctor_m32D9E56F7C883FBF1E639301B4A8F2C437C2669B_AdjustorThunk (RuntimeObject* __this, String_t* ___0_g, const RuntimeMethod* method)
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2*>(__this + _offset);
	Gfrrasdu__ctor_m32D9E56F7C883FBF1E639301B4A8F2C437C2669B(_thisAdjusted, ___0_g, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Gfsfswerwefsdfsdf::StreamingAssetURLForPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gfsfswerwefsdfsdf_StreamingAssetURLForPath_mC7FDA889DEBAE9F58DD00C8753F01AEE4F1CC97F (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine("file:///android_asset/", path);
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(_stringLiteral4EA2CB2B0D1C6D82BFCABA78C7EBE25AE1254CFD, L_0, NULL);
		return L_1;
	}
}
// System.String Gfsfswerwefsdfsdf::PersistentDataURLForPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gfsfswerwefsdfsdf_PersistentDataURLForPath_m1B2BE8F399932B2ABA30746440972C7A67E71F71 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine("file://" + Application.persistentDataPath, path);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, NULL);
		String_t* L_2 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Gfsfswerwefsdfsdf::get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gfsfswerwefsdfsdf_get_IsEditor_m9C5FCCC1BC4E19B9D52FB3894350D1D100D43F50 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Gfsfswerwefsdfsdf::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gfsfswerwefsdfsdf__ctor_m382F576B2D96C1C3B9587F42F99497A4A096941A (Gfsfswerwefsdfsdf_t7E81487E7E9CEA76F49E5AD99E565E032B3BB201* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ghost::add_GetOut(Ghost/Jacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_add_GetOut_mFCE8EB8CC11790B073465E66747E277563D6FE89 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* V_0 = NULL;
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* V_1 = NULL;
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* V_2 = NULL;
	{
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_0 = __this->___GetOut_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_1 = V_0;
		V_1 = L_1;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_2 = V_1;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*)CastclassSealed((RuntimeObject*)L_4, Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571_il2cpp_TypeInfo_var));
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571** L_5 = (&__this->___GetOut_4);
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_6 = V_2;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_7 = V_1;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_8;
		L_8 = InterlockedCompareExchangeImpl<Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*>(L_5, L_6, L_7);
		V_0 = L_8;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_9 = V_0;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_10 = V_1;
		if ((!(((RuntimeObject*)(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*)L_9) == ((RuntimeObject*)(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Ghost::remove_GetOut(Ghost/Jacket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_remove_GetOut_m637CE01379ABBFF81C7DA54B5C25EA36FEFE198D (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* V_0 = NULL;
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* V_1 = NULL;
	Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* V_2 = NULL;
	{
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_0 = __this->___GetOut_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_1 = V_0;
		V_1 = L_1;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_2 = V_1;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*)CastclassSealed((RuntimeObject*)L_4, Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571_il2cpp_TypeInfo_var));
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571** L_5 = (&__this->___GetOut_4);
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_6 = V_2;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_7 = V_1;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_8;
		L_8 = InterlockedCompareExchangeImpl<Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*>(L_5, L_6, L_7);
		V_0 = L_8;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_9 = V_0;
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_10 = V_1;
		if ((!(((RuntimeObject*)(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*)L_9) == ((RuntimeObject*)(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Ghost::get_LeetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ghost_get_LeetCode_m7633DDE81B61DF8044D3477289DB30E2CE18DD47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.IsSafeBrowsingSupported();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = UniWebViewInterface_IsSafeBrowsingSupported_m9F76E5D4EBAA15D5E2243D40D9BD34D0879AB938(NULL);
		return L_0;
	}
}
// Ghost Ghost::Hoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* Ghost_Hoke_m2AB29B298938AB886FD6B6048D834AC4235939FB (String_t* ___0_j, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* V_0 = NULL;
	{
		// var r = new Ghost();
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_0 = (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C*)il2cpp_codegen_object_new(Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Ghost__ctor_mC0469618EB9391051E1DDF7924AED132374E14B4(L_0, NULL);
		V_0 = L_0;
		// if (!Gfsfswerwefsdfsdf.IsEditor) {
		bool L_1;
		L_1 = Gfsfswerwefsdfsdf_get_IsEditor_m9C5FCCC1BC4E19B9D52FB3894350D1D100D43F50(NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// r.p.safeBrowsing = r;
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_2 = V_0;
		NullCheck(L_2);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_3 = L_2->___p_6;
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_4 = V_0;
		NullCheck(L_3);
		L_3->___safeBrowsing_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___safeBrowsing_6), (void*)L_4);
		// r.NetJet(j);
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_5 = V_0;
		String_t* L_6 = ___0_j;
		NullCheck(L_5);
		Ghost_NetJet_mB6EFFD8DF7214A890F6A0DBB62C2F4FDAF4F9A25(L_5, L_6, NULL);
	}

IL_0020:
	{
		// r.g = j;
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_7 = V_0;
		String_t* L_8 = ___0_j;
		NullCheck(L_7);
		L_7->___g_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___g_7), (void*)L_8);
		// return r;
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_9 = V_0;
		return L_9;
	}
}
// System.Void Ghost::Ledion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_Ledion_mD23D21CF07DAC43BE9A8929A02F9CF7D09D94B02 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AE8094A679F5B0B98B060E6C9BCECEE3CE3B544);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Ghost.LeetCode) {
		bool L_0;
		L_0 = Ghost_get_LeetCode_m7633DDE81B61DF8044D3477289DB30E2CE18DD47(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// UniWebViewInterface.SafeBrowsingShow(p.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_1 = __this->___p_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingShow_mBCFB1C5840DA42F58DEE56AC65392B04CE905E56(L_2, NULL);
		return;
	}

IL_0018:
	{
		// if (!Gfsfswerwefsdfsdf.IsEditor) {
		bool L_3;
		L_3 = Gfsfswerwefsdfsdf_get_IsEditor_m9C5FCCC1BC4E19B9D52FB3894350D1D100D43F50(NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat(@"Kstati");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_4;
		L_4 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_4);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_4, _stringLiteral8AE8094A679F5B0B98B060E6C9BCECEE3CE3B544, NULL);
	}

IL_002e:
	{
		// Application.OpenURL(g);
		String_t* L_5 = __this->___g_7;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_5, NULL);
		// }
		return;
	}
}
// System.Void Ghost::YoungBoy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_YoungBoy_m9E9E22DAED2E9774572BB7E6CFDB30DED943CFF7 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Ghost::Mend(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_Mend_m93AEB1A60A8D3291460E1E4E9E629E20AC8149C6 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Gfsfswerwefsdfsdf.IsEditor) {
		bool L_0;
		L_0 = Gfsfswerwefsdfsdf_get_IsEditor_m9C5FCCC1BC4E19B9D52FB3894350D1D100D43F50(NULL);
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		// UniWebViewInterface.SafeBrowsingSetToolbarColor(p.Name, color.r, color.g, color.b);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_1 = __this->___p_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_color;
		float L_4 = L_3.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color;
		float L_6 = L_5.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_color;
		float L_8 = L_7.___b_2;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingSetToolbarColor_m1DCFD167C3FBF30C3ACD3DB46051CDCB157A43CD(L_2, L_4, L_6, L_8, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Ghost::NetDor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_NetDor_m733E98321D6C2DA839104A516AB336CF86976E14 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Ghost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost__ctor_mC0469618EB9391051E1DDF7924AED132374E14B4 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// private string m = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___m_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_5), (void*)L_1);
		// private Ghost() {
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		// if (!Gfsfswerwefsdfsdf.IsEditor) {
		bool L_2;
		L_2 = Gfsfswerwefsdfsdf_get_IsEditor_m9C5FCCC1BC4E19B9D52FB3894350D1D100D43F50(NULL);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		// var l = new GameObject(m);
		String_t* L_3 = __this->___m_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, L_3, NULL);
		V_1 = L_4;
		// p = l.AddComponent<Randomness>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_6;
		L_6 = GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175(L_5, GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175_RuntimeMethod_var);
		__this->___p_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_6), (void*)L_6);
		// Randomness.AddListener(p);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_7 = __this->___p_6;
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Randomness_AddListener_mA47076792E124D20CD97795A2224840CA4888DA6(L_7, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Ghost::NetJet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_NetJet_mB6EFFD8DF7214A890F6A0DBB62C2F4FDAF4F9A25 (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SafeBrowsingInit(p.Name, url);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___p_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SafeBrowsingInit_mC6A1F7DE80C89CF98041AC77AD9F9692EB9789B6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Ghost::GetOutAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_GetOutAlive_mA7847B05BA974AE61AAFA987959B10FCD5E0BBBD (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetOut != null) {
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_0 = __this->___GetOut_4;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// GetOut(this);
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* L_1 = __this->___GetOut_4;
		NullCheck(L_1);
		Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		// Randomness.RemoveListener(p.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___p_6;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Randomness_RemoveListener_mE8194F958CE9011D3E2BFA86CE922525BAD56B9D(L_3, NULL);
		// Destroy(p.gameObject);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_4 = __this->___p_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_Multicast(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* currentDelegate = reinterpret_cast<Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_browsing, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenInst(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	typedef void (*FunctionPointerType) (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_browsing, method);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenStatic(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_browsing, method);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenStaticInvoker(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_browsing);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_ClosedStaticInvoker(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_browsing);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenVirtual(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_browsing);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenInterface(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_browsing);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenGenericVirtual(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	GenericVirtualActionInvoker0::Invoke(method, ___0_browsing);
}
void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenGenericInterface(Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method)
{
	NullCheck(___0_browsing);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_browsing);
}
// System.Void Ghost/Jacket::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jacket__ctor_m51DCD97A93A164C228706C8CF01D1872C0C6653B (Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_Multicast;
}
// System.Void Ghost/Jacket::Invoke(Ghost)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53 (Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_browsing, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Ghost/Jacket::BeginInvoke(Ghost,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Jacket_BeginInvoke_m17E515B0F3AC4895CC9208E07FEED75EA3DE3F31 (Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_browsing;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Ghost/Jacket::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jacket_EndInvoke_mD9A4AD8E0C3076BB461A3360615666B3C305803A (Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Randomness::AddListener(Randomness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_AddListener_mA47076792E124D20CD97795A2224840CA4888DA6 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3D7A964C1BAE85CB0BC40B72953328F1AA4D39A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Add(target.Name, target);
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* L_0 = ((Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_StaticFields*)il2cpp_codegen_static_fields_for(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var))->___listeners_4;
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_1 = ___0_target;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_1, NULL);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_3 = ___0_target;
		NullCheck(L_0);
		Dictionary_2_Add_m3D7A964C1BAE85CB0BC40B72953328F1AA4D39A3(L_0, L_2, L_3, Dictionary_2_Add_m3D7A964C1BAE85CB0BC40B72953328F1AA4D39A3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Randomness::RemoveListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_RemoveListener_mE8194F958CE9011D3E2BFA86CE922525BAD56B9D (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mB1241EB140A74D043769E94B1F0D22A1F669651C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// listeners.Remove(name);
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* L_0 = ((Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_StaticFields*)il2cpp_codegen_static_fields_for(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var))->___listeners_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mB1241EB140A74D043769E94B1F0D22A1F669651C(L_0, L_1, Dictionary_2_Remove_mB1241EB140A74D043769E94B1F0D22A1F669651C_RuntimeMethod_var);
		// }
		return;
	}
}
// Randomness Randomness::GetListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* Randomness_GetListener_m4D46CD51E09177071FD8B999EC614AAF0DC16661 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2880B6C6370C537784F622B21500CB40A89A7DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* V_0 = NULL;
	{
		// Randomness result = null;
		V_0 = (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39*)NULL;
		// if (listeners.TryGetValue(name, out result)) {
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* L_0 = ((Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_StaticFields*)il2cpp_codegen_static_fields_for(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var))->___listeners_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m2880B6C6370C537784F622B21500CB40A89A7DF3(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m2880B6C6370C537784F622B21500CB40A89A7DF3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return result;
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39*)NULL;
	}
}
// System.String Randomness::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		return L_1;
	}
}
// System.Void Randomness::PageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_PageStarted_mB521B14D9F17F53A83C9D7040F2B8DB79FD9E892 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_rqeqwe, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EB5A3602F63E6B40BD6A0ED7104737056B22E35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("dfsdfsfdsfsdfsdf: " + rqeqwe);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_rqeqwe;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5EB5A3602F63E6B40BD6A0ED7104737056B22E35, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnPageStarted(rqeqwe);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_rqeqwe;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnPageStarted_mB1D4FA4E41F244812422E9C947BA6F374F68B435(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::PageFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_PageFinished_m2A49D9B042D0AA74253118722EFABF89CCECCDBD (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_safsdfdssdfs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28FF6DFD3E8AA3191D3F2B382C632FB66418CA6D);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("sdfsdfsdfsdfdsfsdfsd " + safsdfdssdfs);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_safsdfdssdfs;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral28FF6DFD3E8AA3191D3F2B382C632FB66418CA6D, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(safsdfdssdfs);
		String_t* L_3 = ___0_safsdfdssdfs;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnPageFinished(payload);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnPageFinished_m2A7625D362819DB64B1B9B86903DD0C3EC2DE4EC(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::PageErrorReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_PageErrorReceived_m2FB3965F4B8418EE757AF3E5167670F3029D775D (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE50CF92E8553163769B3851BEC74389979CF9D);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("fsdfsdfsdfsdfsdfsdfsf " + result);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_result;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6EE50CF92E8553163769B3851BEC74389979CF9D, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(result);
		String_t* L_3 = ___0_result;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnPageErrorReceived(payload);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnPageErrorReceived_m5EA712C322D494DA40E4FC29DE7FB8C09AF9CB31(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::PageProgressChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_PageProgressChanged_m90E4F138D16E399E3987DF3217511207354F3936 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_fsdfsdfsdf, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (float.TryParse(fsdfsdfsdf, out hhghfhfhg)) {
		String_t* L_0 = ___0_fsdfsdfsdf;
		bool L_1;
		L_1 = Single_TryParse_mC39FC2D8F1F33DE64685F3A8CE6BDD2164FB9423(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// webView.InternalOnPageProgressChanged(hhghfhfhg);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_2 = __this->___webView_5;
		float L_3 = V_0;
		NullCheck(L_2);
		Refsdkfopdskgdwqueq_InternalOnPageProgressChanged_mD7D46B2E1153A0D7F8183065D28A0C192D98896A(L_2, L_3, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void Randomness::ShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_ShowTransitionFinished_mF60C04BF828CA9319206CBC731EEC7B3856461D8 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_jkgjghjghjghj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral074A3DC1C0E462D06A2CA56C9F794552A5ADA0B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("tyutyutyutyutyutygfhg " + jkgjghjghjghj);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_jkgjghjghjghj;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral074A3DC1C0E462D06A2CA56C9F794552A5ADA0B4, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnShowTransitionFinished(jkgjghjghjghj);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_jkgjghjghjghj;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnShowTransitionFinished_m3EF50043C9C9F17FA39DB06907D9C1517ACA5E41(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::HideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_HideTransitionFinished_m2B02D01C30DE8DEFE87CFA7998DF0B97FA681A74 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_vbdfgdfgddfg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE880F8BDE467F8CBE2494BFD8755D0E20319D2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("sfsdfsdfsdfsdfsdfsdfsfd: " + vbdfgdfgddfg);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_vbdfgdfgddfg;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEE880F8BDE467F8CBE2494BFD8755D0E20319D2D, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnHideTransitionFinished(vbdfgdfgddfg);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_vbdfgdfgddfg;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnHideTransitionFinished_m7B22B04757D07985177B116BE6A3431103BE4B59(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::AnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_AnimateToFinished_m8093F2B7A4D47E1AF87F0EC05A3F22528572C6CA (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_kjhgjhgfgsfdv, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE427F9EA7E037693EAF1FD0C5157CE4E5E94683D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("uytutyuytutyutyutyu: " + kjhgjhgfgsfdv);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_kjhgjhgfgsfdv;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE427F9EA7E037693EAF1FD0C5157CE4E5E94683D, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnAnimateToFinished(kjhgjhgfgsfdv);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_kjhgjhgfgsfdv;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnAnimateToFinished_m93888B77947C8ABA62FBF473521FED52A2A27D49(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::AddJavaScriptFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_AddJavaScriptFinished_m7F74E9287F053D34372FFED0F9CC6B95A257B460 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_asdasdasda, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE65128A8F29D16CFF257B7118A6340A8224C16F8);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("erterteetdfgdfgdg: " + asdasdasda);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_asdasdasda;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE65128A8F29D16CFF257B7118A6340A8224C16F8, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(asdasdasda);
		String_t* L_3 = ___0_asdasdasda;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnAddJavaScriptFinished(payload);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnAddJavaScriptFinished_mF0BD6A8E3FF84E71AE28C90DFB350789E5FAD088(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::EvalJavaScriptFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_EvalJavaScriptFinished_m542A9C5ED5432EBAA873B75F2979D847D23D3110 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_gdfgdfgdfgertert, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133E9AF1FE3790D58DE1710B9E135F8D36C4C3C7);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("fsdfdsfsfdsfsdfcv: " + gdfgdfgdfgertert);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_gdfgdfgdfgertert;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral133E9AF1FE3790D58DE1710B9E135F8D36C4C3C7, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(gdfgdfgdfgertert);
		String_t* L_3 = ___0_gdfgdfgdfgertert;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnEvalJavaScriptFinished(payload);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnEvalJavaScriptFinished_mB517C1C5AA102495590D7F40E82C63070B3DC981(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::MessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_MessageReceived_m44060FDF9606C553B8F27A658C9B03514B1E78F7 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_hgfghfghtryrtyf, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33EAFB53CE0246B53D3BDC39F1CE404D952898A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("fsdfsddsfsfwer: " + hgfghfghtryrtyf);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_hgfghfghtryrtyf;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral33EAFB53CE0246B53D3BDC39F1CE404D952898A5, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnMessageReceived(hgfghfghtryrtyf);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_hgfghfghtryrtyf;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnMessageReceived_mCF3AA22C6BE2DF74A113B870A539EE2979F53071(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::WebViewDone(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_WebViewDone_m9271550C1A090CBFBCD3BB3AB5E0B692F20C73E1 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE714CCB7AA8B954DDF0F7B8E191A95D04A3E92AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("dsfsdfetyrtytrtewrwr");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, _stringLiteralE714CCB7AA8B954DDF0F7B8E191A95D04A3E92AF, NULL);
		// webView.InternalOnShouldClose();
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_1 = __this->___webView_5;
		NullCheck(L_1);
		Refsdkfopdskgdwqueq_InternalOnShouldClose_m38C39D38B3DE41871E1C20651658151DC1D6249E(L_1, NULL);
		// }
		return;
	}
}
// System.Void Randomness::WebContentProcessDidTerminate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_WebContentProcessDidTerminate_m4FAEA407AADA9EAC3DD24FAC9C2D882EEF4C5DE0 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D1BC1E5019F17303448092B414A15E129286900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("retyeretretretwdfd");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, _stringLiteral5D1BC1E5019F17303448092B414A15E129286900, NULL);
		// webView.InternalOnWebContentProcessDidTerminate();
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_1 = __this->___webView_5;
		NullCheck(L_1);
		Refsdkfopdskgdwqueq_InternalOnWebContentProcessDidTerminate_mD35DC123F358BC1D2F84D748C62DE9EA252F6548(L_1, NULL);
		// }
		return;
	}
}
// System.Void Randomness::SafeBrowsingFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_SafeBrowsingFinished_m823E080F30DAE9C27A31B1D1C340002522BBABCA (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE0C6E1862C24014642E397665721C85D0C403E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("dghgfhtryuyutyutyu.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, _stringLiteralFE0C6E1862C24014642E397665721C85D0C403E6, NULL);
		// safeBrowsing.GetOutAlive();
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_1 = __this->___safeBrowsing_6;
		NullCheck(L_1);
		Ghost_GetOutAlive_mA7847B05BA974AE61AAFA987959B10FCD5E0BBBD(L_1, NULL);
		// }
		return;
	}
}
// System.Void Randomness::MultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_MultipleWindowOpened_m6249D1BB8393341EDA1B6C5BC170508F911F0F9D (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_hgfghfghfgh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59603CAEA09E8E5B561C04BFB39327833068B254);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("dfertertererterterfdg " + hgfghfghfgh);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_hgfghfghfgh;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral59603CAEA09E8E5B561C04BFB39327833068B254, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnMultipleWindowOpened(hgfghfghfgh);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_hgfghfghfgh;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnMultipleWindowOpened_m39C46A2FE868CD42C7084B25EAD0CC58BAB2FD59(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::MultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_MultipleWindowClosed_m8FC2BFEB299D3E44CD2C733D3847D66660599839 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_yutyuiyuiyuiyui, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BF168F3714F825A36ADAAD0ED659369923AD291);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("tretertertertertefd " + yutyuiyuiyuiyui);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_yutyuiyuiyuiyui;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4BF168F3714F825A36ADAAD0ED659369923AD291, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// webView.InternalOnMultipleWindowClosed(yutyuiyuiyuiyui);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_3 = __this->___webView_5;
		String_t* L_4 = ___0_yutyuiyuiyuiyui;
		NullCheck(L_3);
		Refsdkfopdskgdwqueq_InternalOnMultipleWindowClosed_m7A428077E460A9C540354FE15DED83FEC0030636(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Randomness::FileDownloadStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_FileDownloadStarted_mE82639BF0E519C601EA8C84694A1A115E67E5E08 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_gfhgfhrtyrty, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0756011DA72334260EBD420AB059FE9EE40137F0);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("trertertertertetetvg " + gfhgfhrtyrty);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_gfhgfhrtyrty;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0756011DA72334260EBD420AB059FE9EE40137F0, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var hfghfghfghfgh = JsonUtility.FromJson<UniWebViewNativeResultPayload>(gfhgfhrtyrty);
		String_t* L_3 = ___0_gfhgfhrtyrty;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnFileDownloadStarted(hfghfghfghfgh);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnFileDownloadStarted_m6522041496ABBCF4E9107D0A9A9E5145F7D938AD(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::FileDownloadFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_FileDownloadFinished_m9AF8AE3911840002A704A81EEBAFE96694D991C6 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_iouiouiiyuityu, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C074D8D758D5BD2A6E4A5D35E28636464FDE887);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("gertertertertertdfgdfg " + iouiouiiyuityu);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_iouiouiiyuityu;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2C074D8D758D5BD2A6E4A5D35E28636464FDE887, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var payload = JsonUtility.FromJson<UniWebViewNativeResultPayload>(iouiouiiyuityu);
		String_t* L_3 = ___0_iouiouiiyuityu;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnFileDownloadFinished(payload);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnFileDownloadFinished_m73EBD8AEC728614D9B021684BEAFBB4FF84A1B06(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::CaptureSnapshotFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness_CaptureSnapshotFinished_m2DAB7E5F178A58FCE144716A5DB37D129B62AC36 (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, String_t* ___0_gdgdfgdfgerter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20DC7690F6F3E7A33739D9F454BBD93A8C2A06F);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* V_0 = NULL;
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("Cdsfdstwetertertrerte " + gdgdfgdfgerter);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0;
		L_0 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		String_t* L_1 = ___0_gdgdfgdfgerter;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD20DC7690F6F3E7A33739D9F454BBD93A8C2A06F, L_1, NULL);
		NullCheck(L_0);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_0, L_2, NULL);
		// var bddfgdfge = JsonUtility.FromJson<UniWebViewNativeResultPayload>(gdgdfgdfgerter);
		String_t* L_3 = ___0_gdgdfgdfgerter;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4;
		L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF(L_3, JsonUtility_FromJson_TisUniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28_mF0C783797D2E15A389642DA35A01D8C3D464F7AF_RuntimeMethod_var);
		V_0 = L_4;
		// webView.InternalOnCaptureSnapshotFinished(bddfgdfge);
		Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* L_5 = __this->___webView_5;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = V_0;
		NullCheck(L_5);
		Refsdkfopdskgdwqueq_InternalOnCaptureSnapshotFinished_mA5A7E9B32B5698F75269AF786CC116F841F2911B(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Randomness::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness__ctor_mBB5181940C7E24080B5802862FB1041C9E08415D (Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Randomness::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Randomness__cctor_mE1CF2818467CFDA9FDA15828269D3AC4957D3B26 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB2D8F2483518BB09C9D769B48624A4219DB6A8D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<String, Randomness> listeners = new Dictionary<String, Randomness>();
		Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009* L_0 = (Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009*)il2cpp_codegen_object_new(Dictionary_2_t7DC2D5AA7991EDA6AA343A44592925BDB329D009_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB2D8F2483518BB09C9D769B48624A4219DB6A8D2(L_0, Dictionary_2__ctor_mB2D8F2483518BB09C9D769B48624A4219DB6A8D2_RuntimeMethod_var);
		((Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_StaticFields*)il2cpp_codegen_static_fields_for(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var))->___listeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_StaticFields*)il2cpp_codegen_static_fields_for(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var))->___listeners_4), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewNativeResultPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniWebViewNativeResultPayload__ctor_m376159F6A83E6F4D512C683F23FE3963CCE28A07 (UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Refsdkfopdskgdwqueq::add_OnPageStarted(Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_OnPageStarted_m48C9B984EFBC1DBA4B440E1D969ED979F043C43C (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* V_0 = NULL;
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* V_1 = NULL;
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* V_2 = NULL;
	{
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_0 = __this->___OnPageStarted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_1 = V_0;
		V_1 = L_1;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_2 = V_1;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*)CastclassSealed((RuntimeObject*)L_4, Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7_il2cpp_TypeInfo_var));
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7** L_5 = (&__this->___OnPageStarted_4);
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_6 = V_2;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_7 = V_1;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_9 = V_0;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*)L_9) == ((RuntimeObject*)(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_OnPageStarted(Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_OnPageStarted_mB1E6C0E5F5F7C068C4EFD92E6DB2469E057898CF (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* V_0 = NULL;
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* V_1 = NULL;
	Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* V_2 = NULL;
	{
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_0 = __this->___OnPageStarted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_1 = V_0;
		V_1 = L_1;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_2 = V_1;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*)CastclassSealed((RuntimeObject*)L_4, Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7_il2cpp_TypeInfo_var));
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7** L_5 = (&__this->___OnPageStarted_4);
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_6 = V_2;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_7 = V_1;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_9 = V_0;
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*)L_9) == ((RuntimeObject*)(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Youyidas(Refsdkfopdskgdwqueq/SDfsdfsdffs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Youyidas_mBD06C47AE3BE41B26E2F7961CE52E9F25A3C5911 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* V_0 = NULL;
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* V_1 = NULL;
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* V_2 = NULL;
	{
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_0 = __this->___Youyidas_5;
		V_0 = L_0;
	}

IL_0007:
	{
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_1 = V_0;
		V_1 = L_1;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_2 = V_1;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*)CastclassSealed((RuntimeObject*)L_4, SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0_il2cpp_TypeInfo_var));
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0** L_5 = (&__this->___Youyidas_5);
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_6 = V_2;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_7 = V_1;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_8;
		L_8 = InterlockedCompareExchangeImpl<SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*>(L_5, L_6, L_7);
		V_0 = L_8;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_9 = V_0;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_10 = V_1;
		if ((!(((RuntimeObject*)(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*)L_9) == ((RuntimeObject*)(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Youyidas(Refsdkfopdskgdwqueq/SDfsdfsdffs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Youyidas_m0874A7252EFABF9E43116EF09A67A4929D4BE7DE (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* V_0 = NULL;
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* V_1 = NULL;
	SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* V_2 = NULL;
	{
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_0 = __this->___Youyidas_5;
		V_0 = L_0;
	}

IL_0007:
	{
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_1 = V_0;
		V_1 = L_1;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_2 = V_1;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*)CastclassSealed((RuntimeObject*)L_4, SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0_il2cpp_TypeInfo_var));
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0** L_5 = (&__this->___Youyidas_5);
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_6 = V_2;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_7 = V_1;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_8;
		L_8 = InterlockedCompareExchangeImpl<SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*>(L_5, L_6, L_7);
		V_0 = L_8;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_9 = V_0;
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_10 = V_1;
		if ((!(((RuntimeObject*)(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*)L_9) == ((RuntimeObject*)(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_OnPageErrorReceived(Refsdkfopdskgdwqueq/Hfddfgdfgdfg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_OnPageErrorReceived_mFA51F7FB2E4450CE4C85E783BFE6534133102B7B (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* V_0 = NULL;
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* V_1 = NULL;
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* V_2 = NULL;
	{
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_0 = __this->___OnPageErrorReceived_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_1 = V_0;
		V_1 = L_1;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_2 = V_1;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*)CastclassSealed((RuntimeObject*)L_4, Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972_il2cpp_TypeInfo_var));
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972** L_5 = (&__this->___OnPageErrorReceived_6);
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_6 = V_2;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_7 = V_1;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_8;
		L_8 = InterlockedCompareExchangeImpl<Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*>(L_5, L_6, L_7);
		V_0 = L_8;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_9 = V_0;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_10 = V_1;
		if ((!(((RuntimeObject*)(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*)L_9) == ((RuntimeObject*)(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_OnPageErrorReceived(Refsdkfopdskgdwqueq/Hfddfgdfgdfg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_OnPageErrorReceived_mC7E5D1A9C65D64A8B7ADD36DF7ABBE6BB74BC563 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* V_0 = NULL;
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* V_1 = NULL;
	Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* V_2 = NULL;
	{
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_0 = __this->___OnPageErrorReceived_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_1 = V_0;
		V_1 = L_1;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_2 = V_1;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*)CastclassSealed((RuntimeObject*)L_4, Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972_il2cpp_TypeInfo_var));
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972** L_5 = (&__this->___OnPageErrorReceived_6);
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_6 = V_2;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_7 = V_1;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_8;
		L_8 = InterlockedCompareExchangeImpl<Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*>(L_5, L_6, L_7);
		V_0 = L_8;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_9 = V_0;
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_10 = V_1;
		if ((!(((RuntimeObject*)(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*)L_9) == ((RuntimeObject*)(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_OnPageProgressChanged(Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_OnPageProgressChanged_m882A0FD9A90C9DDB4CB3B8457AA3074828E94D57 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* V_0 = NULL;
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* V_1 = NULL;
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* V_2 = NULL;
	{
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_0 = __this->___OnPageProgressChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_1 = V_0;
		V_1 = L_1;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_2 = V_1;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*)CastclassSealed((RuntimeObject*)L_4, SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE_il2cpp_TypeInfo_var));
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE** L_5 = (&__this->___OnPageProgressChanged_7);
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_6 = V_2;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_7 = V_1;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_8;
		L_8 = InterlockedCompareExchangeImpl<SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*>(L_5, L_6, L_7);
		V_0 = L_8;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_9 = V_0;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_10 = V_1;
		if ((!(((RuntimeObject*)(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*)L_9) == ((RuntimeObject*)(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_OnPageProgressChanged(Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_OnPageProgressChanged_mD65E33E9A6198D49D1948AF2D53D3F54B6F8967F (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* V_0 = NULL;
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* V_1 = NULL;
	SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* V_2 = NULL;
	{
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_0 = __this->___OnPageProgressChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_1 = V_0;
		V_1 = L_1;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_2 = V_1;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*)CastclassSealed((RuntimeObject*)L_4, SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE_il2cpp_TypeInfo_var));
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE** L_5 = (&__this->___OnPageProgressChanged_7);
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_6 = V_2;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_7 = V_1;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_8;
		L_8 = InterlockedCompareExchangeImpl<SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*>(L_5, L_6, L_7);
		V_0 = L_8;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_9 = V_0;
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_10 = V_1;
		if ((!(((RuntimeObject*)(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*)L_9) == ((RuntimeObject*)(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Hdgfgfsdgdfgdfg(Refsdkfopdskgdwqueq/SDFSdfsdfdfdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Hdgfgfsdgdfgdfg_m6A74CB2C6DD8DB3295753E12430BDE06986B982F (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* V_0 = NULL;
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* V_1 = NULL;
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* V_2 = NULL;
	{
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_0 = __this->___Hdgfgfsdgdfgdfg_8;
		V_0 = L_0;
	}

IL_0007:
	{
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_1 = V_0;
		V_1 = L_1;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_2 = V_1;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*)CastclassSealed((RuntimeObject*)L_4, SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506_il2cpp_TypeInfo_var));
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506** L_5 = (&__this->___Hdgfgfsdgdfgdfg_8);
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_6 = V_2;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_7 = V_1;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_8;
		L_8 = InterlockedCompareExchangeImpl<SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*>(L_5, L_6, L_7);
		V_0 = L_8;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_9 = V_0;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_10 = V_1;
		if ((!(((RuntimeObject*)(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*)L_9) == ((RuntimeObject*)(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Hdgfgfsdgdfgdfg(Refsdkfopdskgdwqueq/SDFSdfsdfdfdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Hdgfgfsdgdfgdfg_m66E2A5FFBC5F2C055EBAA4FCAE9C31931B84AC71 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* V_0 = NULL;
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* V_1 = NULL;
	SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* V_2 = NULL;
	{
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_0 = __this->___Hdgfgfsdgdfgdfg_8;
		V_0 = L_0;
	}

IL_0007:
	{
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_1 = V_0;
		V_1 = L_1;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_2 = V_1;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*)CastclassSealed((RuntimeObject*)L_4, SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506_il2cpp_TypeInfo_var));
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506** L_5 = (&__this->___Hdgfgfsdgdfgdfg_8);
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_6 = V_2;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_7 = V_1;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_8;
		L_8 = InterlockedCompareExchangeImpl<SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*>(L_5, L_6, L_7);
		V_0 = L_8;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_9 = V_0;
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_10 = V_1;
		if ((!(((RuntimeObject*)(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*)L_9) == ((RuntimeObject*)(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Jhfdhdgdfdgd(Refsdkfopdskgdwqueq/Shfhfghfghfdgf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Jhfdhdgdfdgd_m568A753F3A015F4DFFB64F92FF5D26CE84BC9B8C (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* V_0 = NULL;
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* V_1 = NULL;
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* V_2 = NULL;
	{
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_0 = __this->___Jhfdhdgdfdgd_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_1 = V_0;
		V_1 = L_1;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_2 = V_1;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*)CastclassSealed((RuntimeObject*)L_4, Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C_il2cpp_TypeInfo_var));
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C** L_5 = (&__this->___Jhfdhdgdfdgd_9);
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_6 = V_2;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_7 = V_1;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_9 = V_0;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*)L_9) == ((RuntimeObject*)(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Jhfdhdgdfdgd(Refsdkfopdskgdwqueq/Shfhfghfghfdgf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Jhfdhdgdfdgd_m339A84CEC3D81CFD01CC61DA2C3276BD9F903D98 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* V_0 = NULL;
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* V_1 = NULL;
	Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* V_2 = NULL;
	{
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_0 = __this->___Jhfdhdgdfdgd_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_1 = V_0;
		V_1 = L_1;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_2 = V_1;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*)CastclassSealed((RuntimeObject*)L_4, Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C_il2cpp_TypeInfo_var));
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C** L_5 = (&__this->___Jhfdhdgdfdgd_9);
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_6 = V_2;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_7 = V_1;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_9 = V_0;
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*)L_9) == ((RuntimeObject*)(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Kldasdadasd(Refsdkfopdskgdwqueq/ghfghfgghdfgdfg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Kldasdadasd_m290A5A0057FC3EC51D7FDABC97725D47B5574410 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* V_0 = NULL;
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* V_1 = NULL;
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* V_2 = NULL;
	{
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_0 = __this->___Kldasdadasd_10;
		V_0 = L_0;
	}

IL_0007:
	{
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_1 = V_0;
		V_1 = L_1;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_2 = V_1;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*)CastclassSealed((RuntimeObject*)L_4, ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA_il2cpp_TypeInfo_var));
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA** L_5 = (&__this->___Kldasdadasd_10);
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_6 = V_2;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_7 = V_1;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_8;
		L_8 = InterlockedCompareExchangeImpl<ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*>(L_5, L_6, L_7);
		V_0 = L_8;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_9 = V_0;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_10 = V_1;
		if ((!(((RuntimeObject*)(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*)L_9) == ((RuntimeObject*)(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Kldasdadasd(Refsdkfopdskgdwqueq/ghfghfgghdfgdfg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Kldasdadasd_mED2B469EEBFF41DFF9636ECC7F1A013BC387E70E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* V_0 = NULL;
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* V_1 = NULL;
	ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* V_2 = NULL;
	{
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_0 = __this->___Kldasdadasd_10;
		V_0 = L_0;
	}

IL_0007:
	{
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_1 = V_0;
		V_1 = L_1;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_2 = V_1;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*)CastclassSealed((RuntimeObject*)L_4, ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA_il2cpp_TypeInfo_var));
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA** L_5 = (&__this->___Kldasdadasd_10);
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_6 = V_2;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_7 = V_1;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_8;
		L_8 = InterlockedCompareExchangeImpl<ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*>(L_5, L_6, L_7);
		V_0 = L_8;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_9 = V_0;
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_10 = V_1;
		if ((!(((RuntimeObject*)(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*)L_9) == ((RuntimeObject*)(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Iyreyertersdfds(Refsdkfopdskgdwqueq/Tsfsdfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Iyreyertersdfds_m71F446F5E1BE654BBB44CC055771714AB634DCB2 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* V_0 = NULL;
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* V_1 = NULL;
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* V_2 = NULL;
	{
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_0 = __this->___Iyreyertersdfds_11;
		V_0 = L_0;
	}

IL_0007:
	{
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_1 = V_0;
		V_1 = L_1;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_2 = V_1;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*)CastclassSealed((RuntimeObject*)L_4, Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146_il2cpp_TypeInfo_var));
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146** L_5 = (&__this->___Iyreyertersdfds_11);
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_6 = V_2;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_7 = V_1;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_8;
		L_8 = InterlockedCompareExchangeImpl<Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*>(L_5, L_6, L_7);
		V_0 = L_8;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_9 = V_0;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_10 = V_1;
		if ((!(((RuntimeObject*)(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*)L_9) == ((RuntimeObject*)(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Iyreyertersdfds(Refsdkfopdskgdwqueq/Tsfsdfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Iyreyertersdfds_m1F53A58902640CE1B4E77BE0701B6725980377CB (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* V_0 = NULL;
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* V_1 = NULL;
	Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* V_2 = NULL;
	{
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_0 = __this->___Iyreyertersdfds_11;
		V_0 = L_0;
	}

IL_0007:
	{
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_1 = V_0;
		V_1 = L_1;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_2 = V_1;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*)CastclassSealed((RuntimeObject*)L_4, Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146_il2cpp_TypeInfo_var));
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146** L_5 = (&__this->___Iyreyertersdfds_11);
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_6 = V_2;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_7 = V_1;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_8;
		L_8 = InterlockedCompareExchangeImpl<Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*>(L_5, L_6, L_7);
		V_0 = L_8;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_9 = V_0;
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_10 = V_1;
		if ((!(((RuntimeObject*)(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*)L_9) == ((RuntimeObject*)(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Rwqewrwerwsdfs(Refsdkfopdskgdwqueq/EWrrwrwerwer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Rwqewrwerwsdfs_m474A32B1E7990F2545C61CDB6BEB3E445C40081E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* V_0 = NULL;
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* V_1 = NULL;
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* V_2 = NULL;
	{
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_0 = __this->___Rwqewrwerwsdfs_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_1 = V_0;
		V_1 = L_1;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_2 = V_1;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*)CastclassSealed((RuntimeObject*)L_4, EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193_il2cpp_TypeInfo_var));
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193** L_5 = (&__this->___Rwqewrwerwsdfs_12);
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_6 = V_2;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_7 = V_1;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_8;
		L_8 = InterlockedCompareExchangeImpl<EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*>(L_5, L_6, L_7);
		V_0 = L_8;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_9 = V_0;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_10 = V_1;
		if ((!(((RuntimeObject*)(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*)L_9) == ((RuntimeObject*)(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Rwqewrwerwsdfs(Refsdkfopdskgdwqueq/EWrrwrwerwer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Rwqewrwerwsdfs_mBE5CE687B012670896A433C0E46FAB61CF0F2B64 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* V_0 = NULL;
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* V_1 = NULL;
	EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* V_2 = NULL;
	{
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_0 = __this->___Rwqewrwerwsdfs_12;
		V_0 = L_0;
	}

IL_0007:
	{
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_1 = V_0;
		V_1 = L_1;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_2 = V_1;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*)CastclassSealed((RuntimeObject*)L_4, EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193_il2cpp_TypeInfo_var));
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193** L_5 = (&__this->___Rwqewrwerwsdfs_12);
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_6 = V_2;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_7 = V_1;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_8;
		L_8 = InterlockedCompareExchangeImpl<EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*>(L_5, L_6, L_7);
		V_0 = L_8;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_9 = V_0;
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_10 = V_1;
		if ((!(((RuntimeObject*)(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*)L_9) == ((RuntimeObject*)(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_OnFileDownloadFinished(Refsdkfopdskgdwqueq/Hsfsdfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_OnFileDownloadFinished_m6E2C61CEB9D219A57A3C2BD3C8607145AC005A3A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* V_0 = NULL;
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* V_1 = NULL;
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* V_2 = NULL;
	{
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_0 = __this->___OnFileDownloadFinished_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_1 = V_0;
		V_1 = L_1;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_2 = V_1;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*)CastclassSealed((RuntimeObject*)L_4, Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2_il2cpp_TypeInfo_var));
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2** L_5 = (&__this->___OnFileDownloadFinished_13);
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_6 = V_2;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_7 = V_1;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_8;
		L_8 = InterlockedCompareExchangeImpl<Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*>(L_5, L_6, L_7);
		V_0 = L_8;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_9 = V_0;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_10 = V_1;
		if ((!(((RuntimeObject*)(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*)L_9) == ((RuntimeObject*)(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_OnFileDownloadFinished(Refsdkfopdskgdwqueq/Hsfsdfsdfsdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_OnFileDownloadFinished_m74FFC723F82AEFE279D967578EB6F324E9BF3363 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* V_0 = NULL;
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* V_1 = NULL;
	Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* V_2 = NULL;
	{
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_0 = __this->___OnFileDownloadFinished_13;
		V_0 = L_0;
	}

IL_0007:
	{
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_1 = V_0;
		V_1 = L_1;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_2 = V_1;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*)CastclassSealed((RuntimeObject*)L_4, Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2_il2cpp_TypeInfo_var));
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2** L_5 = (&__this->___OnFileDownloadFinished_13);
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_6 = V_2;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_7 = V_1;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_8;
		L_8 = InterlockedCompareExchangeImpl<Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*>(L_5, L_6, L_7);
		V_0 = L_8;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_9 = V_0;
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_10 = V_1;
		if ((!(((RuntimeObject*)(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*)L_9) == ((RuntimeObject*)(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Ddadasdasdas(Refsdkfopdskgdwqueq/Wsdfsdfsdfsf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Ddadasdasdas_m3B7A27BF5DFC7393B00A065060373AC2A37FEE68 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* V_0 = NULL;
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* V_1 = NULL;
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* V_2 = NULL;
	{
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_0 = __this->___Ddadasdasdas_14;
		V_0 = L_0;
	}

IL_0007:
	{
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_1 = V_0;
		V_1 = L_1;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_2 = V_1;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*)CastclassSealed((RuntimeObject*)L_4, Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7_il2cpp_TypeInfo_var));
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7** L_5 = (&__this->___Ddadasdasdas_14);
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_6 = V_2;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_7 = V_1;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_9 = V_0;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*)L_9) == ((RuntimeObject*)(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Ddadasdasdas(Refsdkfopdskgdwqueq/Wsdfsdfsdfsf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Ddadasdasdas_m37779A8F1EC698C5CD03B8D4779F00CAC383C550 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* V_0 = NULL;
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* V_1 = NULL;
	Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* V_2 = NULL;
	{
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_0 = __this->___Ddadasdasdas_14;
		V_0 = L_0;
	}

IL_0007:
	{
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_1 = V_0;
		V_1 = L_1;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_2 = V_1;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*)CastclassSealed((RuntimeObject*)L_4, Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7_il2cpp_TypeInfo_var));
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7** L_5 = (&__this->___Ddadasdasdas_14);
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_6 = V_2;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_7 = V_1;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_9 = V_0;
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*)L_9) == ((RuntimeObject*)(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Trqweqweq(Refsdkfopdskgdwqueq/Zgblfgflgfgh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Trqweqweq_m21BF4AEAB0222266B0006FC832A1441B8138241E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* V_0 = NULL;
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* V_1 = NULL;
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* V_2 = NULL;
	{
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_0 = __this->___Trqweqweq_15;
		V_0 = L_0;
	}

IL_0007:
	{
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_1 = V_0;
		V_1 = L_1;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_2 = V_1;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*)CastclassSealed((RuntimeObject*)L_4, Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A_il2cpp_TypeInfo_var));
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A** L_5 = (&__this->___Trqweqweq_15);
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_6 = V_2;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_7 = V_1;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_9 = V_0;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*)L_9) == ((RuntimeObject*)(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Trqweqweq(Refsdkfopdskgdwqueq/Zgblfgflgfgh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Trqweqweq_m863A417C654E52C4F7AE184635E7CE1702B58D88 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* V_0 = NULL;
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* V_1 = NULL;
	Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* V_2 = NULL;
	{
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_0 = __this->___Trqweqweq_15;
		V_0 = L_0;
	}

IL_0007:
	{
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_1 = V_0;
		V_1 = L_1;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_2 = V_1;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*)CastclassSealed((RuntimeObject*)L_4, Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A_il2cpp_TypeInfo_var));
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A** L_5 = (&__this->___Trqweqweq_15);
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_6 = V_2;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_7 = V_1;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_9 = V_0;
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*)L_9) == ((RuntimeObject*)(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_Hfsdfsdfs(Refsdkfopdskgdwqueq/Mdgddfddfgdfg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_Hfsdfsdfs_m83F5E2FC0924E37D20D1A8DD0FAD167B02415B02 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* V_0 = NULL;
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* V_1 = NULL;
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* V_2 = NULL;
	{
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_0 = __this->___Hfsdfsdfs_16;
		V_0 = L_0;
	}

IL_0007:
	{
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_1 = V_0;
		V_1 = L_1;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_2 = V_1;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*)CastclassSealed((RuntimeObject*)L_4, Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23_il2cpp_TypeInfo_var));
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23** L_5 = (&__this->___Hfsdfsdfs_16);
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_6 = V_2;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_7 = V_1;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_8;
		L_8 = InterlockedCompareExchangeImpl<Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*>(L_5, L_6, L_7);
		V_0 = L_8;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_9 = V_0;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_10 = V_1;
		if ((!(((RuntimeObject*)(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*)L_9) == ((RuntimeObject*)(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_Hfsdfsdfs(Refsdkfopdskgdwqueq/Mdgddfddfgdfg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_Hfsdfsdfs_mD57B8701F97F72CB99B66DAEDEAA58B58577F40E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* V_0 = NULL;
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* V_1 = NULL;
	Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* V_2 = NULL;
	{
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_0 = __this->___Hfsdfsdfs_16;
		V_0 = L_0;
	}

IL_0007:
	{
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_1 = V_0;
		V_1 = L_1;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_2 = V_1;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*)CastclassSealed((RuntimeObject*)L_4, Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23_il2cpp_TypeInfo_var));
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23** L_5 = (&__this->___Hfsdfsdfs_16);
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_6 = V_2;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_7 = V_1;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_8;
		L_8 = InterlockedCompareExchangeImpl<Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*>(L_5, L_6, L_7);
		V_0 = L_8;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_9 = V_0;
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_10 = V_1;
		if ((!(((RuntimeObject*)(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*)L_9) == ((RuntimeObject*)(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Rect Refsdkfopdskgdwqueq::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Refsdkfopdskgdwqueq_get_Y_m0414813D1D5898FCDFC93B7B4D8FF64A390FE9C2 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return y; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___y_27;
		return L_0;
	}
}
// System.Void Refsdkfopdskgdwqueq::set_Y(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_set_Y_m00E2FBD7EB70A05BC6FC3898EEEC300735C21472 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	{
		// y = value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_value;
		__this->___y_27 = L_0;
		// BG();
		Refsdkfopdskgdwqueq_BG_m9D9D06BC0F3243ADBDEF8603295561676BC61814(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.RectTransform Refsdkfopdskgdwqueq::get_Hre()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Refsdkfopdskgdwqueq_get_Hre_m1408EC5A0B9AA5E0CC9732AEEB6F17968E6DDA77 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return hre; }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___hre_28;
		return L_0;
	}
}
// System.Void Refsdkfopdskgdwqueq::set_Hre(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_set_Hre_mCA586E70797E035366A83B0B97639A11EE6B7D62 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_value, const RuntimeMethod* method) 
{
	{
		// hre = value;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___0_value;
		__this->___hre_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hre_28), (void*)L_0);
		// BG();
		Refsdkfopdskgdwqueq_BG_m9D9D06BC0F3243ADBDEF8603295561676BC61814(__this, NULL);
		// }
		return;
	}
}
// System.String Refsdkfopdskgdwqueq::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Refsdkfopdskgdwqueq_get_Url_m8783DF6DB84059DF5C4D3F3259464DDB13A10FF9 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UniWebViewInterface.GetUrl(listener.Name); }
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUrl_mF08492B883076DFF14EFB60CCCA5EE80016617D1(L_1, NULL);
		return L_2;
	}
}
// System.Void Refsdkfopdskgdwqueq::BG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_BG_m9D9D06BC0F3243ADBDEF8603295561676BC61814 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Rect rect = NextFrameRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Refsdkfopdskgdwqueq_NextFrameRect_m6B5B85BE6A9E646BA922D429092595E5FF9A80D5(__this, NULL);
		V_0 = L_0;
		// UniWebViewInterface.SetFrame(listener.Name, (int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_1 = __this->___listener_18;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_1, NULL);
		float L_3;
		L_3 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetFrame_m26FC64F835098BC244FF95F17419ED7B350C6E84(L_2, il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), NULL);
		// }
		return;
	}
}
// UnityEngine.Rect Refsdkfopdskgdwqueq::NextFrameRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Refsdkfopdskgdwqueq_NextFrameRect_m6B5B85BE6A9E646BA922D429092595E5FF9A80D5 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34820D8607BA4209C8866953F3A176304856830C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA23FF44587D3C9E78BC35B69214D19422CD06F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC3B647344371B61D6948D8A3F3C7B7191EE5C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC809057EAA66F586A38B1AE8A151B5D0CF4C74C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_11 = NULL;
	int32_t V_12 = 0;
	{
		// if (hre == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___hre_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("SADdfsfdsdfsdfsd.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_2;
		L_2 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_2);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_2, _stringLiteral34820D8607BA4209C8866953F3A176304856830C, NULL);
		// return y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = __this->___y_27;
		return L_3;
	}

IL_0024:
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("bfgdfgdsfgsdfsdfTfsdfsfsdf.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_4;
		L_4 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_4);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_4, _stringLiteralFC809057EAA66F586A38B1AE8A151B5D0CF4C74C, NULL);
		// var worldCorners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_5;
		// hre.GetWorldCorners(worldCorners);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___hre_28;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = V_0;
		NullCheck(L_6);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_6, L_7, NULL);
		// var bottomLeft = worldCorners[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// var topLeft = worldCorners[1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// var topRight = worldCorners[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		// var bottomRight = worldCorners[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		// var canvas = hre.GetComponentInParent<Canvas>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___hre_28;
		NullCheck(L_20);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_21;
		L_21 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(L_20, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_5 = L_21;
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_22 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		// return this.y;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24 = __this->___y_27;
		return L_24;
	}

IL_0085:
	{
		// switch (canvas.renderMode)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_25, NULL);
		V_12 = L_26;
		int32_t L_27 = V_12;
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_28 = V_12;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, 1))) <= ((uint32_t)1))))
		{
			goto IL_00f2;
		}
	}
	{
		// var camera = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_29 = V_5;
		NullCheck(L_29);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30;
		L_30 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_29, NULL);
		V_11 = L_30;
		// if (camera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00cc;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat(@"adasdasdasda.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_33;
		L_33 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_33);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_33, _stringLiteral8FA23FF44587D3C9E78BC35B69214D19422CD06F, NULL);
		// SDfsdfsdfsvxc.Instance.TwentyLol("dadasbvfdbdfdfgsdfsfs.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_34;
		L_34 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_34);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_34, _stringLiteral9FC3B647344371B61D6948D8A3F3C7B7191EE5C5, NULL);
		goto IL_00f2;
	}

IL_00cc:
	{
		// bottomLeft = camera.WorldToScreenPoint(bottomLeft);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_35, L_36, NULL);
		V_1 = L_37;
		// topLeft = camera.WorldToScreenPoint(topLeft);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_38, L_39, NULL);
		V_2 = L_40;
		// topRight = camera.WorldToScreenPoint(topRight);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_3;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_41, L_42, NULL);
		V_3 = L_43;
		// bottomRight = camera.WorldToScreenPoint(bottomRight);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_4;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_44, L_45, NULL);
		V_4 = L_46;
	}

IL_00f2:
	{
		// float gff = (float)UniWebViewInterface.NativeScreenWidth() / (float)Screen.width;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_47;
		L_47 = UniWebViewInterface_NativeScreenWidth_mB8A2DB90CC317ADBF1A9A096DC834CEB8DD3DFC1(NULL);
		int32_t L_48;
		L_48 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_6 = ((float)(((float)L_47)/((float)L_48)));
		// float kj = (float)UniWebViewInterface.NativeScreenHeight() / (float)Screen.height;
		float L_49;
		L_49 = UniWebViewInterface_NativeScreenHeight_m72EAC5AB2C942E63F020DB4E3CED3D3519EC1570(NULL);
		int32_t L_50;
		L_50 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_7 = ((float)(((float)L_49)/((float)L_50)));
		// float x = topLeft.x * gff;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_2;
		float L_52 = L_51.___x_2;
		float L_53 = V_6;
		// float y = (Screen.height - topLeft.y) * kj;
		int32_t L_54;
		L_54 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		float L_56 = L_55.___y_3;
		float L_57 = V_7;
		V_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_54), L_56)), L_57));
		// float width = (bottomRight.x - topLeft.x) * gff;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_4;
		float L_59 = L_58.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_2;
		float L_61 = L_60.___x_2;
		float L_62 = V_6;
		V_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_59, L_61)), L_62));
		// float height = (topLeft.y - bottomRight.y) * kj;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_2;
		float L_64 = L_63.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = V_4;
		float L_66 = L_65.___y_3;
		float L_67 = V_7;
		V_10 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_64, L_66)), L_67));
		// return new Rect(x, y, width, height);
		float L_68 = V_8;
		float L_69 = V_9;
		float L_70 = V_10;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_71;
		memset((&L_71), 0, sizeof(L_71));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_71), ((float)il2cpp_codegen_multiply(L_52, L_53)), L_68, L_69, L_70, /*hidden argument*/NULL);
		return L_71;
	}
}
// System.Void Refsdkfopdskgdwqueq::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Awake_mAB42F199A28CC70318B890F32E995173E31A6E2D (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var iu = new GameObject(id);
		String_t* L_0 = __this->___id_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		// listener = iu.AddComponent<Randomness>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_3;
		L_3 = GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175(L_2, GameObject_AddComponent_TisRandomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_m164E04DB66E75B36CF052A8F5D195680E7634175_RuntimeMethod_var);
		__this->___listener_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listener_18), (void*)L_3);
		// iu.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// listener.webView = this;
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_7 = __this->___listener_18;
		NullCheck(L_7);
		L_7->___webView_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___webView_5), (void*)__this);
		// Randomness.AddListener(listener);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_8 = __this->___listener_18;
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Randomness_AddListener_mA47076792E124D20CD97795A2224840CA4888DA6(L_8, NULL);
		// if (fullScreen)
		bool L_9 = __this->___fullScreen_22;
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		// rect = new Rect(0, 0, Screen.width, Screen.height);
		int32_t L_10;
		L_10 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), (0.0f), (0.0f), ((float)L_10), ((float)L_11), NULL);
		goto IL_006e;
	}

IL_0067:
	{
		// rect = NextFrameRect();
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = Refsdkfopdskgdwqueq_NextFrameRect_m6B5B85BE6A9E646BA922D429092595E5FF9A80D5(__this, NULL);
		V_1 = L_12;
	}

IL_006e:
	{
		// UniWebViewInterface.Init(listener.Name, (int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_13 = __this->___listener_18;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_13, NULL);
		float L_15;
		L_15 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_1), NULL);
		float L_16;
		L_16 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_1), NULL);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_1), NULL);
		float L_18;
		L_18 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Init_mA170AB0A59E8F8DAC97FD0FB18CF85D9C16AC2FF(L_14, il2cpp_codegen_cast_double_to_int<int32_t>(L_15), il2cpp_codegen_cast_double_to_int<int32_t>(L_16), il2cpp_codegen_cast_double_to_int<int32_t>(L_17), il2cpp_codegen_cast_double_to_int<int32_t>(L_18), NULL);
		// jhjj = Screen.height >= Screen.width;
		int32_t L_19;
		L_19 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_20;
		L_20 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		__this->___jhjj_19 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Start_m1284927362819ACFCE1734C8E0F808ABE650A0D6 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showOnStart)
		bool L_0 = __this->___showOnStart_21;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// M();
		bool L_1;
		L_1 = Refsdkfopdskgdwqueq_M_m2235893E95EA7AD20647131F211C2110DFDABAED(__this, (bool)0, 0, (0.400000006f), (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0017:
	{
		// if (!string.IsNullOrEmpty(urlOnStart))
		String_t* L_2 = __this->___urlOnStart_20;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// H(urlOnStart);
		String_t* L_4 = __this->___urlOnStart_20;
		Refsdkfopdskgdwqueq_H_mF0828A2BF59DD07942F606D1446869102328D5F7(__this, L_4, (bool)0, (String_t*)NULL, NULL);
	}

IL_0032:
	{
		// ljjgh = true;
		__this->___ljjgh_29 = (bool)1;
		// if (hre != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___hre_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// BG();
		Refsdkfopdskgdwqueq_BG_m9D9D06BC0F3243ADBDEF8603295561676BC61814(__this, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Update_mA1342F82CF22EE9E57DA10FAAF80C93471B6FD8E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9DECC3795BF71CC5D2B2A8BE5AF206B97C7ED60);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var newIsPortrait = Screen.height >= Screen.width;
		int32_t L_0;
		L_0 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (jhjj != newIsPortrait)
		bool L_2 = __this->___jhjj_19;
		bool L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		// jhjj = newIsPortrait;
		bool L_4 = V_0;
		__this->___jhjj_19 = L_4;
		// if (Kldasdadasd != null)
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_5 = __this->___Kldasdadasd_10;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Kldasdadasd(this, Screen.orientation);
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* L_6 = __this->___Kldasdadasd_10;
		int32_t L_7;
		L_7 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		NullCheck(L_6);
		ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_inline(L_6, __this, L_7, NULL);
	}

IL_0039:
	{
		// if (hre != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___hre_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// BG();
		Refsdkfopdskgdwqueq_BG_m9D9D06BC0F3243ADBDEF8603295561676BC61814(__this, NULL);
	}

IL_004d:
	{
		// if (bgbsd && Input.GetKeyUp(KeyCode.Escape))
		bool L_10 = __this->___bgbsd_30;
		if (!L_10)
		{
			goto IL_0082;
		}
	}
	{
		bool L_11;
		L_11 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.TwentyLol("fsdgfdhdfbcvcxvcxvsdfwef.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_12;
		L_12 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_12);
		SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01(L_12, _stringLiteralB9DECC3795BF71CC5D2B2A8BE5AF206B97C7ED60, NULL);
		// if (CanGoBack)
		bool L_13;
		L_13 = Refsdkfopdskgdwqueq_get_CanGoBack_m0843B20CB166431E88D546C5AE8A7E24504A4B56(__this, NULL);
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// GoBack();
		Refsdkfopdskgdwqueq_GoBack_m0F5AEDA8236F523C606D54ECBB89199053EC2995(__this, NULL);
		return;
	}

IL_007c:
	{
		// InternalOnShouldClose();
		Refsdkfopdskgdwqueq_InternalOnShouldClose_m38C39D38B3DE41871E1C20651658151DC1D6249E(__this, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_OnEnable_m98F1584255C58CFFD4F1C2EB55F11FC71502D0CA (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	{
		// if (ljjgh)
		bool L_0 = __this->___ljjgh_29;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// _Show(useAsync: true);
		bool L_1;
		L_1 = Refsdkfopdskgdwqueq__Show_m17A72C61E63BC0772FDD9595A5CDB0B8B08C79A5(__this, (bool)0, 0, (0.400000006f), (bool)1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_OnDisable_m62D51C490372254C8FEE2EDC35F39808B3D465AF (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	{
		// if (ljjgh)
		bool L_0 = __this->___ljjgh_29;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// _Hide(useAsync: true);
		bool L_1;
		L_1 = Refsdkfopdskgdwqueq__Hide_m397161DBF5DDD9B9F3877A4386A929DD9CF8E6D8(__this, (bool)0, 0, (0.400000006f), (bool)1, (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::H(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_H_mF0828A2BF59DD07942F606D1446869102328D5F7 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_j, bool ___1_f, String_t* ___2_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Load(listener.Name, j, f, h);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_j;
		bool L_3 = ___1_f;
		String_t* L_4 = ___2_h;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Load_mA0A42A5C9411A0AEDC6EE31E7498E30ECC16A4CB(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::LoadHTMLString(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_LoadHTMLString_m892FAFCF3B5F32B93E634C1CBB3ABE66CA4C2E84 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_htmlString, String_t* ___1_baseUrl, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.LoadHTMLString(listener.Name, htmlString, baseUrl, skipEncoding);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_htmlString;
		String_t* L_3 = ___1_baseUrl;
		bool L_4 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_LoadHTMLString_m086934336393BBC4EB333686C46C9288BE027F59(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::Reload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Reload_m7061DFC9B5D9D5D77302EBADCB71379749BCF102 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Reload(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Reload_mC134A615AE8B03A1A7D5DFA9EDBBBD69BA98FCA9(L_1, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Stop_m18FD44284B470D80D1A21EA0D63F5D6DA5B4FDA6 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Stop(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Stop_m751AC39E1F877E9657F5ED831B0406E2FFC28D41(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::get_CanGoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_get_CanGoBack_m0843B20CB166431E88D546C5AE8A7E24504A4B56 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UniWebViewInterface.CanGoBack(listener.Name); }
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoBack_m60694B17993E9DC47826E5DC3B9DFEC12A4DD59A(L_1, NULL);
		return L_2;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::get_CanGoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_get_CanGoForward_mB797218B15635DE305AAF428B47AF21047E35CB1 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UniWebViewInterface.CanGoForward(listener.Name); }
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = UniWebViewInterface_CanGoForward_m1461133C0AEC7D32E994FD95642826341FD02627(L_1, NULL);
		return L_2;
	}
}
// System.Void Refsdkfopdskgdwqueq::GoBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_GoBack_m0F5AEDA8236F523C606D54ECBB89199053EC2995 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.GoBack(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoBack_m8BFB6B50A679554881753E824131ACC1558DE59E(L_1, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::GoForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_GoForward_m67D7F6C5DA6828ACE97561B75F815288B4E737F1 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.GoForward(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoForward_m7515B07542F0A59DE5B84F677CC09B1511CD9E9B(L_1, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetOpenLinksInExternalBrowser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetOpenLinksInExternalBrowser_mE884BF56742D205BD181F992DAF5D595E88AEA67 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetOpenLinksInExternalBrowser(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetOpenLinksInExternalBrowser_m0F66F68E4AD1A6C6AD2D549A17685B2ACC652C23(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::M(System.Boolean,MendGrom,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_M_m2235893E95EA7AD20647131F211C2110DFDABAED (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	{
		// return _Show(fade, edge, duration, false, completionHandler);
		bool L_0 = ___0_fade;
		int32_t L_1 = ___1_edge;
		float L_2 = ___2_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_completionHandler;
		bool L_4;
		L_4 = Refsdkfopdskgdwqueq__Show_m17A72C61E63BC0772FDD9595A5CDB0B8B08C79A5(__this, L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::_Show(System.Boolean,MendGrom,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq__Show_m17A72C61E63BC0772FDD9595A5CDB0B8B08C79A5 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// var showStarted = UniWebViewInterface.Show(listener.Name, fade, (int)edge, duration, useAsync, identifier);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		bool L_4 = ___0_fade;
		int32_t L_5 = ___1_edge;
		float L_6 = ___2_duration;
		bool L_7 = ___3_useAsync;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = UniWebViewInterface_Show_m553D847019728F689F4F7C79B381B73112601C04(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// if (showStarted && completionHandler != null)
		bool L_10 = L_9;
		G_B1_0 = L_10;
		if (!L_10)
		{
			G_B8_0 = L_10;
			goto IL_0054;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_completionHandler;
		G_B2_0 = G_B1_0;
		if (!L_11)
		{
			G_B8_0 = G_B1_0;
			goto IL_0054;
		}
	}
	{
		// var hasAnimation = (fade || edge != MendGrom.None);
		bool L_12 = ___0_fade;
		G_B3_0 = G_B2_0;
		if (L_12)
		{
			G_B4_0 = G_B2_0;
			goto IL_003a;
		}
	}
	{
		int32_t L_13 = ___1_edge;
		G_B5_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		// if (hasAnimation)
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004d;
		}
	}
	{
		// n_.Add(identifier, completionHandler);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_14 = __this->___n__25;
		String_t* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___4_completionHandler;
		NullCheck(L_14);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_14, L_15, L_16, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0054;
	}

IL_004d:
	{
		// completionHandler();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___4_completionHandler;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
		G_B8_0 = G_B7_0;
	}

IL_0054:
	{
		// if (showStarted && useToolbar)
		bool L_18 = G_B8_0;
		G_B9_0 = L_18;
		if (!L_18)
		{
			G_B11_0 = L_18;
			goto IL_0078;
		}
	}
	{
		bool L_19 = __this->___useToolbar_23;
		G_B10_0 = G_B9_0;
		if (!L_19)
		{
			G_B11_0 = G_B9_0;
			goto IL_0078;
		}
	}
	{
		// var top = (toolbarPosition == Hfdfgeiq.Top);
		int32_t L_20 = __this->___toolbarPosition_24;
		V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		// SetShowToolbar(true, false, top, fullScreen);
		bool L_21 = V_2;
		bool L_22 = __this->___fullScreen_22;
		Refsdkfopdskgdwqueq_SetShowToolbar_m9D938F2AAD8236EA2D15D15BE60C47C0A99F6C00(__this, (bool)1, (bool)0, L_21, L_22, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0078:
	{
		// return showStarted;
		return G_B11_0;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::Hide(System.Boolean,MendGrom,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_Hide_m5D1690651861465616165488C1415FCEE4D6AC3D (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	{
		// return _Hide(fade, edge, duration, false, completionHandler);
		bool L_0 = ___0_fade;
		int32_t L_1 = ___1_edge;
		float L_2 = ___2_duration;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___3_completionHandler;
		bool L_4;
		L_4 = Refsdkfopdskgdwqueq__Hide_m397161DBF5DDD9B9F3877A4386A929DD9CF8E6D8(__this, L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::_Hide(System.Boolean,MendGrom,System.Single,System.Boolean,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq__Hide_m397161DBF5DDD9B9F3877A4386A929DD9CF8E6D8 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fade, int32_t ___1_edge, float ___2_duration, bool ___3_useAsync, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___4_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// var hideStarted = UniWebViewInterface.Hide(listener.Name, fade, (int)edge, duration, useAsync, identifier);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		bool L_4 = ___0_fade;
		int32_t L_5 = ___1_edge;
		float L_6 = ___2_duration;
		bool L_7 = ___3_useAsync;
		String_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = UniWebViewInterface_Hide_m5AB5929F66AAC5EF598DAD25C896A3EB846FDACE(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// if (hideStarted && completionHandler != null)
		bool L_10 = L_9;
		G_B1_0 = L_10;
		if (!L_10)
		{
			G_B8_0 = L_10;
			goto IL_0054;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___4_completionHandler;
		G_B2_0 = G_B1_0;
		if (!L_11)
		{
			G_B8_0 = G_B1_0;
			goto IL_0054;
		}
	}
	{
		// var hasAnimation = (fade || edge != MendGrom.None);
		bool L_12 = ___0_fade;
		G_B3_0 = G_B2_0;
		if (L_12)
		{
			G_B4_0 = G_B2_0;
			goto IL_003a;
		}
	}
	{
		int32_t L_13 = ___1_edge;
		G_B5_0 = ((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		// if (hasAnimation)
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004d;
		}
	}
	{
		// n_.Add(identifier, completionHandler);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_14 = __this->___n__25;
		String_t* L_15 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ___4_completionHandler;
		NullCheck(L_14);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_14, L_15, L_16, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0054;
	}

IL_004d:
	{
		// completionHandler();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___4_completionHandler;
		NullCheck(L_17);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
		G_B8_0 = G_B7_0;
	}

IL_0054:
	{
		// if (hideStarted && useToolbar)
		bool L_18 = G_B8_0;
		G_B9_0 = L_18;
		if (!L_18)
		{
			G_B11_0 = L_18;
			goto IL_0078;
		}
	}
	{
		bool L_19 = __this->___useToolbar_23;
		G_B10_0 = G_B9_0;
		if (!L_19)
		{
			G_B11_0 = G_B9_0;
			goto IL_0078;
		}
	}
	{
		// var top = (toolbarPosition == Hfdfgeiq.Top);
		int32_t L_20 = __this->___toolbarPosition_24;
		V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		// SetShowToolbar(false, false, top, fullScreen);
		bool L_21 = V_2;
		bool L_22 = __this->___fullScreen_22;
		Refsdkfopdskgdwqueq_SetShowToolbar_m9D938F2AAD8236EA2D15D15BE60C47C0A99F6C00(__this, (bool)0, (bool)0, L_21, L_22, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0078:
	{
		// return hideStarted;
		return G_B11_0;
	}
}
// System.Boolean Refsdkfopdskgdwqueq::AnimateTo(UnityEngine.Rect,System.Single,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Refsdkfopdskgdwqueq_AnimateTo_mE49599CC0441F59826FF4C26A92AB3B610455674 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_frame, float ___1_duration, float ___2_delay, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// var animationStarted = UniWebViewInterface.AnimateTo(listener.Name,
		//     (int)frame.x, (int)frame.y, (int)frame.width, (int)frame.height, duration, delay, identifier);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		float L_4;
		L_4 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_frame), NULL);
		float L_5;
		L_5 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_frame), NULL);
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_frame), NULL);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_frame), NULL);
		float L_8 = ___1_duration;
		float L_9 = ___2_delay;
		String_t* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = UniWebViewInterface_AnimateTo_m413573276E43A5E4DB1552ADA1E52F1283CEEA12(L_3, il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5), il2cpp_codegen_cast_double_to_int<int32_t>(L_6), il2cpp_codegen_cast_double_to_int<int32_t>(L_7), L_8, L_9, L_10, NULL);
		// if (animationStarted)
		bool L_12 = L_11;
		G_B1_0 = L_12;
		if (!L_12)
		{
			G_B3_0 = L_12;
			goto IL_0063;
		}
	}
	{
		// this.y = frame;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = ___0_frame;
		__this->___y_27 = L_13;
		// if (completionHandler != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___3_completionHandler;
		G_B2_0 = G_B1_0;
		if (!L_14)
		{
			G_B3_0 = G_B1_0;
			goto IL_0063;
		}
	}
	{
		// n_.Add(identifier, completionHandler);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_15 = __this->___n__25;
		String_t* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = ___3_completionHandler;
		NullCheck(L_15);
		Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98(L_15, L_16, L_17, Dictionary_2_Add_m42116195150ED3A5F1B337CEDF25923016ADBC98_RuntimeMethod_var);
		G_B3_0 = G_B2_0;
	}

IL_0063:
	{
		// return animationStarted;
		return G_B3_0;
	}
}
// System.Void Refsdkfopdskgdwqueq::AddJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_AddJavaScript_mFADFF7A220BFF27252067A7E001ABB55F381758E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// UniWebViewInterface.AddJavaScript(listener.Name, jsString, identifier);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		String_t* L_4 = ___0_jsString;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddJavaScript_m157E0591488F45B29AADB19FA282BF6B71521740(L_3, L_4, L_5, NULL);
		// if (completionHandler != null)
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_6 = ___1_completionHandler;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// p_.Add(identifier, completionHandler);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___p__26;
		String_t* L_8 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_9 = ___1_completionHandler;
		NullCheck(L_7);
		Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9(L_7, L_8, L_9, Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_EvaluateJavaScript_mA00E1A6913F6A04A80D8B72C6BEB8EB9A00FF114 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_jsString, Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* ___1_completionHandler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var identifier = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_1), NULL);
		V_0 = L_1;
		// UniWebViewInterface.EvaluateJavaScript(listener.Name, jsString, identifier);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		String_t* L_4 = ___0_jsString;
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_EvaluateJavaScript_m027521BB576801D9EA67E9E55065FA52200DADA4(L_3, L_4, L_5, NULL);
		// if (completionHandler != null)
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_6 = ___1_completionHandler;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// p_.Add(identifier, completionHandler);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___p__26;
		String_t* L_8 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_9 = ___1_completionHandler;
		NullCheck(L_7);
		Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9(L_7, L_8, L_9, Dictionary_2_Add_m2754B6F70B431C7C18371E4A7CE32C31BF12FFF9_RuntimeMethod_var);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::AddUrlScheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_AddUrlScheme_m8BC1A1CCD0079309495B1B2F5DB1BA040B13CD1E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63640ECC5622F470E8646963A0C44E3C867DBD1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8470149B0407466650F06766939AC3FAF9A75DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (v == null)
		String_t* L_0 = ___0_v;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("hdfgdfgdfgdfdglk.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_1;
		L_1 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_1);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_1, _stringLiteralA8470149B0407466650F06766939AC3FAF9A75DC, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (v.Contains("://"))
		String_t* L_2 = ___0_v;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("KSDfksdofsdof");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_4;
		L_4 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_4);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_4, _stringLiteral63640ECC5622F470E8646963A0C44E3C867DBD1B, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.AddUrlScheme(listener.Name, v);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_5, NULL);
		String_t* L_7 = ___0_v;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddUrlScheme_m2A6954D231F428A3677F51C9D41C816FA17F7C49(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemoveUrlScheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemoveUrlScheme_m6FEEF78AC8500B38CE8255B138ABBD5D9F8D01BD (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_scheme, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF631279E75EEAC56F1CF12AF5DF7D851E743117E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87DAB5CB43A5864DA1E61ADF16C8269A6B56FCB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scheme == null)
		String_t* L_0 = ___0_scheme;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("DFKSDfjsldfs.");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_1;
		L_1 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_1);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_1, _stringLiteralF631279E75EEAC56F1CF12AF5DF7D851E743117E, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (scheme.Contains("://"))
		String_t* L_2 = ___0_scheme;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("KEKERKWRKWEKRweergefgd");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_4;
		L_4 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_4);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_4, _stringLiteralF87DAB5CB43A5864DA1E61ADF16C8269A6B56FCB, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.RemoveUrlScheme(listener.Name, scheme);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_5, NULL);
		String_t* L_7 = ___0_scheme;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveUrlScheme_mD957A721214715AF1BDA5C8CDC5E28BE5C6A7F4B(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::AddSslExceptionDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_AddSslExceptionDomain_mC43EAC388DE7FDD2441B377C61CE68F300F87B1E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A38FB2700085B9154A42E8C6B30D012B08A2B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985A122C449B71C67A7F520F29E01A4E498BA359);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (h == null)
		String_t* L_0 = ___0_h;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("fsdfsfdsdf");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_1;
		L_1 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_1);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_1, _stringLiteral2A38FB2700085B9154A42E8C6B30D012B08A2B8C, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (h.Contains("://"))
		String_t* L_2 = ___0_h;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("sfsdfsdfsdfsdf");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_4;
		L_4 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_4);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_4, _stringLiteral985A122C449B71C67A7F520F29E01A4E498BA359, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.AddSslExceptionDomain(listener.Name, h);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_5, NULL);
		String_t* L_7 = ___0_h;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddSslExceptionDomain_m8FE98CFB237F9E4BC9DB3DCB0EE9117AE2D5233C(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemoveSslExceptionDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemoveSslExceptionDomain_m626F5F0B85C534BCD21767140F0D21021CCFD484 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C996CCB2622D400C432C4F76395CEF7E782B58C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB643B65A6594ED526129C75845CA1B2571532D7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (i == null)
		String_t* L_0 = ___0_i;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("hjkhjghjgfhfgcvbn");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_1;
		L_1 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_1);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_1, _stringLiteral8C996CCB2622D400C432C4F76395CEF7E782B58C, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// if (i.Contains("://"))
		String_t* L_2 = ___0_i;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("fgnfghfghfghrhrthrt");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_4;
		L_4 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_4);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_4, _stringLiteralB643B65A6594ED526129C75845CA1B2571532D7B, NULL);
		// return;
		return;
	}

IL_0030:
	{
		// UniWebViewInterface.RemoveSslExceptionDomain(listener.Name, i);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_5 = __this->___listener_18;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_5, NULL);
		String_t* L_7 = ___0_i;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveSslExceptionDomain_m278FF9C874E87F702E2EE8E480AB8D5D31BD811C(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetHeaderField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetHeaderField_m4597A5A3E172096E2E9EE50351D5FD732C2AD347 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral404882E89AE1D7D5D95ECFB5E4BF8ADE10C810CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (key == null)
		String_t* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("fsdfdsgfghfghjghmbyrtrte");
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_1;
		L_1 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		NullCheck(L_1);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_1, _stringLiteral404882E89AE1D7D5D95ECFB5E4BF8ADE10C810CC, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// UniWebViewInterface.SetHeaderField(listener.Name, key, value);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		String_t* L_4 = ___0_key;
		String_t* L_5 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHeaderField_m5EE71BC48E9AE2471780A3AA938CC49B14E75B41(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetUserAgent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetUserAgent_m40EF6FBD41A2F5C3DE3C58C080F311A44B444482 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_agent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUserAgent(listener.Name, agent);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_agent;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserAgent_m9CA3014C1C272A8A3E0D3CB880F18628A11151B3(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.String Refsdkfopdskgdwqueq::GetUserAgent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Refsdkfopdskgdwqueq_GetUserAgent_m516604FB2097B3AD8693D3C4ED12D0712B24FF63 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetUserAgent(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = UniWebViewInterface_GetUserAgent_mA7EFD9E85946106487273961667A23A5C1EEAD94(L_1, NULL);
		return L_2;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetContentInsetAdjustmentBehavior(Gsddfsdfsdsffsdfs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetContentInsetAdjustmentBehavior_mD56DA638F56088931370C8E0CF08418CD52E0896 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, int32_t ___0_behavior, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowAutoPlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowAutoPlay_m510298933AF9DCE2E45F306A59C8515E133FCD9E (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowAutoPlay(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowAutoPlay_mDB91254D5C2DF58A1907D8AED24B9D53712C46E2(L_0, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowInlinePlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowInlinePlay_m9401153878F1A57DD524998CD9B6AC215FDCD792 (bool ___0_flag, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowFileAccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowFileAccess_mA076ED6A2E66D3C9FF399E219F0CED0E9CF76BAA (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowFileAccess(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccess_mDA2098389AC5EBF43FE0B806F4BAC038AD5BD3E2(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowFileAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowFileAccessFromFileURLs_mDEFCD49C4BD7BD5912A9A30E061C8A393D71EEC1 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowFileAccessFromFileURLs(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccessFromFileURLs_m00AA0BA57A11C231F7BC9836101FF5597AD6640C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowUniversalAccessFromFileURLs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowUniversalAccessFromFileURLs_mE0D0355BD5103EE053E7E0A15196A933F8988529 (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowUniversalAccessFromFileURLs(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowUniversalAccessFromFileURLs_mFA222A5C30FF032C8E1367F75EC605650D130156(L_0, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetEnableKeyboardAvoidance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetEnableKeyboardAvoidance_mAF58CAFE883739ACBC93B21941502BBCACC2212F (bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetEnableKeyboardAvoidance(flag);
		bool L_0 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetEnableKeyboardAvoidance_mD6B9866731E8A9FE608A798425DBA42B0E9A48CE(L_0, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetJavaScriptEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetJavaScriptEnabled_m36C5989D5E6AE6756373A688320518C2999F47C5 (bool ___0_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetJavaScriptEnabled(h);
		bool L_0 = ___0_h;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetJavaScriptEnabled_mA437D5FA34B128F3BCAC49BC49193E42AB3E4EE1(L_0, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowJavaScriptOpenWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowJavaScriptOpenWindow_m2FB568FD1139A9CF64B949F77D60BB4F792CD92B (bool ___0_uy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowJavaScriptOpenWindow(uy);
		bool L_0 = ___0_uy;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowJavaScriptOpenWindow_mEEB7A0ECC311A2C3DF7FE3D4E3DD64876860DE24(L_0, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::CleanCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_CleanCache_m8D57F68655000BC8EC3A7631197AF9C5B49D8085 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.CleanCache(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CleanCache_m268E590335183857A83A2C03734F13BA8FB1DE96(L_1, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::ClearCookies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_ClearCookies_mECB91ABC0BBA54216A75C480A976F08E3B9AFBF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ClearCookies();
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearCookies_mF3E894123E40DE1361663809673386D015FCFEC3(NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetCookie_m25CF4227BBBF260FE99F16FAC8B9020A7736DB77 (String_t* ___0_url, String_t* ___1_cookie, bool ___2_absd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetCookie(url, cookie, absd);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_cookie;
		bool L_2 = ___2_absd;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCookie_m5B1303AA17D400FB0170F656DDB9793F249741DD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.String Refsdkfopdskgdwqueq::GetCookie(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Refsdkfopdskgdwqueq_GetCookie_m6FB7662ED54D31D69EB6CF8177F6470F3365ACC0 (String_t* ___0_url, String_t* ___1_key, bool ___2_skipEncoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UniWebViewInterface.GetCookie(url, key, skipEncoding);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_skipEncoding;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = UniWebViewInterface_GetCookie_m174641DD922771E679F0D6E1C0522B9A5BD1A9EE(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemoveCookies(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemoveCookies_m888D956F3B274AE0E55F06579BDF13AD34EE7F3E (String_t* ___0_h, bool ___1_hg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemoveCookies(h, hg);
		String_t* L_0 = ___0_h;
		bool L_1 = ___1_hg;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookies_mF6D699F5113F011455EEE049ED3FBF74748B1CDE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemoveCooke(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemoveCooke_m88C450AD6EE7A04E392ED3EAA8E7F89AB7D96E88 (String_t* ___0_url, String_t* ___1_key, bool ___2_uy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemoveCookie(url, key, uy);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_key;
		bool L_2 = ___2_uy;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveCookie_mB47A4A575CE544E77874F2D06956266114EC438F(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::ClearHttpAuthUsernamePassword(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_ClearHttpAuthUsernamePassword_mA01A929441C5DD8E14D7A94634F1855EAA1DA339 (String_t* ___0_kj, String_t* ___1_oi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ClearHttpAuthUsernamePassword(kj, oi);
		String_t* L_0 = ___0_kj;
		String_t* L_1 = ___1_oi;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearHttpAuthUsernamePassword_mAF13DAC71BC90F2784E7AF43A3F136647DEEB34B(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.Color Refsdkfopdskgdwqueq::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Refsdkfopdskgdwqueq_get_R_mB6741D2C937658B565CF0407C4712F5071405678 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	{
		// get { return r; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___r_31;
		return L_0;
	}
}
// System.Void Refsdkfopdskgdwqueq::set_R(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_set_R_mA3AF898B9DCDC8F29D08A45BF3D2D0620337E0A1 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// r = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___r_31 = L_0;
		// UniWebViewInterface.SetBackgroundColor(listener.Name, value.r, value.g, value.b, value.a);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_1 = __this->___listener_18;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		float L_4 = L_3.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_value;
		float L_6 = L_5.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_value;
		float L_8 = L_7.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_value;
		float L_10 = L_9.___a_3;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBackgroundColor_m7F638D4057B21CE30389D2D104196ACDEE0DCA1A(L_2, L_4, L_6, L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Single Refsdkfopdskgdwqueq::get_Alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Refsdkfopdskgdwqueq_get_Alpha_m218181C73D53DC9CF19DF3C91996DABD96B62220 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return UniWebViewInterface.GetWebViewAlpha(listener.Name); }
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = UniWebViewInterface_GetWebViewAlpha_m408A04169B9E1ACD0BE43D3B96E675AC980A97F6(L_1, NULL);
		return L_2;
	}
}
// System.Void Refsdkfopdskgdwqueq::set_Alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_set_Alpha_m10815A4304F2F97CD4AC97950E85756CDC24EAEE (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { UniWebViewInterface.SetWebViewAlpha(listener.Name, value); }
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		float L_2 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebViewAlpha_mD7E804965C2B5C9D503CA7B2BE6FC39C22C6422A(L_1, L_2, NULL);
		// set { UniWebViewInterface.SetWebViewAlpha(listener.Name, value); }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetShowSpinnerWhileLoading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetShowSpinnerWhileLoading_mB829DA32F2E9C52016076A526DBF6688CA59168A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetShowSpinnerWhileLoading(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowSpinnerWhileLoading_m87A1A260D02881962518D7A23F6DE82FD8E93E74(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetSpinnerText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetSpinnerText_m9BABF610B0603E3DE8B2F1A3286E45E4E9556D53 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetSpinnerText(listener.Name, text);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSpinnerText_mF808B322A4F8EBC7F949C67D60775ACA8E78CED6(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetHorizontalScrollBarEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetHorizontalScrollBarEnabled_m8B9FB78A70D451FFCC2C7AFA0BE43689A703260F (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetHorizontalScrollBarEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHorizontalScrollBarEnabled_m3FB0E27A1E68BDBBCB8C575AAC2ECA0174A9168B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetVerticalScrollBarEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetVerticalScrollBarEnabled_mCEB75A24E0E53107D7871DD98FAF6011D0D7A8DF (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetVerticalScrollBarEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetVerticalScrollBarEnabled_m5E4E8B06DA5CCCDC2B2C55A324A838040B3A4C22(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetBouncesEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetBouncesEnabled_m329AD30D4DA12B281A28D1AAEB45930B3EA41528 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetBouncesEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBouncesEnabled_m5BB33343416B23097E6DE23565BEE79D5109051C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetZoomEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetZoomEnabled_m82175F2090AA22BA7AA64CBC7D7AC1E93564E129 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetZoomEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetZoomEnabled_mB3E75A4E2E0C8394F350483460C001A8CD1828C7(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::AddPermissionTrustDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_AddPermissionTrustDomain_mB373BF39F6D1EA61AC05F7AA004AE8CEA03243D6 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.AddPermissionTrustDomain(listener.Name, domain);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddPermissionTrustDomain_mEB9C21E5A179925F0C536DBE837761AF28766075(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemovePermissionTrustDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemovePermissionTrustDomain_m210EDC2AA37653AF6681A4C0AFBC27110694421F (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_domain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.RemovePermissionTrustDomain(listener.Name, domain);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_domain;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemovePermissionTrustDomain_m0EBFFD7F79AD89A2CA27E57092137E4CB328B1EC(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::Kfvxcvxcvxfdsfs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Kfvxcvxcvxfdsfs_mC4D84AABE28B83AA4733EB9B0FA10230520878F4 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		// this.bgbsd = enabled;
		bool L_0 = ___0_enabled;
		__this->___bgbsd_30 = L_0;
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetUseWideViewPort(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetUseWideViewPort_m7C84A75E548EA25E9D8E4B2247D77AB126D1F02D (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUseWideViewPort(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUseWideViewPort_m47489E0088289ECA21D0CA5CA5CE0840F88CC6CB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetLoadWithOverviewMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetLoadWithOverviewMode_mBB954E71506A56CEBF10F68DA0E109745FD33106 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetLoadWithOverviewMode(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLoadWithOverviewMode_m75E8005ED6FA15DCDAF5467988D2D0C47BAB0729(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetShowToolbar_m9D938F2AAD8236EA2D15D15BE60C47C0A99F6C00 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_show, bool ___1_animated, bool ___2_onTop, bool ___3_adjustInset, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetToolbarDoneButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetToolbarDoneButtonText_m7844A65AE499CAF53D66F2DC49598DF546DF03D3 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetToolbarGoBackButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetToolbarGoBackButtonText_m48F0EDC90E07FF3661B6694EACEC391A9B0FE7D8 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetToolbarGoForwardButtonText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetToolbarGoForwardButtonText_m1155C3736A3351985605DC98AE1EFA6B5AC24E06 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetToolbarTintColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetToolbarTintColor_m97111C9EADAFF27C219CD5F2CB3139918BC60007 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetToolbarTextColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetToolbarTextColor_m52A2E06C5B6487C77CF48B2309C415713DC4BD6B (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetShowToolbarNavigationButtons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetShowToolbarNavigationButtons_mBFC4C95F3B22804FAA5A089FAEC1351869B99E80 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_show, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetUserInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetUserInteractionEnabled_m933653D7DEFE3C6C85894823CF22A574A0257CB4 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetUserInteractionEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserInteractionEnabled_mCFBAE387A262266014BDCE48BD34653D06F0F179(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetTransparencyClickingThroughEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetTransparencyClickingThroughEnabled_m0ADFAA97CFE90D788F729E28E1E7372E8A98B62A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetTransparencyClickingThroughEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetTransparencyClickingThroughEnabled_mCA24436C0CEB09A85FD950D3D6F2CF6E24C49AAB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetWebContentsDebuggingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetWebContentsDebuggingEnabled_m0C43B5465A840FB682873A2510AC825C732FF984 (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetWebContentsDebuggingEnabled(enabled);
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebContentsDebuggingEnabled_mB89818D831425C081C35732663BDC82B8FE1299E(L_0, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetWindowUserResizeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetWindowUserResizeEnabled_m6167429F90DE226B856FFEABD6958229F9102BCF (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::G(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_G_m7215B182C57BB2F4899F7601CAEA7BB52A43B228 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass151_0_U3CGU3Eb__0_m41AE61BC8ABA40392F9A48711C9E65E2A73AFEAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* L_0 = (U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass151_0__ctor_m6AFFAA5D7E71A15C912EF61B6765F95D5719FE85(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* L_1 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___0_handler;
		NullCheck(L_1);
		L_1->___handler_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___handler_0), (void*)L_2);
		// EvaluateJavaScript("document.documentElement.outerHTML", payload =>
		// {
		//     if (handler != null)
		//     {
		//         handler(payload.data);
		//         var sdfsdfwerwer = "gdfgdfghtrtyutyj";
		// 
		//     }
		// });
		U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* L_3 = V_0;
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_4 = (Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C*)il2cpp_codegen_object_new(Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mFF6683FB50C114EC779ECC0F9E3F78A580F97EA7(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass151_0_U3CGU3Eb__0_m41AE61BC8ABA40392F9A48711C9E65E2A73AFEAC_RuntimeMethod_var), NULL);
		Refsdkfopdskgdwqueq_EvaluateJavaScript_mA00E1A6913F6A04A80D8B72C6BEB8EB9A00FF114(__this, _stringLiteral7174781ACA1FA077C93755E54C155E9C90186CFC, L_4, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowBackForwardNavigationGestures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowBackForwardNavigationGestures_m7A975164C35F94C8E5F91BBAC82FDC7A086545D4 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowHTTPAuthPopUpWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowHTTPAuthPopUpWindow_m35F3ED68808396FE93BB319172BEBFE881077221 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_flag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetAllowHTTPAuthPopUpWindow(listener.Name, flag);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_flag;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_mD6E3D7351F9977DFC2A131ABD34656BE5E333496(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetCalloutEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetCalloutEnabled_m789FA6A5436CDEA0CAACEE485A91AA30E2CE1E73 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetCalloutEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCalloutEnabled_m7E1A340CFBE84E75804A4A351D7F27DB6A356AD3(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetSupportMultipleWindows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetSupportMultipleWindows_m72C5B9F4AB0CC9277A95B6F0EF99A952D68FB8FA (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetSupportMultipleWindows(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSupportMultipleWindows_m521B45A2CAC7D83C0482BB365454E991A6C8573B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetDefaultFontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetDefaultFontSize_m6A6816BBBCC5280DC7A097B5577A6E1F6C557599 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetDefaultFontSize(listener.Name, size);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		int32_t L_2 = ___0_size;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDefaultFontSize_mB805E508F0BA6B9075B6B3C231A80C7A3DE2B24B(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetTextZoom(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetTextZoom_mDDD7262F35F6F0947C142111A9AA7E9AA586709A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, int32_t ___0_textZoom, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetTextZoom(listener.Name, textZoom);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		int32_t L_2 = ___0_textZoom;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetTextZoom_m419910B15BA5AEBCE6E170B55A2F3DD72DF96E12(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetDragInteractionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetDragInteractionEnabled_m6C2104B33634C7AAC30C66CCD1664C15F0E85D72 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::Print()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_Print_m5C3BD8B24493B259AF043CB94AD541FE3AAF1AC6 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.Print(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Print_m0689A76490307B282F8E62EA4729422161AD40CF(L_1, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::CaptureSnapshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_CaptureSnapshot_m16190A7FBF7783C1F9E34F807187F9B8D349AF07 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.CaptureSnapshot(listener.Name, fileName);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		String_t* L_2 = ___0_fileName;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_CaptureSnapshot_m8DE276F25F9C6720F2A1B030B647BD5D23FD0CDD(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::ScrollTo(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_ScrollTo_m1DD813549D00026CFBB98DAFE4302C16ABE56111 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, int32_t ___0_x, int32_t ___1_y, bool ___2_animated, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.ScrollTo(listener.Name, x, y, animated);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		int32_t L_2 = ___0_x;
		int32_t L_3 = ___1_y;
		bool L_4 = ___2_animated;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_ScrollTo_mBDE75495718EA4A2066F1514BE66EDAA24AE998C(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::AddDownloadURL(System.String,Hkhkhjkfgdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_AddDownloadURL_m3C542F749D13D4A055E01DAD366C06ABC86569E3 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_urlString, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemoveDownloadURL(System.String,Hkhkhjkfgdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemoveDownloadURL_m9507B37E443B7B4FF1894CE3ED222CB02B9DE903 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_urlString, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::AddDownloadMIMEType(System.String,Hkhkhjkfgdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_AddDownloadMIMEType_m79194906C6667A246658AD4B6B62277F76835806 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_MIMEType, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::RemoveDownloadMIMETypes(System.String,Hkhkhjkfgdf)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_RemoveDownloadMIMETypes_m8513D0F1E9932C35469AA3EB7D7FD73F22487DE5 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_MIMEType, int32_t ___1_type, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetAllowUserChooseActionAfterDownloading(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetAllowUserChooseActionAfterDownloading_m1FAA341F4F6C9FDF067D6B37A76D1B25DC94C072 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_allowed, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetDownloadEventForContextMenuEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetDownloadEventForContextMenuEnabled_m84EABA150D3139E87B1AB24CCEDC072A0D422CD2 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UniWebViewInterface.SetDownloadEventForContextMenuEnabled(listener.Name, enabled);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDownloadEventForContextMenuEnabled_m67EE6C45B99ABE4CF3B8E119FC36F06E06E2141F(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_OnDestroy_m8EAA10BC8992D46A37BDF2115D3D7149CB5B161A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Randomness.RemoveListener(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_0 = __this->___listener_18;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39_il2cpp_TypeInfo_var);
		Randomness_RemoveListener_mE8194F958CE9011D3E2BFA86CE922525BAD56B9D(L_1, NULL);
		// UniWebViewInterface.Destroy(listener.Name);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_2 = __this->___listener_18;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Randomness_get_Name_m8C81C3C00AA904F20A1E947851D8807CFB8307C6(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_Destroy_m03F8C9C4B879EB01ED23BEE624D1F3C35E051D0B(L_3, NULL);
		// Destroy(listener.gameObject);
		Randomness_tD7682BEC16CC9F2BE0F24F1548956A396E481A39* L_4 = __this->___listener_18;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnShowTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnShowTransitionFinished_m3EF50043C9C9F17FA39DB06907D9C1517ACA5E41 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		// if (n_.TryGetValue(identifier, out action))
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___n__25;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// n_.Remove(identifier);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___n__25;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnHideTransitionFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnHideTransitionFinished_m7B22B04757D07985177B116BE6A3431103BE4B59 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		// if (n_.TryGetValue(identifier, out action))
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___n__25;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// n_.Remove(identifier);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___n__25;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnAnimateToFinished(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnAnimateToFinished_m93888B77947C8ABA62FBF473521FED52A2A27D49 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_identifier, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	{
		// if (n_.TryGetValue(identifier, out action))
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_0 = __this->___n__25;
		String_t* L_1 = ___0_identifier;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7224FFE7F05B1073C6D82CEA2B163BA93221CF8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// n_.Remove(identifier);
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_4 = __this->___n__25;
		String_t* L_5 = ___0_identifier;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0(L_4, L_5, Dictionary_2_Remove_mDE0498D6EDF22F2837DECE40DBCE1BF03049F5E0_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnAddJavaScriptFinished_mF0BD6A8E3FF84E71AE28C90DFB350789E5FAD088 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var identifier = payload.identifier;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		V_1 = L_1;
		// if (p_.TryGetValue(identifier, out action))
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_2 = __this->___p__26;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// action(payload);
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_5);
		Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline(L_5, L_6, NULL);
		// p_.Remove(identifier);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___p__26;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D(L_7, L_8, Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnEvalJavaScriptFinished_mB517C1C5AA102495590D7F40E82C63070B3DC981 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var identifier = payload.identifier;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_0 = ___0_payload;
		NullCheck(L_0);
		String_t* L_1 = L_0->___identifier_0;
		V_1 = L_1;
		// if (p_.TryGetValue(identifier, out action))
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_2 = __this->___p__26;
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_m701E61A2700281060C2DC1A0A5DD74BA9C40E8E5_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// action(payload);
		Action_1_t4DA2B9DE754BC41C33B52085407C5593413EB93C* L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_payload;
		NullCheck(L_5);
		Action_1_Invoke_m89D3D0FB83AEFEFD39442766C0C4F5A8329D0285_inline(L_5, L_6, NULL);
		// p_.Remove(identifier);
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_7 = __this->___p__26;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D(L_7, L_8, Dictionary_2_Remove_m4F04B00A5F13B78C6081F3F856C1FE6337DEC09D_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnPageFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageFinished_m2A7625D362819DB64B1B9B86903DD0C3EC2DE4EC (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_bc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D843C4566F06ECE30745C8A376EAF45D8FF93C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Youyidas != null)
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_0 = __this->___Youyidas_5;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// int code = -1;
		V_0 = (-1);
		// if (int.TryParse(bc.resultCode, out code))
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_bc;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Youyidas(this, code, bc.data);
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* L_4 = __this->___Youyidas_5;
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_bc;
		NullCheck(L_6);
		String_t* L_7 = L_6->___data_2;
		NullCheck(L_4);
		SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_inline(L_4, __this, L_5, L_7, NULL);
		return;
	}

IL_002d:
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("sdfgdgdfgdfgdfgdfgrerwer " + bc.resultCode);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_8;
		L_8 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_bc;
		NullCheck(L_9);
		String_t* L_10 = L_9->___resultCode_1;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3D843C4566F06ECE30745C8A376EAF45D8FF93C7, L_10, NULL);
		NullCheck(L_8);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_8, L_11, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnPageStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageStarted_mB1D4FA4E41F244812422E9C947BA6F374F68B435 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_fsdfsdfsdf, const RuntimeMethod* method) 
{
	{
		// if (OnPageStarted != null)
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_0 = __this->___OnPageStarted_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPageStarted(this, fsdfsdfsdf);
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* L_1 = __this->___OnPageStarted_4;
		String_t* L_2 = ___0_fsdfsdfsdf;
		NullCheck(L_1);
		Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageErrorReceived_m5EA712C322D494DA40E4FC29DE7FB8C09AF9CB31 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_jg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418218478E990A3D17DFC164A6D02CC3417709AB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (OnPageErrorReceived != null)
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_0 = __this->___OnPageErrorReceived_6;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		// int code = -1;
		V_0 = (-1);
		// if (int.TryParse(jg.resultCode, out code))
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_jg;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// OnPageErrorReceived(this, code, jg.data);
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* L_4 = __this->___OnPageErrorReceived_6;
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_6 = ___0_jg;
		NullCheck(L_6);
		String_t* L_7 = L_6->___data_2;
		NullCheck(L_4);
		Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_inline(L_4, __this, L_5, L_7, NULL);
		return;
	}

IL_002d:
	{
		// SDfsdfsdfsvxc.Instance.EightyGreat("ASDAdsdfddbvcb " + jg.resultCode);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_8;
		L_8 = SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A(NULL);
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_jg;
		NullCheck(L_9);
		String_t* L_10 = L_9->___resultCode_1;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral418218478E990A3D17DFC164A6D02CC3417709AB, L_10, NULL);
		NullCheck(L_8);
		SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8(L_8, L_11, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnPageProgressChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnPageProgressChanged_mD7D46B2E1153A0D7F8183065D28A0C192D98896A (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// if (OnPageProgressChanged != null)
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_0 = __this->___OnPageProgressChanged_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// OnPageProgressChanged(this, progress);
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* L_1 = __this->___OnPageProgressChanged_7;
		float L_2 = ___0_progress;
		NullCheck(L_1);
		SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnMessageReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnMessageReceived_mCF3AA22C6BE2DF74A113B870A539EE2979F53071 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_result, const RuntimeMethod* method) 
{
	Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Hdgfgfsdgdfgdfg != null)
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_0 = __this->___Hdgfgfsdgdfgdfg_8;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// var message = new Gfrrasdu(result);
		String_t* L_1 = ___0_result;
		Gfrrasdu__ctor_m32D9E56F7C883FBF1E639301B4A8F2C437C2669B((&V_0), L_1, NULL);
		// Hdgfgfsdgdfgdfg(this, message);
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* L_2 = __this->___Hdgfgfsdgdfgdfg_8;
		Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 L_3 = V_0;
		NullCheck(L_2);
		SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_inline(L_2, __this, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnShouldClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnShouldClose_m38C39D38B3DE41871E1C20651658151DC1D6249E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Jhfdhdgdfdgd != null)
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_0 = __this->___Jhfdhdgdfdgd_9;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// var h = Jhfdhdgdfdgd(this);
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* L_1 = __this->___Jhfdhdgdfdgd_9;
		NullCheck(L_1);
		bool L_2;
		L_2 = Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_inline(L_1, __this, NULL);
		// if (h)
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		return;
	}

IL_001d:
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnWebContentProcessDidTerminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnWebContentProcessDidTerminate_mD35DC123F358BC1D2F84D748C62DE9EA252F6548 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	{
		// if (Iyreyertersdfds != null)
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_0 = __this->___Iyreyertersdfds_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Iyreyertersdfds(this);
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* L_1 = __this->___Iyreyertersdfds_11;
		NullCheck(L_1);
		Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_inline(L_1, __this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnMultipleWindowOpened(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnMultipleWindowOpened_m39C46A2FE868CD42C7084B25EAD0CC58BAB2FD59 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_gdfgdfgdf, const RuntimeMethod* method) 
{
	{
		// if (Trqweqweq != null)
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_0 = __this->___Trqweqweq_15;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Trqweqweq(this, gdfgdfgdf);
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* L_1 = __this->___Trqweqweq_15;
		String_t* L_2 = ___0_gdfgdfgdf;
		NullCheck(L_1);
		Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnMultipleWindowClosed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnMultipleWindowClosed_m7A428077E460A9C540354FE15DED83FEC0030636 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, String_t* ___0_ggdfdgdf, const RuntimeMethod* method) 
{
	{
		// if (Hfsdfsdfs != null)
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_0 = __this->___Hfsdfsdfs_16;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Hfsdfsdfs(this, ggdfdgdf);
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* L_1 = __this->___Hfsdfsdfs_16;
		String_t* L_2 = ___0_ggdfdgdf;
		NullCheck(L_1);
		Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnFileDownloadStarted(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnFileDownloadStarted_m6522041496ABBCF4E9107D0A9A9E5145F7D938AD (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_fsfdsfsdf, const RuntimeMethod* method) 
{
	{
		// if (Rwqewrwerwsdfs != null)
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_0 = __this->___Rwqewrwerwsdfs_12;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Rwqewrwerwsdfs(this, fsfdsfsdf.identifier, fsfdsfsdf.data);
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* L_1 = __this->___Rwqewrwerwsdfs_12;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_2 = ___0_fsfdsfsdf;
		NullCheck(L_2);
		String_t* L_3 = L_2->___identifier_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_4 = ___0_fsfdsfsdf;
		NullCheck(L_4);
		String_t* L_5 = L_4->___data_2;
		NullCheck(L_1);
		EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_inline(L_1, __this, L_3, L_5, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnFileDownloadFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnFileDownloadFinished_m73EBD8AEC728614D9B021684BEAFBB4FF84A1B06 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_fsfdsdfsdfs, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (OnFileDownloadFinished != null)
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_0 = __this->___OnFileDownloadFinished_13;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// int gfgdgfdfgdfg = int.TryParse(fsfdsdfsdfs.resultCode, out gfgdgfdfgdfg) ? gfgdgfdfgdfg : -1;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_fsfdsdfsdfs;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		// OnFileDownloadFinished(this, gfgdgfdfgdfg, fsfdsdfsdfs.identifier, fsfdsdfsdfs.data);
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* L_5 = __this->___OnFileDownloadFinished_13;
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_7 = ___0_fsfdsdfsdfs;
		NullCheck(L_7);
		String_t* L_8 = L_7->___identifier_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_9 = ___0_fsfdsdfsdfs;
		NullCheck(L_9);
		String_t* L_10 = L_9->___data_2;
		NullCheck(L_5);
		Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_inline(L_5, __this, L_6, L_8, L_10, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::InternalOnCaptureSnapshotFinished(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_InternalOnCaptureSnapshotFinished_mA5A7E9B32B5698F75269AF786CC116F841F2911B (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_fdsfsdfsdfsdf, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (Ddadasdasdas != null)
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_0 = __this->___Ddadasdasdas_14;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// int errorCode = int.TryParse(fdsfsdfsdfsdf.resultCode, out errorCode) ? errorCode : -1;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_1 = ___0_fdsfsdfsdfsdf;
		NullCheck(L_1);
		String_t* L_2 = L_1->___resultCode_1;
		bool L_3;
		L_3 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_001b;
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		G_B4_0 = L_4;
	}

IL_001b:
	{
		V_0 = G_B4_0;
		// Ddadasdasdas(this, errorCode, fdsfsdfsdfsdf.data);
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* L_5 = __this->___Ddadasdasdas_14;
		int32_t L_6 = V_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_7 = ___0_fdsfsdfsdfsdf;
		NullCheck(L_7);
		String_t* L_8 = L_7->___data_2;
		NullCheck(L_5);
		Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_inline(L_5, __this, L_6, L_8, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::SetImmersiveModeEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_SetImmersiveModeEnabled_mF3E98E9D3C2FE0B00BD04E1A2DDB8FD63E15F82D (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, bool ___0_fdsfsdfsfd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08633C2377AF3DFC94C5CB3D03DC2D64ED6FAF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(
		//     "SDfjosdfisofdjeifowejofwer"
		// );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral08633C2377AF3DFC94C5CB3D03DC2D64ED6FAF79, NULL);
		// }
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::add_OnKeyCodeReceived(Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_add_OnKeyCodeReceived_m5B74FB5D8E80314A65DF9371C04D77465651965E (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* V_0 = NULL;
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* V_1 = NULL;
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* V_2 = NULL;
	{
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_0 = __this->___OnKeyCodeReceived_32;
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_2 = V_1;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D** L_5 = (&__this->___OnKeyCodeReceived_32);
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_6 = V_2;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_7 = V_1;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*>(L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_9 = V_0;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::remove_OnKeyCodeReceived(Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq_remove_OnKeyCodeReceived_mCB0EEE0566D2A5BBABAE4A8024C6E80423F63643 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* V_0 = NULL;
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* V_1 = NULL;
	KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* V_2 = NULL;
	{
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_0 = __this->___OnKeyCodeReceived_32;
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_2 = V_1;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D** L_5 = (&__this->___OnKeyCodeReceived_32);
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_6 = V_2;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_7 = V_1;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_8;
		L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*>(L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_9 = V_0;
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Refsdkfopdskgdwqueq__ctor_mEB7EA9B1FFC317DDF6078CD3DA0C53C239BD7EB5 (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private string id = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___id_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_17), (void*)L_1);
		// private Dictionary<String, Action> n_ = new Dictionary<String, Action>();
		Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6* L_2 = (Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6*)il2cpp_codegen_object_new(Dictionary_2_t3481DB12CFC627C97EF9EE95A2F3D08D3607A6D6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E(L_2, Dictionary_2__ctor_mA5C69BAAEA4997E39BCBB941E85A3CC71BEB6D8E_RuntimeMethod_var);
		__this->___n__25 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___n__25), (void*)L_2);
		// private Dictionary<String, Action<UniWebViewNativeResultPayload>> p_ =
		//     new Dictionary<String, Action<UniWebViewNativeResultPayload>>();
		Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179* L_3 = (Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179*)il2cpp_codegen_object_new(Dictionary_2_t7806ACE74E8D0BAC1A9CB45E320D76CB7DE79179_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E(L_3, Dictionary_2__ctor_mAB0CC4E38E3BA14430A98F41973ECCCBE966384E_RuntimeMethod_var);
		__this->___p__26 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p__26), (void*)L_3);
		// private bool bgbsd = true;
		__this->___bgbsd_30 = (bool)1;
		// private Color r = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___r_31 = L_4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_Multicast(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* currentDelegate = reinterpret_cast<Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenInst(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_url, method);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenStatic(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_url, method);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenStaticInvoker(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView, ___1_url);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_ClosedStaticInvoker(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_url);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenVirtual(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_url);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenInterface(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_url);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenGenericVirtual(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_url);
}
void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenGenericInterface(Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_webView, ___1_url);
}
// System.Void Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sfsfsddfsdfsdf__ctor_m83D5129EB1E6AC7847ABBB8E4B2460925A6DF019 (Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf::Invoke(Refsdkfopdskgdwqueq,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3 (Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf::BeginInvoke(Refsdkfopdskgdwqueq,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sfsfsddfsdfsdf_BeginInvoke_mE3145FF08D62E48F4314A91AFE23CF858A0A5C5A (Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = ___1_url;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/Sfsfsddfsdfsdf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sfsfsddfsdfsdf_EndInvoke_m1ED46665605BC99F1EB4859D66A7F821C642FDB7 (Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_Multicast(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* currentDelegate = reinterpret_cast<SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenInst(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_statusCode, ___2_url, method);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenStatic(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_statusCode, ___2_url, method);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenStaticInvoker(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView, ___1_statusCode, ___2_url);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_ClosedStaticInvoker(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_statusCode, ___2_url);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenVirtual(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_statusCode, ___2_url);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenInterface(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_statusCode, ___2_url);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenGenericVirtual(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_statusCode, ___2_url);
}
void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenGenericInterface(SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_statusCode, ___2_url);
}
// System.Void Refsdkfopdskgdwqueq/SDfsdfsdffs::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdffs__ctor_mB4D2B8AE80C99895C980653D77EFE0D8D45B860C (SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/SDfsdfsdffs::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A (SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/SDfsdfsdffs::BeginInvoke(Refsdkfopdskgdwqueq,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SDfsdfsdffs_BeginInvoke_m637DE8852AA59FD970D6D23C0A0AAA79FFFF5DC5 (SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_statusCode);
	__d_args[2] = ___2_url;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Refsdkfopdskgdwqueq/SDfsdfsdffs::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdffs_EndInvoke_m5599CE999D62149BA45F077129FD6920B3DA8DD4 (SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_Multicast(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* currentDelegate = reinterpret_cast<Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenInst(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_errorMessage, method);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenStatic(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_errorCode, ___2_errorMessage, method);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenStaticInvoker(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_ClosedStaticInvoker(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenVirtual(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenInterface(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenGenericVirtual(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenGenericInterface(Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_webView, ___1_errorCode, ___2_errorMessage);
}
// System.Void Refsdkfopdskgdwqueq/Hfddfgdfgdfg::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hfddfgdfgdfg__ctor_m3E0C8AD73865AC988C6A8440FA086C91C4CDFCF7 (Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Hfddfgdfgdfg::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031 (Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Hfddfgdfgdfg::BeginInvoke(Refsdkfopdskgdwqueq,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hfddfgdfgdfg_BeginInvoke_mD66D1316F40DD59068A1582D13DDD5C26539233A (Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_errorCode);
	__d_args[2] = ___2_errorMessage;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Refsdkfopdskgdwqueq/Hfddfgdfgdfg::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hfddfgdfgdfg_EndInvoke_m064CDA6DB66D152DCAFA7E24358FF01344EBCB50 (Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_Multicast(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* currentDelegate = reinterpret_cast<SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenInst(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_progress, method);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenStatic(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_progress, method);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenStaticInvoker(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView, ___1_progress);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_ClosedStaticInvoker(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_progress);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenVirtual(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_progress);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenInterface(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_progress);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenGenericVirtual(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< float >::Invoke(method, ___0_webView, ___1_progress);
}
void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenGenericInterface(SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< float >::Invoke(method, ___0_webView, ___1_progress);
}
// System.Void Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDFsFDSdfsdfsdf__ctor_mB77BE63795AB35115A5E0661BFF71716AC1CB945 (SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf::Invoke(Refsdkfopdskgdwqueq,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D (SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf::BeginInvoke(Refsdkfopdskgdwqueq,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SDFsFDSdfsdfsdf_BeginInvoke_mFCDC6D06C2A188CD949F9958E1CE7ECCA392CC30 (SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_progress);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/SDFsFDSdfsdfsdf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDFsFDSdfsdfsdf_EndInvoke_mE216EBD5CD2838BFEB5C710639D16DB142AC9EE6 (SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_Multicast(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* currentDelegate = reinterpret_cast<SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenInst(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_message, method);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenStatic(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_message, method);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenStaticInvoker(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView, ___1_message);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_ClosedStaticInvoker(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_message);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenVirtual(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_message);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenInterface(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_message);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenGenericVirtual(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 >::Invoke(method, ___0_webView, ___1_message);
}
void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenGenericInterface(SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 >::Invoke(method, ___0_webView, ___1_message);
}
// System.Void Refsdkfopdskgdwqueq/SDFSdfsdfdfdf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDFSdfsdfdfdf__ctor_mB9DED421E04AC00F44CCD420521B9DE021B6A5C3 (SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/SDFSdfsdfdfdf::Invoke(Refsdkfopdskgdwqueq,Gfrrasdu)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A (SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/SDFSdfsdfdfdf::BeginInvoke(Refsdkfopdskgdwqueq,Gfrrasdu,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SDFSdfsdfdfdf_BeginInvoke_m928EA10F10F28DCCDB417ED78D542CC14BCE1CDE (SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2_il2cpp_TypeInfo_var, &___1_message);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/SDFSdfsdfdfdf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDFSdfsdfdfdf_EndInvoke_m1E0FEAB8E308A4B53517A97648E2F284F55E2112 (SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_Multicast(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* currentDelegate = reinterpret_cast<Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenInst(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef bool (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_webView, method);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenStatic(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_webView, method);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenStaticInvoker(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_ClosedStaticInvoker(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenVirtual(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenInterface(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenGenericVirtual(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___0_webView);
}
bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenGenericInterface(Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___0_webView);
}
// System.Void Refsdkfopdskgdwqueq/Shfhfghfghfdgf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shfhfghfghfdgf__ctor_m91DE77A706B7ECADED1FCA14CCBE0A74108A7B9F (Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_Multicast;
}
// System.Boolean Refsdkfopdskgdwqueq/Shfhfghfghfdgf::Invoke(Refsdkfopdskgdwqueq)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145 (Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Shfhfghfghfdgf::BeginInvoke(Refsdkfopdskgdwqueq,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shfhfghfghfdgf_BeginInvoke_m34068AA4DE926D2FFED3E7F5D01E458D6A45F2CB (Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_webView;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Boolean Refsdkfopdskgdwqueq/Shfhfghfghfdgf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shfhfghfghfdgf_EndInvoke_mC571F4610D1D42029EEAADFE6B17DA82EAAF693D (Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_Multicast(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* currentDelegate = reinterpret_cast<ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_webView, ___1_p, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenInst(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_p, method);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenStatic(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_webView, ___1_p, method);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenStaticInvoker(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_webView, ___1_p);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_ClosedStaticInvoker(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_webView, ___1_p);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenVirtual(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_webView, ___1_p);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenInterface(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_webView, ___1_p);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenGenericVirtual(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_p);
}
void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenGenericInterface(ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method)
{
	NullCheck(___0_webView);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_webView, ___1_p);
}
// System.Void Refsdkfopdskgdwqueq/ghfghfgghdfgdfg::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ghfghfgghdfgdfg__ctor_m74C328D04DBF938860522A53273D8DD4F2C38C3A (ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/ghfghfgghdfgdfg::Invoke(Refsdkfopdskgdwqueq,UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A (ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_p, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/ghfghfgghdfgdfg::BeginInvoke(Refsdkfopdskgdwqueq,UnityEngine.ScreenOrientation,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ghfghfgghdfgdfg_BeginInvoke_m473F63850DBDB66EEC2634121EDD61E01B2FEE65 (ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_webView;
	__d_args[1] = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &___1_p);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/ghfghfgghdfgdfg::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ghfghfgghdfgdfg_EndInvoke_m6E68F4A36D00612367F57F8E0EA230300C7C2AA4 (ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_Multicast(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* currentDelegate = reinterpret_cast<Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_v, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenInst(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, method);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenStatic(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, method);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenStaticInvoker(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_v);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_ClosedStaticInvoker(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_v);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenVirtual(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_v);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenInterface(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_v);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenGenericVirtual(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericVirtualActionInvoker0::Invoke(method, ___0_v);
}
void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenGenericInterface(Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_v);
}
// System.Void Refsdkfopdskgdwqueq/Tsfsdfsdfsdf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tsfsdfsdfsdf__ctor_m20FFF2F93534C755949CFC17E6EB6C6E7B41E06A (Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Tsfsdfsdfsdf::Invoke(Refsdkfopdskgdwqueq)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828 (Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Tsfsdfsdfsdf::BeginInvoke(Refsdkfopdskgdwqueq,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tsfsdfsdfsdf_BeginInvoke_m6F555EE40BDA2FA4B2878FA5E1EF4B66D3559540 (Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_v;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Refsdkfopdskgdwqueq/Tsfsdfsdfsdf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tsfsdfsdfsdf_EndInvoke_mEE09E4010F4F339BC360028C44D49CDA1337475E (Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_Multicast(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* currentDelegate = reinterpret_cast<EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_d, ___1_f, ___2_l, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenInst(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	NullCheck(___0_d);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_d, ___1_f, ___2_l, method);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenStatic(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_d, ___1_f, ___2_l, method);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenStaticInvoker(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_d, ___1_f, ___2_l);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_ClosedStaticInvoker(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_d, ___1_f, ___2_l);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenVirtual(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	NullCheck(___0_d);
	VirtualActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_d, ___1_f, ___2_l);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenInterface(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	NullCheck(___0_d);
	InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_d, ___1_f, ___2_l);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenGenericVirtual(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	NullCheck(___0_d);
	GenericVirtualActionInvoker2< String_t*, String_t* >::Invoke(method, ___0_d, ___1_f, ___2_l);
}
void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenGenericInterface(EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method)
{
	NullCheck(___0_d);
	GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(method, ___0_d, ___1_f, ___2_l);
}
// System.Void Refsdkfopdskgdwqueq/EWrrwrwerwer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EWrrwrwerwer__ctor_mF346A8C97F8588C9588FEFACD998890718EFE7B3 (EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/EWrrwrwerwer::Invoke(Refsdkfopdskgdwqueq,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926 (EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_d, ___1_f, ___2_l, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/EWrrwrwerwer::BeginInvoke(Refsdkfopdskgdwqueq,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EWrrwrwerwer_BeginInvoke_mFECAF9BAC513A03673F801798DD933840D96B702 (EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_d;
	__d_args[1] = ___1_f;
	__d_args[2] = ___2_l;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Refsdkfopdskgdwqueq/EWrrwrwerwer::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EWrrwrwerwer_EndInvoke_mEF2E5C660DE16131D3E27D35AEFDACB42104CA1B (EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_Multicast(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* currentDelegate = reinterpret_cast<Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_v, ___1_j, ___2_r, ___3_l, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenInst(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_j, ___2_r, ___3_l, method);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenStatic(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_j, ___2_r, ___3_l, method);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenStaticInvoker(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_v, ___1_j, ___2_r, ___3_l);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_ClosedStaticInvoker(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_v, ___1_j, ___2_r, ___3_l);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenVirtual(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	VirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_v, ___1_j, ___2_r, ___3_l);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenInterface(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	InterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_v, ___1_j, ___2_r, ___3_l);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenGenericVirtual(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericVirtualActionInvoker3< int32_t, String_t*, String_t* >::Invoke(method, ___0_v, ___1_j, ___2_r, ___3_l);
}
void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenGenericInterface(Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericInterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(method, ___0_v, ___1_j, ___2_r, ___3_l);
}
// System.Void Refsdkfopdskgdwqueq/Hsfsdfsdfsdf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hsfsdfsdfsdf__ctor_m84AF503F864873BF667F3064D93387ACC60AC0FA (Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Hsfsdfsdfsdf::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3 (Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_j, ___2_r, ___3_l, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Hsfsdfsdfsdf::BeginInvoke(Refsdkfopdskgdwqueq,System.Int32,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hsfsdfsdfsdf_BeginInvoke_m04513FF9C05EB04958DC06DAA705AEF9B3B959AF (Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___0_v;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_j);
	__d_args[2] = ___2_r;
	__d_args[3] = ___3_l;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Refsdkfopdskgdwqueq/Hsfsdfsdfsdf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hsfsdfsdfsdf_EndInvoke_mF8BFAA7482D46E32593AD3AAF2B95FBA9123022A (Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_Multicast(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* currentDelegate = reinterpret_cast<Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_v, ___1_t, ___2_d, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenInst(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_t, ___2_d, method);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenStatic(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_t, ___2_d, method);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenStaticInvoker(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_v, ___1_t, ___2_d);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_ClosedStaticInvoker(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_v, ___1_t, ___2_d);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenVirtual(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	VirtualActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_v, ___1_t, ___2_d);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenInterface(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_v, ___1_t, ___2_d);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenGenericVirtual(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericVirtualActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_v, ___1_t, ___2_d);
}
void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenGenericInterface(Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(method, ___0_v, ___1_t, ___2_d);
}
// System.Void Refsdkfopdskgdwqueq/Wsdfsdfsdfsf::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wsdfsdfsdfsf__ctor_mF3CFA9C1255931E3194675FBDE9F754C3B9547CB (Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Wsdfsdfsdfsf::Invoke(Refsdkfopdskgdwqueq,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655 (Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_t, ___2_d, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Wsdfsdfsdfsf::BeginInvoke(Refsdkfopdskgdwqueq,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Wsdfsdfsdfsf_BeginInvoke_m4D41B3F82FDD98F3FE6D8071F959B92771D21A59 (Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_v;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_t);
	__d_args[2] = ___2_d;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Refsdkfopdskgdwqueq/Wsdfsdfsdfsf::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wsdfsdfsdfsf_EndInvoke_m431D85BDD1DC57A1E964DF56D40D7855DA9114EE (Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_Multicast(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* currentDelegate = reinterpret_cast<Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_v, ___1_m, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenInst(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_m, method);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenStatic(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_m, method);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenStaticInvoker(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_v, ___1_m);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_ClosedStaticInvoker(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_v, ___1_m);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenVirtual(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_v, ___1_m);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenInterface(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_v, ___1_m);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenGenericVirtual(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_v, ___1_m);
}
void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenGenericInterface(Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_v, ___1_m);
}
// System.Void Refsdkfopdskgdwqueq/Zgblfgflgfgh::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zgblfgflgfgh__ctor_mE23911BE852376F1DE384462AD215413EA1C9ADB (Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Zgblfgflgfgh::Invoke(Refsdkfopdskgdwqueq,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F (Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_m, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Zgblfgflgfgh::BeginInvoke(Refsdkfopdskgdwqueq,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zgblfgflgfgh_BeginInvoke_mD21E42267C31600FE6D3D70A8CB584060BED69D8 (Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_v;
	__d_args[1] = ___1_m;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/Zgblfgflgfgh::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zgblfgflgfgh_EndInvoke_mCF8BEB443C55EAF85FA2A5BB05DD2410552E98A1 (Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_Multicast(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* currentDelegate = reinterpret_cast<Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_v, ___1_hdfh, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenInst(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_hdfh, method);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenStatic(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_v, ___1_hdfh, method);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenStaticInvoker(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_v, ___1_hdfh);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_ClosedStaticInvoker(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_v, ___1_hdfh);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenVirtual(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_v, ___1_hdfh);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenInterface(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_v, ___1_hdfh);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenGenericVirtual(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___0_v, ___1_hdfh);
}
void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenGenericInterface(Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method)
{
	NullCheck(___0_v);
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___0_v, ___1_hdfh);
}
// System.Void Refsdkfopdskgdwqueq/Mdgddfddfgdfg::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mdgddfddfgdfg__ctor_m1A317E824DDEF35F6ADEEF414CD843CE7F43B7DD (Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/Mdgddfddfgdfg::Invoke(Refsdkfopdskgdwqueq,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805 (Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_hdfh, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/Mdgddfddfgdfg::BeginInvoke(Refsdkfopdskgdwqueq,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Mdgddfddfgdfg_BeginInvoke_m19B224546BC14B395F1EFBB72A6DF00C54FB5277 (Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_v;
	__d_args[1] = ___1_hdfh;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/Mdgddfddfgdfg::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mdgddfddfgdfg_EndInvoke_m591C06F76A6B0575736FEF33923CDDA4AE81B872 (Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_Multicast(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* currentDelegate = reinterpret_cast<KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_dasdaswqeq, ___1_fdfsdfsdf, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenInst(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	NullCheck(___0_dasdaswqeq);
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_dasdaswqeq, ___1_fdfsdfsdf, method);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenStatic(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_dasdaswqeq, ___1_fdfsdfsdf, method);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenStaticInvoker(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_dasdaswqeq, ___1_fdfsdfsdf);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_ClosedStaticInvoker(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_dasdaswqeq, ___1_fdfsdfsdf);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenVirtual(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	NullCheck(___0_dasdaswqeq);
	VirtualActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_dasdaswqeq, ___1_fdfsdfsdf);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenInterface(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	NullCheck(___0_dasdaswqeq);
	InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_dasdaswqeq, ___1_fdfsdfsdf);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenGenericVirtual(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	NullCheck(___0_dasdaswqeq);
	GenericVirtualActionInvoker1< int32_t >::Invoke(method, ___0_dasdaswqeq, ___1_fdfsdfsdf);
}
void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenGenericInterface(KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method)
{
	NullCheck(___0_dasdaswqeq);
	GenericInterfaceActionInvoker1< int32_t >::Invoke(method, ___0_dasdaswqeq, ___1_fdfsdfsdf);
}
// System.Void Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate__ctor_mB1729BB1DEBF66ECB49AA27A515E6D0F4F2370E4 (KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F_Multicast;
}
// System.Void Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate::Invoke(Refsdkfopdskgdwqueq,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_Invoke_mC6FD8F0C9CBBFDD41F6E2176CA32A23AC8FEF04F (KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_dasdaswqeq, ___1_fdfsdfsdf, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate::BeginInvoke(Refsdkfopdskgdwqueq,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCodeReceivedDelegate_BeginInvoke_mA467A372511AB6F9482E5FA0802F099A5DD7F3B4 (KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_dasdaswqeq, int32_t ___1_fdfsdfsdf, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_dasdaswqeq;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_fdfsdfsdf);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Refsdkfopdskgdwqueq/KeyCodeReceivedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_EndInvoke_m2F93161F08752778481CBC55814F6927B03604EB (KeyCodeReceivedDelegate_tEE6F35F9BCBE03D194A4F744BB15167FD4CC4F9D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Refsdkfopdskgdwqueq/<>c__DisplayClass151_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass151_0__ctor_m6AFFAA5D7E71A15C912EF61B6765F95D5719FE85 (U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Refsdkfopdskgdwqueq/<>c__DisplayClass151_0::<G>b__0(UniWebViewNativeResultPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass151_0_U3CGU3Eb__0_m41AE61BC8ABA40392F9A48711C9E65E2A73AFEAC (U3CU3Ec__DisplayClass151_0_t4E719676887F4006474A4CE04B7526ADD1DCC036* __this, UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* ___0_payload, const RuntimeMethod* method) 
{
	{
		// if (handler != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___handler_0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// handler(payload.data);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___handler_0;
		UniWebViewNativeResultPayload_tCD1244DB06AF9BC62DA0360E3790110012E58B28* L_2 = ___0_payload;
		NullCheck(L_2);
		String_t* L_3 = L_2->___data_2;
		NullCheck(L_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_1, L_3, NULL);
	}

IL_0019:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SDfsdfsdfsvxc/Number SDfsdfsdfsvxc::get_LogNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SDfsdfsdfsvxc_get_LogNumber_mFF5737B7E53AE9C896E26EBE1123AB845DDCAF41 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, const RuntimeMethod* method) 
{
	{
		// get { return _number; }
		int32_t L_0 = __this->____number_1;
		return L_0;
	}
}
// System.Void SDfsdfsdfsvxc::set_LogNumber(SDfsdfsdfsvxc/Number)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_set_LogNumber_m5AAC1AA23075A436D5CAB396EBF6D5264C8D2BC2 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Number_t9994D59A73B14DD25B9702E419BD9342BFB2766D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA4D4FFDA2F3867A69AE20E02C8940E7AC32326);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Log(Number.NintyNine, "fdsfdsfsdfdsfdsfsdfdsfsdsdf " + value);
		Il2CppFakeBox<int32_t> L_0(Number_t9994D59A73B14DD25B9702E419BD9342BFB2766D_il2cpp_TypeInfo_var, (&___0_value));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2BA4D4FFDA2F3867A69AE20E02C8940E7AC32326, L_1, NULL);
		SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7(__this, ((int32_t)99), L_2, NULL);
		// _number = value;
		int32_t L_3 = ___0_value;
		__this->____number_1 = L_3;
		// UniWebViewInterface.SetLogLevel((int)value);
		int32_t L_4 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UniWebViewInterface_tBF16762AE02FD523D8C403DB52C3E0EA1ADDAEF4_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLogLevel_m9FAEEBF3B0D6D4137561DC7534102FF942FD9503(L_4, NULL);
		// }
		return;
	}
}
// System.Void SDfsdfsdfsvxc::.ctor(SDfsdfsdfsvxc/Number)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc__ctor_mECCACF91B1FA9B5D8C21029833B3969A1EF525A7 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, int32_t ___0_number, const RuntimeMethod* method) 
{
	{
		// private SDfsdfsdfsvxc(Number number) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this._number = number;
		int32_t L_0 = ___0_number;
		__this->____number_1 = L_0;
		// }
		return;
	}
}
// SDfsdfsdfsvxc SDfsdfsdfsvxc::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* SDfsdfsdfsvxc_get_Instance_m0A26E7C8723B682B69C0AB7F261C657065E61E5A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null) {
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_0 = ((SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_StaticFields*)il2cpp_codegen_static_fields_for(SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var))->___instance_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// instance = new SDfsdfsdfsvxc(Number.Eighty);
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_1 = (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51*)il2cpp_codegen_object_new(SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SDfsdfsdfsvxc__ctor_mECCACF91B1FA9B5D8C21029833B3969A1EF525A7(L_1, ((int32_t)80), NULL);
		((SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_StaticFields*)il2cpp_codegen_static_fields_for(SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var))->___instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_StaticFields*)il2cpp_codegen_static_fields_for(SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var))->___instance_0), (void*)L_1);
	}

IL_0013:
	{
		// return instance;
		SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* L_2 = ((SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_StaticFields*)il2cpp_codegen_static_fields_for(SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51_il2cpp_TypeInfo_var))->___instance_0;
		return L_2;
	}
}
// System.Void SDfsdfsdfsvxc::ZeroKek(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_ZeroKek_m95E4C4190E5A51BA50ACE2A01A52767D0E6584FA (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void ZeroKek(string message) { Log(Number.Zero, message); }
		String_t* L_0 = ___0_message;
		SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7(__this, 0, L_0, NULL);
		// public void ZeroKek(string message) { Log(Number.Zero, message); }
		return;
	}
}
// System.Void SDfsdfsdfsvxc::TenKek(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_TenKek_m33C45296C5913CF03B99813227DA94B12207FCF1 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void TenKek(string message) { Log(Number.Ten, message); }
		String_t* L_0 = ___0_message;
		SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7(__this, ((int32_t)10), L_0, NULL);
		// public void TenKek(string message) { Log(Number.Ten, message); }
		return;
	}
}
// System.Void SDfsdfsdfsvxc::TwentyLol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_TwentyLol_mE89D62B1A9A404326D3BEBA359B2CC6E6A9A6A01 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void TwentyLol(string message) { Log(Number.Twenty, message); }
		String_t* L_0 = ___0_message;
		SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7(__this, ((int32_t)20), L_0, NULL);
		// public void TwentyLol(string message) { Log(Number.Twenty, message); }
		return;
	}
}
// System.Void SDfsdfsdfsvxc::EightyGreat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_EightyGreat_m085E1C72A249E2E371CE65CDFFBA07F3832766C8 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public void EightyGreat(string message) { Log(Number.Eighty, message); }
		String_t* L_0 = ___0_message;
		SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7(__this, ((int32_t)80), L_0, NULL);
		// public void EightyGreat(string message) { Log(Number.Eighty, message); }
		return;
	}
}
// System.Void SDfsdfsdfsvxc::Log(SDfsdfsdfsvxc/Number,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDfsdfsdfsvxc_Log_m9BA7E57B6242352C424371F13A7C5ED67645DCE7 (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, int32_t ___0_number, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BCB0E905A45A66BA5504F5958879C3852928877);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (number >= this.LogNumber) {
		int32_t L_0 = ___0_number;
		int32_t L_1;
		L_1 = SDfsdfsdfsvxc_get_LogNumber_mFF5737B7E53AE9C896E26EBE1123AB845DDCAF41_inline(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		// var fsdfsdfsdfsdf = "ertertertertert" + message;
		String_t* L_2 = ___1_message;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6BCB0E905A45A66BA5504F5958879C3852928877, L_2, NULL);
		V_0 = L_3;
		// if (number == Number.Eighty) {
		int32_t L_4 = ___0_number;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0021;
		}
	}
	{
		// UnityEngine.Debug.LogError(fsdfsdfsdfsdf);
		String_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		return;
	}

IL_0021:
	{
		// UnityEngine.Debug.Log(fsdfsdfsdfsdf);
		String_t* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void zvbvbdfgdfgdfg::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvbvbdfgdfgdfg_Start_mDE2962D877D23436F0F1B75830E4A5D5C70D44AF (zvbvbdfgdfgdfg_t6B46D1889C31E1963B367A443ACCB5F3A71B738A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29BA19E2B4BDE90186D0B8DCAD4A123979EEAD0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(url)) {
		String_t* L_0 = __this->___url_4;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogError("fsdfsdfdsfsdfsdf.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral29BA19E2B4BDE90186D0B8DCAD4A123979EEAD0C, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// var safeBrowsing = Ghost.Hoke(url);
		String_t* L_2 = __this->___url_4;
		Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* L_3;
		L_3 = Ghost_Hoke_m2AB29B298938AB886FD6B6048D834AC4235939FB(L_2, NULL);
		// safeBrowsing.Ledion();
		NullCheck(L_3);
		Ghost_Ledion_mD23D21CF07DAC43BE9A8929A02F9CF7D09D94B02(L_3, NULL);
		// }
		return;
	}
}
// System.Void zvbvbdfgdfgdfg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvbvbdfgdfgdfg__ctor_mF742820EBCA4A025E0AA79CF778C07F56C809D67 (zvbvbdfgdfgdfg_t6B46D1889C31E1963B367A443ACCB5F3A71B738A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_G_m3C2099066FED75498BCBA80CCDCA71587807AA05_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public string G {get; private set;}
		String_t* L_0 = __this->___U3CGU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_G_mE2E30C103A834D160ED3833FC7AA45019A3669FF_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string G {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CGU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_Scheme_m7D36BFECFF32FD3F6204E30ACF381558EC92BC0A_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = __this->___U3CSchemeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_Scheme_mDE309C38BAABB10270A5A2D7394DF2567CCF61E2_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Scheme {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CSchemeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Gfrrasdu_get_Path_m81F6751518AE1FD05319FED6621CA50B3FCF0FD4_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_Path_m32650CD3AA76CD8F8466C4F8EAED33E8F414B378_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Path {get; private set;}
		String_t* L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Gfrrasdu_get_Args_m8381B2525A9E41814AF0AEA0C857B1482EA98BE3_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CArgsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gfrrasdu_set_Args_m9891C873A1799B5AFAFAE1CDC5CADCEECC70548C_inline (Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, string> Args{get; private set;}
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CArgsU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgsU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Jacket_Invoke_m72465FD24547F4B6A549A3B96562DA7997048C53_inline (Jacket_t838C03CB454489F64D7EAC5BCD5BA4FDCCB02571* __this, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C* ___0_browsing, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Ghost_t1EFBF71C45180B09E339A29304C8FDD511C5C19C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_browsing, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ghfghfgghdfgdfg_Invoke_m2A3B91E4981A9B66AE9133974AACAD33CEAEEF8A_inline (ghfghfgghdfgdfg_t1AF02C221C11E4DECC0480FF510D67AD68A356EA* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_p, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_p, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SDfsdfsdffs_Invoke_m9D5141A0FB9FE6EB6574DEE0CA92B4DFC0F4C99A_inline (SDfsdfsdffs_tB376A778DD008DADCAF1F3DB94BDB4E7C9D0F3A0* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_statusCode, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_statusCode, ___2_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Sfsfsddfsdfsdf_Invoke_m3E188DC9BB4E9E6E903259EEF18BAA9534F8C8A3_inline (Sfsfsddfsdfsdf_t73C5A0C4E249B5AE187294DD34EE801B4FA226B7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_url, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hfddfgdfgdfg_Invoke_mD8FB8498C2984D83CAD1D146417C93F84A523031_inline (Hfddfgdfgdfg_tC9E5D9E2528645690FDB757B12B04D974DF90972* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, int32_t ___1_errorCode, String_t* ___2_errorMessage, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_errorCode, ___2_errorMessage, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SDFsFDSdfsdfsdf_Invoke_mAB94DDAAE56D3CD5612FA330552EB8DEE9E6FC8D_inline (SDFsFDSdfsdfsdf_t3F2AFB418568745CDB6E15148975D8E783541CCE* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, float ___1_progress, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_progress, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SDFSdfsdfdfdf_Invoke_m9DCC60E964BAA41C0570528357BDE4293CF9369A_inline (SDFSdfsdfdfdf_tF0E143252F0D98D889E4B8628256B5D42C6E3506* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2 ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, Gfrrasdu_t32862DE09F6E127AAF9DD5B937BF89419C2813F2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Shfhfghfghfdgf_Invoke_m6245BE320CB9789E0D352EFAB32416C180965145_inline (Shfhfghfghfdgf_t9F7B4A3E8F650F0303C2405174687AB04517659C* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_webView, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_webView, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tsfsdfsdfsdf_Invoke_mA4FF29F9C50992229FD539DEAB8B991CEF7D6828_inline (Tsfsdfsdfsdf_tC1372071D0AE4C2F294E1BE0380756F5127CB146* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Zgblfgflgfgh_Invoke_m47241A65345BBFAF28F89EDA901CCD8C16DC722F_inline (Zgblfgflgfgh_t2B0BC1765AC0CA173E51D0E09BDD7A046409C62A* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_m, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_m, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mdgddfddfgdfg_Invoke_mE4A760D2AF5E353376C942397ED6A48922EED805_inline (Mdgddfddfgdfg_t576330E73CE8443C73183AB6A2BB873E88780F23* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, String_t* ___1_hdfh, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_hdfh, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EWrrwrwerwer_Invoke_mBF8DD9B365AEDA0180135E9D66DF7CB916DC5926_inline (EWrrwrwerwer_tA9B75B9F3D25ADAA53828054862E2E3242A52193* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_d, String_t* ___1_f, String_t* ___2_l, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_d, ___1_f, ___2_l, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hsfsdfsdfsdf_Invoke_m12E2141E68666DF1116CBBC120743A09AAE2E9B3_inline (Hsfsdfsdfsdf_t6B56B886BF3244943750FDDCE75C75AF44FC6AB2* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_j, String_t* ___2_r, String_t* ___3_l, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_j, ___2_r, ___3_l, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Wsdfsdfsdfsf_Invoke_mF2787AB8F39FCA3A1AEFEA229E582FA08C93F655_inline (Wsdfsdfsdfsf_tBD2B7EB9D643362FAF7B0ADCC559D054215978A7* __this, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1* ___0_v, int32_t ___1_t, String_t* ___2_d, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Refsdkfopdskgdwqueq_t27738AB6BFDC2065BA7A5CAC11EC17B62485C5E1*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_v, ___1_t, ___2_d, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SDfsdfsdfsvxc_get_LogNumber_mFF5737B7E53AE9C896E26EBE1123AB845DDCAF41_inline (SDfsdfsdfsvxc_t98503A93D3F8A9096D99B0FF4C38597C81C83E51* __this, const RuntimeMethod* method) 
{
	{
		// get { return _number; }
		int32_t L_0 = __this->____number_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
