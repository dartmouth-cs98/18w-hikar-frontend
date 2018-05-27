#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// SimpleJSON.JSONNode
struct JSONNode_t2946056997;
// System.String
struct String_t;
// SimpleJSON.JSONArray
struct JSONArray_t2340361630;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t123164443;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t3621052039;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t1925909886;
// SimpleJSON.JSONArray/<>c__Iterator0
struct U3CU3Ec__Iterator0_t2066799033;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1
struct U3CGetEnumeratorU3Ec__Iterator1_t1509986145;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.BinaryWriter
struct BinaryWriter_t3992595042;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t3378627465;
// SimpleJSON.JSONClass
struct JSONClass_t3407995562;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t2731313296;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerable_1_t4108838352;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t1510070208;
// SimpleJSON.JSONClass/<>c__Iterator0
struct U3CU3Ec__Iterator0_t3923513137;
// SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1
struct U3CGetEnumeratorU3Ec__Iterator1_t3954415084;
// SimpleJSON.JSONClass/<Remove>c__AnonStorey2
struct U3CRemoveU3Ec__AnonStorey2_t30177310;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t3505375296;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t1033609360;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_t2920988767;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// SimpleJSON.JSONData
struct JSONData_t174396811;
// SimpleJSON.JSONNode/<>c__Iterator0
struct U3CU3Ec__Iterator0_t2360448098;
// SimpleJSON.JSONNode/<>c__Iterator1
struct U3CU3Ec__Iterator1_t2360382562;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_t3789446452;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// System.Exception
struct Exception_t;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.FileInfo
struct FileInfo_t1169991790;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.IO.BinaryReader
struct BinaryReader_t2428077293;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t3535526568;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJSON.JSONNode,System.Collections.DictionaryEntry>
struct Transform_1_t2385938284;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;

extern RuntimeClass* List_1_t123164443_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2497635700_RuntimeMethod_var;
extern const uint32_t JSONArray__ctor_m1810447092_MetadataUsageId;
extern RuntimeClass* JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_get_Count_m4160179865_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1412457272_RuntimeMethod_var;
extern const uint32_t JSONArray_get_Item_m770505322_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1031575508_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m4256349914_RuntimeMethod_var;
extern const uint32_t JSONArray_set_Item_m2325276014_MetadataUsageId;
extern const uint32_t JSONArray_get_Item_m3275530059_MetadataUsageId;
extern const uint32_t JSONArray_set_Item_m3538304411_MetadataUsageId;
extern const uint32_t JSONArray_get_Count_m1674341146_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator0_t2066799033_il2cpp_TypeInfo_var;
extern const uint32_t JSONArray_get_Children_m1636733882_MetadataUsageId;
extern RuntimeClass* U3CGetEnumeratorU3Ec__Iterator1_t1509986145_il2cpp_TypeInfo_var;
extern const uint32_t JSONArray_GetEnumerator_m94191729_MetadataUsageId;
extern const uint32_t JSONArray_Add_m1638966007_MetadataUsageId;
extern const RuntimeMethod* List_1_RemoveAt_m3966380295_RuntimeMethod_var;
extern const uint32_t JSONArray_Remove_m649058450_MetadataUsageId;
extern const RuntimeMethod* List_1_Remove_m1859561057_RuntimeMethod_var;
extern const uint32_t JSONArray_Remove_m2844647652_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3335450781_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2446791353_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m667095019_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m721294528_RuntimeMethod_var;
extern String_t* _stringLiteral3450517493;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3458054016;
extern const uint32_t JSONArray_ToString_m3541723337_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3786055882;
extern String_t* _stringLiteral1810271860;
extern String_t* _stringLiteral3452614643;
extern const uint32_t JSONArray_ToString_m3325217421_MetadataUsageId;
extern const uint32_t JSONArray_Serialize_m842435626_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_MoveNext_m1389010882_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_Dispose_m995296339_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec__Iterator0_Reset_m926194436_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator1_MoveNext_m584005689_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator1_Dispose_m2873951205_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator1_Reset_m2306094002_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2731313296_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2635188939_RuntimeMethod_var;
extern const uint32_t JSONClass__ctor_m1396220219_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3745523859_RuntimeMethod_var;
extern const uint32_t JSONClass_get_Item_m3572165225_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_set_Item_m1416072037_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m4017966756_RuntimeMethod_var;
extern const uint32_t JSONClass_set_Item_m1720627626_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Count_m3623399773_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var;
extern const uint32_t JSONClass_get_Item_m1858644495_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var;
extern const uint32_t JSONClass_set_Item_m4015771883_MetadataUsageId;
extern const uint32_t JSONClass_get_Count_m1177034060_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator0_t3923513137_il2cpp_TypeInfo_var;
extern const uint32_t JSONClass_get_Children_m852674659_MetadataUsageId;
extern RuntimeClass* U3CGetEnumeratorU3Ec__Iterator1_t3954415084_il2cpp_TypeInfo_var;
extern const uint32_t JSONClass_GetEnumerator_m720239022_MetadataUsageId;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern const uint32_t JSONClass_Add_m2745972880_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2771669071_RuntimeMethod_var;
extern const uint32_t JSONClass_Remove_m3001669217_MetadataUsageId;
extern const uint32_t JSONClass_Remove_m2682239160_MetadataUsageId;
extern RuntimeClass* U3CRemoveU3Ec__AnonStorey2_t30177310_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3505375296_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CRemoveU3Ec__AnonStorey2_U3CU3Em__0_m446707295_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1138704236_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_t834018167_m3591967577_RuntimeMethod_var;
extern const uint32_t JSONClass_Remove_m2791934955_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m416358542_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m347499449_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1765329307_RuntimeMethod_var;
extern String_t* _stringLiteral3452614613;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3451959166;
extern String_t* _stringLiteral3452614611;
extern const uint32_t JSONClass_ToString_m8537715_MetadataUsageId;
extern String_t* _stringLiteral3450517461;
extern String_t* _stringLiteral2057739126;
extern const uint32_t JSONClass_ToString_m2763909907_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m3940207030_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m2653291907_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3970196056_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1781309907_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3927693234_RuntimeMethod_var;
extern const uint32_t JSONClass_Serialize_m1126338290_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_MoveNext_m1510656117_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_Dispose_m3102260061_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_Reset_m3571813557_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3294605149_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t834018167_il2cpp_TypeInfo_var;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator1_MoveNext_m1377051773_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator1_Dispose_m665225913_MetadataUsageId;
extern const uint32_t U3CGetEnumeratorU3Ec__Iterator1_Reset_m3169589123_MetadataUsageId;
extern const uint32_t U3CRemoveU3Ec__AnonStorey2_U3CU3Em__0_m446707295_MetadataUsageId;
extern String_t* _stringLiteral1202628576;
extern const uint32_t JSONData__ctor_m1359111335_MetadataUsageId;
extern const uint32_t JSONData_ToString_m2036497350_MetadataUsageId;
extern const uint32_t JSONData_ToString_m310963098_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_Item_m1604509049_MetadataUsageId;
extern RuntimeClass* JSONArray_t2340361630_il2cpp_TypeInfo_var;
extern const uint32_t JSONLazyCreator_set_Item_m2105688194_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_Item_m3899434704_MetadataUsageId;
extern RuntimeClass* JSONClass_t3407995562_il2cpp_TypeInfo_var;
extern const uint32_t JSONLazyCreator_set_Item_m2231982194_MetadataUsageId;
extern RuntimeClass* JSONData_t174396811_il2cpp_TypeInfo_var;
extern const uint32_t JSONLazyCreator_get_AsInt_m639509886_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsInt_m1252161255_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsLong_m1291925100_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsLong_m759719013_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsFloat_m3107782794_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsFloat_m3660787451_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsDouble_m1582721663_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsDouble_m2172386329_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsBool_m713101833_MetadataUsageId;
extern const uint32_t JSONLazyCreator_set_AsBool_m3560479934_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsArray_m1273817130_MetadataUsageId;
extern const uint32_t JSONLazyCreator_get_AsObject_m2838813368_MetadataUsageId;
extern const uint32_t JSONLazyCreator_Add_m1572478273_MetadataUsageId;
extern const uint32_t JSONLazyCreator_Add_m1239340615_MetadataUsageId;
extern const uint32_t JSONLazyCreator_ToString_m3745699412_MetadataUsageId;
extern const uint32_t JSONLazyCreator_ToString_m3556827564_MetadataUsageId;
extern const uint32_t JSONNode_get_Value_m1803583094_MetadataUsageId;
extern const uint32_t JSONNode_Add_m1559930036_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator0_t2360448098_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_Children_m3071153908_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__Iterator1_t2360382562_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_DeepChildren_m2537763012_MetadataUsageId;
extern String_t* _stringLiteral2793780527;
extern const uint32_t JSONNode_ToString_m3879752396_MetadataUsageId;
extern const uint32_t JSONNode_ToString_m572631385_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_set_AsInt_m3925067009_MetadataUsageId;
extern const uint32_t JSONNode_set_AsLong_m74205833_MetadataUsageId;
extern const uint32_t JSONNode_get_AsFloat_m1174173524_MetadataUsageId;
extern const uint32_t JSONNode_set_AsFloat_m3518333943_MetadataUsageId;
extern const uint32_t JSONNode_get_AsDouble_m3335246132_MetadataUsageId;
extern const uint32_t JSONNode_set_AsDouble_m2583247575_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_get_AsBool_m4176397070_MetadataUsageId;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t JSONNode_set_AsBool_m3057475042_MetadataUsageId;
extern const uint32_t JSONNode_get_AsArray_m715902207_MetadataUsageId;
extern const uint32_t JSONNode_get_AsObject_m286744477_MetadataUsageId;
extern const uint32_t JSONNode_op_Implicit_m2523080653_MetadataUsageId;
extern const uint32_t JSONNode_op_Equality_m2227562659_MetadataUsageId;
extern String_t* _stringLiteral3450583028;
extern String_t* _stringLiteral3458119668;
extern String_t* _stringLiteral3450386420;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3454318580;
extern const uint32_t JSONNode_Escape_m3387382048_MetadataUsageId;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_Numberize_m3221440353_MetadataUsageId;
extern const uint32_t JSONNode_AddElement_m1646164213_MetadataUsageId;
extern RuntimeClass* Stack_1_t3789446452_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m2409004951_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m1161466254_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_m3040978591_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_get_Count_m288158433_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m4204993319_RuntimeMethod_var;
extern String_t* _stringLiteral3600160164;
extern String_t* _stringLiteral2520869023;
extern String_t* _stringLiteral2962742473;
extern String_t* _stringLiteral4214229893;
extern String_t* _stringLiteral2362785171;
extern const uint32_t JSONNode_Parse_m883557124_MetadataUsageId;
extern RuntimeClass* BinaryWriter_t3992595042_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_SaveToStream_m416890596_MetadataUsageId;
extern String_t* _stringLiteral3373200493;
extern const uint32_t JSONNode_SaveToCompressedStream_m2127353253_MetadataUsageId;
extern const uint32_t JSONNode_SaveToCompressedFile_m1574216136_MetadataUsageId;
extern const uint32_t JSONNode_SaveToCompressedBase64_m2429603569_MetadataUsageId;
extern RuntimeClass* FileInfo_t1169991790_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_SaveToFile_m2435109258_MetadataUsageId;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_SaveToBase64_m1405157809_MetadataUsageId;
extern String_t* _stringLiteral3308483698;
extern const uint32_t JSONNode_Deserialize_m280376878_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromCompressedFile_m1190016295_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromCompressedStream_m2944368907_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromCompressedBase64_m515598289_MetadataUsageId;
extern RuntimeClass* BinaryReader_t2428077293_il2cpp_TypeInfo_var;
extern const uint32_t JSONNode_LoadFromStream_m750673342_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromFile_m2470411988_MetadataUsageId;
extern const uint32_t JSONNode_LoadFromBase64_m1319289953_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_Reset_m3539192766_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1925909886_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3378627465_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t U3CU3Ec__Iterator1_MoveNext_m3186589243_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator1_Dispose_m1364031124_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator1_Reset_m3127036862_MetadataUsageId;
extern const uint32_t U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745557_H
#define U3CMODULEU3E_T692745557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745557 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745557_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T2731313296_H
#define DICTIONARY_2_T2731313296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct  Dictionary_2_t2731313296  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	JSONNodeU5BU5D_t3535526568* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___valueSlots_7)); }
	inline JSONNodeU5BU5D_t3535526568* get_valueSlots_7() const { return ___valueSlots_7; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(JSONNodeU5BU5D_t3535526568* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2731313296_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2385938284 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2731313296_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2385938284 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2385938284 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2385938284 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2731313296_H
#ifndef BINARYREADER_T2428077293_H
#define BINARYREADER_T2428077293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t2428077293  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1273022909 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t1523322056 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t4116647657* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t2204182725 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t3528271667* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_stream_0)); }
	inline Stream_t1273022909 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t1273022909 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t1273022909 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_encoding_1() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_encoding_1)); }
	inline Encoding_t1523322056 * get_m_encoding_1() const { return ___m_encoding_1; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_1() { return &___m_encoding_1; }
	inline void set_m_encoding_1(Encoding_t1523322056 * value)
	{
		___m_encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_1), value);
	}

	inline static int32_t get_offset_of_m_buffer_2() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_m_buffer_2() const { return ___m_buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_buffer_2() { return &___m_buffer_2; }
	inline void set_m_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___m_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoder_3() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___decoder_3)); }
	inline Decoder_t2204182725 * get_decoder_3() const { return ___decoder_3; }
	inline Decoder_t2204182725 ** get_address_of_decoder_3() { return &___decoder_3; }
	inline void set_decoder_3(Decoder_t2204182725 * value)
	{
		___decoder_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_3), value);
	}

	inline static int32_t get_offset_of_charBuffer_4() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___charBuffer_4)); }
	inline CharU5BU5D_t3528271667* get_charBuffer_4() const { return ___charBuffer_4; }
	inline CharU5BU5D_t3528271667** get_address_of_charBuffer_4() { return &___charBuffer_4; }
	inline void set_charBuffer_4(CharU5BU5D_t3528271667* value)
	{
		___charBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___charBuffer_4), value);
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T2428077293_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BINARYWRITER_T3992595042_H
#define BINARYWRITER_T3992595042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t3992595042  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t1273022909 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t4116647657* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___OutStream_1)); }
	inline Stream_t1273022909 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t1273022909 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t1273022909 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___stringBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuffer_5), value);
	}

	inline static int32_t get_offset_of_maxCharsPerRound_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___maxCharsPerRound_6)); }
	inline int32_t get_maxCharsPerRound_6() const { return ___maxCharsPerRound_6; }
	inline int32_t* get_address_of_maxCharsPerRound_6() { return &___maxCharsPerRound_6; }
	inline void set_maxCharsPerRound_6(int32_t value)
	{
		___maxCharsPerRound_6 = value;
	}
};

struct BinaryWriter_t3992595042_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t3992595042 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042_StaticFields, ___Null_0)); }
	inline BinaryWriter_t3992595042 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t3992595042 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t3992595042 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T3992595042_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef U3CU3EC__ITERATOR1_T2360382562_H
