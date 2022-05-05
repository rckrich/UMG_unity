#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object>
struct Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72;
// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_t8F7F9C0060E776DC5CD1D85E4FBD23B8B0B3BA64;
// Newtonsoft.Json.Serialization.Func`1<System.Object>
struct Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D;
// Newtonsoft.Json.Serialization.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E;
// Newtonsoft.Json.Serialization.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_tA173AB5CCE7F28E756A0FADD37DDB74758237EFF;
// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_tCA14B32A08F564DAAEE47B39E1AB7CF7017CB169;
// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_tC8896E04E589774D92B129CDF7F2DE9A08987B79;
// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String>
struct Func_2_t07351A5E52437F380180723A7232AC0984D5F542;
// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_t29DEF59C2973FA82D6D04D0EF1931C34463B8BB0;
// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4;
// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_tEFFA9C37B39B4B3E0D3EB86678AC106864DF91EE;
// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801;
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>
struct Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926;
// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Type>
struct Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5;
// Newtonsoft.Json.Serialization.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5996012D0DDCCF04ED0C4AFFD169CCEC6CCAEBDB;
// Newtonsoft.Json.Serialization.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct Func_2_tB04646B3E32B1ACF0337750AB2AA0C221D2A97D6;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_tBE5177484D8F3BF6CAF05CD3C8565FACB83809E6;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t95D3767B056A0725AEC9582EDEE0EEC9F9524209;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t52E4CE6A2808933DF561E8BD1A816878E4ED6EF1;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Newtonsoft.Json.Converters.IXmlNode[]
struct IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t577331C5F215B608BDAEF6E6CD6442F3C31635C9;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_t121CAEBE1D8630D2C8F435453E4F985493D59263;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t01C56EA4DC88BFF5762767372345D3FF8EE018BC;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t89252717EE38475D89AAAF670485C3661CCA2332;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB;
// Newtonsoft.Json.Linq.JObject
struct JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E;
// Newtonsoft.Json.Linq.JToken
struct JToken_t606FB532FD973C5800A5960B13BA97792A11451A;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_tE3561D428ABCA7700E7379E6DD2DDC11D24D0D0A;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B;
// Newtonsoft.Json.JsonException
struct JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6;
// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_tE87EA568599AEFAB20A3C212EB676D70C9B6EF33;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC;
// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F;
// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2;
// System.Xml.XmlElement
struct XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF;
// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0;
// System.Xml.XmlName
struct XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771;
// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1;
// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2;
// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t11F4C66CA97D84257B99DC65905C98CF42FF27A1;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t955C16680F33DE4E774D9F9012A7672337728E38;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_2
struct U3CU3Ec__DisplayClass44_2_t496433757A5D05A8A92A7DD44EF42BD859F8AAE9;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_tEAFE3C5BC3BB5C3EDE6E44A9345703DD49AE132D;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass78_0
struct U3CU3Ec__DisplayClass78_0_tB69574AC22E6FDEF5D5EE44C01352F4A8F97471E;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_tE72796F9A82BAC28B5249F3FE94FC812EE83FA66;
// Newtonsoft.Json.DefaultJsonNameTable/Entry
struct Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
struct U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC125E0CD29E109BEB28FC6552EB6AACB295A9A3C;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t5501618C98A023C3D5C1B39A834AEB76C15D5F59;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
struct ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136;
// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57
struct U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF;
// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_tB06A5CB81A9689F21E56D3474305B1D5559F015B;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_tE7E8A5FF5291B5423F9C186518DA3324167C5D11;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tAF13918CD4071B66752875EA68B937DAC2992BE5;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t2485B59B603D9DA185808FAFEACC7E5DD8178177;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t9AA539C0E66ADBF64CD317BBFC81A71476F78290;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t5EA6F0BB60CF86C190FCBE0EF5E43E8ADCB1C00F;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t3B67A6D488F39C9E1E54D461B52C88721E1754F5;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t3F322302FF041E63376BB1F8C1AB2CE5F206EB7A;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
struct U3CU3Ec__DisplayClass11_2_tD4AD244B508A32D589B51182B531126AE5FFE25D;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t1AB88156DEA5BB047C2B90CF8F034FCBC885F99E;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_tF600AF9097C2A9C29B62258A96291E141EF7B98C;
// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t07297B91FC4E404AA3E6FE68B3C538E0DFCD65BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBE5177484D8F3BF6CAF05CD3C8565FACB83809E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_tECA5EBBBBC0A6D319C538C022E85B08259A549A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046;
IL2CPP_EXTERN_C String_t* _stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral23B435163284C2F25AE5E84212B0650024F0760B;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957;
IL2CPP_EXTERN_C String_t* _stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442;
IL2CPP_EXTERN_C String_t* _stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7;
IL2CPP_EXTERN_C String_t* _stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184;
IL2CPP_EXTERN_C String_t* _stringLiteralD7438454F3EF140B6B22CB3ED354178FA3A495D5;
IL2CPP_EXTERN_C String_t* _stringLiteralE3D3ED109F4EEAB680608A674391A5BA1504924D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m1B1317FD93BDFB5166AC07694A0403743E87A25D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m18C276756C35E42E8C48803E25D3C5A21B6E795C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisType_t_m311E0E9AE951A2BA1C23EF34CD8704E140AAD32F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mE87B77E7AA77F4A19EB32FAAD8FB585CD6E94D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mBE67F927E6871A25C6A5C0E74B32B9CEBA397590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JPropertyList_get_Item_m94BCEBB56CAD924D78A5D6D5CC54882969A65388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JPropertyList_set_Item_m852E22488CC111816E15C39A67E7AD97E0855C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m3FB0BF358432F527AA169D6FA1BA1D5DA718A8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m57940835C922FCDFEDD00EB55873D56095D7F2C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__57_System_Collections_IEnumerator_Reset_m28430FFE60E02700F635CC3019CF206B1A6FF347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCreatorU3Eb__18_1_m604A70B4730881876C4D44DC90281432AFB81414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__43_1_m047C92BC7EBCEA00979EC7535EC641985E623483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CGetCreatorU3Eb__0_m0646808A3DC8B01D36B7328F7D9DBD44D73616CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass44_1_U3CSetExtensionDataDelegatesU3Eb__0_m30C919837BD034AAD57E1A921550ACA7DF570C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JToken_t606FB532FD973C5800A5960B13BA97792A11451A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConstructorAttribute_tE94B69F9B2EBF13F24B7714A4F6B8ECBFC91C132_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonExtensionDataAttribute_tE29D5CFB6D92A52EA1AE73CC5CDE8DD8ACE960FD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct JTokenU5BU5D_t577331C5F215B608BDAEF6E6CD6442F3C31635C9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70, ____items_1)); }
	inline IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF* get__items_1() const { return ____items_1; }
	inline IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_StaticFields, ____emptyArray_5)); }
	inline IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IXmlNodeU5BU5D_tF393B106DF47CA07F6354F01D186101E51A854FF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____items_1)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields, ____emptyArray_5)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Newtonsoft.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	RuntimeObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<Member>k__BackingField
	RuntimeObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Newtonsoft.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085, ___U3CMemberU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_t606FB532FD973C5800A5960B13BA97792A11451A  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A, ____parent_0)); }
	inline JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB * get__parent_0() const { return ____parent_0; }
	inline JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A, ____previous_1)); }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * get__previous_1() const { return ____previous_1; }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A, ____next_2)); }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * get__next_2() const { return ____next_2; }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___StringTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___GuidTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___TimeSpanTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___UriTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___CharTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___DateTimeTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_t606FB532FD973C5800A5960B13BA97792A11451A_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t40D08F2CE17970556D10B8DFABBEE5E93C0FC276* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};


// Newtonsoft.Json.JsonConverter
struct JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B  : public RuntimeObject
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


// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<ProcessDictionaryKeys>k__BackingField
	bool ___U3CProcessDictionaryKeysU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<ProcessExtensionDataNames>k__BackingField
	bool ___U3CProcessExtensionDataNamesU3Ek__BackingField_1;
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<OverrideSpecifiedNames>k__BackingField
	bool ___U3COverrideSpecifiedNamesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CProcessDictionaryKeysU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD, ___U3CProcessDictionaryKeysU3Ek__BackingField_0)); }
	inline bool get_U3CProcessDictionaryKeysU3Ek__BackingField_0() const { return ___U3CProcessDictionaryKeysU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CProcessDictionaryKeysU3Ek__BackingField_0() { return &___U3CProcessDictionaryKeysU3Ek__BackingField_0; }
	inline void set_U3CProcessDictionaryKeysU3Ek__BackingField_0(bool value)
	{
		___U3CProcessDictionaryKeysU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CProcessExtensionDataNamesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD, ___U3CProcessExtensionDataNamesU3Ek__BackingField_1)); }
	inline bool get_U3CProcessExtensionDataNamesU3Ek__BackingField_1() const { return ___U3CProcessExtensionDataNamesU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CProcessExtensionDataNamesU3Ek__BackingField_1() { return &___U3CProcessExtensionDataNamesU3Ek__BackingField_1; }
	inline void set_U3CProcessExtensionDataNamesU3Ek__BackingField_1(bool value)
	{
		___U3CProcessExtensionDataNamesU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COverrideSpecifiedNamesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD, ___U3COverrideSpecifiedNamesU3Ek__BackingField_2)); }
	inline bool get_U3COverrideSpecifiedNamesU3Ek__BackingField_2() const { return ___U3COverrideSpecifiedNamesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3COverrideSpecifiedNamesU3Ek__BackingField_2() { return &___U3COverrideSpecifiedNamesU3Ek__BackingField_2; }
	inline void set_U3COverrideSpecifiedNamesU3Ek__BackingField_2(bool value)
	{
		___U3COverrideSpecifiedNamesU3Ek__BackingField_2 = value;
	}
};


// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_tE87EA568599AEFAB20A3C212EB676D70C9B6EF33  : public RuntimeObject
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

// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1, ___parentNode_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.Xml.XmlNodeList
struct XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2  : public RuntimeObject
{
public:
	// System.Xml.XmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ____node_0;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_childNodes
	List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * ____childNodes_1;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_attributes
	List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * ____attributes_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2, ____node_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get__node_0() const { return ____node_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_0), (void*)value);
	}

	inline static int32_t get_offset_of__childNodes_1() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2, ____childNodes_1)); }
	inline List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * get__childNodes_1() const { return ____childNodes_1; }
	inline List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 ** get_address_of__childNodes_1() { return &____childNodes_1; }
	inline void set__childNodes_1(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * value)
	{
		____childNodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childNodes_1), (void*)value);
	}

	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2, ____attributes_2)); }
	inline List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * get__attributes_2() const { return ____attributes_2; }
	inline List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 ** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attributes_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t11F4C66CA97D84257B99DC65905C98CF42FF27A1  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0::call
	MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t11F4C66CA97D84257B99DC65905C98CF42FF27A1, ___call_0)); }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9
	U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * ___U3CU3E9_0;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__40_0
	Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * ___U3CU3E9__40_0_1;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__40_1
	Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * ___U3CU3E9__40_1_2;
	// Newtonsoft.Json.Serialization.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__43_0
	Func_2_tB04646B3E32B1ACF0337750AB2AA0C221D2A97D6 * ___U3CU3E9__43_0_3;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__43_1
	Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * ___U3CU3E9__43_1_4;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__46_0
	Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E * ___U3CU3E9__46_0_5;
	// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__73_0
	Func_2_tCA14B32A08F564DAAEE47B39E1AB7CF7017CB169 * ___U3CU3E9__73_0_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9__40_0_1)); }
	inline Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * get_U3CU3E9__40_0_1() const { return ___U3CU3E9__40_0_1; }
	inline Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 ** get_address_of_U3CU3E9__40_0_1() { return &___U3CU3E9__40_0_1; }
	inline void set_U3CU3E9__40_0_1(Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * value)
	{
		___U3CU3E9__40_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9__40_1_2)); }
	inline Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * get_U3CU3E9__40_1_2() const { return ___U3CU3E9__40_1_2; }
	inline Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 ** get_address_of_U3CU3E9__40_1_2() { return &___U3CU3E9__40_1_2; }
	inline void set_U3CU3E9__40_1_2(Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * value)
	{
		___U3CU3E9__40_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__43_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9__43_0_3)); }
	inline Func_2_tB04646B3E32B1ACF0337750AB2AA0C221D2A97D6 * get_U3CU3E9__43_0_3() const { return ___U3CU3E9__43_0_3; }
	inline Func_2_tB04646B3E32B1ACF0337750AB2AA0C221D2A97D6 ** get_address_of_U3CU3E9__43_0_3() { return &___U3CU3E9__43_0_3; }
	inline void set_U3CU3E9__43_0_3(Func_2_tB04646B3E32B1ACF0337750AB2AA0C221D2A97D6 * value)
	{
		___U3CU3E9__43_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__43_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__43_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9__43_1_4)); }
	inline Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * get_U3CU3E9__43_1_4() const { return ___U3CU3E9__43_1_4; }
	inline Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 ** get_address_of_U3CU3E9__43_1_4() { return &___U3CU3E9__43_1_4; }
	inline void set_U3CU3E9__43_1_4(Func_2_t6D37C53B8367751ACD238DF1487436215AF490F4 * value)
	{
		___U3CU3E9__43_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__43_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__46_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9__46_0_5)); }
	inline Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E * get_U3CU3E9__46_0_5() const { return ___U3CU3E9__46_0_5; }
	inline Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E ** get_address_of_U3CU3E9__46_0_5() { return &___U3CU3E9__46_0_5; }
	inline void set_U3CU3E9__46_0_5(Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E * value)
	{
		___U3CU3E9__46_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__46_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__73_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields, ___U3CU3E9__73_0_6)); }
	inline Func_2_tCA14B32A08F564DAAEE47B39E1AB7CF7017CB169 * get_U3CU3E9__73_0_6() const { return ___U3CU3E9__73_0_6; }
	inline Func_2_tCA14B32A08F564DAAEE47B39E1AB7CF7017CB169 ** get_address_of_U3CU3E9__73_0_6() { return &___U3CU3E9__73_0_6; }
	inline void set_U3CU3E9__73_0_6(Func_2_tCA14B32A08F564DAAEE47B39E1AB7CF7017CB169 * value)
	{
		___U3CU3E9__73_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__73_0_6), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_t955C16680F33DE4E774D9F9012A7672337728E38  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass41_0::namingStrategy
	NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * ___namingStrategy_0;

