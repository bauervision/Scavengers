#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>>>
struct Action_1_t54EC897DFC8848F81D1D78E3F1F700871D4DDF09;
// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Single>>>
struct Action_1_t07DD388597F5077D80ED66A6F55632991D676B3B;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E;
// System.Action`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9;
// System.Action`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70;
// System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250;
// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>
struct Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2;
// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730;
// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>
struct Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42;
// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>
struct Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>
struct AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>
struct ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>
struct ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F;
// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>
struct ComponentSingleton_1_t48E072079F42456220A56E31B3AA96C419BB3157;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>>
struct DelegateList_1_t932E16E3FBFE5A6A290BCE66829B9EBC952556E3;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean>>
struct DelegateList_1_t41ACA8DED01331F3B3587FDEFC202D1429DA46B4;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>>
struct DelegateList_1_tE369497AF0258DCBC31956F5B9851785CDE755D8;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>
struct DelegateList_1_tE5214C095910CA36010DD471BBF1F8F7EA6D4787;
// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88;
// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D;
// DelegateList`1<System.Single>
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD;
// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Func`2<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>>>
struct Func_2_tB94F993A5DDDF0C1D7E46D5279CA30600E42FDEF;
// System.Func`2<System.Action`1<System.Single>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Single>>>
struct Func_2_t41A95935AFF0DB3FD25E84D4B4047C9BA04F25CB;
// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>
struct Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3;
// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String>
struct Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct IEnumerable_1_tFE6CE62D67D61F940F6BF8AE9D22B703E0E83BC1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct IEnumerable_1_tF00328CE3D5876D5D32D6DEB3C7C17E8A7BAC412;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct IEqualityComparer_1_tB8272B8D19954987D8244F05167D0629DA5E56B2;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ResourceManagement.Util.IOperationCacheKey>
struct IEqualityComparer_1_t7A2EF294B469C692DCE8C03D78E845D15B22617D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct IEqualityComparer_1_t0291FD539E0384464467559223E848F37E180C57;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct IList_1_t74AC377FF33B42CB53AF4AE8E6C38924D22FB457;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Linq.IOrderedEnumerable`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct IOrderedEnumerable_1_t9DACB1ECAF5115C2F9791C94F3C9940F28215C06;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct KeyCollection_tE4E1B5A02FB0D6BD75E03C433462A8F287C04E9C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t69A04DEE49132A57AC386BC17C27C5D773DD5027;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct KeyCollection_t70A89BD9932A69C1068DB17CEAF967A92E4AC71F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Type>
struct KeyCollection_t56C9CA539771D68F44D87D0E711E4CFF69326192;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>>
struct LinkedList_1_tAA509CD47BFC477A91DAC780DAE59B2DD17CFAEA;
// System.Collections.Generic.LinkedList`1<System.Action`1<System.Single>>
struct LinkedList_1_tB39B6153A160F24030669CA5FEF2B343043EC058;
// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB;
// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF;
// ListWithEvents`1<System.Object>
struct ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>
struct List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct List_1_t7F62139778BB2054E226E59A7A86F86B57F95362;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_tD25B27535A2152F2A5071985C3699F183881E0EA;
// System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct List_1_t82E373BCF4E787F0A82707510F7681917A886DB6;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307;
// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation>
struct Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA;
// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct TaskCompletionSource_1_t82760B5622E48B21F74387D6CA1B0F25D6E599B0;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<UnityEngine.GameObject>
struct TaskCompletionSource_1_t1CC46E6FFAF00F08BFB98C6822E0537C12BFFB73;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct ValueCollection_t9A9B4B5BC3C555F8A5302BB6419569CDD3A94D46;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t70FFC828DCB872D8711886F829FB957E9E947F1B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct ValueCollection_tBBF304D6ECE357A0DB09D5C3D70F1AC85AD57946;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Type>
struct ValueCollection_tC72ADD3C4A1BECE1A0E419F63C5C423DD518C857;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>[]
struct EntryU5BU5D_tD6138F642C83681ADE557DF1B11E60CFF4E735F5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Object>>[]
struct EntryU5BU5D_t4CA6A71A3ED5E59DB347F4876C8259DEC4955434;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>[]
struct EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>[]
struct EntryU5BU5D_tD527626E048B2322B37DE65623A1CBA71AF74409;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Type>[]
struct EntryU5BU5D_tB314925F934D4288E8F1FEFD9BAB2450767E315F;
// System.Collections.Generic.List`1<System.Object>[]
struct List_1U5BU5D_tB40362575E2E5EBEFC13C380165A5E7D845985F0;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>[]
struct SlotU5BU5D_t6B99CFD639A3651E2F5D7B18D7BCF69B759B7508;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>[]
struct SlotU5BU5D_t76C7120C98EF2596C8AA3266633CD5579958662D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle[]
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent[]
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation[]
struct IAsyncOperationU5BU5D_t038A8F7EFA4A20734A0425FC64571B389DE523DB;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[]
struct IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD;
// UnityEngine.ResourceManagement.IUpdateReceiver[]
struct IUpdateReceiverU5BU5D_tD65DA2CEC3E524A934059F101A46091E9382D66D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Networking.UnityWebRequestAsyncOperation[]
struct UnityWebRequestAsyncOperationU5BU5D_tF27023446417C356BE1BD2CF38F029913A0D8AD1;
// UnityEngine.ResourceManagement.WebRequestQueueOperation[]
struct WebRequestQueueOperationU5BU5D_t329C186009509CFF862A41707199D22197BE69B8;
// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest[]
struct DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4;
// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation[]
struct InstanceOperationU5BU5D_t60DC02EA4A35757B82C4788B154EA1905C00B24F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey
struct AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D;
// UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
struct AtlasSpriteProvider_tE1B6A6917A900A46726DD1693C7DF1FE60F81E3A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy
struct DefaultAllocationStrategy_t3C220E3485C97638DF666573D735A82EFA2F00B6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.ResourceManagement.Util.DependenciesCacheKey
struct DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
struct DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
struct GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE;
// UnityEngine.ResourceManagement.Util.IAllocationStrategy
struct IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation
struct IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067;
// UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
struct IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37;
// UnityEngine.ResourceManagement.Util.IOperationCacheKey
struct IOperationCacheKey_t39BE25F281EA1D574F074D55F4CAF08F13DF3CCA;
// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_tDFA5BC770DAA5BE37CBA1CF47281702FB064CCF3;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
struct IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C;
// UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
struct IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247;
// UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
struct ISceneProvider_t8975F536F686AA01DF259F7AAB973512B5098581;
// UnityEngine.ResourceManagement.IUpdateReceiver
struct IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154;
// UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider
struct JsonAssetProvider_tDA8FBAA9EAF7DC4CD8F96B0145644401CA29ADDF;
// UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy
struct LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318;
// UnityEngine.ResourceManagement.Util.LocationCacheKey
struct LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MonoBehaviourCallbackHooks
struct MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ResourceManagement.Exceptions.OperationException
struct OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB;
// UnityEngine.ResourceManagement.Exceptions.ProviderException
struct ProviderException_tCFC98A50C874BCD7FAF64F677F162A3B2C7B09DA;
// UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
struct ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F;
// UnityEngine.ResourceManagement.Exceptions.RemoteProviderException
struct RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131;
// UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
struct ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF;
// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D;
// UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
struct ResourceManagerException_t49A563CE4851F1491A20EF29BF1E03276FD6ED25;
// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
struct ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
struct TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.ResourceManagement.Util.UnityWebRequestResult
struct UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894;
// UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException
struct UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.ResourceManagement.WebRequestQueueOperation
struct WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363;
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c
struct U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7;
// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation
struct InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644;
// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C;
// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp
struct BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C;
// UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp
struct InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICachable_t1E96E038DBBA5EA25DD8E52DEA8CD95998BFD17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t765584753BCECD1B989E18C940850D2875093CCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF00328CE3D5876D5D32D6DEB3C7C17E8A7BAC412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t49FD6B3FA03C73D1B33E24DF0595303EDAD4B582_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAB2648EE576B6D345AED3A8F4BB4D41E9F58FFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializableObject_tB5EAFECD94FB085A2225D79C9DD79EC459948C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t74AC377FF33B42CB53AF4AE8E6C38924D22FB457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISceneProvider2_t3168CF0253FC74704C4E3597D9515E04D1DB7AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISceneProvider_t8975F536F686AA01DF259F7AAB973512B5098581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82E373BCF4E787F0A82707510F7681917A886DB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD25B27535A2152F2A5071985C3699F183881E0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3____2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02151A83C4BF0A0CDD34460B09F3334E5AD5B606;
IL2CPP_EXTERN_C String_t* _stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD;
IL2CPP_EXTERN_C String_t* _stringLiteral04422C80FD67344F1CC3E8874645F012406FB975;
IL2CPP_EXTERN_C String_t* _stringLiteral06065C5BBFA32ED0986FD91E8FBCA6BD91E74A93;
IL2CPP_EXTERN_C String_t* _stringLiteral070CAE9ABBC9921BAD35C84FEBF95454A66D9532;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral07FC3A2B31C3E73FFABFEE7131B1DFC175EBF908;
IL2CPP_EXTERN_C String_t* _stringLiteral095E324CA5EAAB6C20DCBCDE2E2E3CD919DCDAA0;
IL2CPP_EXTERN_C String_t* _stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10;
IL2CPP_EXTERN_C String_t* _stringLiteral1C1DC6627277EC19EEFC4AFAEB16D378918A3EAD;
IL2CPP_EXTERN_C String_t* _stringLiteral224C29E303A46BE2ED2DFE574FE8044650869F4E;
IL2CPP_EXTERN_C String_t* _stringLiteral22F26E94CC0601B218A55F5373A646B776F7FDEC;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral43DA1811FCD9FF890B2229A8C1CA4E836BE1BBA1;
IL2CPP_EXTERN_C String_t* _stringLiteral4644BA3F1CC972E9F35C97AC17A6D9DCEBF2E486;
IL2CPP_EXTERN_C String_t* _stringLiteral4715C557EE00C100954D26772E9FC96F0A121070;
IL2CPP_EXTERN_C String_t* _stringLiteral531C53CAC105666ED9286691DAD92BB37C033041;
IL2CPP_EXTERN_C String_t* _stringLiteral5545562CB57BB8E6D1204C7308B5206ED7661CE4;
IL2CPP_EXTERN_C String_t* _stringLiteral5B930431A536D490C68A91D25D3C66B2FAA99B4D;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6AF3D3CCB9472959ADABCD6E7FD248B6061A42C6;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3C8151DEAB8A8C4FD3821D2E5AA42A6C0E8140;
IL2CPP_EXTERN_C String_t* _stringLiteral7F0F9E5A6213794F23A24C629BB390DBFBC3974A;
IL2CPP_EXTERN_C String_t* _stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B;
IL2CPP_EXTERN_C String_t* _stringLiteral855615C6B0E9D573F53C3375F77A7B6069346F1E;
IL2CPP_EXTERN_C String_t* _stringLiteral888E703FA70C9F3755C136B54F886B5D3C8109BC;
IL2CPP_EXTERN_C String_t* _stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D;
IL2CPP_EXTERN_C String_t* _stringLiteral95DAD4257816ED9B3D6718A6CBD69EFFCF321CAD;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0359BACB67159E4781CB3F47FB9DBDCD3466E5;
IL2CPP_EXTERN_C String_t* _stringLiteralB69455F744571C3D06796F0B307DD5A33E35B7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralB88A82BFF1808191DA530D2B17124F09EB51B995;
IL2CPP_EXTERN_C String_t* _stringLiteralC1CB6A68B8428D5E87DFAD85994359922F906838;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F83E4E5AD446148E36F96826E089809FDE904C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE60521B1295D070924B7C7ECB78E460EE3EF7E9B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4DA9FC99FDEB9477A75EAF8DFDBC820DAAA3ECB;
IL2CPP_EXTERN_C String_t* _stringLiteralF94AA613862F53AAD0F034DAF760AFDD9509B693;
IL2CPP_EXTERN_C String_t* _stringLiteralF9FDBA64471F57CB1D6F0BE2082CDC9D03288855;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA806E4ED9486F84FE4E7C04D56C7A684143D10;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_DecrementReferenceCount_mB2C06A8ED8A24759AA3764B5807A3BC2A3FAD886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_get_Handle_mC58CFF62938BB4FA4A5B837A1BDF8149D155237C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_get_Result_m8A32166FCB4813A4B54798D53F974F171267A245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_m84DEAEF957377A11468409BE77C9BE51D0BF267E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Exists_m00642B1C84956EFA4526544421447D3E17EC6A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5B8E8B164F0F2E1C3E97F2D46F4153EB285523D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m760F534C63E8FB529B19A190CD31B6627F0212BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m977BEBE7261BFEF13B96BE8C7CD46BF0945862F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD674AEED11B3C58424C02EE2D7AC9AFE4E062196_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7190C6CFEC27F812D251BD1E4A0DFA3CB561634A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m203693F95BCB7EFF18730E2258E6DDDA01E00234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m246913C3D3919A641E1F4C2E74B76E8A3E934B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m165D9B0D453292403ABCB37C534180409C3BA4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m56440420FE742E4486843B59035F84FEBC635FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBEE6E02FF5778B06D23A4C8FF8AAE9445DD52EAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4BF36A217D139B0FC6B74E244C7D1F8C181F6D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBC9C07D05B2D0077FB70A8F4611FA91418BA4EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFDEC7DAC09787567E422F5E2F0E98E612D2425CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m10C389A6DBA35D31ACF0EC671829A31C91160832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1F5159DDE57F06EC87D8A60A258CD1D9BBD149F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE1F9ECAF1066E4608E8F05006734376B9F94A51C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m56185EE15CA5C41150CF444029481A4E55B6C297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5E7A2AB1F8E51C1FCAAEA832275730E3430F404E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC12651338B151B0405245C9315E8A43D3EAC4639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mE2194F2C0ACF18DD410E9D96ACC52F48A7C39406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mB379B57465DF13113C37D5F68A852BFCCA32FE02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_GetPercentComplete_mAFF06723896D6D26284115A2F0F102C9D664CCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_U3CSendWebRequestU3Eb__13_0_m7D8C14A2281B0E47BA2C1699FFE5E12A050840A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalOp_WaitForCompletionHandler_mD109A0979F9D7BBC921015E9D83F2F81552C4AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_Add_m07C05127F5995784C13F70693F39FDF17E0BE2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1__ctor_m5D223A2F890ACD04DFFDDEA67A277FE5FF669321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1__ctor_mAB99B6D35767214CAB2BCF1DDBDC7D7E77762F26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_add_OnElementAdded_m1FEBB4EB8F2345E7316837333CECBBE7EAB02CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_add_OnElementAdded_m73653AE5E78DE69A6617034FE70D8203F7CA46A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_add_OnElementRemoved_m4F049FEC85282FBF40D01BFF4A9583AF6C299440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m014143AAFCA106D6E36C6A88818861FD48953769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8D3A001B04748E316D277F1F7195E4A759B6261B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF8A1D8C4023DD582BF228FB67A92A4DE0569CD90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCC1DF00335ECC0520B9FD7A9E551F6CE8D8CD02F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m11819623C6E00A9404CE43691FA16278B8AD92B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6F8E4B0F2D06EFD4033EA1CCF89B7E8FBD6BBE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0AD5393DCD4AE01CE936639400C74F02DACD0C44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB0D828397E974329BA517D9B3BB7557FFCC33FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0874F605C0547F0FAAC3ECA80CA427463997DE99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m28B0FD0F2221E9A428AC7053440E7DCCED821913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m415DE8EE7AC4955152AD10C91B3825EEAB8B1A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m52F885C20FA219E167AAE5D39AACDF81C54D78D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6BB395D2DDC0A487188FA876E26C141EF79B11A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBF5F50D927699D56A669DA710118E0C7C1221FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE2C973AD758CCD80E5B081D3831EC32196ECB651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m163E0BCFFFE7089C8C9AC958FEB33BA0B3A5A54B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m92DF89FE6F5A0E35A97FEC041F0D3030DECABA09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocationCacheKey__ctor_m282925A8CF5CF9120CF2CC9AAEF5BEACA2CF8148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProvideHandle_GetDependency_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mC4E42E0DFEC6ED85E28C53108C121CC793C3E4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m37D7368D06F6D745D0A18C888DB41A4B3D71D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m0DD398F7245C086B22C76E92CB2235D0BB5FE245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m7E67C88DF661BC06EDA394F77B91D108A7E62AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC12F41F95A31993607B72C5E085A6069F898F4FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceLocationBase__ctor_m736BECFEE816BAEDC0FFC7E0A1C0100826A63E74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_CreateOperation_TisIAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_m82B731F92B8FFC8D9B1C415D39786DBBA0F0EF48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_OnInstanceOperationDestroy_mEAFE7F84B34E5D426D4185936321DF391E1D77D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_OnObjectAdded_m1B908412F2E8898FB93DDA7F1C476E7FE087FB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_OnObjectRemoved_m75B3D837CDC9FD91B3B5345A34415B5129A68038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_OnOperationDestroyCached_m93E5D09DE26A4D00F1F95375E98D53B2416CFD1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_OnOperationDestroyNonCached_m7C5078CF3525865387CE15063E1CE2389465985A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_ProvideResource_m601D10E98FA55391A6CF87035D16C5D4D45BD54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_ProvideScene_m7443C66FADC9A66CA7E073DA080AC25BEB8FAC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_U3C_ctorU3Eb__53_0_m4AFA65601CE387843900AB7A551CD39F414A50CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CInitializeAsyncU3Eb__0_m2152B544B8FC16CFF06127C9098353ADE47B9713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequestUtilities_RequestHasErrors_m279E3F01AE98A968F0DEB22F54F0BB35BF7EF890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestQueue_SetMaxConcurrentRequests_m830CA8C3B21290612D0EC05670BE51CB4E9C1441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ProviderOperation_1_t26B036749D3BEF1757D7CDE7658D1C59426FD3AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D;;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com;;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke;
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke;;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com;;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1;;
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com;
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com;;
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke;
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke;;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95;
struct IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2EDA8CD519BED5983264A60869114EBD8462950A 
{
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_t932E16E3FBFE5A6A290BCE66829B9EBC952556E3* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t82760B5622E48B21F74387D6CA1B0F25D6E599B0* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>
struct AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	bool ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_t41ACA8DED01331F3B3587FDEFC202D1429DA46B4* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>
struct AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_tE369497AF0258DCBC31956F5B9851785CDE755D8* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_t1CC46E6FFAF00F08BFB98C6822E0537C12BFFB73* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13  : public RuntimeObject
{
	// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_referenceCount
	int32_t ___m_referenceCount_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Status
	int32_t ___m_Status_2;
	// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Error
	Exception_t* ___m_Error_3;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_RM
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_RM_4;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_Version
	int32_t ___m_Version_5;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_DestroyedAction
	DelegateList_1_tC070A3D40FCD92D36D6C762C004DDB78978B4F88* ___m_DestroyedAction_6;
	// DelegateList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_CompletedActionT
	DelegateList_1_tE5214C095910CA36010DD471BBF1F8F7EA6D4787* ___m_CompletedActionT_7;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_OnDestroyAction
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_OnDestroyAction_8;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_dependencyCompleteAction
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_dependencyCompleteAction_9;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::HasExecuted
	bool ___HasExecuted_10;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_11;
	// System.Threading.Tasks.TaskCompletionSource`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSource_12;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_taskCompletionSourceTypeless
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_taskCompletionSourceTypeless_13;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_InDeferredCallbackQueue
	bool ___m_InDeferredCallbackQueue_14;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_15;
	// System.Action`1<System.Single> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1::m_UpdateCallback
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_UpdateCallback_16;
};

// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D  : public RuntimeObject
{
	// System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_acquireFunc
	Func_2_tB94F993A5DDDF0C1D7E46D5279CA30600E42FDEF* ___m_acquireFunc_0;
	// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_releaseFunc
	Action_1_t54EC897DFC8848F81D1D78E3F1F700871D4DDF09* ___m_releaseFunc_1;
	// System.Collections.Generic.LinkedList`1<System.Action`1<T>> DelegateList`1::m_callbacks
	LinkedList_1_tAA509CD47BFC477A91DAC780DAE59B2DD17CFAEA* ___m_callbacks_2;
	// System.Boolean DelegateList`1::m_invoking
	bool ___m_invoking_3;
};

// DelegateList`1<System.Single>
struct DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD  : public RuntimeObject
{
	// System.Func`2<System.Action`1<T>,System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_acquireFunc
	Func_2_t41A95935AFF0DB3FD25E84D4B4047C9BA04F25CB* ___m_acquireFunc_0;
	// System.Action`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<T>>> DelegateList`1::m_releaseFunc
	Action_1_t07DD388597F5077D80ED66A6F55632991D676B3B* ___m_releaseFunc_1;
	// System.Collections.Generic.LinkedList`1<System.Action`1<T>> DelegateList`1::m_callbacks
	LinkedList_1_tB39B6153A160F24030669CA5FEF2B343043EC058* ___m_callbacks_2;
	// System.Boolean DelegateList`1::m_invoking
	bool ___m_invoking_3;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD6138F642C83681ADE557DF1B11E60CFF4E735F5* ____entries_1;
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
	KeyCollection_tE4E1B5A02FB0D6BD75E03C433462A8F287C04E9C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9A9B4B5BC3C555F8A5302BB6419569CDD3A94D46* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4CA6A71A3ED5E59DB347F4876C8259DEC4955434* ____entries_1;
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
	KeyCollection_t69A04DEE49132A57AC386BC17C27C5D773DD5027* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t70FFC828DCB872D8711886F829FB957E9E947F1B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCCD045F0F6433C37180994A7564BEB3C1FBBF2B5* ____entries_1;
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
	KeyCollection_tFAC383D7A40C76346ACBCBB59584FBF57DC456C0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD527626E048B2322B37DE65623A1CBA71AF74409* ____entries_1;
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
	KeyCollection_t70A89BD9932A69C1068DB17CEAF967A92E4AC71F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBBF304D6ECE357A0DB09D5C3D70F1AC85AD57946* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB314925F934D4288E8F1FEFD9BAB2450767E315F* ____entries_1;
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
	KeyCollection_t56C9CA539771D68F44D87D0E711E4CFF69326192* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC72ADD3C4A1BECE1A0E419F63C5C423DD518C857* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t6B99CFD639A3651E2F5D7B18D7BCF69B759B7508* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t76C7120C98EF2596C8AA3266633CD5579958662D* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> ListWithEvents`1::m_List
	List_1_t7F62139778BB2054E226E59A7A86F86B57F95362* ___m_List_0;
	// System.Action`1<T> ListWithEvents`1::OnElementAdded
	Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* ___OnElementAdded_1;
	// System.Action`1<T> ListWithEvents`1::OnElementRemoved
	Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* ___OnElementRemoved_2;
};

// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> ListWithEvents`1::m_List
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_List_0;
	// System.Action`1<T> ListWithEvents`1::OnElementAdded
	Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F* ___OnElementAdded_1;
	// System.Action`1<T> ListWithEvents`1::OnElementRemoved
	Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F* ___OnElementRemoved_2;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>
struct List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tB40362575E2E5EBEFC13C380165A5E7D845985F0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_tB40362575E2E5EBEFC13C380165A5E7D845985F0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IAsyncOperationU5BU5D_t038A8F7EFA4A20734A0425FC64571B389DE523DB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IAsyncOperationU5BU5D_t038A8F7EFA4A20734A0425FC64571B389DE523DB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IUpdateReceiverU5BU5D_tD65DA2CEC3E524A934059F101A46091E9382D66D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IUpdateReceiverU5BU5D_tD65DA2CEC3E524A934059F101A46091E9382D66D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_tD25B27535A2152F2A5071985C3699F183881E0EA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD25B27535A2152F2A5071985C3699F183881E0EA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RuntimePlatformU5BU5D_t10C1DFF9151DB36AFB3F413BB55D41FC65355ADA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct List_1_t82E373BCF4E787F0A82707510F7681917A886DB6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UnityWebRequestAsyncOperationU5BU5D_tF27023446417C356BE1BD2CF38F029913A0D8AD1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t82E373BCF4E787F0A82707510F7681917A886DB6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UnityWebRequestAsyncOperationU5BU5D_tF27023446417C356BE1BD2CF38F029913A0D8AD1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InstanceOperationU5BU5D_t60DC02EA4A35757B82C4788B154EA1905C00B24F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InstanceOperationU5BU5D_t60DC02EA4A35757B82C4788B154EA1905C00B24F* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation>
struct Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	WebRequestQueueOperationU5BU5D_t329C186009509CFF862A41707199D22197BE69B8* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ____dictionary_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313
	int64_t ___2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey
struct AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::m_Handles
	HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* ___m_Handles_0;
};

// UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy
struct DefaultAllocationStrategy_t3C220E3485C97638DF666573D735A82EFA2F00B6  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.Util.DependenciesCacheKey
struct DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.Util.DependenciesCacheKey::m_Dependencies
	RuntimeObject* ___m_Dependencies_0;
	// System.Int32 UnityEngine.ResourceManagement.Util.DependenciesCacheKey::m_DependenciesHash
	int32_t ___m_DependenciesHash_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy
struct LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318  : public RuntimeObject
{
	// System.Int32 UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::m_poolMaxSize
	int32_t ___m_poolMaxSize_0;
	// System.Int32 UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::m_poolInitialCapacity
	int32_t ___m_poolInitialCapacity_1;
	// System.Int32 UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::m_poolCacheMaxSize
	int32_t ___m_poolCacheMaxSize_2;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>> UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::m_poolCache
	List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* ___m_poolCache_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>> UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::m_cache
	Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* ___m_cache_4;
};

// UnityEngine.ResourceManagement.Util.LocationCacheKey
struct LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859  : public RuntimeObject
{
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.Util.LocationCacheKey::m_Location
	RuntimeObject* ___m_Location_0;
	// System.Type UnityEngine.ResourceManagement.Util.LocationCacheKey::m_DesiredType
	Type_t* ___m_DesiredType_1;
};

// UnityEngine.ResourceManagement.Util.LocationUtils
struct LocationUtils_t667AEA587C5F9A32A8E72B4AB8F4F6CA87AD9AFC  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.Util.PlatformUtilities
struct PlatformUtilities_t9032CF4FBA517BA5F8FBC4E23E913DE8EC4C13D0  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions
struct ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F  : public RuntimeObject
{
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::m_IgnoreFailures
	bool ___m_IgnoreFailures_0;
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::m_WebRequestTimeout
	int32_t ___m_WebRequestTimeout_1;
};

// UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
struct ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF  : public RuntimeObject
{
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Id
	String_t* ___m_Id_1;
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_ProviderId
	String_t* ___m_ProviderId_2;
	// System.Object UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Data
	RuntimeObject* ___m_Data_3;
	// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_DependencyHashCode
	int32_t ___m_DependencyHashCode_4;
	// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_HashCode
	int32_t ___m_HashCode_5;
	// System.Type UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Type
	Type_t* ___m_Type_6;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_Dependencies
	List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* ___m_Dependencies_7;
	// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::m_PrimaryKey
	String_t* ___m_PrimaryKey_8;
};

// UnityEngine.ResourceManagement.ResourceManager
struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D  : public RuntimeObject
{
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::postProfilerEvents
	bool ___postProfilerEvents_0;
	// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String> UnityEngine.ResourceManagement.ResourceManager::<InternalIdTransformFunc>k__BackingField
	Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ___U3CInternalIdTransformFuncU3Ek__BackingField_2;
	// System.Action`1<UnityEngine.Networking.UnityWebRequest> UnityEngine.ResourceManagement.ResourceManager::<WebRequestOverride>k__BackingField
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ___U3CWebRequestOverrideU3Ek__BackingField_3;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::CallbackHooksEnabled
	bool ___CallbackHooksEnabled_4;
	// ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_ResourceProviders
	ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* ___m_ResourceProviders_5;
	// UnityEngine.ResourceManagement.Util.IAllocationStrategy UnityEngine.ResourceManagement.ResourceManager::m_allocator
	RuntimeObject* ___m_allocator_6;
	// ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceivers
	ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* ___m_UpdateReceivers_7;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver> UnityEngine.ResourceManagement.ResourceManager::m_UpdateReceiversToRemove
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ___m_UpdateReceiversToRemove_8;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_UpdatingReceivers
	bool ___m_UpdatingReceivers_9;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideUpdateMethod
	bool ___m_InsideUpdateMethod_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::m_providerMap
	Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* ___m_providerMap_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_AssetOperationCache
	Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* ___m_AssetOperationCache_12;
	// System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation> UnityEngine.ResourceManagement.ResourceManager::m_TrackedInstanceOperations
	HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* ___m_TrackedInstanceOperations_13;
	// DelegateList`1<System.Single> UnityEngine.ResourceManagement.ResourceManager::m_UpdateCallbacks
	DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* ___m_UpdateCallbacks_14;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCompleteCallbacks
	List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* ___m_DeferredCompleteCallbacks_15;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_InsideExecuteDeferredCallbacksMethod
	bool ___m_InsideExecuteDeferredCallbacksMethod_16;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest> UnityEngine.ResourceManagement.ResourceManager::m_DeferredCallbacksToRegister
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ___m_DeferredCallbacksToRegister_17;
	// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object> UnityEngine.ResourceManagement.ResourceManager::m_obsoleteDiagnosticsHandler
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* ___m_obsoleteDiagnosticsHandler_18;
	// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext> UnityEngine.ResourceManagement.ResourceManager::m_diagnosticsHandler
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* ___m_diagnosticsHandler_19;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseOpNonCached
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpNonCached_20;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseOpCached
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseOpCached_21;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation> UnityEngine.ResourceManagement.ResourceManager::m_ReleaseInstanceOp
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___m_ReleaseInstanceOp_22;
	// UnityEngine.Networking.CertificateHandler UnityEngine.ResourceManagement.ResourceManager::<CertificateHandlerInstance>k__BackingField
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___U3CCertificateHandlerInstanceU3Ek__BackingField_25;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager::m_RegisteredForCallbacks
	bool ___m_RegisteredForCallbacks_26;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> UnityEngine.ResourceManagement.ResourceManager::m_ProviderOperationTypeCache
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___m_ProviderOperationTypeCache_27;
};

struct ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields
{
	// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception> UnityEngine.ResourceManagement.ResourceManager::<ExceptionHandler>k__BackingField
	Action_2_t67647DD70912484E9205AC38396D2849ED602730* ___U3CExceptionHandlerU3Ek__BackingField_1;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_GroupOperationTypeHash
	int32_t ___s_GroupOperationTypeHash_23;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager::s_InstanceOperationTypeHash
	int32_t ___s_InstanceOperationTypeHash_24;
};

// UnityEngine.ResourceManagement.Util.ResourceManagerConfig
struct ResourceManagerConfig_t69059C405C9418E74C55D2FA7EDEFEB9D1875068  : public RuntimeObject
{
};

// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
struct ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29  : public RuntimeObject
{
	// System.String UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::m_ProviderId
	String_t* ___m_ProviderId_0;
	// UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::m_BehaviourFlags
	int32_t ___m_BehaviourFlags_1;
};

// UnityEngine.ResourceManagement.ResourceProviders.SceneProviderExtensions
struct SceneProviderExtensions_t40CA5A29A872B825D9725486E33835A4E5727DD7  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.ResourceManagement.Util.UnityWebRequestResult
struct UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894  : public RuntimeObject
{
	// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_0;
	// System.Int64 UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_1;
	// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_2;
	// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_3;
	// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_4;
};

// UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities
struct UnityWebRequestUtilities_t88C74E09592943CC38DEBD4C743A4FAFA3E17F6F  : public RuntimeObject
{
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

// UnityEngine.ResourceManagement.WebRequestQueue
struct WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2  : public RuntimeObject
{
};

struct WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields
{
	// System.Int32 UnityEngine.ResourceManagement.WebRequestQueue::s_MaxRequest
	int32_t ___s_MaxRequest_0;
	// System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation> UnityEngine.ResourceManagement.WebRequestQueue::s_QueuedOperations
	Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* ___s_QueuedOperations_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> UnityEngine.ResourceManagement.WebRequestQueue::s_ActiveRequests
	List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* ___s_ActiveRequests_2;
};

// UnityEngine.ResourceManagement.WebRequestQueueOperation
struct WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363  : public RuntimeObject
{
	// System.Boolean UnityEngine.ResourceManagement.WebRequestQueueOperation::m_Completed
	bool ___m_Completed_0;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.ResourceManagement.WebRequestQueueOperation::Result
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___Result_1;
	// System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> UnityEngine.ResourceManagement.WebRequestQueueOperation::OnComplete
	Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* ___OnComplete_2;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.ResourceManagement.WebRequestQueueOperation::m_WebRequest
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___m_WebRequest_3;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c
struct U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7  : public RuntimeObject
{
};

struct U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields
{
	// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<>9
	U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<>9__8_0
	Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* ___U3CU3E9__8_0_1;
	// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<>9__11_0
	Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___U3CU3E9__11_0_2;
};

// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C  : public RuntimeObject
{
	// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0::<>4__this
	ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* ___U3CU3E4__this_0;
	// System.String UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0::id
	String_t* ___id_1;
	// System.String UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0::data
	String_t* ___data_2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>
struct AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean>
struct AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>
struct AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>
struct AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t53CEC258A81CC6E6C433249F4DBF1B719395DBD7* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>
struct Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>
struct Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* ____current_3;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
struct AtlasSpriteProvider_tE1B6A6917A900A46726DD1693C7DF1FE60F81E3A  : public ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 
{
	// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Graph
	String_t* ___m_Graph_0;
	// System.Int32[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Dependencies
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Dependencies_1;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_ObjectId
	int32_t ___m_ObjectId_2;
	// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Stream
	int32_t ___m_Stream_4;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Frame
	int32_t ___m_Frame_5;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::m_Value
	int32_t ___m_Value_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke
{
	char* ___m_Graph_0;
	Il2CppSafeArray/*NONE*/* ___m_Dependencies_1;
	int32_t ___m_ObjectId_2;
	char* ___m_DisplayName_3;
	int32_t ___m_Stream_4;
	int32_t ___m_Frame_5;
	int32_t ___m_Value_6;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
struct DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com
{
	Il2CppChar* ___m_Graph_0;
	Il2CppSafeArray/*NONE*/* ___m_Dependencies_1;
	int32_t ___m_ObjectId_2;
	Il2CppChar* ___m_DisplayName_3;
	int32_t ___m_Stream_4;
	int32_t ___m_Frame_5;
	int32_t ___m_Value_6;
};

// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D 
{
	// System.Int64 UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::TotalBytes
	int64_t ___TotalBytes_0;
	// System.Int64 UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::DownloadedBytes
	int64_t ___DownloadedBytes_1;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus::IsDone
	bool ___IsDone_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke
{
	int64_t ___TotalBytes_0;
	int64_t ___DownloadedBytes_1;
	int32_t ___IsDone_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com
{
	int64_t ___TotalBytes_0;
	int64_t ___DownloadedBytes_1;
	int32_t ___IsDone_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation
struct GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE  : public AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D
{
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_InternalOnComplete
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_InternalOnComplete_17;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_LoadedCount
	int32_t ___m_LoadedCount_18;
	// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::m_Settings
	int32_t ___m_Settings_19;
	// UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::<UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key>k__BackingField
	RuntimeObject* ___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_20;
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

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 
{
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_Version
	int32_t ___m_Version_0;
	// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_1;
	// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::m_ResourceManager
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com
{
	int32_t ___m_Version_0;
	RuntimeObject* ___m_InternalOp_1;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___m_ResourceManager_2;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 
{
	// System.String UnityEngine.ResourceManagement.Util.SerializedType::m_AssemblyName
	String_t* ___m_AssemblyName_0;
	// System.String UnityEngine.ResourceManagement.Util.SerializedType::m_ClassName
	String_t* ___m_ClassName_1;
	// System.Type UnityEngine.ResourceManagement.Util.SerializedType::m_CachedType
	Type_t* ___m_CachedType_2;
	// System.Boolean UnityEngine.ResourceManagement.Util.SerializedType::<ValueChanged>k__BackingField
	bool ___U3CValueChangedU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke
{
	char* ___m_AssemblyName_0;
	char* ___m_ClassName_1;
	Type_t* ___m_CachedType_2;
	int32_t ___U3CValueChangedU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Util.SerializedType
struct SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com
{
	Il2CppChar* ___m_AssemblyName_0;
	Il2CppChar* ___m_ClassName_1;
	Type_t* ___m_CachedType_2;
	int32_t ___U3CValueChangedU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
struct TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF  : public ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29
{
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::<IgnoreFailures>k__BackingField
	bool ___U3CIgnoreFailuresU3Ek__BackingField_2;
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

// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest::operation
	RuntimeObject* ___operation_0;
	// System.Boolean UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest::incrementRefCount
	bool ___incrementRefCount_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke
{
	RuntimeObject* ___operation_0;
	int32_t ___incrementRefCount_1;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
struct DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com
{
	RuntimeObject* ___operation_0;
	int32_t ___incrementRefCount_1;
};

// UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp
struct BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C  : public AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9
{
	// System.Func`1<System.Boolean> UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::m_CallBack
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_CallBack_17;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>
struct Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ____current_3;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 
{
	// UnityEngine.Vector3 UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Quaternion UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_1;
	// UnityEngine.Transform UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_Parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Parent_2;
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_InstantiateInWorldPosition
	bool ___m_InstantiateInWorldPosition_3;
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters::m_SetPositionRotation
	bool ___m_SetPositionRotation_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_1;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Parent_2;
	int32_t ___m_InstantiateInWorldPosition_3;
	int32_t ___m_SetPositionRotation_4;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
struct InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_1;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Parent_2;
	int32_t ___m_InstantiateInWorldPosition_3;
	int32_t ___m_SetPositionRotation_4;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider
struct JsonAssetProvider_tDA8FBAA9EAF7DC4CD8F96B0145644401CA29ADDF  : public TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3 
{
	// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::m_Id
	String_t* ___m_Id_0;
	// UnityEngine.ResourceManagement.Util.SerializedType UnityEngine.ResourceManagement.Util.ObjectInitializationData::m_ObjectType
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ___m_ObjectType_1;
	// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::m_Data
	String_t* ___m_Data_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_pinvoke
{
	char* ___m_Id_0;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke ___m_ObjectType_1;
	char* ___m_Data_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.Util.ObjectInitializationData
struct ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_com
{
	Il2CppChar* ___m_Id_0;
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com ___m_ObjectType_1;
	Il2CppChar* ___m_Data_2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<OperationHandle>k__BackingField
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___U3COperationHandleU3Ek__BackingField_0;
	// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// System.Int32 UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<EventValue>k__BackingField
	int32_t ___U3CEventValueU3Ek__BackingField_2;
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Location>k__BackingField
	RuntimeObject* ___U3CLocationU3Ek__BackingField_3;
	// System.Object UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Context>k__BackingField
	RuntimeObject* ___U3CContextU3Ek__BackingField_4;
	// System.String UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke ___U3COperationHandleU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	int32_t ___U3CEventValueU3Ek__BackingField_2;
	RuntimeObject* ___U3CLocationU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CContextU3Ek__BackingField_4;
	char* ___U3CErrorU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
struct DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com ___U3COperationHandleU3Ek__BackingField_0;
	int32_t ___U3CTypeU3Ek__BackingField_1;
	int32_t ___U3CEventValueU3Ek__BackingField_2;
	RuntimeObject* ___U3CLocationU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CContextU3Ek__BackingField_4;
	Il2CppChar* ___U3CErrorU3Ek__BackingField_5;
};

// UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp
struct InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77  : public RuntimeObject
{
	// UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_Provider
	TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* ___m_Provider_0;
	// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_RequestOperation
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___m_RequestOperation_1;
	// UnityEngine.ResourceManagement.WebRequestQueueOperation UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_RequestQueueOperation
	WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* ___m_RequestQueueOperation_2;
	// UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_PI
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___m_PI_3;
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_IgnoreFailures
	bool ___m_IgnoreFailures_4;
	// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_Complete
	bool ___m_Complete_5;
	// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::m_Timeout
	int32_t ___m_Timeout_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.ResourceManagement.Exceptions.OperationException
struct OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434  : public Exception_t
{
};

// UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
struct ResourceManagerException_t49A563CE4851F1491A20EF29BF1E03276FD6ED25  : public Exception_t
{
};

// UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A 
{
	// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::m_Scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene_0;
	// UnityEngine.AsyncOperation UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::m_Operation
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___m_Operation_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_pinvoke
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene_0;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke ___m_Operation_1;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_com
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene_0;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com* ___m_Operation_1;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.ResourceManagement.ResourceManager/InstanceOperation
struct InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644  : public AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject> UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_dependency
	AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA ___m_dependency_17;
	// UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_instantiationParams
	InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 ___m_instantiationParams_18;
	// UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_instanceProvider
	RuntimeObject* ___m_instanceProvider_19;
	// UnityEngine.GameObject UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_instance
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_instance_20;
	// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::m_scene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_scene_21;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>
struct Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>
struct Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>
struct Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.IUpdateReceiver>
struct Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Networking.UnityWebRequest>
struct Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>
struct Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>
struct Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>
struct Action_2_t67647DD70912484E9205AC38396D2849ED602730  : public MulticastDelegate_t
{
};

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>
struct Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42  : public MulticastDelegate_t
{
};

// System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>
struct Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>
struct Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String>
struct Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_tF92F4A9A0EDAB7D3D544AE9B0F3F925C4E48B7CB* ___m_PlayerEditorConnectionEvents_5;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_connectedPlayers_6;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_7;
};

struct PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53_StaticFields
{
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	RuntimeObject* ___connectionNative_4;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* ___s_Instance_8;
};

// UnityEngine.ResourceManagement.Exceptions.ProviderException
struct ProviderException_tCFC98A50C874BCD7FAF64F677F162A3B2C7B09DA  : public OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434
{
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.Exceptions.ProviderException::<Location>k__BackingField
	RuntimeObject* ___U3CLocationU3Ek__BackingField_18;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException
struct UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E  : public ResourceManagerException_t49A563CE4851F1491A20EF29BF1E03276FD6ED25
{
	// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::<Location>k__BackingField
	RuntimeObject* ___U3CLocationU3Ek__BackingField_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ResourceManagement.Exceptions.RemoteProviderException
struct RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131  : public ProviderException_tCFC98A50C874BCD7FAF64F677F162A3B2C7B09DA
{
	// UnityEngine.ResourceManagement.Util.UnityWebRequestResult UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::<WebRequestResult>k__BackingField
	UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* ___U3CWebRequestResultU3Ek__BackingField_19;
};

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>
struct ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B_StaticFields
{
	// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1::s_Instance
	DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* ___s_Instance_4;
};

// UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>
struct ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F_StaticFields
{
	// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1::s_Instance
	MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* ___s_Instance_4;
};

// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
struct DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19  : public ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_CreatedEvents
	Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* ___m_CreatedEvents_6;
	// System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_UnhandledEvents
	List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* ___m_UnhandledEvents_7;
	// DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent> UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::s_EventHandlers
	DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* ___s_EventHandlers_8;
	// System.Single UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_lastTickSent
	float ___m_lastTickSent_9;
	// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::m_lastFrame
	int32_t ___m_lastFrame_10;
	// System.Single UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::fpsAvg
	float ___fpsAvg_11;
};

struct DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields
{
	// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::s_editorConnectionGuid
	Guid_t ___s_editorConnectionGuid_5;
};

// MonoBehaviourCallbackHooks
struct MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F  : public ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F
{
	// System.Action`1<System.Single> MonoBehaviourCallbackHooks::m_OnUpdateDelegate
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___m_OnUpdateDelegate_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[]
struct IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle[]
struct AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562  : public RuntimeArray
{
	ALIGN_FIELD (8) AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D m_Items[1];

	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName_2), (void*)NULL);
		#endif
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_LocationName_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest[]
struct DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD m_Items[1];

	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___operation_0), (void*)NULL);
	}
	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___operation_0), (void*)NULL);
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent[]
struct DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95  : public RuntimeArray
{
	ALIGN_FIELD (8) DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 m_Items[1];

	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Graph_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Dependencies_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisplayName_3), (void*)NULL);
		#endif
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Graph_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Dependencies_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisplayName_3), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_pinvoke(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_pinvoke_back(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke& marshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled);
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_pinvoke_cleanup(SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_com(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_com_back(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com& marshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled);
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_com_cleanup(SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke& marshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_back(const AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com& marshaled, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C& unmarshaled);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_cleanup(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com& marshaled);

// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared (ComponentSingleton_1_t48E072079F42456220A56E31B3AA96C419BB3157* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// System.Void ListWithEvents`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListWithEvents_1_Add_m4A6382E173C1E69354007EF5F096887305038817_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean ListWithEvents`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListWithEvents_1_Remove_mCBD061E4C4AE5B2E97F3CE290BFDEEE08B402913_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void ListWithEvents`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListWithEvents_1__ctor_m6C9BCD931B8604CCDEEE09FFA9C0BCDF44EE977A_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// DelegateList`1<T> DelegateList`1<System.Single>::CreateWithGlobalCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ListWithEvents`1<System.Object>::add_OnElementAdded(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListWithEvents_1_add_OnElementAdded_mFC8915DF283272EEF42FB94DBC575E6B2265BA5A_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) ;
// System.Void ListWithEvents`1<System.Object>::add_OnElementRemoved(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListWithEvents_1_add_OnElementRemoved_m5175138C0788223997DA7E0C193B898F9192DDA0_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentSingleton_1_get_Instance_mB8C0B2A5F8B76C5F24719C25567AD046ABB8D9AB_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_gshared_inline (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Int32Enum,System.Int32,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_m39604FFBE998E6D4F7BF665421372ED2E8F8A9B7_gshared_inline (Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___arg10, int32_t ___arg21, int32_t ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.ResourceManager::CreateCompletedOperationInternal<System.Object>(TObject,System.Boolean,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4_gshared (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___result0, bool ___success1, Exception_t* ___exception2, bool ___releaseDependenciesOnFailure3, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.ResourceManagement.ResourceManager::CreateOperation<System.Object>(System.Type,System.Int32,UnityEngine.ResourceManagement.Util.IOperationCacheKey,System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_CreateOperation_TisRuntimeObject_mC93794045B25B2920886009AA3C215BEDF24713E_gshared (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Type_t* ___actualType0, int32_t ___typeHash1, RuntimeObject* ___cacheKey2, Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___onDestroyAction3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_1_IsValid_mE28D0DEC7BB8A4A921286FD5D7B1FB967CF1C8B1_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_Release_m525B557AF9B665D33B03BB88680B2AEECB00C260_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.ResourceManager::StartOperation<System.Object>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ResourceManager_StartOperation_TisRuntimeObject_m3BF938FE98C0890FD2153D422794292972292913_gshared (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___operation0, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___dependency1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_gshared_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___item0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 AsyncOperationBase_1_get_Handle_m92F0B2A4505ED956DAF6163F3236F7318CFD93CA_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::DecrementReferenceCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_DecrementReferenceCount_m2134F44155382EA2F7CA0CA77A2F3E0E83BA7AD1_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_gshared (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_gshared_inline (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ___item0, const RuntimeMethod* method) ;
// System.Void DelegateList`1<System.Single>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_gshared (DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* __this, float ___res0, const RuntimeMethod* method) ;
// T ListWithEvents`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListWithEvents_1_get_Item_m965E426715FE506B4DE49DEDFCACD018E247FB8B_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 ListWithEvents`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListWithEvents_1_get_Count_m40E9032D66172A330787433B8E0B8769A3D44A17_gshared (ListWithEvents_1_t8929B883E04552186053FBFA4F86DAA5952A1DD7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_gshared (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_gshared (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_gshared_inline (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_gshared (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ComponentSingleton`1<System.Object>::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentSingleton_1_get_Exists_m6BB36CD5D0EFDDAF61773C999FF1B93FC51D2652_gshared (const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_1_get_OperationException_mD78C7A280DECB70FA64B42517EEEEFAB79BE3086_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::Complete(TObject,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_m113C44FFAB7DAA0DCB9C105663C50FA7D9BFD8F8_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___result0, bool ___success1, String_t* ___errorMsg2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210_gshared (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B_gshared (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC_gshared (AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Int32Enum>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___item0, const RuntimeMethod* method) ;
// TDepObject UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::GetDependency<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProvideHandle_GetDependency_TisRuntimeObject_m77ED3D9E890881C77043DB2E0505B68EF2EDFD76_gshared (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::Complete<System.Object>(T,System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_gshared (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, RuntimeObject* ___result0, bool ___status1, Exception_t* ___exception2, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.ResourceManager::StartOperation<System.Boolean>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44_gshared (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* ___operation0, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___dependency1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>::InvokeExecute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06_gshared (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>::Complete(TObject,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7_gshared (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* __this, bool ___result0, bool ___success1, String_t* ___errorMsg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1_gshared (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA_gshared (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541_gshared (RuntimeObject* ___source0, Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* ___keySelector1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_gshared_inline (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___key0, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Int32 DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_gshared (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___res0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22_gshared (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_gshared (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_gshared (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method) ;
// DelegateList`1<T> DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::CreateWithGlobalCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::Complete(TObject,System.Boolean,System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_1_Complete_mCBEB3D85A0C514DB4453265D71CAF90A5FE14D5D_gshared (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___result0, bool ___success1, Exception_t* ___exception2, bool ___releaseDependenciesOnFailure3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_gshared (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>::set_Result(TObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_1_set_Result_m34F12D5AF676CCB4F67BBB1B2608F46833A59257_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>::.ctor()
inline void ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8 (ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F* __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentSingleton_1_tC7B5F2248ADF6892829DAF5987560976C064EC4F*, const RuntimeMethod*))ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared)(__this, method);
}
// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String> UnityEngine.ResourceManagement.ResourceManager::get_InternalIdTransformFunc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ResourceManager_get_InternalIdTransformFunc_mF9E2EB179C238ED082683966C36F07EDC85F9087_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String>::Invoke(T)
inline String_t* Func_2_Invoke_m5ACB72EBF42797086E002C72055E1956520CB18C_inline (Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// System.Void ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::Add(T)
inline void ListWithEvents_1_Add_m07C05127F5995784C13F70693F39FDF17E0BE2F7 (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, RuntimeObject*, const RuntimeMethod*))ListWithEvents_1_Add_m4A6382E173C1E69354007EF5F096887305038817_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>::.ctor()
inline void List_1__ctor_mBF5F50D927699D56A669DA710118E0C7C1221FCD (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>::Add(T)
inline void List_1_Add_mF8A1D8C4023DD582BF228FB67A92A4DE0569CD90_inline (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::Remove(T)
inline bool ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91 (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, RuntimeObject*, const RuntimeMethod*))ListWithEvents_1_Remove_mCBD061E4C4AE5B2E97F3CE290BFDEEE08B402913_gshared)(__this, ___item0, method);
}
// System.Void ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::.ctor()
inline void ListWithEvents_1__ctor_mAB99B6D35767214CAB2BCF1DDBDC7D7E77762F26 (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* __this, const RuntimeMethod* method)
{
	((  void (*) (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB*, const RuntimeMethod*))ListWithEvents_1__ctor_m6C9BCD931B8604CCDEEE09FFA9C0BCDF44EE977A_gshared)(__this, method);
}
// System.Void ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::.ctor()
inline void ListWithEvents_1__ctor_m5D223A2F890ACD04DFFDDEA67A277FE5FF669321 (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, const RuntimeMethod* method)
{
	((  void (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, const RuntimeMethod*))ListWithEvents_1__ctor_m6C9BCD931B8604CCDEEE09FFA9C0BCDF44EE977A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::.ctor()
inline void Dictionary_2__ctor_m56440420FE742E4486843B59035F84FEBC635FA6 (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::.ctor()
inline void Dictionary_2__ctor_mBEE6E02FF5778B06D23A4C8FF8AAE9445DD52EAC (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::.ctor()
inline void HashSet_1__ctor_mB379B57465DF13113C37D5F68A852BFCCA32FE02 (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// DelegateList`1<T> DelegateList`1<System.Single>::CreateWithGlobalCache()
inline DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4 (const RuntimeMethod* method)
{
	return ((  DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* (*) (const RuntimeMethod*))DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::.ctor()
inline void List_1__ctor_m0874F605C0547F0FAAC3ECA80CA427463997DE99 (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Type>::.ctor()
inline void Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729 (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDDF389A58010E142A6ED94EEE29302380C749F0A (Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUCacheAllocationStrategy__ctor_mE90C189EB59AEE251D83C85F1C6422EE3F3FB541 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, int32_t ___poolMaxSize0, int32_t ___poolCapacity1, int32_t ___poolCacheMaxSize2, int32_t ___initialPoolCacheCapacity3, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA2E747297AEB8229ECC90785AEB7B12DD8C75C7C (Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::add_OnElementAdded(System.Action`1<T>)
inline void ListWithEvents_1_add_OnElementAdded_m73653AE5E78DE69A6617034FE70D8203F7CA46A8 (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* __this, Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* ___value0, const RuntimeMethod* method)
{
	((  void (*) (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB*, Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9*, const RuntimeMethod*))ListWithEvents_1_add_OnElementAdded_mFC8915DF283272EEF42FB94DBC575E6B2265BA5A_gshared)(__this, ___value0, method);
}
// System.Void ListWithEvents`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::add_OnElementRemoved(System.Action`1<T>)
inline void ListWithEvents_1_add_OnElementRemoved_m4F049FEC85282FBF40D01BFF4A9583AF6C299440 (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* __this, Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* ___value0, const RuntimeMethod* method)
{
	((  void (*) (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB*, Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9*, const RuntimeMethod*))ListWithEvents_1_add_OnElementRemoved_m5175138C0788223997DA7E0C193B898F9192DDA0_gshared)(__this, ___value0, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.IUpdateReceiver>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5494CAAEBC5CAF6CF9C1692D117897727774656A (Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::add_OnElementAdded(System.Action`1<T>)
inline void ListWithEvents_1_add_OnElementAdded_m1FEBB4EB8F2345E7316837333CECBBE7EAB02CDA (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F* ___value0, const RuntimeMethod* method)
{
	((  void (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F*, const RuntimeMethod*))ListWithEvents_1_add_OnElementAdded_mFC8915DF283272EEF42FB94DBC575E6B2265BA5A_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::AddUpdateReceiver(UnityEngine.ResourceManagement.IUpdateReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddUpdateReceiver_mCEC1DDE2E64507B7210293AC1C5A6E5849AA29B5 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___receiver0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceManager::RemoveUpdateReciever(UnityEngine.ResourceManagement.IUpdateReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RemoveUpdateReciever_mABD054857B61EF2D434CE0EC6E5A0C5989AFBB74 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___receiver0, const RuntimeMethod* method) ;
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>::get_Instance()
inline MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16 (const RuntimeMethod* method)
{
	return ((  MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* (*) (const RuntimeMethod*))ComponentSingleton_1_get_Instance_mB8C0B2A5F8B76C5F24719C25567AD046ABB8D9AB_gshared)(method);
}
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859 (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859_gshared)(__this, ___object0, ___method1, method);
}
// System.Void MonoBehaviourCallbackHooks::add_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_add_OnUpdateDelegate_m75B55B30965281C86C4A349DFBE713833E74853C (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>::Invoke(T)
inline void Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_inline (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F, const RuntimeMethod*))Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_OperationHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_EventValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`4<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.Object>::Invoke(T1,T2,T3,T4)
inline void Action_4_Invoke_mF7B8B5B7B63A45CDA066B9A3D8BAB810B5061296_inline (Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___arg10, int32_t ___arg21, int32_t ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Action_4_Invoke_m39604FFBE998E6D4F7BF665421372ED2E8F8A9B7_gshared_inline)(__this, ___arg10, ___arg21, ___arg32, ___arg43, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m203693F95BCB7EFF18730E2258E6DDDA01E00234 (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D*, int32_t, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::get_ResourceProviders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_get_ResourceProviders_mACBDB6BBAF95684D548E67073ED0067707D87A63_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5B8E8B164F0F2E1C3E97F2D46F4153EB285523D3 (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider UnityEngine.ResourceManagement.ResourceManager::GetResourceProvider(System.Type,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_GetResourceProvider_mFE9FDDC3322999023EF072BA071A2C5207993507 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Type_t* ___t0, RuntimeObject* ___location1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::.ctor(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownResourceProviderException__ctor_mF41159A0C17377B2FA88EEB384873A9E74C0B9D4 (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, RuntimeObject* ___location0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.ResourceManager::CreateCompletedOperationInternal<System.Object>(TObject,System.Boolean,System.Exception,System.Boolean)
inline AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___result0, bool ___success1, Exception_t* ___exception2, bool ___releaseDependenciesOnFailure3, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 (*) (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, RuntimeObject*, bool, Exception_t*, bool, const RuntimeMethod*))ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4_gshared)(__this, ___result0, ___success1, ___exception2, ___releaseDependenciesOnFailure3, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 ___obj0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A_gshared)(___obj0, method);
}
// System.Void UnityEngine.ResourceManagement.Util.LocationCacheKey::.ctor(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationCacheKey__ctor_m282925A8CF5CF9120CF2CC9AAEF5BEACA2CF8148 (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, RuntimeObject* ___location0, Type_t* ___desiredType1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___op0, String_t* ___locationName1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m246913C3D3919A641E1F4C2E74B76E8A3E934B2A (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, Type_t* ___key0, Type_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, Type_t*, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Type>::Add(TKey,TValue)
inline void Dictionary_2_Add_m977BEBE7261BFEF13B96BE8C7CD46BF0945862F4 (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* __this, Type_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*, Type_t*, Type_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.ResourceManagement.ResourceManager::CreateOperation<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>(System.Type,System.Int32,UnityEngine.ResourceManagement.Util.IOperationCacheKey,System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>)
inline RuntimeObject* ResourceManager_CreateOperation_TisIAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_m82B731F92B8FFC8D9B1C415D39786DBBA0F0EF48 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Type_t* ___actualType0, int32_t ___typeHash1, RuntimeObject* ___cacheKey2, Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___onDestroyAction3, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, Type_t*, int32_t, RuntimeObject*, Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E*, const RuntimeMethod*))ResourceManager_CreateOperation_TisRuntimeObject_mC93794045B25B2920886009AA3C215BEDF24713E_gshared)(__this, ___actualType0, ___typeHash1, ___cacheKey2, ___onDestroyAction3, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> UnityEngine.ResourceManagement.ResourceManager::ProvideResourceGroupCached(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,System.Int32,System.Type,System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ResourceManager_ProvideResourceGroupCached_m4BE9B9B2D6DD75747B7978BC8EC9664FCDBD10C2 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___locations0, int32_t ___groupHash1, Type_t* ___desiredType2, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___callback3, bool ___releaseDependenciesOnFailure4, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_m84DEAEF957377A11468409BE77C9BE51D0BF267E (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ___obj0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A_gshared)(___obj0, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager::StartOperation(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ResourceManager_StartOperation_mF353B4A27D8904A5BE0CA88DCECD34BFFF283428 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___operation0, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___dependency1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::set_LocationName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C_inline (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::IsValid()
inline bool AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_IsValid_mE28D0DEC7BB8A4A921286FD5D7B1FB967CF1C8B1_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::Release()
inline void AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1 (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90*, const RuntimeMethod*))AsyncOperationHandle_1_Release_m525B557AF9B665D33B03BB88680B2AEECB00C260_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::Remove(T)
inline bool HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5 (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* __this, InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267*, InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// UnityEngine.ResourceManagement.Util.IAllocationStrategy UnityEngine.ResourceManagement.ResourceManager::get_Allocator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_get_Allocator_m2F215AF545EE1A8EEDEBFBFACA32D5E0B44A74B3_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::RemoveOperationFromCache(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_RemoveOperationFromCache_m1CB4CDFB4320AE9B7191BCE7F77441274F5A42FD (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::IsOperationCached(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD674AEED11B3C58424C02EE2D7AC9AFE4E062196 (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Remove(TKey)
inline bool Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920 (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4 (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::.ctor(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOpHandlesCacheKey__ctor_mCA58B5FAB01E383F945DD6912328198DA13FA90E (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, RuntimeObject* ___handles0, const RuntimeMethod* method) ;
// T UnityEngine.ResourceManagement.ResourceManager::CreateOperation<UnityEngine.ResourceManagement.AsyncOperations.GroupOperation>(System.Type,System.Int32,UnityEngine.ResourceManagement.Util.IOperationCacheKey,System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>)
inline GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Type_t* ___actualType0, int32_t ___typeHash1, RuntimeObject* ___cacheKey2, Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* ___onDestroyAction3, const RuntimeMethod* method)
{
	return ((  GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* (*) (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, Type_t*, int32_t, RuntimeObject*, Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E*, const RuntimeMethod*))ResourceManager_CreateOperation_TisRuntimeObject_mC93794045B25B2920886009AA3C215BEDF24713E_gshared)(__this, ___actualType0, ___typeHash1, ___cacheKey2, ___onDestroyAction3, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Init_m8C19E45ECB5A7DB7895A83EE0F918CEF60FD932E (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___operations0, bool ___releaseDependenciesOnFailure1, bool ___allowFailedDependencies2, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.ResourceManager::StartOperation<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
inline AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* ___operation0, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___dependency1, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 (*) (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, const RuntimeMethod*))ResourceManager_StartOperation_TisRuntimeObject_m3BF938FE98C0890FD2153D422794292972292913_gshared)(__this, ___operation0, ___dependency1, method);
}
// System.Void UnityEngine.ResourceManagement.Util.DependenciesCacheKey::.ctor(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependenciesCacheKey__ctor_mF897DD52A12FB3D9A8A636072A04F00E73F9AC75 (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, RuntimeObject* ___dependencies0, int32_t ___dependenciesHash1, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation UnityEngine.ResourceManagement.ResourceManager::AcquireGroupOpFromCache(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* ResourceManager_AcquireGroupOpFromCache_mD24182CB63E47A7EB10183750BA4038050934A52 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Int32)
inline void List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, int32_t, const RuntimeMethod*))List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C_gshared)(__this, ___capacity0, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager::ProvideResource(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ResourceManager_ProvideResource_m601D10E98FA55391A6CF87035D16C5D4D45BD54F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___location0, Type_t* ___desiredType1, bool ___releaseDependenciesOnFailure2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::Add(T)
inline void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, const RuntimeMethod*))List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::get_Handle()
inline AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 AsyncOperationBase_1_get_Handle_mC58CFF62938BB4FA4A5B837A1BDF8149D155237C (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, const RuntimeMethod*))AsyncOperationBase_1_get_Handle_m92F0B2A4505ED956DAF6163F3236F7318CFD93CA_gshared)(__this, method);
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::GetDependentOps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroupOperation_GetDependentOps_m9FE0CB241C9F3630AA74C2C00539CECFD817B1D4 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::GetEnumerator()
inline Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D HashSet_1_GetEnumerator_mE2194F2C0ACF18DD410E9D96ACC52F48A7C39406 (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D (*) (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::Dispose()
inline void Enumerator_Dispose_m4BF36A217D139B0FC6B74E244C7D1F8C181F6D49 (Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::get_Current()
inline InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* Enumerator_get_Current_m56185EE15CA5C41150CF444029481A4E55B6C297_inline (Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D* __this, const RuntimeMethod* method)
{
	return ((  InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* (*) (Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>::get_Result()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AsyncOperationBase_1_get_Result_m8A32166FCB4813A4B54798D53F974F171267A245_inline (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16*, const RuntimeMethod*))AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::InstanceScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 InstanceOperation_InstanceScene_m673A930720C94D7EC8618855441A78A4D2A576D2_inline (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::op_Equality(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___lhs0, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::.ctor()
inline void List_1__ctor_m6BB395D2DDC0A487188FA876E26C141EF79B11A4 (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::Add(T)
inline void List_1_Add_m014143AAFCA106D6E36C6A88818861FD48953769_inline (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* __this, InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D*, InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::MoveNext()
inline bool Enumerator_MoveNext_m10C389A6DBA35D31ACF0EC671829A31C91160832 (Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::GetEnumerator()
inline Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41 List_1_GetEnumerator_m11819623C6E00A9404CE43691FA16278B8AD92B7 (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41 (*) (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::Dispose()
inline void Enumerator_Dispose_mFDEC7DAC09787567E422F5E2F0E98E612D2425CB (Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::get_Current()
inline InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* Enumerator_get_Current_mC12651338B151B0405245C9315E8A43D3EAC4639_inline (Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41* __this, const RuntimeMethod* method)
{
	return ((  InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* (*) (Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>::DecrementReferenceCount()
inline void AsyncOperationBase_1_DecrementReferenceCount_mB2C06A8ED8A24759AA3764B5807A3BC2A3FAD886 (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16*, const RuntimeMethod*))AsyncOperationBase_1_DecrementReferenceCount_m2134F44155382EA2F7CA0CA77A2F3E0E83BA7AD1_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/InstanceOperation>::MoveNext()
inline bool Enumerator_MoveNext_mE1F9ECAF1066E4608E8F05006734376B9F94A51C (Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::get_Count()
inline int32_t List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_inline (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Clear()
inline void List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_inline (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::.ctor()
inline void List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, const RuntimeMethod*))List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Add(T)
inline void List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_inline (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD, const RuntimeMethod*))List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation>::Add(T)
inline void List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_inline (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DelegateList`1<System.Single>::Invoke(T)
inline void DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A (DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* __this, float ___res0, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD*, float, const RuntimeMethod*))DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_gshared)(__this, ___res0, method);
}
// T ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::get_Item(System.Int32)
inline RuntimeObject* ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, int32_t, const RuntimeMethod*))ListWithEvents_1_get_Item_m965E426715FE506B4DE49DEDFCACD018E247FB8B_gshared)(__this, ___index0, method);
}
// System.Int32 ListWithEvents`1<UnityEngine.ResourceManagement.IUpdateReceiver>::get_Count()
inline int32_t ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84 (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*, const RuntimeMethod*))ListWithEvents_1_get_Count_m40E9032D66172A330787433B8E0B8769A3D44A17_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.IUpdateReceiver>::GetEnumerator()
inline Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09 (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E (*) (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>::Dispose()
inline void Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208 (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_inline (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.IUpdateReceiver>::MoveNext()
inline bool Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850 (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::GetEnumerator()
inline Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, const RuntimeMethod*))List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::Dispose()
inline void Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8 (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676*, const RuntimeMethod*))Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::get_Current()
inline DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_inline (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method)
{
	return ((  DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD (*) (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676*, const RuntimeMethod*))Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForDeferredCallback(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForDeferredCallback_m05889AD5E7D950770177A9B2920B4736546B0225 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___op0, bool ___incrementRefCount1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest>::MoveNext()
inline bool Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247 (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676*, const RuntimeMethod*))Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::ExecuteDeferredCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_ExecuteDeferredCallbacks_m7BB2468360D4AAF86E437E93E9D52E134AE4AA7F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ComponentSingleton`1<MonoBehaviourCallbackHooks>::get_Exists()
inline bool ComponentSingleton_1_get_Exists_m00642B1C84956EFA4526544421447D3E17EC6A25 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))ComponentSingleton_1_get_Exists_m6BB36CD5D0EFDDAF61773C999FF1B93FC51D2652_gshared)(method);
}
// System.Void MonoBehaviourCallbackHooks::remove_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_remove_OnUpdateDelegate_mE887431AD33057B98989EEA888B2342D18FB5DE4 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::.ctor(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___op0, int32_t ___type1, int32_t ___eventValue2, String_t* ___error3, RuntimeObject* ___context4, const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::get_OperationException()
inline Exception_t* AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* __this, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*, const RuntimeMethod*))AsyncOperationHandle_1_get_OperationException_mD78C7A280DECB70FA64B42517EEEEFAB79BE3086_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>::get_Status()
inline int32_t AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22 (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA*, const RuntimeMethod*))AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.GameObject::get_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.GameObject>::Complete(TObject,System.Boolean,System.String)
inline void AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535 (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___result0, bool ___success1, String_t* ___errorMsg2, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, String_t*, const RuntimeMethod*))AsyncOperationBase_1_Complete_m113C44FFAB7DAA0DCB9C105663C50FA7D9BFD8F8_gshared)(__this, ___result0, ___success1, ___errorMsg2, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::Invoke(T)
inline void Action_1_Invoke_mD1436EAF0C596E023C15E9A1FA4985BFB21288AD_inline (Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250*, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.WebRequestQueueOperation::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueueOperation__ctor_mF6E7DC7A72C723056182035AAFFA7B28AF1F0007 (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::get_Count()
inline int32_t List_1_get_Count_m163E0BCFFFE7089C8C9AC958FEB33BA0B3A5A54B_inline (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::Add(T)
inline void List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_inline (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6*, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.WebRequestQueue::OnWebAsyncOpComplete(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___operation0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.WebRequestQueueOperation::Complete(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueueOperation_Complete_m74FC3854CF7B21E72C64FE945830A6250BBD127D (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___asyncOp0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation>::Enqueue(T)
inline void Queue_1_Enqueue_m0DD398F7245C086B22C76E92CB2235D0BB5FE245 (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* __this, WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA*, WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::Remove(T)
inline bool List_1_Remove_mB0D828397E974329BA517D9B3BB7557FFCC33FF0 (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6*, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation>::get_Count()
inline int32_t Queue_1_get_Count_mC12F41F95A31993607B72C5E085A6069F898F4FA_inline (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation>::Dequeue()
inline WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* Queue_1_Dequeue_m37D7368D06F6D745D0A18C888DB41A4B3D71D99D (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* __this, const RuntimeMethod* method)
{
	return ((  WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* (*) (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.ResourceManagement.WebRequestQueueOperation>::.ctor()
inline void Queue_1__ctor_m7E67C88DF661BC06EDA394F77B91D108A7E62AAD (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::.ctor()
inline void List_1__ctor_mE2C973AD758CCD80E5B081D3831EC32196ECB651 (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.Exception::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.ResourceManagerException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManagerException__ctor_m100F5F75AE8F119C04634B839871DECF2A9E3773 (ResourceManagerException_t49A563CE4851F1491A20EF29BF1E03276FD6ED25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::set_Location(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnknownResourceProviderException_set_Location_mC4689284960B91DB49E674BDAF259530C3F4B421_inline (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnknownResourceProviderException_get_Location_mC769291CC27D81B8573117354AB08E222DD68CF8_inline (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.OperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59 (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.ProviderException::.ctor(System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderException__ctor_m298FE0E1B736CBE00C44FDC9D6C960F7A927830D (ProviderException_tCFC98A50C874BCD7FAF64F677F162A3B2C7B09DA* __this, String_t* ___message0, RuntimeObject* ___location1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.Util.UnityWebRequestResult UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::get_WebRequestResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* RemoteProviderException_get_WebRequestResult_mF80BDC58604D4D5C44AB968FA544CFD30C330954_inline (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Exceptions.OperationException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationException_ToString_m8544F18BF5A2A8B6194DBF46F672DB8C128AA34D (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.LocationCacheKey::Equals(UnityEngine.ResourceManagement.Util.LocationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationCacheKey_Equals_m8BEF54161FE13E606502DC9D9A6B2C40503E89BF (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.LocationUtils::LocationEquals(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationUtils_LocationEquals_mC3D9B9DDD65080AC7652DB8F0B4F530D3162644D (RuntimeObject* ___loc10, RuntimeObject* ___loc21, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1 (RuntimeObject* ___objA0, RuntimeObject* ___objB1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.DependenciesCacheKey::Equals(UnityEngine.ResourceManagement.Util.DependenciesCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependenciesCacheKey_Equals_m42F09EA998F1BA6F2B524D9668DD4A9FBFCF71CF (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.LocationUtils::DependenciesEqual(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationUtils_DependenciesEqual_mD9543DEC085FF2A93C8A96491E7429506D712C93 (RuntimeObject* ___deps10, RuntimeObject* ___deps21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210 (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210_gshared)(__this, ___collection0, method);
}
// System.Boolean UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::Equals(UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOpHandlesCacheKey_Equals_mAB06D007F68B5910A36E6C97D278147D1541F3E3 (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* ___other0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
inline bool HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1*, RuntimeObject*, const RuntimeMethod*))HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B_gshared)(__this, ___other0, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::.ctor()
inline void List_1__ctor_m415DE8EE7AC4955152AD10C91B3825EEAB8B1A2B (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>::.ctor()
inline void Dictionary_2__ctor_m165D9B0D453292403ABCB37C534180409C3BA4BA (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::Add(T)
inline void List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_inline (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::get_Count()
inline int32_t List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_inline (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::get_Item(System.Int32)
inline List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_get_Item_m92DF89FE6F5A0E35A97FEC041F0D3030DECABA09 (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Object>>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0AD5393DCD4AE01CE936639400C74F02DACD0C44 (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796 (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* __this, int32_t ___key0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116*, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>::Remove(TKey)
inline bool Dictionary_2_Remove_m7190C6CFEC27F812D251BD1E4A0DFA3CB561634A (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::ReleasePool(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUCacheAllocationStrategy_ReleasePool_m3137C6983551DC95420A39C44E61ECA466A75B63 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___pool0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::GetPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* LRUCacheAllocationStrategy_GetPool_mB62AD68905391E611B6DB22C295DEF5D0A883AD5 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m760F534C63E8FB529B19A190CD31B6627F0212BC (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* __this, int32_t ___key0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116*, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Type UnityEngine.ResourceManagement.Util.SerializedType::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A (SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Util.SerializedType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedType_ToString_m286E5553A848CA6C472FCE478B65C01B3B2AA5E7 (SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* __this, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_m718E55A40D92C7BBE26812A9A7998BDF166C0BD2 (String_t* ___assemblyString0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Assembly::op_Inequality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Inequality_m62E003A7871F22BC6129B2D00B4C243D995C21CA (Assembly_t* ___left0, Assembly_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ObjectInitializationData_get_Id_m8B020C841845122EF9123BD5E136F6A3FEC3496F_inline (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.Util.SerializedType UnityEngine.ResourceManagement.Util.ObjectInitializationData::get_ObjectType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ObjectInitializationData_get_ObjectType_m7706EB3247D33B65F062CDEEB40792A27B8ABF69_inline (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectInitializationData_ToString_m730570E98783E54D1B6A2ED0178E05A2DE394593 (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m2767C14E0050C13BDB2732D7223FE17A9FA0F61A (Type_t* ___type0, bool ___nonPublic1, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean>::op_Implicit(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>)
inline AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC (AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 ___obj0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D (*) (AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66, const RuntimeMethod*))AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC_gshared)(___obj0, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.Util.ObjectInitializationData::GetAsyncInitHandle(UnityEngine.ResourceManagement.ResourceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ObjectInitializationData_GetAsyncInitHandle_m0017D1CE9481015847F724E9E22C481A2CFDF2FC (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, String_t* ___idOverride1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::PlatformCanLoadLocallyFromUrlPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_PlatformCanLoadLocallyFromUrlPath_m87864A7635E5E1EBEF5EC8CBA395A20D3B12AF23 (const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>::.ctor()
inline void List_1__ctor_m28B0FD0F2221E9A428AC7053440E7DCCED821913 (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA*, const RuntimeMethod*))List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>::Add(T)
inline void List_1_Add_m8D3A001B04748E316D277F1F7195E4A759B6261B_inline (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>::Contains(T)
inline bool List_1_Contains_mCC1DF00335ECC0520B9FD7A9E551F6CE8D8CD02F (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA*, int32_t, const RuntimeMethod*))List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.UnityWebRequestResult::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestResult__ctor_mE837C228770475E93E476203E7EFCA9BDC807168 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_error_mE1A0FFCC1F3CC14567E6A9565C6EF08CDC04583E (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Util.UnityWebRequestResult::set_Error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestResult_set_Error_mB8AB258796A2F29BB387F34222FFA59EA3431009_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_mEA8B59A692AEF09BF469AB6A8B5A8F8C22435AB9 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityWebRequestResult_get_Result_mFA65ADAE33B5F1037C60A4F544F54800114B8DDA_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Error_m84C4381776A6467DE9CC4DB3797661F1519FBDF5_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_ResponseCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnityWebRequestResult_get_ResponseCode_m9587BFE958C864F3B4744E78890AE09C1E5CF3E2_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Method_m170F095C8F0E614D35EC882874DA221CF7FD372D_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Url_m692560D0BC25EA558272192CED8409364335F477_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// TDepObject UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::GetDependency<UnityEngine.U2D.SpriteAtlas>(System.Int32)
inline SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ProvideHandle_GetDependency_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mC4E42E0DFEC6ED85E28C53108C121CC793C3E4E6 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* (*) (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*, int32_t, const RuntimeMethod*))ProvideHandle_GetDependency_TisRuntimeObject_m77ED3D9E890881C77043DB2E0505B68EF2EDFD76_gshared)(__this, ___index0, method);
}
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::Complete<UnityEngine.Sprite>(T,System.Boolean,System.Exception)
inline void ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___result0, bool ___status1, Exception_t* ___exception2, const RuntimeMethod* method)
{
	((  void (*) (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, bool, Exception_t*, const RuntimeMethod*))ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_gshared)(__this, ___result0, ___status1, ___exception2, method);
}
// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_ResourceManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_inline (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.ResourceManager::TransformInternalId(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceManager_TransformInternalId_m2C99EDD12AF07F099F7FF88E15892F2582C17EB9 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___location0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::ExtractKeyAndSubKey(System.Object,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_ExtractKeyAndSubKey_mC40036045901BD802809D55A9D99B730CB5B2C49 (RuntimeObject* ___keyObj0, String_t** ___mainKey1, String_t** ___subKey2, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.U2D.SpriteAtlas::GetSprite(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteAtlas_GetSprite_mB6EF48B9BD76CF0A80BE86401B6D67DD6C55F501 (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::.ctor(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, RuntimeObject* ___op1, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ProvideHandle_get_Type_mD0CC7F89812DD44851B9D52DA6960B1671A86559 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::GetDependencies(System.Collections.Generic.IList`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_GetDependencies_m369FC67ECDB4E574C6BC9961896C384189EAFBAD (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::SetProgressCallback(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_SetProgressCallback_m5D44473DCD8CEB54FB41063B2C2105220822094D (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___callback0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::SetWaitForCompletionCallback(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_SetWaitForCompletionCallback_m2B606A689DD5A940581F9C0F87C4B6B6714BE7A2 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___callback0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::get_Scene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_inline (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_GetHashCode_m74ACBFB8C656D5620A9A1E62D04E55ACBF63ADC9 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInstance_GetHashCode_m0C1E8F653E55633F9897B5FC62D7D4B7B1D340F4 (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneInstance_Equals_m10E8D14BA2C3057166479C12D2514056E8ACB6AD (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_mCA93DB12788DA2F120D6EC81758D3189D9341815 (String_t* ___json0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDataProvider__ctor_m0F85BC00939981B4C817E850285C97FB9E26243E (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mA5E2487B070975CC79B933A4F89E400047EC712B (U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInitAsyncOp__ctor_m13B9AD12D8F36FC0B8DD5B72AE71117B3F8ADA1E (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::Init(System.Func`1<System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseInitAsyncOp_Init_mA692A84282503E756732EB5AED2D184E17C8896B_inline (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___callback0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> UnityEngine.ResourceManagement.ResourceManager::StartOperation<System.Boolean>(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
inline AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* ___operation0, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___dependency1, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 (*) (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, const RuntimeMethod*))ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44_gshared)(__this, ___operation0, ___dependency1, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, float ___unscaledDeltaTime0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>::InvokeExecute()
inline void AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06 (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9*, const RuntimeMethod*))AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06_gshared)(__this, method);
}
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>::Complete(TObject,System.Boolean,System.String)
inline void AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7 (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* __this, bool ___result0, bool ___success1, String_t* ___errorMsg2, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9*, bool, bool, String_t*, const RuntimeMethod*))AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7_gshared)(__this, ___result0, ___success1, ___errorMsg2, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Boolean>::.ctor()
inline void AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1 (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9* __this, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9*, const RuntimeMethod*))AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1_gshared)(__this, method);
}
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp__ctor_m5C2E4773471AE3A4E9D940D1CD799A838ED4AF7A (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle,UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_Start_mF7F18148ECFF3E5EDA8852B71F507C6948CECCA3 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___provideHandle0, TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* ___rawProvider1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceProviderBase__ctor_mAE12700496F4A8B1363AB851FD48F2101278CBF9 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71 (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::get_IgnoreFailures()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProviderLoadRequestOptions_get_IgnoreFailures_m38F1966139843C0C98C3598834A3BCCD9700962F_inline (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::get_WebRequestTimeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProviderLoadRequestOptions_get_WebRequestTimeout_m81BA0608C118ECD1ED8AD0732A626E747418320B_inline (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::get_IgnoreFailures()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextDataProvider_get_IgnoreFailures_m8BC123BCDA3C358B9EF223382A5ABA14C41D8D61_inline (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::ShouldPathUseWebRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_ShouldPathUseWebRequest_mB9DF52370947A6BD9AE5565F9E7E467CC4C69DF7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::ConvertText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalOp_ConvertText_m399662CFEB5F933894A69BF4DAC04E9DEE3E60B5 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::Complete<System.Object>(T,System.Boolean,System.Exception)
inline void ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, RuntimeObject* ___result0, bool ___status1, Exception_t* ___exception2, const RuntimeMethod* method)
{
	((  void (*) (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*, RuntimeObject*, bool, Exception_t*, const RuntimeMethod*))ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_gshared)(__this, ___result0, ___status1, ___exception2, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::RequestOperation_completed(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___op0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities::RequestHasErrors(UnityEngine.Networking.UnityWebRequest,UnityEngine.ResourceManagement.Util.UnityWebRequestResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtilities_RequestHasErrors_m279E3F01AE98A968F0DEB22F54F0BB35BF7EF890 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___webReq0, UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894** ___result1, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::.ctor(System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.ResourceManagement.Util.UnityWebRequestResult,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteProviderException__ctor_mB262F595DD1E23F24A37B5AB6142B8180CFF70C1 (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, String_t* ___message0, RuntimeObject* ___location1, UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* ___uwrResult2, Exception_t* ___innerException3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::CompleteOperation(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_CompleteOperation_mBA10749B5FBBCEBF6FC6EDE8F74436482E0CD108 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, String_t* ___text0, Exception_t* ___exception1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___downloadHandler2, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___uploadHandler3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Action`1<UnityEngine.Networking.UnityWebRequest> UnityEngine.ResourceManagement.ResourceManager::get_WebRequestOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ResourceManager_get_WebRequestOverride_m5B5944646CCCFEC195AF713DC15F490EDA9EDC12_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequest>::Invoke(T)
inline void Action_1_Invoke_m2E790BB44663BD4EAAA462F9539D3DCDE112377C_inline (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70*, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.ResourceManagement.WebRequestQueueOperation UnityEngine.ResourceManagement.WebRequestQueue::QueueRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* WebRequestQueue_QueueRequest_m1AAE9197B721E4492F136343B2636079F4E48E08 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.WebRequestQueueOperation::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestQueueOperation_get_IsDone_mF8B3459F19B874A0D0047DDEA4DCCF2FA0DFF813 (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m93FC38C0E82985AE811B2D49F8695FC5D7CFDBCB (Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Count()
inline int32_t List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_inline (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_DependencyHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceLocationBase_get_DependencyHashCode_m9E0B40B30D210863CD93FF3B49931192022F7E86_inline (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m52F885C20FA219E167AAE5D39AACDF81C54D78D4 (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::ComputeDependencyHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceLocationBase_ComputeDependencyHash_m4436815CB535B21F7DD09593479AB5EF5DBD2D2F (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::GetEnumerator()
inline Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12 List_1_GetEnumerator_m6F8E4B0F2D06EFD4033EA1CCF89B7E8FBD6BBE82 (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12 (*) (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::Dispose()
inline void Enumerator_Dispose_mBC9C07D05B2D0077FB70A8F4611FA91418BA4EB9 (Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5E7A2AB1F8E51C1FCAAEA832275730E3430F404E_inline (Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::MoveNext()
inline bool Enumerator_MoveNext_m1F5159DDE57F06EC87D8A60A258CD1D9BBD149F5 (Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_ObjectId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_inline (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Stream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_inline (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Frame()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B_inline (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::.ctor(System.String,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, String_t* ___graph0, String_t* ___name1, int32_t ___id2, int32_t ___stream3, int32_t ___frame4, int32_t ___value5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___deps6, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB (Guid_t* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>::get_Exists()
inline bool ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))ComponentSingleton_1_get_Exists_m6BB36CD5D0EFDDAF61773C999FF1B93FC51D2652_gshared)(method);
}
// T UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>::get_Instance()
inline DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576 (const RuntimeMethod* method)
{
	return ((  DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* (*) (const RuntimeMethod*))ComponentSingleton_1_get_Instance_mB8C0B2A5F8B76C5F24719C25567AD046ABB8D9AB_gshared)(method);
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___handler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___handler0, const RuntimeMethod* method) ;
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(System.Action`1<T>)
inline void DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___action0, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, const RuntimeMethod*))DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_gshared)(__this, ___action0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Values()
inline ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73_gshared)(___first0, ___second1, method);
}
// System.Void System.Func`2<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent,System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541 (RuntimeObject* ___source0, Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3*, const RuntimeMethod*))Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541_gshared)(___source0, ___keySelector1, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
inline void Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_inline (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Clear()
inline void List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, const RuntimeMethod*))List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_gshared_inline)(__this, method);
}
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(System.Action`1<T>)
inline void DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___action0, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, const RuntimeMethod*))DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_gshared)(__this, ___action0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984 (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___key0, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Remove(TKey)
inline bool Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_gshared)(__this, ___key0, method);
}
// System.Int32 DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Count()
inline int32_t DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, const RuntimeMethod*))DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_gshared)(__this, method);
}
// System.Void DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Invoke(T)
inline void DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7 (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___res0, const RuntimeMethod* method)
{
	((  void (*) (DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_gshared)(__this, ___res0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::Add(T)
inline void List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22 (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22_gshared)(__this, ___object0, ___method1, method);
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Profiling.Profiler::GetMonoUsedSizeLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Profiler_GetMonoUsedSizeLong_mCDD779E458BC852AF19E5A9299F87A82F64F95F6 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___diagnosticEvent0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
inline void Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*, const RuntimeMethod*))Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::.ctor()
inline void List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02 (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, const RuntimeMethod*))List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_gshared)(__this, method);
}
// DelegateList`1<T> DelegateList`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::CreateWithGlobalCache()
inline DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57 (const RuntimeMethod* method)
{
	return ((  DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* (*) (const RuntimeMethod*))DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57_gshared)(method);
}
// System.Void UnityEngine.ResourceManagement.Util.ComponentSingleton`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton>::.ctor()
inline void ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339 (ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B* __this, const RuntimeMethod* method)
{
	((  void (*) (ComponentSingleton_1_t72FE88792928B5CD2047657E9122FA6E177CA55B*, const RuntimeMethod*))ComponentSingleton_1__ctor_mE3C6A56ADC464B0E183DD01ACE533B50F1B3E365_gshared)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E8AE3390AA2F226FD9AE66A810054796F6E3EF7 (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* PlayerConnection_get_instance_m8F2B9C9F3AF41AC7A2FB617B5A700811E2444C14 (const RuntimeMethod* method) ;
// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::get_PlayerConnectionGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_mE56989BF7B4960ED343C6381AC15DF6A8056CECB (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection::Send(System.Guid,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerConnection_Send_mBFE41D75C28DF0885455CE809D40C489818F91B7 (PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* __this, Guid_t ___messageId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___op0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___op0, int32_t ___version1, String_t* ___locationName2, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Equals(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_DebugName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___deps0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_PercentComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
inline void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
inline bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::InternalGetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___visited0, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::get_Result()
inline RuntimeObject* AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, const RuntimeMethod*))AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::CompleteIfDependenciesComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::Complete(TObject,System.Boolean,System.Exception,System.Boolean)
inline void AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8 (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, RuntimeObject* ___result0, bool ___success1, Exception_t* ___exception2, bool ___releaseDependenciesOnFailure3, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, RuntimeObject*, bool, Exception_t*, bool, const RuntimeMethod*))AsyncOperationBase_1_Complete_mCBEB3D85A0C514DB4453265D71CAF90A5FE14D5D_gshared)(__this, ___result0, ___success1, ___exception2, ___releaseDependenciesOnFailure3, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>::set_Result(TObject)
inline void AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationBase_1_tCC65551FCDC4815E9F1832A0CE7BDA8E2BF09F3D*, RuntimeObject*, const RuntimeMethod*))AsyncOperationBase_1_set_Result_m34F12D5AF676CCB4F67BBB1B2608F46833A59257_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void MonoBehaviourCallbackHooks::add_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_add_OnUpdateDelegate_m75B55B30965281C86C4A349DFBE713833E74853C (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_OnUpdateDelegate += value;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___m_OnUpdateDelegate_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_OnUpdateDelegate_5 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnUpdateDelegate_5), (void*)((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void MonoBehaviourCallbackHooks::remove_OnUpdateDelegate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_remove_OnUpdateDelegate_mE887431AD33057B98989EEA888B2342D18FB5DE4 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_OnUpdateDelegate -= value;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___m_OnUpdateDelegate_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = ___value0;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_0, L_1, NULL);
		__this->___m_OnUpdateDelegate_5 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnUpdateDelegate_5), (void*)((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_2, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.String MonoBehaviourCallbackHooks::GetGameObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonoBehaviourCallbackHooks_GetGameObjectName_m5E0B21C825DC616AC283318401D06368388779FD (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1CB6A68B8428D5E87DFAD85994359922F906838);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string GetGameObjectName() => "ResourceManagerCallbacks";
		return _stringLiteralC1CB6A68B8428D5E87DFAD85994359922F906838;
	}
}
// System.Void MonoBehaviourCallbackHooks::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks_Update_m78B3E22F89771DAF1DF875FA9143E1071C29A1B2 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, const RuntimeMethod* method) 
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B2_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B1_0 = NULL;
	{
		// m_OnUpdateDelegate?.Invoke(Time.unscaledDeltaTime);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___m_OnUpdateDelegate_5;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void MonoBehaviourCallbackHooks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourCallbackHooks__ctor_mBC4522B5FA1CA9A734337F48AEDE1A66F2C75796 (MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8(__this, ComponentSingleton_1__ctor_m3EA0A6453A0D409452BB226CAF4AA0A535DC37C8_RuntimeMethod_var);
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
// System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception> UnityEngine.ResourceManagement.ResourceManager::get_ExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t67647DD70912484E9205AC38396D2849ED602730* ResourceManager_get_ExceptionHandler_m93DC1FDC116D254AC5C2E6E6CD1E6B1408758F9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<AsyncOperationHandle, Exception> ExceptionHandler { get; set; }
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		Action_2_t67647DD70912484E9205AC38396D2849ED602730* L_0 = ((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___U3CExceptionHandlerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::set_ExceptionHandler(System.Action`2<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_set_ExceptionHandler_m71D4534265D06A46144F342836EE6D7AD4338CAA (Action_2_t67647DD70912484E9205AC38396D2849ED602730* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action<AsyncOperationHandle, Exception> ExceptionHandler { get; set; }
		Action_2_t67647DD70912484E9205AC38396D2849ED602730* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___U3CExceptionHandlerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___U3CExceptionHandlerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Func`2<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.String> UnityEngine.ResourceManagement.ResourceManager::get_InternalIdTransformFunc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ResourceManager_get_InternalIdTransformFunc_mF9E2EB179C238ED082683966C36F07EDC85F9087 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public Func<IResourceLocation, string> InternalIdTransformFunc { get; set; }
		Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* L_0 = __this->___U3CInternalIdTransformFuncU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceManager::TransformInternalId(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceManager_TransformInternalId_m2C99EDD12AF07F099F7FF88E15892F2582C17EB9 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return InternalIdTransformFunc == null ? location.InternalId : InternalIdTransformFunc(location);
		Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* L_0;
		L_0 = ResourceManager_get_InternalIdTransformFunc_mF9E2EB179C238ED082683966C36F07EDC85F9087_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* L_1;
		L_1 = ResourceManager_get_InternalIdTransformFunc_mF9E2EB179C238ED082683966C36F07EDC85F9087_inline(__this, NULL);
		RuntimeObject* L_2 = ___location0;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = Func_2_Invoke_m5ACB72EBF42797086E002C72055E1956520CB18C_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___location0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}
}
// System.Action`1<UnityEngine.Networking.UnityWebRequest> UnityEngine.ResourceManagement.ResourceManager::get_WebRequestOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ResourceManager_get_WebRequestOverride_m5B5944646CCCFEC195AF713DC15F490EDA9EDC12 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public Action<UnityWebRequest> WebRequestOverride { get; set; }
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_0 = __this->___U3CWebRequestOverrideU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::AddUpdateReceiver(UnityEngine.ResourceManagement.IUpdateReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddUpdateReceiver_mCEC1DDE2E64507B7210293AC1C5A6E5849AA29B5 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___receiver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_Add_m07C05127F5995784C13F70693F39FDF17E0BE2F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (receiver == null)
		RuntimeObject* L_0 = ___receiver0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// m_UpdateReceivers.Add(receiver);
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_1 = __this->___m_UpdateReceivers_7;
		RuntimeObject* L_2 = ___receiver0;
		NullCheck(L_1);
		ListWithEvents_1_Add_m07C05127F5995784C13F70693F39FDF17E0BE2F7(L_1, L_2, ListWithEvents_1_Add_m07C05127F5995784C13F70693F39FDF17E0BE2F7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RemoveUpdateReciever(UnityEngine.ResourceManagement.IUpdateReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RemoveUpdateReciever_mABD054857B61EF2D434CE0EC6E5A0C5989AFBB74 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___receiver0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF8A1D8C4023DD582BF228FB67A92A4DE0569CD90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBF5F50D927699D56A669DA710118E0C7C1221FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (receiver == null)
		RuntimeObject* L_0 = ___receiver0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (m_UpdatingReceivers)
		bool L_1 = __this->___m_UpdatingReceivers_9;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// if (m_UpdateReceiversToRemove == null)
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_2 = __this->___m_UpdateReceiversToRemove_8;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// m_UpdateReceiversToRemove = new List<IUpdateReceiver>();
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_3 = (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*)il2cpp_codegen_object_new(List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mBF5F50D927699D56A669DA710118E0C7C1221FCD(L_3, List_1__ctor_mBF5F50D927699D56A669DA710118E0C7C1221FCD_RuntimeMethod_var);
		__this->___m_UpdateReceiversToRemove_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateReceiversToRemove_8), (void*)L_3);
	}

IL_001f:
	{
		// m_UpdateReceiversToRemove.Add(receiver);
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_4 = __this->___m_UpdateReceiversToRemove_8;
		RuntimeObject* L_5 = ___receiver0;
		NullCheck(L_4);
		List_1_Add_mF8A1D8C4023DD582BF228FB67A92A4DE0569CD90_inline(L_4, L_5, List_1_Add_mF8A1D8C4023DD582BF228FB67A92A4DE0569CD90_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		// m_UpdateReceivers.Remove(receiver);
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_6 = __this->___m_UpdateReceivers_7;
		RuntimeObject* L_7 = ___receiver0;
		NullCheck(L_6);
		bool L_8;
		L_8 = ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91(L_6, L_7, ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.ResourceManagement.Util.IAllocationStrategy UnityEngine.ResourceManagement.ResourceManager::get_Allocator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_get_Allocator_m2F215AF545EE1A8EEDEBFBFACA32D5E0B44A74B3 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public IAllocationStrategy Allocator { get { return m_allocator; } set { m_allocator = value; } }
		RuntimeObject* L_0 = __this->___m_allocator_6;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider> UnityEngine.ResourceManagement.ResourceManager::get_ResourceProviders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_get_ResourceProviders_mACBDB6BBAF95684D548E67073ED0067707D87A63 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public IList<IResourceProvider> ResourceProviders { get { return m_ResourceProviders; } }
		ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* L_0 = __this->___m_ResourceProviders_5;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::set_CertificateHandlerInstance(UnityEngine.Networking.CertificateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_set_CertificateHandlerInstance_m0CF67BF1839238F4EC7A4709D419AC11FF338EF4 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___value0, const RuntimeMethod* method) 
{
	{
		// public CertificateHandler CertificateHandlerInstance { get; set; }
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_0 = ___value0;
		__this->___U3CCertificateHandlerInstanceU3Ek__BackingField_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCertificateHandlerInstanceU3Ek__BackingField_25), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::.ctor(UnityEngine.ResourceManagement.Util.IAllocationStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager__ctor_m40746752A00415417500A9941BD8A55116461702 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___alloc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m56440420FE742E4486843B59035F84FEBC635FA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBEE6E02FF5778B06D23A4C8FF8AAE9445DD52EAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mB379B57465DF13113C37D5F68A852BFCCA32FE02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1__ctor_m5D223A2F890ACD04DFFDDEA67A277FE5FF669321_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1__ctor_mAB99B6D35767214CAB2BCF1DDBDC7D7E77762F26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_add_OnElementAdded_m1FEBB4EB8F2345E7316837333CECBBE7EAB02CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_add_OnElementAdded_m73653AE5E78DE69A6617034FE70D8203F7CA46A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_add_OnElementRemoved_m4F049FEC85282FBF40D01BFF4A9583AF6C299440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0874F605C0547F0FAAC3ECA80CA427463997DE99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_OnInstanceOperationDestroy_mEAFE7F84B34E5D426D4185936321DF391E1D77D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_OnObjectAdded_m1B908412F2E8898FB93DDA7F1C476E7FE087FB35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_OnObjectRemoved_m75B3D837CDC9FD91B3B5345A34415B5129A68038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_OnOperationDestroyCached_m93E5D09DE26A4D00F1F95375E98D53B2416CFD1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_OnOperationDestroyNonCached_m7C5078CF3525865387CE15063E1CE2389465985A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_U3C_ctorU3Eb__53_0_m4AFA65601CE387843900AB7A551CD39F414A50CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B2_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B3_1 = NULL;
	{
		// internal bool CallbackHooksEnabled = true; // tests might need to disable the callback hooks to manually pump updating
		__this->___CallbackHooksEnabled_4 = (bool)1;
		// ListWithEvents<IResourceProvider> m_ResourceProviders = new ListWithEvents<IResourceProvider>();
		ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* L_0 = (ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB*)il2cpp_codegen_object_new(ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ListWithEvents_1__ctor_mAB99B6D35767214CAB2BCF1DDBDC7D7E77762F26(L_0, ListWithEvents_1__ctor_mAB99B6D35767214CAB2BCF1DDBDC7D7E77762F26_RuntimeMethod_var);
		__this->___m_ResourceProviders_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ResourceProviders_5), (void*)L_0);
		// ListWithEvents<IUpdateReceiver> m_UpdateReceivers = new ListWithEvents<IUpdateReceiver>();
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_1 = (ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF*)il2cpp_codegen_object_new(ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ListWithEvents_1__ctor_m5D223A2F890ACD04DFFDDEA67A277FE5FF669321(L_1, ListWithEvents_1__ctor_m5D223A2F890ACD04DFFDDEA67A277FE5FF669321_RuntimeMethod_var);
		__this->___m_UpdateReceivers_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateReceivers_7), (void*)L_1);
		// internal Dictionary<int, IResourceProvider> m_providerMap = new Dictionary<int, IResourceProvider>();
		Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* L_2 = (Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D*)il2cpp_codegen_object_new(Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m56440420FE742E4486843B59035F84FEBC635FA6(L_2, Dictionary_2__ctor_m56440420FE742E4486843B59035F84FEBC635FA6_RuntimeMethod_var);
		__this->___m_providerMap_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_providerMap_11), (void*)L_2);
		// Dictionary<IOperationCacheKey, IAsyncOperation> m_AssetOperationCache = new Dictionary<IOperationCacheKey, IAsyncOperation>();
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_3 = (Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE*)il2cpp_codegen_object_new(Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mBEE6E02FF5778B06D23A4C8FF8AAE9445DD52EAC(L_3, Dictionary_2__ctor_mBEE6E02FF5778B06D23A4C8FF8AAE9445DD52EAC_RuntimeMethod_var);
		__this->___m_AssetOperationCache_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AssetOperationCache_12), (void*)L_3);
		// HashSet<InstanceOperation> m_TrackedInstanceOperations = new HashSet<InstanceOperation>();
		HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* L_4 = (HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267*)il2cpp_codegen_object_new(HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HashSet_1__ctor_mB379B57465DF13113C37D5F68A852BFCCA32FE02(L_4, HashSet_1__ctor_mB379B57465DF13113C37D5F68A852BFCCA32FE02_RuntimeMethod_var);
		__this->___m_TrackedInstanceOperations_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackedInstanceOperations_13), (void*)L_4);
		// DelegateList<float> m_UpdateCallbacks = DelegateList<float>.CreateWithGlobalCache();
		DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* L_5;
		L_5 = DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4(DelegateList_1_CreateWithGlobalCache_m35CF2E4C447D8E6A076C382E94E61A804FC591D4_RuntimeMethod_var);
		__this->___m_UpdateCallbacks_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateCallbacks_14), (void*)L_5);
		// List<IAsyncOperation> m_DeferredCompleteCallbacks = new List<IAsyncOperation>();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_6 = (List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C*)il2cpp_codegen_object_new(List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m0874F605C0547F0FAAC3ECA80CA427463997DE99(L_6, List_1__ctor_m0874F605C0547F0FAAC3ECA80CA427463997DE99_RuntimeMethod_var);
		__this->___m_DeferredCompleteCallbacks_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeferredCompleteCallbacks_15), (void*)L_6);
		// Dictionary<Type, Type> m_ProviderOperationTypeCache = new Dictionary<Type, Type>();
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_7 = (Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0*)il2cpp_codegen_object_new(Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729(L_7, Dictionary_2__ctor_m5D11BD5B331D47EF67914EC367C109B0BA39F729_RuntimeMethod_var);
		__this->___m_ProviderOperationTypeCache_27 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ProviderOperationTypeCache_27), (void*)L_7);
		// public ResourceManager(IAllocationStrategy alloc = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_ReleaseOpNonCached = OnOperationDestroyNonCached;
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_8 = (Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E*)il2cpp_codegen_object_new(Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_mDDF389A58010E142A6ED94EEE29302380C749F0A(L_8, __this, (intptr_t)((void*)ResourceManager_OnOperationDestroyNonCached_m7C5078CF3525865387CE15063E1CE2389465985A_RuntimeMethod_var), NULL);
		__this->___m_ReleaseOpNonCached_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReleaseOpNonCached_20), (void*)L_8);
		// m_ReleaseOpCached = OnOperationDestroyCached;
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_9 = (Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E*)il2cpp_codegen_object_new(Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_mDDF389A58010E142A6ED94EEE29302380C749F0A(L_9, __this, (intptr_t)((void*)ResourceManager_OnOperationDestroyCached_m93E5D09DE26A4D00F1F95375E98D53B2416CFD1B_RuntimeMethod_var), NULL);
		__this->___m_ReleaseOpCached_21 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReleaseOpCached_21), (void*)L_9);
		// m_ReleaseInstanceOp = OnInstanceOperationDestroy;
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_10 = (Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E*)il2cpp_codegen_object_new(Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mDDF389A58010E142A6ED94EEE29302380C749F0A(L_10, __this, (intptr_t)((void*)ResourceManager_OnInstanceOperationDestroy_mEAFE7F84B34E5D426D4185936321DF391E1D77D2_RuntimeMethod_var), NULL);
		__this->___m_ReleaseInstanceOp_22 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReleaseInstanceOp_22), (void*)L_10);
		// m_allocator = alloc == null ? new LRUCacheAllocationStrategy(1000, 1000, 100, 10) : alloc;
		RuntimeObject* L_11 = ___alloc0;
		G_B1_0 = __this;
		if (!L_11)
		{
			G_B2_0 = __this;
			goto IL_00a2;
		}
	}
	{
		RuntimeObject* L_12 = ___alloc0;
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_00b7;
	}

IL_00a2:
	{
		LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* L_13 = (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318*)il2cpp_codegen_object_new(LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LRUCacheAllocationStrategy__ctor_mE90C189EB59AEE251D83C85F1C6422EE3F3FB541(L_13, ((int32_t)1000), ((int32_t)1000), ((int32_t)100), ((int32_t)10), NULL);
		V_0 = L_13;
		RuntimeObject* L_14 = V_0;
		G_B3_0 = L_14;
		G_B3_1 = G_B2_0;
	}

IL_00b7:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_allocator_6 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_allocator_6), (void*)G_B3_0);
		// m_ResourceProviders.OnElementAdded += OnObjectAdded;
		ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* L_15 = __this->___m_ResourceProviders_5;
		Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* L_16 = (Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9*)il2cpp_codegen_object_new(Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_mA2E747297AEB8229ECC90785AEB7B12DD8C75C7C(L_16, __this, (intptr_t)((void*)ResourceManager_OnObjectAdded_m1B908412F2E8898FB93DDA7F1C476E7FE087FB35_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		ListWithEvents_1_add_OnElementAdded_m73653AE5E78DE69A6617034FE70D8203F7CA46A8(L_15, L_16, ListWithEvents_1_add_OnElementAdded_m73653AE5E78DE69A6617034FE70D8203F7CA46A8_RuntimeMethod_var);
		// m_ResourceProviders.OnElementRemoved += OnObjectRemoved;
		ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* L_17 = __this->___m_ResourceProviders_5;
		Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9* L_18 = (Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9*)il2cpp_codegen_object_new(Action_1_t095E9EDA25DCA5861C2A02BE9200D75B420847A9_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_mA2E747297AEB8229ECC90785AEB7B12DD8C75C7C(L_18, __this, (intptr_t)((void*)ResourceManager_OnObjectRemoved_m75B3D837CDC9FD91B3B5345A34415B5129A68038_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		ListWithEvents_1_add_OnElementRemoved_m4F049FEC85282FBF40D01BFF4A9583AF6C299440(L_17, L_18, ListWithEvents_1_add_OnElementRemoved_m4F049FEC85282FBF40D01BFF4A9583AF6C299440_RuntimeMethod_var);
		// m_UpdateReceivers.OnElementAdded += x => RegisterForCallbacks();
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_19 = __this->___m_UpdateReceivers_7;
		Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F* L_20 = (Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F*)il2cpp_codegen_object_new(Action_1_t966710EFD079374A3AE7E5D6B27FC53F0EE7E53F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_m5494CAAEBC5CAF6CF9C1692D117897727774656A(L_20, __this, (intptr_t)((void*)ResourceManager_U3C_ctorU3Eb__53_0_m4AFA65601CE387843900AB7A551CD39F414A50CA_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		ListWithEvents_1_add_OnElementAdded_m1FEBB4EB8F2345E7316837333CECBBE7EAB02CDA(L_19, L_20, ListWithEvents_1_add_OnElementAdded_m1FEBB4EB8F2345E7316837333CECBBE7EAB02CDA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::OnObjectAdded(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_OnObjectAdded_m1B908412F2E8898FB93DDA7F1C476E7FE087FB35 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IUpdateReceiver updateReceiver = obj as IUpdateReceiver;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var));
		// if (updateReceiver != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// AddUpdateReceiver(updateReceiver);
		RuntimeObject* L_2 = V_0;
		ResourceManager_AddUpdateReceiver_mCEC1DDE2E64507B7210293AC1C5A6E5849AA29B5(__this, L_2, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::OnObjectRemoved(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_OnObjectRemoved_m75B3D837CDC9FD91B3B5345A34415B5129A68038 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// IUpdateReceiver updateReceiver = obj as IUpdateReceiver;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var));
		// if (updateReceiver != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// RemoveUpdateReciever(updateReceiver);
		RuntimeObject* L_2 = V_0;
		ResourceManager_RemoveUpdateReciever_mABD054857B61EF2D434CE0EC6E5A0C5989AFBB74(__this, L_2, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CallbackHooksEnabled && !m_RegisteredForCallbacks)
		bool L_0 = __this->___CallbackHooksEnabled_4;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1 = __this->___m_RegisteredForCallbacks_26;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// m_RegisteredForCallbacks = true;
		__this->___m_RegisteredForCallbacks_26 = (bool)1;
		// MonoBehaviourCallbackHooks.Instance.OnUpdateDelegate += Update;
		MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* L_2;
		L_2 = ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16(ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16_RuntimeMethod_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_3, __this, (intptr_t)((void*)ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		MonoBehaviourCallbackHooks_add_OnUpdateDelegate_m75B55B30965281C86C4A349DFBE713833E74853C(L_2, L_3, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::ClearDiagnosticCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_ClearDiagnosticCallbacks_m9A2DFAA7BFD3AA6F918E7C6D9E6403C55C50ED7D (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// m_diagnosticsHandler = null;
		__this->___m_diagnosticsHandler_19 = (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_diagnosticsHandler_19), (void*)(Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*)NULL);
		// m_obsoleteDiagnosticsHandler = null;
		__this->___m_obsoleteDiagnosticsHandler_18 = (Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_obsoleteDiagnosticsHandler_18), (void*)(Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::UnregisterDiagnosticCallback(System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_UnregisterDiagnosticCallback_m48C1E860430066DD097E4F662402770803558A84 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* ___func0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02151A83C4BF0A0CDD34460B09F3334E5AD5B606);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_diagnosticsHandler != null)
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_0 = __this->___m_diagnosticsHandler_19;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_diagnosticsHandler -= func;
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_1 = __this->___m_diagnosticsHandler_19;
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_2 = ___func0;
		Delegate_t* L_3;
		L_3 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_1, L_2, NULL);
		__this->___m_diagnosticsHandler_19 = ((Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*)Castclass((RuntimeObject*)L_3, Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_diagnosticsHandler_19), (void*)((Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*)Castclass((RuntimeObject*)L_3, Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var)));
		return;
	}

IL_0020:
	{
		// Debug.LogError("No Diagnostic callbacks registered, cannot remove callback.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral02151A83C4BF0A0CDD34460B09F3334E5AD5B606, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterDiagnosticCallback(System.Action`1<UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterDiagnosticCallback_mC40ECD5723511F7C77475A417F693C84C4CC3378 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* ___func0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_diagnosticsHandler += func;
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_0 = __this->___m_diagnosticsHandler_19;
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_1 = ___func0;
		Delegate_t* L_2;
		L_2 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_0, L_1, NULL);
		__this->___m_diagnosticsHandler_19 = ((Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*)Castclass((RuntimeObject*)L_2, Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_diagnosticsHandler_19), (void*)((Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2*)Castclass((RuntimeObject*)L_2, Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::PostDiagnosticEvent(UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_PostDiagnosticEvent_m3D762299D2B95B1FC8AE649FDF1D79C6BF4CE67C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___context0, const RuntimeMethod* method) 
{
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* G_B2_0 = NULL;
	Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* G_B1_0 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D G_B6_2;
	memset((&G_B6_2), 0, sizeof(G_B6_2));
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* G_B6_3 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D G_B8_3;
	memset((&G_B8_3), 0, sizeof(G_B8_3));
	Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* G_B8_4 = NULL;
	{
		// m_diagnosticsHandler?.Invoke(context);
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_0 = __this->___m_diagnosticsHandler_19;
		Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F L_2 = ___context0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_inline(G_B2_0, L_2, NULL);
	}

IL_0012:
	{
		// if (m_obsoleteDiagnosticsHandler == null)
		Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* L_3 = __this->___m_obsoleteDiagnosticsHandler_18;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// m_obsoleteDiagnosticsHandler(context.OperationHandle, context.Type, context.EventValue, string.IsNullOrEmpty(context.Error) ? context.Context : context.Error);
		Action_4_t9DB534B7D8A36A98095AEEA67EAC338F2230BA3D* L_4 = __this->___m_obsoleteDiagnosticsHandler_18;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_5;
		L_5 = DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline((&___context0), NULL);
		int32_t L_6;
		L_6 = DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline((&___context0), NULL);
		int32_t L_7;
		L_7 = DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline((&___context0), NULL);
		String_t* L_8;
		L_8 = DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline((&___context0), NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		G_B6_0 = L_7;
		G_B6_1 = L_6;
		G_B6_2 = L_5;
		G_B6_3 = L_4;
		if (L_9)
		{
			G_B7_0 = L_7;
			G_B7_1 = L_6;
			G_B7_2 = L_5;
			G_B7_3 = L_4;
			goto IL_004d;
		}
	}
	{
		String_t* L_10;
		L_10 = DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline((&___context0), NULL);
		G_B8_0 = ((RuntimeObject*)(L_10));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0054;
	}

IL_004d:
	{
		RuntimeObject* L_11;
		L_11 = DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline((&___context0), NULL);
		G_B8_0 = L_11;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0054:
	{
		NullCheck(G_B8_4);
		Action_4_Invoke_mF7B8B5B7B63A45CDA066B9A3D8BAB810B5061296_inline(G_B8_4, G_B8_3, G_B8_2, G_B8_1, G_B8_0, NULL);
		// }
		return;
	}
}
// UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider UnityEngine.ResourceManagement.ResourceManager::GetResourceProvider(System.Type,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_GetResourceProvider_mFE9FDDC3322999023EF072BA071A2C5207993507 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Type_t* ___t0, RuntimeObject* ___location1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5B8E8B164F0F2E1C3E97F2D46F4153EB285523D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m203693F95BCB7EFF18730E2258E6DDDA01E00234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t765584753BCECD1B989E18C940850D2875093CCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t74AC377FF33B42CB53AF4AE8E6C38924D22FB457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		// if (location != null)
		RuntimeObject* L_0 = ___location1;
		if (!L_0)
		{
			goto IL_0097;
		}
	}
	{
		// IResourceProvider prov = null;
		V_0 = (RuntimeObject*)NULL;
		// var hash = location.ProviderId.GetHashCode() * 31 + (t == null ? 0 : t.GetHashCode());
		RuntimeObject* L_1 = ___location1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ProviderId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		Type_t* L_4 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_4, (Type_t*)NULL, NULL);
		G_B2_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31)));
		if (L_5)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31)));
			goto IL_0027;
		}
	}
	{
		Type_t* L_6 = ___t0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0028:
	{
		V_1 = ((int32_t)il2cpp_codegen_add(G_B4_1, G_B4_0));
		// if (!m_providerMap.TryGetValue(hash, out prov))
		Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* L_8 = __this->___m_providerMap_11;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m203693F95BCB7EFF18730E2258E6DDDA01E00234(L_8, L_9, (&V_0), Dictionary_2_TryGetValue_m203693F95BCB7EFF18730E2258E6DDDA01E00234_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_0095;
		}
	}
	{
		// for (int i = 0; i < ResourceProviders.Count; i++)
		V_2 = 0;
		goto IL_0087;
	}

IL_003e:
	{
		// var p = ResourceProviders[i];
		RuntimeObject* L_11;
		L_11 = ResourceManager_get_ResourceProviders_mACBDB6BBAF95684D548E67073ED0067707D87A63_inline(__this, NULL);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::get_Item(System.Int32) */, IList_1_t74AC377FF33B42CB53AF4AE8E6C38924D22FB457_il2cpp_TypeInfo_var, L_11, L_12);
		V_3 = L_13;
		// if (p.ProviderId.Equals(location.ProviderId, StringComparison.Ordinal) && (t == null || p.CanProvide(t, location)))
		RuntimeObject* L_14 = V_3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider::get_ProviderId() */, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_14);
		RuntimeObject* L_16 = ___location1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ProviderId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_15);
		bool L_18;
		L_18 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_15, L_17, 4, NULL);
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		Type_t* L_19 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_19, (Type_t*)NULL, NULL);
		if (L_20)
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject* L_21 = V_3;
		Type_t* L_22 = ___t0;
		RuntimeObject* L_23 = ___location1;
		NullCheck(L_21);
		bool L_24;
		L_24 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject* >::Invoke(2 /* System.Boolean UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider::CanProvide(System.Type,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation) */, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		if (!L_24)
		{
			goto IL_0083;
		}
	}

IL_0072:
	{
		// m_providerMap.Add(hash, prov = p);
		Dictionary_2_tC671E97FB5C542AA785863491CA2CF37DA59AE5D* L_25 = __this->___m_providerMap_11;
		int32_t L_26 = V_1;
		RuntimeObject* L_27 = V_3;
		RuntimeObject* L_28 = L_27;
		V_0 = L_28;
		NullCheck(L_25);
		Dictionary_2_Add_m5B8E8B164F0F2E1C3E97F2D46F4153EB285523D3(L_25, L_26, L_28, Dictionary_2_Add_m5B8E8B164F0F2E1C3E97F2D46F4153EB285523D3_RuntimeMethod_var);
		// break;
		goto IL_0095;
	}

IL_0083:
	{
		// for (int i = 0; i < ResourceProviders.Count; i++)
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < ResourceProviders.Count; i++)
		int32_t L_30 = V_2;
		RuntimeObject* L_31;
		L_31 = ResourceManager_get_ResourceProviders_mACBDB6BBAF95684D548E67073ED0067707D87A63_inline(__this, NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider>::get_Count() */, ICollection_1_t765584753BCECD1B989E18C940850D2875093CCD_il2cpp_TypeInfo_var, L_31);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_003e;
		}
	}

IL_0095:
	{
		// return prov;
		RuntimeObject* L_33 = V_0;
		return L_33;
	}

IL_0097:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager::ProvideResource(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ResourceManager_ProvideResource_m601D10E98FA55391A6CF87035D16C5D4D45BD54F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___location0, Type_t* ___desiredType1, bool ___releaseDependenciesOnFailure2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_m84DEAEF957377A11468409BE77C9BE51D0BF267E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m977BEBE7261BFEF13B96BE8C7CD46BF0945862F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m246913C3D3919A641E1F4C2E74B76E8A3E934B2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderOperation_1_t26B036749D3BEF1757D7CDE7658D1C59426FD3AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_CreateOperation_TisIAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_m82B731F92B8FFC8D9B1C415D39786DBBA0F0EF48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* V_2 = NULL;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 V_5;
	memset((&V_5), 0, sizeof(V_5));
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_6;
	memset((&V_6), 0, sizeof(V_6));
	UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* V_7 = NULL;
	AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 V_8;
	memset((&V_8), 0, sizeof(V_8));
	AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	{
		// if (location == null)
		RuntimeObject* L_0 = ___location0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("location");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03AF4AAE45F0FD9CE9D36A119A4A931D2A7620AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResourceManager_ProvideResource_m601D10E98FA55391A6CF87035D16C5D4D45BD54F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// IResourceProvider provider = null;
		V_0 = (RuntimeObject*)NULL;
		// if (desiredType == null)
		Type_t* L_2 = ___desiredType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_2, (Type_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// provider = GetResourceProvider(desiredType, location);
		Type_t* L_4 = ___desiredType1;
		RuntimeObject* L_5 = ___location0;
		RuntimeObject* L_6;
		L_6 = ResourceManager_GetResourceProvider_mFE9FDDC3322999023EF072BA071A2C5207993507(__this, L_4, L_5, NULL);
		V_0 = L_6;
		// if (provider == null)
		RuntimeObject* L_7 = V_0;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		// var ex = new UnknownResourceProviderException(location);
		RuntimeObject* L_8 = ___location0;
		UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* L_9 = (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E*)il2cpp_codegen_object_new(UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnknownResourceProviderException__ctor_mF41159A0C17377B2FA88EEB384873A9E74C0B9D4(L_9, L_8, NULL);
		V_7 = L_9;
		// return CreateCompletedOperationInternal<object>(null, false, ex, releaseDependenciesOnFailure);
		UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* L_10 = V_7;
		bool L_11 = ___releaseDependenciesOnFailure2;
		AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 L_12;
		L_12 = ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4(__this, NULL, (bool)0, L_10, L_11, ResourceManager_CreateCompletedOperationInternal_TisRuntimeObject_m2798F8A77803ADC6D2CBF2D83A365064EACA0BA4_RuntimeMethod_var);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_13;
		L_13 = AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A(L_12, AsyncOperationHandle_1_op_Implicit_mB162F31946A8441D0E802C22813538D521985E4A_RuntimeMethod_var);
		return L_13;
	}

IL_003e:
	{
		// desiredType = provider.GetDefaultType(location);
		RuntimeObject* L_14 = V_0;
		RuntimeObject* L_15 = ___location0;
		NullCheck(L_14);
		Type_t* L_16;
		L_16 = InterfaceFuncInvoker1< Type_t*, RuntimeObject* >::Invoke(1 /* System.Type UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider::GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation) */, IResourceProvider_tAD356B19CE0730462C3D5B6E7FBAD905342B9247_il2cpp_TypeInfo_var, L_14, L_15);
		___desiredType1 = L_16;
	}

IL_0047:
	{
		// var key = new LocationCacheKey(location, desiredType);
		RuntimeObject* L_17 = ___location0;
		Type_t* L_18 = ___desiredType1;
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_19 = (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859*)il2cpp_codegen_object_new(LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		LocationCacheKey__ctor_m282925A8CF5CF9120CF2CC9AAEF5BEACA2CF8148(L_19, L_17, L_18, NULL);
		V_2 = L_19;
		// if (m_AssetOperationCache.TryGetValue(key, out op))
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_20 = __this->___m_AssetOperationCache_12;
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED(L_20, L_21, (&V_1), Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0072;
		}
	}
	{
		// op.IncrementReferenceCount();
		RuntimeObject* L_23 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::IncrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_23);
		// return new AsyncOperationHandle(op, location.ToString());;
		RuntimeObject* L_24 = V_1;
		RuntimeObject* L_25 = ___location0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_27;
		memset((&L_27), 0, sizeof(L_27));
		AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22((&L_27), L_24, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_0072:
	{
		// if (!m_ProviderOperationTypeCache.TryGetValue(desiredType, out provType))
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_28 = __this->___m_ProviderOperationTypeCache_27;
		Type_t* L_29 = ___desiredType1;
		NullCheck(L_28);
		bool L_30;
		L_30 = Dictionary_2_TryGetValue_m246913C3D3919A641E1F4C2E74B76E8A3E934B2A(L_28, L_29, (&V_3), Dictionary_2_TryGetValue_m246913C3D3919A641E1F4C2E74B76E8A3E934B2A_RuntimeMethod_var);
		if (L_30)
		{
			goto IL_00a9;
		}
	}
	{
		// m_ProviderOperationTypeCache.Add(desiredType, provType = typeof(ProviderOperation<>).MakeGenericType(new Type[] { desiredType }));
		Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* L_31 = __this->___m_ProviderOperationTypeCache_27;
		Type_t* L_32 = ___desiredType1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (ProviderOperation_1_t26B036749D3BEF1757D7CDE7658D1C59426FD3AC_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_33, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_35 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_36 = L_35;
		Type_t* L_37 = ___desiredType1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_37);
		NullCheck(L_34);
		Type_t* L_38;
		L_38 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(115 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_34, L_36);
		Type_t* L_39 = L_38;
		V_3 = L_39;
		NullCheck(L_31);
		Dictionary_2_Add_m977BEBE7261BFEF13B96BE8C7CD46BF0945862F4(L_31, L_32, L_39, Dictionary_2_Add_m977BEBE7261BFEF13B96BE8C7CD46BF0945862F4_RuntimeMethod_var);
	}

IL_00a9:
	{
		// op = CreateOperation<IAsyncOperation>(provType, provType.GetHashCode(), key, m_ReleaseOpCached);
		Type_t* L_40 = V_3;
		Type_t* L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_41);
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_43 = V_2;
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_44 = __this->___m_ReleaseOpCached_21;
		RuntimeObject* L_45;
		L_45 = ResourceManager_CreateOperation_TisIAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_m82B731F92B8FFC8D9B1C415D39786DBBA0F0EF48(__this, L_40, L_42, L_43, L_44, ResourceManager_CreateOperation_TisIAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_m82B731F92B8FFC8D9B1C415D39786DBBA0F0EF48_RuntimeMethod_var);
		V_1 = L_45;
		// int depHash = location.DependencyHashCode;
		RuntimeObject* L_46 = ___location0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_DependencyHashCode() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_46);
		V_4 = L_47;
		// var depOp = location.HasDependencies ?
		//     ProvideResourceGroupCached(location.Dependencies, depHash, null, null, releaseDependenciesOnFailure) :
		//     default(AsyncOperationHandle<IList<AsyncOperationHandle>>);
		RuntimeObject* L_48 = ___location0;
		NullCheck(L_48);
		bool L_49;
		L_49 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_HasDependencies() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_48);
		if (L_49)
		{
			goto IL_00da;
		}
	}
	{
		il2cpp_codegen_initobj((&V_8), sizeof(AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90));
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_50 = V_8;
		G_B13_0 = L_50;
		goto IL_00eb;
	}

IL_00da:
	{
		RuntimeObject* L_51 = ___location0;
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Dependencies() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_51);
		int32_t L_53 = V_4;
		bool L_54 = ___releaseDependenciesOnFailure2;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_55;
		L_55 = ResourceManager_ProvideResourceGroupCached_m4BE9B9B2D6DD75747B7978BC8EC9664FCDBD10C2(__this, L_52, L_53, (Type_t*)NULL, (Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF*)NULL, L_54, NULL);
		G_B13_0 = L_55;
	}

IL_00eb:
	{
		V_5 = G_B13_0;
		// if (provider == null)
		RuntimeObject* L_56 = V_0;
		if (L_56)
		{
			goto IL_00f9;
		}
	}
	{
		// provider = GetResourceProvider(desiredType, location);
		Type_t* L_57 = ___desiredType1;
		RuntimeObject* L_58 = ___location0;
		RuntimeObject* L_59;
		L_59 = ResourceManager_GetResourceProvider_mFE9FDDC3322999023EF072BA071A2C5207993507(__this, L_57, L_58, NULL);
		V_0 = L_59;
	}

IL_00f9:
	{
		// ((IGenericProviderOperation)op).Init(this, provider, location, depOp, releaseDependenciesOnFailure);
		RuntimeObject* L_60 = V_1;
		RuntimeObject* L_61 = V_0;
		RuntimeObject* L_62 = ___location0;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_63 = V_5;
		bool L_64 = ___releaseDependenciesOnFailure2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_60, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker5< ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, RuntimeObject*, RuntimeObject*, AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90, bool >::Invoke(0 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::Init(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>>,System.Boolean) */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_60, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var)), __this, L_61, L_62, L_63, L_64);
		// var handle = StartOperation(op, depOp);
		RuntimeObject* L_65 = V_1;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_66 = V_5;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_67;
		L_67 = AsyncOperationHandle_1_op_Implicit_m84DEAEF957377A11468409BE77C9BE51D0BF267E(L_66, AsyncOperationHandle_1_op_Implicit_m84DEAEF957377A11468409BE77C9BE51D0BF267E_RuntimeMethod_var);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_68;
		L_68 = ResourceManager_StartOperation_mF353B4A27D8904A5BE0CA88DCECD34BFFF283428(__this, L_65, L_67, NULL);
		V_6 = L_68;
		// handle.LocationName = location.ToString();
		RuntimeObject* L_69 = ___location0;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_69);
		AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C_inline((&V_6), L_70, NULL);
		// if (depOp.IsValid())
		bool L_71;
		L_71 = AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB((&V_5), AsyncOperationHandle_1_IsValid_mED70B407DD7990BA4F4075EB68A2B30BE0CC63DB_RuntimeMethod_var);
		if (!L_71)
		{
			goto IL_0137;
		}
	}
	{
		// depOp.Release();
		AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1((&V_5), AsyncOperationHandle_1_Release_mF6710B199D5B6D484B6133E8BD599EF5ADD33BD1_RuntimeMethod_var);
	}

IL_0137:
	{
		// return handle;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_72 = V_6;
		return L_72;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager::StartOperation(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ResourceManager_StartOperation_mF353B4A27D8904A5BE0CA88DCECD34BFFF283428 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___operation0, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___dependency1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// operation.Start(this, dependency, m_UpdateCallbacks);
		RuntimeObject* L_0 = ___operation0;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_1 = ___dependency1;
		DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* L_2 = __this->___m_UpdateCallbacks_14;
		NullCheck(L_0);
		InterfaceActionInvoker3< ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* >::Invoke(18 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::Start(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,DelegateList`1<System.Single>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, __this, L_1, L_2);
		// return operation.Handle;
		RuntimeObject* L_3 = ___operation0;
		NullCheck(L_3);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4;
		L_4 = InterfaceFuncInvoker0< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D >::Invoke(19 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Handle() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::OnInstanceOperationDestroy(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_OnInstanceOperationDestroy_mEAFE7F84B34E5D426D4185936321DF391E1D77D2 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackedInstanceOperations.Remove(o as InstanceOperation);
		HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* L_0 = __this->___m_TrackedInstanceOperations_13;
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5(L_0, ((InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644*)IsInstClass((RuntimeObject*)L_1, InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_il2cpp_TypeInfo_var)), HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5_RuntimeMethod_var);
		// Allocator.Release(o.GetType().GetHashCode(), o);
		RuntimeObject* L_3;
		L_3 = ResourceManager_get_Allocator_m2F215AF545EE1A8EEDEBFBFACA32D5E0B44A74B3_inline(__this, NULL);
		RuntimeObject* L_4 = ___o0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		RuntimeObject* L_7 = ___o0;
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.ResourceManagement.Util.IAllocationStrategy::Release(System.Int32,System.Object) */, IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var, L_3, L_6, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::OnOperationDestroyNonCached(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_OnOperationDestroyNonCached_m7C5078CF3525865387CE15063E1CE2389465985A (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Allocator.Release(o.GetType().GetHashCode(), o);
		RuntimeObject* L_0;
		L_0 = ResourceManager_get_Allocator_m2F215AF545EE1A8EEDEBFBFACA32D5E0B44A74B3_inline(__this, NULL);
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		RuntimeObject* L_4 = ___o0;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.ResourceManagement.Util.IAllocationStrategy::Release(System.Int32,System.Object) */, IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var, L_0, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::OnOperationDestroyCached(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_OnOperationDestroyCached_m93E5D09DE26A4D00F1F95375E98D53B2416CFD1B (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICachable_t1E96E038DBBA5EA25DD8E52DEA8CD95998BFD17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// Allocator.Release(o.GetType().GetHashCode(), o);
		RuntimeObject* L_0;
		L_0 = ResourceManager_get_Allocator_m2F215AF545EE1A8EEDEBFBFACA32D5E0B44A74B3_inline(__this, NULL);
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		RuntimeObject* L_4 = ___o0;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.ResourceManagement.Util.IAllocationStrategy::Release(System.Int32,System.Object) */, IAllocationStrategy_tBA79AEDCB2794BBB55BCD903B96EFBBB77583D77_il2cpp_TypeInfo_var, L_0, L_3, L_4);
		// var cachable = o as ICachable;
		RuntimeObject* L_5 = ___o0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, ICachable_t1E96E038DBBA5EA25DD8E52DEA8CD95998BFD17A_il2cpp_TypeInfo_var));
		// if (cachable?.Key != null)
		RuntimeObject* L_6 = V_0;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_002a;
	}

IL_0024:
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.ICachable::get_Key() */, ICachable_t1E96E038DBBA5EA25DD8E52DEA8CD95998BFD17A_il2cpp_TypeInfo_var, L_7);
		G_B3_0 = L_8;
	}

IL_002a:
	{
		if (!G_B3_0)
		{
			goto IL_0039;
		}
	}
	{
		// RemoveOperationFromCache(cachable.Key);
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.ICachable::get_Key() */, ICachable_t1E96E038DBBA5EA25DD8E52DEA8CD95998BFD17A_il2cpp_TypeInfo_var, L_9);
		bool L_11;
		L_11 = ResourceManager_RemoveOperationFromCache_m1CB4CDFB4320AE9B7191BCE7F77441274F5A42FD(__this, L_10, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::AddOperationToCache(UnityEngine.ResourceManagement.Util.IOperationCacheKey,UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddOperationToCache_m1399C5F2815D81712B2CCC09EA9ADF1EA13CC934 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, RuntimeObject* ___operation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD674AEED11B3C58424C02EE2D7AC9AFE4E062196_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsOperationCached(key))
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// m_AssetOperationCache.Add(key, operation);
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_2 = __this->___m_AssetOperationCache_12;
		RuntimeObject* L_3 = ___key0;
		RuntimeObject* L_4 = ___operation1;
		NullCheck(L_2);
		Dictionary_2_Add_mD674AEED11B3C58424C02EE2D7AC9AFE4E062196(L_2, L_3, L_4, Dictionary_2_Add_mD674AEED11B3C58424C02EE2D7AC9AFE4E062196_RuntimeMethod_var);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::RemoveOperationFromCache(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_RemoveOperationFromCache_m1CB4CDFB4320AE9B7191BCE7F77441274F5A42FD (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsOperationCached(key))
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// return m_AssetOperationCache.Remove(key);
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_2 = __this->___m_AssetOperationCache_12;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920(L_2, L_3, Dictionary_2_Remove_m1CA02D2DBE4C2EBC97C41AD6758B1F80AF72B920_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceManager::IsOperationCached(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManager_IsOperationCached_m2B1EDD504388B6A568DAFC5417F719F85947A660 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_AssetOperationCache.ContainsKey(key);
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_0 = __this->___m_AssetOperationCache_12;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4(L_0, L_1, Dictionary_2_ContainsKey_mA34B37E0EA8C1526DB66CB39B478E761FD9CE6C4_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::Release(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Release_m4A5F5DE044CDEA3D898AD3D665295E4B2CAC3D37 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___handle0, const RuntimeMethod* method) 
{
	{
		// handle.Release();
		AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762((&___handle0), NULL);
		// }
		return;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.GroupOperation UnityEngine.ResourceManagement.ResourceManager::AcquireGroupOpFromCache(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* ResourceManager_AcquireGroupOpFromCache_mD24182CB63E47A7EB10183750BA4038050934A52 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (m_AssetOperationCache.TryGetValue(key, out opGeneric))
		Dictionary_2_tB930926FE97212DAF0C25DCEBA2FBFC87D5EB8FE* L_0 = __this->___m_AssetOperationCache_12;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m8631C9125CFA8A7863B44E23DFD123165B4823ED_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// opGeneric.IncrementReferenceCount();
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::IncrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_3);
		// return (GroupOperation)opGeneric;
		RuntimeObject* L_4 = V_0;
		return ((GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE*)CastclassClass((RuntimeObject*)L_4, GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_il2cpp_TypeInfo_var));
	}

IL_001d:
	{
		// return null;
		return (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE*)NULL;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> UnityEngine.ResourceManagement.ResourceManager::CreateGenericGroupOperation(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ResourceManager_CreateGenericGroupOperation_mD157A8B840D805E4DE84C4ED116E42807FFC54A1 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___operations0, bool ___releasedCachedOpOnComplete1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* V_0 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	Type_t* G_B2_2 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B2_3 = NULL;
	AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	Type_t* G_B1_2 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B1_3 = NULL;
	Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* G_B3_0 = NULL;
	AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	Type_t* G_B3_3 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B3_4 = NULL;
	{
		// var op = CreateOperation<GroupOperation>(typeof(GroupOperation), s_GroupOperationTypeHash, new AsyncOpHandlesCacheKey(operations), releasedCachedOpOnComplete ? m_ReleaseOpCached : m_ReleaseOpNonCached);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		int32_t L_2 = ((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___s_GroupOperationTypeHash_23;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_3 = ___operations0;
		AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* L_4 = (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409*)il2cpp_codegen_object_new(AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncOpHandlesCacheKey__ctor_mCA58B5FAB01E383F945DD6912328198DA13FA90E(L_4, L_3, NULL);
		bool L_5 = ___releasedCachedOpOnComplete1;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		G_B1_3 = __this;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			G_B2_3 = __this;
			goto IL_0021;
		}
	}
	{
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_6 = __this->___m_ReleaseOpNonCached_20;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0027;
	}

IL_0021:
	{
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_7 = __this->___m_ReleaseOpCached_21;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0027:
	{
		NullCheck(G_B3_4);
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_8;
		L_8 = ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F(G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F_RuntimeMethod_var);
		V_0 = L_8;
		// op.Init(operations);
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_9 = V_0;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_10 = ___operations0;
		NullCheck(L_9);
		GroupOperation_Init_m8C19E45ECB5A7DB7895A83EE0F918CEF60FD932E(L_9, L_10, (bool)1, (bool)0, NULL);
		// return StartOperation(op, default);
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_11 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_12 = V_1;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_13;
		L_13 = ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8(__this, L_11, L_12, ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8_RuntimeMethod_var);
		return L_13;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> UnityEngine.ResourceManagement.ResourceManager::ProvideResourceGroupCached(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,System.Int32,System.Type,System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 ResourceManager_ProvideResourceGroupCached_m4BE9B9B2D6DD75747B7978BC8EC9664FCDBD10C2 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___locations0, int32_t ___groupHash1, Type_t* ___desiredType2, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___callback3, bool ___releaseDependenciesOnFailure4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Handle_mC58CFF62938BB4FA4A5B837A1BDF8149D155237C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF00328CE3D5876D5D32D6DEB3C7C17E8A7BAC412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t49FD6B3FA03C73D1B33E24DF0595303EDAD4B582_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* V_0 = NULL;
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* V_1 = NULL;
	AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 V_2;
	memset((&V_2), 0, sizeof(V_2));
	List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	{
		// var depsKey = new DependenciesCacheKey(locations, groupHash);
		RuntimeObject* L_0 = ___locations0;
		int32_t L_1 = ___groupHash1;
		DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* L_2 = (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1*)il2cpp_codegen_object_new(DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DependenciesCacheKey__ctor_mF897DD52A12FB3D9A8A636072A04F00E73F9AC75(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// GroupOperation op = AcquireGroupOpFromCache(depsKey);
		DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* L_3 = V_0;
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_4;
		L_4 = ResourceManager_AcquireGroupOpFromCache_mD24182CB63E47A7EB10183750BA4038050934A52(__this, L_3, NULL);
		V_1 = L_4;
		// if (op == null)
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_5 = V_1;
		if (L_5)
		{
			goto IL_0098;
		}
	}
	{
		// op = CreateOperation<GroupOperation>(typeof(GroupOperation), s_GroupOperationTypeHash, depsKey, m_ReleaseOpCached);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		int32_t L_8 = ((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___s_GroupOperationTypeHash_23;
		DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* L_9 = V_0;
		Action_1_tA57E75E816C50B3444F6BEFBEBF19A03BA2DF22E* L_10 = __this->___m_ReleaseOpCached_21;
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_11;
		L_11 = ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F(__this, L_7, L_8, L_9, L_10, ResourceManager_CreateOperation_TisGroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_mF5F2E0CFAA4FD14727C149E81210B2AA3995CF4F_RuntimeMethod_var);
		V_1 = L_11;
		// var ops = new List<AsyncOperationHandle>(locations.Count);
		RuntimeObject* L_12 = ___locations0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Count() */, ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var, L_12);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_14 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C(L_14, L_13, List_1__ctor_m27012791667E51CDC7C83F931B325B59D382244C_RuntimeMethod_var);
		V_3 = L_14;
		// foreach (var loc in locations)
		RuntimeObject* L_15 = ___locations0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::GetEnumerator() */, IEnumerable_1_tF00328CE3D5876D5D32D6DEB3C7C17E8A7BAC412_il2cpp_TypeInfo_var, L_15);
		V_4 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_17 = V_4;
					if (!L_17)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_18 = V_4;
					NullCheck(L_18);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_0049_1:
			{
				// foreach (var loc in locations)
				RuntimeObject* L_19 = V_4;
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Current() */, IEnumerator_1_t49FD6B3FA03C73D1B33E24DF0595303EDAD4B582_il2cpp_TypeInfo_var, L_19);
				V_5 = L_20;
				// ops.Add(ProvideResource(loc, desiredType, releaseDependenciesOnFailure));
				List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_21 = V_3;
				RuntimeObject* L_22 = V_5;
				Type_t* L_23 = ___desiredType2;
				bool L_24 = ___releaseDependenciesOnFailure4;
				AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_25;
				L_25 = ResourceManager_ProvideResource_m601D10E98FA55391A6CF87035D16C5D4D45BD54F(__this, L_22, L_23, L_24, NULL);
				NullCheck(L_21);
				List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_inline(L_21, L_25, List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_RuntimeMethod_var);
			}

IL_0063_1:
			{
				// foreach (var loc in locations)
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// op.Init(ops, releaseDependenciesOnFailure);
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_28 = V_1;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_29 = V_3;
		bool L_30 = ___releaseDependenciesOnFailure4;
		NullCheck(L_28);
		GroupOperation_Init_m8C19E45ECB5A7DB7895A83EE0F918CEF60FD932E(L_28, L_29, L_30, (bool)0, NULL);
		// handle = StartOperation(op, default(AsyncOperationHandle));
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_31 = V_1;
		il2cpp_codegen_initobj((&V_6), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_32 = V_6;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_33;
		L_33 = ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8(__this, L_31, L_32, ResourceManager_StartOperation_TisIList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_m4CB3DB54820F7679C7C0F51861754559E4015FB8_RuntimeMethod_var);
		V_2 = L_33;
		goto IL_009f;
	}

IL_0098:
	{
		// handle = op.Handle;
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_34 = V_1;
		NullCheck(L_34);
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_35;
		L_35 = AsyncOperationBase_1_get_Handle_mC58CFF62938BB4FA4A5B837A1BDF8149D155237C(L_34, AsyncOperationBase_1_get_Handle_mC58CFF62938BB4FA4A5B837A1BDF8149D155237C_RuntimeMethod_var);
		V_2 = L_35;
	}

IL_009f:
	{
		// if (callback != null)
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_36 = ___callback3;
		if (!L_36)
		{
			goto IL_00d5;
		}
	}
	{
		// var depOps = op.GetDependentOps();
		GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* L_37 = V_1;
		NullCheck(L_37);
		RuntimeObject* L_38;
		L_38 = GroupOperation_GetDependentOps_m9FE0CB241C9F3630AA74C2C00539CECFD817B1D4(L_37, NULL);
		V_7 = L_38;
		// for (int i = 0; i < depOps.Count; i++)
		V_8 = 0;
		goto IL_00ca;
	}

IL_00b0:
	{
		// depOps[i].Completed += callback;
		RuntimeObject* L_39 = V_7;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_41;
		L_41 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_39, L_40);
		V_6 = L_41;
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_42 = ___callback3;
		AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0((&V_6), L_42, NULL);
		// for (int i = 0; i < depOps.Count; i++)
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ca:
	{
		// for (int i = 0; i < depOps.Count; i++)
		int32_t L_44 = V_8;
		RuntimeObject* L_45 = V_7;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_45);
		if ((((int32_t)L_44) < ((int32_t)L_46)))
		{
			goto IL_00b0;
		}
	}

IL_00d5:
	{
		// return handle;
		AsyncOperationHandle_1_t7854E14EDF49B0D526002237C4BBFAB8D15A5A90 L_47 = V_2;
		return L_47;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.ResourceManagement.ResourceManager::ProvideScene(UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 ResourceManager_ProvideScene_m7443C66FADC9A66CA7E073DA080AC25BEB8FAC7F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___sceneProvider0, RuntimeObject* ___location1, int32_t ___loadMode2, bool ___activateOnLoad3, int32_t ___priority4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISceneProvider_t8975F536F686AA01DF259F7AAB973512B5098581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sceneProvider == null)
		RuntimeObject* L_0 = ___sceneProvider0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NullReferenceException("sceneProvider is null");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_1 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral095E324CA5EAAB6C20DCBCDE2E2E3CD919DCDAA0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResourceManager_ProvideScene_m7443C66FADC9A66CA7E073DA080AC25BEB8FAC7F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// return sceneProvider.ProvideScene(this, location, loadMode, activateOnLoad, priority);
		RuntimeObject* L_2 = ___sceneProvider0;
		RuntimeObject* L_3 = ___location1;
		int32_t L_4 = ___loadMode2;
		bool L_5 = ___activateOnLoad3;
		int32_t L_6 = ___priority4;
		NullCheck(L_2);
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_7;
		L_7 = InterfaceFuncInvoker5< AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, RuntimeObject*, int32_t, bool, int32_t >::Invoke(0 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider::ProvideScene(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32) */, ISceneProvider_t8975F536F686AA01DF259F7AAB973512B5098581_il2cpp_TypeInfo_var, L_2, __this, L_3, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::CleanupSceneInstances(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_CleanupSceneInstances_m462175052395535F374CA0A1E1DE52E922504DF4 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_DecrementReferenceCount_mB2C06A8ED8A24759AA3764B5807A3BC2A3FAD886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_m8A32166FCB4813A4B54798D53F974F171267A245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BF36A217D139B0FC6B74E244C7D1F8C181F6D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFDEC7DAC09787567E422F5E2F0E98E612D2425CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m10C389A6DBA35D31ACF0EC671829A31C91160832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE1F9ECAF1066E4608E8F05006734376B9F94A51C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m56185EE15CA5C41150CF444029481A4E55B6C297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC12651338B151B0405245C9315E8A43D3EAC4639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mE2194F2C0ACF18DD410E9D96ACC52F48A7C39406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m014143AAFCA106D6E36C6A88818861FD48953769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m11819623C6E00A9404CE43691FA16278B8AD92B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6BB395D2DDC0A487188FA876E26C141EF79B11A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* V_0 = NULL;
	Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* V_2 = NULL;
	Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41 V_3;
	memset((&V_3), 0, sizeof(V_3));
	InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* V_4 = NULL;
	{
		// List<InstanceOperation> handlesToRelease = null;
		V_0 = (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D*)NULL;
		// foreach (var h in m_TrackedInstanceOperations)
		HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* L_0 = __this->___m_TrackedInstanceOperations_13;
		NullCheck(L_0);
		Enumerator_tF3FC3B51021D70E31DD729B7B0DD374E36F27B2D L_1;
		L_1 = HashSet_1_GetEnumerator_mE2194F2C0ACF18DD410E9D96ACC52F48A7C39406(L_0, HashSet_1_GetEnumerator_mE2194F2C0ACF18DD410E9D96ACC52F48A7C39406_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BF36A217D139B0FC6B74E244C7D1F8C181F6D49((&V_1), Enumerator_Dispose_m4BF36A217D139B0FC6B74E244C7D1F8C181F6D49_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_0010_1:
			{
				// foreach (var h in m_TrackedInstanceOperations)
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_2;
				L_2 = Enumerator_get_Current_m56185EE15CA5C41150CF444029481A4E55B6C297_inline((&V_1), Enumerator_get_Current_m56185EE15CA5C41150CF444029481A4E55B6C297_RuntimeMethod_var);
				V_2 = L_2;
				// if (h.Result == null && scene == h.InstanceScene())
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_3 = V_2;
				NullCheck(L_3);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = AsyncOperationBase_1_get_Result_m8A32166FCB4813A4B54798D53F974F171267A245_inline(L_3, AsyncOperationBase_1_get_Result_m8A32166FCB4813A4B54798D53F974F171267A245_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_0044_1;
				}
			}
			{
				Scene_tA1DC762B79745EB5140F054C884855B922318356 L_6 = ___scene0;
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_7 = V_2;
				NullCheck(L_7);
				Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
				L_8 = InstanceOperation_InstanceScene_m673A930720C94D7EC8618855441A78A4D2A576D2_inline(L_7, NULL);
				bool L_9;
				L_9 = Scene_op_Equality_m299018477251CD19CF480FB98EE3C79F9DBE3482(L_6, L_8, NULL);
				if (!L_9)
				{
					goto IL_0044_1;
				}
			}
			{
				// if (handlesToRelease == null)
				List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* L_10 = V_0;
				if (L_10)
				{
					goto IL_003d_1;
				}
			}
			{
				// handlesToRelease = new List<InstanceOperation>();
				List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* L_11 = (List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D*)il2cpp_codegen_object_new(List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				List_1__ctor_m6BB395D2DDC0A487188FA876E26C141EF79B11A4(L_11, List_1__ctor_m6BB395D2DDC0A487188FA876E26C141EF79B11A4_RuntimeMethod_var);
				V_0 = L_11;
			}

IL_003d_1:
			{
				// handlesToRelease.Add(h);
				List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* L_12 = V_0;
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_13 = V_2;
				NullCheck(L_12);
				List_1_Add_m014143AAFCA106D6E36C6A88818861FD48953769_inline(L_12, L_13, List_1_Add_m014143AAFCA106D6E36C6A88818861FD48953769_RuntimeMethod_var);
			}

IL_0044_1:
			{
				// foreach (var h in m_TrackedInstanceOperations)
				bool L_14;
				L_14 = Enumerator_MoveNext_m10C389A6DBA35D31ACF0EC671829A31C91160832((&V_1), Enumerator_MoveNext_m10C389A6DBA35D31ACF0EC671829A31C91160832_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// if (handlesToRelease != null)
		List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* L_15 = V_0;
		if (!L_15)
		{
			goto IL_00a0;
		}
	}
	{
		// foreach (var h in handlesToRelease)
		List_1_t668CC7C1BA3D20BBB4086961BA56A0052491016D* L_16 = V_0;
		NullCheck(L_16);
		Enumerator_t22266D00703CB27B014ABC72D0E8A58C483F5C41 L_17;
		L_17 = List_1_GetEnumerator_m11819623C6E00A9404CE43691FA16278B8AD92B7(L_16, List_1_GetEnumerator_m11819623C6E00A9404CE43691FA16278B8AD92B7_RuntimeMethod_var);
		V_3 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFDEC7DAC09787567E422F5E2F0E98E612D2425CB((&V_3), Enumerator_Dispose_mFDEC7DAC09787567E422F5E2F0E98E612D2425CB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_0069_1:
			{
				// foreach (var h in handlesToRelease)
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_18;
				L_18 = Enumerator_get_Current_mC12651338B151B0405245C9315E8A43D3EAC4639_inline((&V_3), Enumerator_get_Current_mC12651338B151B0405245C9315E8A43D3EAC4639_RuntimeMethod_var);
				V_4 = L_18;
				// m_TrackedInstanceOperations.Remove(h);
				HashSet_1_tB813E9BB87712BD40D5CDC96CDB692FCBBEB5267* L_19 = __this->___m_TrackedInstanceOperations_13;
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_20 = V_4;
				NullCheck(L_19);
				bool L_21;
				L_21 = HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5(L_19, L_20, HashSet_1_Remove_m10E73227B48F038CAA342EB663A8C43BA9E29DC5_RuntimeMethod_var);
				// h.DecrementReferenceCount();
				InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* L_22 = V_4;
				NullCheck(L_22);
				AsyncOperationBase_1_DecrementReferenceCount_mB2C06A8ED8A24759AA3764B5807A3BC2A3FAD886(L_22, AsyncOperationBase_1_DecrementReferenceCount_mB2C06A8ED8A24759AA3764B5807A3BC2A3FAD886_RuntimeMethod_var);
			}

IL_0087_1:
			{
				// foreach (var h in handlesToRelease)
				bool L_23;
				L_23 = Enumerator_MoveNext_mE1F9ECAF1066E4608E8F05006734376B9F94A51C((&V_3), Enumerator_MoveNext_mE1F9ECAF1066E4608E8F05006734376B9F94A51C_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0069_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::ExecuteDeferredCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_ExecuteDeferredCallbacks_m7BB2468360D4AAF86E437E93E9D52E134AE4AA7F (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_InsideExecuteDeferredCallbacksMethod = true;
		__this->___m_InsideExecuteDeferredCallbacksMethod_16 = (bool)1;
		// for (int i = 0; i < m_DeferredCompleteCallbacks.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_000b:
	{
		// m_DeferredCompleteCallbacks[i].InvokeCompletionEvent();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_0 = __this->___m_DeferredCompleteCallbacks_15;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E(L_0, L_1, List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(17 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::InvokeCompletionEvent() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		// m_DeferredCompleteCallbacks[i].DecrementReferenceCount();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_3 = __this->___m_DeferredCompleteCallbacks_15;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E(L_3, L_4, List_1_get_Item_m078B41EA8CEF52CDAB3D6E90D5747D98533F1C1E_RuntimeMethod_var);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::DecrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_5);
		// for (int i = 0; i < m_DeferredCompleteCallbacks.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < m_DeferredCompleteCallbacks.Count; i++)
		int32_t L_7 = V_0;
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_8 = __this->___m_DeferredCompleteCallbacks_15;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_inline(L_8, List_1_get_Count_m4A970745FED9A3407988489DCA7D68ED56392E6E_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		// m_DeferredCompleteCallbacks.Clear();
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_10 = __this->___m_DeferredCompleteCallbacks_15;
		NullCheck(L_10);
		List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_inline(L_10, List_1_Clear_mA9BA6B01DA0D7CD6FB80CEDA8B3591361D9D7688_RuntimeMethod_var);
		// m_InsideExecuteDeferredCallbacksMethod = false;
		__this->___m_InsideExecuteDeferredCallbacksMethod_16 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::RegisterForDeferredCallback(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RegisterForDeferredCallback_m05889AD5E7D950770177A9B2920B4736546B0225 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___op0, bool ___incrementRefCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (CallbackHooksEnabled && m_InsideExecuteDeferredCallbacksMethod)
		bool L_0 = __this->___CallbackHooksEnabled_4;
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		bool L_1 = __this->___m_InsideExecuteDeferredCallbacksMethod_16;
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (m_DeferredCallbacksToRegister == null)
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_2 = __this->___m_DeferredCallbacksToRegister_17;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// m_DeferredCallbacksToRegister = new List<DeferredCallbackRegisterRequest>();
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_3 = (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*)il2cpp_codegen_object_new(List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B(L_3, List_1__ctor_m842F5C74CDF71254D3DF14CBACB255E377C9BC4B_RuntimeMethod_var);
		__this->___m_DeferredCallbacksToRegister_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeferredCallbacksToRegister_17), (void*)L_3);
	}

IL_0023:
	{
		// m_DeferredCallbacksToRegister.Add
		//     (
		//         new DeferredCallbackRegisterRequest()
		//         {
		//             operation = op,
		//             incrementRefCount = incrementRefCount
		//         }
		//     );
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_4 = __this->___m_DeferredCallbacksToRegister_17;
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD));
		RuntimeObject* L_5 = ___op0;
		(&V_0)->___operation_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___operation_0), (void*)L_5);
		bool L_6 = ___incrementRefCount1;
		(&V_0)->___incrementRefCount_1 = L_6;
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_7 = V_0;
		NullCheck(L_4);
		List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_inline(L_4, L_7, List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_RuntimeMethod_var);
		return;
	}

IL_0048:
	{
		// if (incrementRefCount)
		bool L_8 = ___incrementRefCount1;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// op.IncrementReferenceCount();
		RuntimeObject* L_9 = ___op0;
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::IncrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_9);
	}

IL_0051:
	{
		// m_DeferredCompleteCallbacks.Add(op);
		List_1_t8922AAF75172DC9F479AA861DF5C6769C984DA9C* L_10 = __this->___m_DeferredCompleteCallbacks_15;
		RuntimeObject* L_11 = ___op0;
		NullCheck(L_10);
		List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_inline(L_10, L_11, List_1_Add_mD29375DC691B22BB5FAF7730F821BE78564E3121_RuntimeMethod_var);
		// RegisterForCallbacks();
		ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, float ___unscaledDeltaTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_InsideUpdateMethod)
		bool L_0 = __this->___m_InsideUpdateMethod_10;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("Reentering the Update method is not allowed.  This can happen when calling WaitForCompletion on an operation while inside of a callback.");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A0359BACB67159E4781CB3F47FB9DBDCD3466E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var)));
	}

IL_0013:
	{
		// m_InsideUpdateMethod = true;
		__this->___m_InsideUpdateMethod_10 = (bool)1;
		// m_UpdateCallbacks.Invoke(unscaledDeltaTime);
		DelegateList_1_t472259E3E09904EE80A15B306399DBFE8998BAAD* L_2 = __this->___m_UpdateCallbacks_14;
		float L_3 = ___unscaledDeltaTime0;
		NullCheck(L_2);
		DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A(L_2, L_3, DelegateList_1_Invoke_mFB21D7BA92CFEAA67905C35AAD3291DE4557CD8A_RuntimeMethod_var);
		// m_UpdatingReceivers = true;
		__this->___m_UpdatingReceivers_9 = (bool)1;
		// for (int i = 0; i < m_UpdateReceivers.Count; i++)
		V_0 = 0;
		goto IL_0047;
	}

IL_0031:
	{
		// m_UpdateReceivers[i].Update(unscaledDeltaTime);
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_4 = __this->___m_UpdateReceivers_7;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B(L_4, L_5, ListWithEvents_1_get_Item_m40ED7F3FE796F695454AEFD5C5684D5CD0371B4B_RuntimeMethod_var);
		float L_7 = ___unscaledDeltaTime0;
		NullCheck(L_6);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.ResourceManagement.IUpdateReceiver::Update(System.Single) */, IUpdateReceiver_tCE1ECC31330B7BBF10BD42EEEF23DA08B9F49154_il2cpp_TypeInfo_var, L_6, L_7);
		// for (int i = 0; i < m_UpdateReceivers.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < m_UpdateReceivers.Count; i++)
		int32_t L_9 = V_0;
		ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_10 = __this->___m_UpdateReceivers_7;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84(L_10, ListWithEvents_1_get_Count_m54916F3A852ACE2E85ABCA0267C984ACCDCABB84_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0031;
		}
	}
	{
		// m_UpdatingReceivers = false;
		__this->___m_UpdatingReceivers_9 = (bool)0;
		// if (m_UpdateReceiversToRemove != null)
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_12 = __this->___m_UpdateReceiversToRemove_8;
		if (!L_12)
		{
			goto IL_00a7;
		}
	}
	{
		// foreach (var r in m_UpdateReceiversToRemove)
		List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1* L_13 = __this->___m_UpdateReceiversToRemove_8;
		NullCheck(L_13);
		Enumerator_t230A247967992278F2D3D7BFFC1081A8DD3ABF0E L_14;
		L_14 = List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09(L_13, List_1_GetEnumerator_m313491CB8382194A660D52F138BFC51642403F09_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208((&V_1), Enumerator_Dispose_mD14575CCF3C2A116C2F5722F6A6C812F1B8A4208_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0087_1;
			}

IL_0072_1:
			{
				// foreach (var r in m_UpdateReceiversToRemove)
				RuntimeObject* L_15;
				L_15 = Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_inline((&V_1), Enumerator_get_Current_m55AE98E914EAE503C9C49320301DC9D381D3FA6D_RuntimeMethod_var);
				V_2 = L_15;
				// m_UpdateReceivers.Remove(r);
				ListWithEvents_1_t85D3107FC5E05D8F81F1011C4DD9112E161E2DAF* L_16 = __this->___m_UpdateReceivers_7;
				RuntimeObject* L_17 = V_2;
				NullCheck(L_16);
				bool L_18;
				L_18 = ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91(L_16, L_17, ListWithEvents_1_Remove_m3A98835CC0666BDD435BE0E1CCA7F919202DDF91_RuntimeMethod_var);
			}

IL_0087_1:
			{
				// foreach (var r in m_UpdateReceiversToRemove)
				bool L_19;
				L_19 = Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850((&V_1), Enumerator_MoveNext_m510C271E5E816200C5A7B15ECAF2ACA1C5D18850_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		// m_UpdateReceiversToRemove = null;
		__this->___m_UpdateReceiversToRemove_8 = (List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UpdateReceiversToRemove_8), (void*)(List_1_t41C2EDD66117D972FEA55570670E98C21D5C49E1*)NULL);
	}

IL_00a7:
	{
		// if (m_DeferredCallbacksToRegister != null)
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_20 = __this->___m_DeferredCallbacksToRegister_17;
		if (!L_20)
		{
			goto IL_00fa;
		}
	}
	{
		// foreach (DeferredCallbackRegisterRequest callback in m_DeferredCallbacksToRegister)
		List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* L_21 = __this->___m_DeferredCallbacksToRegister_17;
		NullCheck(L_21);
		Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676 L_22;
		L_22 = List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A(L_21, List_1_GetEnumerator_m564CB69E4A076D1B353881952DCCDD2AE019A03A_RuntimeMethod_var);
		V_3 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8((&V_3), Enumerator_Dispose_mA302D5AD9BA1CAA03E24A9290D22DFC23C0CCCF8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00da_1;
			}

IL_00bd_1:
			{
				// foreach (DeferredCallbackRegisterRequest callback in m_DeferredCallbacksToRegister)
				DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_23;
				L_23 = Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_inline((&V_3), Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_RuntimeMethod_var);
				V_4 = L_23;
				// RegisterForDeferredCallback(callback.operation, callback.incrementRefCount);
				DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_24 = V_4;
				RuntimeObject* L_25 = L_24.___operation_0;
				DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_26 = V_4;
				bool L_27 = L_26.___incrementRefCount_1;
				ResourceManager_RegisterForDeferredCallback_m05889AD5E7D950770177A9B2920B4736546B0225(__this, L_25, L_27, NULL);
			}

IL_00da_1:
			{
				// foreach (DeferredCallbackRegisterRequest callback in m_DeferredCallbacksToRegister)
				bool L_28;
				L_28 = Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247((&V_3), Enumerator_MoveNext_m8BA038D71CA239DE45DF14F2C813EAB1CE665247_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_00bd_1;
				}
			}
			{
				goto IL_00f3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f3:
	{
		// m_DeferredCallbacksToRegister = null;
		__this->___m_DeferredCallbacksToRegister_17 = (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DeferredCallbacksToRegister_17), (void*)(List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*)NULL);
	}

IL_00fa:
	{
		// ExecuteDeferredCallbacks();
		ResourceManager_ExecuteDeferredCallbacks_m7BB2468360D4AAF86E437E93E9D52E134AE4AA7F(__this, NULL);
		// m_InsideUpdateMethod = false;
		__this->___m_InsideUpdateMethod_10 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Dispose_m850F673638C3ABDBA6B5E6D7A03D5B8DDA0D67B2 (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Exists_m00642B1C84956EFA4526544421447D3E17EC6A25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MonoBehaviourCallbackHooks.Exists && m_RegisteredForCallbacks)
		bool L_0;
		L_0 = ComponentSingleton_1_get_Exists_m00642B1C84956EFA4526544421447D3E17EC6A25(ComponentSingleton_1_get_Exists_m00642B1C84956EFA4526544421447D3E17EC6A25_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		bool L_1 = __this->___m_RegisteredForCallbacks_26;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// MonoBehaviourCallbackHooks.Instance.OnUpdateDelegate -= Update;
		MonoBehaviourCallbackHooks_tC738EC3E1125A7ABB173D0F9F8B555238CA7615F* L_2;
		L_2 = ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16(ComponentSingleton_1_get_Instance_mAA616334105B9797EB1FCC24E1D7D9D56C477D16_RuntimeMethod_var);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)il2cpp_codegen_object_new(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859(L_3, __this, (intptr_t)((void*)ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		MonoBehaviourCallbackHooks_remove_OnUpdateDelegate_mE887431AD33057B98989EEA888B2342D18FB5DE4(L_2, L_3, NULL);
		// m_RegisteredForCallbacks = false;
		__this->___m_RegisteredForCallbacks_26 = (bool)0;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager__cctor_m0B372E572C65E29AF0A7F1F8CBDA2BF720A22DED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static int s_GroupOperationTypeHash = typeof(GroupOperation).GetHashCode();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___s_GroupOperationTypeHash_23 = L_2;
		// static int s_InstanceOperationTypeHash = typeof(InstanceOperation).GetHashCode();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		((ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D_il2cpp_TypeInfo_var))->___s_InstanceOperationTypeHash_24 = L_5;
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager::<.ctor>b__53_0(UnityEngine.ResourceManagement.IUpdateReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_U3C_ctorU3Eb__53_0_m4AFA65601CE387843900AB7A551CD39F414A50CA (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	{
		// m_UpdateReceivers.OnElementAdded += x => RegisterForCallbacks();
		ResourceManager_RegisterForCallbacks_m805F04D79BF5BFF608E92C029378AA498A0966E6(__this, NULL);
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


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_pinvoke(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_pinvoke_back(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke& marshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_pinvoke_cleanup(DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_com(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com& marshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_com_back(const DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com& marshaled, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F& unmarshaled)
{
	Exception_t* ___U3COperationHandleU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<OperationHandle>k__BackingField' of type 'DiagnosticEventContext'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3COperationHandleU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext
IL2CPP_EXTERN_C void DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshal_com_cleanup(DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F_marshaled_com& marshaled)
{
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_OperationHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationHandle OperationHandle { get; }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = __this->___U3COperationHandleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D _returnValue;
	_returnValue = DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public DiagnosticEventType Type { get; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_EventValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public int EventValue { get; }
		int32_t L_0 = __this->___U3CEventValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Object UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public object Context { get; }
		RuntimeObject* L_0 = __this->___U3CContextU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventContext::.ctor(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle,UnityEngine.ResourceManagement.ResourceManager/DiagnosticEventType,System.Int32,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51 (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___op0, int32_t ___type1, int32_t ___eventValue2, String_t* ___error3, RuntimeObject* ___context4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B2_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B1_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B3_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* G_B4_1 = NULL;
	{
		// OperationHandle = op;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = ___op0;
		__this->___U3COperationHandleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3COperationHandleU3Ek__BackingField_0))->___m_InternalOp_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3COperationHandleU3Ek__BackingField_0))->___m_LocationName_2), (void*)NULL);
		#endif
		// Type = type;
		int32_t L_1 = ___type1;
		__this->___U3CTypeU3Ek__BackingField_1 = L_1;
		// EventValue = eventValue;
		int32_t L_2 = ___eventValue2;
		__this->___U3CEventValueU3Ek__BackingField_2 = L_2;
		// Location = op.m_InternalOp != null && op.m_InternalOp is IGenericProviderOperation gen
		//     ? gen.Location
		//     : null;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_3 = ___op0;
		RuntimeObject* L_4 = L_3.___m_InternalOp_0;
		G_B1_0 = __this;
		if (!L_4)
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_5 = ___op0;
		RuntimeObject* L_6 = L_5.___m_InternalOp_0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		G_B2_0 = G_B1_0;
		if (L_7)
		{
			G_B3_0 = G_B1_0;
			goto IL_0030;
		}
	}

IL_002d:
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0036;
	}

IL_0030:
	{
		RuntimeObject* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_Location() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_8);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_0036:
	{
		G_B4_1->___U3CLocationU3Ek__BackingField_3 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___U3CLocationU3Ek__BackingField_3), (void*)G_B4_0);
		// Error = error;
		String_t* L_10 = ___error3;
		__this->___U3CErrorU3Ek__BackingField_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_5), (void*)L_10);
		// Context = context;
		RuntimeObject* L_11 = ___context4;
		__this->___U3CContextU3Ek__BackingField_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContextU3Ek__BackingField_4), (void*)L_11);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51_AdjustorThunk (RuntimeObject* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___op0, int32_t ___type1, int32_t ___eventValue2, String_t* ___error3, RuntimeObject* ___context4, const RuntimeMethod* method)
{
	DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F*>(__this + _offset);
	DiagnosticEventContext__ctor_m14E2DE6A37749D242E166A1CA6B94AC0F99D4C51(_thisAdjusted, ___op0, ___type1, ___eventValue2, ___error3, ___context4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_pinvoke(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_pinvoke_back(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke& marshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_pinvoke_cleanup(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_com(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com& marshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_com_back(const DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com& marshaled, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD& unmarshaled)
{
	Exception_t* ___operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'operation' of type 'DeferredCallbackRegisterRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceManager/DeferredCallbackRegisterRequest
IL2CPP_EXTERN_C void DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshal_com_cleanup(DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::InstanceScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 InstanceOperation_InstanceScene_m673A930720C94D7EC8618855441A78A4D2A576D2 (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* __this, const RuntimeMethod* method) 
{
	{
		// public Scene InstanceScene() => m_scene;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = __this->___m_scene_21;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceManager/InstanceOperation::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstanceOperation_Execute_m01F6E265405DD013116E1C90C2B2CD1F713411EE (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070CAE9ABBC9921BAD35C84FEBF95454A66D9532);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		// Exception e = m_dependency.OperationException;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* L_0 = (&__this->___m_dependency_17);
		Exception_t* L_1;
		L_1 = AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F(L_0, AsyncOperationHandle_1_get_OperationException_mEBD2EA7D831F4DE48EB1B851F2E690179A2AD21F_RuntimeMethod_var);
		V_0 = L_1;
		// if (m_dependency.Status == AsyncOperationStatus.Succeeded)
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA* L_2 = (&__this->___m_dependency_17);
		int32_t L_3;
		L_3 = AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22(L_2, AsyncOperationHandle_1_get_Status_mD78FF172C6BBCB662A9079992F40FDE886C46D22_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// m_instance = m_instanceProvider.ProvideInstance(m_RM, m_dependency, m_instantiationParams);
		RuntimeObject* L_4 = __this->___m_instanceProvider_19;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_5 = ((AsyncOperationBase_1_tA2DF1CD254B4FBD8D995A67847F4E04461825E16*)__this)->___m_RM_4;
		AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA L_6 = __this->___m_dependency_17;
		InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 L_7 = __this->___m_instantiationParams_18;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = InterfaceFuncInvoker3< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationHandle_1_tE77A4E2148058198E65AA8063DCFD376ED3D4FCA, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669 >::Invoke(0 /* UnityEngine.GameObject UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider::ProvideInstance(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.GameObject>,UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters) */, IInstanceProvider_t6AD5AE64CB95B873B111117A37B8D967FC67FA37_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		__this->___m_instance_20 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_instance_20), (void*)L_8);
		// if (m_instance != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_instance_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		// m_scene = m_instance.scene;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_instance_20;
		NullCheck(L_11);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_12;
		L_12 = GameObject_get_scene_m747D45E8CECC56DD47D1E103F9E51D5FBEDA4B01(L_11, NULL);
		__this->___m_scene_21 = L_12;
	}

IL_005c:
	{
		// Complete(m_instance, true, null);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_instance_20;
		AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535(__this, L_13, (bool)1, (String_t*)NULL, AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// Complete(m_instance, false, string.Format("Dependency operation failed with {0}.", e));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_instance_20;
		Exception_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral070CAE9ABBC9921BAD35C84FEBF95454A66D9532, L_15, NULL);
		AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535(__this, L_14, (bool)0, L_16, AsyncOperationBase_1_Complete_m9541DA0DF79E49EB30A8D94F916CD30BFCCF6535_RuntimeMethod_var);
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
// System.Boolean UnityEngine.ResourceManagement.WebRequestQueueOperation::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRequestQueueOperation_get_IsDone_mF8B3459F19B874A0D0047DDEA4DCCF2FA0DFF813 (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Completed || Result != null; }
		bool L_0 = __this->___m_Completed_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___Result_1;
		return (bool)((!(((RuntimeObject*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.ResourceManagement.WebRequestQueueOperation::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueueOperation__ctor_mF6E7DC7A72C723056182035AAFFA7B28AF1F0007 (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	{
		// public WebRequestQueueOperation(UnityWebRequest request)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_WebRequest = request;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		__this->___m_WebRequest_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WebRequest_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.WebRequestQueueOperation::Complete(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueueOperation_Complete_m74FC3854CF7B21E72C64FE945830A6250BBD127D (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___asyncOp0, const RuntimeMethod* method) 
{
	Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* G_B2_0 = NULL;
	Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* G_B1_0 = NULL;
	{
		// m_Completed = true;
		__this->___m_Completed_0 = (bool)1;
		// Result = asyncOp;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = ___asyncOp0;
		__this->___Result_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Result_1), (void*)L_0);
		// OnComplete?.Invoke(Result);
		Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* L_1 = __this->___OnComplete_2;
		Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = __this->___Result_1;
		NullCheck(G_B2_0);
		Action_1_Invoke_mD1436EAF0C596E023C15E9A1FA4985BFB21288AD_inline(G_B2_0, L_3, NULL);
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
// System.Void UnityEngine.ResourceManagement.WebRequestQueue::SetMaxConcurrentRequests(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueue_SetMaxConcurrentRequests_m830CA8C3B21290612D0EC05670BE51CB4E9C1441 (int32_t ___maxRequests0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (maxRequests < 1)
		int32_t L_0 = ___maxRequests0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException("MaxRequests must be 1 or greater.", "maxRequests");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AF3D3CCB9472959ADABCD6E7FD248B6061A42C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07FC3A2B31C3E73FFABFEE7131B1DFC175EBF908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestQueue_SetMaxConcurrentRequests_m830CA8C3B21290612D0EC05670BE51CB4E9C1441_RuntimeMethod_var)));
	}

IL_0014:
	{
		// s_MaxRequest = maxRequests;
		int32_t L_2 = ___maxRequests0;
		il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_MaxRequest_0 = L_2;
		// }
		return;
	}
}
// UnityEngine.ResourceManagement.WebRequestQueueOperation UnityEngine.ResourceManagement.WebRequestQueue::QueueRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* WebRequestQueue_QueueRequest_m1AAE9197B721E4492F136343B2636079F4E48E08 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m163E0BCFFFE7089C8C9AC958FEB33BA0B3A5A54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m0DD398F7245C086B22C76E92CB2235D0BB5FE245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* V_0 = NULL;
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// WebRequestQueueOperation queueOperation = new WebRequestQueueOperation(request);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_1 = (WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363*)il2cpp_codegen_object_new(WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebRequestQueueOperation__ctor_mF6E7DC7A72C723056182035AAFFA7B28AF1F0007(L_1, L_0, NULL);
		V_0 = L_1;
		// if (s_ActiveRequests.Count < s_MaxRequest)
		il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* L_2 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_ActiveRequests_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m163E0BCFFFE7089C8C9AC958FEB33BA0B3A5A54B_inline(L_2, List_1_get_Count_m163E0BCFFFE7089C8C9AC958FEB33BA0B3A5A54B_RuntimeMethod_var);
		int32_t L_4 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_MaxRequest_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0065;
		}
	}
	{
		// UnityWebRequestAsyncOperation webRequestAsyncOp = null;
		V_1 = (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)NULL;
	}
	try
	{// begin try (depth: 1)
		{
			// webRequestAsyncOp = request.SendWebRequest();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___request0;
			NullCheck(L_5);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
			L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
			V_1 = L_6;
			// s_ActiveRequests.Add(webRequestAsyncOp);
			il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
			List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* L_7 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_ActiveRequests_2;
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_8 = V_1;
			NullCheck(L_7);
			List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_inline(L_7, L_8, List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_RuntimeMethod_var);
			// if (webRequestAsyncOp.isDone)
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9 = V_1;
			NullCheck(L_9);
			bool L_10;
			L_10 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_9, NULL);
			if (!L_10)
			{
				goto IL_003c_1;
			}
		}
		{
			// OnWebAsyncOpComplete(webRequestAsyncOp);
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_11 = V_1;
			il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
			WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96(L_11, NULL);
			goto IL_004e_1;
		}

IL_003c_1:
		{
			// webRequestAsyncOp.completed += OnWebAsyncOpComplete;
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_12 = V_1;
			Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_13 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_13, NULL, (intptr_t)((void*)WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96_RuntimeMethod_var), NULL);
			NullCheck(L_12);
			AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_12, L_13, NULL);
		}

IL_004e_1:
		{
			// }
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0050;
		}
		throw e;
	}

CATCH_0050:
	{// begin catch(System.Exception)
		// Debug.LogError(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005c;
	}// end catch (depth: 1)

IL_005c:
	{
		// queueOperation.Complete(webRequestAsyncOp);
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_15 = V_0;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_16 = V_1;
		NullCheck(L_15);
		WebRequestQueueOperation_Complete_m74FC3854CF7B21E72C64FE945830A6250BBD127D(L_15, L_16, NULL);
		goto IL_0070;
	}

IL_0065:
	{
		// s_QueuedOperations.Enqueue(queueOperation);
		il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* L_17 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_QueuedOperations_1;
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_18 = V_0;
		NullCheck(L_17);
		Queue_1_Enqueue_m0DD398F7245C086B22C76E92CB2235D0BB5FE245(L_17, L_18, Queue_1_Enqueue_m0DD398F7245C086B22C76E92CB2235D0BB5FE245_RuntimeMethod_var);
	}

IL_0070:
	{
		// return queueOperation;
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_19 = V_0;
		return L_19;
	}
}
// System.Void UnityEngine.ResourceManagement.WebRequestQueue::OnWebAsyncOpComplete(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB0D828397E974329BA517D9B3BB7557FFCC33FF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m37D7368D06F6D745D0A18C888DB41A4B3D71D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC12F41F95A31993607B72C5E085A6069F898F4FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	{
		// s_ActiveRequests.Remove((operation as UnityWebRequestAsyncOperation));
		il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* L_0 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_ActiveRequests_2;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1 = ___operation0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mB0D828397E974329BA517D9B3BB7557FFCC33FF0(L_0, ((UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)IsInstClass((RuntimeObject*)L_1, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var)), List_1_Remove_mB0D828397E974329BA517D9B3BB7557FFCC33FF0_RuntimeMethod_var);
		// if (s_QueuedOperations.Count > 0)
		Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* L_3 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_QueuedOperations_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_mC12F41F95A31993607B72C5E085A6069F898F4FA_inline(L_3, Queue_1_get_Count_mC12F41F95A31993607B72C5E085A6069F898F4FA_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		// var nextQueuedOperation = s_QueuedOperations.Dequeue();
		il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* L_5 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_QueuedOperations_1;
		NullCheck(L_5);
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_6;
		L_6 = Queue_1_Dequeue_m37D7368D06F6D745D0A18C888DB41A4B3D71D99D(L_5, Queue_1_Dequeue_m37D7368D06F6D745D0A18C888DB41A4B3D71D99D_RuntimeMethod_var);
		// var webRequestAsyncOp = nextQueuedOperation.m_WebRequest.SendWebRequest();
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_7 = L_6;
		NullCheck(L_7);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = L_7->___m_WebRequest_3;
		NullCheck(L_8);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_9;
		L_9 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_8, NULL);
		V_0 = L_9;
		// webRequestAsyncOp.completed += OnWebAsyncOpComplete;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_11 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_11, NULL, (intptr_t)((void*)WebRequestQueue_OnWebAsyncOpComplete_mAC187918CA012D7385DDE6038B279B3E7F94CB96_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_10, L_11, NULL);
		// s_ActiveRequests.Add(webRequestAsyncOp);
		List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* L_12 = ((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_ActiveRequests_2;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_inline(L_12, L_13, List_1_Add_m75845BAA05EF678E41D0D073877D7BCC4D4FAA9C_RuntimeMethod_var);
		// nextQueuedOperation.Complete(webRequestAsyncOp);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_14 = V_0;
		NullCheck(L_7);
		WebRequestQueueOperation_Complete_m74FC3854CF7B21E72C64FE945830A6250BBD127D(L_7, L_14, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.WebRequestQueue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestQueue__cctor_m4416E1B9E49A376414E1BC422E3FCB99676C82B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE2C973AD758CCD80E5B081D3831EC32196ECB651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82E373BCF4E787F0A82707510F7681917A886DB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m7E67C88DF661BC06EDA394F77B91D108A7E62AAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static int s_MaxRequest = 500;
		((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_MaxRequest_0 = ((int32_t)500);
		// internal static Queue<WebRequestQueueOperation> s_QueuedOperations = new Queue<WebRequestQueueOperation>();
		Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA* L_0 = (Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA*)il2cpp_codegen_object_new(Queue_1_t0B1DA4E727B6E5F2FEFD8E869976E56C06BAF4BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m7E67C88DF661BC06EDA394F77B91D108A7E62AAD(L_0, Queue_1__ctor_m7E67C88DF661BC06EDA394F77B91D108A7E62AAD_RuntimeMethod_var);
		((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_QueuedOperations_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_QueuedOperations_1), (void*)L_0);
		// internal static List<UnityWebRequestAsyncOperation> s_ActiveRequests = new List<UnityWebRequestAsyncOperation>();
		List_1_t82E373BCF4E787F0A82707510F7681917A886DB6* L_1 = (List_1_t82E373BCF4E787F0A82707510F7681917A886DB6*)il2cpp_codegen_object_new(List_1_t82E373BCF4E787F0A82707510F7681917A886DB6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE2C973AD758CCD80E5B081D3831EC32196ECB651(L_1, List_1__ctor_mE2C973AD758CCD80E5B081D3831EC32196ECB651_RuntimeMethod_var);
		((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_ActiveRequests_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var))->___s_ActiveRequests_2), (void*)L_1);
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
// System.Void UnityEngine.ResourceManagement.Exceptions.ResourceManagerException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManagerException__ctor_m100F5F75AE8F119C04634B839871DECF2A9E3773 (ResourceManagerException_t49A563CE4851F1491A20EF29BF1E03276FD6ED25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ResourceManagerException() {}
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public ResourceManagerException() {}
		return;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.ResourceManagerException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceManagerException_ToString_m02FFE7C99044E1165624FD1366817B2EDD4093FF (ResourceManagerException_t49A563CE4851F1491A20EF29BF1E03276FD6ED25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{GetType().Name} : {base.Message}\n{InnerException}";
		Type_t* L_0;
		L_0 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		Exception_t* L_3;
		L_3 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D, L_1, L_2, L_3, NULL);
		return L_4;
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
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnknownResourceProviderException_get_Location_mC769291CC27D81B8573117354AB08E222DD68CF8 (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, const RuntimeMethod* method) 
{
	{
		// public IResourceLocation Location { get; private set; }
		RuntimeObject* L_0 = __this->___U3CLocationU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::set_Location(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownResourceProviderException_set_Location_mC4689284960B91DB49E674BDAF259530C3F4B421 (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IResourceLocation Location { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLocationU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocationU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::.ctor(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownResourceProviderException__ctor_mF41159A0C17377B2FA88EEB384873A9E74C0B9D4 (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, RuntimeObject* ___location0, const RuntimeMethod* method) 
{
	{
		// public UnknownResourceProviderException(IResourceLocation location)
		ResourceManagerException__ctor_m100F5F75AE8F119C04634B839871DECF2A9E3773(__this, NULL);
		// Location = location;
		RuntimeObject* L_0 = ___location0;
		UnknownResourceProviderException_set_Location_mC4689284960B91DB49E674BDAF259530C3F4B421_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnknownResourceProviderException_get_Message_m1A75337FDA1BE4FEA28CB84A8C1542034198B91A (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4644BA3F1CC972E9F35C97AC17A6D9DCEBF2E486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9FDBA64471F57CB1D6F0BE2082CDC9D03288855);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	{
		// return base.Message + ", ProviderId=" + Location.ProviderId + ", Location=" + Location;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4644BA3F1CC972E9F35C97AC17A6D9DCEBF2E486);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4644BA3F1CC972E9F35C97AC17A6D9DCEBF2E486);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		RuntimeObject* L_5;
		L_5 = UnknownResourceProviderException_get_Location_mC769291CC27D81B8573117354AB08E222DD68CF8_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ProviderId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF9FDBA64471F57CB1D6F0BE2082CDC9D03288855);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF9FDBA64471F57CB1D6F0BE2082CDC9D03288855);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RuntimeObject* L_9;
		L_9 = UnknownResourceProviderException_get_Location_mC769291CC27D81B8573117354AB08E222DD68CF8_inline(__this, NULL);
		RuntimeObject* L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = 4;
		G_B1_2 = L_8;
		G_B1_3 = L_8;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = 4;
			G_B2_2 = L_8;
			G_B2_3 = L_8;
			goto IL_003c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0041;
	}

IL_003c:
	{
		NullCheck(G_B2_0);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0041:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_12;
		L_12 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B3_3, NULL);
		return L_12;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnknownResourceProviderException_ToString_m3515DCC45986154B425A190CCDC6CABA516C5C7D (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, const RuntimeMethod* method) 
{
	{
		// return Message;
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, __this);
		return L_0;
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
// System.Void UnityEngine.ResourceManagement.Exceptions.OperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59 (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public OperationException(string message, Exception innerException = null) : base(message, innerException) {}
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// public OperationException(string message, Exception innerException = null) : base(message, innerException) {}
		return;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.OperationException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationException_ToString_m8544F18BF5A2A8B6194DBF46F672DB8C128AA34D (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"{GetType().Name} : {base.Message}\n{InnerException}";
		Type_t* L_0;
		L_0 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2;
		L_2 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		Exception_t* L_3;
		L_3 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(__this, NULL);
		String_t* L_4;
		L_4 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral8A60C15B3F3484BC0138C5410F143D1EA05CA01D, L_1, L_2, L_3, NULL);
		return L_4;
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
// System.Void UnityEngine.ResourceManagement.Exceptions.ProviderException::.ctor(System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderException__ctor_m298FE0E1B736CBE00C44FDC9D6C960F7A927830D (ProviderException_tCFC98A50C874BCD7FAF64F677F162A3B2C7B09DA* __this, String_t* ___message0, RuntimeObject* ___location1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	{
		// : base(message, innerException)
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException2;
		OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59(__this, L_0, L_1, NULL);
		// Location = location;
		RuntimeObject* L_2 = ___location1;
		__this->___U3CLocationU3Ek__BackingField_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocationU3Ek__BackingField_18), (void*)L_2);
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
// System.Void UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::.ctor(System.String,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.ResourceManagement.Util.UnityWebRequestResult,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteProviderException__ctor_mB262F595DD1E23F24A37B5AB6142B8180CFF70C1 (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, String_t* ___message0, RuntimeObject* ___location1, UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* ___uwrResult2, Exception_t* ___innerException3, const RuntimeMethod* method) 
{
	{
		// : base(message, location, innerException)
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___location1;
		Exception_t* L_2 = ___innerException3;
		ProviderException__ctor_m298FE0E1B736CBE00C44FDC9D6C960F7A927830D(__this, L_0, L_1, L_2, NULL);
		// WebRequestResult = uwrResult;
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_3 = ___uwrResult2;
		__this->___U3CWebRequestResultU3Ek__BackingField_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CWebRequestResultU3Ek__BackingField_19), (void*)L_3);
		// }
		return;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteProviderException_get_Message_m19B282D7E74FAC7DBFECBEB7A57D1B1D9488F7CD (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, const RuntimeMethod* method) 
{
	{
		// public override string Message => this.ToString();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		return L_0;
	}
}
// UnityEngine.ResourceManagement.Util.UnityWebRequestResult UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::get_WebRequestResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* RemoteProviderException_get_WebRequestResult_mF80BDC58604D4D5C44AB968FA544CFD30C330954 (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequestResult WebRequestResult { get; }
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_0 = __this->___U3CWebRequestResultU3Ek__BackingField_19;
		return L_0;
	}
}
// System.String UnityEngine.ResourceManagement.Exceptions.RemoteProviderException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RemoteProviderException_ToString_m4D0CD66BDF24920556E4E8A4F418B457AC696AE4 (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB88A82BFF1808191DA530D2B17124F09EB51B995);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebRequestResult != null)
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_0;
		L_0 = RemoteProviderException_get_WebRequestResult_mF80BDC58604D4D5C44AB968FA544CFD30C330954_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// return $"{GetType().Name} : {base.Message}\nUnityWebRequest result : {WebRequestResult}\n{InnerException}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Type_t* L_3;
		L_3 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_2;
		String_t* L_6;
		L_6 = Exception_get_Message_mCFE0D38FDF9001405299AAE43BBE2A9AD806C441(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_8;
		L_8 = RemoteProviderException_get_WebRequestResult_mF80BDC58604D4D5C44AB968FA544CFD30C330954_inline(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		Exception_t* L_10;
		L_10 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralB88A82BFF1808191DA530D2B17124F09EB51B995, L_9, NULL);
		return L_11;
	}

IL_0042:
	{
		// return base.ToString();
		String_t* L_12;
		L_12 = OperationException_ToString_m8544F18BF5A2A8B6194DBF46F672DB8C128AA34D(__this, NULL);
		return L_12;
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
// System.Void UnityEngine.ResourceManagement.Util.LocationCacheKey::.ctor(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationCacheKey__ctor_m282925A8CF5CF9120CF2CC9AAEF5BEACA2CF8148 (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, RuntimeObject* ___location0, Type_t* ___desiredType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LocationCacheKey(IResourceLocation location, Type desiredType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (location == null)
		RuntimeObject* L_0 = ___location0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// throw new NullReferenceException($"Resource location cannot be null.");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_1 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDA806E4ED9486F84FE4E7C04D56C7A684143D10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LocationCacheKey__ctor_m282925A8CF5CF9120CF2CC9AAEF5BEACA2CF8148_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (desiredType == null)
		Type_t* L_2 = ___desiredType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_2, (Type_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// throw new NullReferenceException($"Desired type cannot be null.");
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_4 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B930431A536D490C68A91D25D3C66B2FAA99B4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LocationCacheKey__ctor_m282925A8CF5CF9120CF2CC9AAEF5BEACA2CF8148_RuntimeMethod_var)));
	}

IL_0028:
	{
		// m_Location = location;
		RuntimeObject* L_5 = ___location0;
		__this->___m_Location_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Location_0), (void*)L_5);
		// m_DesiredType = desiredType;
		Type_t* L_6 = ___desiredType1;
		__this->___m_DesiredType_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DesiredType_1), (void*)L_6);
		// }
		return;
	}
}
// System.Int32 UnityEngine.ResourceManagement.Util.LocationCacheKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationCacheKey_GetHashCode_mB1EBEF7D956D6ED42C5DAF9B4AA1EA02F0CE4134 (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Location.Hash(m_DesiredType);
		RuntimeObject* L_0 = __this->___m_Location_0;
		Type_t* L_1 = __this->___m_DesiredType_1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Type_t* >::Invoke(3 /* System.Int32 UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::Hash(System.Type) */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.LocationCacheKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationCacheKey_Equals_m1C52245232D45B246971CDFFA407DA544867DD71 (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => Equals(obj as LocationCacheKey);
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = LocationCacheKey_Equals_m8BEF54161FE13E606502DC9D9A6B2C40503E89BF(__this, ((LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859*)IsInstSealed((RuntimeObject*)L_0, LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.LocationCacheKey::Equals(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationCacheKey_Equals_m8F8728EE1F86BE82C84DCC9F79455AE2965B37D7 (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Equals(IOperationCacheKey other) => Equals(other as LocationCacheKey);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = LocationCacheKey_Equals_m8BEF54161FE13E606502DC9D9A6B2C40503E89BF(__this, ((LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859*)IsInstSealed((RuntimeObject*)L_0, LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.LocationCacheKey::Equals(UnityEngine.ResourceManagement.Util.LocationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationCacheKey_Equals_m8BEF54161FE13E606502DC9D9A6B2C40503E89BF (LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* __this, LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(this, other)) return true;
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_0 = ___other0;
		if ((!(((RuntimeObject*)(LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859*)__this) == ((RuntimeObject*)(LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		// if (ReferenceEquals(this, other)) return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (ReferenceEquals(other, null)) return false;
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_1 = ___other0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(other, null)) return false;
		return (bool)0;
	}

IL_000b:
	{
		// return LocationUtils.LocationEquals(m_Location, other.m_Location) && Equals(m_DesiredType, other.m_DesiredType);
		RuntimeObject* L_2 = __this->___m_Location_0;
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_3 = ___other0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_Location_0;
		bool L_5;
		L_5 = LocationUtils_LocationEquals_mC3D9B9DDD65080AC7652DB8F0B4F530D3162644D(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t* L_6 = __this->___m_DesiredType_1;
		LocationCacheKey_t465D5B71A78CAC6C7D65AFE83AB01DD22E384859* L_7 = ___other0;
		NullCheck(L_7);
		Type_t* L_8 = L_7->___m_DesiredType_1;
		bool L_9;
		L_9 = Object_Equals_mF52C7AEB4AA9F136C3EA31AE3C1FD200B831B3D1(L_6, L_8, NULL);
		return L_9;
	}

IL_0030:
	{
		return (bool)0;
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
// System.Void UnityEngine.ResourceManagement.Util.DependenciesCacheKey::.ctor(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependenciesCacheKey__ctor_mF897DD52A12FB3D9A8A636072A04F00E73F9AC75 (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, RuntimeObject* ___dependencies0, int32_t ___dependenciesHash1, const RuntimeMethod* method) 
{
	{
		// public DependenciesCacheKey(IList<IResourceLocation> dependencies, int dependenciesHash)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Dependencies = dependencies;
		RuntimeObject* L_0 = ___dependencies0;
		__this->___m_Dependencies_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dependencies_0), (void*)L_0);
		// m_DependenciesHash = dependenciesHash;
		int32_t L_1 = ___dependenciesHash1;
		__this->___m_DependenciesHash_1 = L_1;
		// }
		return;
	}
}
// System.Int32 UnityEngine.ResourceManagement.Util.DependenciesCacheKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependenciesCacheKey_GetHashCode_m6420F6AEE55C5DBFBEF8BF629A58E4E50E12C574 (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, const RuntimeMethod* method) 
{
	{
		// return m_DependenciesHash;
		int32_t L_0 = __this->___m_DependenciesHash_1;
		return L_0;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.DependenciesCacheKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependenciesCacheKey_Equals_m1AE039CBE8A5E1DADAE46CFBD540899B65895043 (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => Equals(obj as DependenciesCacheKey);
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = DependenciesCacheKey_Equals_m42F09EA998F1BA6F2B524D9668DD4A9FBFCF71CF(__this, ((DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1*)IsInstSealed((RuntimeObject*)L_0, DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.DependenciesCacheKey::Equals(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependenciesCacheKey_Equals_mB672EB7720C18FE5713D8F70DFA109D617B278C8 (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Equals(IOperationCacheKey other) => Equals(other as DependenciesCacheKey);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = DependenciesCacheKey_Equals_m42F09EA998F1BA6F2B524D9668DD4A9FBFCF71CF(__this, ((DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1*)IsInstSealed((RuntimeObject*)L_0, DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.DependenciesCacheKey::Equals(UnityEngine.ResourceManagement.Util.DependenciesCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependenciesCacheKey_Equals_m42F09EA998F1BA6F2B524D9668DD4A9FBFCF71CF (DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* __this, DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* ___other0, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(this, other)) return true;
		DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* L_0 = ___other0;
		if ((!(((RuntimeObject*)(DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1*)__this) == ((RuntimeObject*)(DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		// if (ReferenceEquals(this, other)) return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (ReferenceEquals(other, null)) return false;
		DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* L_1 = ___other0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(other, null)) return false;
		return (bool)0;
	}

IL_000b:
	{
		// return LocationUtils.DependenciesEqual(m_Dependencies, other.m_Dependencies);
		RuntimeObject* L_2 = __this->___m_Dependencies_0;
		DependenciesCacheKey_tCB0B417B761945B4B5CDB2733BC43EFE33CA40A1* L_3 = ___other0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___m_Dependencies_0;
		bool L_5;
		L_5 = LocationUtils_DependenciesEqual_mD9543DEC085FF2A93C8A96491E7429506D712C93(L_2, L_4, NULL);
		return L_5;
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
// System.Void UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::.ctor(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOpHandlesCacheKey__ctor_mCA58B5FAB01E383F945DD6912328198DA13FA90E (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, RuntimeObject* ___handles0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AsyncOpHandlesCacheKey(IList<AsyncOperationHandle> handles)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Handles = new HashSet<AsyncOperationHandle>(handles);
		RuntimeObject* L_0 = ___handles0;
		HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* L_1 = (HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1*)il2cpp_codegen_object_new(HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210(L_1, L_0, HashSet_1__ctor_mF7805CAF25D2248E7AC9C6D1514ACFC9321C8210_RuntimeMethod_var);
		__this->___m_Handles_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Handles_0), (void*)L_1);
		// }
		return;
	}
}
// System.Int32 UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOpHandlesCacheKey_GetHashCode_m51CCAF8584F6E54572B1D378D59BC5297BD999DB (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, const RuntimeMethod* method) 
{
	{
		// return m_Handles.GetHashCode();
		HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* L_0 = __this->___m_Handles_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOpHandlesCacheKey_Equals_mBFBDF929A1325136C4E8A1717C0B1C12EF19B670 (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => Equals(obj as AsyncOpHandlesCacheKey);
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = AsyncOpHandlesCacheKey_Equals_mAB06D007F68B5910A36E6C97D278147D1541F3E3(__this, ((AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409*)IsInstSealed((RuntimeObject*)L_0, AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::Equals(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOpHandlesCacheKey_Equals_mD987EBDF7585F0899C89799363A0CFBF5FB96788 (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Equals(IOperationCacheKey other) => Equals(other as AsyncOpHandlesCacheKey);
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = AsyncOpHandlesCacheKey_Equals_mAB06D007F68B5910A36E6C97D278147D1541F3E3(__this, ((AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409*)IsInstSealed((RuntimeObject*)L_0, AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey::Equals(UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOpHandlesCacheKey_Equals_mAB06D007F68B5910A36E6C97D278147D1541F3E3 (AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* __this, AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(this, other)) return true;
		AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* L_0 = ___other0;
		if ((!(((RuntimeObject*)(AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409*)__this) == ((RuntimeObject*)(AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		// if (ReferenceEquals(this, other)) return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (ReferenceEquals(other, null)) return false;
		AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* L_1 = ___other0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(other, null)) return false;
		return (bool)0;
	}

IL_000b:
	{
		// return m_Handles.SetEquals(other.m_Handles);
		HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* L_2 = __this->___m_Handles_0;
		AsyncOpHandlesCacheKey_tF69191DDFE87FB22C2938AFC553E25FB02974409* L_3 = ___other0;
		NullCheck(L_3);
		HashSet_1_t7FD3E09F5E6CC9B45ADC269EC25CEBBA5BCDE4E1* L_4 = L_3->___m_Handles_0;
		NullCheck(L_2);
		bool L_5;
		L_5 = HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B(L_2, L_4, HashSet_1_SetEquals_m0234CE66DE615B4BC061A3900D862051D069589B_RuntimeMethod_var);
		return L_5;
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
// System.Boolean UnityEngine.ResourceManagement.Util.LocationUtils::LocationEquals(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationUtils_LocationEquals_mC3D9B9DDD65080AC7652DB8F0B4F530D3162644D (RuntimeObject* ___loc10, RuntimeObject* ___loc21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(loc1, loc2)) return true;
		RuntimeObject* L_0 = ___loc10;
		RuntimeObject* L_1 = ___loc21;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// if (ReferenceEquals(loc1, loc2)) return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (ReferenceEquals(loc1, null)) return false;
		RuntimeObject* L_2 = ___loc10;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(loc1, null)) return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (ReferenceEquals(loc2, null)) return false;
		RuntimeObject* L_3 = ___loc21;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		// if (ReferenceEquals(loc2, null)) return false;
		return (bool)0;
	}

IL_0010:
	{
		// return (loc1.InternalId.Equals(loc2.InternalId)
		//     && loc1.ProviderId.Equals(loc2.ProviderId)
		//     && loc1.ResourceType.Equals(loc2.ResourceType));
		RuntimeObject* L_4 = ___loc10;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = ___loc21;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_InternalId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_9 = ___loc10;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ProviderId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = ___loc21;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ProviderId() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_10);
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_14 = ___loc10;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ResourceType() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_14);
		RuntimeObject* L_16 = ___loc21;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = InterfaceFuncInvoker0< Type_t* >::Invoke(8 /* System.Type UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_ResourceType() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_15);
		bool L_18;
		L_18 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(117 /* System.Boolean System.Type::Equals(System.Type) */, L_15, L_17);
		return L_18;
	}

IL_0048:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.LocationUtils::DependenciesEqual(System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>,System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationUtils_DependenciesEqual_mD9543DEC085FF2A93C8A96491E7429506D712C93 (RuntimeObject* ___deps10, RuntimeObject* ___deps21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ReferenceEquals(deps1, deps2)) return true;
		RuntimeObject* L_0 = ___deps10;
		RuntimeObject* L_1 = ___deps21;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// if (ReferenceEquals(deps1, deps2)) return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (ReferenceEquals(deps1, null)) return false;
		RuntimeObject* L_2 = ___deps10;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		// if (ReferenceEquals(deps1, null)) return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (ReferenceEquals(deps2, null)) return false;
		RuntimeObject* L_3 = ___deps21;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		// if (ReferenceEquals(deps2, null)) return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (deps1.Count != deps2.Count)
		RuntimeObject* L_4 = ___deps10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Count() */, ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = ___deps21;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Count() */, ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0020;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// for (int i = 0; i < deps1.Count; i++)
		V_0 = 0;
		goto IL_003f;
	}

IL_0024:
	{
		// if (!LocationEquals(deps1[i], deps2[i]))
		RuntimeObject* L_8 = ___deps10;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_11 = ___deps21;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Item(System.Int32) */, IList_1_tFEC432B87E444FFF0D7B8EFD6CBB918523AD6827_il2cpp_TypeInfo_var, L_11, L_12);
		bool L_14;
		L_14 = LocationUtils_LocationEquals_mC3D9B9DDD65080AC7652DB8F0B4F530D3162644D(L_10, L_13, NULL);
		if (L_14)
		{
			goto IL_003b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// for (int i = 0; i < deps1.Count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < deps1.Count; i++)
		int32_t L_16 = V_0;
		RuntimeObject* L_17 = ___deps10;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Count() */, ICollection_1_t5C589FDB16AA590F74FBE8A07066DD3139D14C1B_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0024;
		}
	}
	{
		// return true;
		return (bool)1;
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
// System.Boolean UnityEngine.ResourceManagement.Util.PlatformUtilities::PlatformUsesMultiThreading(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformUtilities_PlatformUsesMultiThreading_m17C6788C231FC80A113924EEBFC82A517336FDB5 (int32_t ___platform0, const RuntimeMethod* method) 
{
	{
		// return platform != RuntimePlatform.WebGLPlayer;
		int32_t L_0 = ___platform0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Object UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy::New(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultAllocationStrategy_New_mBECB62C44432B753AB02A0FFCF50666D01E108E6 (DefaultAllocationStrategy_t3C220E3485C97638DF666573D735A82EFA2F00B6* __this, Type_t* ___type0, int32_t ___typeHash1, const RuntimeMethod* method) 
{
	{
		// return Activator.CreateInstance(type);
		Type_t* L_0 = ___type0;
		RuntimeObject* L_1;
		L_1 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy::Release(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAllocationStrategy_Release_m63A6725F306906C2067E7D4B94A9B88DB7418E86 (DefaultAllocationStrategy_t3C220E3485C97638DF666573D735A82EFA2F00B6* __this, int32_t ___typeHash0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultAllocationStrategy__ctor_m4E5FDD0B0190A871B875CCA76972BC3BE5021C56 (DefaultAllocationStrategy_t3C220E3485C97638DF666573D735A82EFA2F00B6* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUCacheAllocationStrategy__ctor_mE90C189EB59AEE251D83C85F1C6422EE3F3FB541 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, int32_t ___poolMaxSize0, int32_t ___poolCapacity1, int32_t ___poolCacheMaxSize2, int32_t ___initialPoolCacheCapacity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m165D9B0D453292403ABCB37C534180409C3BA4BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m415DE8EE7AC4955152AD10C91B3825EEAB8B1A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// List<List<object>> m_poolCache = new List<List<object>>();
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_0 = (List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9*)il2cpp_codegen_object_new(List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m415DE8EE7AC4955152AD10C91B3825EEAB8B1A2B(L_0, List_1__ctor_m415DE8EE7AC4955152AD10C91B3825EEAB8B1A2B_RuntimeMethod_var);
		__this->___m_poolCache_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_poolCache_3), (void*)L_0);
		// Dictionary<int, List<object>> m_cache = new Dictionary<int, List<object>>();
		Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* L_1 = (Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116*)il2cpp_codegen_object_new(Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m165D9B0D453292403ABCB37C534180409C3BA4BA(L_1, Dictionary_2__ctor_m165D9B0D453292403ABCB37C534180409C3BA4BA_RuntimeMethod_var);
		__this->___m_cache_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_cache_4), (void*)L_1);
		// public LRUCacheAllocationStrategy(int poolMaxSize, int poolCapacity, int poolCacheMaxSize, int initialPoolCacheCapacity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_poolMaxSize = poolMaxSize;
		int32_t L_2 = ___poolMaxSize0;
		__this->___m_poolMaxSize_0 = L_2;
		// m_poolInitialCapacity = poolCapacity;
		int32_t L_3 = ___poolCapacity1;
		__this->___m_poolInitialCapacity_1 = L_3;
		// m_poolCacheMaxSize = poolCacheMaxSize;
		int32_t L_4 = ___poolCacheMaxSize2;
		__this->___m_poolCacheMaxSize_2 = L_4;
		// for (int i = 0; i < initialPoolCacheCapacity; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_0035:
	{
		// m_poolCache.Add(new List<object>(m_poolInitialCapacity));
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_5 = __this->___m_poolCache_3;
		int32_t L_6 = __this->___m_poolInitialCapacity_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_7, L_6, List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_inline(L_5, L_7, List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_RuntimeMethod_var);
		// for (int i = 0; i < initialPoolCacheCapacity; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < initialPoolCacheCapacity; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = ___initialPoolCacheCapacity3;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::GetPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* LRUCacheAllocationStrategy_GetPool_mB62AD68905391E611B6DB22C295DEF5D0A883AD5 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0AD5393DCD4AE01CE936639400C74F02DACD0C44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m92DF89FE6F5A0E35A97FEC041F0D3030DECABA09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int count = m_poolCache.Count;
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_0 = __this->___m_poolCache_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_inline(L_0, List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_RuntimeMethod_var);
		V_0 = L_1;
		// if (count == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return new List<object>(m_poolInitialCapacity);
		int32_t L_3 = __this->___m_poolInitialCapacity_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_4, L_3, List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		return L_4;
	}

IL_001b:
	{
		// var pool = m_poolCache[count - 1];
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_5 = __this->___m_poolCache_3;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7;
		L_7 = List_1_get_Item_m92DF89FE6F5A0E35A97FEC041F0D3030DECABA09(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_m92DF89FE6F5A0E35A97FEC041F0D3030DECABA09_RuntimeMethod_var);
		// m_poolCache.RemoveAt(count - 1);
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_8 = __this->___m_poolCache_3;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		List_1_RemoveAt_m0AD5393DCD4AE01CE936639400C74F02DACD0C44(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), List_1_RemoveAt_m0AD5393DCD4AE01CE936639400C74F02DACD0C44_RuntimeMethod_var);
		// return pool;
		return L_7;
	}
}
// System.Void UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::ReleasePool(System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUCacheAllocationStrategy_ReleasePool_m3137C6983551DC95420A39C44E61ECA466A75B63 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_poolCache.Count < m_poolCacheMaxSize)
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_0 = __this->___m_poolCache_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_inline(L_0, List_1_get_Count_mB18645697010FA06BE38D6D3F15AD44C5A6EB653_RuntimeMethod_var);
		int32_t L_2 = __this->___m_poolCacheMaxSize_2;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		// m_poolCache.Add(pool);
		List_1_t544747D4FFA45E0319EFC7BA6A043B4B5C2FD8F9* L_3 = __this->___m_poolCache_3;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___pool0;
		NullCheck(L_3);
		List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_inline(L_3, L_4, List_1_Add_m09C481506935CAA72ABE15CC68755E09A3DE69CA_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Object UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::New(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LRUCacheAllocationStrategy_New_mC1CFDD601073707E84257F2769AA6D1C258D28B6 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, Type_t* ___type0, int32_t ___typeHash1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7190C6CFEC27F812D251BD1E4A0DFA3CB561634A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		// if (m_cache.TryGetValue(typeHash, out pool))
		Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* L_0 = __this->___m_cache_4;
		int32_t L_1 = ___typeHash1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// var count = pool.Count;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_3, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_1 = L_4;
		// var v = pool[count - 1];
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_5, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		// pool.RemoveAt(count - 1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		// if (count == 1)
		int32_t L_10 = V_1;
		G_B2_0 = L_7;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B3_0 = L_7;
			goto IL_0041;
		}
	}
	{
		// m_cache.Remove(typeHash);
		Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* L_11 = __this->___m_cache_4;
		int32_t L_12 = ___typeHash1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_m7190C6CFEC27F812D251BD1E4A0DFA3CB561634A(L_11, L_12, Dictionary_2_Remove_m7190C6CFEC27F812D251BD1E4A0DFA3CB561634A_RuntimeMethod_var);
		// ReleasePool(pool);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = V_0;
		LRUCacheAllocationStrategy_ReleasePool_m3137C6983551DC95420A39C44E61ECA466A75B63(__this, L_14, NULL);
		G_B3_0 = G_B2_0;
	}

IL_0041:
	{
		// return v;
		return G_B3_0;
	}

IL_0042:
	{
		// return Activator.CreateInstance(type);
		Type_t* L_15 = ___type0;
		RuntimeObject* L_16;
		L_16 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_15, NULL);
		return L_16;
	}
}
// System.Void UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy::Release(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUCacheAllocationStrategy_Release_m64D717012A7423ADF6D16BDAE6CC83C955B5C163 (LRUCacheAllocationStrategy_t6D196B60527FD83BCF39AA0AB3F840357B9DA318* __this, int32_t ___typeHash0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m760F534C63E8FB529B19A190CD31B6627F0212BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		// if (!m_cache.TryGetValue(typeHash, out pool))
		Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* L_0 = __this->___m_cache_4;
		int32_t L_1 = ___typeHash0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA654C416A54847AB8788AB5AC4C212271A4C0796_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		// m_cache.Add(typeHash, pool = GetPool());
		Dictionary_2_t41FCE8F6D4F2C9A37D0D4D7BCDC650332BB6C116* L_3 = __this->___m_cache_4;
		int32_t L_4 = ___typeHash0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5;
		L_5 = LRUCacheAllocationStrategy_GetPool_mB62AD68905391E611B6DB22C295DEF5D0A883AD5(__this, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = L_5;
		V_0 = L_6;
		NullCheck(L_3);
		Dictionary_2_Add_m760F534C63E8FB529B19A190CD31B6627F0212BC(L_3, L_4, L_6, Dictionary_2_Add_m760F534C63E8FB529B19A190CD31B6627F0212BC_RuntimeMethod_var);
	}

IL_0024:
	{
		// if (pool.Count < m_poolMaxSize)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_7, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		int32_t L_9 = __this->___m_poolMaxSize_0;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0039;
		}
	}
	{
		// pool.Add(obj);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_10 = V_0;
		RuntimeObject* L_11 = ___obj1;
		NullCheck(L_10);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_10, L_11, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
	}

IL_0039:
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Util.SerializedType
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_pinvoke(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_CachedType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_CachedType' of type 'SerializedType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_CachedType_2Exception, NULL);
}
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_pinvoke_back(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke& marshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled)
{
	Exception_t* ___m_CachedType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_CachedType' of type 'SerializedType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_CachedType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Util.SerializedType
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_pinvoke_cleanup(SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Util.SerializedType
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_com(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com& marshaled)
{
	Exception_t* ___m_CachedType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_CachedType' of type 'SerializedType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_CachedType_2Exception, NULL);
}
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_com_back(const SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com& marshaled, SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1& unmarshaled)
{
	Exception_t* ___m_CachedType_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_CachedType' of type 'SerializedType': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_CachedType_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Util.SerializedType
IL2CPP_EXTERN_C void SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshal_com_cleanup(SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_marshaled_com& marshaled)
{
}
// System.String UnityEngine.ResourceManagement.Util.SerializedType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializedType_ToString_m286E5553A848CA6C472FCE478B65C01B3B2AA5E7 (SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF94AA613862F53AAD0F034DAF760AFDD9509B693);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Value == null ? "<none>" : Value.Name;
		Type_t* L_0;
		L_0 = SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Type_t* L_2;
		L_2 = SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		return L_3;
	}

IL_001a:
	{
		return _stringLiteralF94AA613862F53AAD0F034DAF760AFDD9509B693;
	}
}
IL2CPP_EXTERN_C  String_t* SerializedType_ToString_m286E5553A848CA6C472FCE478B65C01B3B2AA5E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializedType_ToString_m286E5553A848CA6C472FCE478B65C01B3B2AA5E7(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.ResourceManagement.Util.SerializedType::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A (SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Assembly_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (string.IsNullOrEmpty(m_AssemblyName) || string.IsNullOrEmpty(m_ClassName))
			String_t* L_0 = __this->___m_AssemblyName_0;
			bool L_1;
			L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
			if (L_1)
			{
				goto IL_001a_1;
			}
		}
		{
			String_t* L_2 = __this->___m_ClassName_1;
			bool L_3;
			L_3 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_2, NULL);
			if (!L_3)
			{
				goto IL_001e_1;
			}
		}

IL_001a_1:
		{
			// return null;
			V_0 = (Type_t*)NULL;
			goto IL_007e;
		}

IL_001e_1:
		{
			// if (m_CachedType == null)
			Type_t* L_4 = __this->___m_CachedType_2;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_4, (Type_t*)NULL, NULL);
			if (!L_5)
			{
				goto IL_0053_1;
			}
		}
		{
			// var assembly = Assembly.Load(m_AssemblyName);
			String_t* L_6 = __this->___m_AssemblyName_0;
			Assembly_t* L_7;
			L_7 = Assembly_Load_m718E55A40D92C7BBE26812A9A7998BDF166C0BD2(L_6, NULL);
			V_1 = L_7;
			// if (assembly != null)
			Assembly_t* L_8 = V_1;
			bool L_9;
			L_9 = Assembly_op_Inequality_m62E003A7871F22BC6129B2D00B4C243D995C21CA(L_8, (Assembly_t*)NULL, NULL);
			if (!L_9)
			{
				goto IL_0053_1;
			}
		}
		{
			// m_CachedType = assembly.GetType(m_ClassName);
			Assembly_t* L_10 = V_1;
			String_t* L_11 = __this->___m_ClassName_1;
			NullCheck(L_10);
			Type_t* L_12;
			L_12 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_10, L_11);
			__this->___m_CachedType_2 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CachedType_2), (void*)L_12);
		}

IL_0053_1:
		{
			// return m_CachedType;
			Type_t* L_13 = __this->___m_CachedType_2;
			V_0 = L_13;
			goto IL_007e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005c;
		}
		throw e;
	}

CATCH_005c:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// if (ex.GetType() != typeof(FileNotFoundException))
			Exception_t* L_14 = V_2;
			NullCheck(L_14);
			Type_t* L_15;
			L_15 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_14, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_0_0_0_var))) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_17;
			L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
			bool L_18;
			L_18 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_15, L_17, NULL);
			if (!L_18)
			{
				goto IL_007a;
			}
		}
		{
			// Debug.LogException(ex);
			Exception_t* L_19 = V_2;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_19, NULL);
		}

IL_007a:
		{
			// return null;
			V_0 = (Type_t*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_007e;
		}
	}// end catch (depth: 1)

IL_007e:
	{
		// }
		Type_t* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C  Type_t* SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Util.ObjectInitializationData
IL2CPP_EXTERN_C void ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshal_pinvoke(const ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3& unmarshaled, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ObjectType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ObjectType' of type 'ObjectInitializationData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ObjectType_1Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshal_pinvoke_back(const ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_pinvoke& marshaled, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3& unmarshaled)
{
	Exception_t* ___m_ObjectType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ObjectType' of type 'ObjectInitializationData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ObjectType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Util.ObjectInitializationData
IL2CPP_EXTERN_C void ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshal_pinvoke_cleanup(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Util.ObjectInitializationData
IL2CPP_EXTERN_C void ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshal_com(const ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3& unmarshaled, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_com& marshaled)
{
	Exception_t* ___m_ObjectType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ObjectType' of type 'ObjectInitializationData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ObjectType_1Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshal_com_back(const ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_com& marshaled, ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3& unmarshaled)
{
	Exception_t* ___m_ObjectType_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ObjectType' of type 'ObjectInitializationData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ObjectType_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Util.ObjectInitializationData
IL2CPP_EXTERN_C void ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshal_com_cleanup(ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3_marshaled_com& marshaled)
{
}
// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectInitializationData_get_Id_m8B020C841845122EF9123BD5E136F6A3FEC3496F (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get { return m_Id; } }
		String_t* L_0 = __this->___m_Id_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ObjectInitializationData_get_Id_m8B020C841845122EF9123BD5E136F6A3FEC3496F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ObjectInitializationData_get_Id_m8B020C841845122EF9123BD5E136F6A3FEC3496F_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.Util.SerializedType UnityEngine.ResourceManagement.Util.ObjectInitializationData::get_ObjectType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ObjectInitializationData_get_ObjectType_m7706EB3247D33B65F062CDEEB40792A27B8ABF69 (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) 
{
	{
		// public SerializedType ObjectType { get { return m_ObjectType; } }
		SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 L_0 = __this->___m_ObjectType_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ObjectInitializationData_get_ObjectType_m7706EB3247D33B65F062CDEEB40792A27B8ABF69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*>(__this + _offset);
	SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 _returnValue;
	_returnValue = ObjectInitializationData_get_ObjectType_m7706EB3247D33B65F062CDEEB40792A27B8ABF69_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.ResourceManagement.Util.ObjectInitializationData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectInitializationData_ToString_m730570E98783E54D1B6A2ED0178E05A2DE394593 (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral224C29E303A46BE2ED2DFE574FE8044650869F4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("ObjectInitializationData: id={0}, type={1}", m_Id, m_ObjectType);
		String_t* L_0 = __this->___m_Id_0;
		SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 L_1 = __this->___m_ObjectType_1;
		SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 L_2 = L_1;
		RuntimeObject* L_3 = Box(SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral224C29E303A46BE2ED2DFE574FE8044650869F4E, L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* ObjectInitializationData_ToString_m730570E98783E54D1B6A2ED0178E05A2DE394593_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ObjectInitializationData_ToString_m730570E98783E54D1B6A2ED0178E05A2DE394593(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.Util.ObjectInitializationData::GetAsyncInitHandle(UnityEngine.ResourceManagement.ResourceManager,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ObjectInitializationData_GetAsyncInitHandle_m0017D1CE9481015847F724E9E22C481A2CFDF2FC (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, String_t* ___idOverride1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializableObject_tB5EAFECD94FB085A2225D79C9DD79EC459948C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	try
	{// begin try (depth: 1)
		{
			// var objType = m_ObjectType.Value;
			SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1* L_0 = (&__this->___m_ObjectType_1);
			Type_t* L_1;
			L_1 = SerializedType_get_Value_m8AC9DC985380FD7524D147E2C5C95664FAB9A10A(L_0, NULL);
			V_0 = L_1;
			// if (objType == null)
			Type_t* L_2 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_2, (Type_t*)NULL, NULL);
			if (!L_3)
			{
				goto IL_0021_1;
			}
		}
		{
			// return default(AsyncOperationHandle);
			il2cpp_codegen_initobj((&V_2), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
			AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4 = V_2;
			V_2 = L_4;
			goto IL_006f;
		}

IL_0021_1:
		{
			// var obj = Activator.CreateInstance(objType, true);
			Type_t* L_5 = V_0;
			RuntimeObject* L_6;
			L_6 = Activator_CreateInstance_m2767C14E0050C13BDB2732D7223FE17A9FA0F61A(L_5, (bool)1, NULL);
			// var serObj = obj as IInitializableObject;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IInitializableObject_tB5EAFECD94FB085A2225D79C9DD79EC459948C94_il2cpp_TypeInfo_var));
			// if (serObj != null)
			RuntimeObject* L_7 = V_1;
			if (!L_7)
			{
				goto IL_0052_1;
			}
		}
		{
			// return serObj.InitializeAsync(rm, idOverride == null ? m_Id : idOverride, m_Data);
			RuntimeObject* L_8 = V_1;
			ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_9 = ___rm0;
			String_t* L_10 = ___idOverride1;
			G_B4_0 = L_9;
			G_B4_1 = L_8;
			if (!L_10)
			{
				G_B5_0 = L_9;
				G_B5_1 = L_8;
				goto IL_0039_1;
			}
		}
		{
			String_t* L_11 = ___idOverride1;
			G_B6_0 = L_11;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			goto IL_003f_1;
		}

IL_0039_1:
		{
			String_t* L_12 = __this->___m_Id_0;
			G_B6_0 = L_12;
			G_B6_1 = G_B5_0;
			G_B6_2 = G_B5_1;
		}

IL_003f_1:
		{
			String_t* L_13 = __this->___m_Data_2;
			NullCheck(G_B6_2);
			AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 L_14;
			L_14 = InterfaceFuncInvoker3< AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, String_t*, String_t* >::Invoke(1 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> UnityEngine.ResourceManagement.Util.IInitializableObject::InitializeAsync(UnityEngine.ResourceManagement.ResourceManager,System.String,System.String) */, IInitializableObject_tB5EAFECD94FB085A2225D79C9DD79EC459948C94_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0, L_13);
			AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_15;
			L_15 = AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC(L_14, AsyncOperationHandle_1_op_Implicit_mD162CF57CAAEF9D8E43E8B79810688529752D0AC_RuntimeMethod_var);
			V_2 = L_15;
			goto IL_006f;
		}

IL_0052_1:
		{
			// return default(AsyncOperationHandle);
			il2cpp_codegen_initobj((&V_3), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
			AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_16 = V_3;
			V_2 = L_16;
			goto IL_006f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005e;
		}
		throw e;
	}

CATCH_005e:
	{// begin catch(System.Exception)
		// Debug.LogException(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// return default(AsyncOperationHandle);
		il2cpp_codegen_initobj((&V_3), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_17 = V_3;
		V_2 = L_17;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006f;
	}// end catch (depth: 1)

IL_006f:
	{
		// }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_18 = V_2;
		return L_18;
	}
}
IL2CPP_EXTERN_C  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ObjectInitializationData_GetAsyncInitHandle_m0017D1CE9481015847F724E9E22C481A2CFDF2FC_AdjustorThunk (RuntimeObject* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, String_t* ___idOverride1, const RuntimeMethod* method)
{
	ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3*>(__this + _offset);
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D _returnValue;
	_returnValue = ObjectInitializationData_GetAsyncInitHandle_m0017D1CE9481015847F724E9E22C481A2CFDF2FC(_thisAdjusted, ___rm0, ___idOverride1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::ExtractKeyAndSubKey(System.Object,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_ExtractKeyAndSubKey_mC40036045901BD802809D55A9D99B730CB5B2C49 (RuntimeObject* ___keyObj0, String_t** ___mainKey1, String_t** ___subKey2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var key = keyObj as string;
		RuntimeObject* L_0 = ___keyObj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		// if (key != null)
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var i = key.IndexOf('[');
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)91), NULL);
		V_1 = L_3;
		// if (i > 0)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// var j = key.LastIndexOf(']');
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_5, ((int32_t)93), NULL);
		V_2 = L_6;
		// if (j > i)
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		// mainKey = key.Substring(0, i);
		String_t** L_9 = ___mainKey1;
		String_t* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_11, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_12);
		// subKey = key.Substring(i + 1, j - (i + 1));
		String_t** L_13 = ___subKey2;
		String_t* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		NullCheck(L_14);
		String_t* L_18;
		L_18 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)))), NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_18);
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// mainKey = null;
		String_t** L_19 = ___mainKey1;
		*((RuntimeObject**)L_19) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)NULL);
		// subKey = null;
		String_t** L_20 = ___subKey2;
		*((RuntimeObject**)L_20) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::ShouldPathUseWebRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_ShouldPathUseWebRequest_mB9DF52370947A6BD9AE5565F9E7E467CC4C69DF7 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlatformCanLoadLocallyFromUrlPath() && File.Exists(path))
		bool L_0;
		L_0 = ResourceManagerConfig_PlatformCanLoadLocallyFromUrlPath_m87864A7635E5E1EBEF5EC8CBA395A20D3B12AF23(NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___path0;
		bool L_2;
		L_2 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0011:
	{
		// return path != null && path.Contains("://");
		String_t* L_3 = ___path0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___path0;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_4, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		return L_5;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Util.ResourceManagerConfig::PlatformCanLoadLocallyFromUrlPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceManagerConfig_PlatformCanLoadLocallyFromUrlPath_m87864A7635E5E1EBEF5EC8CBA395A20D3B12AF23 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8D3A001B04748E316D277F1F7195E4A759B6261B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCC1DF00335ECC0520B9FD7A9E551F6CE8D8CD02F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m28B0FD0F2221E9A428AC7053440E7DCCED821913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD25B27535A2152F2A5071985C3699F183881E0EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<RuntimePlatform> platformsThatUseUrlForLocalLoads = new List<RuntimePlatform>()
		// {
		//     RuntimePlatform.Android
		// };
		List_1_tD25B27535A2152F2A5071985C3699F183881E0EA* L_0 = (List_1_tD25B27535A2152F2A5071985C3699F183881E0EA*)il2cpp_codegen_object_new(List_1_tD25B27535A2152F2A5071985C3699F183881E0EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m28B0FD0F2221E9A428AC7053440E7DCCED821913(L_0, List_1__ctor_m28B0FD0F2221E9A428AC7053440E7DCCED821913_RuntimeMethod_var);
		List_1_tD25B27535A2152F2A5071985C3699F183881E0EA* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_m8D3A001B04748E316D277F1F7195E4A759B6261B_inline(L_1, ((int32_t)11), List_1_Add_m8D3A001B04748E316D277F1F7195E4A759B6261B_RuntimeMethod_var);
		// return platformsThatUseUrlForLocalLoads.Contains((Application.platform));
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Contains_mCC1DF00335ECC0520B9FD7A9E551F6CE8D8CD02F(L_1, L_2, List_1_Contains_mCC1DF00335ECC0520B9FD7A9E551F6CE8D8CD02F_RuntimeMethod_var);
		return L_3;
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
// System.Boolean UnityEngine.ResourceManagement.Util.UnityWebRequestUtilities::RequestHasErrors(UnityEngine.Networking.UnityWebRequest,UnityEngine.ResourceManagement.Util.UnityWebRequestResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtilities_RequestHasErrors_m279E3F01AE98A968F0DEB22F54F0BB35BF7EF890 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___webReq0, UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894** ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// result = null;
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894** L_0 = ___result1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (webReq == null || !webReq.isDone)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = ___webReq0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___webReq0;
		NullCheck(L_2);
		bool L_3;
		L_3 = UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123(L_2, NULL);
		if (L_3)
		{
			goto IL_0010;
		}
	}

IL_000e:
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// switch (webReq.result)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___webReq0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 2))) > ((uint32_t)2))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0023:
	{
		// return false;
		return (bool)0;
	}

IL_0025:
	{
		// result = new UnityWebRequestResult(webReq);
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894** L_8 = ___result1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = ___webReq0;
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_10 = (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894*)il2cpp_codegen_object_new(UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityWebRequestResult__ctor_mE837C228770475E93E476203E7EFCA9BDC807168(L_10, L_9, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_10);
		// return true;
		return (bool)1;
	}

IL_002f:
	{
		// throw new NotImplementedException($"Cannot determine whether UnityWebRequest succeeded or not from result : {webReq.result}");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = ___webReq0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_11, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB69455F744571C3D06796F0B307DD5A33E35B7C6)), L_14, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_16 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequestUtilities_RequestHasErrors_m279E3F01AE98A968F0DEB22F54F0BB35BF7EF890_RuntimeMethod_var)));
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
// System.Void UnityEngine.ResourceManagement.Util.UnityWebRequestResult::.ctor(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestResult__ctor_mE837C228770475E93E476203E7EFCA9BDC807168 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// public UnityWebRequestResult(UnityWebRequest request)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// string error = request.error;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_0, NULL);
		V_0 = L_1;
		// if (request.result == UnityWebRequest.Result.DataProcessingError && request.downloadHandler != null)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___request0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0035;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = ___request0;
		NullCheck(L_4);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_5;
		L_5 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_4, NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// error = $"{error} : {request.downloadHandler.error}";
		String_t* L_6 = V_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = ___request0;
		NullCheck(L_7);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_8;
		L_8 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = DownloadHandler_get_error_mE1A0FFCC1F3CC14567E6A9565C6EF08CDC04583E(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_6, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_9, NULL);
		V_0 = L_10;
	}

IL_0035:
	{
		// Result = request.result;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = ___request0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_11, NULL);
		__this->___U3CResultU3Ek__BackingField_2 = L_12;
		// Error = error;
		String_t* L_13 = V_0;
		UnityWebRequestResult_set_Error_mB8AB258796A2F29BB387F34222FFA59EA3431009_inline(__this, L_13, NULL);
		// ResponseCode = request.responseCode;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = ___request0;
		NullCheck(L_14);
		int64_t L_15;
		L_15 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_14, NULL);
		__this->___U3CResponseCodeU3Ek__BackingField_1 = L_15;
		// Method = request.method;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = ___request0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = UnityWebRequest_get_method_mEA8B59A692AEF09BF469AB6A8B5A8F8C22435AB9(L_16, NULL);
		__this->___U3CMethodU3Ek__BackingField_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_3), (void*)L_17);
		// Url = request.url;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = ___request0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8(L_18, NULL);
		__this->___U3CUrlU3Ek__BackingField_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUrlU3Ek__BackingField_4), (void*)L_19);
		// }
		return;
	}
}
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_ToString_m1F2EF13FD90347BA1B8752D2D534D007BAF14390 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04422C80FD67344F1CC3E8874645F012406FB975);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral888E703FA70C9F3755C136B54F886B5D3C8109BC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.AppendLine($"{Result} : {Error}");
		StringBuilder_t* L_1 = V_0;
		int32_t L_2;
		L_2 = UnityWebRequestResult_get_Result_mFA65ADAE33B5F1037C60A4F544F54800114B8DDA_inline(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Result_tFB98154F15BF37A66902802D441FEFADC68D4C87_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = UnityWebRequestResult_get_Error_m84C4381776A6467DE9CC4DB3797661F1519FBDF5_inline(__this, NULL);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D, L_4, L_5, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_1, L_6, NULL);
		// if (ResponseCode > 0)
		int64_t L_8;
		L_8 = UnityWebRequestResult_get_ResponseCode_m9587BFE958C864F3B4744E78890AE09C1E5CF3E2_inline(__this, NULL);
		if ((((int64_t)L_8) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0054;
		}
	}
	{
		// sb.AppendLine($"ResponseCode : {ResponseCode}, Method : {Method}");
		StringBuilder_t* L_9 = V_0;
		int64_t L_10;
		L_10 = UnityWebRequestResult_get_ResponseCode_m9587BFE958C864F3B4744E78890AE09C1E5CF3E2_inline(__this, NULL);
		int64_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = UnityWebRequestResult_get_Method_m170F095C8F0E614D35EC882874DA221CF7FD372D_inline(__this, NULL);
		String_t* L_14;
		L_14 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral888E703FA70C9F3755C136B54F886B5D3C8109BC, L_12, L_13, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_9, L_14, NULL);
	}

IL_0054:
	{
		// sb.AppendLine($"url : {Url}");
		StringBuilder_t* L_16 = V_0;
		String_t* L_17;
		L_17 = UnityWebRequestResult_get_Url_m692560D0BC25EA558272192CED8409364335F477_inline(__this, NULL);
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral04422C80FD67344F1CC3E8874645F012406FB975, L_17, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_16, L_18, NULL);
		// return sb.ToString();
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Error_m84C4381776A6467DE9CC4DB3797661F1519FBDF5 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; internal set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.Util.UnityWebRequestResult::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestResult_set_Error_mB8AB258796A2F29BB387F34222FFA59EA3431009 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Error { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int64 UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequestResult_get_ResponseCode_m9587BFE958C864F3B4744E78890AE09C1E5CF3E2 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequestResult_get_Result_mFA65ADAE33B5F1037C60A4F544F54800114B8DDA (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest.Result Result { get; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Method_m170F095C8F0E614D35EC882874DA221CF7FD372D (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public string Method { get; }
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String UnityEngine.ResourceManagement.Util.UnityWebRequestResult::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Url_m692560D0BC25EA558272192CED8409364335F477 (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public string Url { get; }
		String_t* L_0 = __this->___U3CUrlU3Ek__BackingField_4;
		return L_0;
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
// System.Void UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasSpriteProvider_Provide_mBBAA733518B690CAF561FDDFD2E53F5FA5707DF2 (AtlasSpriteProvider_tE1B6A6917A900A46726DD1693C7DF1FE60F81E3A* __this, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___providerInterface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideHandle_GetDependency_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mC4E42E0DFEC6ED85E28C53108C121CC793C3E4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3C8151DEAB8A8C4FD3821D2E5AA42A6C0E8140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F83E4E5AD446148E36F96826E089809FDE904C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_4 = NULL;
	String_t* G_B5_0 = NULL;
	bool G_B7_0 = false;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B7_1 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B7_2 = NULL;
	bool G_B6_0 = false;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B6_1 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B6_2 = NULL;
	Exception_t* G_B8_0 = NULL;
	bool G_B8_1 = false;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B8_2 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B8_3 = NULL;
	{
		// var atlas = providerInterface.GetDependency<SpriteAtlas>(0);
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_0;
		L_0 = ProvideHandle_GetDependency_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mC4E42E0DFEC6ED85E28C53108C121CC793C3E4E6((&___providerInterface0), 0, ProvideHandle_GetDependency_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mC4E42E0DFEC6ED85E28C53108C121CC793C3E4E6_RuntimeMethod_var);
		V_0 = L_0;
		// if (atlas == null)
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// providerInterface.Complete<Sprite>(null, false, new System.Exception($"Sprite atlas failed to load for location {providerInterface.Location.PrimaryKey}."));
		RuntimeObject* L_3;
		L_3 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79((&___providerInterface0), NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_PrimaryKey() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6B3C8151DEAB8A8C4FD3821D2E5AA42A6C0E8140, L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C((&___providerInterface0), (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL, (bool)0, L_6, ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C_RuntimeMethod_var);
		// return;
		return;
	}

IL_003c:
	{
		// var key = providerInterface.ResourceManager.TransformInternalId(providerInterface.Location);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_7;
		L_7 = ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_inline((&___providerInterface0), NULL);
		RuntimeObject* L_8;
		L_8 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79((&___providerInterface0), NULL);
		NullCheck(L_7);
		String_t* L_9;
		L_9 = ResourceManager_TransformInternalId_m2C99EDD12AF07F099F7FF88E15892F2582C17EB9(L_7, L_8, NULL);
		// ResourceManagerConfig.ExtractKeyAndSubKey(key, out string mainKey, out string subKey);
		bool L_10;
		L_10 = ResourceManagerConfig_ExtractKeyAndSubKey_mC40036045901BD802809D55A9D99B730CB5B2C49(L_9, (&V_1), (&V_2), NULL);
		// string spriteKey = string.IsNullOrEmpty(subKey) ? mainKey : subKey;
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_13 = V_2;
		G_B5_0 = L_13;
		goto IL_0065;
	}

IL_0064:
	{
		String_t* L_14 = V_1;
		G_B5_0 = L_14;
	}

IL_0065:
	{
		V_3 = G_B5_0;
		// var sprite = atlas.GetSprite(spriteKey);
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_15 = V_0;
		String_t* L_16 = V_3;
		NullCheck(L_15);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17;
		L_17 = SpriteAtlas_GetSprite_mB6EF48B9BD76CF0A80BE86401B6D67DD6C55F501(L_15, L_16, NULL);
		V_4 = L_17;
		// providerInterface.Complete(sprite, sprite != null, sprite != null ? null : new System.Exception($"Sprite failed to load for location {providerInterface.Location.PrimaryKey}."));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = V_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21 = V_4;
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = L_20;
		G_B6_1 = L_18;
		G_B6_2 = (&___providerInterface0);
		if (L_22)
		{
			G_B7_0 = L_20;
			G_B7_1 = L_18;
			G_B7_2 = (&___providerInterface0);
			goto IL_00a7;
		}
	}
	{
		RuntimeObject* L_23;
		L_23 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79((&___providerInterface0), NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_PrimaryKey() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_23);
		String_t* L_25;
		L_25 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD8F83E4E5AD446148E36F96826E089809FDE904C, L_24, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		Exception_t* L_26 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_26, L_25, NULL);
		G_B8_0 = L_26;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B8_0 = ((Exception_t*)(NULL));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_00a8:
	{
		ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C(G_B8_3, G_B8_2, G_B8_1, G_B8_0, ProvideHandle_Complete_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m4E95D26C58827E9AEC70D3B900DAED13FED9EA7C_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_pinvoke(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_pinvoke_back(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke& marshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_pinvoke_cleanup(InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_com(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com& marshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_com_back(const InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com& marshaled, InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669& unmarshaled)
{
	Exception_t* ___m_Parent_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Parent' of type 'InstantiationParameters': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Parent_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.InstantiationParameters
IL2CPP_EXTERN_C void InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshal_com_cleanup(InstantiationParameters_t4CA06BFEB246233E9FEBC2DB0B09124C0BFC7669_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_pinvoke(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_pinvoke_back(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke& marshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_pinvoke_cleanup(ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_com(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com& marshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_com_back(const ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com& marshaled, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631& unmarshaled)
{
	Exception_t* ___m_InternalOp_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'ProvideHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
IL2CPP_EXTERN_C void ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshal_com_cleanup(ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::.ctor(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, RuntimeObject* ___op1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ResourceManager = rm;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ___rm0;
		__this->___m_ResourceManager_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ResourceManager_2), (void*)L_0);
		// m_InternalOp = op;
		RuntimeObject* L_1 = ___op1;
		__this->___m_InternalOp_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_1), (void*)L_1);
		// m_Version = op.ProvideHandleVersion;
		RuntimeObject* L_2 = ___op1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_ProvideHandleVersion() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_2);
		__this->___m_Version_0 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A_AdjustorThunk (RuntimeObject* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, RuntimeObject* ___op1, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	ProvideHandle__ctor_m747E40C8B08DBF3EB4276D7B0836C0F0D5B59B0A(_thisAdjusted, ___rm0, ___op1, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_InternalOp.ProvideHandleVersion != m_Version)
		RuntimeObject* L_0 = __this->___m_InternalOp_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_ProvideHandleVersion() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = __this->___m_Version_0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		// throw new Exception(ProviderOperation<object>.kInvalidHandleMsg);
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral855615C6B0E9D573F53C3375F77A7B6069346F1E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE_RuntimeMethod_var)));
	}

IL_001e:
	{
		// return m_InternalOp;
		RuntimeObject* L_4 = __this->___m_InternalOp_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.ResourceManager UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) 
{
	{
		// return m_ResourceManager;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = __this->___m_ResourceManager_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* _returnValue;
	_returnValue = ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Type UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ProvideHandle_get_Type_mD0CC7F89812DD44851B9D52DA6960B1671A86559 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Type Type { get { return InternalOp.RequestedType; } }
		RuntimeObject* L_0;
		L_0 = ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE(__this, NULL);
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = InterfaceFuncInvoker0< Type_t* >::Invoke(7 /* System.Type UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_RequestedType() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Type_t* ProvideHandle_get_Type_mD0CC7F89812DD44851B9D52DA6960B1671A86559_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = ProvideHandle_get_Type_mD0CC7F89812DD44851B9D52DA6960B1671A86559(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IResourceLocation Location { get { return InternalOp.Location; } }
		RuntimeObject* L_0;
		L_0 = ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::get_Location() */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::GetDependencies(System.Collections.Generic.IList`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_GetDependencies_m369FC67ECDB4E574C6BC9961896C384189EAFBAD (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, RuntimeObject* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.GetDependencies(list);
		RuntimeObject* L_0;
		L_0 = ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE(__this, NULL);
		RuntimeObject* L_1 = ___list0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::GetDependencies(System.Collections.Generic.IList`1<System.Object>) */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ProvideHandle_GetDependencies_m369FC67ECDB4E574C6BC9961896C384189EAFBAD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	ProvideHandle_GetDependencies_m369FC67ECDB4E574C6BC9961896C384189EAFBAD(_thisAdjusted, ___list0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::SetProgressCallback(System.Func`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_SetProgressCallback_m5D44473DCD8CEB54FB41063B2C2105220822094D (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.SetProgressCallback(callback);
		RuntimeObject* L_0;
		L_0 = ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE(__this, NULL);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* >::Invoke(5 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::SetProgressCallback(System.Func`1<System.Single>) */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ProvideHandle_SetProgressCallback_m5D44473DCD8CEB54FB41063B2C2105220822094D_AdjustorThunk (RuntimeObject* __this, Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___callback0, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	ProvideHandle_SetProgressCallback_m5D44473DCD8CEB54FB41063B2C2105220822094D(_thisAdjusted, ___callback0, method);
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle::SetWaitForCompletionCallback(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProvideHandle_SetWaitForCompletionCallback_m2B606A689DD5A940581F9C0F87C4B6B6714BE7A2 (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.SetWaitForCompletionCallback(callback);
		RuntimeObject* L_0;
		L_0 = ProvideHandle_get_InternalOp_m1C141F1D99C5BD7F5AA1E973272462966BF0FEAE(__this, NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* >::Invoke(8 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IGenericProviderOperation::SetWaitForCompletionCallback(System.Func`1<System.Boolean>) */, IGenericProviderOperation_tC74501466724A657B7E04C883910C94361CD6067_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ProvideHandle_SetWaitForCompletionCallback_m2B606A689DD5A940581F9C0F87C4B6B6714BE7A2_AdjustorThunk (RuntimeObject* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___callback0, const RuntimeMethod* method)
{
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631*>(__this + _offset);
	ProvideHandle_SetWaitForCompletionCallback_m2B606A689DD5A940581F9C0F87C4B6B6714BE7A2(_thisAdjusted, ___callback0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
IL2CPP_EXTERN_C void SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshal_pinvoke(const SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A& unmarshaled, SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Scene_0 = unmarshaled.___m_Scene_0;
	if (unmarshaled.___m_Operation_1 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(*unmarshaled.___m_Operation_1, marshaled.___m_Operation_1);
	}
}
IL2CPP_EXTERN_C void SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshal_pinvoke_back(const SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_pinvoke& marshaled, SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 unmarshaledm_Scene_temp_0;
	memset((&unmarshaledm_Scene_temp_0), 0, sizeof(unmarshaledm_Scene_temp_0));
	unmarshaledm_Scene_temp_0 = marshaled.___m_Scene_0;
	unmarshaled.___m_Scene_0 = unmarshaledm_Scene_temp_0;
	unmarshaled.___m_Operation_1 = (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)il2cpp_codegen_object_new(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Operation_1), (void*)(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)il2cpp_codegen_object_new(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_il2cpp_TypeInfo_var));
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(marshaled.___m_Operation_1, *unmarshaled.___m_Operation_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
IL2CPP_EXTERN_C void SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshal_pinvoke_cleanup(SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_pinvoke& marshaled)
{
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(marshaled.___m_Operation_1);
}


// Conversion methods for marshalling of: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
IL2CPP_EXTERN_C void SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshal_com(const SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A& unmarshaled, SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_com& marshaled)
{
	marshaled.___m_Scene_0 = unmarshaled.___m_Scene_0;
	if (unmarshaled.___m_Operation_1 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com(*unmarshaled.___m_Operation_1, *marshaled.___m_Operation_1);
	}
}
IL2CPP_EXTERN_C void SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshal_com_back(const SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_com& marshaled, SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A& unmarshaled)
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 unmarshaledm_Scene_temp_0;
	memset((&unmarshaledm_Scene_temp_0), 0, sizeof(unmarshaledm_Scene_temp_0));
	unmarshaledm_Scene_temp_0 = marshaled.___m_Scene_0;
	unmarshaled.___m_Scene_0 = unmarshaledm_Scene_temp_0;
	if (unmarshaled.___m_Operation_1 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_back(*marshaled.___m_Operation_1, *unmarshaled.___m_Operation_1);
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
IL2CPP_EXTERN_C void SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshal_com_cleanup(SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_com& marshaled)
{
	if (marshaled.___m_Operation_1 != NULL)
	{
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_com_cleanup(*marshaled.___m_Operation_1);
	}
}
// UnityEngine.SceneManagement.Scene UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::get_Scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58 (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, const RuntimeMethod* method) 
{
	{
		// public Scene Scene { get { return m_Scene; } internal set { m_Scene = value; } }
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = __this->___m_Scene_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A*>(__this + _offset);
	Scene_tA1DC762B79745EB5140F054C884855B922318356 _returnValue;
	_returnValue = SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInstance_GetHashCode_m0C1E8F653E55633F9897B5FC62D7D4B7B1D340F4 (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Scene.GetHashCode();
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_GetHashCode_m74ACBFB8C656D5620A9A1E62D04E55ACBF63ADC9((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SceneInstance_GetHashCode_m0C1E8F653E55633F9897B5FC62D7D4B7B1D340F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SceneInstance_GetHashCode_m0C1E8F653E55633F9897B5FC62D7D4B7B1D340F4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.SceneInstance::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneInstance_Equals_m10E8D14BA2C3057166479C12D2514056E8ACB6AD (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!(obj is SceneInstance))
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Scene.Equals(((SceneInstance)obj).Scene);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_inline(__this, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___obj0;
		V_1 = ((*(SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A*)((SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A*)(SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A*)UnBox(L_2, SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_il2cpp_TypeInfo_var))));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_inline((&V_1), NULL);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4 = L_3;
		RuntimeObject* L_5 = Box(Scene_tA1DC762B79745EB5140F054C884855B922318356_il2cpp_TypeInfo_var, &L_4);
		bool L_6;
		L_6 = Scene_Equals_mB973481492F291BF8EAF1AD66B9F7FA3ACF3928D((&V_0), L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool SceneInstance_Equals_m10E8D14BA2C3057166479C12D2514056E8ACB6AD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A*>(__this + _offset);
	bool _returnValue;
	_returnValue = SceneInstance_Equals_m10E8D14BA2C3057166479C12D2514056E8ACB6AD(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.ResourceManagement.ResourceProviders.SceneProviderExtensions::ReleaseScene(UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider,UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>,UnityEngine.SceneManagement.UnloadSceneOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 SceneProviderExtensions_ReleaseScene_m2AF033AE9F34DF57A72C775CB2493EC217490228 (RuntimeObject* ___provider0, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___resourceManager1, AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 ___sceneLoadHandle2, int32_t ___unloadOptions3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISceneProvider2_t3168CF0253FC74704C4E3597D9515E04D1DB7AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISceneProvider_t8975F536F686AA01DF259F7AAB973512B5098581_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (provider is ISceneProvider2)
		RuntimeObject* L_0 = ___provider0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, ISceneProvider2_t3168CF0253FC74704C4E3597D9515E04D1DB7AD8_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		// return ((ISceneProvider2)provider).ReleaseScene(resourceManager, sceneLoadHandle, unloadOptions);
		RuntimeObject* L_1 = ___provider0;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_2 = ___resourceManager1;
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_3 = ___sceneLoadHandle2;
		int32_t L_4 = ___unloadOptions3;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, ISceneProvider2_t3168CF0253FC74704C4E3597D9515E04D1DB7AD8_il2cpp_TypeInfo_var)));
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_5;
		L_5 = InterfaceFuncInvoker3< AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5, int32_t >::Invoke(0 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2::ReleaseScene(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>,UnityEngine.SceneManagement.UnloadSceneOptions) */, ISceneProvider2_t3168CF0253FC74704C4E3597D9515E04D1DB7AD8_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ISceneProvider2_t3168CF0253FC74704C4E3597D9515E04D1DB7AD8_il2cpp_TypeInfo_var)), L_2, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		// return provider.ReleaseScene(resourceManager, sceneLoadHandle);
		RuntimeObject* L_6 = ___provider0;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_7 = ___resourceManager1;
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_8 = ___sceneLoadHandle2;
		NullCheck(L_6);
		AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 L_9;
		L_9 = InterfaceFuncInvoker2< AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D*, AsyncOperationHandle_1_t074166892865CF484A3C77A1E9FB6F5E83DA1DA5 >::Invoke(1 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider::ReleaseScene(UnityEngine.ResourceManagement.ResourceManager,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance>) */, ISceneProvider_t8975F536F686AA01DF259F7AAB973512B5098581_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		return L_9;
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
// System.Object UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider::Convert(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonAssetProvider_Convert_m6FA7F7A940C19DA1E361CCE24898B243EEBBD75E (JsonAssetProvider_tDA8FBAA9EAF7DC4CD8F96B0145644401CA29ADDF* __this, Type_t* ___type0, String_t* ___text1, const RuntimeMethod* method) 
{
	{
		// return JsonUtility.FromJson(text, type);
		String_t* L_0 = ___text1;
		Type_t* L_1 = ___type0;
		RuntimeObject* L_2;
		L_2 = JsonUtility_FromJson_mCA93DB12788DA2F120D6EC81758D3189D9341815(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonAssetProvider__ctor_mB9C7EE8BCD28AA4995F2B29CB3041582769740C2 (JsonAssetProvider_tDA8FBAA9EAF7DC4CD8F96B0145644401CA29ADDF* __this, const RuntimeMethod* method) 
{
	{
		TextDataProvider__ctor_m0F85BC00939981B4C817E850285C97FB9E26243E(__this, NULL);
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
// System.String UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::get_ProviderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceProviderBase_get_ProviderId_m32B6BC7793DD0BA3B1B8AD25A2469AE0B4CDCCB1 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, const RuntimeMethod* method) 
{
	{
		// if (string.IsNullOrEmpty(m_ProviderId))
		String_t* L_0 = __this->___m_ProviderId_0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// m_ProviderId = GetType().FullName;
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_2);
		__this->___m_ProviderId_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ProviderId_0), (void*)L_3);
	}

IL_001e:
	{
		// return m_ProviderId;
		String_t* L_4 = __this->___m_ProviderId_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceProviderBase_Initialize_mF5BA704DAA8DBAE985D7B2AA6B84379DC08A1A62 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, String_t* ___id0, String_t* ___data1, const RuntimeMethod* method) 
{
	{
		// m_ProviderId = id;
		String_t* L_0 = ___id0;
		__this->___m_ProviderId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ProviderId_0), (void*)L_0);
		// return !string.IsNullOrEmpty(m_ProviderId);
		String_t* L_1 = __this->___m_ProviderId_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::CanProvide(System.Type,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceProviderBase_CanProvide_mB9058D012637D533B0214DCB5EF478E5F8CB6816 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, Type_t* ___t0, RuntimeObject* ___location1, const RuntimeMethod* method) 
{
	{
		// return GetDefaultType(location).IsAssignableFrom(t);
		RuntimeObject* L_0 = ___location1;
		Type_t* L_1;
		L_1 = VirtualFuncInvoker1< Type_t*, RuntimeObject* >::Invoke(16 /* System.Type UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation) */, __this, L_0);
		Type_t* L_2 = ___t0;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceProviderBase_ToString_m9E17857E9B321F341C51B01E0EA3EC09D0ACABDD (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, const RuntimeMethod* method) 
{
	{
		// return ProviderId;
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::get_ProviderId() */, __this);
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::Release(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceProviderBase_Release_mBA35FC33814192955594D9A6C36D6AF9DF54A123 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, RuntimeObject* ___location0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Type UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::GetDefaultType(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ResourceProviderBase_GetDefaultType_m33744F9753517EF7AAE308E7F35234742B0EA000 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, RuntimeObject* ___location0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(object);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::InitializeAsync(UnityEngine.ResourceManagement.ResourceManager,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 ResourceProviderBase_InitializeAsync_mC3314BEB55F7D7F35AD13997844E919980BED1DA (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ___rm0, String_t* ___id1, String_t* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CInitializeAsyncU3Eb__0_m2152B544B8FC16CFF06127C9098353ADE47B9713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* V_0 = NULL;
	BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* V_1 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* L_0 = (U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mA5E2487B070975CC79B933A4F89E400047EC712B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* L_2 = V_0;
		String_t* L_3 = ___id1;
		NullCheck(L_2);
		L_2->___id_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___id_1), (void*)L_3);
		U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* L_4 = V_0;
		String_t* L_5 = ___data2;
		NullCheck(L_4);
		L_4->___data_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___data_2), (void*)L_5);
		// BaseInitAsyncOp baseInitOp = new BaseInitAsyncOp();
		BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* L_6 = (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C*)il2cpp_codegen_object_new(BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BaseInitAsyncOp__ctor_m13B9AD12D8F36FC0B8DD5B72AE71117B3F8ADA1E(L_6, NULL);
		V_1 = L_6;
		// baseInitOp.Init(() => Initialize(id, data));
		BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* L_7 = V_1;
		U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* L_8 = V_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_9 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CInitializeAsyncU3Eb__0_m2152B544B8FC16CFF06127C9098353ADE47B9713_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		BaseInitAsyncOp_Init_mA692A84282503E756732EB5AED2D184E17C8896B_inline(L_7, L_9, NULL);
		// return rm.StartOperation(baseInitOp, default);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_10 = ___rm0;
		BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* L_11 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D));
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_12 = V_2;
		NullCheck(L_10);
		AsyncOperationHandle_1_tF0C18B1708F42632D0DCFCD51AFCC737C73CDD66 L_13;
		L_13 = ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44(L_10, L_11, L_12, ResourceManager_StartOperation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1067237C1C6A9C81341005BB04E1E0E44206AB44_RuntimeMethod_var);
		return L_13;
	}
}
// UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceProviderBase_UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags_m3ED17F0683C3298B5AC1E402259740330104F79A (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, const RuntimeMethod* method) 
{
	{
		// ProviderBehaviourFlags IResourceProvider.BehaviourFlags { get { return m_BehaviourFlags; } }
		int32_t L_0 = __this->___m_BehaviourFlags_1;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceProviderBase__ctor_mAE12700496F4A8B1363AB851FD48F2101278CBF9 (ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::Init(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInitAsyncOp_Init_mA692A84282503E756732EB5AED2D184E17C8896B (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___callback0, const RuntimeMethod* method) 
{
	{
		// m_CallBack = callback;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___callback0;
		__this->___m_CallBack_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallBack_17), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::InvokeWaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInitAsyncOp_InvokeWaitForCompletion_m3EEFE285B56FC5B968B76F2A7532EBB1ECF64C32 (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B2_0 = NULL;
	ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* G_B1_0 = NULL;
	{
		// m_RM?.Update(Time.unscaledDeltaTime);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = ((AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9*)__this)->___m_RM_4;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0016;
	}

IL_000c:
	{
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		NullCheck(G_B2_0);
		ResourceManager_Update_mE18FA475CB6F6B7020A53A51B0FAD323819F7B4C(G_B2_0, L_2, NULL);
	}

IL_0016:
	{
		// if (!HasExecuted)
		bool L_3 = ((AsyncOperationBase_1_t9B8CD2C389C84545C0CAD66F10A3746E480D09D9*)__this)->___HasExecuted_10;
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// InvokeExecute();
		AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06(__this, AsyncOperationBase_1_InvokeExecute_m348860D240F3073087FDD6B33EAD7C52BF72BC06_RuntimeMethod_var);
	}

IL_0024:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInitAsyncOp_Execute_mD8E2E626B3041A9A808536A9062D19D86DB091F2 (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CallBack != null)
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = __this->___m_CallBack_17;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Complete(m_CallBack(), true, "");
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = __this->___m_CallBack_17;
		NullCheck(L_1);
		bool L_2;
		L_2 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_1, NULL);
		AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7(__this, L_2, (bool)1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7_RuntimeMethod_var);
		return;
	}

IL_0020:
	{
		// Complete(true, true, "");
		AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7(__this, (bool)1, (bool)1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, AsyncOperationBase_1_Complete_m7672D1479CCD241E6106E62B6ECCC035AC6715B7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInitAsyncOp__ctor_m13B9AD12D8F36FC0B8DD5B72AE71117B3F8ADA1E (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1(__this, AsyncOperationBase_1__ctor_mCEE82E3D26E28A39BCF9C98AAB2F97A2A8DB38E1_RuntimeMethod_var);
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
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mA5E2487B070975CC79B933A4F89E400047EC712B (U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0::<InitializeAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CInitializeAsyncU3Eb__0_m2152B544B8FC16CFF06127C9098353ADE47B9713 (U3CU3Ec__DisplayClass10_0_t68467CAE6229BA62ED5F594F6848E075793F1B2C* __this, const RuntimeMethod* method) 
{
	{
		// baseInitOp.Init(() => Initialize(id, data));
		ResourceProviderBase_t280B9BC5469E0147CAB04C60ED165EFFFF0D1A29* L_0 = __this->___U3CU3E4__this_0;
		String_t* L_1 = __this->___id_1;
		String_t* L_2 = __this->___data_2;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, String_t*, String_t* >::Invoke(13 /* System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase::Initialize(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
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
// UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* ProviderLoadRequestOptions_Copy_mEA312F4D34C7FE6E0B7CE7BA4E7D68DCD5BA94A9 (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (ProviderLoadRequestOptions) this.MemberwiseClone();
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return ((ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F*)CastclassClass((RuntimeObject*)L_0, ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F_il2cpp_TypeInfo_var));
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::get_IgnoreFailures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProviderLoadRequestOptions_get_IgnoreFailures_m38F1966139843C0C98C3598834A3BCCD9700962F (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IgnoreFailures; }
		bool L_0 = __this->___m_IgnoreFailures_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::get_WebRequestTimeout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProviderLoadRequestOptions_get_WebRequestTimeout_m81BA0608C118ECD1ED8AD0732A626E747418320B (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) 
{
	{
		// get => m_WebRequestTimeout;
		int32_t L_0 = __this->___m_WebRequestTimeout_1;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::set_WebRequestTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderLoadRequestOptions_set_WebRequestTimeout_mCC9B0B944D6B5E4599849B09C83B3A635F31B518 (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_WebRequestTimeout = value;
		int32_t L_0 = ___value0;
		__this->___m_WebRequestTimeout_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.ProviderLoadRequestOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProviderLoadRequestOptions__ctor_m61D91E3E5DED91FDA313D772DAD3F16324F06322 (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::get_IgnoreFailures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextDataProvider_get_IgnoreFailures_m8BC123BCDA3C358B9EF223382A5ABA14C41D8D61 (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, const RuntimeMethod* method) 
{
	{
		// public bool IgnoreFailures { get; set; }
		bool L_0 = __this->___U3CIgnoreFailuresU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Object UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::Convert(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextDataProvider_Convert_mC19E9961AFE2F1475B113DBA2A25BBE43EE546BC (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, Type_t* ___type0, String_t* ___text1, const RuntimeMethod* method) 
{
	{
		// public virtual object Convert(Type type, string text) { return text; }
		String_t* L_0 = ___text1;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDataProvider_Provide_m90DDE130A1AA927048310A11A8269C3E153E2F49 (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___provideHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new InternalOp().Start(provideHandle, this);
		InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* L_0 = (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77*)il2cpp_codegen_object_new(InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InternalOp__ctor_m5C2E4773471AE3A4E9D940D1CD799A838ED4AF7A(L_0, NULL);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 L_1 = ___provideHandle0;
		NullCheck(L_0);
		InternalOp_Start_mF7F18148ECFF3E5EDA8852B71F507C6948CECCA3(L_0, L_1, __this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDataProvider__ctor_m0F85BC00939981B4C817E850285C97FB9E26243E (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, const RuntimeMethod* method) 
{
	{
		ResourceProviderBase__ctor_mAE12700496F4A8B1363AB851FD48F2101278CBF9(__this, NULL);
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
// System.Single UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::GetPercentComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InternalOp_GetPercentComplete_mAFF06723896D6D26284115A2F0F102C9D664CCEC (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, const RuntimeMethod* method) 
{
	{
		// private float GetPercentComplete() { return m_RequestOperation != null ? m_RequestOperation.progress : 0.0f; }
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = __this->___m_RequestOperation_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___m_RequestOperation_1;
		NullCheck(L_1);
		float L_2;
		L_2 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle,UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_Start_mF7F18148ECFF3E5EDA8852B71F507C6948CECCA3 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 ___provideHandle0, TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* ___rawProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_GetPercentComplete_mAFF06723896D6D26284115A2F0F102C9D664CCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_WaitForCompletionHandler_mD109A0979F9D7BBC921015E9D83F2F81552C4AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06065C5BBFA32ED0986FD91E8FBCA6BD91E74A93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4DA9FC99FDEB9477A75EAF8DFDBC820DAAA3ECB);
		s_Il2CppMethodInitialized = true;
	}
	ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t* V_4 = NULL;
	int32_t G_B8_0 = 0;
	RuntimeObject* G_B8_1 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	RuntimeObject* G_B7_1 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B7_2 = NULL;
	Exception_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	RuntimeObject* G_B9_2 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B9_3 = NULL;
	{
		// m_PI = provideHandle;
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631 L_0 = ___provideHandle0;
		__this->___m_PI_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_PI_3))->___m_InternalOp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_PI_3))->___m_ResourceManager_2), (void*)NULL);
		#endif
		// m_PI.SetWaitForCompletionCallback(WaitForCompletionHandler);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_1 = (&__this->___m_PI_3);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_2, __this, (intptr_t)((void*)InternalOp_WaitForCompletionHandler_mD109A0979F9D7BBC921015E9D83F2F81552C4AC2_RuntimeMethod_var), NULL);
		ProvideHandle_SetWaitForCompletionCallback_m2B606A689DD5A940581F9C0F87C4B6B6714BE7A2(L_1, L_2, NULL);
		// provideHandle.SetProgressCallback(GetPercentComplete);
		Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* L_3 = (Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7*)il2cpp_codegen_object_new(Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m94E0C712F86101E026834DA318C3FFF46DE49C71(L_3, __this, (intptr_t)((void*)InternalOp_GetPercentComplete_mAFF06723896D6D26284115A2F0F102C9D664CCEC_RuntimeMethod_var), NULL);
		ProvideHandle_SetProgressCallback_m5D44473DCD8CEB54FB41063B2C2105220822094D((&___provideHandle0), L_3, NULL);
		// m_Provider = rawProvider;
		TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* L_4 = ___rawProvider1;
		__this->___m_Provider_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Provider_0), (void*)L_4);
		// if (m_PI.Location.Data is ProviderLoadRequestOptions providerData)
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_5 = (&__this->___m_PI_3);
		RuntimeObject* L_6;
		L_6 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79(L_5, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::get_Data() */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_6);
		V_0 = ((ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F*)IsInstClass((RuntimeObject*)L_7, ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F_il2cpp_TypeInfo_var));
		ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* L_8 = V_0;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		// m_IgnoreFailures = providerData.IgnoreFailures;
		ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = ProviderLoadRequestOptions_get_IgnoreFailures_m38F1966139843C0C98C3598834A3BCCD9700962F_inline(L_9, NULL);
		__this->___m_IgnoreFailures_4 = L_10;
		// m_Timeout = providerData.WebRequestTimeout;
		ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ProviderLoadRequestOptions_get_WebRequestTimeout_m81BA0608C118ECD1ED8AD0732A626E747418320B_inline(L_11, NULL);
		__this->___m_Timeout_6 = L_12;
		goto IL_007e;
	}

IL_006b:
	{
		// m_IgnoreFailures = rawProvider.IgnoreFailures;
		TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* L_13 = ___rawProvider1;
		NullCheck(L_13);
		bool L_14;
		L_14 = TextDataProvider_get_IgnoreFailures_m8BC123BCDA3C358B9EF223382A5ABA14C41D8D61_inline(L_13, NULL);
		__this->___m_IgnoreFailures_4 = L_14;
		// m_Timeout = 0;
		__this->___m_Timeout_6 = 0;
	}

IL_007e:
	{
		// var path = m_PI.ResourceManager.TransformInternalId(m_PI.Location);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_15 = (&__this->___m_PI_3);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_16;
		L_16 = ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_inline(L_15, NULL);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_17 = (&__this->___m_PI_3);
		RuntimeObject* L_18;
		L_18 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79(L_17, NULL);
		NullCheck(L_16);
		String_t* L_19;
		L_19 = ResourceManager_TransformInternalId_m2C99EDD12AF07F099F7FF88E15892F2582C17EB9(L_16, L_18, NULL);
		V_1 = L_19;
		// if (ResourceManagerConfig.ShouldPathUseWebRequest(path))
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = ResourceManagerConfig_ShouldPathUseWebRequest_mB9DF52370947A6BD9AE5565F9E7E467CC4C69DF7(L_20, NULL);
		if (!L_21)
		{
			goto IL_00aa;
		}
	}
	{
		// SendWebRequest(path);
		String_t* L_22 = V_1;
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::SendWebRequest(System.String) */, __this, L_22);
		return;
	}

IL_00aa:
	{
		// else if (File.Exists(path))
		String_t* L_23 = V_1;
		bool L_24;
		L_24 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_23, NULL);
		if (!L_24)
		{
			goto IL_0104;
		}
	}
	{
		// var text = File.ReadAllText(path);
		String_t* L_25 = V_1;
		String_t* L_26;
		L_26 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_25, NULL);
		V_2 = L_26;
		// object result = ConvertText(text);
		String_t* L_27 = V_2;
		RuntimeObject* L_28;
		L_28 = InternalOp_ConvertText_m399662CFEB5F933894A69BF4DAC04E9DEE3E60B5(__this, L_27, NULL);
		V_3 = L_28;
		// m_PI.Complete(result, result != null, result == null ? new Exception($"Unable to load asset of type {m_PI.Type} from location {m_PI.Location}.") : null);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_29 = (&__this->___m_PI_3);
		RuntimeObject* L_30 = V_3;
		RuntimeObject* L_31 = V_3;
		RuntimeObject* L_32 = V_3;
		G_B7_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		G_B7_1 = L_30;
		G_B7_2 = L_29;
		if (!L_32)
		{
			G_B8_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			G_B8_1 = L_30;
			G_B8_2 = L_29;
			goto IL_00d2;
		}
	}
	{
		G_B9_0 = ((Exception_t*)(NULL));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00f7;
	}

IL_00d2:
	{
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_33 = (&__this->___m_PI_3);
		Type_t* L_34;
		L_34 = ProvideHandle_get_Type_mD0CC7F89812DD44851B9D52DA6960B1671A86559(L_33, NULL);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_35 = (&__this->___m_PI_3);
		RuntimeObject* L_36;
		L_36 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79(L_35, NULL);
		String_t* L_37;
		L_37 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral06065C5BBFA32ED0986FD91E8FBCA6BD91E74A93, L_34, L_36, NULL);
		Exception_t* L_38 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_38, L_37, NULL);
		G_B9_0 = L_38;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00f7:
	{
		ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164(G_B9_3, G_B9_2, (bool)G_B9_1, G_B9_0, ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var);
		// m_Complete = true;
		__this->___m_Complete_5 = (bool)1;
		return;
	}

IL_0104:
	{
		// Exception exception = null;
		V_4 = (Exception_t*)NULL;
		// if (m_IgnoreFailures)
		bool L_39 = __this->___m_IgnoreFailures_4;
		if (!L_39)
		{
			goto IL_0126;
		}
	}
	{
		// m_PI.Complete<object>(null, true, exception);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_40 = (&__this->___m_PI_3);
		Exception_t* L_41 = V_4;
		ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164(L_40, NULL, (bool)1, L_41, ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var);
		// m_Complete = true;
		__this->___m_Complete_5 = (bool)1;
		return;
	}

IL_0126:
	{
		// exception = new Exception(string.Format("Invalid path in " + nameof(TextDataProvider) + " : '{0}'.", path));
		String_t* L_42 = V_1;
		String_t* L_43;
		L_43 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF4DA9FC99FDEB9477A75EAF8DFDBC820DAAA3ECB, L_42, NULL);
		Exception_t* L_44 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_44, L_43, NULL);
		V_4 = L_44;
		// m_PI.Complete<object>(null, false, exception);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_45 = (&__this->___m_PI_3);
		Exception_t* L_46 = V_4;
		ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164(L_45, NULL, (bool)0, L_46, ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var);
		// m_Complete = true;
		__this->___m_Complete_5 = (bool)1;
		// }
		return;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::WaitForCompletionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalOp_WaitForCompletionHandler_mD109A0979F9D7BBC921015E9D83F2F81552C4AC2 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Complete)
		bool L_0 = __this->___m_Complete_5;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000a:
	{
		// if (m_RequestOperation != null)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___m_RequestOperation_1;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (m_RequestOperation.isDone && !m_Complete)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_2 = __this->___m_RequestOperation_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		bool L_4 = __this->___m_Complete_5;
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// RequestOperation_completed(m_RequestOperation);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5 = __this->___m_RequestOperation_1;
		InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5(__this, L_5, NULL);
		goto IL_0044;
	}

IL_0035:
	{
		// else if (!m_RequestOperation.isDone)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6 = __this->___m_RequestOperation_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_6, NULL);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// return m_Complete;
		bool L_8 = __this->___m_Complete_5;
		return L_8;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::RequestOperation_completed(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___op0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral531C53CAC105666ED9286691DAD92BB37C033041);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F0F9E5A6213794F23A24C629BB390DBFBC3974A);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_3 = NULL;
	UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* V_4 = NULL;
	{
		// if (m_Complete)
		bool L_0 = __this->___m_Complete_5;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var webOp = op as UnityWebRequestAsyncOperation;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1 = ___op0;
		V_0 = ((UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)IsInstClass((RuntimeObject*)L_1, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var));
		// string textResult = null;
		V_1 = (String_t*)NULL;
		// Exception exception = null;
		V_2 = (Exception_t*)NULL;
		// if (webOp != null)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_2 = V_0;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// var webReq = webOp.webRequest;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = V_0;
		NullCheck(L_3);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_3, NULL);
		V_3 = L_4;
		// if (!UnityWebRequestUtilities.RequestHasErrors(webReq, out UnityWebRequestResult uwrResult))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = V_3;
		bool L_6;
		L_6 = UnityWebRequestUtilities_RequestHasErrors_m279E3F01AE98A968F0DEB22F54F0BB35BF7EF890(L_5, (&V_4), NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		// textResult = webReq.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = V_3;
		NullCheck(L_7);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_8;
		L_8 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_8, NULL);
		V_1 = L_9;
		goto IL_0074;
	}

IL_0036:
	{
		// exception = new RemoteProviderException($"{nameof(TextDataProvider)} : unable to load from url : {webReq.url}", m_PI.Location, uwrResult);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7F0F9E5A6213794F23A24C629BB390DBFBC3974A, L_11, NULL);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_13 = (&__this->___m_PI_3);
		RuntimeObject* L_14;
		L_14 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79(L_13, NULL);
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_15 = V_4;
		RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* L_16 = (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131*)il2cpp_codegen_object_new(RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		RemoteProviderException__ctor_mB262F595DD1E23F24A37B5AB6142B8180CFF70C1(L_16, L_12, L_14, L_15, (Exception_t*)NULL, NULL);
		V_2 = L_16;
		goto IL_0074;
	}

IL_005c:
	{
		// exception = new RemoteProviderException(nameof(TextDataProvider) + " unable to load from unknown url", m_PI.Location);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_17 = (&__this->___m_PI_3);
		RuntimeObject* L_18;
		L_18 = ProvideHandle_get_Location_m90F975C77A98EB20A2C3B9135D629AB0F04FFA79(L_17, NULL);
		RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* L_19 = (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131*)il2cpp_codegen_object_new(RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		RemoteProviderException__ctor_mB262F595DD1E23F24A37B5AB6142B8180CFF70C1(L_19, _stringLiteral531C53CAC105666ED9286691DAD92BB37C033041, L_18, (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894*)NULL, (Exception_t*)NULL, NULL);
		V_2 = L_19;
	}

IL_0074:
	{
		// CompleteOperation(textResult, exception);
		String_t* L_20 = V_1;
		Exception_t* L_21 = V_2;
		InternalOp_CompleteOperation_mBA10749B5FBBCEBF6FC6EDE8F74436482E0CD108(__this, L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::CompleteOperation(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_CompleteOperation_mBA10749B5FBBCEBF6FC6EDE8F74436482E0CD108 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, String_t* ___text0, Exception_t* ___exception1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	RuntimeObject* G_B5_1 = NULL;
	ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* G_B5_2 = NULL;
	{
		// object result = null;
		V_0 = NULL;
		// if (!string.IsNullOrEmpty(text))
		String_t* L_0 = ___text0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// result = ConvertText(text);
		String_t* L_2 = ___text0;
		RuntimeObject* L_3;
		L_3 = InternalOp_ConvertText_m399662CFEB5F933894A69BF4DAC04E9DEE3E60B5(__this, L_2, NULL);
		V_0 = L_3;
	}

IL_0012:
	{
		// m_PI.Complete(result, result != null || m_IgnoreFailures, exception);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_4 = (&__this->___m_PI_3);
		RuntimeObject* L_5 = V_0;
		RuntimeObject* L_6 = V_0;
		G_B3_0 = L_5;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_4;
			goto IL_0024;
		}
	}
	{
		bool L_7 = __this->___m_IgnoreFailures_4;
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0025:
	{
		Exception_t* L_8 = ___exception1;
		ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164(G_B5_2, G_B5_1, (bool)G_B5_0, L_8, ProvideHandle_Complete_TisRuntimeObject_m0DCA74D4314BF3C6E5975B1E068C1BDBD41D3164_RuntimeMethod_var);
		// m_Complete = true;
		__this->___m_Complete_5 = (bool)1;
		// }
		return;
	}
}
// System.Object UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::ConvertText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalOp_ConvertText_m399662CFEB5F933894A69BF4DAC04E9DEE3E60B5 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// return m_Provider.Convert(m_PI.Type, text);
		TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* L_0 = __this->___m_Provider_0;
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_1 = (&__this->___m_PI_3);
		Type_t* L_2;
		L_2 = ProvideHandle_get_Type_mD0CC7F89812DD44851B9D52DA6960B1671A86559(L_1, NULL);
		String_t* L_3 = ___text0;
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker2< RuntimeObject*, Type_t*, String_t* >::Invoke(19 /* System.Object UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::Convert(System.Type,System.String) */, L_0, L_2, L_3);
		V_0 = L_4;
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// if (!m_IgnoreFailures)
			bool L_5 = __this->___m_IgnoreFailures_4;
			if (L_5)
			{
				goto IL_0029;
			}
		}
		{
			// Debug.LogException(e);
			Exception_t* L_6 = V_1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(L_6, NULL);
		}

IL_0029:
		{
			// return null;
			V_0 = NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_002d;
		}
	}// end catch (depth: 1)

IL_002d:
	{
		// }
		RuntimeObject* L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::SendWebRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_SendWebRequest_mB75339F2D9CF06B6086FAD906823EEBFF11FAD22 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_U3CSendWebRequestU3Eb__13_0_m7D8C14A2281B0E47BA2C1699FFE5E12A050840A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* G_B4_0 = NULL;
	Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* G_B3_0 = NULL;
	{
		// UnityWebRequest request = new UnityWebRequest(path, UnityWebRequest.kHttpVerbGET, new DownloadHandlerBuffer(), null);
		String_t* L_0 = ___path0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_1 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_1, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A(L_2, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)NULL, NULL);
		V_0 = L_2;
		// if (m_Timeout > 0)
		int32_t L_3 = __this->___m_Timeout_6;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// request.timeout = m_Timeout;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = V_0;
		int32_t L_5 = __this->___m_Timeout_6;
		NullCheck(L_4);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_4, L_5, NULL);
	}

IL_0027:
	{
		// m_PI.ResourceManager.WebRequestOverride?.Invoke(request);
		ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* L_6 = (&__this->___m_PI_3);
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_7;
		L_7 = ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_inline(L_6, NULL);
		NullCheck(L_7);
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_8;
		L_8 = ResourceManager_get_WebRequestOverride_m5B5944646CCCFEC195AF713DC15F490EDA9EDC12_inline(L_7, NULL);
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_003d;
		}
	}
	{
		goto IL_0043;
	}

IL_003d:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = V_0;
		NullCheck(G_B4_0);
		Action_1_Invoke_m2E790BB44663BD4EAAA462F9539D3DCDE112377C_inline(G_B4_0, L_10, NULL);
	}

IL_0043:
	{
		// m_RequestQueueOperation = WebRequestQueue.QueueRequest(request);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WebRequestQueue_tF33162C5E0201181DD745854EFF8638666B2B1D2_il2cpp_TypeInfo_var);
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_12;
		L_12 = WebRequestQueue_QueueRequest_m1AAE9197B721E4492F136343B2636079F4E48E08(L_11, NULL);
		__this->___m_RequestQueueOperation_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RequestQueueOperation_2), (void*)L_12);
		// if (m_RequestQueueOperation.IsDone)
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_13 = __this->___m_RequestQueueOperation_2;
		NullCheck(L_13);
		bool L_14;
		L_14 = WebRequestQueueOperation_get_IsDone_mF8B3459F19B874A0D0047DDEA4DCCF2FA0DFF813(L_13, NULL);
		if (!L_14)
		{
			goto IL_009f;
		}
	}
	{
		// m_RequestOperation = m_RequestQueueOperation.Result;
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_15 = __this->___m_RequestQueueOperation_2;
		NullCheck(L_15);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_16 = L_15->___Result_1;
		__this->___m_RequestOperation_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RequestOperation_1), (void*)L_16);
		// if (m_RequestOperation.isDone)
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_17 = __this->___m_RequestOperation_1;
		NullCheck(L_17);
		bool L_18;
		L_18 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_17, NULL);
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		// RequestOperation_completed(m_RequestOperation);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_19 = __this->___m_RequestOperation_1;
		InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5(__this, L_19, NULL);
		return;
	}

IL_0087:
	{
		// m_RequestOperation.completed += RequestOperation_completed;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_20 = __this->___m_RequestOperation_1;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_21 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_21, __this, (intptr_t)((void*)InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_20, L_21, NULL);
		return;
	}

IL_009f:
	{
		// m_RequestQueueOperation.OnComplete += asyncOperation =>
		// {
		//     m_RequestOperation = asyncOperation;
		//     m_RequestOperation.completed += RequestOperation_completed;
		// };
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_22 = __this->___m_RequestQueueOperation_2;
		WebRequestQueueOperation_t4CFFFA4B2F8AC2B72624623BF7BC3672F406D363* L_23 = L_22;
		NullCheck(L_23);
		Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* L_24 = L_23->___OnComplete_2;
		Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250* L_25 = (Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250*)il2cpp_codegen_object_new(Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m93FC38C0E82985AE811B2D49F8695FC5D7CFDBCB(L_25, __this, (intptr_t)((void*)InternalOp_U3CSendWebRequestU3Eb__13_0_m7D8C14A2281B0E47BA2C1699FFE5E12A050840A9_RuntimeMethod_var), NULL);
		Delegate_t* L_26;
		L_26 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_24, L_25, NULL);
		NullCheck(L_23);
		L_23->___OnComplete_2 = ((Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250*)Castclass((RuntimeObject*)L_26, Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___OnComplete_2), (void*)((Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250*)Castclass((RuntimeObject*)L_26, Action_1_tA76495A4D86A39ADCD132E8D1AA83DE63E28A250_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp__ctor_m5C2E4773471AE3A4E9D940D1CD799A838ED4AF7A (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp::<SendWebRequest>b__13_0(UnityEngine.Networking.UnityWebRequestAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalOp_U3CSendWebRequestU3Eb__13_0_m7D8C14A2281B0E47BA2C1699FFE5E12A050840A9 (InternalOp_tC21BE397CA1E2CA23789CBBCABB6026BE2B92E77* __this, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___asyncOperation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RequestOperation = asyncOperation;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0 = ___asyncOperation0;
		__this->___m_RequestOperation_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RequestOperation_1), (void*)L_0);
		// m_RequestOperation.completed += RequestOperation_completed;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = __this->___m_RequestOperation_1;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_2 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_2, __this, (intptr_t)((void*)InternalOp_RequestOperation_completed_mABCF255EC8F16723D1F518952653864D3F10D6A5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_1, L_2, NULL);
		// };
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
// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_InternalId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceLocationBase_get_InternalId_mDD8CAC7826827E51FC21FCDB426DB6096008E992 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public string InternalId { get { return m_Id; } }
		String_t* L_0 = __this->___m_Id_1;
		return L_0;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_ProviderId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceLocationBase_get_ProviderId_m0424B14B83A89FAA0EF86495E03B1EF521969C79 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public string ProviderId { get { return m_ProviderId; } }
		String_t* L_0 = __this->___m_ProviderId_2;
		return L_0;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_Dependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceLocationBase_get_Dependencies_m72F0BF8B5DA8D1FE659A64693B045F5F285CBDE5 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public IList<IResourceLocation> Dependencies { get { return m_Dependencies; } }
		List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* L_0 = __this->___m_Dependencies_7;
		return L_0;
	}
}
// System.Boolean UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_HasDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResourceLocationBase_get_HasDependencies_mD189D2ABA34D0D3A2E9157C64CB379E6D2F065BF (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool HasDependencies { get { return m_Dependencies != null && m_Dependencies.Count > 0; } }
		List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* L_0 = __this->___m_Dependencies_7;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* L_1 = __this->___m_Dependencies_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_inline(L_1, List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Object UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceLocationBase_get_Data_m8C7A683E9EB75A55EA642D9EE698A3D13C2034C9 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public object Data { get { return m_Data; } set { m_Data = value; } }
		RuntimeObject* L_0 = __this->___m_Data_3;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::set_Data(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceLocationBase_set_Data_m81160FA98303F532B5365B051C62BB98DC855A03 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Data { get { return m_Data; } set { m_Data = value; } }
		RuntimeObject* L_0 = ___value0;
		__this->___m_Data_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_3), (void*)L_0);
		// public object Data { get { return m_Data; } set { m_Data = value; } }
		return;
	}
}
// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_PrimaryKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceLocationBase_get_PrimaryKey_mADFAF458BB2737444A019A4EDA4D851597B67D1D (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PrimaryKey; }
		String_t* L_0 = __this->___m_PrimaryKey_8;
		return L_0;
	}
}
// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_DependencyHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceLocationBase_get_DependencyHashCode_m9E0B40B30D210863CD93FF3B49931192022F7E86 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public int DependencyHashCode { get { return m_DependencyHashCode; } }
		int32_t L_0 = __this->___m_DependencyHashCode_4;
		return L_0;
	}
}
// System.Type UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::get_ResourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ResourceLocationBase_get_ResourceType_mBE5F33BDA7995150D37EF135584D62C5E6B1DF8B (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public Type ResourceType { get { return m_Type; } }
		Type_t* L_0 = __this->___m_Type_6;
		return L_0;
	}
}
// System.Int32 UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::Hash(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceLocationBase_Hash_m2C84780ECDAADFE6406BDC5BB220802A413AF16A (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		// return (m_HashCode * 31 + t.GetHashCode()) * 31 + DependencyHashCode;
		int32_t L_0 = __this->___m_HashCode_5;
		Type_t* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		int32_t L_3;
		L_3 = ResourceLocationBase_get_DependencyHashCode_m9E0B40B30D210863CD93FF3B49931192022F7E86_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2)), ((int32_t)31))), L_3));
	}
}
// System.String UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResourceLocationBase_ToString_m90F397186213D25C1BA997AD845FA55AED6485A8 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// return m_Id;
		String_t* L_0 = __this->___m_Id_1;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::.ctor(System.String,System.String,System.String,System.Type,UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceLocationBase__ctor_m736BECFEE816BAEDC0FFC7E0A1C0100826A63E74 (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, String_t* ___name0, String_t* ___id1, String_t* ___providerId2, Type_t* ___t3, IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD* ___dependencies4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52F885C20FA219E167AAE5D39AACDF81C54D78D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* G_B6_0 = NULL;
	ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* G_B5_0 = NULL;
	Type_t* G_B7_0 = NULL;
	ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* G_B7_1 = NULL;
	{
		// public ResourceLocationBase(string name, string id, string providerId, Type t, params IResourceLocation[] dependencies)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (string.IsNullOrEmpty(id))
		String_t* L_0 = ___id1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResourceLocationBase__ctor_m736BECFEE816BAEDC0FFC7E0A1C0100826A63E74_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (string.IsNullOrEmpty(providerId))
		String_t* L_3 = ___providerId2;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new ArgumentNullException(nameof(providerId));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4715C557EE00C100954D26772E9FC96F0A121070)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ResourceLocationBase__ctor_m736BECFEE816BAEDC0FFC7E0A1C0100826A63E74_RuntimeMethod_var)));
	}

IL_002c:
	{
		// m_PrimaryKey = name;
		String_t* L_6 = ___name0;
		__this->___m_PrimaryKey_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PrimaryKey_8), (void*)L_6);
		// m_HashCode = (name.GetHashCode() * 31 + id.GetHashCode()) * 31 + providerId.GetHashCode();
		String_t* L_7 = ___name0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		String_t* L_9 = ___id1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_9);
		String_t* L_11 = ___providerId2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_11);
		__this->___m_HashCode_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)31))), L_10)), ((int32_t)31))), L_12));
		// m_Name = name;
		String_t* L_13 = ___name0;
		__this->___m_Name_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_0), (void*)L_13);
		// m_Id = id;
		String_t* L_14 = ___id1;
		__this->___m_Id_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Id_1), (void*)L_14);
		// m_ProviderId = providerId;
		String_t* L_15 = ___providerId2;
		__this->___m_ProviderId_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ProviderId_2), (void*)L_15);
		// m_Dependencies = new List<IResourceLocation>(dependencies);
		IResourceLocationU5BU5D_t248334AD73138BB7FE95A670377FEE9F346E63CD* L_16 = ___dependencies4;
		List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* L_17 = (List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875*)il2cpp_codegen_object_new(List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_m52F885C20FA219E167AAE5D39AACDF81C54D78D4(L_17, (RuntimeObject*)L_16, List_1__ctor_m52F885C20FA219E167AAE5D39AACDF81C54D78D4_RuntimeMethod_var);
		__this->___m_Dependencies_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dependencies_7), (void*)L_17);
		// m_Type = t == null ? typeof(object) : t;
		Type_t* L_18 = ___t3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_18, (Type_t*)NULL, NULL);
		G_B5_0 = __this;
		if (L_19)
		{
			G_B6_0 = __this;
			goto IL_0084;
		}
	}
	{
		Type_t* L_20 = ___t3;
		G_B7_0 = L_20;
		G_B7_1 = G_B5_0;
		goto IL_008e;
	}

IL_0084:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		G_B7_0 = L_22;
		G_B7_1 = G_B6_0;
	}

IL_008e:
	{
		NullCheck(G_B7_1);
		G_B7_1->___m_Type_6 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___m_Type_6), (void*)G_B7_0);
		// ComputeDependencyHash();
		ResourceLocationBase_ComputeDependencyHash_m4436815CB535B21F7DD09593479AB5EF5DBD2D2F(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase::ComputeDependencyHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceLocationBase_ComputeDependencyHash_m4436815CB535B21F7DD09593479AB5EF5DBD2D2F (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBC9C07D05B2D0077FB70A8F4611FA91418BA4EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1F5159DDE57F06EC87D8A60A258CD1D9BBD149F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5E7A2AB1F8E51C1FCAAEA832275730E3430F404E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6F8E4B0F2D06EFD4033EA1CCF89B7E8FBD6BBE82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* G_B2_0 = NULL;
	ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* G_B3_1 = NULL;
	{
		// m_DependencyHashCode = m_Dependencies.Count > 0 ? 17 : 0;
		List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* L_0 = __this->___m_Dependencies_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_inline(L_0, List_1_get_Count_m3C684EEA602ED567BBEB7B567D0D852ED78B1562_RuntimeMethod_var);
		G_B1_0 = __this;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0012:
	{
		G_B3_0 = ((int32_t)17);
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_DependencyHashCode_4 = G_B3_0;
		// foreach (var d in m_Dependencies)
		List_1_tDD50BCC81978662B220DBF55EA7012D87E08A875* L_2 = __this->___m_Dependencies_7;
		NullCheck(L_2);
		Enumerator_tB10974A39E62644F50726206315FA24CD5BE6C12 L_3;
		L_3 = List_1_GetEnumerator_m6F8E4B0F2D06EFD4033EA1CCF89B7E8FBD6BBE82(L_2, List_1_GetEnumerator_m6F8E4B0F2D06EFD4033EA1CCF89B7E8FBD6BBE82_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBC9C07D05B2D0077FB70A8F4611FA91418BA4EB9((&V_0), Enumerator_Dispose_mBC9C07D05B2D0077FB70A8F4611FA91418BA4EB9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_0027_1:
			{
				// foreach (var d in m_Dependencies)
				RuntimeObject* L_4;
				L_4 = Enumerator_get_Current_m5E7A2AB1F8E51C1FCAAEA832275730E3430F404E_inline((&V_0), Enumerator_get_Current_m5E7A2AB1F8E51C1FCAAEA832275730E3430F404E_RuntimeMethod_var);
				V_1 = L_4;
				// m_DependencyHashCode = m_DependencyHashCode * 31 + d.Hash(typeof(object));
				int32_t L_5 = __this->___m_DependencyHashCode_4;
				RuntimeObject* L_6 = V_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_8;
				L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
				NullCheck(L_6);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker1< int32_t, Type_t* >::Invoke(3 /* System.Int32 UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation::Hash(System.Type) */, IResourceLocation_tB0706DA8EB5339ECB4B64C7D2DAFC1EB35D2915C_il2cpp_TypeInfo_var, L_6, L_8);
				__this->___m_DependencyHashCode_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)31))), L_9));
			}

IL_004f_1:
			{
				// foreach (var d in m_Dependencies)
				bool L_10;
				L_10 = Enumerator_MoveNext_m1F5159DDE57F06EC87D8A60A258CD1D9BBD149F5((&V_0), Enumerator_MoveNext_m1F5159DDE57F06EC87D8A60A258CD1D9BBD149F5_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_pinvoke(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Graph_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Graph_0);
	marshaled.___m_Dependencies_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___m_Dependencies_1);
	marshaled.___m_ObjectId_2 = unmarshaled.___m_ObjectId_2;
	marshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_string(unmarshaled.___m_DisplayName_3);
	marshaled.___m_Stream_4 = unmarshaled.___m_Stream_4;
	marshaled.___m_Frame_5 = unmarshaled.___m_Frame_5;
	marshaled.___m_Value_6 = unmarshaled.___m_Value_6;
}
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_pinvoke_back(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke& marshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Graph_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Graph_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Graph_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Graph_0));
	unmarshaled.___m_Dependencies_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Dependencies_1), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1));
	int32_t unmarshaledm_ObjectId_temp_2 = 0;
	unmarshaledm_ObjectId_temp_2 = marshaled.___m_ObjectId_2;
	unmarshaled.___m_ObjectId_2 = unmarshaledm_ObjectId_temp_2;
	unmarshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_string_result(marshaled.___m_DisplayName_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DisplayName_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_DisplayName_3));
	int32_t unmarshaledm_Stream_temp_4 = 0;
	unmarshaledm_Stream_temp_4 = marshaled.___m_Stream_4;
	unmarshaled.___m_Stream_4 = unmarshaledm_Stream_temp_4;
	int32_t unmarshaledm_Frame_temp_5 = 0;
	unmarshaledm_Frame_temp_5 = marshaled.___m_Frame_5;
	unmarshaled.___m_Frame_5 = unmarshaledm_Frame_temp_5;
	int32_t unmarshaledm_Value_temp_6 = 0;
	unmarshaledm_Value_temp_6 = marshaled.___m_Value_6;
	unmarshaled.___m_Value_6 = unmarshaledm_Value_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_pinvoke_cleanup(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Graph_0);
	marshaled.___m_Graph_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___m_Dependencies_1);
	marshaled.___m_Dependencies_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_DisplayName_3);
	marshaled.___m_DisplayName_3 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_com(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com& marshaled)
{
	marshaled.___m_Graph_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Graph_0);
	marshaled.___m_Dependencies_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___m_Dependencies_1);
	marshaled.___m_ObjectId_2 = unmarshaled.___m_ObjectId_2;
	marshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_DisplayName_3);
	marshaled.___m_Stream_4 = unmarshaled.___m_Stream_4;
	marshaled.___m_Frame_5 = unmarshaled.___m_Frame_5;
	marshaled.___m_Value_6 = unmarshaled.___m_Value_6;
}
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_com_back(const DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com& marshaled, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_Graph_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Graph_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Graph_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Graph_0));
	unmarshaled.___m_Dependencies_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Dependencies_1), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___m_Dependencies_1));
	int32_t unmarshaledm_ObjectId_temp_2 = 0;
	unmarshaledm_ObjectId_temp_2 = marshaled.___m_ObjectId_2;
	unmarshaled.___m_ObjectId_2 = unmarshaledm_ObjectId_temp_2;
	unmarshaled.___m_DisplayName_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_DisplayName_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DisplayName_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_DisplayName_3));
	int32_t unmarshaledm_Stream_temp_4 = 0;
	unmarshaledm_Stream_temp_4 = marshaled.___m_Stream_4;
	unmarshaled.___m_Stream_4 = unmarshaledm_Stream_temp_4;
	int32_t unmarshaledm_Frame_temp_5 = 0;
	unmarshaledm_Frame_temp_5 = marshaled.___m_Frame_5;
	unmarshaled.___m_Frame_5 = unmarshaledm_Frame_temp_5;
	int32_t unmarshaledm_Value_temp_6 = 0;
	unmarshaledm_Value_temp_6 = marshaled.___m_Value_6;
	unmarshaled.___m_Value_6 = unmarshaledm_Value_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent
IL2CPP_EXTERN_C void DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshal_com_cleanup(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Graph_0);
	marshaled.___m_Graph_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___m_Dependencies_1);
	marshaled.___m_Dependencies_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_DisplayName_3);
	marshaled.___m_DisplayName_3 = NULL;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_ObjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	{
		// public int ObjectId { get { return m_ObjectId; } }
		int32_t L_0 = __this->___m_ObjectId_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	{
		// public int Stream { get { return m_Stream; } }
		int32_t L_0 = __this->___m_Stream_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::get_Frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	{
		// public int Frame { get { return m_Frame; } }
		int32_t L_0 = __this->___m_Frame_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::.ctor(System.String,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0 (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, String_t* ___graph0, String_t* ___name1, int32_t ___id2, int32_t ___stream3, int32_t ___frame4, int32_t ___value5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___deps6, const RuntimeMethod* method) 
{
	{
		// m_Graph = graph;
		String_t* L_0 = ___graph0;
		__this->___m_Graph_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Graph_0), (void*)L_0);
		// m_DisplayName = name;
		String_t* L_1 = ___name1;
		__this->___m_DisplayName_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DisplayName_3), (void*)L_1);
		// m_ObjectId = id;
		int32_t L_2 = ___id2;
		__this->___m_ObjectId_2 = L_2;
		// m_Stream = stream;
		int32_t L_3 = ___stream3;
		__this->___m_Stream_4 = L_3;
		// m_Frame = frame;
		int32_t L_4 = ___frame4;
		__this->___m_Frame_5 = L_4;
		// m_Value = value;
		int32_t L_5 = ___value5;
		__this->___m_Value_6 = L_5;
		// m_Dependencies = deps;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___deps6;
		__this->___m_Dependencies_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dependencies_1), (void*)L_6);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0_AdjustorThunk (RuntimeObject* __this, String_t* ___graph0, String_t* ___name1, int32_t ___id2, int32_t ___stream3, int32_t ___frame4, int32_t ___value5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___deps6, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0(_thisAdjusted, ___graph0, ___name1, ___id2, ___stream3, ___frame4, ___value5, ___deps6, method);
}
// System.Byte[] UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent::Serialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Encoding.ASCII.GetBytes(JsonUtility.ToJson(this));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_1 = (*(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*)__this);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_2 = L_1;
		RuntimeObject* L_3 = Box(DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_3, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Guid UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::get_PlayerConnectionGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_mE56989BF7B4960ED343C6381AC15DF6A8056CECB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3____2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_editorConnectionGuid == Guid.Empty)
		Guid_t L_0 = ((DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var))->___s_editorConnectionGuid_5;
		Guid_t L_1 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		bool L_2;
		L_2 = Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// s_editorConnectionGuid = new Guid(1, 2, 3, new byte[] { 20, 1, 32, 32, 4, 9, 6, 44 });
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB595130FC3DA0E818D15EE47483147BC10A6AED3____2D2025322643CE1497D8FB03FA789F27E833CF43545CA1003AFEFEA250D39313_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		Guid_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB((&L_6), 1, (int16_t)2, (int16_t)3, L_4, /*hidden argument*/NULL);
		((DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var))->___s_editorConnectionGuid_5 = L_6;
	}

IL_002f:
	{
		// return s_editorConnectionGuid;
		Guid_t L_7 = ((DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_StaticFields*)il2cpp_codegen_static_fields_for(DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19_il2cpp_TypeInfo_var))->___s_editorConnectionGuid_5;
		return L_7;
	}
}
// System.String UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::GetGameObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DiagnosticEventCollectorSingleton_GetGameObjectName_m1361552A8D1AFD2282D01F14975908635A86D74D (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string GetGameObjectName() => "EventCollector";
		return _stringLiteral14BBDB35FE445BD30DA2EC66B3F2990406A34F10;
	}
}
// System.Boolean UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DiagnosticEventCollectorSingleton_RegisterEventHandler_mABDBB8E67CDC295A0AB4D089319C998F2A0B14D8 (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___handler0, bool ___register1, bool ___create2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (register && (create || Exists))
		bool L_0 = ___register1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = ___create2;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		bool L_2;
		L_2 = ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3(ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}

IL_000d:
	{
		// Instance.RegisterEventHandler(handler);
		DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* L_3;
		L_3 = ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576(ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576_RuntimeMethod_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_4 = ___handler0;
		NullCheck(L_3);
		DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA(L_3, L_4, NULL);
		// return true;
		return (bool)1;
	}

IL_001a:
	{
		// if (!register && Exists)
		bool L_5 = ___register1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		bool L_6;
		L_6 = ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3(ComponentSingleton_1_get_Exists_m54C8441926842DEC57CBF763E2AB1108F0E968E3_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// Instance.UnregisterEventHandler(handler);
		DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* L_7;
		L_7 = ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576(ComponentSingleton_1_get_Instance_m6AD2271EA4F3104CFA168133CB09F17094D78576_RuntimeMethod_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_8 = ___handler0;
		NullCheck(L_7);
		DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2(L_7, L_8, NULL);
	}

IL_002f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::RegisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAB2648EE576B6D345AED3A8F4BB4D41E9F58FFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// if (handler == null)
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_0 = ___handler0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("handler");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA_RuntimeMethod_var)));
	}

IL_000e:
	{
		// s_EventHandlers.Add(handler);
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_2 = __this->___s_EventHandlers_8;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_3 = ___handler0;
		NullCheck(L_2);
		DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8(L_2, L_3, DelegateList_1_Add_m3E459CACF29B9E9C97CD353322C3177C7CD129F8_RuntimeMethod_var);
		// var combinedAndSortedList = m_UnhandledEvents.Concat(m_CreatedEvents.Values).OrderBy(evt => evt.Frame);
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_4 = __this->___m_UnhandledEvents_7;
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_5 = __this->___m_CreatedEvents_6;
		NullCheck(L_5);
		ValueCollection_t4231960DE2FFBB109405B9AC8DA4CE93EFF2AF11* L_6;
		L_6 = Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520(L_5, Dictionary_2_get_Values_m54B5765DBECABC8382F2917C037323B3B83FB520_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73(L_4, L_6, Enumerable_Concat_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_m838E18B16E3CC058E2CF9DEE8F6B854893D3DC73_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_8 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* L_10 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_11 = (Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3*)il2cpp_codegen_object_new(Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_m25B26E462882E5D20E8E0A69EFF9D94B9AEBF4AA(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C_RuntimeMethod_var), NULL);
		Func_2_t136DBA50E926A84967E67704CB0AED266D692EF3* L_12 = L_11;
		((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_004f:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541(G_B4_1, G_B4_0, Enumerable_OrderBy_TisDiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CF538AB06AF65CB037ADDE957FFB89798F7B541_RuntimeMethod_var);
		// foreach (var evt in combinedAndSortedList)
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::GetEnumerator() */, IEnumerable_1_tDD9DF829266F558E94EC5986CD1208FFB246A018_il2cpp_TypeInfo_var, L_13);
		V_0 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_15 = V_0;
					if (!L_15)
					{
						goto IL_007d;
					}
				}
				{
					RuntimeObject* L_16 = V_0;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006a_1;
			}

IL_005c_1:
			{
				// foreach (var evt in combinedAndSortedList)
				RuntimeObject* L_17 = V_0;
				NullCheck(L_17);
				DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_18;
				L_18 = InterfaceFuncInvoker0< DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>::get_Current() */, IEnumerator_1_tAB2648EE576B6D345AED3A8F4BB4D41E9F58FFF0_il2cpp_TypeInfo_var, L_17);
				V_1 = L_18;
				// handler(evt);
				Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_19 = ___handler0;
				DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_20 = V_1;
				NullCheck(L_19);
				Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_inline(L_19, L_20, NULL);
			}

IL_006a_1:
			{
				// foreach (var evt in combinedAndSortedList)
				RuntimeObject* L_21 = V_0;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_005c_1;
				}
			}
			{
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		// m_UnhandledEvents.Clear();
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_23 = __this->___m_UnhandledEvents_7;
		NullCheck(L_23);
		List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_inline(L_23, List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::UnregisterEventHandler(System.Action`1<UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* ___handler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler == null)
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_0 = ___handler0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("handler");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DiagnosticEventCollectorSingleton_UnregisterEventHandler_m195CD42A740153DCC2387DC36511FB4FE36E5AF2_RuntimeMethod_var)));
	}

IL_000e:
	{
		// s_EventHandlers.Remove(handler);
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_2 = __this->___s_EventHandlers_8;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_3 = ___handler0;
		NullCheck(L_2);
		DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23(L_2, L_3, DelegateList_1_Remove_mFAFD47D0EC979EA6E063B0DB52060AD52F389C23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::PostEvent(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___diagnosticEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diagnosticEvent.Stream == (int)ResourceManager.DiagnosticEventType.AsyncOperationCreate && !m_CreatedEvents.ContainsKey(diagnosticEvent.ObjectId))
		int32_t L_0;
		L_0 = DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_inline((&___diagnosticEvent0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_1 = __this->___m_CreatedEvents_6;
		int32_t L_2;
		L_2 = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_inline((&___diagnosticEvent0), NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF(L_1, L_2, Dictionary_2_ContainsKey_m3F1556AFF05432EA1C35EE48E2C0D7A9216293FF_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		// m_CreatedEvents.Add(diagnosticEvent.ObjectId, diagnosticEvent);
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_4 = __this->___m_CreatedEvents_6;
		int32_t L_5;
		L_5 = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_inline((&___diagnosticEvent0), NULL);
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_6 = ___diagnosticEvent0;
		NullCheck(L_4);
		Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984(L_4, L_5, L_6, Dictionary_2_Add_mA30F6EF8D51BECC3FE45AFFD476B47A04A0E6984_RuntimeMethod_var);
		goto IL_0050;
	}

IL_0033:
	{
		// else if (diagnosticEvent.Stream == (int)ResourceManager.DiagnosticEventType.AsyncOperationDestroy)
		int32_t L_7;
		L_7 = DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_inline((&___diagnosticEvent0), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_0050;
		}
	}
	{
		// m_CreatedEvents.Remove(diagnosticEvent.ObjectId);
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_8 = __this->___m_CreatedEvents_6;
		int32_t L_9;
		L_9 = DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_inline((&___diagnosticEvent0), NULL);
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A(L_8, L_9, Dictionary_2_Remove_mC0498BC9E3720CFB6C1EAA4D0B44B7A666B2185A_RuntimeMethod_var);
	}

IL_0050:
	{
		// if (s_EventHandlers.Count > 0)
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_11 = __this->___s_EventHandlers_8;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65(L_11, DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		// s_EventHandlers.Invoke(diagnosticEvent);
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_13 = __this->___s_EventHandlers_8;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_14 = ___diagnosticEvent0;
		NullCheck(L_13);
		DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7(L_13, L_14, DelegateList_1_Invoke_m7E71EEC669399BB6A5B1F016ABA724EB4BA522A7_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// m_UnhandledEvents.Add(diagnosticEvent);
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_15 = __this->___m_UnhandledEvents_7;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_16 = ___diagnosticEvent0;
		NullCheck(L_15);
		List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_inline(L_15, L_16, List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_Awake_m123CE39CFC51D74A89D0EACF7DB3FC080FD07723 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* G_B2_0 = NULL;
	DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* G_B2_1 = NULL;
	Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* G_B1_0 = NULL;
	DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* G_B1_1 = NULL;
	{
		// RegisterEventHandler((DiagnosticEvent diagnosticEvent) => {PlayerConnection.instance.Send(DiagnosticEventCollectorSingleton.PlayerConnectionGuid, diagnosticEvent.Serialize()); });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_0 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* L_2 = ((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_3 = (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F*)il2cpp_codegen_object_new(Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m06B2E66413629515634D1103FC191FE010DB6B22(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73_RuntimeMethod_var), NULL);
		Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* L_4 = L_3;
		((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_2), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		DiagnosticEventCollectorSingleton_RegisterEventHandler_mBD7EB71E6D5A3B2D180D6B0E2163C47E7DE291BA(G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton_Update_m5EBCBD1D3BCD145D3EEB6460DA39FCC197354BD3 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F26E94CC0601B218A55F5373A646B776F7FDEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43DA1811FCD9FF890B2229A8C1CA4E836BE1BBA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95DAD4257816ED9B3D6718A6CBD69EFFCF321CAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE60521B1295D070924B7C7ECB78E460EE3EF7E9B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (s_EventHandlers.Count > 0)
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_0 = __this->___s_EventHandlers_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65(L_0, DelegateList_1_get_Count_m997D0EED8579CCBAF3EEB9FF0E242F8E41A5FF65_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		// var elapsed = Time.realtimeSinceStartup - m_lastTickSent;
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		float L_3 = __this->___m_lastTickSent_9;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// if (elapsed > .25f)
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(0.25f)))))
		{
			goto IL_00b3;
		}
	}
	{
		// var fps = (Time.frameCount - m_lastFrame) / elapsed;
		int32_t L_5;
		L_5 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		int32_t L_6 = __this->___m_lastFrame_10;
		float L_7 = V_0;
		V_1 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_5, L_6)))/L_7));
		// m_lastFrame = Time.frameCount;
		int32_t L_8;
		L_8 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		__this->___m_lastFrame_10 = L_8;
		// fpsAvg = (fpsAvg + fps) * .5f;
		float L_9 = __this->___fpsAvg_11;
		float L_10 = V_1;
		__this->___fpsAvg_11 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_9, L_10)), (0.5f)));
		// m_lastTickSent = Time.realtimeSinceStartup;
		float L_11;
		L_11 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		__this->___m_lastTickSent_9 = L_11;
		// int heapKB = (int)(Profiling.Profiler.GetMonoUsedSizeLong() / 1024);
		int64_t L_12;
		L_12 = Profiler_GetMonoUsedSizeLong_mCDD779E458BC852AF19E5A9299F87A82F64F95F6(NULL);
		V_2 = ((int32_t)((int64_t)(L_12/((int64_t)((int32_t)1024)))));
		// PostEvent(new DiagnosticEvent("FrameCount", "FPS", 2, 1, Time.frameCount, (int)fpsAvg, null));
		int32_t L_13;
		L_13 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		float L_14 = __this->___fpsAvg_11;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_15;
		memset((&L_15), 0, sizeof(L_15));
		DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0((&L_15), _stringLiteralE60521B1295D070924B7C7ECB78E460EE3EF7E9B, _stringLiteral95DAD4257816ED9B3D6718A6CBD69EFFCF321CAD, 2, 1, L_13, il2cpp_codegen_cast_double_to_int<int32_t>(L_14), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, /*hidden argument*/NULL);
		DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A(__this, L_15, NULL);
		// PostEvent(new DiagnosticEvent("MemoryCount", "MonoHeap", 3, 2, Time.frameCount, heapKB, null));
		int32_t L_16;
		L_16 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		int32_t L_17 = V_2;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DiagnosticEvent__ctor_mDF62B33ABFF1F33A4B39DF5C209B8238F2D529A0((&L_18), _stringLiteral22F26E94CC0601B218A55F5373A646B776F7FDEC, _stringLiteral43DA1811FCD9FF890B2229A8C1CA4E836BE1BBA1, 3, 2, L_16, L_17, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, /*hidden argument*/NULL);
		DiagnosticEventCollectorSingleton_PostEvent_m814E46059FF639B7B3E731E6F354778282DF5B2A(__this, L_18, NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticEventCollectorSingleton__ctor_m439DE5DDEF6D28BB4E48FF1A9FA7B3F100B41E03 (DiagnosticEventCollectorSingleton_t3BAFBCBD9C62D55E24000A0541ED109DA698EA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Dictionary<int, DiagnosticEvent> m_CreatedEvents = new Dictionary<int, DiagnosticEvent>();
		Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD* L_0 = (Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD*)il2cpp_codegen_object_new(Dictionary_2_tC9C4335706255DB79A60A03B819E7C3193A1E6BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A(L_0, Dictionary_2__ctor_m315FC05E431A5CB03DC47FAFB722AC3A0E641C3A_RuntimeMethod_var);
		__this->___m_CreatedEvents_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CreatedEvents_6), (void*)L_0);
		// internal List<DiagnosticEvent> m_UnhandledEvents = new List<DiagnosticEvent>();
		List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* L_1 = (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*)il2cpp_codegen_object_new(List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02(L_1, List_1__ctor_mEA50377FC2BC3CB5AA605E63AFB7F4B7A9B46A02_RuntimeMethod_var);
		__this->___m_UnhandledEvents_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnhandledEvents_7), (void*)L_1);
		// internal DelegateList<DiagnosticEvent> s_EventHandlers = DelegateList<DiagnosticEvent>.CreateWithGlobalCache();
		DelegateList_1_t64D442BD2F83AA33C1539469735361A9C49F9C6D* L_2;
		L_2 = DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57(DelegateList_1_CreateWithGlobalCache_m70E5DCD7F0E362B894D2741232DA45C9BF116B57_RuntimeMethod_var);
		__this->___s_EventHandlers_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_EventHandlers_8), (void*)L_2);
		// float fpsAvg = 30;
		__this->___fpsAvg_11 = (30.0f);
		ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339(__this, ComponentSingleton_1__ctor_m8278B3D96A270FC29C8C25774F9FFE38E4489339_RuntimeMethod_var);
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
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m07934E68A89731A65A2C286F0337FC9A8AAAC46D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* L_0 = (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7*)il2cpp_codegen_object_new(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m7E8AE3390AA2F226FD9AE66A810054796F6E3EF7(L_0, NULL);
		((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7E8AE3390AA2F226FD9AE66A810054796F6E3EF7 (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<RegisterEventHandler>b__8_0(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRegisterEventHandlerU3Eb__8_0_mA7621F2FC763736C0E5940EFF0C40BC79177573C (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___evt0, const RuntimeMethod* method) 
{
	{
		// var combinedAndSortedList = m_UnhandledEvents.Concat(m_CreatedEvents.Values).OrderBy(evt => evt.Frame);
		int32_t L_0;
		L_0 = DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B_inline((&___evt0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton/<>c::<Awake>b__11_0(UnityEngine.ResourceManagement.Diagnostics.DiagnosticEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__11_0_mC35442B113DAF4C3C790A4D17482F6CF5888FE73 (U3CU3Ec_t854FAF3C7DBD858A53E53BA5E1DE74F692E5D8A7* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___diagnosticEvent0, const RuntimeMethod* method) 
{
	{
		// RegisterEventHandler((DiagnosticEvent diagnosticEvent) => {PlayerConnection.instance.Send(DiagnosticEventCollectorSingleton.PlayerConnectionGuid, diagnosticEvent.Serialize()); });
		PlayerConnection_tE21E6206D6FC40F07B3842D83BCB0732C9244E53* L_0;
		L_0 = PlayerConnection_get_instance_m8F2B9C9F3AF41AC7A2FB617B5A700811E2444C14(NULL);
		Guid_t L_1;
		L_1 = DiagnosticEventCollectorSingleton_get_PlayerConnectionGuid_mE56989BF7B4960ED343C6381AC15DF6A8056CECB(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = DiagnosticEvent_Serialize_m6C00B0750960B7E23FB1DFE666C93DC3F5B0FF1A((&___diagnosticEvent0), NULL);
		NullCheck(L_0);
		PlayerConnection_Send_mBFE41D75C28DF0885455CE809D40C489818F91B7(L_0, L_1, L_2, NULL);
		// RegisterEventHandler((DiagnosticEvent diagnosticEvent) => {PlayerConnection.instance.Send(DiagnosticEventCollectorSingleton.PlayerConnectionGuid, diagnosticEvent.Serialize()); });
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
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_pinvoke_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_back(const AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D& unmarshaled)
{
	Exception_t* ___m_InternalOp_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_InternalOp' of type 'AsyncOperationHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_InternalOp_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
IL2CPP_EXTERN_C void AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshal_com_cleanup(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::set_LocationName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_LocationName = value; }
		String_t* L_0 = ___value0;
		__this->___m_LocationName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_0);
		// set { m_LocationName = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C_AdjustorThunk (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___op0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B2_0 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B3_1 = NULL;
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___op0;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = op?.Version ?? 0;
		RuntimeObject* L_1 = ___op0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___op0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_Version_1 = G_B3_0;
		// m_LocationName = null;
		__this->___m_LocationName_2 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)(String_t*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___op0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m68E6B69581AD8F879FE27693A96D6F36ABD3A264(_thisAdjusted, ___op0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___op0, String_t* ___locationName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B2_0 = NULL;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* G_B3_1 = NULL;
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___op0;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = op?.Version ?? 0;
		RuntimeObject* L_1 = ___op0;
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___op0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_Version_1 = G_B3_0;
		// m_LocationName = locationName;
		String_t* L_4 = ___locationName1;
		__this->___m_LocationName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___op0, String_t* ___locationName1, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_mC618D938157A14E87066933EF6757D73A2847E22(_thisAdjusted, ___op0, ___locationName1, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::.ctor(UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, RuntimeObject* ___op0, int32_t ___version1, String_t* ___locationName2, const RuntimeMethod* method) 
{
	{
		// m_InternalOp = op;
		RuntimeObject* L_0 = ___op0;
		__this->___m_InternalOp_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)L_0);
		// m_Version = version;
		int32_t L_1 = ___version1;
		__this->___m_Version_1 = L_1;
		// m_LocationName = locationName;
		String_t* L_2 = ___locationName2;
		__this->___m_LocationName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___op0, int32_t ___version1, String_t* ___locationName2, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle__ctor_m40A34479B55F7F00CB5DF17F1003A38B12D0A51A(_thisAdjusted, ___op0, ___version1, ___locationName2, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.IncrementReferenceCount();
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::IncrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		// return this;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_1 = (*(AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*)__this);
		return L_1;
	}
}
IL2CPP_EXTERN_C  AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D _returnValue;
	_returnValue = AsyncOperationHandle_Acquire_mDFD8D1733D45A5F9C20B3A49EA51891BE2C1435B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { InternalOp.CompletedTypeless += value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(13 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::add_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// add { InternalOp.CompletedTypeless += value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { InternalOp.CompletedTypeless -= value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(14 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::remove_CompletedTypeless(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// remove { InternalOp.CompletedTypeless -= value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_remove_Completed_m538FFC6655C8FB0600775FFFB998D9903478DB44(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Equals(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___other0, const RuntimeMethod* method) 
{
	{
		// return m_Version == other.m_Version && m_InternalOp == other.m_InternalOp;
		int32_t L_0 = __this->___m_Version_1;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_1 = ___other0;
		int32_t L_2 = L_1.___m_Version_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_3 = __this->___m_InternalOp_0;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_4 = ___other0;
		RuntimeObject* L_5 = L_4.___m_InternalOp_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186_AdjustorThunk (RuntimeObject* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___other0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_Equals_m496ACE1240F3D9550447E1930A1A426BF40CE186(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_DebugName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C1DC6627277EC19EEFC4AFAEB16D378918A3EAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsValid())
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return "InvalidHandle";
		return _stringLiteral1C1DC6627277EC19EEFC4AFAEB16D378918A3EAD;
	}

IL_000e:
	{
		// return InternalOp.DebugName;
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_DebugName() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AsyncOperationHandle_get_DebugName_m8DDB7ED8B735AFC69305907ED82F695ED9F9697E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add { InternalOp.Destroyed += value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(15 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::add_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// add { InternalOp.Destroyed += value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_add_Destroyed_m66F321AB085184936F570B4C3A1F9D66B1872C07(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove { InternalOp.Destroyed -= value; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* >::Invoke(16 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::remove_Destroyed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// remove { InternalOp.Destroyed -= value; }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9_AdjustorThunk (RuntimeObject* __this, Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___value0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_remove_Destroyed_m8755ED149C64A82AF2EF9710F0D9256163ED71C9(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___deps0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.GetDependencies(deps);
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = ___deps0;
		NullCheck(L_0);
		InterfaceActionInvoker1< List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* >::Invoke(11 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39_AdjustorThunk (RuntimeObject* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___deps0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_GetDependencies_m188E3F0A06DA1F789B431E3401D692AD14F45C39(_thisAdjusted, ___deps0, method);
}
// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// return m_InternalOp == null ? 0 : m_InternalOp.GetHashCode() * 17 + m_Version;
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		int32_t L_3 = __this->___m_Version_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)17))), L_3));
	}

IL_001e:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_GetHashCode_mA261FCCE8588545912EAD2AC611FADD3F104DF15(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_InternalOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_InternalOp == null || m_InternalOp.Version != m_Version)
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->___m_Version_1;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		// throw new Exception("Attempting to use an invalid operation handle");
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5545562CB57BB8E6D1204C7308B5206ED7661CE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_RuntimeMethod_var)));
	}

IL_0026:
	{
		// return m_InternalOp;
		RuntimeObject* L_5 = __this->___m_InternalOp_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return !IsValid() || InternalOp.IsDone; }
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_IsDone() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_InternalOp != null && m_InternalOp.Version == m_Version;
		RuntimeObject* L_0 = __this->___m_InternalOp_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = __this->___m_InternalOp_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Version() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = __this->___m_Version_1;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(_thisAdjusted, method);
	return _returnValue;
}
// System.Exception UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_OperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.OperationException; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = InterfaceFuncInvoker0< Exception_t* >::Invoke(8 /* System.Exception UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_OperationException() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Exception_t* AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	Exception_t* _returnValue;
	_returnValue = AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_PercentComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.PercentComplete; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(5 /* System.Single UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_PercentComplete() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	float _returnValue;
	_returnValue = AsyncOperationHandle_get_PercentComplete_mB5B48174489343D707D9E4A90BAFE24658D135EC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::InternalGetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___visited0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (visited == null)
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = ___visited0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// visited = new HashSet<object>();
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_1 = (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)il2cpp_codegen_object_new(HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E(L_1, HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_RuntimeMethod_var);
		___visited0 = L_1;
	}

IL_000a:
	{
		// return visited.Add(InternalOp) ? InternalOp.GetDownloadStatus(visited) : new DownloadStatus() { IsDone = IsDone };
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = ___visited0;
		RuntimeObject* L_3;
		L_3 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_2);
		bool L_4;
		L_4 = HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B(L_2, L_3, HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D));
		bool L_5;
		L_5 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(__this, NULL);
		(&V_0)->___IsDone_2 = L_5;
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_6 = V_0;
		return L_6;
	}

IL_002f:
	{
		RuntimeObject* L_7;
		L_7 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_8 = ___visited0;
		NullCheck(L_7);
		DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D L_9;
		L_9 = InterfaceFuncInvoker1< DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* >::Invoke(6 /* UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetDownloadStatus(System.Collections.Generic.HashSet`1<System.Object>) */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_7, L_8);
		return L_9;
	}
}
IL2CPP_EXTERN_C  DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C_AdjustorThunk (RuntimeObject* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___visited0, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D _returnValue;
	_returnValue = AsyncOperationHandle_InternalGetDownloadStatus_mC00D428E94E347EE6FCD224530016D1F9433B33C(_thisAdjusted, ___visited0, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InternalOp.DecrementReferenceCount();
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::DecrementReferenceCount() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		// m_InternalOp = null;
		__this->___m_InternalOp_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalOp_0), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_Release_mD4ADD2AA46F56753B12E0916FA2A739A3EBB5762(_thisAdjusted, method);
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.GetResultAsObject(); }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::GetResultAsObject() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return InternalOp.Status; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_Status() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// get { return Result; }
		RuntimeObject* L_0;
		L_0 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_System_Collections_IEnumerator_get_Current_mBAF3C14B4A6BD17BBBE6663D0061A1DD42E8FE37(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// return !IsDone;
		bool L_0;
		L_0 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationHandle_System_Collections_IEnumerator_MoveNext_m8A793FA1EEE2DAAD8B74F95FFEC60D94B9B8610E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	{
		// void IEnumerator.Reset() {}
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	AsyncOperationHandle_System_Collections_IEnumerator_Reset_m8921AB145EB1F53FD4352BE9E512505719FE6527(_thisAdjusted, method);
}
// System.Object UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::WaitForCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784 (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsValid() && !InternalOp.IsDone)
		bool L_0;
		L_0 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::get_IsDone() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// InternalOp.WaitForCompletion();
		RuntimeObject* L_3;
		L_3 = AsyncOperationHandle_get_InternalOp_m4EF5B7F816250889F1CB8917837E3A75B249396C(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(20 /* System.Void UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation::WaitForCompletion() */, IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C_il2cpp_TypeInfo_var, L_3);
	}

IL_0020:
	{
		// if (IsValid())
		bool L_4;
		L_4 = AsyncOperationHandle_IsValid_mC57B65EA4D8E084859EF42FD671EDA1E2ED46626(__this, NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// return Result;
		RuntimeObject* L_5;
		L_5 = AsyncOperationHandle_get_Result_mC319B351EAF9A8C76AAEB948BB3BC17F94AC9746(__this, NULL);
		return L_5;
	}

IL_002f:
	{
		// return null;
		return NULL;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = AsyncOperationHandle_WaitForCompletion_m4F5203EAAEAA1F724EA1220006A43E89A0951784(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled)
{
	marshaled.___TotalBytes_0 = unmarshaled.___TotalBytes_0;
	marshaled.___DownloadedBytes_1 = unmarshaled.___DownloadedBytes_1;
	marshaled.___IsDone_2 = static_cast<int32_t>(unmarshaled.___IsDone_2);
}
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke_back(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled)
{
	int64_t unmarshaledTotalBytes_temp_0 = 0;
	unmarshaledTotalBytes_temp_0 = marshaled.___TotalBytes_0;
	unmarshaled.___TotalBytes_0 = unmarshaledTotalBytes_temp_0;
	int64_t unmarshaledDownloadedBytes_temp_1 = 0;
	unmarshaledDownloadedBytes_temp_1 = marshaled.___DownloadedBytes_1;
	unmarshaled.___DownloadedBytes_1 = unmarshaledDownloadedBytes_temp_1;
	bool unmarshaledIsDone_temp_2 = false;
	unmarshaledIsDone_temp_2 = static_cast<bool>(marshaled.___IsDone_2);
	unmarshaled.___IsDone_2 = unmarshaledIsDone_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_pinvoke_cleanup(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled)
{
	marshaled.___TotalBytes_0 = unmarshaled.___TotalBytes_0;
	marshaled.___DownloadedBytes_1 = unmarshaled.___DownloadedBytes_1;
	marshaled.___IsDone_2 = static_cast<int32_t>(unmarshaled.___IsDone_2);
}
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com_back(const DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled, DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D& unmarshaled)
{
	int64_t unmarshaledTotalBytes_temp_0 = 0;
	unmarshaledTotalBytes_temp_0 = marshaled.___TotalBytes_0;
	unmarshaled.___TotalBytes_0 = unmarshaledTotalBytes_temp_0;
	int64_t unmarshaledDownloadedBytes_temp_1 = 0;
	unmarshaledDownloadedBytes_temp_1 = marshaled.___DownloadedBytes_1;
	unmarshaled.___DownloadedBytes_1 = unmarshaledDownloadedBytes_temp_1;
	bool unmarshaledIsDone_temp_2 = false;
	unmarshaledIsDone_temp_2 = static_cast<bool>(marshaled.___IsDone_2);
	unmarshaled.___IsDone_2 = unmarshaledIsDone_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
IL2CPP_EXTERN_C void DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshal_com_cleanup(DownloadStatus_t6815D0707E92EE606CBEF833625E158F2201F97D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ResourceManagement.Util.IOperationCacheKey UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroupOperation_UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key_mBE090D49C1F51ACDEB43492606BD9BEEC3E0DC43 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	{
		// IOperationCacheKey ICachable.Key { get; set; }
		RuntimeObject* L_0 = __this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key(UnityEngine.ResourceManagement.Util.IOperationCacheKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key_m45EACDDD26430787AC6D4D45297312F87B6BA59D (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// IOperationCacheKey ICachable.Key { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityEngine_ResourceManagement_AsyncOperations_ICachable_KeyU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::GetDependentOps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GroupOperation_GetDependentOps_m9FE0CB241C9F3630AA74C2C00539CECFD817B1D4 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Result;
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Execute_mDACD8D19DE8A2916CC5D12093AC39E7709C826DD (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_LoadedCount = 0;
		__this->___m_LoadedCount_18 = 0;
		// for (int i = 0; i < Result.Count; i++)
		V_0 = 0;
		goto IL_004f;
	}

IL_000b:
	{
		// if (Result[i].IsDone)
		RuntimeObject* L_0;
		L_0 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_2;
		L_2 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_0, L_1);
		V_1 = L_2;
		bool L_3;
		L_3 = AsyncOperationHandle_get_IsDone_m55E07BF92CC2979A9BBFD8F5B97DCCD52DA1326A((&V_1), NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// m_LoadedCount++;
		int32_t L_4 = __this->___m_LoadedCount_18;
		__this->___m_LoadedCount_18 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_004b;
	}

IL_0031:
	{
		// Result[i].Completed += m_InternalOnComplete;
		RuntimeObject* L_5;
		L_5 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_7;
		L_7 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_5, L_6);
		V_1 = L_7;
		Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* L_8 = __this->___m_InternalOnComplete_17;
		AsyncOperationHandle_add_Completed_mD5633623ADF00C97B6A1EE712E6654452F64B2E0((&V_1), L_8, NULL);
	}

IL_004b:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004f:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000b;
		}
	}
	{
		// CompleteIfDependenciesComplete();
		GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::CompleteIfDependenciesComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_CompleteIfDependenciesComplete_m0CBDC4B0BC6DEB0F32D2E9884F99D6EA4FBFD346 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* V_1 = NULL;
	int32_t V_2 = 0;
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (m_LoadedCount == Result.Count)
		int32_t L_0 = __this->___m_LoadedCount_18;
		RuntimeObject* L_1;
		L_1 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a6;
		}
	}
	{
		// bool success = true;
		V_0 = (bool)1;
		// OperationException ex = null;
		V_1 = (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434*)NULL;
		// if (!m_Settings.HasFlag(GroupOperationSettings.AllowFailedDependencies))
		int32_t L_3 = __this->___m_Settings_19;
		int32_t L_4 = L_3;
		int32_t L_5 = 2;
		bool L_6 = il2cpp_codegen_enum_has_flag((int32_t)L_4, (int32_t)L_5);
		if (L_6)
		{
			goto IL_0082;
		}
	}
	{
		// for (int i = 0; i < Result.Count; i++)
		V_2 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		// if (Result[i].Status != AsyncOperationStatus.Succeeded)
		RuntimeObject* L_7;
		L_7 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_9;
		L_9 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_7, L_8);
		V_3 = L_9;
		int32_t L_10;
		L_10 = AsyncOperationHandle_get_Status_mD5FB502808777A3C88880942DB9595C614CF9B0A((&V_3), NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		// success = false;
		V_0 = (bool)0;
		// ex = new OperationException("GroupOperation failed because one of its dependencies failed", Result[i].OperationException);
		RuntimeObject* L_11;
		L_11 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_13;
		L_13 = InterfaceFuncInvoker1< AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Item(System.Int32) */, IList_1_t51C927E4DB09F17222E3CE5A7157AB2B63CD87C4_il2cpp_TypeInfo_var, L_11, L_12);
		V_3 = L_13;
		Exception_t* L_14;
		L_14 = AsyncOperationHandle_get_OperationException_m531FC4DC2E215075C0EA7CE135FF1D68F6049270((&V_3), NULL);
		OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* L_15 = (OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434*)il2cpp_codegen_object_new(OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		OperationException__ctor_m86A0486864C0BBA58E2688D3FB650CAB1D616D59(L_15, _stringLiteral820BFB423CB8C20E825524A0B74585E3BEEC752B, L_14, NULL);
		V_1 = L_15;
		// break;
		goto IL_0082;
	}

IL_0070:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0074:
	{
		// for (int i = 0; i < Result.Count; i++)
		int32_t L_17 = V_2;
		RuntimeObject* L_18;
		L_18 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>::get_Count() */, ICollection_1_tFE50E9F177024FC262BCB55F9FE75FA6B7F04A1F_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0036;
		}
	}

IL_0082:
	{
		// Complete(Result, success, ex, m_Settings.HasFlag(GroupOperationSettings.ReleaseDependenciesOnFailure));
		RuntimeObject* L_20;
		L_20 = AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_inline(__this, AsyncOperationBase_1_get_Result_mD1906D342B78DCAF89178F222AEC2B1F069F4DCC_RuntimeMethod_var);
		bool L_21 = V_0;
		OperationException_tBE7C3C5A2004CA8911A76A92E37F3A50BEEF7434* L_22 = V_1;
		int32_t L_23 = __this->___m_Settings_19;
		int32_t L_24 = L_23;
		int32_t L_25 = 1;
		bool L_26 = il2cpp_codegen_enum_has_flag((int32_t)L_24, (int32_t)L_25);
		AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8(__this, L_20, L_21, L_22, L_26, AsyncOperationBase_1_Complete_m34BA93C8DD45D0DDA01AD80F3B3E13AD552B24C8_RuntimeMethod_var);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Init_m8C19E45ECB5A7DB7895A83EE0F918CEF60FD932E (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___operations0, bool ___releaseDependenciesOnFailure1, bool ___allowFailedDependencies2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* G_B2_0 = NULL;
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* G_B3_1 = NULL;
	{
		// Result = new List<AsyncOperationHandle>(operations);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_0 = ___operations0;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B(L_1, L_0, List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline(__this, L_1, AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		// m_Settings = releaseDependenciesOnFailure ? GroupOperationSettings.ReleaseDependenciesOnFailure : GroupOperationSettings.None;
		bool L_2 = ___releaseDependenciesOnFailure1;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_Settings_19 = G_B3_0;
		// if (allowFailedDependencies)
		bool L_3 = ___allowFailedDependencies2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// m_Settings |= GroupOperationSettings.AllowFailedDependencies;
		int32_t L_4 = __this->___m_Settings_19;
		__this->___m_Settings_19 = ((int32_t)((int32_t)L_4|2));
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.GroupOperation::Init(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>,UnityEngine.ResourceManagement.AsyncOperations.GroupOperation/GroupOperationSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroupOperation_Init_m63F2FE2DAA01637218A993C4008090339ECC1EC0 (GroupOperation_t692FDC0BD4B9466CF2744324BA28F41758B0F5DE* __this, List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* ___operations0, int32_t ___settings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Result = new List<AsyncOperationHandle>(operations);
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_0 = ___operations0;
		List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* L_1 = (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*)il2cpp_codegen_object_new(List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B(L_1, L_0, List_1__ctor_m279E5AA525FEFA2E8D2689C61D387586D5D7902B_RuntimeMethod_var);
		AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_inline(__this, L_1, AsyncOperationBase_1_set_Result_m0938D410B6037B8BF1AE34976DDC01534AF33371_RuntimeMethod_var);
		// m_Settings = settings;
		int32_t L_2 = ___settings1;
		__this->___m_Settings_19 = L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* ResourceManager_get_InternalIdTransformFunc_mF9E2EB179C238ED082683966C36F07EDC85F9087_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public Func<IResourceLocation, string> InternalIdTransformFunc { get; set; }
		Func_2_t4413089D739AA5DDB9D744DB3B447A0246563A86* L_0 = __this->___U3CInternalIdTransformFuncU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D DiagnosticEventContext_get_OperationHandle_mC766CD6C074CD2A0E3486FD41CE0B951B25B3FA6_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationHandle OperationHandle { get; }
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_0 = __this->___U3COperationHandleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_Type_mF65C73B3A0D1958041136121E877B4AF9ECFCEBB_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public DiagnosticEventType Type { get; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEventContext_get_EventValue_m1109E4CB1BFA64FEDC13FF72B293B68DA2D0A94F_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public int EventValue { get; }
		int32_t L_0 = __this->___U3CEventValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DiagnosticEventContext_get_Error_m1BCCCD62C4402CD13F6E0E071111AF0BEEA00BD3_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticEventContext_get_Context_m8DC1C15D121AD87B29AE6FAF53B6797221E2224B_inline (DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F* __this, const RuntimeMethod* method) 
{
	{
		// public object Context { get; }
		RuntimeObject* L_0 = __this->___U3CContextU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_get_ResourceProviders_mACBDB6BBAF95684D548E67073ED0067707D87A63_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public IList<IResourceProvider> ResourceProviders { get { return m_ResourceProviders; } }
		ListWithEvents_1_tE17E3C4786AF60909D570A474EDAB620896FF2FB* L_0 = __this->___m_ResourceProviders_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationHandle_set_LocationName_mA4DD8D02B510CD9974D1E5AAC4D34DD91575865C_inline (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_LocationName = value; }
		String_t* L_0 = ___value0;
		__this->___m_LocationName_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocationName_2), (void*)L_0);
		// set { m_LocationName = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResourceManager_get_Allocator_m2F215AF545EE1A8EEDEBFBFACA32D5E0B44A74B3_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public IAllocationStrategy Allocator { get { return m_allocator; } set { m_allocator = value; } }
		RuntimeObject* L_0 = __this->___m_allocator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 InstanceOperation_InstanceScene_m673A930720C94D7EC8618855441A78A4D2A576D2_inline (InstanceOperation_tF054C074A908493CDDDE0860971A9D25BF33E644* __this, const RuntimeMethod* method) 
{
	{
		// public Scene InstanceScene() => m_scene;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = __this->___m_scene_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnknownResourceProviderException_set_Location_mC4689284960B91DB49E674BDAF259530C3F4B421_inline (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IResourceLocation Location { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CLocationU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocationU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnknownResourceProviderException_get_Location_mC769291CC27D81B8573117354AB08E222DD68CF8_inline (UnknownResourceProviderException_t947D59512A3B4DAA23B858147402A3BA88C09A9E* __this, const RuntimeMethod* method) 
{
	{
		// public IResourceLocation Location { get; private set; }
		RuntimeObject* L_0 = __this->___U3CLocationU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* RemoteProviderException_get_WebRequestResult_mF80BDC58604D4D5C44AB968FA544CFD30C330954_inline (RemoteProviderException_t2A8F9C7A50DA4CD246613F28ED957C9F3C531131* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequestResult WebRequestResult { get; }
		UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* L_0 = __this->___U3CWebRequestResultU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ObjectInitializationData_get_Id_m8B020C841845122EF9123BD5E136F6A3FEC3496F_inline (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) 
{
	{
		// public string Id { get { return m_Id; } }
		String_t* L_0 = __this->___m_Id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 ObjectInitializationData_get_ObjectType_m7706EB3247D33B65F062CDEEB40792A27B8ABF69_inline (ObjectInitializationData_t78311D34B13F6FC91296EA33C601DB29CB8C84E3* __this, const RuntimeMethod* method) 
{
	{
		// public SerializedType ObjectType { get { return m_ObjectType; } }
		SerializedType_t1FB0F9A8B8F766AC18F067F0882CE74E0014C6F1 L_0 = __this->___m_ObjectType_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestResult_set_Error_mB8AB258796A2F29BB387F34222FFA59EA3431009_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Error { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CErrorU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityWebRequestResult_get_Result_mFA65ADAE33B5F1037C60A4F544F54800114B8DDA_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public UnityWebRequest.Result Result { get; }
		int32_t L_0 = __this->___U3CResultU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Error_m84C4381776A6467DE9CC4DB3797661F1519FBDF5_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; internal set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t UnityWebRequestResult_get_ResponseCode_m9587BFE958C864F3B4744E78890AE09C1E5CF3E2_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Method_m170F095C8F0E614D35EC882874DA221CF7FD372D_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public string Method { get; }
		String_t* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityWebRequestResult_get_Url_m692560D0BC25EA558272192CED8409364335F477_inline (UnityWebRequestResult_tA95EC7D19496D17A6F8A7630752E8FA47E706894* __this, const RuntimeMethod* method) 
{
	{
		// public string Url { get; }
		String_t* L_0 = __this->___U3CUrlU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* ProvideHandle_get_ResourceManager_m21C0C0B4C590B19E601BF83ACEA612EAF3B62262_inline (ProvideHandle_t784595962229824EBCC1B2D6B45B069C9A207631* __this, const RuntimeMethod* method) 
{
	{
		// return m_ResourceManager;
		ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* L_0 = __this->___m_ResourceManager_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneInstance_get_Scene_m4A9A4A43AFC047DD8FB2DF665C499A09296CBA58_inline (SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A* __this, const RuntimeMethod* method) 
{
	{
		// public Scene Scene { get { return m_Scene; } internal set { m_Scene = value; } }
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0 = __this->___m_Scene_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseInitAsyncOp_Init_mA692A84282503E756732EB5AED2D184E17C8896B_inline (BaseInitAsyncOp_tC34615845690A38C0F748CE658CC8027BCF3014C* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___callback0, const RuntimeMethod* method) 
{
	{
		// m_CallBack = callback;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ___callback0;
		__this->___m_CallBack_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CallBack_17), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ProviderLoadRequestOptions_get_IgnoreFailures_m38F1966139843C0C98C3598834A3BCCD9700962F_inline (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IgnoreFailures; }
		bool L_0 = __this->___m_IgnoreFailures_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProviderLoadRequestOptions_get_WebRequestTimeout_m81BA0608C118ECD1ED8AD0732A626E747418320B_inline (ProviderLoadRequestOptions_tE2D672727E1B830A09A054327E6E577528214D9F* __this, const RuntimeMethod* method) 
{
	{
		// get => m_WebRequestTimeout;
		int32_t L_0 = __this->___m_WebRequestTimeout_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TextDataProvider_get_IgnoreFailures_m8BC123BCDA3C358B9EF223382A5ABA14C41D8D61_inline (TextDataProvider_tFB2821575CC98C063182D19B39F7E835ED0092CF* __this, const RuntimeMethod* method) 
{
	{
		// public bool IgnoreFailures { get; set; }
		bool L_0 = __this->___U3CIgnoreFailuresU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* ResourceManager_get_WebRequestOverride_m5B5944646CCCFEC195AF713DC15F490EDA9EDC12_inline (ResourceManager_t23CA39B6F8FB4F38DFCA7F6FDAEE868D709C933D* __this, const RuntimeMethod* method) 
{
	{
		// public Action<UnityWebRequest> WebRequestOverride { get; set; }
		Action_1_t0E95DC34940318AD8F881CDBC38CCA5FDF0E5C70* L_0 = __this->___U3CWebRequestOverrideU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceLocationBase_get_DependencyHashCode_m9E0B40B30D210863CD93FF3B49931192022F7E86_inline (ResourceLocationBase_tC57CF36EE4D9FC7CE3765095C8D8F429F34419DF* __this, const RuntimeMethod* method) 
{
	{
		// public int DependencyHashCode { get { return m_DependencyHashCode; } }
		int32_t L_0 = __this->___m_DependencyHashCode_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_ObjectId_mF6D69C8148C581548D9CF4C21293F6A8300DAC75_inline (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	{
		// public int ObjectId { get { return m_ObjectId; } }
		int32_t L_0 = __this->___m_ObjectId_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Stream_mC79CA5D736C7CEBA931F272DA4F94BA8DED1BCF6_inline (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	{
		// public int Stream { get { return m_Stream; } }
		int32_t L_0 = __this->___m_Stream_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DiagnosticEvent_get_Frame_m3CC82F45DB1EA65234FF98A1E739FC40D303171B_inline (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274* __this, const RuntimeMethod* method) 
{
	{
		// public int Frame { get { return m_Frame; } }
		int32_t L_0 = __this->___m_Frame_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m17694F84F89B1CA877E7FB810A103007F960CC3E_gshared_inline (Action_1_tE6B50214BDF601CE8F2DAE23EBD61509FF480DC2* __this, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DiagnosticEventContext_tD6FFFE80ABEF14A1A535141596224C7AF837319F, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_m39604FFBE998E6D4F7BF665421372ED2E8F8A9B7_gshared_inline (Action_4_t51F78DA8E58156577593F6C422DEBEB7642D6F42* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___arg10, int32_t ___arg21, int32_t ___arg32, RuntimeObject* ___arg43, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAD1782419344B04D36CFECF62A116E94574A3413_gshared_inline (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843* __this, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___item0, const RuntimeMethod* method) 
{
	AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_1 = (AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		AsyncOperationHandleU5BU5D_t968CEAAAE58B36C9BDFD590CE6407374A8526562* L_6 = V_0;
		int32_t L_7 = V_1;
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D)L_8);
		return;
	}

IL_0034:
	{
		AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D L_9 = ___item0;
		((  void (*) (List_1_tD56BA8CDF3A23F08EFCFA8D94319A8A150F59843*, AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationBase_1_get_Result_mCCD9D27A9D37A11B520A6D95B4EB191835B8C368_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, const RuntimeMethod* method) 
{
	{
		// public TObject Result { get; set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CResultU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m7996D932EA8B1E14EB2A7F229C3C8F03FE4CEEE5_gshared_inline (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307* __this, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD ___item0, const RuntimeMethod* method) 
{
	DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* L_1 = (DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DeferredCallbackRegisterRequestU5BU5D_t9EE53271E1B9497444A02DA609314E924A546CE4* L_6 = V_0;
		int32_t L_7 = V_1;
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD)L_8);
		return;
	}

IL_0034:
	{
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_9 = ___item0;
		((  void (*) (List_1_t6F2A33FA3CBA05A74EE6F93DB2A8A81424997307*, DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD Enumerator_get_Current_m9471395F103D524184B9C3431F6720602406AC65_gshared_inline (Enumerator_tF731C1C8C26D93EBEF6F795C470F4E4F8FD61676* __this, const RuntimeMethod* method) 
{
	{
		DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD L_0 = (DeferredCallbackRegisterRequest_tA5BE4066185FD0EB6B33A28B02B58660CE4A22AD)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFAD2E8B344DDEDAC8E40E83616A8076B83831241_gshared_inline (Action_1_tA2A828A12168D2E827F3385FAC1C25CBD4DD5D8F* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD24A56BF888EF741DFE7EBDC8475ECE6F5A74237_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_3 = (DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB4257A2B4551959CAC74AAC14A4144D501D0A7D5_gshared_inline (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9* __this, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 ___item0, const RuntimeMethod* method) 
{
	DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_1 = (DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DiagnosticEventU5BU5D_t94E38C770CB7D8D3703DFD4FDDBC92FC4D473A95* L_6 = V_0;
		int32_t L_7 = V_1;
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274)L_8);
		return;
	}

IL_0034:
	{
		DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274 L_9 = ___item0;
		((  void (*) (List_1_tA0FCF59BD865D342654D506AE993E6610AFD34E9*, DiagnosticEvent_t33E1175DA005D137D20535AB25ACE16837A3A274, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperationBase_1_set_Result_m34F12D5AF676CCB4F67BBB1B2608F46833A59257_gshared_inline (AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public TObject Result { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