#define U3CU3EC__ITERATOR1_T2360382562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/<>c__Iterator1
struct  U3CU3Ec__Iterator1_t2360382562  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::$locvar0
	RuntimeObject* ___U24locvar0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::<C>__1
	JSONNode_t2946056997 * ___U3CCU3E__1_1;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::$locvar1
	RuntimeObject* ___U24locvar1_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::<D>__2
	JSONNode_t2946056997 * ___U3CDU3E__2_3;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::$this
	JSONNode_t2946056997 * ___U24this_4;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::$current
	JSONNode_t2946056997 * ___U24current_5;
	// System.Boolean SimpleJSON.JSONNode/<>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 SimpleJSON.JSONNode/<>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24locvar0_0)); }
	inline RuntimeObject* get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline RuntimeObject** get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(RuntimeObject* value)
	{
		___U24locvar0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_0), value);
	}

	inline static int32_t get_offset_of_U3CCU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U3CCU3E__1_1)); }
	inline JSONNode_t2946056997 * get_U3CCU3E__1_1() const { return ___U3CCU3E__1_1; }
	inline JSONNode_t2946056997 ** get_address_of_U3CCU3E__1_1() { return &___U3CCU3E__1_1; }
	inline void set_U3CCU3E__1_1(JSONNode_t2946056997 * value)
	{
		___U3CCU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24locvar1_2)); }
	inline RuntimeObject* get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline RuntimeObject** get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(RuntimeObject* value)
	{
		___U24locvar1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar1_2), value);
	}

	inline static int32_t get_offset_of_U3CDU3E__2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U3CDU3E__2_3)); }
	inline JSONNode_t2946056997 * get_U3CDU3E__2_3() const { return ___U3CDU3E__2_3; }
	inline JSONNode_t2946056997 ** get_address_of_U3CDU3E__2_3() { return &___U3CDU3E__2_3; }
	inline void set_U3CDU3E__2_3(JSONNode_t2946056997 * value)
	{
		___U3CDU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24this_4)); }
	inline JSONNode_t2946056997 * get_U24this_4() const { return ___U24this_4; }
	inline JSONNode_t2946056997 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(JSONNode_t2946056997 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24current_5)); }
	inline JSONNode_t2946056997 * get_U24current_5() const { return ___U24current_5; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(JSONNode_t2946056997 * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator1_t2360382562, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR1_T2360382562_H
#ifndef KEYCOLLECTION_T2920988767_H
#define KEYCOLLECTION_T2920988767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct  KeyCollection_t2920988767  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t2731313296 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2920988767, ___dictionary_0)); }
	inline Dictionary_2_t2731313296 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2731313296 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2731313296 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2920988767_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef STACK_1_T3789446452_H
#define STACK_1_T3789446452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct  Stack_1_t3789446452  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	JSONNodeU5BU5D_t3535526568* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3789446452, ____array_0)); }
	inline JSONNodeU5BU5D_t3535526568* get__array_0() const { return ____array_0; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(JSONNodeU5BU5D_t3535526568* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3789446452, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3789446452, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3789446452_H
#ifndef U3CREMOVEU3EC__ANONSTOREY2_T30177310_H
#define U3CREMOVEU3EC__ANONSTOREY2_T30177310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONClass/<Remove>c__AnonStorey2
struct  U3CRemoveU3Ec__AnonStorey2_t30177310  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONClass/<Remove>c__AnonStorey2::aNode
	JSONNode_t2946056997 * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ec__AnonStorey2_t30177310, ___aNode_0)); }
	inline JSONNode_t2946056997 * get_aNode_0() const { return ___aNode_0; }
	inline JSONNode_t2946056997 ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(JSONNode_t2946056997 * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((&___aNode_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREMOVEU3EC__ANONSTOREY2_T30177310_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef U3CU3EC__ITERATOR0_T2360448098_H
#define U3CU3EC__ITERATOR0_T2360448098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2360448098  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::$current
	JSONNode_t2946056997 * ___U24current_0;
	// System.Boolean SimpleJSON.JSONNode/<>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 SimpleJSON.JSONNode/<>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2360448098, ___U24current_0)); }
	inline JSONNode_t2946056997 * get_U24current_0() const { return ___U24current_0; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(JSONNode_t2946056997 * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2360448098, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2360448098, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T2360448098_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef JSON_T1924642173_H
#define JSON_T1924642173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSON
struct  JSON_t1924642173  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T1924642173_H
#ifndef LIST_1_T123164443_H
#define LIST_1_T123164443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct  List_1_t123164443  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_t3535526568* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t123164443, ____items_1)); }
	inline JSONNodeU5BU5D_t3535526568* get__items_1() const { return ____items_1; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONNodeU5BU5D_t3535526568* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t123164443, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t123164443, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t123164443_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	JSONNodeU5BU5D_t3535526568* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t123164443_StaticFields, ___EmptyArray_4)); }
	inline JSONNodeU5BU5D_t3535526568* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline JSONNodeU5BU5D_t3535526568** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(JSONNodeU5BU5D_t3535526568* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T123164443_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef ENUMERATOR_T2012408320_H
#define ENUMERATOR_T2012408320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct  Enumerator_t2012408320 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t123164443 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JSONNode_t2946056997 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___l_0)); }
	inline List_1_t123164443 * get_l_0() const { return ___l_0; }
	inline List_1_t123164443 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t123164443 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2012408320, ___current_3)); }
	inline JSONNode_t2946056997 * get_current_3() const { return ___current_3; }
	inline JSONNode_t2946056997 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JSONNode_t2946056997 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2012408320_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T834018167_H
#define KEYVALUEPAIR_2_T834018167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct  KeyValuePair_2_t834018167 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t2946056997 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t834018167, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t834018167, ___value_1)); }
	inline JSONNode_t2946056997 * get_value_1() const { return ___value_1; }
	inline JSONNode_t2946056997 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t2946056997 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T834018167_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERSTYLES_T617258130_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef U3CU3EC__ITERATOR0_T2066799033_H
#define U3CU3EC__ITERATOR0_T2066799033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2066799033  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::$locvar0
	Enumerator_t2012408320  ___U24locvar0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::<node>__1
	JSONNode_t2946056997 * ___U3CnodeU3E__1_1;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<>c__Iterator0::$this
	JSONArray_t2340361630 * ___U24this_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::$current
	JSONNode_t2946056997 * ___U24current_3;
	// System.Boolean SimpleJSON.JSONArray/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONArray/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24locvar0_0)); }
	inline Enumerator_t2012408320  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t2012408320 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t2012408320  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CnodeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U3CnodeU3E__1_1)); }
	inline JSONNode_t2946056997 * get_U3CnodeU3E__1_1() const { return ___U3CnodeU3E__1_1; }
	inline JSONNode_t2946056997 ** get_address_of_U3CnodeU3E__1_1() { return &___U3CnodeU3E__1_1; }
	inline void set_U3CnodeU3E__1_1(JSONNode_t2946056997 * value)
	{
		___U3CnodeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnodeU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24this_2)); }
	inline JSONArray_t2340361630 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t2340361630 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t2340361630 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24current_3)); }
	inline JSONNode_t2946056997 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t2946056997 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2066799033, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T2066799033_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T1509986145_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T1509986145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t1509986145  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t2012408320  ___U24locvar0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::<node>__1
	JSONNode_t2946056997 * ___U3CnodeU3E__1_1;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::$this
	JSONArray_t2340361630 * ___U24this_2;
	// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1509986145, ___U24locvar0_0)); }
	inline Enumerator_t2012408320  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t2012408320 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t2012408320  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CnodeU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1509986145, ___U3CnodeU3E__1_1)); }
	inline JSONNode_t2946056997 * get_U3CnodeU3E__1_1() const { return ___U3CnodeU3E__1_1; }
	inline JSONNode_t2946056997 ** get_address_of_U3CnodeU3E__1_1() { return &___U3CnodeU3E__1_1; }
	inline void set_U3CnodeU3E__1_1(JSONNode_t2946056997 * value)
	{
		___U3CnodeU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnodeU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1509986145, ___U24this_2)); }
	inline JSONArray_t2340361630 * get_U24this_2() const { return ___U24this_2; }
	inline JSONArray_t2340361630 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONArray_t2340361630 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1509986145, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1509986145, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1509986145, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T1509986145_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef JSONBINARYTAG_T2761681291_H
#define JSONBINARYTAG_T2761681291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONBinaryTag
struct  JSONBinaryTag_t2761681291 
{
public:
	// System.Int32 SimpleJSON.JSONBinaryTag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JSONBinaryTag_t2761681291, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONBINARYTAG_T2761681291_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T390528775_H
#define ENUMERATOR_T390528775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct  Enumerator_t390528775 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t2731313296 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t834018167  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___dictionary_0)); }
	inline Dictionary_2_t2731313296 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2731313296 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2731313296 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t390528775, ___current_3)); }
	inline KeyValuePair_2_t834018167  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t834018167 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t834018167  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T390528775_H
#ifndef U3CU3EC__ITERATOR0_T3923513137_H
#define U3CU3EC__ITERATOR0_T3923513137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONClass/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t3923513137  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator0::$locvar0
	Enumerator_t390528775  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator0::<nodePair>__1
	KeyValuePair_2_t834018167  ___U3CnodePairU3E__1_1;
	// SimpleJSON.JSONClass SimpleJSON.JSONClass/<>c__Iterator0::$this
	JSONClass_t3407995562 * ___U24this_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONClass/<>c__Iterator0::$current
	JSONNode_t2946056997 * ___U24current_3;
	// System.Boolean SimpleJSON.JSONClass/<>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONClass/<>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3923513137, ___U24locvar0_0)); }
	inline Enumerator_t390528775  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t390528775 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t390528775  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CnodePairU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3923513137, ___U3CnodePairU3E__1_1)); }
	inline KeyValuePair_2_t834018167  get_U3CnodePairU3E__1_1() const { return ___U3CnodePairU3E__1_1; }
	inline KeyValuePair_2_t834018167 * get_address_of_U3CnodePairU3E__1_1() { return &___U3CnodePairU3E__1_1; }
	inline void set_U3CnodePairU3E__1_1(KeyValuePair_2_t834018167  value)
	{
		___U3CnodePairU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3923513137, ___U24this_2)); }
	inline JSONClass_t3407995562 * get_U24this_2() const { return ___U24this_2; }
	inline JSONClass_t3407995562 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONClass_t3407995562 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3923513137, ___U24current_3)); }
	inline JSONNode_t2946056997 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t2946056997 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t2946056997 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3923513137, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t3923513137, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR0_T3923513137_H