public:
	inline static int32_t get_offset_of_namingStrategy_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_t955C16680F33DE4E774D9F9012A7672337728E38, ___namingStrategy_0)); }
	inline NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * get_namingStrategy_0() const { return ___namingStrategy_0; }
	inline NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD ** get_address_of_namingStrategy_0() { return &___namingStrategy_0; }
	inline void set_namingStrategy_0(NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * value)
	{
		___namingStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namingStrategy_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0::getExtensionDataDictionary
	Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * ___getExtensionDataDictionary_0;
	// System.Reflection.MemberInfo Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_getExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4, ___getExtensionDataDictionary_0)); }
	inline Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * get_getExtensionDataDictionary_0() const { return ___getExtensionDataDictionary_0; }
	inline Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 ** get_address_of_getExtensionDataDictionary_0() { return &___getExtensionDataDictionary_0; }
	inline void set_getExtensionDataDictionary_0(Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * value)
	{
		___getExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___member_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1::setExtensionDataDictionary
	Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * ___setExtensionDataDictionary_0;
	// Newtonsoft.Json.Serialization.Func`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1::createExtensionDataDictionary
	Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * ___createExtensionDataDictionary_1;
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1::setExtensionDataDictionaryValue
	MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * ___setExtensionDataDictionaryValue_2;
	// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0 Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * ___CSU24U3CU3E8__locals1_3;

public:
	inline static int32_t get_offset_of_setExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D, ___setExtensionDataDictionary_0)); }
	inline Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * get_setExtensionDataDictionary_0() const { return ___setExtensionDataDictionary_0; }
	inline Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 ** get_address_of_setExtensionDataDictionary_0() { return &___setExtensionDataDictionary_0; }
	inline void set_setExtensionDataDictionary_0(Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * value)
	{
		___setExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_createExtensionDataDictionary_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D, ___createExtensionDataDictionary_1)); }
	inline Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * get_createExtensionDataDictionary_1() const { return ___createExtensionDataDictionary_1; }
	inline Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D ** get_address_of_createExtensionDataDictionary_1() { return &___createExtensionDataDictionary_1; }
	inline void set_createExtensionDataDictionary_1(Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * value)
	{
		___createExtensionDataDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createExtensionDataDictionary_1), (void*)value);
	}

	inline static int32_t get_offset_of_setExtensionDataDictionaryValue_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D, ___setExtensionDataDictionaryValue_2)); }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * get_setExtensionDataDictionaryValue_2() const { return ___setExtensionDataDictionaryValue_2; }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF ** get_address_of_setExtensionDataDictionaryValue_2() { return &___setExtensionDataDictionaryValue_2; }
	inline void set_setExtensionDataDictionaryValue_2(MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * value)
	{
		___setExtensionDataDictionaryValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionaryValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D, ___CSU24U3CU3E8__locals1_3)); }
	inline U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * get_CSU24U3CU3E8__locals1_3() const { return ___CSU24U3CU3E8__locals1_3; }
	inline U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 ** get_address_of_CSU24U3CU3E8__locals1_3() { return &___CSU24U3CU3E8__locals1_3; }
	inline void set_CSU24U3CU3E8__locals1_3(U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * value)
	{
		___CSU24U3CU3E8__locals1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_3), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_2
struct U3CU3Ec__DisplayClass44_2_t496433757A5D05A8A92A7DD44EF42BD859F8AAE9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_2::createEnumerableWrapper
	ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * ___createEnumerableWrapper_0;
	// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0 Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * ___CSU24U3CU3E8__locals2_1;

public:
	inline static int32_t get_offset_of_createEnumerableWrapper_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_2_t496433757A5D05A8A92A7DD44EF42BD859F8AAE9, ___createEnumerableWrapper_0)); }
	inline ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * get_createEnumerableWrapper_0() const { return ___createEnumerableWrapper_0; }
	inline ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 ** get_address_of_createEnumerableWrapper_0() { return &___createEnumerableWrapper_0; }
	inline void set_createEnumerableWrapper_0(ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * value)
	{
		___createEnumerableWrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createEnumerableWrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_2_t496433757A5D05A8A92A7DD44EF42BD859F8AAE9, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_tEAFE3C5BC3BB5C3EDE6E44A9345703DD49AE132D  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass61_0::namingStrategy
	NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * ___namingStrategy_0;

public:
	inline static int32_t get_offset_of_namingStrategy_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_tEAFE3C5BC3BB5C3EDE6E44A9345703DD49AE132D, ___namingStrategy_0)); }
	inline NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * get_namingStrategy_0() const { return ___namingStrategy_0; }
	inline NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD ** get_address_of_namingStrategy_0() { return &___namingStrategy_0; }
	inline void set_namingStrategy_0(NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * value)
	{
		___namingStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namingStrategy_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass78_0
struct U3CU3Ec__DisplayClass78_0_tB69574AC22E6FDEF5D5EE44C01352F4A8F97471E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass78_0::shouldSerializeCall
	MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * ___shouldSerializeCall_0;

public:
	inline static int32_t get_offset_of_shouldSerializeCall_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_tB69574AC22E6FDEF5D5EE44C01352F4A8F97471E, ___shouldSerializeCall_0)); }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * get_shouldSerializeCall_0() const { return ___shouldSerializeCall_0; }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF ** get_address_of_shouldSerializeCall_0() { return &___shouldSerializeCall_0; }
	inline void set_shouldSerializeCall_0(MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * value)
	{
		___shouldSerializeCall_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shouldSerializeCall_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass79_0
struct U3CU3Ec__DisplayClass79_0_tE72796F9A82BAC28B5249F3FE94FC812EE83FA66  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass79_0::specifiedPropertyGet
	Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * ___specifiedPropertyGet_0;

public:
	inline static int32_t get_offset_of_specifiedPropertyGet_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass79_0_tE72796F9A82BAC28B5249F3FE94FC812EE83FA66, ___specifiedPropertyGet_0)); }
	inline Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * get_specifiedPropertyGet_0() const { return ___specifiedPropertyGet_0; }
	inline Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 ** get_address_of_specifiedPropertyGet_0() { return &___specifiedPropertyGet_0; }
	inline void set_specifiedPropertyGet_0(Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * value)
	{
		___specifiedPropertyGet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specifiedPropertyGet_0), (void*)value);
	}
};


// Newtonsoft.Json.DefaultJsonNameTable/Entry
struct Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.DefaultJsonNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Newtonsoft.Json.DefaultJsonNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Newtonsoft.Json.DefaultJsonNameTable/Entry Newtonsoft.Json.DefaultJsonNameTable/Entry::Next
	Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254, ___Next_2)); }
	inline Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 * get_Next_2() const { return ___Next_2; }
	inline Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
struct U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9
	U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * ___U3CU3E9_0;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MethodInfo,System.Boolean> Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9__24_1
	Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 * ___U3CU3E9__24_1_1;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MethodInfo,System.Boolean> Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9__25_1
	Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 * ___U3CU3E9__25_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_StaticFields, ___U3CU3E9__24_1_1)); }
	inline Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 * get_U3CU3E9__24_1_1() const { return ___U3CU3E9__24_1_1; }
	inline Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 ** get_address_of_U3CU3E9__24_1_1() { return &___U3CU3E9__24_1_1; }
	inline void set_U3CU3E9__24_1_1(Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 * value)
	{
		___U3CU3E9__24_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_StaticFields, ___U3CU3E9__25_1_2)); }
	inline Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 * get_U3CU3E9__25_1_2() const { return ___U3CU3E9__25_1_2; }
	inline Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 ** get_address_of_U3CU3E9__25_1_2() { return &___U3CU3E9__25_1_2; }
	inline void set_U3CU3E9__25_1_2(Func_2_t8D28FC6C837B04D6CBD08741181A2E9148E90801 * value)
	{
		___U3CU3E9__25_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC125E0CD29E109BEB28FC6552EB6AACB295A9A3C  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC125E0CD29E109BEB28FC6552EB6AACB295A9A3C, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t5501618C98A023C3D5C1B39A834AEB76C15D5F59  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t5501618C98A023C3D5C1B39A834AEB76C15D5F59, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
struct ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<ContractTypeName>k__BackingField
	String_t* ___U3CContractTypeNameU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<CreatedTypeName>k__BackingField
	String_t* ___U3CCreatedTypeNameU3Ek__BackingField_1;
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<BuilderTypeName>k__BackingField
	String_t* ___U3CBuilderTypeNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CContractTypeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136, ___U3CContractTypeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CContractTypeNameU3Ek__BackingField_0() const { return ___U3CContractTypeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CContractTypeNameU3Ek__BackingField_0() { return &___U3CContractTypeNameU3Ek__BackingField_0; }
	inline void set_U3CContractTypeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CContractTypeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractTypeNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatedTypeNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136, ___U3CCreatedTypeNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CCreatedTypeNameU3Ek__BackingField_1() const { return ___U3CCreatedTypeNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCreatedTypeNameU3Ek__BackingField_1() { return &___U3CCreatedTypeNameU3Ek__BackingField_1; }
	inline void set_U3CCreatedTypeNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CCreatedTypeNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreatedTypeNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBuilderTypeNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136, ___U3CBuilderTypeNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CBuilderTypeNameU3Ek__BackingField_2() const { return ___U3CBuilderTypeNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CBuilderTypeNameU3Ek__BackingField_2() { return &___U3CBuilderTypeNameU3Ek__BackingField_2; }
	inline void set_U3CBuilderTypeNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CBuilderTypeNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBuilderTypeNameU3Ek__BackingField_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF, ____token_0)); }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * get__token_0() const { return ____token_0; }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_tB06A5CB81A9689F21E56D3474305B1D5559F015B  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LineNumber
	int32_t ___LineNumber_0;
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LinePosition
	int32_t ___LinePosition_1;

public:
	inline static int32_t get_offset_of_LineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_tB06A5CB81A9689F21E56D3474305B1D5559F015B, ___LineNumber_0)); }
	inline int32_t get_LineNumber_0() const { return ___LineNumber_0; }
	inline int32_t* get_address_of_LineNumber_0() { return &___LineNumber_0; }
	inline void set_LineNumber_0(int32_t value)
	{
		___LineNumber_0 = value;
	}

	inline static int32_t get_offset_of_LinePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_tB06A5CB81A9689F21E56D3474305B1D5559F015B, ___LinePosition_1)); }
	inline int32_t get_LinePosition_1() const { return ___LinePosition_1; }
	inline int32_t* get_address_of_LinePosition_1() { return &___LinePosition_1; }
	inline void set_LinePosition_1(int32_t value)
	{
		___LinePosition_1 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_tE7E8A5FF5291B5423F9C186518DA3324167C5D11  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_tE7E8A5FF5291B5423F9C186518DA3324167C5D11, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tAF13918CD4071B66752875EA68B937DAC2992BE5  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_tAF13918CD4071B66752875EA68B937DAC2992BE5, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t2485B59B603D9DA185808FAFEACC7E5DD8178177  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9
	U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * ___U3CU3E9_0;
	// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__37_0
	Func_2_t07351A5E52437F380180723A7232AC0984D5F542 * ___U3CU3E9__37_0_1;
	// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__37_2
	Func_2_t07351A5E52437F380180723A7232AC0984D5F542 * ___U3CU3E9__37_2_2;
	// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__41_0
	Func_2_tC8896E04E589774D92B129CDF7F2DE9A08987B79 * ___U3CU3E9__41_0_3;
	// Newtonsoft.Json.Serialization.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__41_1
	Func_2_t29DEF59C2973FA82D6D04D0EF1931C34463B8BB0 * ___U3CU3E9__41_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields, ___U3CU3E9__37_0_1)); }
	inline Func_2_t07351A5E52437F380180723A7232AC0984D5F542 * get_U3CU3E9__37_0_1() const { return ___U3CU3E9__37_0_1; }
	inline Func_2_t07351A5E52437F380180723A7232AC0984D5F542 ** get_address_of_U3CU3E9__37_0_1() { return &___U3CU3E9__37_0_1; }
	inline void set_U3CU3E9__37_0_1(Func_2_t07351A5E52437F380180723A7232AC0984D5F542 * value)
	{
		___U3CU3E9__37_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields, ___U3CU3E9__37_2_2)); }
	inline Func_2_t07351A5E52437F380180723A7232AC0984D5F542 * get_U3CU3E9__37_2_2() const { return ___U3CU3E9__37_2_2; }
	inline Func_2_t07351A5E52437F380180723A7232AC0984D5F542 ** get_address_of_U3CU3E9__37_2_2() { return &___U3CU3E9__37_2_2; }
	inline void set_U3CU3E9__37_2_2(Func_2_t07351A5E52437F380180723A7232AC0984D5F542 * value)
	{
		___U3CU3E9__37_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields, ___U3CU3E9__41_0_3)); }
	inline Func_2_tC8896E04E589774D92B129CDF7F2DE9A08987B79 * get_U3CU3E9__41_0_3() const { return ___U3CU3E9__41_0_3; }
	inline Func_2_tC8896E04E589774D92B129CDF7F2DE9A08987B79 ** get_address_of_U3CU3E9__41_0_3() { return &___U3CU3E9__41_0_3; }
	inline void set_U3CU3E9__41_0_3(Func_2_tC8896E04E589774D92B129CDF7F2DE9A08987B79 * value)
	{
		___U3CU3E9__41_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields, ___U3CU3E9__41_1_4)); }
	inline Func_2_t29DEF59C2973FA82D6D04D0EF1931C34463B8BB0 * get_U3CU3E9__41_1_4() const { return ___U3CU3E9__41_1_4; }
	inline Func_2_t29DEF59C2973FA82D6D04D0EF1931C34463B8BB0 ** get_address_of_U3CU3E9__41_1_4() { return &___U3CU3E9__41_1_4; }
	inline void set_U3CU3E9__41_1_4(Func_2_t29DEF59C2973FA82D6D04D0EF1931C34463B8BB0 * value)
	{
		___U3CU3E9__41_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_4), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t9AA539C0E66ADBF64CD317BBFC81A71476F78290  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass37_0::property
	JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t9AA539C0E66ADBF64CD317BBFC81A71476F78290, ___property_0)); }
	inline JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * get_property_0() const { return ___property_0; }
	inline JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9
	U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * ___U3CU3E9_0;
	// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9__18_1
	Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * ___U3CU3E9__18_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields, ___U3CU3E9__18_1_1)); }
	inline Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * get_U3CU3E9__18_1_1() const { return ___U3CU3E9__18_1_1; }
	inline Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 ** get_address_of_U3CU3E9__18_1_1() { return &___U3CU3E9__18_1_1; }
	inline void set_U3CU3E9__18_1_1(Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * value)
	{
		___U3CU3E9__18_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t5EA6F0BB60CF86C190FCBE0EF5E43E8ADCB1C00F  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::type
	Type_t * ___type_0;
	// Newtonsoft.Json.Serialization.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::defaultConstructor
	Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * ___defaultConstructor_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t5EA6F0BB60CF86C190FCBE0EF5E43E8ADCB1C00F, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultConstructor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t5EA6F0BB60CF86C190FCBE0EF5E43E8ADCB1C00F, ___defaultConstructor_1)); }
	inline Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * get_defaultConstructor_1() const { return ___defaultConstructor_1; }
	inline Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D ** get_address_of_defaultConstructor_1() { return &___defaultConstructor_1; }
	inline void set_defaultConstructor_1(Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * value)
	{
		___defaultConstructor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultConstructor_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B, ___c_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t3B67A6D488F39C9E1E54D461B52C88721E1754F5  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::ctor
	Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t3B67A6D488F39C9E1E54D461B52C88721E1754F5, ___ctor_0)); }
	inline Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t3F322302FF041E63376BB1F8C1AB2CE5F206EB7A  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::call
	MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_1_t3F322302FF041E63376BB1F8C1AB2CE5F206EB7A, ___call_0)); }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