#ifndef ENUMERATOR_T314722136_H
#define ENUMERATOR_T314722136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t314722136 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t314722136, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T314722136_H
#ifndef ENUMERATOR_T2913490280_H
#define ENUMERATOR_T2913490280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
struct  Enumerator_t2913490280 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t390528775  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t2913490280, ___host_enumerator_0)); }
	inline Enumerator_t390528775  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t390528775 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t390528775  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2913490280_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T3954415084_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T3954415084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t3954415084  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::$locvar0
	Enumerator_t390528775  ___U24locvar0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::<nodePair>__1
	KeyValuePair_2_t834018167  ___U3CnodePairU3E__1_1;
	// SimpleJSON.JSONClass SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::$this
	JSONClass_t3407995562 * ___U24this_2;
	// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U24locvar0_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t3954415084, ___U24locvar0_0)); }
	inline Enumerator_t390528775  get_U24locvar0_0() const { return ___U24locvar0_0; }
	inline Enumerator_t390528775 * get_address_of_U24locvar0_0() { return &___U24locvar0_0; }
	inline void set_U24locvar0_0(Enumerator_t390528775  value)
	{
		___U24locvar0_0 = value;
	}

	inline static int32_t get_offset_of_U3CnodePairU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t3954415084, ___U3CnodePairU3E__1_1)); }
	inline KeyValuePair_2_t834018167  get_U3CnodePairU3E__1_1() const { return ___U3CnodePairU3E__1_1; }
	inline KeyValuePair_2_t834018167 * get_address_of_U3CnodePairU3E__1_1() { return &___U3CnodePairU3E__1_1; }
	inline void set_U3CnodePairU3E__1_1(KeyValuePair_2_t834018167  value)
	{
		___U3CnodePairU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t3954415084, ___U24this_2)); }
	inline JSONClass_t3407995562 * get_U24this_2() const { return ___U24this_2; }
	inline JSONClass_t3407995562 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(JSONClass_t3407995562 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t3954415084, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t3954415084, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t3954415084, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T3954415084_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef JSONNODE_T2946056997_H
#define JSONNODE_T2946056997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode
struct  JSONNode_t2946056997  : public RuntimeObject
{
public:
	// SimpleJSON.JSONBinaryTag SimpleJSON.JSONNode::<Tag>k__BackingField
	int32_t ___U3CTagU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JSONNode_t2946056997, ___U3CTagU3Ek__BackingField_0)); }
	inline int32_t get_U3CTagU3Ek__BackingField_0() const { return ___U3CTagU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CTagU3Ek__BackingField_0() { return &___U3CTagU3Ek__BackingField_0; }
	inline void set_U3CTagU3Ek__BackingField_0(int32_t value)
	{
		___U3CTagU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONNODE_T2946056997_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef JSONARRAY_T2340361630_H
#define JSONARRAY_T2340361630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray
struct  JSONArray_t2340361630  : public JSONNode_t2946056997
{
public:
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::_nodeList
	List_1_t123164443 * ____nodeList_1;

public:
	inline static int32_t get_offset_of__nodeList_1() { return static_cast<int32_t>(offsetof(JSONArray_t2340361630, ____nodeList_1)); }
	inline List_1_t123164443 * get__nodeList_1() const { return ____nodeList_1; }
	inline List_1_t123164443 ** get_address_of__nodeList_1() { return &____nodeList_1; }
	inline void set__nodeList_1(List_1_t123164443 * value)
	{
		____nodeList_1 = value;
		Il2CppCodeGenWriteBarrier((&____nodeList_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONARRAY_T2340361630_H
#ifndef JSONLAZYCREATOR_T3621052039_H
#define JSONLAZYCREATOR_T3621052039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONLazyCreator
struct  JSONLazyCreator_t3621052039  : public JSONNode_t2946056997
{
public:
	// System.String SimpleJSON.JSONLazyCreator::_key
	String_t* ____key_1;
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::_node
	JSONNode_t2946056997 * ____node_2;

public:
	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3621052039, ____key_1)); }
	inline String_t* get__key_1() const { return ____key_1; }
	inline String_t** get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(String_t* value)
	{
		____key_1 = value;
		Il2CppCodeGenWriteBarrier((&____key_1), value);
	}

	inline static int32_t get_offset_of__node_2() { return static_cast<int32_t>(offsetof(JSONLazyCreator_t3621052039, ____node_2)); }
	inline JSONNode_t2946056997 * get__node_2() const { return ____node_2; }
	inline JSONNode_t2946056997 ** get_address_of__node_2() { return &____node_2; }
	inline void set__node_2(JSONNode_t2946056997 * value)
	{
		____node_2 = value;
		Il2CppCodeGenWriteBarrier((&____node_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONLAZYCREATOR_T3621052039_H
#ifndef JSONDATA_T174396811_H
#define JSONDATA_T174396811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONData
struct  JSONData_t174396811  : public JSONNode_t2946056997
{
public:
	// System.String SimpleJSON.JSONData::_data
	String_t* ____data_1;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(JSONData_t174396811, ____data_1)); }
	inline String_t* get__data_1() const { return ____data_1; }
	inline String_t** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(String_t* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((&____data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONDATA_T174396811_H
#ifndef FUNC_2_T3505375296_H
#define FUNC_2_T3505375296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct  Func_2_t3505375296  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3505375296_H
#ifndef JSONCLASS_T3407995562_H
#define JSONCLASS_T3407995562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONClass
struct  JSONClass_t3407995562  : public JSONNode_t2946056997
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass::_nodeDict
	Dictionary_2_t2731313296 * ____nodeDict_1;

public:
	inline static int32_t get_offset_of__nodeDict_1() { return static_cast<int32_t>(offsetof(JSONClass_t3407995562, ____nodeDict_1)); }
	inline Dictionary_2_t2731313296 * get__nodeDict_1() const { return ____nodeDict_1; }
	inline Dictionary_2_t2731313296 ** get_address_of__nodeDict_1() { return &____nodeDict_1; }
	inline void set__nodeDict_1(Dictionary_2_t2731313296 * value)
	{
		____nodeDict_1 = value;
		Il2CppCodeGenWriteBarrier((&____nodeDict_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONCLASS_T3407995562_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
#ifndef FILEINFO_T1169991790_H
#define FILEINFO_T1169991790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileInfo
struct  FileInfo_t1169991790  : public FileSystemInfo_t3745885336
{
public:
	// System.Boolean System.IO.FileInfo::exists
	bool ___exists_5;

public:
	inline static int32_t get_offset_of_exists_5() { return static_cast<int32_t>(offsetof(FileInfo_t1169991790, ___exists_5)); }
	inline bool get_exists_5() const { return ___exists_5; }
	inline bool* get_address_of_exists_5() { return &___exists_5; }
	inline void set_exists_5(bool value)
	{
		___exists_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEINFO_T1169991790_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C"  bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C"  KeyValuePair_2_t2530217319  Enumerable_ElementAt_TisKeyValuePair_2_t2530217319_m1306417333_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1809414358_gshared (Func_2_t1033609360 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  KeyValuePair_2_t2530217319  Enumerable_First_TisKeyValuePair_2_t2530217319_m4229752576_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t1033609360 * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t314722136  KeyCollection_GetEnumerator_m982770428_gshared (KeyCollection_t322220623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m3687673883_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m76191888_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m260444170_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C"  void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C"  RuntimeObject * Stack_1_Peek_m326384648_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);

// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_Parse_m883557124 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
#define List_1__ctor_m2497635700(__this, method) ((  void (*) (List_1_t123164443 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m4108532860 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
#define List_1_get_Count_m4160179865(__this, method) ((  int32_t (*) (List_1_t123164443 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m4143221426 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
#define List_1_get_Item_m1412457272(__this, p0, method) ((  JSONNode_t2946056997 * (*) (List_1_t123164443 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0)
#define List_1_Add_m1031575508(__this, p0, method) ((  void (*) (List_1_t123164443 *, JSONNode_t2946056997 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,!0)
#define List_1_set_Item_m4256349914(__this, p0, p1, method) ((  void (*) (List_1_t123164443 *, int32_t, JSONNode_t2946056997 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method)
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m1141181736 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1__ctor_m4258361747 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m3966380295(__this, p0, method) ((  void (*) (List_1_t123164443 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(!0)
#define List_1_Remove_m1859561057(__this, p0, method) ((  bool (*) (List_1_t123164443 *, JSONNode_t2946056997 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method)
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C"  void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
#define List_1_GetEnumerator_m3335450781(__this, method) ((  Enumerator_t2012408320  (*) (List_1_t123164443 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::get_Current()
#define Enumerator_get_Current_m2446791353(__this, method) ((  JSONNode_t2946056997 * (*) (Enumerator_t2012408320 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::MoveNext()
#define Enumerator_MoveNext_m667095019(__this, method) ((  bool (*) (Enumerator_t2012408320 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::Dispose()
#define Enumerator_Dispose_m721294528(__this, method) ((  void (*) (Enumerator_t2012408320 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t Interlocked_CompareExchange_m3023855514 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
#define Dictionary_2__ctor_m2635188939(__this, method) ((  void (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m217107153(__this, p0, method) ((  bool (*) (Dictionary_2_t2731313296 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0)
#define Dictionary_2_get_Item_m3745523859(__this, p0, method) ((  JSONNode_t2946056997 * (*) (Dictionary_2_t2731313296 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m1713835880 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1416072037(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2731313296 *, String_t*, JSONNode_t2946056997 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1)
#define Dictionary_2_Add_m4017966756(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2731313296 *, String_t*, JSONNode_t2946056997 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
#define Dictionary_2_get_Count_m3623399773(__this, method) ((  int32_t (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
#define Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(__this /* static, unused */, p0, p1, method) ((  KeyValuePair_2_t834018167  (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_t2530217319_m1306417333_gshared)(__this /* static, unused */, p0, p1, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Value()
#define KeyValuePair_2_get_Value_m1737997693(__this, method) ((  JSONNode_t2946056997 * (*) (KeyValuePair_2_t834018167 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// !0 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Key()
#define KeyValuePair_2_get_Key_m3658972889(__this, method) ((  String_t* (*) (KeyValuePair_2_t834018167 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// System.Void SimpleJSON.JSONClass/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m427116565 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1__ctor_m829790048 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0)
#define Dictionary_2_Remove_m2771669071(__this, p0, method) ((  bool (*) (Dictionary_2_t2731313296 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void SimpleJSON.JSONClass/<Remove>c__AnonStorey2::.ctor()
extern "C"  void U3CRemoveU3Ec__AnonStorey2__ctor_m236837341 (U3CRemoveU3Ec__AnonStorey2_t30177310 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1138704236(__this, p0, p1, method) ((  void (*) (Func_2_t3505375296 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1809414358_gshared)(__this, p0, p1, method)
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_First_TisKeyValuePair_2_t834018167_m3591967577(__this /* static, unused */, p0, p1, method) ((  KeyValuePair_2_t834018167  (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3505375296 *, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_t2530217319_m4229752576_gshared)(__this /* static, unused */, p0, p1, method)
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m502378881(__this, method) ((  Enumerator_t390528775  (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
#define Enumerator_get_Current_m416358542(__this, method) ((  KeyValuePair_2_t834018167  (*) (Enumerator_t390528775 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m3387382048 (RuntimeObject * __this /* static, unused */, String_t* ___aText0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
#define Enumerator_MoveNext_m347499449(__this, method) ((  bool (*) (Enumerator_t390528775 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
#define Enumerator_Dispose_m1765329307(__this, method) ((  void (*) (Enumerator_t390528775 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Keys()
#define Dictionary_2_get_Keys_m3940207030(__this, method) ((  KeyCollection_t2920988767 * (*) (Dictionary_2_t2731313296 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>::GetEnumerator()
#define KeyCollection_GetEnumerator_m2653291907(__this, method) ((  Enumerator_t2913490280  (*) (KeyCollection_t2920988767 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m982770428_gshared)(__this, method)
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
#define Enumerator_get_Current_m3970196056(__this, method) ((  String_t* (*) (Enumerator_t2913490280 *, const RuntimeMethod*))Enumerator_get_Current_m3687673883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
#define Enumerator_MoveNext_m1781309907(__this, method) ((  bool (*) (Enumerator_t2913490280 *, const RuntimeMethod*))Enumerator_MoveNext_m76191888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
#define Enumerator_Dispose_m3927693234(__this, method) ((  void (*) (Enumerator_t2913490280 *, const RuntimeMethod*))Enumerator_Dispose_m260444170_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3294605149 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m2227562659 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Tag(SimpleJSON.JSONBinaryTag)
extern "C"  void JSONNode_set_Tag_m4149760350 (JSONNode_t2946056997 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONBinaryTag SimpleJSON.JSONNode::get_Tag()
extern "C"  int32_t JSONNode_get_Tag_m2793774046 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m1810447092 (JSONArray_t2340361630 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Set_m642841580 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aVal0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::.ctor()
extern "C"  void JSONClass__ctor_m1396220219 (JSONClass_t3407995562 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m2943143987 (JSONData_t174396811 * __this, int32_t ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int64)
extern "C"  void JSONData__ctor_m1751502893 (JSONData_t174396811 * __this, int64_t ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m2917323853 (JSONData_t174396811 * __this, float ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m2933069627 (JSONData_t174396811 * __this, double ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m3982727161 (JSONData_t174396811 * __this, bool ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m610702577 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m113693744 (RuntimeObject * __this /* static, unused */, JSONLazyCreator_t3621052039 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m2855600823 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m2223295763 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::.ctor()
extern "C"  void U3CU3Ec__Iterator1__ctor_m2346700051 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C"  bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.IFormatProvider)
extern "C"  String_t* Int32_ToString_m1760361794 (int32_t* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C"  bool Int64_TryParse_m2208578514 (RuntimeObject * __this /* static, unused */, String_t* p0, int64_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C"  String_t* Int64_ToString_m623640997 (int64_t* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
extern "C"  bool Single_TryParse_m1572008725 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, float* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.IFormatProvider)
extern "C"  String_t* Single_ToString_m3107811250 (float* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m623190659 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.IFormatProvider)
extern "C"  String_t* Double_ToString_m3828879243 (double* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
extern "C"  bool Boolean_TryParse_m1999513058 (RuntimeObject * __this /* static, unused */, String_t* p0, bool* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m1359111335 (JSONData_t174396811 * __this, String_t* ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::GetHashCode()
extern "C"  int32_t Object_GetHashCode_m2705121830 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C"  void NotImplementedException__ctor_m3095902440 (NotImplementedException_t3489357830 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m2523080653 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONData SimpleJSON.JSONNode::Numberize(System.String)
extern "C"  JSONData_t174396811 * JSONNode_Numberize_m3221440353 (RuntimeObject * __this /* static, unused */, String_t* ___token0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::.ctor()
#define Stack_1__ctor_m2409004951(__this, method) ((  void (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Push(!0)
#define Stack_1_Push_m1161466254(__this, p0, method) ((  void (*) (Stack_1_t3789446452 *, JSONNode_t2946056997 *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m3223804307 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Peek()
#define Stack_1_Peek_m3040978591(__this, method) ((  JSONNode_t2946056997 * (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1_Peek_m326384648_gshared)(__this, method)
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count()
#define Stack_1_get_Count_m288158433(__this, method) ((  int32_t (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method)
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Pop()
#define Stack_1_Pop_m4204993319(__this, method) ((  JSONNode_t2946056997 * (*) (Stack_1_t3789446452 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Void SimpleJSON.JSONNode::AddElement(SimpleJSON.JSONNode,System.String,System.String,System.Boolean)
extern "C"  void JSONNode_AddElement_m1646164213 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___ctx0, String_t* ___token1, String_t* ___tokenName2, bool ___tokenIsString3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
extern "C"  int32_t Int32_Parse_m2244041137 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BinaryWriter__ctor_m1874693998 (BinaryWriter_t3992595042 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m3289795077 (FileInfo_t1169991790 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C"  DirectoryInfo_t35957480 * FileInfo_get_Directory_m2050317500 (FileInfo_t1169991790 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenWrite(System.String)
extern "C"  FileStream_t4292183065 * File_OpenWrite_m24069155 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m416890596 (JSONNode_t2946056997 * __this, Stream_t1273022909 * ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C"  String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t2946056997 * JSONNode_Deserialize_m280376878 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___aReader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C"  void BinaryReader__ctor_m2602947653 (BinaryReader_t2428077293 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C"  FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromStream_m750673342 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___aData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C"  ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m4100805873 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
extern "C"  RuntimeObject* JSONNode_get_DeepChildren_m2537763012 (JSONNode_t2946056997 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
extern "C"  JSONNode_t2946056997 * JSON_Parse_m2597873051 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___jsonString0;
		JSONNode_t2946056997 * L_1 = JSONNode_Parse_m883557124(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m1810447092 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray__ctor_m1810447092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t123164443 * L_0 = (List_1_t123164443 *)il2cpp_codegen_object_new(List_1_t123164443_il2cpp_TypeInfo_var);
		List_1__ctor_m2497635700(L_0, /*hidden argument*/List_1__ctor_m2497635700_RuntimeMethod_var);
		__this->set__nodeList_1(L_0);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONArray_get_Item_m770505322 (JSONArray_t2340361630 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Item_m770505322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t123164443 * L_2 = __this->get__nodeList_1();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}

IL_0018:
	{
		JSONLazyCreator_t3621052039 * L_4 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m4143221426(L_4, __this, /*hidden argument*/NULL);
		return L_4;
	}

IL_001f:
	{
		List_1_t123164443 * L_5 = __this->get__nodeList_1();
		int32_t L_6 = ___aIndex0;
		NullCheck(L_5);
		JSONNode_t2946056997 * L_7 = List_1_get_Item_m1412457272(L_5, L_6, /*hidden argument*/List_1_get_Item_m1412457272_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m2325276014 (JSONArray_t2340361630 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_set_Item_m2325276014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t123164443 * L_2 = __this->get__nodeList_1();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}

IL_0018:
	{
		List_1_t123164443 * L_4 = __this->get__nodeList_1();
		JSONNode_t2946056997 * L_5 = ___value1;
		NullCheck(L_4);
		List_1_Add_m1031575508(L_4, L_5, /*hidden argument*/List_1_Add_m1031575508_RuntimeMethod_var);
		goto IL_0036;
	}

IL_0029:
	{
		List_1_t123164443 * L_6 = __this->get__nodeList_1();
		int32_t L_7 = ___aIndex0;
		JSONNode_t2946056997 * L_8 = ___value1;
		NullCheck(L_6);
		List_1_set_Item_m4256349914(L_6, L_7, L_8, /*hidden argument*/List_1_set_Item_m4256349914_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONArray_get_Item_m3275530059 (JSONArray_t2340361630 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Item_m3275530059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JSONLazyCreator_t3621052039 * L_0 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m4143221426(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m3538304411 (JSONArray_t2340361630 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_set_Item_m3538304411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t123164443 * L_0 = __this->get__nodeList_1();
		JSONNode_t2946056997 * L_1 = ___value1;
		NullCheck(L_0);
		List_1_Add_m1031575508(L_0, L_1, /*hidden argument*/List_1_Add_m1031575508_RuntimeMethod_var);
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m1674341146 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Count_m1674341146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t123164443 * L_0 = __this->get__nodeList_1();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m4160179865(L_0, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Children()
extern "C"  RuntimeObject* JSONArray_get_Children_m1636733882 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_get_Children_m1636733882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2066799033 * V_0 = NULL;
	{
		U3CU3Ec__Iterator0_t2066799033 * L_0 = (U3CU3Ec__Iterator0_t2066799033 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2066799033_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m1141181736(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t2066799033 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CU3Ec__Iterator0_t2066799033 * L_2 = V_0;
		U3CU3Ec__Iterator0_t2066799033 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_5(((int32_t)-2));
		return L_3;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C"  RuntimeObject* JSONArray_GetEnumerator_m94191729 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_GetEnumerator_m94191729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * V_0 = NULL;
	{
		U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * L_0 = (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ec__Iterator1_t1509986145_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator1__ctor_m4258361747(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_Add_m1638966007 (JSONArray_t2340361630 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Add_m1638966007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t123164443 * L_0 = __this->get__nodeList_1();
		JSONNode_t2946056997 * L_1 = ___aItem1;
		NullCheck(L_0);
		List_1_Add_m1031575508(L_0, L_1, /*hidden argument*/List_1_Add_m1031575508_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONArray_Remove_m649058450 (JSONArray_t2340361630 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Remove_m649058450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_t123164443 * L_2 = __this->get__nodeList_1();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t2946056997 *)NULL;
	}

IL_001a:
	{
		List_1_t123164443 * L_4 = __this->get__nodeList_1();
		int32_t L_5 = ___aIndex0;
		NullCheck(L_4);
		JSONNode_t2946056997 * L_6 = List_1_get_Item_m1412457272(L_4, L_5, /*hidden argument*/List_1_get_Item_m1412457272_RuntimeMethod_var);
		V_0 = L_6;
		List_1_t123164443 * L_7 = __this->get__nodeList_1();
		int32_t L_8 = ___aIndex0;
		NullCheck(L_7);
		List_1_RemoveAt_m3966380295(L_7, L_8, /*hidden argument*/List_1_RemoveAt_m3966380295_RuntimeMethod_var);
		JSONNode_t2946056997 * L_9 = V_0;
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t2946056997 * JSONArray_Remove_m2844647652 (JSONArray_t2340361630 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Remove_m2844647652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t123164443 * L_0 = __this->get__nodeList_1();
		JSONNode_t2946056997 * L_1 = ___aNode0;
		NullCheck(L_0);
		List_1_Remove_m1859561057(L_0, L_1, /*hidden argument*/List_1_Remove_m1859561057_RuntimeMethod_var);
		JSONNode_t2946056997 * L_2 = ___aNode0;
		return L_2;
	}
}
// System.String SimpleJSON.JSONArray::ToString()
extern "C"  String_t* JSONArray_ToString_m3541723337 (JSONArray_t2340361630 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_ToString_m3541723337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	Enumerator_t2012408320  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_0, _stringLiteral3450517493, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t123164443 * L_1 = __this->get__nodeList_1();
		NullCheck(L_1);
		Enumerator_t2012408320  L_2 = List_1_GetEnumerator_m3335450781(L_1, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001c:
		{
			JSONNode_t2946056997 * L_3 = Enumerator_get_Current_m2446791353((&V_2), /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
			V_1 = L_3;
			StringBuilder_t * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = StringBuilder_get_Length_m3238060835(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)2)))
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			StringBuilder_t * L_6 = V_0;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_003c:
		{
			StringBuilder_t * L_7 = V_0;
			JSONNode_t2946056997 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			NullCheck(L_7);
			StringBuilder_Append_m1965104174(L_7, L_9, /*hidden argument*/NULL);
		}

IL_0049:
		{
			bool L_10 = Enumerator_MoveNext_m667095019((&V_2), /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_001c;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m721294528((&V_2), /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3458054016, /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}
}
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern "C"  String_t* JSONArray_ToString_m3325217421 (JSONArray_t2340361630 * __this, String_t* ___aPrefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_ToString_m3325217421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	Enumerator_t2012408320  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_0, _stringLiteral3450517493, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t123164443 * L_1 = __this->get__nodeList_1();
		NullCheck(L_1);
		Enumerator_t2012408320  L_2 = List_1_GetEnumerator_m3335450781(L_1, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_001c:
		{
			JSONNode_t2946056997 * L_3 = Enumerator_get_Current_m2446791353((&V_2), /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
			V_1 = L_3;
			StringBuilder_t * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = StringBuilder_get_Length_m3238060835(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)3)))
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			StringBuilder_t * L_6 = V_0;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_003c:
		{
			StringBuilder_t * L_7 = V_0;
			NullCheck(L_7);
			StringBuilder_Append_m1965104174(L_7, _stringLiteral3452614566, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = V_0;
			String_t* L_9 = ___aPrefix0;
			NullCheck(L_8);
			StringBuilder_Append_m1965104174(L_8, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = V_0;
			NullCheck(L_10);
			StringBuilder_Append_m1965104174(L_10, _stringLiteral3786055882, /*hidden argument*/NULL);
			StringBuilder_t * L_11 = V_0;
			JSONNode_t2946056997 * L_12 = V_1;
			String_t* L_13 = ___aPrefix0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_14 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1810271860, L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			String_t* L_15 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_12, L_14);
			NullCheck(L_11);
			StringBuilder_Append_m1965104174(L_11, L_15, /*hidden argument*/NULL);
		}

IL_0074:
		{
			bool L_16 = Enumerator_MoveNext_m667095019((&V_2), /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_001c;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x93, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m721294528((&V_2), /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0093:
	{
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3452614566, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		String_t* L_19 = ___aPrefix0;
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, L_19, /*hidden argument*/NULL);
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m1965104174(L_20, _stringLiteral3452614643, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_22;
	}
}
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONArray_Serialize_m842435626 (JSONArray_t2340361630 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONArray_Serialize_m842435626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	Enumerator_t2012408320  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)1);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		List_1_t123164443 * L_2 = __this->get__nodeList_1();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4160179865(L_2, /*hidden argument*/List_1_get_Count_m4160179865_RuntimeMethod_var);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		List_1_t123164443 * L_4 = __this->get__nodeList_1();
		NullCheck(L_4);
		Enumerator_t2012408320  L_5 = List_1_GetEnumerator_m3335450781(L_4, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0029:
		{
			JSONNode_t2946056997 * L_6 = Enumerator_get_Current_m2446791353((&V_1), /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
			V_0 = L_6;
			JSONNode_t2946056997 * L_7 = V_0;
			BinaryWriter_t3992595042 * L_8 = ___aWriter0;
			NullCheck(L_7);
			VirtActionInvoker1< BinaryWriter_t3992595042 * >::Invoke(31 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_7, L_8);
		}

IL_0038:
		{
			bool L_9 = Enumerator_MoveNext_m667095019((&V_1), /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0029;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m721294528((&V_1), /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
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
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m1141181736 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<>c__Iterator0::MoveNext()
extern "C"  bool U3CU3Ec__Iterator0_MoveNext_m1389010882 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_MoveNext_m1389010882_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_00b2;
	}

IL_0023:
	{
		JSONArray_t2340361630 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		List_1_t123164443 * L_3 = L_2->get__nodeList_1();
		NullCheck(L_3);
		Enumerator_t2012408320  L_4 = List_1_GetEnumerator_m3335450781(L_3, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0080;
				}
			}
		}

IL_0048:
		{
			goto IL_0080;
		}

IL_004d:
		{
			Enumerator_t2012408320 * L_6 = __this->get_address_of_U24locvar0_0();
			JSONNode_t2946056997 * L_7 = Enumerator_get_Current_m2446791353(L_6, /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
			__this->set_U3CnodeU3E__1_1(L_7);
			JSONNode_t2946056997 * L_8 = __this->get_U3CnodeU3E__1_1();
			__this->set_U24current_3(L_8);
			bool L_9 = __this->get_U24disposing_4();
			if (L_9)
			{
				goto IL_0079;
			}
		}

IL_0072:
		{
			__this->set_U24PC_5(1);
		}

IL_0079:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB4, FINALLY_0095);
		}

IL_0080:
		{
			Enumerator_t2012408320 * L_10 = __this->get_address_of_U24locvar0_0();
			bool L_11 = Enumerator_MoveNext_m667095019(L_10, /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_004d;
			}
		}

IL_0090:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0099;
			}
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(149)
		}

IL_0099:
		{
			Enumerator_t2012408320 * L_13 = __this->get_address_of_U24locvar0_0();
			Enumerator_Dispose_m721294528(L_13, /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
			IL2CPP_END_FINALLY(149)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ab:
	{
		__this->set_U24PC_5((-1));
	}

IL_00b2:
	{
		return (bool)0;
	}

IL_00b4:
	{
		return (bool)1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m3579767890 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m268166767 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::Dispose()
extern "C"  void U3CU3Ec__Iterator0_Dispose_m995296339 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Dispose_m995296339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_t2012408320 * L_2 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m721294528(L_2, /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<>c__Iterator0::Reset()
extern "C"  void U3CU3Ec__Iterator0_Reset_m926194436 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Reset_m926194436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m905320162 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967 (U3CU3Ec__Iterator0_t2066799033 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3534303967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2066799033 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_5();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t2066799033 * L_2 = (U3CU3Ec__Iterator0_t2066799033 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2066799033_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m1141181736(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator0_t2066799033 * L_3 = V_0;
		JSONArray_t2340361630 * L_4 = __this->get_U24this_2();
		NullCheck(L_3);
		L_3->set_U24this_2(L_4);
		U3CU3Ec__Iterator0_t2066799033 * L_5 = V_0;
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
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1__ctor_m4258361747 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::MoveNext()
extern "C"  bool U3CGetEnumeratorU3Ec__Iterator1_MoveNext_m584005689 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator1_MoveNext_m584005689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_00b2;
	}

IL_0023:
	{
		JSONArray_t2340361630 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		List_1_t123164443 * L_3 = L_2->get__nodeList_1();
		NullCheck(L_3);
		Enumerator_t2012408320  L_4 = List_1_GetEnumerator_m3335450781(L_3, /*hidden argument*/List_1_GetEnumerator_m3335450781_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0080;
				}
			}
		}

IL_0048:
		{
			goto IL_0080;
		}

IL_004d:
		{
			Enumerator_t2012408320 * L_6 = __this->get_address_of_U24locvar0_0();
			JSONNode_t2946056997 * L_7 = Enumerator_get_Current_m2446791353(L_6, /*hidden argument*/Enumerator_get_Current_m2446791353_RuntimeMethod_var);
			__this->set_U3CnodeU3E__1_1(L_7);
			JSONNode_t2946056997 * L_8 = __this->get_U3CnodeU3E__1_1();
			__this->set_U24current_3(L_8);
			bool L_9 = __this->get_U24disposing_4();
			if (L_9)
			{
				goto IL_0079;
			}
		}

IL_0072:
		{
			__this->set_U24PC_5(1);
		}

IL_0079:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB4, FINALLY_0095);
		}

IL_0080:
		{
			Enumerator_t2012408320 * L_10 = __this->get_address_of_U24locvar0_0();
			bool L_11 = Enumerator_MoveNext_m667095019(L_10, /*hidden argument*/Enumerator_MoveNext_m667095019_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_004d;
			}
		}

IL_0090:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_0095);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0095;
	}

FINALLY_0095:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0099;
			}
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(149)
		}

IL_0099:
		{
			Enumerator_t2012408320 * L_13 = __this->get_address_of_U24locvar0_0();
			Enumerator_Dispose_m721294528(L_13, /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
			IL2CPP_END_FINALLY(149)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ab:
	{
		__this->set_U24PC_5((-1));
	}

IL_00b2:
	{
		return (bool)0;
	}

IL_00b4:
	{
		return (bool)1;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1922340946 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3473745952 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::Dispose()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1_Dispose_m2873951205 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator1_Dispose_m2873951205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_t2012408320 * L_2 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m721294528(L_2, /*hidden argument*/Enumerator_Dispose_m721294528_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<GetEnumerator>c__Iterator1::Reset()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1_Reset_m2306094002 (U3CGetEnumeratorU3Ec__Iterator1_t1509986145 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator1_Reset_m2306094002_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONClass::.ctor()
extern "C"  void JSONClass__ctor_m1396220219 (JSONClass_t3407995562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass__ctor_m1396220219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2731313296 * L_0 = (Dictionary_2_t2731313296 *)il2cpp_codegen_object_new(Dictionary_2_t2731313296_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2635188939(L_0, /*hidden argument*/Dictionary_2__ctor_m2635188939_RuntimeMethod_var);
		__this->set__nodeDict_1(L_0);
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONClass_get_Item_m3572165225 (JSONClass_t3407995562 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_get_Item_m3572165225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * G_B3_0 = NULL;
	{
		Dictionary_2_t2731313296 * L_0 = __this->get__nodeDict_1();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m217107153(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Dictionary_2_t2731313296 * L_3 = __this->get__nodeDict_1();
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_t2946056997 * L_5 = Dictionary_2_get_Item_m3745523859(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3745523859_RuntimeMethod_var);
		G_B3_0 = L_5;
		goto IL_0029;
	}

IL_0022:
	{
		String_t* L_6 = ___aKey0;
		JSONLazyCreator_t3621052039 * L_7 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m1713835880(L_7, __this, L_6, /*hidden argument*/NULL);
		G_B3_0 = ((JSONNode_t2946056997 *)(L_7));
	}

IL_0029:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONClass_set_Item_m1720627626 (JSONClass_t3407995562 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_set_Item_m1720627626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2731313296 * L_0 = __this->get__nodeDict_1();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m217107153(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_t2731313296 * L_3 = __this->get__nodeDict_1();
		String_t* L_4 = ___aKey0;
		JSONNode_t2946056997 * L_5 = ___value1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m1416072037(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_m1416072037_RuntimeMethod_var);
		goto IL_0030;
	}

IL_0023:
	{
		Dictionary_2_t2731313296 * L_6 = __this->get__nodeDict_1();
		String_t* L_7 = ___aKey0;
		JSONNode_t2946056997 * L_8 = ___value1;
		NullCheck(L_6);
		Dictionary_2_Add_m4017966756(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m4017966756_RuntimeMethod_var);
	}

IL_0030:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONClass_get_Item_m1858644495 (JSONClass_t3407995562 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_get_Item_m1858644495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t834018167  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t2731313296 * L_2 = __this->get__nodeDict_1();
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t2946056997 *)NULL;
	}

IL_001a:
	{
		Dictionary_2_t2731313296 * L_4 = __this->get__nodeDict_1();
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_t834018167  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var);
		V_0 = L_6;
		JSONNode_t2946056997 * L_7 = KeyValuePair_2_get_Value_m1737997693((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONClass_set_Item_m4015771883 (JSONClass_t3407995562 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_set_Item_m4015771883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t2731313296 * L_2 = __this->get__nodeDict_1();
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		return;
	}

IL_0019:
	{
		Dictionary_2_t2731313296 * L_4 = __this->get__nodeDict_1();
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_t834018167  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7 = KeyValuePair_2_get_Key_m3658972889((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		V_0 = L_7;
		Dictionary_2_t2731313296 * L_8 = __this->get__nodeDict_1();
		String_t* L_9 = V_0;
		JSONNode_t2946056997 * L_10 = ___value1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m1416072037(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m1416072037_RuntimeMethod_var);
		return;
	}
}
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C"  int32_t JSONClass_get_Count_m1177034060 (JSONClass_t3407995562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_get_Count_m1177034060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2731313296 * L_0 = __this->get__nodeDict_1();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m3623399773(L_0, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Children()
extern "C"  RuntimeObject* JSONClass_get_Children_m852674659 (JSONClass_t3407995562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_get_Children_m852674659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t3923513137 * V_0 = NULL;
	{
		U3CU3Ec__Iterator0_t3923513137 * L_0 = (U3CU3Ec__Iterator0_t3923513137 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t3923513137_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m427116565(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t3923513137 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CU3Ec__Iterator0_t3923513137 * L_2 = V_0;
		U3CU3Ec__Iterator0_t3923513137 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_5(((int32_t)-2));
		return L_3;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern "C"  RuntimeObject* JSONClass_GetEnumerator_m720239022 (JSONClass_t3407995562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_GetEnumerator_m720239022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * V_0 = NULL;
	{
		U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * L_0 = (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ec__Iterator1_t3954415084_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator1__ctor_m829790048(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONClass_Add_m2745972880 (JSONClass_t3407995562 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_Add_m2745972880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___aKey0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0040;
		}
	}
	{
		Dictionary_2_t2731313296 * L_2 = __this->get__nodeDict_1();
		String_t* L_3 = ___aKey0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_ContainsKey_m217107153(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t2731313296 * L_5 = __this->get__nodeDict_1();
		String_t* L_6 = ___aKey0;
		JSONNode_t2946056997 * L_7 = ___aItem1;
		NullCheck(L_5);
		Dictionary_2_set_Item_m1416072037(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m1416072037_RuntimeMethod_var);
		goto IL_003b;
	}

IL_002e:
	{
		Dictionary_2_t2731313296 * L_8 = __this->get__nodeDict_1();
		String_t* L_9 = ___aKey0;
		JSONNode_t2946056997 * L_10 = ___aItem1;
		NullCheck(L_8);
		Dictionary_2_Add_m4017966756(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_Add_m4017966756_RuntimeMethod_var);
	}

IL_003b:
	{
		goto IL_005f;
	}

IL_0040:
	{
		Dictionary_2_t2731313296 * L_11 = __this->get__nodeDict_1();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_12 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = Guid_ToString_m3279186591((&V_0), /*hidden argument*/NULL);
		JSONNode_t2946056997 * L_14 = ___aItem1;
		NullCheck(L_11);
		Dictionary_2_Add_m4017966756(L_11, L_13, L_14, /*hidden argument*/Dictionary_2_Add_m4017966756_RuntimeMethod_var);
	}

IL_005f:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C"  JSONNode_t2946056997 * JSONClass_Remove_m3001669217 (JSONClass_t3407995562 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_Remove_m3001669217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * V_0 = NULL;
	{
		Dictionary_2_t2731313296 * L_0 = __this->get__nodeDict_1();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m217107153(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m217107153_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (JSONNode_t2946056997 *)NULL;
	}

IL_0013:
	{
		Dictionary_2_t2731313296 * L_3 = __this->get__nodeDict_1();
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_t2946056997 * L_5 = Dictionary_2_get_Item_m3745523859(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m3745523859_RuntimeMethod_var);
		V_0 = L_5;
		Dictionary_2_t2731313296 * L_6 = __this->get__nodeDict_1();
		String_t* L_7 = ___aKey0;
		NullCheck(L_6);
		Dictionary_2_Remove_m2771669071(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m2771669071_RuntimeMethod_var);
		JSONNode_t2946056997 * L_8 = V_0;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONClass_Remove_m2682239160 (JSONClass_t3407995562 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_Remove_m2682239160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t834018167  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t2731313296 * L_2 = __this->get__nodeDict_1();
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (JSONNode_t2946056997 *)NULL;
	}

IL_001a:
	{
		Dictionary_2_t2731313296 * L_4 = __this->get__nodeDict_1();
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_t834018167  L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t834018167_m1492212154_RuntimeMethod_var);
		V_0 = L_6;
		Dictionary_2_t2731313296 * L_7 = __this->get__nodeDict_1();
		String_t* L_8 = KeyValuePair_2_get_Key_m3658972889((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		NullCheck(L_7);
		Dictionary_2_Remove_m2771669071(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m2771669071_RuntimeMethod_var);
		JSONNode_t2946056997 * L_9 = KeyValuePair_2_get_Value_m1737997693((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		return L_9;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t2946056997 * JSONClass_Remove_m2791934955 (JSONClass_t3407995562 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_Remove_m2791934955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRemoveU3Ec__AnonStorey2_t30177310 * V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	JSONNode_t2946056997 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CRemoveU3Ec__AnonStorey2_t30177310 * L_0 = (U3CRemoveU3Ec__AnonStorey2_t30177310 *)il2cpp_codegen_object_new(U3CRemoveU3Ec__AnonStorey2_t30177310_il2cpp_TypeInfo_var);
		U3CRemoveU3Ec__AnonStorey2__ctor_m236837341(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRemoveU3Ec__AnonStorey2_t30177310 * L_1 = V_0;
		JSONNode_t2946056997 * L_2 = ___aNode0;
		NullCheck(L_1);
		L_1->set_aNode_0(L_2);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t2731313296 * L_3 = __this->get__nodeDict_1();
		U3CRemoveU3Ec__AnonStorey2_t30177310 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CRemoveU3Ec__AnonStorey2_U3CU3Em__0_m446707295_RuntimeMethod_var;
		Func_2_t3505375296 * L_6 = (Func_2_t3505375296 *)il2cpp_codegen_object_new(Func_2_t3505375296_il2cpp_TypeInfo_var);
		Func_2__ctor_m1138704236(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m1138704236_RuntimeMethod_var);
		KeyValuePair_2_t834018167  L_7 = Enumerable_First_TisKeyValuePair_2_t834018167_m3591967577(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/Enumerable_First_TisKeyValuePair_2_t834018167_m3591967577_RuntimeMethod_var);
		V_1 = L_7;
		Dictionary_2_t2731313296 * L_8 = __this->get__nodeDict_1();
		String_t* L_9 = KeyValuePair_2_get_Key_m3658972889((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
		NullCheck(L_8);
		Dictionary_2_Remove_m2771669071(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m2771669071_RuntimeMethod_var);
		U3CRemoveU3Ec__AnonStorey2_t30177310 * L_10 = V_0;
		NullCheck(L_10);
		JSONNode_t2946056997 * L_11 = L_10->get_aNode_0();
		V_2 = L_11;
		goto IL_004c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0044;
		throw e;
	}

CATCH_0044:
	{ // begin catch(System.Object)
		V_2 = (JSONNode_t2946056997 *)NULL;
		goto IL_004c;
	} // end catch (depth: 1)

IL_004c:
	{
		JSONNode_t2946056997 * L_12 = V_2;
		return L_12;
	}
}
// System.String SimpleJSON.JSONClass::ToString()
extern "C"  String_t* JSONClass_ToString_m8537715 (JSONClass_t3407995562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_ToString_m8537715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t390528775  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_0, _stringLiteral3452614613, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t2731313296 * L_1 = __this->get__nodeDict_1();
		NullCheck(L_1);
		Enumerator_t390528775  L_2 = Dictionary_2_GetEnumerator_m502378881(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_001c:
		{
			KeyValuePair_2_t834018167  L_3 = Enumerator_get_Current_m416358542((&V_2), /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
			V_1 = L_3;
			StringBuilder_t * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = StringBuilder_get_Length_m3238060835(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)2)))
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			StringBuilder_t * L_6 = V_0;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_003c:
		{
			StringBuilder_t * L_7 = V_0;
			NullCheck(L_7);
			StringBuilder_Append_m1965104174(L_7, _stringLiteral3452614526, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = V_0;
			String_t* L_9 = KeyValuePair_2_get_Key_m3658972889((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
			String_t* L_10 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			StringBuilder_Append_m1965104174(L_8, L_10, /*hidden argument*/NULL);
			StringBuilder_t * L_11 = V_0;
			NullCheck(L_11);
			StringBuilder_Append_m1965104174(L_11, _stringLiteral3451959166, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = V_0;
			JSONNode_t2946056997 * L_13 = KeyValuePair_2_get_Value_m1737997693((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
			NullCheck(L_13);
			String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
			NullCheck(L_12);
			StringBuilder_Append_m1965104174(L_12, L_14, /*hidden argument*/NULL);
		}

IL_007a:
		{
			bool L_15 = Enumerator_MoveNext_m347499449((&V_2), /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_001c;
			}
		}

IL_0086:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1765329307((&V_2), /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0099:
	{
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3452614611, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern "C"  String_t* JSONClass_ToString_m2763909907 (JSONClass_t3407995562 * __this, String_t* ___aPrefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_ToString_m2763909907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	KeyValuePair_2_t834018167  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t390528775  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_0, _stringLiteral3450517461, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t2731313296 * L_1 = __this->get__nodeDict_1();
		NullCheck(L_1);
		Enumerator_t390528775  L_2 = Dictionary_2_GetEnumerator_m502378881(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_001c:
		{
			KeyValuePair_2_t834018167  L_3 = Enumerator_get_Current_m416358542((&V_2), /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
			V_1 = L_3;
			StringBuilder_t * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = StringBuilder_get_Length_m3238060835(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)3)))
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			StringBuilder_t * L_6 = V_0;
			NullCheck(L_6);
			StringBuilder_Append_m1965104174(L_6, _stringLiteral3450517380, /*hidden argument*/NULL);
		}

IL_003c:
		{
			StringBuilder_t * L_7 = V_0;
			NullCheck(L_7);
			StringBuilder_Append_m1965104174(L_7, _stringLiteral3452614566, /*hidden argument*/NULL);
			StringBuilder_t * L_8 = V_0;
			String_t* L_9 = ___aPrefix0;
			NullCheck(L_8);
			StringBuilder_Append_m1965104174(L_8, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = V_0;
			NullCheck(L_10);
			StringBuilder_Append_m1965104174(L_10, _stringLiteral3786055882, /*hidden argument*/NULL);
			StringBuilder_t * L_11 = V_0;
			NullCheck(L_11);
			StringBuilder_Append_m1965104174(L_11, _stringLiteral3452614526, /*hidden argument*/NULL);
			StringBuilder_t * L_12 = V_0;
			String_t* L_13 = KeyValuePair_2_get_Key_m3658972889((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3658972889_RuntimeMethod_var);
			String_t* L_14 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			StringBuilder_Append_m1965104174(L_12, L_14, /*hidden argument*/NULL);
			StringBuilder_t * L_15 = V_0;
			NullCheck(L_15);
			StringBuilder_Append_m1965104174(L_15, _stringLiteral2057739126, /*hidden argument*/NULL);
			StringBuilder_t * L_16 = V_0;
			JSONNode_t2946056997 * L_17 = KeyValuePair_2_get_Value_m1737997693((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
			String_t* L_18 = ___aPrefix0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_19 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1810271860, L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			String_t* L_20 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_17, L_19);
			NullCheck(L_16);
			StringBuilder_Append_m1965104174(L_16, L_20, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			bool L_21 = Enumerator_MoveNext_m347499449((&V_2), /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_001c;
			}
		}

IL_00b1:
		{
			IL2CPP_LEAVE(0xC4, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1765329307((&V_2), /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_JUMP_TBL(0xC4, IL_00c4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c4:
	{
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m1965104174(L_22, _stringLiteral3452614566, /*hidden argument*/NULL);
		StringBuilder_t * L_23 = V_0;
		String_t* L_24 = ___aPrefix0;
		NullCheck(L_23);
		StringBuilder_Append_m1965104174(L_23, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1965104174(L_25, _stringLiteral3452614611, /*hidden argument*/NULL);
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		return L_27;
	}
}
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONClass_Serialize_m1126338290 (JSONClass_t3407995562 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONClass_Serialize_m1126338290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Enumerator_t2913490280  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		BinaryWriter_t3992595042 * L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)2);
		BinaryWriter_t3992595042 * L_1 = ___aWriter0;
		Dictionary_2_t2731313296 * L_2 = __this->get__nodeDict_1();
		NullCheck(L_2);
		int32_t L_3 = Dictionary_2_get_Count_m3623399773(L_2, /*hidden argument*/Dictionary_2_get_Count_m3623399773_RuntimeMethod_var);
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		Dictionary_2_t2731313296 * L_4 = __this->get__nodeDict_1();
		NullCheck(L_4);
		KeyCollection_t2920988767 * L_5 = Dictionary_2_get_Keys_m3940207030(L_4, /*hidden argument*/Dictionary_2_get_Keys_m3940207030_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t2913490280  L_6 = KeyCollection_GetEnumerator_m2653291907(L_5, /*hidden argument*/KeyCollection_GetEnumerator_m2653291907_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004f;
		}

IL_002e:
		{
			String_t* L_7 = Enumerator_get_Current_m3970196056((&V_1), /*hidden argument*/Enumerator_get_Current_m3970196056_RuntimeMethod_var);
			V_0 = L_7;
			BinaryWriter_t3992595042 * L_8 = ___aWriter0;
			String_t* L_9 = V_0;
			NullCheck(L_8);
			VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_8, L_9);
			Dictionary_2_t2731313296 * L_10 = __this->get__nodeDict_1();
			String_t* L_11 = V_0;
			NullCheck(L_10);
			JSONNode_t2946056997 * L_12 = Dictionary_2_get_Item_m3745523859(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m3745523859_RuntimeMethod_var);
			BinaryWriter_t3992595042 * L_13 = ___aWriter0;
			NullCheck(L_12);
			VirtActionInvoker1< BinaryWriter_t3992595042 * >::Invoke(31 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, L_12, L_13);
		}

IL_004f:
		{
			bool L_14 = Enumerator_MoveNext_m1781309907((&V_1), /*hidden argument*/Enumerator_MoveNext_m1781309907_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_002e;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3927693234((&V_1), /*hidden argument*/Enumerator_Dispose_m3927693234_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
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
// System.Void SimpleJSON.JSONClass/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m427116565 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<>c__Iterator0::MoveNext()
extern "C"  bool U3CU3Ec__Iterator0_MoveNext_m1510656117 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_MoveNext_m1510656117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_00b7;
	}

IL_0023:
	{
		JSONClass_t3407995562 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		Dictionary_2_t2731313296 * L_3 = L_2->get__nodeDict_1();
		NullCheck(L_3);
		Enumerator_t390528775  L_4 = Dictionary_2_GetEnumerator_m502378881(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0085;
				}
			}
		}

IL_0048:
		{
			goto IL_0085;
		}

IL_004d:
		{
			Enumerator_t390528775 * L_6 = __this->get_address_of_U24locvar0_0();
			KeyValuePair_2_t834018167  L_7 = Enumerator_get_Current_m416358542(L_6, /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
			__this->set_U3CnodePairU3E__1_1(L_7);
			KeyValuePair_2_t834018167 * L_8 = __this->get_address_of_U3CnodePairU3E__1_1();
			JSONNode_t2946056997 * L_9 = KeyValuePair_2_get_Value_m1737997693(L_8, /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
			__this->set_U24current_3(L_9);
			bool L_10 = __this->get_U24disposing_4();
			if (L_10)
			{
				goto IL_007e;
			}
		}

IL_0077:
		{
			__this->set_U24PC_5(1);
		}

IL_007e:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB9, FINALLY_009a);
		}

IL_0085:
		{
			Enumerator_t390528775 * L_11 = __this->get_address_of_U24locvar0_0();
			bool L_12 = Enumerator_MoveNext_m347499449(L_11, /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_004d;
			}
		}

IL_0095:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(154)
		}

IL_009e:
		{
			Enumerator_t390528775 * L_14 = __this->get_address_of_U24locvar0_0();
			Enumerator_Dispose_m1765329307(L_14, /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
			IL2CPP_END_FINALLY(154)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b0:
	{
		__this->set_U24PC_5((-1));
	}

IL_00b7:
	{
		return (bool)0;
	}

IL_00b9:
	{
		return (bool)1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONClass/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m3610776621 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SimpleJSON.JSONClass/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m716545240 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONClass/<>c__Iterator0::Dispose()
extern "C"  void U3CU3Ec__Iterator0_Dispose_m3102260061 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Dispose_m3102260061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_t390528775 * L_2 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m1765329307(L_2, /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<>c__Iterator0::Reset()
extern "C"  void U3CU3Ec__Iterator0_Reset_m3571813557 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Reset_m3571813557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONClass/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m3186968465 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3294605149(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3294605149 (U3CU3Ec__Iterator0_t3923513137 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m3294605149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t3923513137 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_5();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t3923513137 * L_2 = (U3CU3Ec__Iterator0_t3923513137 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t3923513137_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m427116565(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator0_t3923513137 * L_3 = V_0;
		JSONClass_t3407995562 * L_4 = __this->get_U24this_2();
		NullCheck(L_3);
		L_3->set_U24this_2(L_4);
		U3CU3Ec__Iterator0_t3923513137 * L_5 = V_0;
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
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::.ctor()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1__ctor_m829790048 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::MoveNext()
extern "C"  bool U3CGetEnumeratorU3Ec__Iterator1_MoveNext_m1377051773 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator1_MoveNext_m1377051773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_00b7;
	}

IL_0023:
	{
		JSONClass_t3407995562 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		Dictionary_2_t2731313296 * L_3 = L_2->get__nodeDict_1();
		NullCheck(L_3);
		Enumerator_t390528775  L_4 = Dictionary_2_GetEnumerator_m502378881(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m502378881_RuntimeMethod_var);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0085;
				}
			}
		}

IL_0048:
		{
			goto IL_0085;
		}

IL_004d:
		{
			Enumerator_t390528775 * L_6 = __this->get_address_of_U24locvar0_0();
			KeyValuePair_2_t834018167  L_7 = Enumerator_get_Current_m416358542(L_6, /*hidden argument*/Enumerator_get_Current_m416358542_RuntimeMethod_var);
			__this->set_U3CnodePairU3E__1_1(L_7);
			KeyValuePair_2_t834018167  L_8 = __this->get_U3CnodePairU3E__1_1();
			KeyValuePair_2_t834018167  L_9 = L_8;
			RuntimeObject * L_10 = Box(KeyValuePair_2_t834018167_il2cpp_TypeInfo_var, &L_9);
			__this->set_U24current_3(L_10);
			bool L_11 = __this->get_U24disposing_4();
			if (L_11)
			{
				goto IL_007e;
			}
		}

IL_0077:
		{
			__this->set_U24PC_5(1);
		}

IL_007e:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB9, FINALLY_009a);
		}

IL_0085:
		{
			Enumerator_t390528775 * L_12 = __this->get_address_of_U24locvar0_0();
			bool L_13 = Enumerator_MoveNext_m347499449(L_12, /*hidden argument*/Enumerator_MoveNext_m347499449_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_004d;
			}
		}

IL_0095:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(154)
		}

IL_009e:
		{
			Enumerator_t390528775 * L_15 = __this->get_address_of_U24locvar0_0();
			Enumerator_Dispose_m1765329307(L_15, /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
			IL2CPP_END_FINALLY(154)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b0:
	{
		__this->set_U24PC_5((-1));
	}

IL_00b7:
	{
		return (bool)0;
	}

IL_00b9:
	{
		return (bool)1;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1000256649 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CGetEnumeratorU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1274967310 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::Dispose()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1_Dispose_m665225913 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator1_Dispose_m665225913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_003f;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3F, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_t390528775 * L_2 = __this->get_address_of_U24locvar0_0();
		Enumerator_Dispose_m1765329307(L_2, /*hidden argument*/Enumerator_Dispose_m1765329307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONClass/<GetEnumerator>c__Iterator1::Reset()
extern "C"  void U3CGetEnumeratorU3Ec__Iterator1_Reset_m3169589123 (U3CGetEnumeratorU3Ec__Iterator1_t3954415084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ec__Iterator1_Reset_m3169589123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void SimpleJSON.JSONClass/<Remove>c__AnonStorey2::.ctor()
extern "C"  void U3CRemoveU3Ec__AnonStorey2__ctor_m236837341 (U3CRemoveU3Ec__AnonStorey2_t30177310 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONClass/<Remove>c__AnonStorey2::<>m__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
extern "C"  bool U3CRemoveU3Ec__AnonStorey2_U3CU3Em__0_m446707295 (U3CRemoveU3Ec__AnonStorey2_t30177310 * __this, KeyValuePair_2_t834018167  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRemoveU3Ec__AnonStorey2_U3CU3Em__0_m446707295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JSONNode_t2946056997 * L_0 = KeyValuePair_2_get_Value_m1737997693((&___k0), /*hidden argument*/KeyValuePair_2_get_Value_m1737997693_RuntimeMethod_var);
		JSONNode_t2946056997 * L_1 = __this->get_aNode_0();
		bool L_2 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m1359111335 (JSONData_t174396811 * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONData__ctor_m1359111335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___aData0;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		__this->set__data_1(_stringLiteral1202628576);
		JSONNode_set_Tag_m4149760350(__this, ((int32_t)9), /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		String_t* L_1 = ___aData0;
		__this->set__data_1(L_1);
		JSONNode_set_Tag_m4149760350(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m2917323853 (JSONData_t174396811 * __this, float ___aData0, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		float L_0 = ___aData0;
		VirtActionInvoker1< float >::Invoke(24 /* System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m2933069627 (JSONData_t174396811 * __this, double ___aData0, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		double L_0 = ___aData0;
		VirtActionInvoker1< double >::Invoke(26 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m3982727161 (JSONData_t174396811 * __this, bool ___aData0, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		bool L_0 = ___aData0;
		VirtActionInvoker1< bool >::Invoke(28 /* System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m2943143987 (JSONData_t174396811 * __this, int32_t ___aData0, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___aData0;
		VirtActionInvoker1< int32_t >::Invoke(20 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, __this, L_0);
		return;
	}
}
// System.Void SimpleJSON.JSONData::.ctor(System.Int64)
extern "C"  void JSONData__ctor_m1751502893 (JSONData_t174396811 * __this, int64_t ___aData0, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___aData0;
		VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void SimpleJSON.JSONNode::set_AsLong(System.Int64) */, __this, L_0);
		return;
	}
}
// System.String SimpleJSON.JSONData::get_Value()
extern "C"  String_t* JSONData_get_Value_m2066063136 (JSONData_t174396811 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__data_1();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C"  void JSONData_set_Value_m1089029757 (JSONData_t174396811 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__data_1(L_0);
		JSONNode_set_Tag_m4149760350(__this, 3, /*hidden argument*/NULL);
		return;
	}
}
// System.String SimpleJSON.JSONData::ToString()
extern "C"  String_t* JSONData_ToString_m2036497350 (JSONData_t174396811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONData_ToString_m2036497350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		int32_t L_0 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_1 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_2 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_3 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_4 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)5)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0055;
		}
	}

IL_0049:
	{
		String_t* L_6 = __this->get__data_1();
		String_t* L_7 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0055:
	{
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_8, _stringLiteral3452614526, /*hidden argument*/NULL);
		V_0 = L_8;
		StringBuilder_t * L_9 = V_0;
		String_t* L_10 = __this->get__data_1();
		String_t* L_11 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_m1965104174(L_9, L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3452614526, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.String SimpleJSON.JSONData::ToString(System.String)
extern "C"  String_t* JSONData_ToString_m310963098 (JSONData_t174396811 * __this, String_t* ___aPrefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONData_ToString_m310963098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		int32_t L_0 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_1 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_2 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)8)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_3 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_4 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)5)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0055;
		}
	}

IL_0049:
	{
		String_t* L_6 = __this->get__data_1();
		String_t* L_7 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0055:
	{
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_8, _stringLiteral3452614526, /*hidden argument*/NULL);
		V_0 = L_8;
		StringBuilder_t * L_9 = V_0;
		String_t* L_10 = __this->get__data_1();
		String_t* L_11 = JSONNode_Escape_m3387382048(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_m1965104174(L_9, L_11, /*hidden argument*/NULL);
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3452614526, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONData_Serialize_m4179690323 (JSONData_t174396811 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0081;
			}
			case 2:
			{
				goto IL_0099;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_0039;
			}
			case 5:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_00b1;
	}

IL_002c:
	{
		BinaryWriter_t3992595042 * L_2 = ___aWriter0;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, (uint8_t)((int32_t)9));
		goto IL_00c9;
	}

IL_0039:
	{
		BinaryWriter_t3992595042 * L_3 = ___aWriter0;
		NullCheck(L_3);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_3, (uint8_t)8);
		BinaryWriter_t3992595042 * L_4 = ___aWriter0;
		int64_t L_5 = VirtFuncInvoker0< int64_t >::Invoke(21 /* System.Int64 SimpleJSON.JSONNode::get_AsLong() */, __this);
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.Int64) */, L_4, L_5);
		goto IL_00c9;
	}

IL_0051:
	{
		BinaryWriter_t3992595042 * L_6 = ___aWriter0;
		NullCheck(L_6);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_6, (uint8_t)4);
		BinaryWriter_t3992595042 * L_7 = ___aWriter0;
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, __this);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_7, L_8);
		goto IL_00c9;
	}

IL_0069:
	{
		BinaryWriter_t3992595042 * L_9 = ___aWriter0;
		NullCheck(L_9);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_9, (uint8_t)7);
		BinaryWriter_t3992595042 * L_10 = ___aWriter0;
		float L_11 = VirtFuncInvoker0< float >::Invoke(23 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, __this);
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(20 /* System.Void System.IO.BinaryWriter::Write(System.Single) */, L_10, L_11);
		goto IL_00c9;
	}

IL_0081:
	{
		BinaryWriter_t3992595042 * L_12 = ___aWriter0;
		NullCheck(L_12);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_12, (uint8_t)5);
		BinaryWriter_t3992595042 * L_13 = ___aWriter0;
		double L_14 = VirtFuncInvoker0< double >::Invoke(25 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		NullCheck(L_13);
		VirtActionInvoker1< double >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_13, L_14);
		goto IL_00c9;
	}

IL_0099:
	{
		BinaryWriter_t3992595042 * L_15 = ___aWriter0;
		NullCheck(L_15);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_15, (uint8_t)6);
		BinaryWriter_t3992595042 * L_16 = ___aWriter0;
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, __this);
		NullCheck(L_16);
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_16, L_17);
		goto IL_00c9;
	}

IL_00b1:
	{
		BinaryWriter_t3992595042 * L_18 = ___aWriter0;
		NullCheck(L_18);
		VirtActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_18, (uint8_t)3);
		BinaryWriter_t3992595042 * L_19 = ___aWriter0;
		String_t* L_20 = __this->get__data_1();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_19, L_20);
		goto IL_00c9;
	}

IL_00c9:
	{
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
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m4143221426 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		JSONNode_t2946056997 * L_0 = ___aNode0;
		__this->set__node_2(L_0);
		__this->set__key_1((String_t*)NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m1713835880 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aNode0, String_t* ___aKey1, const RuntimeMethod* method)
{
	{
		JSONNode__ctor_m4108532860(__this, /*hidden argument*/NULL);
		JSONNode_t2946056997 * L_0 = ___aNode0;
		__this->set__node_2(L_0);
		String_t* L_1 = ___aKey1;
		__this->set__key_1(L_1);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONLazyCreator_get_Item_m1604509049 (JSONLazyCreator_t3621052039 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_Item_m1604509049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JSONLazyCreator_t3621052039 * L_0 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m4143221426(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2105688194 (JSONLazyCreator_t3621052039 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_Item_m2105688194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t2340361630 * V_0 = NULL;
	{
		JSONArray_t2340361630 * L_0 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t2340361630 * L_1 = V_0;
		JSONNode_t2946056997 * L_2 = ___value1;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		JSONArray_t2340361630 * L_3 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONLazyCreator_get_Item_m3899434704 (JSONLazyCreator_t3621052039 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_Item_m3899434704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___aKey0;
		JSONLazyCreator_t3621052039 * L_1 = (JSONLazyCreator_t3621052039 *)il2cpp_codegen_object_new(JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m1713835880(L_1, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2231982194 (JSONLazyCreator_t3621052039 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_Item_m2231982194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONClass_t3407995562 * V_0 = NULL;
	JSONClass_t3407995562 * V_1 = NULL;
	{
		JSONClass_t3407995562 * L_0 = (JSONClass_t3407995562 *)il2cpp_codegen_object_new(JSONClass_t3407995562_il2cpp_TypeInfo_var);
		JSONClass__ctor_m1396220219(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		JSONClass_t3407995562 * L_1 = V_1;
		String_t* L_2 = ___aKey0;
		JSONNode_t2946056997 * L_3 = ___value1;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		JSONClass_t3407995562 * L_4 = V_1;
		V_0 = L_4;
		JSONClass_t3407995562 * L_5 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m639509886 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsInt_m639509886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		JSONData_t174396811 * L_0 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2943143987(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t174396811 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m1252161255 (JSONLazyCreator_t3621052039 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsInt_m1252161255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		JSONData_t174396811 * L_1 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2943143987(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t174396811 * L_2 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 SimpleJSON.JSONLazyCreator::get_AsLong()
extern "C"  int64_t JSONLazyCreator_get_AsLong_m1291925100 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsLong_m1291925100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		JSONData_t174396811 * L_0 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1751502893(L_0, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t174396811 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		return (((int64_t)((int64_t)0)));
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsLong(System.Int64)
extern "C"  void JSONLazyCreator_set_AsLong_m759719013 (JSONLazyCreator_t3621052039 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsLong_m759719013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		JSONData_t174396811 * L_1 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1751502893(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t174396811 * L_2 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m3107782794 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsFloat_m3107782794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		JSONData_t174396811 * L_0 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2917323853(L_0, (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t174396811 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m3660787451 (JSONLazyCreator_t3621052039 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsFloat_m3660787451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		float L_0 = ___value0;
		JSONData_t174396811 * L_1 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2917323853(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t174396811 * L_2 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m1582721663 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsDouble_m1582721663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		JSONData_t174396811 * L_0 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2933069627(L_0, (0.0), /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t174396811 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m2172386329 (JSONLazyCreator_t3621052039 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsDouble_m2172386329_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		double L_0 = ___value0;
		JSONData_t174396811 * L_1 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2933069627(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t174396811 * L_2 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m713101833 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsBool_m713101833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		JSONData_t174396811 * L_0 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m3982727161(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONData_t174396811 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m3560479934 (JSONLazyCreator_t3621052039 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_set_AsBool_m3560479934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		bool L_0 = ___value0;
		JSONData_t174396811 * L_1 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m3982727161(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONData_t174396811 * L_2 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t2340361630 * JSONLazyCreator_get_AsArray_m1273817130 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsArray_m1273817130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t2340361630 * V_0 = NULL;
	{
		JSONArray_t2340361630 * L_0 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t2340361630 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		JSONArray_t2340361630 * L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C"  JSONClass_t3407995562 * JSONLazyCreator_get_AsObject_m2838813368 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_get_AsObject_m2838813368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONClass_t3407995562 * V_0 = NULL;
	{
		JSONClass_t3407995562 * L_0 = (JSONClass_t3407995562 *)il2cpp_codegen_object_new(JSONClass_t3407995562_il2cpp_TypeInfo_var);
		JSONClass__ctor_m1396220219(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONClass_t3407995562 * L_1 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_1, /*hidden argument*/NULL);
		JSONClass_t3407995562 * L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Set_m642841580 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aVal0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__key_1();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t2946056997 * L_1 = __this->get__node_2();
		JSONNode_t2946056997 * L_2 = ___aVal0;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		goto IL_002e;
	}

IL_001c:
	{
		JSONNode_t2946056997 * L_3 = __this->get__node_2();
		String_t* L_4 = __this->get__key_1();
		JSONNode_t2946056997 * L_5 = ___aVal0;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_3, L_4, L_5);
	}

IL_002e:
	{
		__this->set__node_2((JSONNode_t2946056997 *)NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m1572478273 (JSONLazyCreator_t3621052039 * __this, JSONNode_t2946056997 * ___aItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_Add_m1572478273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t2340361630 * V_0 = NULL;
	{
		JSONArray_t2340361630 * L_0 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONArray_t2340361630 * L_1 = V_0;
		JSONNode_t2946056997 * L_2 = ___aItem0;
		NullCheck(L_1);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		JSONArray_t2340361630 * L_3 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m1239340615 (JSONLazyCreator_t3621052039 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_Add_m1239340615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONClass_t3407995562 * V_0 = NULL;
	JSONClass_t3407995562 * V_1 = NULL;
	{
		JSONClass_t3407995562 * L_0 = (JSONClass_t3407995562 *)il2cpp_codegen_object_new(JSONClass_t3407995562_il2cpp_TypeInfo_var);
		JSONClass__ctor_m1396220219(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		JSONClass_t3407995562 * L_1 = V_1;
		String_t* L_2 = ___aKey0;
		JSONNode_t2946056997 * L_3 = ___aItem1;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		JSONClass_t3407995562 * L_4 = V_1;
		V_0 = L_4;
		JSONClass_t3407995562 * L_5 = V_0;
		JSONLazyCreator_Set_m642841580(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m113693744 (RuntimeObject * __this /* static, unused */, JSONLazyCreator_t3621052039 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___b1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		JSONLazyCreator_t3621052039 * L_1 = ___a0;
		RuntimeObject * L_2 = ___b1;
		bool L_3 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m272214824 (RuntimeObject * __this /* static, unused */, JSONLazyCreator_t3621052039 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	{
		JSONLazyCreator_t3621052039 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		bool L_2 = JSONLazyCreator_op_Equality_m113693744(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m1206030535 (JSONLazyCreator_t3621052039 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, __this, L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m485192462 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = JSONNode_GetHashCode_m2855600823(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern "C"  String_t* JSONLazyCreator_ToString_m3745699412 (JSONLazyCreator_t3621052039 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_ToString_m3745699412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
	}
}
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern "C"  String_t* JSONLazyCreator_ToString_m3556827564 (JSONLazyCreator_t3621052039 * __this, String_t* ___aPrefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONLazyCreator_ToString_m3556827564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
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
// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m4108532860 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m3412224573 (JSONNode_t2946056997 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___aItem1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONNode_get_Item_m666679968 (JSONNode_t2946056997 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	{
		return (JSONNode_t2946056997 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m3863398006 (JSONNode_t2946056997 * __this, int32_t ___aIndex0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_get_Item_m549512498 (JSONNode_t2946056997 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	{
		return (JSONNode_t2946056997 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m2975862191 (JSONNode_t2946056997 * __this, String_t* ___aKey0, JSONNode_t2946056997 * ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m1803583094 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_Value_m1803583094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m164851360 (JSONNode_t2946056997 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m3208034033 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m1559930036 (JSONNode_t2946056997 * __this, JSONNode_t2946056997 * ___aItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Add_m1559930036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		JSONNode_t2946056997 * L_1 = ___aItem0;
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, L_0, L_1);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_Remove_m3322071993 (JSONNode_t2946056997 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	{
		return (JSONNode_t2946056997 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t2946056997 * JSONNode_Remove_m982669543 (JSONNode_t2946056997 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	{
		return (JSONNode_t2946056997 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t2946056997 * JSONNode_Remove_m3985872421 (JSONNode_t2946056997 * __this, JSONNode_t2946056997 * ___aNode0, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = ___aNode0;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children()
extern "C"  RuntimeObject* JSONNode_get_Children_m3071153908 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_Children_m3071153908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator0_t2360448098 * V_0 = NULL;
	{
		U3CU3Ec__Iterator0_t2360448098 * L_0 = (U3CU3Ec__Iterator0_t2360448098 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2360448098_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m2223295763(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator0_t2360448098 * L_1 = V_0;
		U3CU3Ec__Iterator0_t2360448098 * L_2 = L_1;
		NullCheck(L_2);
		L_2->set_U24PC_2(((int32_t)-2));
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
extern "C"  RuntimeObject* JSONNode_get_DeepChildren_m2537763012 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_DeepChildren_m2537763012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator1_t2360382562 * V_0 = NULL;
	{
		U3CU3Ec__Iterator1_t2360382562 * L_0 = (U3CU3Ec__Iterator1_t2360382562 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator1_t2360382562_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m2346700051(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__Iterator1_t2360382562 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_4(__this);
		U3CU3Ec__Iterator1_t2360382562 * L_2 = V_0;
		U3CU3Ec__Iterator1_t2360382562 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_7(((int32_t)-2));
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m3879752396 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ToString_m3879752396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2793780527;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C"  String_t* JSONNode_ToString_m572631385 (JSONNode_t2946056997 * __this, String_t* ___aPrefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_ToString_m572631385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral2793780527;
	}
}
// SimpleJSON.JSONBinaryTag SimpleJSON.JSONNode::get_Tag()
extern "C"  int32_t JSONNode_get_Tag_m2793774046 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTagU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Tag(SimpleJSON.JSONBinaryTag)
extern "C"  void JSONNode_set_Tag_m4149760350 (JSONNode_t2946056997 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTagU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNull()
extern "C"  bool JSONNode_get_IsNull_m432204863 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = JSONNode_get_Tag_m2793774046(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)9)))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m1744967455 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m3925067009 (JSONNode_t2946056997 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsInt_m3925067009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Int32_ToString_m1760361794((&___value0), L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		JSONNode_set_Tag_m4149760350(__this, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 SimpleJSON.JSONNode::get_AsLong()
extern "C"  int64_t JSONNode_get_AsLong_m2462365054 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int64_t G_B3_0 = 0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1 = Int64_TryParse_m2208578514(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int64_t L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_001a;
	}

IL_0018:
	{
		G_B3_0 = (((int64_t)((int64_t)0)));
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsLong(System.Int64)
extern "C"  void JSONNode_set_AsLong_m74205833 (JSONNode_t2946056997 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsLong_m74205833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Int64_ToString_m623640997((&___value0), L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		JSONNode_set_Tag_m4149760350(__this, 8, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m1174173524 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsFloat_m1174173524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Single_TryParse_m1572008725(NULL /*static, unused*/, L_0, ((int32_t)511), L_1, (&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		float L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_0027;
	}

IL_0022:
	{
		G_B3_0 = (0.0f);
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m3518333943 (JSONNode_t2946056997 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsFloat_m3518333943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Single_ToString_m3107811250((&___value0), L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		JSONNode_set_Tag_m4149760350(__this, 7, /*hidden argument*/NULL);
		return;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m3335246132 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsDouble_m3335246132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double G_B3_0 = 0.0;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_1 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Double_TryParse_m623190659(NULL /*static, unused*/, L_0, ((int32_t)511), L_1, (&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		double L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_0022:
	{
		G_B3_0 = (0.0);
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m2583247575 (JSONNode_t2946056997 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsDouble_m2583247575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Double_ToString_m3828879243((&___value0), L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		JSONNode_set_Tag_m4149760350(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m4176397070 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsBool_m4176397070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_1 = Boolean_TryParse_m1999513058(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2 = V_0;
		return L_2;
	}

IL_0014:
	{
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m3057475042 (JSONNode_t2946056997 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_set_AsBool_m3057475042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t2946056997 * G_B2_0 = NULL;
	JSONNode_t2946056997 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JSONNode_t2946056997 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = _stringLiteral4002445229;
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = _stringLiteral3875954633;
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		JSONNode_set_Tag_m4149760350(__this, 6, /*hidden argument*/NULL);
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C"  JSONArray_t2340361630 * JSONNode_get_AsArray_m715902207 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsArray_m715902207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return ((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)__this, JSONArray_t2340361630_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern "C"  JSONClass_t3407995562 * JSONNode_get_AsObject_m286744477 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_get_AsObject_m286744477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return ((JSONClass_t3407995562 *)IsInstClass((RuntimeObject*)__this, JSONClass_t3407995562_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_op_Implicit_m2523080653 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Implicit_m2523080653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		JSONData_t174396811 * L_1 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1359111335(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m1622328703 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___d0, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		JSONNode_t2946056997 * L_0 = ___d0;
		bool L_1 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0018;
	}

IL_0012:
	{
		JSONNode_t2946056997 * L_2 = ___d0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m2227562659 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_op_Equality_m2227562659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___b1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		JSONNode_t2946056997 * L_1 = ___a0;
		if (!((JSONLazyCreator_t3621052039 *)IsInstClass((RuntimeObject*)L_1, JSONLazyCreator_t3621052039_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		JSONNode_t2946056997 * L_2 = ___a0;
		RuntimeObject * L_3 = ___b1;
		bool L_4 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m3223804307 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		bool L_2 = JSONNode_op_Equality_m2227562659(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m2449771842 (JSONNode_t2946056997 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Object_ReferenceEquals_m610702577(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m2855600823 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Object_GetHashCode_m2705121830(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m3387382048 (RuntimeObject * __this /* static, unused */, String_t* ___aText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Escape_m3387382048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aText0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_00f2;
	}

IL_0014:
	{
		String_t* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00bf;
			}
			case 1:
			{
				goto IL_00ae;
			}
			case 2:
			{
				goto IL_008c;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_00d0;
			}
			case 5:
			{
				goto IL_009d;
			}
		}
	}

IL_003c:
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_007b;
		}
	}
	{
		Il2CppChar L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)47))))
		{
			goto IL_0059;
		}
	}
	{
		Il2CppChar L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_00e1;
	}

IL_0059:
	{
		StringBuilder_t * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m1965104174(L_10, _stringLiteral3450583028, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_006a:
	{
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m1965104174(L_11, _stringLiteral3458119668, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_007b:
	{
		StringBuilder_t * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m1965104174(L_12, _stringLiteral3450386420, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_008c:
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m1965104174(L_13, _stringLiteral3454842868, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_009d:
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_Append_m1965104174(L_14, _stringLiteral3455629300, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_00ae:
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, _stringLiteral3455498228, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_00bf:
	{
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m1965104174(L_16, _stringLiteral3454580724, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_00d0:
	{
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3454318580, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_00e1:
	{
		StringBuilder_t * L_18 = V_0;
		Il2CppChar L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m2383614642(L_18, L_19, /*hidden argument*/NULL);
		goto IL_00ee;
	}

IL_00ee:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00f2:
	{
		int32_t L_21 = V_3;
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0014;
		}
	}
	{
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		return L_25;
	}
}
// SimpleJSON.JSONData SimpleJSON.JSONNode::Numberize(System.String)
extern "C"  JSONData_t174396811 * JSONNode_Numberize_m3221440353 (RuntimeObject * __this /* static, unused */, String_t* ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Numberize_m3221440353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	{
		String_t* L_0 = ___token0;
		NullCheck(L_0);
		bool L_1 = String_Equals_m2270643605(L_0, _stringLiteral1202628576, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		JSONData_t174396811 * L_2 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1359111335(L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		String_t* L_3 = ___token0;
		bool L_4 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_3, (&V_1), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_1;
		JSONData_t174396811 * L_6 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2943143987(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_002b:
	{
		String_t* L_7 = ___token0;
		bool L_8 = Int64_TryParse_m2208578514(NULL /*static, unused*/, L_7, (&V_2), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		int64_t L_9 = V_2;
		JSONData_t174396811 * L_10 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1751502893(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_003f:
	{
		String_t* L_11 = ___token0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) > ((int32_t)7)))
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_13 = ___token0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_14 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_15 = Single_TryParse_m1572008725(NULL /*static, unused*/, L_13, ((int32_t)511), L_14, (&V_4), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		float L_16 = V_4;
		JSONData_t174396811 * L_17 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2917323853(L_17, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_006a:
	{
		String_t* L_18 = ___token0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_19 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_20 = Double_TryParse_m623190659(NULL /*static, unused*/, L_18, ((int32_t)511), L_19, (&V_3), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		double L_21 = V_3;
		JSONData_t174396811 * L_22 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2933069627(L_22, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0088:
	{
		String_t* L_23 = ___token0;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t97287965_il2cpp_TypeInfo_var);
		bool L_24 = Boolean_TryParse_m1999513058(NULL /*static, unused*/, L_23, (&V_0), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_009c;
		}
	}
	{
		bool L_25 = V_0;
		JSONData_t174396811 * L_26 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m3982727161(L_26, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_009c:
	{
		String_t* L_27 = ___token0;
		NotImplementedException_t3489357830 * L_28 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3095902440(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28);
	}
}
// System.Void SimpleJSON.JSONNode::AddElement(SimpleJSON.JSONNode,System.String,System.String,System.Boolean)
extern "C"  void JSONNode_AddElement_m1646164213 (RuntimeObject * __this /* static, unused */, JSONNode_t2946056997 * ___ctx0, String_t* ___token1, String_t* ___tokenName2, bool ___tokenIsString3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_AddElement_m1646164213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t174396811 * V_0 = NULL;
	{
		bool L_0 = ___tokenIsString3;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		JSONNode_t2946056997 * L_1 = ___ctx0;
		if (!((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)L_1, JSONArray_t2340361630_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		JSONNode_t2946056997 * L_2 = ___ctx0;
		String_t* L_3 = ___token1;
		JSONNode_t2946056997 * L_4 = JSONNode_op_Implicit_m2523080653(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_2, L_4);
		goto IL_002f;
	}

IL_0022:
	{
		JSONNode_t2946056997 * L_5 = ___ctx0;
		String_t* L_6 = ___tokenName2;
		String_t* L_7 = ___token1;
		JSONNode_t2946056997 * L_8 = JSONNode_op_Implicit_m2523080653(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_5, L_6, L_8);
	}

IL_002f:
	{
		goto IL_005a;
	}

IL_0034:
	{
		String_t* L_9 = ___token1;
		JSONData_t174396811 * L_10 = JSONNode_Numberize_m3221440353(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		JSONNode_t2946056997 * L_11 = ___ctx0;
		if (!((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)L_11, JSONArray_t2340361630_il2cpp_TypeInfo_var)))
		{
			goto IL_0052;
		}
	}
	{
		JSONNode_t2946056997 * L_12 = ___ctx0;
		JSONData_t174396811 * L_13 = V_0;
		NullCheck(L_12);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_12, L_13);
		goto IL_005a;
	}

IL_0052:
	{
		JSONNode_t2946056997 * L_14 = ___ctx0;
		String_t* L_15 = ___tokenName2;
		JSONData_t174396811 * L_16 = V_0;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_14, L_15, L_16);
	}

IL_005a:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_Parse_m883557124 (RuntimeObject * __this /* static, unused */, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Parse_m883557124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t3789446452 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	int32_t V_2 = 0;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	int32_t G_B41_0 = 0;
	{
		Stack_1_t3789446452 * L_0 = (Stack_1_t3789446452 *)il2cpp_codegen_object_new(Stack_1_t3789446452_il2cpp_TypeInfo_var);
		Stack_1__ctor_m2409004951(L_0, /*hidden argument*/Stack_1__ctor_m2409004951_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (JSONNode_t2946056997 *)NULL;
		V_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_2, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_4 = L_3;
		V_5 = (bool)0;
		V_6 = (bool)0;
		goto IL_050a;
	}

IL_0027:
	{
		String_t* L_4 = ___jsonString0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		V_7 = L_6;
		Il2CppChar L_7 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_02d9;
			}
			case 1:
			{
				goto IL_02d4;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_02d4;
			}
		}
	}

IL_004e:
	{
		Il2CppChar L_8 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_012b;
			}
			case 1:
			{
				goto IL_02ee;
			}
			case 2:
			{
				goto IL_01af;
			}
		}
	}
	{
		Il2CppChar L_9 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)32))))
		{
			case 0:
			{
				goto IL_02d9;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_0270;
			}
		}
	}

IL_007a:
	{
		Il2CppChar L_10 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_00a7;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_01af;
			}
		}
	}

IL_0090:
	{
		Il2CppChar L_11 = V_7;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)44))))
		{
			goto IL_028c;
		}
	}
	{
		Il2CppChar L_12 = V_7;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)58))))
		{
			goto IL_022d;
		}
	}
	{
		goto IL_039a;
	}

IL_00a7:
	{
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00bc;
		}
	}
	{
		StringBuilder_t * L_14 = V_3;
		Il2CppChar L_15 = V_7;
		NullCheck(L_14);
		StringBuilder_Append_m2383614642(L_14, L_15, /*hidden argument*/NULL);
		goto IL_0506;
	}

IL_00bc:
	{
		Stack_1_t3789446452 * L_16 = V_0;
		JSONClass_t3407995562 * L_17 = (JSONClass_t3407995562 *)il2cpp_codegen_object_new(JSONClass_t3407995562_il2cpp_TypeInfo_var);
		JSONClass__ctor_m1396220219(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Stack_1_Push_m1161466254(L_16, L_17, /*hidden argument*/Stack_1_Push_m1161466254_RuntimeMethod_var);
		JSONNode_t2946056997 * L_18 = V_1;
		bool L_19 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_18, NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_20 = V_4;
		NullCheck(L_20);
		String_t* L_21 = String_Trim_m923598732(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		JSONNode_t2946056997 * L_22 = V_1;
		if (!((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)L_22, JSONArray_t2340361630_il2cpp_TypeInfo_var)))
		{
			goto IL_00f8;
		}
	}
	{
		JSONNode_t2946056997 * L_23 = V_1;
		Stack_1_t3789446452 * L_24 = V_0;
		NullCheck(L_24);
		JSONNode_t2946056997 * L_25 = Stack_1_Peek_m3040978591(L_24, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		NullCheck(L_23);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_23, L_25);
		goto IL_0112;
	}

IL_00f8:
	{
		String_t* L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m3847582255(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0112;
		}
	}
	{
		JSONNode_t2946056997 * L_28 = V_1;
		String_t* L_29 = V_4;
		Stack_1_t3789446452 * L_30 = V_0;
		NullCheck(L_30);
		JSONNode_t2946056997 * L_31 = Stack_1_Peek_m3040978591(L_30, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_28, L_29, L_31);
	}

IL_0112:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_4 = L_32;
		StringBuilder_t * L_33 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_33, /*hidden argument*/NULL);
		V_3 = L_33;
		Stack_1_t3789446452 * L_34 = V_0;
		NullCheck(L_34);
		JSONNode_t2946056997 * L_35 = Stack_1_Peek_m3040978591(L_34, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		V_1 = L_35;
		goto IL_0506;
	}

IL_012b:
	{
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_0140;
		}
	}
	{
		StringBuilder_t * L_37 = V_3;
		Il2CppChar L_38 = V_7;
		NullCheck(L_37);
		StringBuilder_Append_m2383614642(L_37, L_38, /*hidden argument*/NULL);
		goto IL_0506;
	}

IL_0140:
	{
		Stack_1_t3789446452 * L_39 = V_0;
		JSONArray_t2340361630 * L_40 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		Stack_1_Push_m1161466254(L_39, L_40, /*hidden argument*/Stack_1_Push_m1161466254_RuntimeMethod_var);
		JSONNode_t2946056997 * L_41 = V_1;
		bool L_42 = JSONNode_op_Inequality_m3223804307(NULL /*static, unused*/, L_41, NULL, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = String_Trim_m923598732(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		JSONNode_t2946056997 * L_45 = V_1;
		if (!((JSONArray_t2340361630 *)IsInstClass((RuntimeObject*)L_45, JSONArray_t2340361630_il2cpp_TypeInfo_var)))
		{
			goto IL_017c;
		}
	}
	{
		JSONNode_t2946056997 * L_46 = V_1;
		Stack_1_t3789446452 * L_47 = V_0;
		NullCheck(L_47);
		JSONNode_t2946056997 * L_48 = Stack_1_Peek_m3040978591(L_47, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		NullCheck(L_46);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_46, L_48);
		goto IL_0196;
	}

IL_017c:
	{
		String_t* L_49 = V_4;
		NullCheck(L_49);
		int32_t L_50 = String_get_Length_m3847582255(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0196;
		}
	}
	{
		JSONNode_t2946056997 * L_51 = V_1;
		String_t* L_52 = V_4;
		Stack_1_t3789446452 * L_53 = V_0;
		NullCheck(L_53);
		JSONNode_t2946056997 * L_54 = Stack_1_Peek_m3040978591(L_53, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		NullCheck(L_51);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_51, L_52, L_54);
	}

IL_0196:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_4 = L_55;
		StringBuilder_t * L_56 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_56, /*hidden argument*/NULL);
		V_3 = L_56;
		Stack_1_t3789446452 * L_57 = V_0;
		NullCheck(L_57);
		JSONNode_t2946056997 * L_58 = Stack_1_Peek_m3040978591(L_57, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		V_1 = L_58;
		goto IL_0506;
	}

IL_01af:
	{
		bool L_59 = V_5;
		if (!L_59)
		{
			goto IL_01c4;
		}
	}
	{
		StringBuilder_t * L_60 = V_3;
		Il2CppChar L_61 = V_7;
		NullCheck(L_60);
		StringBuilder_Append_m2383614642(L_60, L_61, /*hidden argument*/NULL);
		goto IL_0506;
	}

IL_01c4:
	{
		Stack_1_t3789446452 * L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = Stack_1_get_Count_m288158433(L_62, /*hidden argument*/Stack_1_get_Count_m288158433_RuntimeMethod_var);
		if (L_63)
		{
			goto IL_01da;
		}
	}
	{
		Exception_t * L_64 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_64, _stringLiteral3600160164, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64);
	}

IL_01da:
	{
		Stack_1_t3789446452 * L_65 = V_0;
		NullCheck(L_65);
		Stack_1_Pop_m4204993319(L_65, /*hidden argument*/Stack_1_Pop_m4204993319_RuntimeMethod_var);
		StringBuilder_t * L_66 = V_3;
		NullCheck(L_66);
		int32_t L_67 = StringBuilder_get_Length_m3238060835(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0208;
		}
	}
	{
		String_t* L_68 = V_4;
		NullCheck(L_68);
		String_t* L_69 = String_Trim_m923598732(L_68, /*hidden argument*/NULL);
		V_4 = L_69;
		JSONNode_t2946056997 * L_70 = V_1;
		StringBuilder_t * L_71 = V_3;
		NullCheck(L_71);
		String_t* L_72 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_71);
		String_t* L_73 = V_4;
		bool L_74 = V_6;
		JSONNode_AddElement_m1646164213(NULL /*static, unused*/, L_70, L_72, L_73, L_74, /*hidden argument*/NULL);
		V_6 = (bool)0;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_75 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_4 = L_75;
		StringBuilder_t * L_76 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_76, /*hidden argument*/NULL);
		V_3 = L_76;
		Stack_1_t3789446452 * L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = Stack_1_get_Count_m288158433(L_77, /*hidden argument*/Stack_1_get_Count_m288158433_RuntimeMethod_var);
		if ((((int32_t)L_78) <= ((int32_t)0)))
		{
			goto IL_0228;
		}
	}
	{
		Stack_1_t3789446452 * L_79 = V_0;
		NullCheck(L_79);
		JSONNode_t2946056997 * L_80 = Stack_1_Peek_m3040978591(L_79, /*hidden argument*/Stack_1_Peek_m3040978591_RuntimeMethod_var);
		V_1 = L_80;
	}

IL_0228:
	{
		goto IL_0506;
	}

IL_022d:
	{
		bool L_81 = V_5;
		if (!L_81)
		{
			goto IL_0242;
		}
	}
	{
		StringBuilder_t * L_82 = V_3;
		Il2CppChar L_83 = V_7;
		NullCheck(L_82);
		StringBuilder_Append_m2383614642(L_82, L_83, /*hidden argument*/NULL);
		goto IL_0506;
	}

IL_0242:
	{
		String_t* L_84 = V_4;
		NullCheck(L_84);
		int32_t L_85 = String_get_Length_m3847582255(L_84, /*hidden argument*/NULL);
		if ((((int32_t)L_85) <= ((int32_t)0)))
		{
			goto IL_025a;
		}
	}
	{
		Exception_t * L_86 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_86, _stringLiteral2520869023, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_86);
	}

IL_025a:
	{
		StringBuilder_t * L_87 = V_3;
		NullCheck(L_87);
		String_t* L_88 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_87);
		V_4 = L_88;
		StringBuilder_t * L_89 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_89, /*hidden argument*/NULL);
		V_3 = L_89;
		V_6 = (bool)0;
		goto IL_0506;
	}

IL_0270:
	{
		bool L_90 = V_5;
		V_5 = (bool)((int32_t)((int32_t)L_90^(int32_t)1));
		bool L_91 = V_5;
		if (!L_91)
		{
			goto IL_0283;
		}
	}
	{
		G_B41_0 = 1;
		goto IL_0285;
	}

IL_0283:
	{
		bool L_92 = V_6;
		G_B41_0 = ((int32_t)(L_92));
	}

IL_0285:
	{
		V_6 = (bool)G_B41_0;
		goto IL_0506;
	}

IL_028c:
	{
		bool L_93 = V_5;
		if (!L_93)
		{
			goto IL_02a1;
		}
	}
	{
		StringBuilder_t * L_94 = V_3;
		Il2CppChar L_95 = V_7;
		NullCheck(L_94);
		StringBuilder_Append_m2383614642(L_94, L_95, /*hidden argument*/NULL);
		goto IL_0506;
	}

IL_02a1:
	{
		StringBuilder_t * L_96 = V_3;
		NullCheck(L_96);
		int32_t L_97 = StringBuilder_get_Length_m3238060835(L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_02bf;
		}
	}
	{
		JSONNode_t2946056997 * L_98 = V_1;
		StringBuilder_t * L_99 = V_3;
		NullCheck(L_99);
		String_t* L_100 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_99);
		String_t* L_101 = V_4;
		bool L_102 = V_6;
		JSONNode_AddElement_m1646164213(NULL /*static, unused*/, L_98, L_100, L_101, L_102, /*hidden argument*/NULL);
		V_6 = (bool)0;
	}

IL_02bf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_103 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_4 = L_103;
		StringBuilder_t * L_104 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_104, /*hidden argument*/NULL);
		V_3 = L_104;
		V_6 = (bool)0;
		goto IL_0506;
	}

IL_02d4:
	{
		goto IL_0506;
	}

IL_02d9:
	{
		bool L_105 = V_5;
		if (!L_105)
		{
			goto IL_02e9;
		}
	}
	{
		StringBuilder_t * L_106 = V_3;
		Il2CppChar L_107 = V_7;
		NullCheck(L_106);
		StringBuilder_Append_m2383614642(L_106, L_107, /*hidden argument*/NULL);
	}

IL_02e9:
	{
		goto IL_0506;
	}

IL_02ee:
	{
		int32_t L_108 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
		bool L_109 = V_5;
		if (!L_109)
		{
			goto IL_0395;
		}
	}
	{
		String_t* L_110 = ___jsonString0;
		int32_t L_111 = V_2;
		NullCheck(L_110);
		Il2CppChar L_112 = String_get_Chars_m2986988803(L_110, L_111, /*hidden argument*/NULL);
		V_8 = L_112;
		Il2CppChar L_113 = V_8;
		if ((((int32_t)L_113) == ((int32_t)((int32_t)34))))
		{
			goto IL_0339;
		}
	}
	{
		Il2CppChar L_114 = V_8;
		if ((((int32_t)L_114) == ((int32_t)((int32_t)47))))
		{
			goto IL_032b;
		}
	}
	{
		Il2CppChar L_115 = V_8;
		if ((((int32_t)L_115) == ((int32_t)((int32_t)92))))
		{
			goto IL_0347;
		}
	}
	{
		Il2CppChar L_116 = V_8;
		if ((((int32_t)L_116) == ((int32_t)((int32_t)117))))
		{
			goto IL_0355;
		}
	}
	{
		goto IL_037e;
	}

IL_032b:
	{
		StringBuilder_t * L_117 = V_3;
		NullCheck(L_117);
		StringBuilder_Append_m2383614642(L_117, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_0395;
	}

IL_0339:
	{
		StringBuilder_t * L_118 = V_3;
		NullCheck(L_118);
		StringBuilder_Append_m2383614642(L_118, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_0395;
	}

IL_0347:
	{
		StringBuilder_t * L_119 = V_3;
		NullCheck(L_119);
		StringBuilder_Append_m2383614642(L_119, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_0395;
	}

IL_0355:
	{
		String_t* L_120 = ___jsonString0;
		int32_t L_121 = V_2;
		NullCheck(L_120);
		String_t* L_122 = String_Substring_m1610150815(L_120, ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1)), 4, /*hidden argument*/NULL);
		V_9 = L_122;
		StringBuilder_t * L_123 = V_3;
		String_t* L_124 = V_9;
		int32_t L_125 = Int32_Parse_m2244041137(NULL /*static, unused*/, L_124, ((int32_t)512), /*hidden argument*/NULL);
		NullCheck(L_123);
		StringBuilder_Append_m2383614642(L_123, (((int32_t)((uint16_t)L_125))), /*hidden argument*/NULL);
		int32_t L_126 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)4));
		goto IL_0395;
	}

IL_037e:
	{
		StringBuilder_t * L_127 = V_3;
		NullCheck(L_127);
		StringBuilder_Append_m2383614642(L_127, ((int32_t)92), /*hidden argument*/NULL);
		StringBuilder_t * L_128 = V_3;
		Il2CppChar L_129 = V_8;
		NullCheck(L_128);
		StringBuilder_Append_m2383614642(L_128, L_129, /*hidden argument*/NULL);
		goto IL_0395;
	}

IL_0395:
	{
		goto IL_0506;
	}

IL_039a:
	{
		bool L_130 = V_5;
		if (L_130)
		{
			goto IL_04f8;
		}
	}
	{
		Il2CppChar L_131 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_131, (int32_t)((int32_t)43))))
		{
			case 0:
			{
				goto IL_0440;
			}
			case 1:
			{
				goto IL_0417;
			}
			case 2:
			{
				goto IL_0440;
			}
			case 3:
			{
				goto IL_0440;
			}
			case 4:
			{
				goto IL_0417;
			}
			case 5:
			{
				goto IL_0440;
			}
			case 6:
			{
				goto IL_0440;
			}
			case 7:
			{
				goto IL_0440;
			}
			case 8:
			{
				goto IL_0440;
			}
			case 9:
			{
				goto IL_0440;
			}
			case 10:
			{
				goto IL_0440;
			}
			case 11:
			{
				goto IL_0440;
			}
			case 12:
			{
				goto IL_0440;
			}
			case 13:
			{
				goto IL_0440;
			}
			case 14:
			{
				goto IL_0440;
			}
			case 15:
			{
				goto IL_0417;
			}
			case 16:
			{
				goto IL_0417;
			}
			case 17:
			{
				goto IL_0417;
			}
			case 18:
			{
				goto IL_0417;
			}
			case 19:
			{
				goto IL_0417;
			}
			case 20:
			{
				goto IL_0417;
			}
			case 21:
			{
				goto IL_0417;
			}
			case 22:
			{
				goto IL_0417;
			}
			case 23:
			{
				goto IL_0417;
			}
			case 24:
			{
				goto IL_0417;
			}
			case 25:
			{
				goto IL_0417;
			}
			case 26:
			{
				goto IL_0440;
			}
		}
	}

IL_0417:
	{
		Il2CppChar L_132 = V_7;
		if ((((int32_t)L_132) == ((int32_t)((int32_t)101))))
		{
			goto IL_0440;
		}
	}
	{
		Il2CppChar L_133 = V_7;
		if ((((int32_t)L_133) == ((int32_t)((int32_t)102))))
		{
			goto IL_047d;
		}
	}
	{
		Il2CppChar L_134 = V_7;
		if ((((int32_t)L_134) == ((int32_t)((int32_t)110))))
		{
			goto IL_0445;
		}
	}
	{
		Il2CppChar L_135 = V_7;
		if ((((int32_t)L_135) == ((int32_t)((int32_t)116))))
		{
			goto IL_04b5;
		}
	}
	{
		goto IL_04ed;
	}

IL_0440:
	{
		goto IL_04f8;
	}

IL_0445:
	{
		String_t* L_136 = ___jsonString0;
		int32_t L_137 = V_2;
		NullCheck(L_136);
		String_t* L_138 = String_Substring_m1610150815(L_136, L_137, 4, /*hidden argument*/NULL);
		V_10 = L_138;
		String_t* L_139 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_140 = String_op_Equality_m920492651(NULL /*static, unused*/, L_139, _stringLiteral1202628576, /*hidden argument*/NULL);
		if (!L_140)
		{
			goto IL_0472;
		}
	}
	{
		int32_t L_141 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)4));
		StringBuilder_t * L_142 = V_3;
		String_t* L_143 = V_10;
		NullCheck(L_142);
		StringBuilder_Append_m1965104174(L_142, L_143, /*hidden argument*/NULL);
		goto IL_050a;
	}

IL_0472:
	{
		Exception_t * L_144 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_144, _stringLiteral2962742473, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144);
	}

IL_047d:
	{
		String_t* L_145 = ___jsonString0;
		int32_t L_146 = V_2;
		NullCheck(L_145);
		String_t* L_147 = String_Substring_m1610150815(L_145, L_146, 5, /*hidden argument*/NULL);
		V_11 = L_147;
		String_t* L_148 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_149 = String_op_Equality_m920492651(NULL /*static, unused*/, L_148, _stringLiteral3875954633, /*hidden argument*/NULL);
		if (!L_149)
		{
			goto IL_04aa;
		}
	}
	{
		int32_t L_150 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)5));
		StringBuilder_t * L_151 = V_3;
		String_t* L_152 = V_11;
		NullCheck(L_151);
		StringBuilder_Append_m1965104174(L_151, L_152, /*hidden argument*/NULL);
		goto IL_050a;
	}

IL_04aa:
	{
		Exception_t * L_153 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_153, _stringLiteral2962742473, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_153);
	}

IL_04b5:
	{
		String_t* L_154 = ___jsonString0;
		int32_t L_155 = V_2;
		NullCheck(L_154);
		String_t* L_156 = String_Substring_m1610150815(L_154, L_155, 4, /*hidden argument*/NULL);
		V_12 = L_156;
		String_t* L_157 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_158 = String_op_Equality_m920492651(NULL /*static, unused*/, L_157, _stringLiteral4002445229, /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_04e2;
		}
	}
	{
		int32_t L_159 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)4));
		StringBuilder_t * L_160 = V_3;
		String_t* L_161 = V_12;
		NullCheck(L_160);
		StringBuilder_Append_m1965104174(L_160, L_161, /*hidden argument*/NULL);
		goto IL_050a;
	}

IL_04e2:
	{
		Exception_t * L_162 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_162, _stringLiteral2962742473, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_162);
	}

IL_04ed:
	{
		Exception_t * L_163 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_163, _stringLiteral2962742473, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_163);
	}

IL_04f8:
	{
		StringBuilder_t * L_164 = V_3;
		Il2CppChar L_165 = V_7;
		NullCheck(L_164);
		StringBuilder_Append_m2383614642(L_164, L_165, /*hidden argument*/NULL);
		goto IL_0506;
	}

IL_0506:
	{
		int32_t L_166 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)1));
	}

IL_050a:
	{
		int32_t L_167 = V_2;
		String_t* L_168 = ___jsonString0;
		NullCheck(L_168);
		int32_t L_169 = String_get_Length_m3847582255(L_168, /*hidden argument*/NULL);
		if ((((int32_t)L_167) < ((int32_t)L_169)))
		{
			goto IL_0027;
		}
	}
	{
		bool L_170 = V_5;
		if (!L_170)
		{
			goto IL_0528;
		}
	}
	{
		Exception_t * L_171 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_171, _stringLiteral4214229893, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_171);
	}

IL_0528:
	{
		Stack_1_t3789446452 * L_172 = V_0;
		NullCheck(L_172);
		int32_t L_173 = Stack_1_get_Count_m288158433(L_172, /*hidden argument*/Stack_1_get_Count_m288158433_RuntimeMethod_var);
		if (!L_173)
		{
			goto IL_053e;
		}
	}
	{
		Exception_t * L_174 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_174, _stringLiteral2362785171, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_174);
	}

IL_053e:
	{
		JSONNode_t2946056997 * L_175 = V_1;
		return L_175;
	}
}
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNode_Serialize_m2202220272 (JSONNode_t2946056997 * __this, BinaryWriter_t3992595042 * ___aWriter0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m416890596 (JSONNode_t2946056997 * __this, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToStream_m416890596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryWriter_t3992595042 * V_0 = NULL;
	{
		Stream_t1273022909 * L_0 = ___aData0;
		BinaryWriter_t3992595042 * L_1 = (BinaryWriter_t3992595042 *)il2cpp_codegen_object_new(BinaryWriter_t3992595042_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m1874693998(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BinaryWriter_t3992595042 * L_2 = V_0;
		VirtActionInvoker1< BinaryWriter_t3992595042 * >::Invoke(31 /* System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter) */, __this, L_2);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m2127353253 (JSONNode_t2946056997 * __this, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToCompressedStream_m2127353253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m1574216136 (JSONNode_t2946056997 * __this, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToCompressedFile_m1574216136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m2429603569 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToCompressedBase64_m2429603569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern "C"  void JSONNode_SaveToFile_m2435109258 (JSONNode_t2946056997 * __this, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToFile_m2435109258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfo_t35957480 * V_0 = NULL;
	FileStream_t4292183065 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___aFileName0;
		FileInfo_t1169991790 * L_1 = (FileInfo_t1169991790 *)il2cpp_codegen_object_new(FileInfo_t1169991790_il2cpp_TypeInfo_var);
		FileInfo__ctor_m3289795077(L_1, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DirectoryInfo_t35957480 * L_2 = FileInfo_get_Directory_m2050317500(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DirectoryInfo_t35957480 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		DirectoryInfo_t35957480 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_4);
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_6 = ___aFileName0;
		FileStream_t4292183065 * L_7 = File_OpenWrite_m24069155(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		FileStream_t4292183065 * L_8 = V_1;
		JSONNode_SaveToStream_m416890596(__this, L_8, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3E, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_9 = V_1;
			if (!L_9)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			FileStream_t4292183065 * L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		return;
	}
}
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern "C"  String_t* JSONNode_SaveToBase64_m1405157809 (JSONNode_t2946056997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_SaveToBase64_m1405157809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		MemoryStream_t94973147 * L_1 = V_0;
		JSONNode_SaveToStream_m416890596(__this, L_1, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, (((int64_t)((int64_t)0))));
		MemoryStream_t94973147 * L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_5 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_LEAVE(0x33, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			MemoryStream_t94973147 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_7);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0033:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t2946056997 * JSONNode_Deserialize_m280376878 (RuntimeObject * __this /* static, unused */, BinaryReader_t2428077293 * ___aReader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_Deserialize_m280376878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JSONArray_t2340361630 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	JSONClass_t3407995562 * V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	JSONNode_t2946056997 * V_8 = NULL;
	{
		BinaryReader_t2428077293 * L_0 = ___aReader0;
		NullCheck(L_0);
		uint8_t L_1 = VirtFuncInvoker0< uint8_t >::Invoke(13 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00a9;
			}
			case 3:
			{
				goto IL_00b5;
			}
			case 4:
			{
				goto IL_00c1;
			}
			case 5:
			{
				goto IL_00cd;
			}
			case 6:
			{
				goto IL_00d9;
			}
			case 7:
			{
				goto IL_00e5;
			}
			case 8:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0038:
	{
		BinaryReader_t2428077293 * L_3 = ___aReader0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_1 = L_4;
		JSONArray_t2340361630 * L_5 = (JSONArray_t2340361630 *)il2cpp_codegen_object_new(JSONArray_t2340361630_il2cpp_TypeInfo_var);
		JSONArray__ctor_m1810447092(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_005c;
	}

IL_004c:
	{
		JSONArray_t2340361630 * L_6 = V_2;
		BinaryReader_t2428077293 * L_7 = ___aReader0;
		JSONNode_t2946056997 * L_8 = JSONNode_Deserialize_m280376878(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< JSONNode_t2946056997 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_6, L_8);
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		JSONArray_t2340361630 * L_12 = V_2;
		return L_12;
	}

IL_0065:
	{
		BinaryReader_t2428077293 * L_13 = ___aReader0;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_13);
		V_4 = L_14;
		JSONClass_t3407995562 * L_15 = (JSONClass_t3407995562 *)il2cpp_codegen_object_new(JSONClass_t3407995562_il2cpp_TypeInfo_var);
		JSONClass__ctor_m1396220219(L_15, /*hidden argument*/NULL);
		V_5 = L_15;
		V_6 = 0;
		goto IL_009d;
	}

IL_007c:
	{
		BinaryReader_t2428077293 * L_16 = ___aReader0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_16);
		V_7 = L_17;
		BinaryReader_t2428077293 * L_18 = ___aReader0;
		JSONNode_t2946056997 * L_19 = JSONNode_Deserialize_m280376878(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_8 = L_19;
		JSONClass_t3407995562 * L_20 = V_5;
		String_t* L_21 = V_7;
		JSONNode_t2946056997 * L_22 = V_8;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, JSONNode_t2946056997 * >::Invoke(4 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_20, L_21, L_22);
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_009d:
	{
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_007c;
		}
	}
	{
		JSONClass_t3407995562 * L_26 = V_5;
		return L_26;
	}

IL_00a9:
	{
		BinaryReader_t2428077293 * L_27 = ___aReader0;
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_27);
		JSONData_t174396811 * L_29 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1359111335(L_29, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_00b5:
	{
		BinaryReader_t2428077293 * L_30 = ___aReader0;
		NullCheck(L_30);
		int32_t L_31 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_30);
		JSONData_t174396811 * L_32 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2943143987(L_32, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_00c1:
	{
		BinaryReader_t2428077293 * L_33 = ___aReader0;
		NullCheck(L_33);
		double L_34 = VirtFuncInvoker0< double >::Invoke(17 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_33);
		JSONData_t174396811 * L_35 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2933069627(L_35, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00cd:
	{
		BinaryReader_t2428077293 * L_36 = ___aReader0;
		NullCheck(L_36);
		bool L_37 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_36);
		JSONData_t174396811 * L_38 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m3982727161(L_38, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_00d9:
	{
		BinaryReader_t2428077293 * L_39 = ___aReader0;
		NullCheck(L_39);
		float L_40 = VirtFuncInvoker0< float >::Invoke(23 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_39);
		JSONData_t174396811 * L_41 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m2917323853(L_41, L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_00e5:
	{
		BinaryReader_t2428077293 * L_42 = ___aReader0;
		NullCheck(L_42);
		int64_t L_43 = VirtFuncInvoker0< int64_t >::Invoke(20 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_42);
		JSONData_t174396811 * L_44 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1751502893(L_44, L_43, /*hidden argument*/NULL);
		return L_44;
	}

IL_00f1:
	{
		JSONData_t174396811 * L_45 = (JSONData_t174396811 *)il2cpp_codegen_object_new(JSONData_t174396811_il2cpp_TypeInfo_var);
		JSONData__ctor_m1359111335(L_45, (String_t*)NULL, /*hidden argument*/NULL);
		return L_45;
	}

IL_00f8:
	{
		Exception_t * L_46 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_46, _stringLiteral3308483698, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromCompressedFile_m1190016295 (RuntimeObject * __this /* static, unused */, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromCompressedFile_m1190016295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromCompressedStream_m2944368907 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromCompressedStream_m2944368907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromCompressedBase64_m515598289 (RuntimeObject * __this /* static, unused */, String_t* ___aBase640, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromCompressedBase64_m515598289_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_0, _stringLiteral3373200493, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromStream_m750673342 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromStream_m750673342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t2428077293 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t1273022909 * L_0 = ___aData0;
		BinaryReader_t2428077293 * L_1 = (BinaryReader_t2428077293 *)il2cpp_codegen_object_new(BinaryReader_t2428077293_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m2602947653(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		BinaryReader_t2428077293 * L_2 = V_0;
		JSONNode_t2946056997 * L_3 = JSONNode_Deserialize_m280376878(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x20, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		{
			BinaryReader_t2428077293 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			BinaryReader_t2428077293 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(19)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		JSONNode_t2946056997 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromFile_m2470411988 (RuntimeObject * __this /* static, unused */, String_t* ___aFileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromFile_m2470411988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t4292183065 * V_0 = NULL;
	JSONNode_t2946056997 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___aFileName0;
		FileStream_t4292183065 * L_1 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		FileStream_t4292183065 * L_2 = V_0;
		JSONNode_t2946056997 * L_3 = JSONNode_LoadFromStream_m750673342(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x20, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			FileStream_t4292183065 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(19)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		JSONNode_t2946056997 * L_6 = V_1;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern "C"  JSONNode_t2946056997 * JSONNode_LoadFromBase64_m1319289953 (RuntimeObject * __this /* static, unused */, String_t* ___aBase640, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONNode_LoadFromBase64_m1319289953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	MemoryStream_t94973147 * V_1 = NULL;
	MemoryStream_t94973147 * V_2 = NULL;
	{
		String_t* L_0 = ___aBase640;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = V_0;
		MemoryStream_t94973147 * L_3 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_3, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		MemoryStream_t94973147 * L_4 = V_2;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(10 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, (((int64_t)((int64_t)0))));
		MemoryStream_t94973147 * L_5 = V_2;
		V_1 = L_5;
		MemoryStream_t94973147 * L_6 = V_1;
		JSONNode_t2946056997 * L_7 = JSONNode_LoadFromStream_m750673342(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
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
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::.ctor()
extern "C"  void U3CU3Ec__Iterator0__ctor_m2223295763 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator0::MoveNext()
extern "C"  bool U3CU3Ec__Iterator0_MoveNext_m840149228 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U24PC_2();
		__this->set_U24PC_2((-1));
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0017;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m2165411879 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m572992195 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Dispose()
extern "C"  void U3CU3Ec__Iterator0_Dispose_m2389997204 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator0::Reset()
extern "C"  void U3CU3Ec__Iterator0_Reset_m3539192766 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_Reset_m3539192766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_IEnumerable_GetEnumerator_m2046900386 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator0::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774 (U3CU3Ec__Iterator0_t2360448098 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator0_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m604023774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_U24PC_2();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator0_t2360448098 * L_2 = (U3CU3Ec__Iterator0_t2360448098 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator0_t2360448098_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator0__ctor_m2223295763(L_2, /*hidden argument*/NULL);
		return L_2;
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
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::.ctor()
extern "C"  void U3CU3Ec__Iterator1__ctor_m2346700051 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<>c__Iterator1::MoveNext()
extern "C"  bool U3CU3Ec__Iterator1_MoveNext_m3186589243 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_MoveNext_m3186589243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0023:
	{
		JSONNode_t2946056997 * L_2 = __this->get_U24this_4();
		NullCheck(L_2);
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(16 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children() */, L_2);
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t1925909886_il2cpp_TypeInfo_var, L_3);
		__this->set_U24locvar0_0(L_4);
		V_0 = ((int32_t)-3);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_5 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0077;
				}
			}
		}

IL_0048:
		{
			goto IL_00eb;
		}

IL_004d:
		{
			RuntimeObject* L_6 = __this->get_U24locvar0_0();
			NullCheck(L_6);
			JSONNode_t2946056997 * L_7 = InterfaceFuncInvoker0< JSONNode_t2946056997 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t3378627465_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CCU3E__1_1(L_7);
			JSONNode_t2946056997 * L_8 = __this->get_U3CCU3E__1_1();
			NullCheck(L_8);
			RuntimeObject* L_9 = JSONNode_get_DeepChildren_m2537763012(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t1925909886_il2cpp_TypeInfo_var, L_9);
			__this->set_U24locvar1_2(L_10);
			V_0 = ((int32_t)-3);
		}

IL_0077:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_11 = V_0;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)))
				{
					case 0:
					{
						goto IL_00bb;
					}
				}
			}

IL_0083:
			{
				goto IL_00bb;
			}

IL_0088:
			{
				RuntimeObject* L_12 = __this->get_U24locvar1_2();
				NullCheck(L_12);
				JSONNode_t2946056997 * L_13 = InterfaceFuncInvoker0< JSONNode_t2946056997 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t3378627465_il2cpp_TypeInfo_var, L_12);
				__this->set_U3CDU3E__2_3(L_13);
				JSONNode_t2946056997 * L_14 = __this->get_U3CDU3E__2_3();
				__this->set_U24current_5(L_14);
				bool L_15 = __this->get_U24disposing_6();
				if (L_15)
				{
					goto IL_00b4;
				}
			}

IL_00ad:
			{
				__this->set_U24PC_7(1);
			}

IL_00b4:
			{
				V_1 = (bool)1;
				IL2CPP_LEAVE(0x124, FINALLY_00d0);
			}

IL_00bb:
			{
				RuntimeObject* L_16 = __this->get_U24locvar1_2();
				NullCheck(L_16);
				bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0088;
				}
			}

IL_00cb:
			{
				IL2CPP_LEAVE(0xEB, FINALLY_00d0);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00d0;
		}

FINALLY_00d0:
		{ // begin finally (depth: 2)
			{
				bool L_18 = V_1;
				if (!L_18)
				{
					goto IL_00d4;
				}
			}

IL_00d3:
			{
				IL2CPP_END_FINALLY(208)
			}

IL_00d4:
			{
				RuntimeObject* L_19 = __this->get_U24locvar1_2();
				if (!L_19)
				{
					goto IL_00ea;
				}
			}

IL_00df:
			{
				RuntimeObject* L_20 = __this->get_U24locvar1_2();
				NullCheck(L_20);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
			}

IL_00ea:
			{
				IL2CPP_END_FINALLY(208)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(208)
		{
			IL2CPP_END_CLEANUP(0x124, FINALLY_0100);
			IL2CPP_JUMP_TBL(0xEB, IL_00eb)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00eb:
		{
			RuntimeObject* L_21 = __this->get_U24locvar0_0();
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_004d;
			}
		}

IL_00fb:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_0100);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0100;
	}

FINALLY_0100:
	{ // begin finally (depth: 1)
		{
			bool L_23 = V_1;
			if (!L_23)
			{
				goto IL_0104;
			}
		}

IL_0103:
		{
			IL2CPP_END_FINALLY(256)
		}

IL_0104:
		{
			RuntimeObject* L_24 = __this->get_U24locvar0_0();
			if (!L_24)
			{
				goto IL_011a;
			}
		}

IL_010f:
		{
			RuntimeObject* L_25 = __this->get_U24locvar0_0();
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_011a:
		{
			IL2CPP_END_FINALLY(256)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(256)
	{
		IL2CPP_JUMP_TBL(0x124, IL_0124)
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011b:
	{
		__this->set_U24PC_7((-1));
	}

IL_0122:
	{
		return (bool)0;
	}

IL_0124:
	{
		return (bool)1;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
extern "C"  JSONNode_t2946056997 * U3CU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m3511466412 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m4075242723 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2946056997 * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Dispose()
extern "C"  void U3CU3Ec__Iterator1_Dispose_m1364031124 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_Dispose_m1364031124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0060;
			}
			case 1:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x44, FINALLY_002d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002d;
		}

FINALLY_002d:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_2 = __this->get_U24locvar1_2();
				if (!L_2)
				{
					goto IL_0043;
				}
			}

IL_0038:
			{
				RuntimeObject* L_3 = __this->get_U24locvar1_2();
				NullCheck(L_3);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_3);
			}

IL_0043:
			{
				IL2CPP_END_FINALLY(45)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(45)
		{
			IL2CPP_JUMP_TBL(0x44, IL_0044)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x60, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_4 = __this->get_U24locvar0_0();
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0054:
		{
			RuntimeObject* L_5 = __this->get_U24locvar0_0();
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_005f:
		{
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0060:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<>c__Iterator1::Reset()
extern "C"  void U3CU3Ec__Iterator1_Reset_m3127036862 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_Reset_m3127036862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator1_System_Collections_IEnumerable_GetEnumerator_m2166885297 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<>c__Iterator1::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835 (U3CU3Ec__Iterator1_t2360382562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2008029835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__Iterator1_t2360382562 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_7();
		int32_t L_1 = Interlocked_CompareExchange_m3023855514(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CU3Ec__Iterator1_t2360382562 * L_2 = (U3CU3Ec__Iterator1_t2360382562 *)il2cpp_codegen_object_new(U3CU3Ec__Iterator1_t2360382562_il2cpp_TypeInfo_var);
		U3CU3Ec__Iterator1__ctor_m2346700051(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CU3Ec__Iterator1_t2360382562 * L_3 = V_0;
		JSONNode_t2946056997 * L_4 = __this->get_U24this_4();
		NullCheck(L_3);
		L_3->set_U24this_4(L_4);
		U3CU3Ec__Iterator1_t2360382562 * L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