struct U3CU3Ec__DisplayClass11_2_tD4AD244B508A32D589B51182B531126AE5FFE25D  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::call
	MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_2_tD4AD244B508A32D589B51182B531126AE5FFE25D, ___call_0)); }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * ___U3CU3E9_0;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__11_0
	Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E * ___U3CU3E9__11_0_1;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__31_0
	Func_2_tEFFA9C37B39B4B3E0D3EB86678AC106864DF91EE * ___U3CU3E9__31_0_2;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t5996012D0DDCCF04ED0C4AFFD169CCEC6CCAEBDB * ___U3CU3E9__39_0_3;
	// Newtonsoft.Json.Serialization.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__41_0
	Func_2_tA173AB5CCE7F28E756A0FADD37DDB74758237EFF * ___U3CU3E9__41_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Func_2_tAAE62293F29BF5F2622E0C6788D07713AAA8EE8E * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields, ___U3CU3E9__31_0_2)); }
	inline Func_2_tEFFA9C37B39B4B3E0D3EB86678AC106864DF91EE * get_U3CU3E9__31_0_2() const { return ___U3CU3E9__31_0_2; }
	inline Func_2_tEFFA9C37B39B4B3E0D3EB86678AC106864DF91EE ** get_address_of_U3CU3E9__31_0_2() { return &___U3CU3E9__31_0_2; }
	inline void set_U3CU3E9__31_0_2(Func_2_tEFFA9C37B39B4B3E0D3EB86678AC106864DF91EE * value)
	{
		___U3CU3E9__31_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields, ___U3CU3E9__39_0_3)); }
	inline Func_2_t5996012D0DDCCF04ED0C4AFFD169CCEC6CCAEBDB * get_U3CU3E9__39_0_3() const { return ___U3CU3E9__39_0_3; }
	inline Func_2_t5996012D0DDCCF04ED0C4AFFD169CCEC6CCAEBDB ** get_address_of_U3CU3E9__39_0_3() { return &___U3CU3E9__39_0_3; }
	inline void set_U3CU3E9__39_0_3(Func_2_t5996012D0DDCCF04ED0C4AFFD169CCEC6CCAEBDB * value)
	{
		___U3CU3E9__39_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields, ___U3CU3E9__41_0_4)); }
	inline Func_2_tA173AB5CCE7F28E756A0FADD37DDB74758237EFF * get_U3CU3E9__41_0_4() const { return ___U3CU3E9__41_0_4; }
	inline Func_2_tA173AB5CCE7F28E756A0FADD37DDB74758237EFF ** get_address_of_U3CU3E9__41_0_4() { return &___U3CU3E9__41_0_4; }
	inline void set_U3CU3E9__41_0_4(Func_2_tA173AB5CCE7F28E756A0FADD37DDB74758237EFF * value)
	{
		___U3CU3E9__41_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_4), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t1AB88156DEA5BB047C2B90CF8F034FCBC885F99E  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::memberInfo
	MemberInfo_t * ___memberInfo_0;

public:
	inline static int32_t get_offset_of_memberInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t1AB88156DEA5BB047C2B90CF8F034FCBC885F99E, ___memberInfo_0)); }
	inline MemberInfo_t * get_memberInfo_0() const { return ___memberInfo_0; }
	inline MemberInfo_t ** get_address_of_memberInfo_0() { return &___memberInfo_0; }
	inline void set_memberInfo_0(MemberInfo_t * value)
	{
		___memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_tF600AF9097C2A9C29B62258A96291E141EF7B98C  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::subTypePropertyDeclaringType
	Type_t * ___subTypePropertyDeclaringType_0;
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0 Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_subTypePropertyDeclaringType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_tF600AF9097C2A9C29B62258A96291E141EF7B98C, ___subTypePropertyDeclaringType_0)); }
	inline Type_t * get_subTypePropertyDeclaringType_0() const { return ___subTypePropertyDeclaringType_0; }
	inline Type_t ** get_address_of_subTypePropertyDeclaringType_0() { return &___subTypePropertyDeclaringType_0; }
	inline void set_subTypePropertyDeclaringType_0(Type_t * value)
	{
		___subTypePropertyDeclaringType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypePropertyDeclaringType_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_tF600AF9097C2A9C29B62258A96291E141EF7B98C, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592, ___U3CU3E2__current_1)); }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592, ___U3CU3E4__this_2)); }
	inline JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6, ___value_1)); }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * get_value_1() const { return ___value_1; }
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB  : public JToken_t606FB532FD973C5800A5960B13BA97792A11451A
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_13;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__listChanged_13() { return static_cast<int32_t>(offsetof(JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB, ____listChanged_13)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_13() const { return ____listChanged_13; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_13() { return &____listChanged_13; }
	inline void set__listChanged_13(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};


// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E  : public Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_t8F7F9C0060E776DC5CD1D85E4FBD23B8B0B3BA64 * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E, ____dictionary_3)); }
	inline Dictionary_2_t8F7F9C0060E776DC5CD1D85E4FBD23B8B0B3BA64 * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_t8F7F9C0060E776DC5CD1D85E4FBD23B8B0B3BA64 ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_t8F7F9C0060E776DC5CD1D85E4FBD23B8B0B3BA64 * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_3), (void*)value);
	}
};

struct JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Newtonsoft.Json.Linq.JPropertyKeyedCollection::Comparer
	RuntimeObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E_StaticFields, ___Comparer_2)); }
	inline RuntimeObject* get_Comparer_2() const { return ___Comparer_2; }
	inline RuntimeObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(RuntimeObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Comparer_2), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// System.Xml.XmlAttribute
struct XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D, ___name_1)); }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * get_name_1() const { return ___name_1; }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_2() { return static_cast<int32_t>(offsetof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D, ___lastChild_2)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_2() const { return ___lastChild_2; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_2() { return &___lastChild_2; }
	inline void set_lastChild_2(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_2), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4  : public XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2
{
public:
	// System.Xml.XmlDeclaration Newtonsoft.Json.Converters.XmlDeclarationWrapper::_declaration
	XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * ____declaration_3;

public:
	inline static int32_t get_offset_of__declaration_3() { return static_cast<int32_t>(offsetof(XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4, ____declaration_3)); }
	inline XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * get__declaration_3() const { return ____declaration_3; }
	inline XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC ** get_address_of__declaration_3() { return &____declaration_3; }
	inline void set__declaration_3(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * value)
	{
		____declaration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____declaration_3), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2  : public XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2
{
public:
	// System.Xml.XmlDocumentType Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::_documentType
	XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * ____documentType_3;

public:
	inline static int32_t get_offset_of__documentType_3() { return static_cast<int32_t>(offsetof(XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2, ____documentType_3)); }
	inline XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * get__documentType_3() const { return ____documentType_3; }
	inline XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F ** get_address_of__documentType_3() { return &____documentType_3; }
	inline void set__documentType_3(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * value)
	{
		____documentType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____documentType_3), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82  : public XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2
{
public:
	// System.Xml.XmlElement Newtonsoft.Json.Converters.XmlElementWrapper::_element
	XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * ____element_3;

public:
	inline static int32_t get_offset_of__element_3() { return static_cast<int32_t>(offsetof(XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82, ____element_3)); }
	inline XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * get__element_3() const { return ____element_3; }
	inline XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF ** get_address_of__element_3() { return &____element_3; }
	inline void set__element_3(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * value)
	{
		____element_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____element_3), (void*)value);
	}
};


// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0, ___next_1)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_next_1() const { return ___next_1; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlNodeConverter
struct XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209  : public JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B
{
public:
	// System.String Newtonsoft.Json.Converters.XmlNodeConverter::<DeserializeRootElementName>k__BackingField
	String_t* ___U3CDeserializeRootElementNameU3Ek__BackingField_1;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<WriteArrayAttribute>k__BackingField
	bool ___U3CWriteArrayAttributeU3Ek__BackingField_2;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<OmitRootObject>k__BackingField
	bool ___U3COmitRootObjectU3Ek__BackingField_3;
	// System.Boolean Newtonsoft.Json.Converters.XmlNodeConverter::<EncodeSpecialCharacters>k__BackingField
	bool ___U3CEncodeSpecialCharactersU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CDeserializeRootElementNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209, ___U3CDeserializeRootElementNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CDeserializeRootElementNameU3Ek__BackingField_1() const { return ___U3CDeserializeRootElementNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CDeserializeRootElementNameU3Ek__BackingField_1() { return &___U3CDeserializeRootElementNameU3Ek__BackingField_1; }
	inline void set_U3CDeserializeRootElementNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CDeserializeRootElementNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeserializeRootElementNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWriteArrayAttributeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209, ___U3CWriteArrayAttributeU3Ek__BackingField_2)); }
	inline bool get_U3CWriteArrayAttributeU3Ek__BackingField_2() const { return ___U3CWriteArrayAttributeU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CWriteArrayAttributeU3Ek__BackingField_2() { return &___U3CWriteArrayAttributeU3Ek__BackingField_2; }
	inline void set_U3CWriteArrayAttributeU3Ek__BackingField_2(bool value)
	{
		___U3CWriteArrayAttributeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COmitRootObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209, ___U3COmitRootObjectU3Ek__BackingField_3)); }
	inline bool get_U3COmitRootObjectU3Ek__BackingField_3() const { return ___U3COmitRootObjectU3Ek__BackingField_3; }
	inline bool* get_address_of_U3COmitRootObjectU3Ek__BackingField_3() { return &___U3COmitRootObjectU3Ek__BackingField_3; }
	inline void set_U3COmitRootObjectU3Ek__BackingField_3(bool value)
	{
		___U3COmitRootObjectU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CEncodeSpecialCharactersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209, ___U3CEncodeSpecialCharactersU3Ek__BackingField_4)); }
	inline bool get_U3CEncodeSpecialCharactersU3Ek__BackingField_4() const { return ___U3CEncodeSpecialCharactersU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CEncodeSpecialCharactersU3Ek__BackingField_4() { return &___U3CEncodeSpecialCharactersU3Ek__BackingField_4; }
	inline void set_U3CEncodeSpecialCharactersU3Ek__BackingField_4(bool value)
	{
		___U3CEncodeSpecialCharactersU3Ek__BackingField_4 = value;
	}
};

struct XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_StaticFields
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeConverter::EmptyChildNodes
	List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * ___EmptyChildNodes_0;

public:
	inline static int32_t get_offset_of_EmptyChildNodes_0() { return static_cast<int32_t>(offsetof(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_StaticFields, ___EmptyChildNodes_0)); }
	inline List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * get_EmptyChildNodes_0() const { return ___EmptyChildNodes_0; }
	inline List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 ** get_address_of_EmptyChildNodes_0() { return &___EmptyChildNodes_0; }
	inline void set_EmptyChildNodes_0(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * value)
	{
		___EmptyChildNodes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyChildNodes_0), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_tB4CA651F748F7F559ABCC3B5E454EA7B2975B6AF 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_tB4CA651F748F7F559ABCC3B5E454EA7B2975B6AF__padding[10];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t5A9E38395D33849AC56AB22987571DF806916483 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t5A9E38395D33849AC56AB22987571DF806916483__padding[28];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t128005838F3A5AA8E7E4FCFBE28B477A67730FE9 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t128005838F3A5AA8E7E4FCFBE28B477A67730FE9__padding[36];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t909299040DDCDCCBD415D28EF85419CAFA6CA51C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t909299040DDCDCCBD415D28EF85419CAFA6CA51C__padding[52];
	};

public:
};


// System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE 
{
public:
	// System.Object System.Xml.XmlNamedNodeMap/SmallXmlNodeList::field
	RuntimeObject * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE, ___field_0)); }
	inline RuntimeObject * get_field_0() const { return ___field_0; }
	inline RuntimeObject ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(RuntimeObject * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke
{
	Il2CppIUnknown* ___field_0;
};
// Native definition for COM marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com
{
	Il2CppIUnknown* ___field_0;
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


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t64F11A79D0A8AC61B4EF63FE24918795C2826E77 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t64F11A79D0A8AC61B4EF63FE24918795C2826E77, ___value___2)); }
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

// Newtonsoft.Json.Linq.JObject
struct JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E  : public JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_17;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E, ____properties_16)); }
	inline JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_16), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_17), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B  : public JContainer_t0BBA065F797A634F63A9E29C46DDF50991D008EB
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * ____content_16;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_17;

public:
	inline static int32_t get_offset_of__content_16() { return static_cast<int32_t>(offsetof(JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B, ____content_16)); }
	inline JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * get__content_16() const { return ____content_16; }
	inline JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF ** get_address_of__content_16() { return &____content_16; }
	inline void set__content_16(JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * value)
	{
		____content_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_16), (void*)value);
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_17), (void*)value);
	}
};


// System.Reflection.MemberTypes
struct MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t7E853B68E9812ACD6766B3E6B53917CD1D4699C1 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t7E853B68E9812ACD6766B3E6B53917CD1D4699C1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_t809FC2764FB7157E1538E37F2117A5568BA5AB2E 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t809FC2764FB7157E1538E37F2117A5568BA5AB2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_tD534709B6BE8FEEABEB98318D08943307CE7C9E5 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_tD534709B6BE8FEEABEB98318D08943307CE7C9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Required
struct Required_tCE3105787F9F94F55F494DF958A5B75004D8DF2A 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_tCE3105787F9F94F55F494DF958A5B75004D8DF2A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t72E983B53732E4FEF0527D64396BBA288EB13F81 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t72E983B53732E4FEF0527D64396BBA288EB13F81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlDeclaration
struct XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.String System.Xml.XmlDeclaration::version
	String_t* ___version_2;
	// System.String System.Xml.XmlDeclaration::encoding
	String_t* ___encoding_3;
	// System.String System.Xml.XmlDeclaration::standalone
	String_t* ___standalone_4;

public:
	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_2), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___encoding_3)); }
	inline String_t* get_encoding_3() const { return ___encoding_3; }
	inline String_t** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(String_t* value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_standalone_4() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___standalone_4)); }
	inline String_t* get_standalone_4() const { return ___standalone_4; }
	inline String_t** get_address_of_standalone_4() { return &___standalone_4; }
	inline void set_standalone_4(String_t* value)
	{
		___standalone_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standalone_4), (void*)value);
	}
};


// System.Xml.XmlDocumentType
struct XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.String System.Xml.XmlDocumentType::name
	String_t* ___name_2;
	// System.String System.Xml.XmlDocumentType::publicId
	String_t* ___publicId_3;
	// System.String System.Xml.XmlDocumentType::systemId
	String_t* ___systemId_4;
	// System.String System.Xml.XmlDocumentType::internalSubset
	String_t* ___internalSubset_5;
	// System.Boolean System.Xml.XmlDocumentType::namespaces
	bool ___namespaces_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___entities_7;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___notations_8;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocumentType::schemaInfo
	SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * ___schemaInfo_9;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_publicId_3() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___publicId_3)); }
	inline String_t* get_publicId_3() const { return ___publicId_3; }
	inline String_t** get_address_of_publicId_3() { return &___publicId_3; }
	inline void set_publicId_3(String_t* value)
	{
		___publicId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicId_3), (void*)value);
	}

	inline static int32_t get_offset_of_systemId_4() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___systemId_4)); }
	inline String_t* get_systemId_4() const { return ___systemId_4; }
	inline String_t** get_address_of_systemId_4() { return &___systemId_4; }
	inline void set_systemId_4(String_t* value)
	{
		___systemId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemId_4), (void*)value);
	}

	inline static int32_t get_offset_of_internalSubset_5() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___internalSubset_5)); }
	inline String_t* get_internalSubset_5() const { return ___internalSubset_5; }
	inline String_t** get_address_of_internalSubset_5() { return &___internalSubset_5; }
	inline void set_internalSubset_5(String_t* value)
	{
		___internalSubset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSubset_5), (void*)value);
	}

	inline static int32_t get_offset_of_namespaces_6() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___namespaces_6)); }
	inline bool get_namespaces_6() const { return ___namespaces_6; }
	inline bool* get_address_of_namespaces_6() { return &___namespaces_6; }
	inline void set_namespaces_6(bool value)
	{
		___namespaces_6 = value;
	}

	inline static int32_t get_offset_of_entities_7() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___entities_7)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_entities_7() const { return ___entities_7; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_entities_7() { return &___entities_7; }
	inline void set_entities_7(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___entities_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_7), (void*)value);
	}

	inline static int32_t get_offset_of_notations_8() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___notations_8)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_notations_8() const { return ___notations_8; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_notations_8() { return &___notations_8; }
	inline void set_notations_8(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___notations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notations_8), (void*)value);
	}

	inline static int32_t get_offset_of_schemaInfo_9() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___schemaInfo_9)); }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * get_schemaInfo_9() const { return ___schemaInfo_9; }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 ** get_address_of_schemaInfo_9() { return &___schemaInfo_9; }
	inline void set_schemaInfo_9(SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * value)
	{
		___schemaInfo_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaInfo_9), (void*)value);
	}
};


// System.Xml.XmlElement
struct XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.Xml.XmlName System.Xml.XmlElement::name
	XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * ___name_2;
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * ___attributes_3;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___name_2)); }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * get_name_2() const { return ___name_2; }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___attributes_3)); }
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * get_attributes_3() const { return ___attributes_3; }
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_3), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_4() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___lastChild_4)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_4() const { return ___lastChild_4; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_4() { return &___lastChild_4; }
	inline void set_lastChild_4(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_4), (void*)value);
	}
};


// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parent_0;
	// System.Xml.XmlNamedNodeMap/SmallXmlNodeList System.Xml.XmlNamedNodeMap::nodes
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  ___nodes_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771, ___parent_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parent_0() const { return ___parent_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_nodes_1() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771, ___nodes_1)); }
	inline SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  get_nodes_1() const { return ___nodes_1; }
	inline SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * get_address_of_nodes_1() { return &___nodes_1; }
	inline void set_nodes_1(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  value)
	{
		___nodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodes_1))->___field_0), (void*)NULL);
	}
};


// System.Xml.XmlNodeType
struct XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
struct ConvertResult_t4577A4866F15448BF9F3803CE275992B93A6E720 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConvertResult_t4577A4866F15448BF9F3803CE275992B93A6E720, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57
struct U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::<>2__current
	KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::<>4__this
	JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D, ___U3CU3E4__this_2)); }
	inline JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t8AAE808C3668772902E4E0E727558DE09B68056B 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t8AAE808C3668772902E4E0E727558DE09B68056B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct PropertyPresence_tCE59C46C2E54FF77E9A6579B1840D41F1C1CD39B 
{
public:
	// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyPresence_tCE59C46C2E54FF77E9A6579B1840D41F1C1CD39B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_tDCC0D2D8FA3EA667602AA18BFFB70ACBC840A09D 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tDCC0D2D8FA3EA667602AA18BFFB70ACBC840A09D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonException
struct JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962  : public Exception_t
{
public:

public:
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

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3  : public XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771
{
public:

public:
};


// Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object>
struct Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.Func`1<System.Object>
struct Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>
struct Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.Func`2<System.Object,System.Type>
struct Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_tE3561D428ABCA7700E7379E6DD2DDC11D24D0D0A * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B * ___U3CConverterU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_17;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_18;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  ___U3CNullValueHandlingU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  ___U3CDefaultValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  ___U3CReferenceLoopHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  ___U3CObjectCreationHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  ___U3CTypeNameHandlingU3Ek__BackingField_23;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * ___U3CSetIsSpecifiedU3Ek__BackingField_27;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B * ___U3CItemConverterU3Ek__BackingField_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_29;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  ___U3CItemTypeNameHandlingU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____required_0)); }
	inline Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D  get__required_0() const { return ____required_0; }
	inline Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_tEFCC573B02C53AECCDA84E2FE1AD0B1279F25A0D  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_tE3561D428ABCA7700E7379E6DD2DDC11D24D0D0A * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_tE3561D428ABCA7700E7379E6DD2DDC11D24D0D0A ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_tE3561D428ABCA7700E7379E6DD2DDC11D24D0D0A * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CIgnoredU3Ek__BackingField_14)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_14() const { return ___U3CIgnoredU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_14() { return &___U3CIgnoredU3Ek__BackingField_14; }
	inline void set_U3CIgnoredU3Ek__BackingField_14(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CReadableU3Ek__BackingField_15)); }
	inline bool get_U3CReadableU3Ek__BackingField_15() const { return ___U3CReadableU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_15() { return &___U3CReadableU3Ek__BackingField_15; }
	inline void set_U3CReadableU3Ek__BackingField_15(bool value)
	{
		___U3CReadableU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CWritableU3Ek__BackingField_16)); }
	inline bool get_U3CWritableU3Ek__BackingField_16() const { return ___U3CWritableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_16() { return &___U3CWritableU3Ek__BackingField_16; }
	inline void set_U3CWritableU3Ek__BackingField_16(bool value)
	{
		___U3CWritableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CHasMemberAttributeU3Ek__BackingField_17)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_17() const { return ___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return &___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_17(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CIsReferenceU3Ek__BackingField_18)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_18() const { return ___U3CIsReferenceU3Ek__BackingField_18; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_18() { return &___U3CIsReferenceU3Ek__BackingField_18; }
	inline void set_U3CIsReferenceU3Ek__BackingField_18(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CNullValueHandlingU3Ek__BackingField_19)); }
	inline Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  get_U3CNullValueHandlingU3Ek__BackingField_19() const { return ___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F * get_address_of_U3CNullValueHandlingU3Ek__BackingField_19() { return &___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_19(Nullable_1_t364CFAFF7F5FC4E106F6623125862FC285C06D5F  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CDefaultValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  get_U3CDefaultValueHandlingU3Ek__BackingField_20() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115 * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return &___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_20(Nullable_1_tD0E592131A1B6D538A911F285F165C9AFE310115  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CReferenceLoopHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  get_U3CReferenceLoopHandlingU3Ek__BackingField_21() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_21(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CObjectCreationHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  get_U3CObjectCreationHandlingU3Ek__BackingField_22() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return &___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_22(Nullable_1_t463FD6B35184519F8B3375B8DC7B9AB717DD281B  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CTypeNameHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  get_U3CTypeNameHandlingU3Ek__BackingField_23() const { return ___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return &___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_23(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CShouldSerializeU3Ek__BackingField_24)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_24() const { return ___U3CShouldSerializeU3Ek__BackingField_24; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_24() { return &___U3CShouldSerializeU3Ek__BackingField_24; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_24(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CShouldDeserializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_25() const { return ___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_25() { return &___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CGetIsSpecifiedU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_26() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return &___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CSetIsSpecifiedU3Ek__BackingField_27)); }
	inline Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * get_U3CSetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return &___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_27(Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CItemConverterU3Ek__BackingField_28)); }
	inline JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B * get_U3CItemConverterU3Ek__BackingField_28() const { return ___U3CItemConverterU3Ek__BackingField_28; }
	inline JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B ** get_address_of_U3CItemConverterU3Ek__BackingField_28() { return &___U3CItemConverterU3Ek__BackingField_28; }
	inline void set_U3CItemConverterU3Ek__BackingField_28(JsonConverter_t4500BAD66613E0EF09B6D15561A4481F26D3121B * value)
	{
		___U3CItemConverterU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CItemIsReferenceU3Ek__BackingField_29)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_29() const { return ___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_29() { return &___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_29(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CItemTypeNameHandlingU3Ek__BackingField_30)); }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  get_U3CItemTypeNameHandlingU3Ek__BackingField_30() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_30(Nullable_1_tF073F3BB82E5E2125F5E6DAA445DE51A9CB3F866  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_31(Nullable_1_t446EB0E09F1E9EBF1FDF1346ED74F25F4204A54F  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_31 = value;
	}
};


// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D  : public JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962
{
public:
	// System.Int32 Newtonsoft.Json.JsonSerializationException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_17;
	// System.Int32 Newtonsoft.Json.JsonSerializationException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_18;
	// System.String Newtonsoft.Json.JsonSerializationException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CLineNumberU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D, ___U3CLineNumberU3Ek__BackingField_17)); }
	inline int32_t get_U3CLineNumberU3Ek__BackingField_17() const { return ___U3CLineNumberU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CLineNumberU3Ek__BackingField_17() { return &___U3CLineNumberU3Ek__BackingField_17; }
	inline void set_U3CLineNumberU3Ek__BackingField_17(int32_t value)
	{
		___U3CLineNumberU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CLinePositionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D, ___U3CLinePositionU3Ek__BackingField_18)); }
	inline int32_t get_U3CLinePositionU3Ek__BackingField_18() const { return ___U3CLinePositionU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CLinePositionU3Ek__BackingField_18() { return &___U3CLinePositionU3Ek__BackingField_18; }
	inline void set_U3CLinePositionU3Ek__BackingField_18(int32_t value)
	{
		___U3CLinePositionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D, ___U3CPathU3Ek__BackingField_19)); }
	inline String_t* get_U3CPathU3Ek__BackingField_19() const { return ___U3CPathU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_19() { return &___U3CPathU3Ek__BackingField_19; }
	inline void set_U3CPathU3Ek__BackingField_19(String_t* value)
	{
		___U3CPathU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_19), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Property
	JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___Property_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::ConstructorProperty
	JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___ConstructorProperty_2;
	// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Presence
	Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954  ___Presence_3;
	// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Value
	RuntimeObject * ___Value_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31, ___Property_1)); }
	inline JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_1), (void*)value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31, ___ConstructorProperty_2)); }
	inline JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorProperty_2), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31, ___Presence_3)); }
	inline Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954 * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_t36A5255A1B81DEB5D0D8A2989A6C25D449464954  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31, ___Value_4)); }
	inline RuntimeObject * get_Value_4() const { return ___Value_4; }
	inline RuntimeObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(RuntimeObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_4), (void*)value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t577331C5F215B608BDAEF6E6CD6442F3C31635C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JToken_t606FB532FD973C5800A5960B13BA97792A11451A * m_Items[1];

public:
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_t606FB532FD973C5800A5960B13BA97792A11451A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_gshared (MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionUtils_AddRange_TisRuntimeObject_m76A0737253A87058C60EC820CAC066F9A718D972_gshared (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_gshared (Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * __this, RuntimeObject * ___a0, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Serialization.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_gshared (Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4_gshared (Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_gshared (ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared (Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4569FF77CA502A5F14241779097E421FCD655DD5_gshared (Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<TResult> Newtonsoft.Json.Utilities.LinqBridge.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,Newtonsoft.Json.Serialization.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m996544918A68BA35ADD6327AF347EE9680CEAC12_gshared (RuntimeObject* ___source0, Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * ___selector1, const RuntimeMethod* method);
// TSource[] Newtonsoft.Json.Utilities.LinqBridge.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m98F5B2B4E52504008B2114E550B0225CCC9842F5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.LinqBridge.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m92C96BEF5CC97FA8D777A9721904FF2C4C160A6B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::.ctor(System.Int32)
inline void List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5 (List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m0447B1D9DDB212E06A4E275986ED8091CDC72F29 (XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Add(!0)
inline void List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B (List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper__ctor_m12E06C262BBD2C596E61D2B0EE6D34FF54E9DB6C (XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82 * __this, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * ___element0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.XmlDeclarationWrapper::.ctor(System.Xml.XmlDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper__ctor_m2D3F6F02811185268439FF10D9F832116A6750DE (XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4 * __this, XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * ___declaration0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::.ctor(System.Xml.XmlDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentTypeWrapper__ctor_m98697FA2A094CE08B7328FB4F20DD69B06854920 (XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2 * __this, XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * ___documentType0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_m819466B3FE85D04A6BA167CE0450AC2BE00130BC (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Converters.XmlNodeWrapper::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasAttributes_m51D61CE1E476F5E2235F42EF9F66335594A8F1CA (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01 (MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_gshared)(__this, ___target0, ___args1, method);
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC46A2714FAB8E994911AF198ACCF5C994D1FB2D (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsIndexedProperty_mD95C936B36ADCF4043BFBEE5A5DF2F166AA03029 (PropertyInfo_t * ___property0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
inline void CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2 (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m76A0737253A87058C60EC820CAC066F9A718D972_gshared)(___initial0, ___collection1, method);
}
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_MemberType_m6997B29382F68F1940E4BB1FF4CEF243E11A493B (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanReadMemberValue_mE99568184079AD5764C2D3354B6E4068223C80E4 (MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::GetClrTypeFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultContractResolver_GetClrTypeFullName_m6464C909799C1F1E670CBDB12AB3008B3216F0B6 (Type_t * ___type0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m3E297BF770C8DD64B1EC82AA0F4902B3E447301A (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mC4DE63EA266E9EBD0AD2DDA745582CFFAE283E9E (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionUtils_GetMemberUnderlyingType_m034C8D3702D8056C1654D5255779C530D23B0DB3 (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_ImplementsGenericDefinition_m6623655A85EE33F6CD7AA8128C2261CF5B6AE847 (Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::get_Order()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_mC35A4023C2BEEE61E8773E6B36B5ED3B952B5A38_inline (JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// TResult Newtonsoft.Json.Serialization.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject * Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E (Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * __this, RuntimeObject * ___a0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_gshared)(__this, ___a0, method);
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m58C932A4B31386CF5BF0844B9E4436A0DD9D6365 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_mCA146FE28E2A12632C010B412A91C23B820506CD (JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D * __this, String_t* ___message0, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Serialization.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00 (Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D *, const RuntimeMethod*))Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Serialization.Action`2<System.Object,System.Object>::Invoke(T1,T2)
inline void Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4 (Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B (ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_gshared)(__this, ___args0, method);
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA8DBD89F0DC278FFBB207002485E637CAED0945C (U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsGenericType_m4D0B1C965448A579194F85D462C24F924AEFC79E (Type_t * ___type0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_ContractTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m0ED659CF74BC55517E024FCFF8B3B701D14D789B_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_ContractTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m83AA5ACC123B7E6D2D0DEED0126B571E928B164B_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_CreatedTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_mB5CD161B52BA5782EE4FB11597F62ED5C5DE0292_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_BuilderTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_mE6A7904BA9A0DF35BF6E31BB1F360D7389377905_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__57_U3CU3Em__Finally1_m5CA2C01D95757DFC71F35CEB9603B32061872168 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator()
inline RuntimeObject* Collection_1_GetEnumerator_m1B1317FD93BDFB5166AC07694A0403743E87A25D (Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Collection_1_t00A06879BC3E83AFD5F6E908C348483C508EA40A *, const RuntimeMethod*))Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared)(__this, method);
}
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mDFCAD7620B46A64430191A6438EED8BC263FEB98_inline (JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t606FB532FD973C5800A5960B13BA97792A11451A * JProperty_get_Value_m3E90E1B7D2A53F5936B7D0C9CFEF96BEF378C101 (JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m3FB0BF358432F527AA169D6FA1BA1D5DA718A8C1 (KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6 * __this, String_t* ___key0, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6 *, String_t*, JToken_t606FB532FD973C5800A5960B13BA97792A11451A *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__57_System_IDisposable_Dispose_mA39B103E347DDDFB5A8166C0B48DA64D15ECF415 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m4607E73858F374F7C67735487CA4C204C92F5E2E (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_m407FFC24436A6E44E21259DF6B0E00AE021DFDF2 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44861292CBDD874B841688F6BD58AAAA00C5D9B8 (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m6371B46099AEFCFCC4FDA4C7E1979C74F4F01480_inline (JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0ACF444D758E518A54B4290030E1201C2C764C21 (U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.Func`2<System.Object,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBE67F927E6871A25C6A5C0E74B32B9CEBA397590 (Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4569FF77CA502A5F14241779097E421FCD655DD5_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> Newtonsoft.Json.Utilities.LinqBridge.Enumerable::Select<System.Object,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,Newtonsoft.Json.Serialization.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisType_t_m311E0E9AE951A2BA1C23EF34CD8704E140AAD32F (RuntimeObject* ___source0, Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m996544918A68BA35ADD6327AF347EE9680CEAC12_gshared)(___source0, ___selector1, method);
}
// TSource[] Newtonsoft.Json.Utilities.LinqBridge.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mE87B77E7AA77F4A19EB32FAAD8FB585CD6E94D92 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m98F5B2B4E52504008B2114E550B0225CCC9842F5_gshared)(___source0, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_tE87EA568599AEFAB20A3C212EB676D70C9B6EF33 * JsonTypeReflector_get_ReflectionDelegateFactory_mAC31F7E786ADABF1796E5D3C37641986ED2D8B63 (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m89159A58826AA5C7183C4BAD0C198B633C096714 (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDE22BE8696E6256DEB16010D6F5013D47C4050B1 (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.LinqBridge.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m18C276756C35E42E8C48803E25D3C5A21B6E795C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m92C96BEF5CC97FA8D777A9721904FF2C4C160A6B_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_mA8CDEC82C20AB1E325F64FA3922916C4D798B440 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m0C71F1BC8870022FEB6C62EA588BBBE4B01EBD31 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_m819466B3FE85D04A6BA167CE0450AC2BE00130BC (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = ___node0;
		__this->set__node_0(L_0);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.XmlNodeWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlNodeWrapper_get_WrappedNode_mEC4C9BA3CE9B9492E5878A0838664F4B4DFAA4A3 (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		return L_0;
	}
}
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XmlNodeWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeWrapper_get_NodeType_m6F125B1520E9640384001DEB6947F3CE9752EEF6 (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_LocalName_m1E1B6F1B227E28428BA80BA4752965054B211D3B (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(36 /* System.String System.Xml.XmlNode::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * XmlNodeWrapper_get_ChildNodes_mA1A5B83B15747CD0AEEBEC9F91404C4A972CF3EE (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_0 = __this->get__childNodes_1();
		if (L_0)
		{
			goto IL_008b;
		}
	}
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_1 = __this->get__node_0();
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Xml.XmlNode::get_HasChildNodes() */, L_1);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var);
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_3 = ((XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var))->get_EmptyChildNodes_0();
		__this->set__childNodes_1(L_3);
		goto IL_008b;
	}

IL_0025:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_4 = __this->get__node_0();
		XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * L_5;
		L_5 = VirtFuncInvoker0< XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_4);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_5);
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_7 = (List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 *)il2cpp_codegen_object_new(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_il2cpp_TypeInfo_var);
		List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5(L_7, L_6, /*hidden argument*/List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5_RuntimeMethod_var);
		__this->set__childNodes_1(L_7);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_8 = __this->get__node_0();
		XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * L_9;
		L_9 = VirtFuncInvoker0< XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_8);
		RuntimeObject* L_10;
		L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_9);
		V_0 = L_10;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0053:
		{
			RuntimeObject* L_11 = V_0;
			RuntimeObject * L_12;
			L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			V_1 = ((XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 *)CastclassClass((RuntimeObject*)L_12, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1_il2cpp_TypeInfo_var));
			List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_13 = __this->get__childNodes_1();
			XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_14 = V_1;
			RuntimeObject* L_15;
			L_15 = XmlNodeWrapper_WrapNode_m0447B1D9DDB212E06A4E275986ED8091CDC72F29(L_14, /*hidden argument*/NULL);
			List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B(L_13, L_15, /*hidden argument*/List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B_RuntimeMethod_var);
		}

IL_0070:
		{
			RuntimeObject* L_16 = V_0;
			bool L_17;
			L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_0053;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x8B, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_19 = V_2;
			if (!L_19)
			{
				goto IL_008a;
			}
		}

IL_0084:
		{
			RuntimeObject* L_20 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_20);
		}

IL_008a:
		{
			IL2CPP_END_FINALLY(122)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8B, IL_008b)
	}

IL_008b:
	{
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_21 = __this->get__childNodes_1();
		return L_21;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m0447B1D9DDB212E06A4E275986ED8091CDC72F29 (XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = ___node0;
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_003b;
	}

IL_0017:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_5 = ___node0;
		XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82 * L_6 = (XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82 *)il2cpp_codegen_object_new(XmlElementWrapper_t980F9BE46A0D2B9F6BE3C106679968EB5B90BE82_il2cpp_TypeInfo_var);
		XmlElementWrapper__ctor_m12E06C262BBD2C596E61D2B0EE6D34FF54E9DB6C(L_6, ((XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF *)CastclassClass((RuntimeObject*)L_5, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_7 = ___node0;
		XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4 * L_8 = (XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4 *)il2cpp_codegen_object_new(XmlDeclarationWrapper_t1E4DC683A4B89E9A63E965799D47CBC2600859E4_il2cpp_TypeInfo_var);
		XmlDeclarationWrapper__ctor_m2D3F6F02811185268439FF10D9F832116A6750DE(L_8, ((XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC *)CastclassClass((RuntimeObject*)L_7, XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_9 = ___node0;
		XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2 * L_10 = (XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2 *)il2cpp_codegen_object_new(XmlDocumentTypeWrapper_t4D285FDCB99B27B466E608385E5458E89857A8E2_il2cpp_TypeInfo_var);
		XmlDocumentTypeWrapper__ctor_m98697FA2A094CE08B7328FB4F20DD69B06854920(L_10, ((XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F *)CastclassClass((RuntimeObject*)L_9, XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_10;
	}

IL_003b:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_11 = ___node0;
		XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * L_12 = (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 *)il2cpp_codegen_object_new(XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2_il2cpp_TypeInfo_var);
		XmlNodeWrapper__ctor_m819466B3FE85D04A6BA167CE0450AC2BE00130BC(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * XmlNodeWrapper_get_Attributes_mCCDA1681CCFEDB470B07BE70018280F4036788C5 (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_0 = __this->get__attributes_2();
		if (L_0)
		{
			goto IL_0083;
		}
	}
	{
		bool L_1;
		L_1 = XmlNodeWrapper_get_HasAttributes_m51D61CE1E476F5E2235F42EF9F66335594A8F1CA(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var);
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_2 = ((XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_StaticFields*)il2cpp_codegen_static_fields_for(XmlNodeConverter_t3914A72B6FC0A4515479686ED331353BCF0BB209_il2cpp_TypeInfo_var))->get_EmptyChildNodes_0();
		__this->set__attributes_2(L_2);
		goto IL_0083;
	}

IL_001d:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_3 = __this->get__node_0();
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_4;
		L_4 = VirtFuncInvoker0< XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_4);
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_6 = (List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 *)il2cpp_codegen_object_new(List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70_il2cpp_TypeInfo_var);
		List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5(L_6, L_5, /*hidden argument*/List_1__ctor_mE852569DDB2874DCC8565E61934F3A6F79108BD5_RuntimeMethod_var);
		__this->set__attributes_2(L_6);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_7 = __this->get__node_0();
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_8;
		L_8 = VirtFuncInvoker0< XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_7);
		RuntimeObject* L_9;
		L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator() */, L_8);
		V_0 = L_9;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_004b:
		{
			RuntimeObject* L_10 = V_0;
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			V_1 = ((XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D *)CastclassClass((RuntimeObject*)L_11, XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var));
			List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_12 = __this->get__attributes_2();
			XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * L_13 = V_1;
			RuntimeObject* L_14;
			L_14 = XmlNodeWrapper_WrapNode_m0447B1D9DDB212E06A4E275986ED8091CDC72F29(L_13, /*hidden argument*/NULL);
			List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B(L_12, L_14, /*hidden argument*/List_1_Add_mF7C97C4F0BE87786C249EF0D77C28E3328C7806B_RuntimeMethod_var);
		}

IL_0068:
		{
			RuntimeObject* L_15 = V_0;
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_004b;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_18 = V_2;
			if (!L_18)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			RuntimeObject* L_19 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
		}

IL_0082:
		{
			IL2CPP_END_FINALLY(114)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 * L_20 = __this->get__attributes_2();
		return L_20;
	}
}
// System.Boolean Newtonsoft.Json.Converters.XmlNodeWrapper::get_HasAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlNodeWrapper_get_HasAttributes_m51D61CE1E476F5E2235F42EF9F66335594A8F1CA (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * V_0 = NULL;
	XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * G_B4_0 = NULL;
	XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * G_B3_0 = NULL;
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		V_0 = ((XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF *)IsInstClass((RuntimeObject*)L_0, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var));
		XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_2 = V_0;
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(55 /* System.Boolean System.Xml.XmlElement::get_HasAttributes() */, L_2);
		return L_3;
	}

IL_0016:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_4 = __this->get__node_0();
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_5;
		L_5 = VirtFuncInvoker0< XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_4);
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, G_B4_0);
		return (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_ParentNode_m371FF1E0AF34D8F92ACA9DB231D62BB42BC17434 (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * V_0 = NULL;
	XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * V_1 = NULL;
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * G_B3_0 = NULL;
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		V_1 = ((XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D *)IsInstClass((RuntimeObject*)L_0, XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var));
		XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * L_1 = V_1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_2 = __this->get__node_0();
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_3;
		L_3 = VirtFuncInvoker0< XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * >::Invoke(10 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_2);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_001c:
	{
		XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * L_4 = V_1;
		XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_5;
		L_5 = VirtFuncInvoker0< XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * >::Invoke(56 /* System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement() */, L_4);
		G_B3_0 = ((XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 *)(L_5));
	}

IL_0022:
	{
		V_0 = G_B3_0;
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0028:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = XmlNodeWrapper_WrapNode_m0447B1D9DDB212E06A4E275986ED8091CDC72F29(L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_Value_mA91057D9A2ACE410B9767EF4838A686A9F1E71E1 (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_Value() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper_set_Value_m3EB65036EE8DE6C6AD9F129DB9D681229270F2DA (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		String_t* L_1 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void System.Xml.XmlNode::set_Value(System.String) */, L_0, L_1);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_AppendChild_mAFA35F5FC29FF7D19C68F4C0C55F800968E1992A (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, RuntimeObject* ___newChild0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		V_0 = ((XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 *)CastclassClass((RuntimeObject*)L_0, XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2_il2cpp_TypeInfo_var));
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_1 = __this->get__node_0();
		XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * L_2 = V_0;
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_3 = L_2->get__node_0();
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_4;
		L_4 = VirtFuncInvoker1< XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 *, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * >::Invoke(25 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_1, L_3);
		__this->set__childNodes_1((List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 *)NULL);
		__this->set__attributes_2((List_1_t947FB5E41E0AD2E89B6D786C61FD834F14348C70 *)NULL);
		RuntimeObject* L_5 = ___newChild0;
		return L_5;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_NamespaceUri_mDB85F9CC2C5AF8FFC54F0BDBB595232832B3F8FA (XmlNodeWrapper_t22E8A924139EEF77D836278B832D4B54935804E2 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(33 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_0);
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
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mF63D52BC03F0C210B7FAB165A4F796B3E04D384B (U3CU3Ec__DisplayClass8_0_t11F4C66CA97D84257B99DC65905C98CF42FF27A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass8_0::<CreateCastConverter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass8_0_U3CCreateCastConverterU3Eb__0_mBBF87064CBCF30E134771357AF624BE51FAFF83A (U3CU3Ec__DisplayClass8_0_t11F4C66CA97D84257B99DC65905C98CF42FF27A1 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * L_0 = __this->get_call_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = ___o0;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		RuntimeObject * L_4;
		L_4 = MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01(L_0, NULL, L_2, /*hidden argument*/MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m88317294653DDB376EFAB4ACD526C3A8171F7CF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * L_0 = (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 *)il2cpp_codegen_object_new(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFC46A2714FAB8E994911AF198ACCF5C994D1FB2D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC46A2714FAB8E994911AF198ACCF5C994D1FB2D (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetSerializableMembers>b__40_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__40_0_m4FE53FC624F3F91D4E29F8924D2924578F6D70E9 (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	{
		MemberInfo_t * L_0 = ___m0;
		V_0 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		PropertyInfo_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReflectionUtils_IsIndexedProperty_mD95C936B36ADCF4043BFBEE5A5DF2F166AA03029(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetSerializableMembers>b__40_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__40_1_m5D34C1081B11D46FB3AD415B609B9541B5531021 (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3D3ED109F4EEAB680608A674391A5BA1504924D);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		bool L_2;
		L_2 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_1, _stringLiteralE3D3ED109F4EEAB680608A674391A5BA1504924D, 4, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetExtensionDataMemberForType>b__43_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__43_0_mD2CBA83BAA3F529F6DCFF7BA7DE1FB9C2C875064 (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, Type_t * ___baseType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_0 = (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *)il2cpp_codegen_object_new(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334(L_0, /*hidden argument*/List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_1 = L_0;
		Type_t * L_2 = ___baseType0;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_3;
		L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(55 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_2, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2(L_1, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2_RuntimeMethod_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_4 = L_1;
		Type_t * L_5 = ___baseType0;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_6;
		L_6 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(46 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_5, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2(L_4, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m3A517AEFAB38C29CC604FB9AF6E4C3D8978162E2_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetExtensionDataMemberForType>b__43_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__43_1_m047C92BC7EBCEA00979EC7535EC641985E623483 (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_t606FB532FD973C5800A5960B13BA97792A11451A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonExtensionDataAttribute_tE29D5CFB6D92A52EA1AE73CC5CDE8DD8ACE960FD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___m0;
		int32_t L_1;
		L_1 = TypeExtensions_MemberType_m6997B29382F68F1940E4BB1FF4CEF243E11A493B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___m0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (JsonExtensionDataAttribute_tE29D5CFB6D92A52EA1AE73CC5CDE8DD8ACE960FD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_4, L_6, (bool)0);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		MemberInfo_t * L_8 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = ReflectionUtils_CanReadMemberValue_mE99568184079AD5764C2D3354B6E4068223C80E4(L_8, (bool)1, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_11 = ___m0;
		Type_t * L_12;
		L_12 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultContractResolver_t07297B91FC4E404AA3E6FE68B3C538E0DFCD65BB_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = DefaultContractResolver_GetClrTypeFullName_m6464C909799C1F1E670CBDB12AB3008B3216F0B6(L_12, /*hidden argument*/NULL);
		MemberInfo_t * L_14 = ___m0;
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		String_t* L_16;
		L_16 = StringUtils_FormatWith_m3E297BF770C8DD64B1EC82AA0F4902B3E447301A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF)), L_10, L_13, L_15, /*hidden argument*/NULL);
		JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * L_17 = (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var)));
		JsonException__ctor_mC4DE63EA266E9EBD0AD2DDA745582CFFAE283E9E(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__43_1_m047C92BC7EBCEA00979EC7535EC641985E623483_RuntimeMethod_var)));
	}

IL_0056:
	{
		MemberInfo_t * L_18 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = ReflectionUtils_GetMemberUnderlyingType_m034C8D3702D8056C1654D5255779C530D23B0DB3(L_18, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = ReflectionUtils_ImplementsGenericDefinition_m6623655A85EE33F6CD7AA8128C2261CF5B6AE847(L_19, L_21, (Type_t **)(&V_1), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_23 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_24;
		L_24 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(100 /* System.Type[] System.Type::GetGenericArguments() */, L_23);
		int32_t L_25 = 0;
		Type_t * L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		Type_t * L_27 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_28;
		L_28 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(100 /* System.Type[] System.Type::GetGenericArguments() */, L_27);
		int32_t L_29 = 1;
		Type_t * L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = L_30;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_32);
		if (!L_33)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_34 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (JToken_t606FB532FD973C5800A5960B13BA97792A11451A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		bool L_37;
		L_37 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_34, L_36);
		if (!L_37)
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)1;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_38;
		L_38 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_39 = ___m0;
		Type_t * L_40;
		L_40 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultContractResolver_t07297B91FC4E404AA3E6FE68B3C538E0DFCD65BB_il2cpp_TypeInfo_var)));
		String_t* L_41;
		L_41 = DefaultContractResolver_GetClrTypeFullName_m6464C909799C1F1E670CBDB12AB3008B3216F0B6(L_40, /*hidden argument*/NULL);
		MemberInfo_t * L_42 = ___m0;
		String_t* L_43;
		L_43 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_42);
		String_t* L_44;
		L_44 = StringUtils_FormatWith_m3E297BF770C8DD64B1EC82AA0F4902B3E447301A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957)), L_38, L_41, L_43, /*hidden argument*/NULL);
		JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * L_45 = (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var)));
		JsonException__ctor_mC4DE63EA266E9EBD0AD2DDA745582CFFAE283E9E(L_45, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__43_1_m047C92BC7EBCEA00979EC7535EC641985E623483_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetAttributeConstructor>b__46_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAttributeConstructorU3Eb__46_0_m5F0C24706D6309DEFE0975532388C31DB37AEE48 (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConstructorAttribute_tE94B69F9B2EBF13F24B7714A4F6B8ECBFC91C132_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (JsonConstructorAttribute_tE94B69F9B2EBF13F24B7714A4F6B8ECBFC91C132_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		return L_3;
	}
}
// System.Int32 Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<CreateProperties>b__73_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreatePropertiesU3Eb__73_0_m4AA6E74433903E83C61DE7CE9544E4685110FB5D (U3CU3Ec_t743FDC2E2D500CE5F79CDBA5A171F21E2BAD7377 * __this, JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * L_0 = ___p0;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		L_1 = JsonProperty_get_Order_mC35A4023C2BEEE61E8773E6B36B5ED3B952B5A38_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mB602168381297D0AD78861D5B3308D51F268A05C (U3CU3Ec__DisplayClass41_0_t955C16680F33DE4E774D9F9012A7672337728E38 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass41_0::<CreateObjectContract>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass41_0_U3CCreateObjectContractU3Eb__0_mBE8139CA46E9D53CEB5AEDB178F38F19629B1ABD (U3CU3Ec__DisplayClass41_0_t955C16680F33DE4E774D9F9012A7672337728E38 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * L_0 = __this->get_namingStrategy_0();
		String_t* L_1 = ___s0;
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String Newtonsoft.Json.Serialization.NamingStrategy::GetDictionaryKey(System.String) */, L_0, L_1);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m2761870CFB78D0F449F09C5F8EE802DEA7778B64 (U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_1__ctor_mFB1DCDD575BB7ECC1506FB07CC492BD285B6D11A (U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_1::<SetExtensionDataDelegates>b__0(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_1_U3CSetExtensionDataDelegatesU3Eb__0_m30C919837BD034AAD57E1A921550ACA7DF570C9B (U3CU3Ec__DisplayClass44_1_t2463C39FD86CC7F18B0801E6A766C9C57F049C9D * __this, RuntimeObject * ___o0, String_t* ___key1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * L_0 = __this->get_CSU24U3CU3E8__locals1_3();
		Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		RuntimeObject * L_3;
		L_3 = Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E(L_1, L_2, /*hidden argument*/Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * L_5 = __this->get_setExtensionDataDictionary_0();
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
		L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * L_7 = __this->get_CSU24U3CU3E8__locals1_3();
		MemberInfo_t * L_8 = L_7->get_member_1();
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		String_t* L_10;
		L_10 = StringUtils_FormatWith_m58C932A4B31386CF5BF0844B9E4436A0DD9D6365(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7)), L_6, L_9, /*hidden argument*/NULL);
		JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D * L_11 = (JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_tFE2E6A344CC64CDE0D90772B84117663B3A6654D_il2cpp_TypeInfo_var)));
		JsonSerializationException__ctor_mCA146FE28E2A12632C010B412A91C23B820506CD(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass44_1_U3CSetExtensionDataDelegatesU3Eb__0_m30C919837BD034AAD57E1A921550ACA7DF570C9B_RuntimeMethod_var)));
	}

IL_0042:
	{
		Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * L_12 = __this->get_createExtensionDataDictionary_1();
		RuntimeObject * L_13;
		L_13 = Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00(L_12, /*hidden argument*/Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var);
		V_0 = L_13;
		Action_2_t2213689E7E7C4BFE59D7DDA61CDDA7F541DFAA72 * L_14 = __this->get_setExtensionDataDictionary_0();
		RuntimeObject * L_15 = ___o0;
		RuntimeObject * L_16 = V_0;
		Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4(L_14, L_15, L_16, /*hidden argument*/Action_2_Invoke_mF18EB6CA52E88B616A1900DEDAF1C95BF77A45E4_RuntimeMethod_var);
	}

IL_005b:
	{
		MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * L_17 = __this->get_setExtensionDataDictionaryValue_2();
		RuntimeObject * L_18 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		String_t* L_21 = ___key1;
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		RuntimeObject * L_23 = ___value2;
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		RuntimeObject * L_24;
		L_24 = MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01(L_17, L_18, L_22, /*hidden argument*/MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_2__ctor_m66DE741109C915E587D4DB706D8697A019FD6B79 (U3CU3Ec__DisplayClass44_2_t496433757A5D05A8A92A7DD44EF42BD859F8AAE9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass44_2::<SetExtensionDataDelegates>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass44_2_U3CSetExtensionDataDelegatesU3Eb__1_m62B3D94CAD91FA75227FC490C6F8C5A03998E8C5 (U3CU3Ec__DisplayClass44_2_t496433757A5D05A8A92A7DD44EF42BD859F8AAE9 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass44_0_tF137BA7F6721E72894F1B248F36EAEAAAD8105F4 * L_0 = __this->get_CSU24U3CU3E8__locals2_1();
		Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		RuntimeObject * L_3;
		L_3 = Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E(L_1, L_2, /*hidden argument*/Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0017:
	{
		ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * L_5 = __this->get_createEnumerableWrapper_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		RuntimeObject * L_8 = V_0;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		RuntimeObject * L_9;
		L_9 = ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B(L_5, L_7, /*hidden argument*/ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_RuntimeMethod_var);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var));
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass61_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0__ctor_m251F64D911F16B8C5B0085BCC2D93BD87BA7B265 (U3CU3Ec__DisplayClass61_0_tEAFE3C5BC3BB5C3EDE6E44A9345703DD49AE132D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass61_0::<CreateDictionaryContract>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass61_0_U3CCreateDictionaryContractU3Eb__0_m147F850F4A3441A1EEACAE3C807B5AA746D06B2D (U3CU3Ec__DisplayClass61_0_tEAFE3C5BC3BB5C3EDE6E44A9345703DD49AE132D * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		NamingStrategy_tBA99AFF9F0FDB979F7FB85962E1321BF033E5EBD * L_0 = __this->get_namingStrategy_0();
		String_t* L_1 = ___s0;
		String_t* L_2;
		L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String Newtonsoft.Json.Serialization.NamingStrategy::GetDictionaryKey(System.String) */, L_0, L_1);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass78_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass78_0__ctor_m0E9A896B98E8EF3ABD884E522C70F79BA32B3C01 (U3CU3Ec__DisplayClass78_0_tB69574AC22E6FDEF5D5EE44C01352F4A8F97471E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass78_0::<CreateShouldSerializeTest>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass78_0_U3CCreateShouldSerializeTestU3Eb__0_m3FEBF99E63D83CB3C407CC56A4330E8409642EA0 (U3CU3Ec__DisplayClass78_0_tB69574AC22E6FDEF5D5EE44C01352F4A8F97471E * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * L_0 = __this->get_shouldSerializeCall_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_3, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass79_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass79_0__ctor_m3213DD74BCA9EF29B0C2C5CCE0AFF20BA444F04D (U3CU3Ec__DisplayClass79_0_tE72796F9A82BAC28B5249F3FE94FC812EE83FA66 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass79_0::<SetIsSpecifiedActions>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass79_0_U3CSetIsSpecifiedActionsU3Eb__0_m22D5EB1D6465796131195B276065299597309C41 (U3CU3Ec__DisplayClass79_0_tE72796F9A82BAC28B5249F3FE94FC812EE83FA66 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_t7F309F3954C88A4A77BAC512D7A355DC63C4C926 * L_0 = __this->get_specifiedPropertyGet_0();
		RuntimeObject * L_1 = ___o0;
		RuntimeObject * L_2;
		L_2 = Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E(L_0, L_1, /*hidden argument*/Func_2_Invoke_mFE9A8BDB3AE55B3236ACD9F49E19DF42321A654E_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
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
// System.Void Newtonsoft.Json.DefaultJsonNameTable/Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.DefaultJsonNameTable/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m16B348F18C7F30242A5A3E6B0FD575494EC1D59F (Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_t4F931041204AF0A066C08CEDFFF79D6EC4A1A254 * L_2 = ___next2;
		__this->set_Next_2(L_2);
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB18ADBD1604540D553EBCA89214DF7BEF815E3AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * L_0 = (U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 *)il2cpp_codegen_object_new(U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA8DBD89F0DC278FFBB207002485E637CAED0945C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA8DBD89F0DC278FFBB207002485E637CAED0945C (U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<TryBuildImmutableForArrayContract>b__24_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryBuildImmutableForArrayContractU3Eb__24_1_m797FD47EB1262BD210ECD36A023E82EDDB7B6E6B (U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		MethodInfo_t * L_3 = ___m0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		return (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((int32_t)1))? 1 : 0);
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<TryBuildImmutableForDictionaryContract>b__25_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryBuildImmutableForDictionaryContractU3Eb__25_1_mC3BA01A2CBE9131D86F49697F9A9977CEB6A8D7F (U3CU3Ec_tC79FD77B78D3ACAD81FFFD49EDC3109C392C1002 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	{
		MethodInfo_t * L_0 = ___m0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		MethodInfo_t * L_2 = ___m0;
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_6 = V_0;
		int32_t L_7 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		bool L_10;
		L_10 = TypeExtensions_IsGenericType_m4D0B1C965448A579194F85D462C24F924AEFC79E(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11 = V_0;
		int32_t L_12 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(101 /* System.Type System.Type::GetGenericTypeDefinition() */, L_14);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_15) == ((RuntimeObject*)(Type_t *)L_17))? 1 : 0);
	}

IL_0048:
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m6AC6A20AB47ABD54F445EA005C691F574BB4D10D (U3CU3Ec__DisplayClass24_0_tC125E0CD29E109BEB28FC6552EB6AACB295A9A3C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::<TryBuildImmutableForArrayContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CTryBuildImmutableForArrayContractU3Eb__0_mB73763592C116EB3A06CC5DA3DD924F52814F4D7 (U3CU3Ec__DisplayClass24_0_tC125E0CD29E109BEB28FC6552EB6AACB295A9A3C * __this, ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * ___d0, const RuntimeMethod* method)
{
	{
		ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * L_0 = ___d0;
		String_t* L_1;
		L_1 = ImmutableCollectionTypeInfo_get_ContractTypeName_m0ED659CF74BC55517E024FCFF8B3B701D14D789B_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mB7CEEC8664DB69C7CAE99A1E177D813C08986F51 (U3CU3Ec__DisplayClass25_0_t5501618C98A023C3D5C1B39A834AEB76C15D5F59 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::<TryBuildImmutableForDictionaryContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CTryBuildImmutableForDictionaryContractU3Eb__0_m77FAD08935B5A8231E1F1B69B546B25554AA8626 (U3CU3Ec__DisplayClass25_0_t5501618C98A023C3D5C1B39A834AEB76C15D5F59 * __this, ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * ___d0, const RuntimeMethod* method)
{
	{
		ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * L_0 = ___d0;
		String_t* L_1;
		L_1 = ImmutableCollectionTypeInfo_get_ContractTypeName_m0ED659CF74BC55517E024FCFF8B3B701D14D789B_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo__ctor_m0AB525636A795616AD9635E25823BCABC674490A (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___contractTypeName0, String_t* ___createdTypeName1, String_t* ___builderTypeName2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___contractTypeName0;
		ImmutableCollectionTypeInfo_set_ContractTypeName_m83AA5ACC123B7E6D2D0DEED0126B571E928B164B_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___createdTypeName1;
		ImmutableCollectionTypeInfo_set_CreatedTypeName_mB5CD161B52BA5782EE4FB11597F62ED5C5DE0292_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___builderTypeName2;
		ImmutableCollectionTypeInfo_set_BuilderTypeName_mE6A7904BA9A0DF35BF6E31BB1F360D7389377905_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_ContractTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m0ED659CF74BC55517E024FCFF8B3B701D14D789B (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractTypeNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_ContractTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m83AA5ACC123B7E6D2D0DEED0126B571E928B164B (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractTypeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_CreatedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_CreatedTypeName_m4E926EAC2C4E1F2EFD3A5DEF52CA268C58CAAE9D (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCreatedTypeNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_CreatedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_mB5CD161B52BA5782EE4FB11597F62ED5C5DE0292 (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCreatedTypeNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_BuilderTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_BuilderTypeName_mF99E522BE187967311F31DEAB7951EFA6541E861 (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBuilderTypeNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_BuilderTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_mE6A7904BA9A0DF35BF6E31BB1F360D7389377905 (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBuilderTypeNameU3Ek__BackingField_2(L_0);
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
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__57__ctor_m41D3949EAB79FF14E017C03F577CEEC123E1184C (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__57_System_IDisposable_Dispose_mA39B103E347DDDFB5A8166C0B48DA64D15ECF415 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__57_U3CU3Em__Finally1_m5CA2C01D95757DFC71F35CEB9603B32061872168(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__57_MoveNext_m5CDC9BD98A3239F1F2A15144C5008605A22DE651 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m1B1317FD93BDFB5166AC07694A0403743E87A25D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBE5177484D8F3BF6CAF05CD3C8565FACB83809E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m3FB0BF358432F527AA169D6FA1BA1D5DA718A8C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E * V_2 = NULL;
	JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0071;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_009e;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			JObject_t3BB4A989053B2C740FCDC787E9D4B6C403DF340E * L_4 = V_2;
			JPropertyKeyedCollection_t4CE3437379E8E6DB644255434312044362CE2E2E * L_5 = L_4->get__properties_16();
			RuntimeObject* L_6;
			L_6 = Collection_1_GetEnumerator_m1B1317FD93BDFB5166AC07694A0403743E87A25D(L_5, /*hidden argument*/Collection_1_GetEnumerator_m1B1317FD93BDFB5166AC07694A0403743E87A25D_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0079;
		}

IL_003e:
		{
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_3();
			JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_8;
			L_8 = InterfaceFuncInvoker0< JToken_t606FB532FD973C5800A5960B13BA97792A11451A * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_tBE5177484D8F3BF6CAF05CD3C8565FACB83809E6_il2cpp_TypeInfo_var, L_7);
			V_3 = ((JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B *)CastclassClass((RuntimeObject*)L_8, JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B_il2cpp_TypeInfo_var));
			JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B * L_9 = V_3;
			String_t* L_10;
			L_10 = JProperty_get_Name_mDFCAD7620B46A64430191A6438EED8BC263FEB98_inline(L_9, /*hidden argument*/NULL);
			JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B * L_11 = V_3;
			JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_12;
			L_12 = JProperty_get_Value_m3E90E1B7D2A53F5936B7D0C9CFEF96BEF378C101(L_11, /*hidden argument*/NULL);
			KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  L_13;
			memset((&L_13), 0, sizeof(L_13));
			KeyValuePair_2__ctor_m3FB0BF358432F527AA169D6FA1BA1D5DA718A8C1((&L_13), L_10, L_12, /*hidden argument*/KeyValuePair_2__ctor_m3FB0BF358432F527AA169D6FA1BA1D5DA718A8C1_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009e;
		}

IL_0071:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0079:
		{
			RuntimeObject* L_14 = __this->get_U3CU3E7__wrap1_3();
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_003e;
			}
		}

IL_0086:
		{
			U3CGetEnumeratorU3Ed__57_U3CU3Em__Finally1_m5CA2C01D95757DFC71F35CEB9603B32061872168(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0097;
	}

FAULT_0097:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__57_System_IDisposable_Dispose_mA39B103E347DDDFB5A8166C0B48DA64D15ECF415(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(151)
	} // end fault
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009e:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__57_U3CU3Em__Finally1_m5CA2C01D95757DFC71F35CEB9603B32061872168 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  U3CGetEnumeratorU3Ed__57_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_Current_mDE7294A362E2764E5D90B9B23EC3E1FC41F61D4D (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__57_System_Collections_IEnumerator_Reset_m28430FFE60E02700F635CC3019CF206B1A6FF347 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__57_System_Collections_IEnumerator_Reset_m28430FFE60E02700F635CC3019CF206B1A6FF347_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__57_System_Collections_IEnumerator_get_Current_m49E460268466B2C53BD163089E8B9EE52CCB64E7 (U3CGetEnumeratorU3Ed__57_tA32031E15BFA034C2794F81B371E42A6217A721D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t0984214140CB622269F331EE2845E3F604F1F0A6_il2cpp_TypeInfo_var, &L_1);
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
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_m407FFC24436A6E44E21259DF6B0E00AE021DFDF2 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * L_0 = (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__1__ctor_m4607E73858F374F7C67735487CA4C204C92F5E2E(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JProperty/JPropertyList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_System_Collections_IEnumerable_GetEnumerator_mB6096AB84DE6050468C6E599A953B27C4B544F34 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = JPropertyList_GetEnumerator_m407FFC24436A6E44E21259DF6B0E00AE021DFDF2(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Add_m671EE75EC2170B75AE5AED4629023EA5E3E18C66 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = ___item0;
		__this->set__token_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Clear_mB96694EE2007C42FFCAFEAC3FD2BD721F575B224 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method)
{
	{
		__this->set__token_0((JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Contains(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Contains_m3F1BFFC7C0AFFEC71006AC98C5BD89478B10913A (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get__token_0();
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_1 = ___item0;
		return (bool)((((RuntimeObject*)(JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_0) == ((RuntimeObject*)(JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_1))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_CopyTo_m0F9BBBD326F6A7ACE7280A7C4F81CC518D4E90E9 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, JTokenU5BU5D_t577331C5F215B608BDAEF6E6CD6442F3C31635C9* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get__token_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JTokenU5BU5D_t577331C5F215B608BDAEF6E6CD6442F3C31635C9* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_3 = __this->get__token_0();
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_3);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Remove(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Remove_m927A56BF9495FF2FADD9AD368B5D203E2CAA1AE6 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get__token_0();
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_1 = ___item0;
		if ((!(((RuntimeObject*)(JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_0) == ((RuntimeObject*)(JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		__this->set__token_0((JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)NULL);
		return (bool)1;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_get_Count_m97DD8205C55C7ABB04B8A73EDE481876E1DA7C1B (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get__token_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_get_IsReadOnly_m39C5912277BDC245FF6A021E13E584786B5C4B64 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::IndexOf(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_IndexOf_mED564988B2C74912EB717E391E1DB5EE4AD6DF82 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get__token_0();
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_1 = ___item0;
		if ((((RuntimeObject*)(JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_0) == ((RuntimeObject*)(JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Insert_m322AC6D4CEAE04BF7E87DD5845B1BAC23377FF62 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, int32_t ___index0, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_1 = ___item1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_RemoveAt_mB719ECE9B1EDD2C4E54F2EC8599513F77903994D (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->set__token_0((JToken_t606FB532FD973C5800A5960B13BA97792A11451A *)NULL);
	}

IL_000a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t606FB532FD973C5800A5960B13BA97792A11451A * JPropertyList_get_Item_m94BCEBB56CAD924D78A5D6D5CC54882969A65388 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_1 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JPropertyList_get_Item_m94BCEBB56CAD924D78A5D6D5CC54882969A65388_RuntimeMethod_var)));
	}

IL_0009:
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_2 = __this->get__token_0();
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_set_Item_m852E22488CC111816E15C39A67E7AD97E0855C90 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, int32_t ___index0, JToken_t606FB532FD973C5800A5960B13BA97792A11451A * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_1 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JPropertyList_set_Item_m852E22488CC111816E15C39A67E7AD97E0855C90_RuntimeMethod_var)));
	}

IL_0009:
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_2 = ___value1;
		__this->set__token_0(L_2);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList__ctor_m4C868EBA7C9CB479284B1FF636CD978930FFB8B0 (JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_m59285502972E4B4E1228B62C12DEA85A95C61887 (LineInfoAnnotation_tB06A5CB81A9689F21E56D3474305B1D5559F015B * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_LineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_LinePosition_1(L_1);
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
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_m112BC76C468D17E73A4A6358A7D8DE85BD3249A5 (U3CU3Ec__DisplayClass57_0_tE7E8A5FF5291B5423F9C186518DA3324167C5D11 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::<CreateSerializationCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CCreateSerializationCallbackU3Eb__0_m687C5DD4926CE3D23B27C15E72C5D7E6FF7D05BC (U3CU3Ec__DisplayClass57_0_tE7E8A5FF5291B5423F9C186518DA3324167C5D11 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		RuntimeObject * L_7;
		L_7 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_mCACB7B82B6EE8EAF62E5E17B74343AF9FE8746A6 (U3CU3Ec__DisplayClass58_0_tAF13918CD4071B66752875EA68B937DAC2992BE5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::<CreateSerializationErrorCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CCreateSerializationErrorCallbackU3Eb__0_m42BD5D5D8F358257E604315EA804541412C57101 (U3CU3Ec__DisplayClass58_0_tAF13918CD4071B66752875EA68B937DAC2992BE5 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085 * ___econtext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ErrorContext_tA21D58DE28BAB5CBDB167C5E9EB35D0AF8F7A085 * L_8 = ___econtext2;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		RuntimeObject * L_9;
		L_9 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_7, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_mDEBE297052D53E866B9317373B0A7B235A13C716 (ReferenceEqualsEqualityComparer_t2485B59B603D9DA185808FAFEACC7E5DD8178177 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___x0;
		RuntimeObject * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_m602FAE44DA27DABF2EAD3B18CDE9F1513ACD0B6A (ReferenceEqualsEqualityComparer_t2485B59B603D9DA185808FAFEACC7E5DD8178177 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualsEqualityComparer__ctor_m1301786557DDE7B8A5F82663F3CC2842123524BD (ReferenceEqualsEqualityComparer_t2485B59B603D9DA185808FAFEACC7E5DD8178177 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF7991BE8131DC7BCE9AA3E85CED3D976F73C6D88 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * L_0 = (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD *)il2cpp_codegen_object_new(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m44861292CBDD874B841688F6BD58AAAA00C5D9B8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44861292CBDD874B841688F6BD58AAAA00C5D9B8 (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__37_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__37_0_m3F612395FCD17F41DBA5D7148B0827ED5FF0A7E4 (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * __this, JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * L_0 = ___p0;
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_m6371B46099AEFCFCC4FDA4C7E1979C74F4F01480_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__37_2(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__37_2_mC517B664C45C641D00FB6A2F115C294D2017895A (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * __this, JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * L_0 = ___p0;
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_m6371B46099AEFCFCC4FDA4C7E1979C74F4F01480_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__41_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * U3CU3Ec_U3CPopulateObjectU3Eb__41_0_mEE52A20008CFBE565FD2FEB3D6D1ED38F26FF1FF (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * __this, JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___m0, const RuntimeMethod* method)
{
	{
		JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * L_0 = ___m0;
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__41_1(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPopulateObjectU3Eb__41_1_mFA98EFCFCCA0EF237267C2C6CE90166FA4663EF0 (U3CU3Ec_tC90B4F4DBEBD1C99EAA34B227C899999157456FD * __this, JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * ___m0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_mE9C01EE1AF57CEDD7A55F0AE9EC198A7A2DD813F (U3CU3Ec__DisplayClass37_0_t9AA539C0E66ADBF64CD317BBFC81A71476F78290 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass37_0::<CreateObjectUsingCreatorWithParameters>b__1(Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass37_0_U3CCreateObjectUsingCreatorWithParametersU3Eb__1_m7A08EB7772F0016810CF310BFBF2E7F14C7F38AF (U3CU3Ec__DisplayClass37_0_t9AA539C0E66ADBF64CD317BBFC81A71476F78290 * __this, CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31 * ___p0, const RuntimeMethod* method)
{
	{
		CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31 * L_0 = ___p0;
		JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * L_1 = L_0->get_Property_1();
		JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * L_2 = __this->get_property_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 *)L_1) == ((RuntimeObject*)(JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorPropertyContext__ctor_mD26705C015D105F5D8CCD76FD367BD8BDEA27E76 (CreatorPropertyContext_t7C3B324CA2F23080CD336A61638506BC88844A31 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA2D627BA308D493192538C157D53A03F2BD906D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * L_0 = (U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 *)il2cpp_codegen_object_new(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0ACF444D758E518A54B4290030E1201C2C764C21(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0ACF444D758E518A54B4290030E1201C2C764C21 (U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<GetCreator>b__18_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetCreatorU3Eb__18_1_m604A70B4730881876C4D44DC90281432AFB81414 (U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___param0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7438454F3EF140B6B22CB3ED354178FA3A495D5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__18_1_m604A70B4730881876C4D44DC90281432AFB81414_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___param0;
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mD67B27933A12F6FA2BA8BB92A59ADB6D56750447 (U3CU3Ec__DisplayClass18_0_t5EA6F0BB60CF86C190FCBE0EF5E43E8ADCB1C00F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::<GetCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass18_0_U3CGetCreatorU3Eb__0_m0646808A3DC8B01D36B7328F7D9DBD44D73616CC (U3CU3Ec__DisplayClass18_0_t5EA6F0BB60CF86C190FCBE0EF5E43E8ADCB1C00F * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisType_t_m311E0E9AE951A2BA1C23EF34CD8704E140AAD32F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mE87B77E7AA77F4A19EB32FAAD8FB585CD6E94D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mBE67F927E6871A25C6A5C0E74B32B9CEBA397590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTypeReflector_tECA5EBBBBC0A6D319C538C022E85B08259A549A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__18_1_m604A70B4730881876C4D44DC90281432AFB81414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * G_B3_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * G_B2_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___parameters0;
			if (!L_0)
			{
				goto IL_006d;
			}
		}

IL_0003:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var);
			Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * L_2 = ((U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var))->get_U3CU3E9__18_1_1();
			Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * L_3 = L_2;
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			if (L_3)
			{
				G_B3_0 = L_3;
				G_B3_1 = L_1;
				goto IL_0023;
			}
		}

IL_000c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var);
			U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5 * L_4 = ((U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * L_5 = (Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 *)il2cpp_codegen_object_new(Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5_il2cpp_TypeInfo_var);
			Func_2__ctor_mBE67F927E6871A25C6A5C0E74B32B9CEBA397590(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetCreatorU3Eb__18_1_m604A70B4730881876C4D44DC90281432AFB81414_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mBE67F927E6871A25C6A5C0E74B32B9CEBA397590_RuntimeMethod_var);
			Func_2_tABA793A62D4F6CF6081E9A83C9057514183C09E5 * L_6 = L_5;
			((U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57C319BE2BF305CF3CE2CF7F5AABE8FE79D282D5_il2cpp_TypeInfo_var))->set_U3CU3E9__18_1_1(L_6);
			G_B3_0 = L_6;
			G_B3_1 = G_B2_1;
		}

IL_0023:
		{
			RuntimeObject* L_7;
			L_7 = Enumerable_Select_TisRuntimeObject_TisType_t_m311E0E9AE951A2BA1C23EF34CD8704E140AAD32F((RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisType_t_m311E0E9AE951A2BA1C23EF34CD8704E140AAD32F_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
			L_8 = Enumerable_ToArray_TisType_t_mE87B77E7AA77F4A19EB32FAAD8FB585CD6E94D92(L_7, /*hidden argument*/Enumerable_ToArray_TisType_t_mE87B77E7AA77F4A19EB32FAAD8FB585CD6E94D92_RuntimeMethod_var);
			V_0 = L_8;
			Type_t * L_9 = __this->get_type_0();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_0;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_11;
			L_11 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C(L_9, L_10, /*hidden argument*/NULL);
			V_1 = L_11;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12 = V_1;
			if (!L_12)
			{
				goto IL_0052;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_tECA5EBBBBC0A6D319C538C022E85B08259A549A3_il2cpp_TypeInfo_var);
			ReflectionDelegateFactory_tE87EA568599AEFAB20A3C212EB676D70C9B6EF33 * L_13;
			L_13 = JsonTypeReflector_get_ReflectionDelegateFactory_mAC31F7E786ADABF1796E5D3C37641986ED2D8B63(/*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_14 = V_1;
			ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 * L_15;
			L_15 = VirtFuncInvoker1< ObjectConstructor_1_tC95672E47F92BAD85E558911E54CB4EF289ED6C6 *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_13, L_14);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = ___parameters0;
			RuntimeObject * L_17;
			L_17 = ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B(L_15, L_16, /*hidden argument*/ObjectConstructor_1_Invoke_m6BA10F7EBB4A3CCEBFC5F0D87CD9E8998DB0D56B_RuntimeMethod_var);
			V_2 = L_17;
			goto IL_00bb;
		}

IL_0052:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_18;
			L_18 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_19 = __this->get_type_0();
			String_t* L_20;
			L_20 = StringUtils_FormatWith_m58C932A4B31386CF5BF0844B9E4436A0DD9D6365(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23B435163284C2F25AE5E84212B0650024F0760B)), L_18, L_19, /*hidden argument*/NULL);
			JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * L_21 = (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var)));
			JsonException__ctor_mC4DE63EA266E9EBD0AD2DDA745582CFFAE283E9E(L_21, L_20, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetCreatorU3Eb__0_m0646808A3DC8B01D36B7328F7D9DBD44D73616CC_RuntimeMethod_var)));
		}

IL_006d:
		{
			Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * L_22 = __this->get_defaultConstructor_1();
			if (L_22)
			{
				goto IL_0090;
			}
		}

IL_0075:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_23;
			L_23 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_24 = __this->get_type_0();
			String_t* L_25;
			L_25 = StringUtils_FormatWith_m58C932A4B31386CF5BF0844B9E4436A0DD9D6365(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184)), L_23, L_24, /*hidden argument*/NULL);
			JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * L_26 = (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var)));
			JsonException__ctor_mC4DE63EA266E9EBD0AD2DDA745582CFFAE283E9E(L_26, L_25, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetCreatorU3Eb__0_m0646808A3DC8B01D36B7328F7D9DBD44D73616CC_RuntimeMethod_var)));
		}

IL_0090:
		{
			Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * L_27 = __this->get_defaultConstructor_1();
			RuntimeObject * L_28;
			L_28 = Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00(L_27, /*hidden argument*/Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var);
			V_2 = L_28;
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009e;
		}
		throw e;
	}

CATCH_009e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_29;
		L_29 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_30 = __this->get_type_0();
		String_t* L_31;
		L_31 = StringUtils_FormatWith_m58C932A4B31386CF5BF0844B9E4436A0DD9D6365(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442)), L_29, L_30, /*hidden argument*/NULL);
		Exception_t * L_32 = V_3;
		JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 * L_33 = (JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tBCB21054C3A3E6AFB8B45C6A2730E2709A0E8962_il2cpp_TypeInfo_var)));
		JsonException__ctor_m89159A58826AA5C7183C4BAD0C198B633C096714(L_33, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetCreatorU3Eb__0_m0646808A3DC8B01D36B7328F7D9DBD44D73616CC_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00bb:
	{
		RuntimeObject * L_34 = V_2;
		return L_34;
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
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mC8C1217D8291EFBFA00A24CF05B37A17E47BD437 (U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m01DCA22394A1BDC08F9EBC953866BAF99399D5E1 (U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = __this->get_c_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		RuntimeObject * L_2;
		L_2 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_mD5AA25F911D27E01EEE27834035AE540A605D3AC (U3CU3Ec__DisplayClass3_0_tEE1E4820A00F39D71F6400FCBB4A9800D944892B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		RuntimeObject * L_2;
		L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_1, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9B82E469F99D12BD14D62E0AE297E324770BAFD7 (U3CU3Ec__DisplayClass11_0_t3B67A6D488F39C9E1E54D461B52C88721E1754F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass11_0_U3CCreateU3Eb__0_mBE4E64F4748E6BB03BEEDB5D9FB36D7F6B340C59 (U3CU3Ec__DisplayClass11_0_t3B67A6D488F39C9E1E54D461B52C88721E1754F5 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t0C80BCE5F70FAB2FD563DE796F3554D8079B803D * L_0 = __this->get_ctor_0();
		RuntimeObject * L_1;
		L_1 = Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00(L_0, /*hidden argument*/Func_1_Invoke_m255C67AD5A99F82CB6F67E91430764BFF36B3B00_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_m7DF3282BD4903671C6BEDE47901B76F9B8FFD6DF (U3CU3Ec__DisplayClass11_1_t3F322302FF041E63376BB1F8C1AB2CE5F206EB7A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass11_1_U3CCreateU3Eb__1_mF7935E40DB22CA6D9DBE3C1BF324C2C99666EB2B (U3CU3Ec__DisplayClass11_1_t3F322302FF041E63376BB1F8C1AB2CE5F206EB7A * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_2__ctor_m44E9CEF79AC40B8B99788A8D891A5795D11C0371 (U3CU3Ec__DisplayClass11_2_tD4AD244B508A32D589B51182B531126AE5FFE25D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_2_U3CCreateU3Eb__2_m2611CC8852440A5068ECC3F794D7CDEBF221E4E0 (U3CU3Ec__DisplayClass11_2_tD4AD244B508A32D589B51182B531126AE5FFE25D * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t84C825C09838047FE0150CEBE7F2D4BD21907EEF * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		RuntimeObject * L_5;
		L_5 = MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_m28621941A002BD8FAB366AB717AB18DEBA78BF01_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4D1B378CCD0E47B010B1AE3DFE3A64BB6E4A4AB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * L_0 = (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C *)il2cpp_codegen_object_new(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDE22BE8696E6256DEB16010D6F5013D47C4050B1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDE22BE8696E6256DEB16010D6F5013D47C4050B1 (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__11_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__11_0_m6D40C85DA3E273DA134934F53ADC0D5CCC6A98D5 (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m18C276756C35E42E8C48803E25D3C5A21B6E795C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2;
		L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m18C276756C35E42E8C48803E25D3C5A21B6E795C((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_m18C276756C35E42E8C48803E25D3C5A21B6E795C_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__31_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__31_0_mEC5E4503AB4BDF5BABFD5D7C7B5F5A4E77E97E30 (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__39_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__39_0_m55D7D3060AE7F34A11698AB2069A283048FCF497 (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__41_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__41_0_mF42CACC8D26885B1C118B95DE09A8FC8640369A9 (U3CU3Ec_t689D75521B29D57491DF620D26AABF2323139E4C * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		bool L_1;
		L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m7E0EE669DEB29BA07DF83E05CAF24124A3DD4974 (U3CU3Ec__DisplayClass31_0_t1AB88156DEA5BB047C2B90CF8F034FCBC885F99E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::<GetFieldsAndProperties>b__1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CGetFieldsAndPropertiesU3Eb__1_m389077DB53A030CFB1AEC109C59A976C8D40140C (U3CU3Ec__DisplayClass31_0_t1AB88156DEA5BB047C2B90CF8F034FCBC885F99E * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MemberInfo_t * L_2 = __this->get_memberInfo_0();
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		return (bool)((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3))? 1 : 0);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_mB1E7D833DED3D5B163052D165FAC816D739A5163 (U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CGetChildPrivatePropertiesU3Eb__0_mBED7F549381C497DA227320100E2D660F40FA424 (U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CGetChildPrivatePropertiesU3Eb__1_m697F0A35684AC89606EE5A1FE5CF4CA870CE5AF4 (U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		return (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
	}

IL_002c:
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_1__ctor_m716B53651B2840D005313BC77A8B7372D2E4A49C (U3CU3Ec__DisplayClass44_1_tF600AF9097C2A9C29B62258A96291E141EF7B98C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_1_U3CGetChildPrivatePropertiesU3Eb__2_m9229636C349ED1CD9A01E0434CA5E7387D21548E (U3CU3Ec__DisplayClass44_1_tF600AF9097C2A9C29B62258A96291E141EF7B98C * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * G_B4_0 = NULL;
	MethodInfo_t * G_B3_0 = NULL;
	Type_t * G_B5_0 = NULL;
	Type_t * G_B7_0 = NULL;
	Type_t * G_B6_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___p0;
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		U3CU3Ec__DisplayClass44_0_tEE8492E31F14D3BA824CCD59A405F813C57761C4 * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		PropertyInfo_t * L_3 = L_2->get_subTypeProperty_0();
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		PropertyInfo_t * L_6 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ReflectionUtils_IsVirtual_mA8CDEC82C20AB1E325F64FA3922916C4D798B440(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		PropertyInfo_t * L_8 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2FD1CCDCC9A693DCA8AD9E4D0499BD8E3799F982_il2cpp_TypeInfo_var);
		MethodInfo_t * L_9;
		L_9 = ReflectionUtils_GetBaseDefinition_m0C71F1BC8870022FEB6C62EA588BBBE4B01EBD31(L_8, /*hidden argument*/NULL);
		MethodInfo_t * L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = ((Type_t *)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, G_B4_0);
		G_B5_0 = L_11;
	}

IL_0037:
	{
		Type_t * L_12 = G_B5_0;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0041;
		}
	}
	{
		PropertyInfo_t * L_13 = ___p0;
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		G_B7_0 = L_14;
	}

IL_0041:
	{
		Type_t * L_15 = __this->get_subTypePropertyDeclaringType_0();
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, Type_t * >::Invoke(111 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, G_B7_0, L_15);
		return L_16;
	}

IL_004d:
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
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m4607E73858F374F7C67735487CA4C204C92F5E2E (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mD8D4B00294CFD8D30F79A8525A83B18001060345 (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m7D035E9303529445D24E2A2C70B5388381F3DDFF (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * L_4 = V_1;
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_5 = L_4->get__token_0();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		JPropertyList_tA6BDBF33BA47AABBB10147DA887EDBC121297BCF * L_6 = V_1;
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_7 = L_6->get__token_0();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		return (bool)0;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t606FB532FD973C5800A5960B13BA97792A11451A * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_mF971DE3537A8D81751F023EF76BD0DCFFEDAACC8 (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m57940835C922FCDFEDD00EB55873D56095D7F2C6 (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m57940835C922FCDFEDD00EB55873D56095D7F2C6_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m880890E6413AA048C9DC0F3C5DE21B02AAE2F0DE (U3CGetEnumeratorU3Ed__1_t57BA3CBCE68BB8D134F33A37E1F9B126637AF592 * __this, const RuntimeMethod* method)
{
	{
		JToken_t606FB532FD973C5800A5960B13BA97792A11451A * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_mC35A4023C2BEEE61E8773E6B36B5ED3B952B5A38_inline (JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3COrderU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m0ED659CF74BC55517E024FCFF8B3B701D14D789B_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractTypeNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m83AA5ACC123B7E6D2D0DEED0126B571E928B164B_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractTypeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_mB5CD161B52BA5782EE4FB11597F62ED5C5DE0292_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCreatedTypeNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_mE6A7904BA9A0DF35BF6E31BB1F360D7389377905_inline (ImmutableCollectionTypeInfo_t7305B06F275CCA18D0BA08B230D26085EBE0A136 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBuilderTypeNameU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mDFCAD7620B46A64430191A6438EED8BC263FEB98_inline (JProperty_tCF955EA2010AE2361003E285589EECE47B3E201B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m6371B46099AEFCFCC4FDA4C7E1979C74F4F01480_inline (JsonProperty_tB8CC3BE486644C70711EB4C2CE3C458ECAAD54B6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__propertyName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
