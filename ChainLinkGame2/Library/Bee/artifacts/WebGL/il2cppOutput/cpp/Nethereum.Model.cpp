﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct TransactionTypeEncoder_1_tCA5A25CDFDA186E3CD6FB79953C86982F509C190;
struct TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A;
struct DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A;
struct LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3;
struct LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7;
struct RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
struct Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999;
struct SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F;
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A;
struct SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F;
struct SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818;
struct SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B;
struct String_t;
struct Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17;
struct Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral8B1E24B4D727EDA78ED297F0CF28ED9026B51D02;
IL2CPP_EXTERN_C String_t* _stringLiteral98DA633D8982D07B9B6B488E1767152B942ED6CB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0E0C429E93D94E33D5AA4C943CDFF123EB9FF31;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCD5012A1716F5786C329A739B08FED02D7B9D46E 
{
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC  : public RuntimeObject
{
	AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA  : public RuntimeObject
{
};
struct AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A  : public RuntimeObject
{
	String_t* ___U3CAddressU3Ek__BackingField;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___U3CStorageKeysU3Ek__BackingField;
};
struct AccessListRLPEncoderDecoder_t455694E3CCD3D5EEC37355AA89120754DF14D9A4  : public RuntimeObject
{
};
struct DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899  : public RuntimeObject
{
};
struct RLPSignedDataEncoder_tDE834D43B0E4CA7BFCCA4C893DC0CBDD9A369E2E  : public RuntimeObject
{
};
struct RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4  : public RuntimeObject
{
	int32_t ___numberOfEncodingElements;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlpSignedEncoded;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rlpRawWithNoSignature;
	RuntimeObject* ___U3CSignatureU3Ek__BackingField;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___U3CDataU3Ek__BackingField;
};
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6  : public RuntimeObject
{
};
struct Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999  : public RuntimeObject
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CSU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CVU3Ek__BackingField;
};
struct SignatureExtensions_tDD409F4DE39AB525A9F0462A34311E6D67F4FA68  : public RuntimeObject
{
};
struct SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___U3CDataU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CVU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CSU3Ek__BackingField;
};
struct SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818  : public RuntimeObject
{
	RuntimeObject* ___U3CSignatureU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TransactionTypeExtensions_t2D5BED5B78852E389E1557FA62FE00E149FF79CF  : public RuntimeObject
{
};
struct VRecoveryAndChainCalculations_t3996E4190BA3DCBD1EC8C2E85DC0644C1A73583C  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list;
	int32_t ____index;
	int32_t ____version;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current;
};
struct Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 
{
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ____list;
	int32_t ____index;
	int32_t ____version;
	AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	int32_t ____sign;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign;
	Il2CppSafeArray* ____bits;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
	RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___U3CRlpSignerEncoderU3Ek__BackingField;
};
struct SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
};
struct Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E  : public TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA
{
	uint8_t ___Type;
};
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
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	bool ___hasValue;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A  : public SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F
{
};
struct LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3  : public SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A
{
};
struct LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7  : public SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A
{
};
struct Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17  : public SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CChainIdU3Ek__BackingField;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CNonceU3Ek__BackingField;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CMaxPriorityFeePerGasU3Ek__BackingField;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CMaxFeePerGasU3Ek__BackingField;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CGasLimitU3Ek__BackingField;
	String_t* ___U3CReceiverAddressU3Ek__BackingField;
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CAmountU3Ek__BackingField;
	String_t* ___U3CDataU3Ek__BackingField;
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___U3CAccessListU3Ek__BackingField;
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray;
};
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC_StaticFields
{
	AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields
{
	DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* ___U3CCurrentU3Ek__BackingField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_BYTE_ARRAY;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZERO_BYTE_ARRAY;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_DATA_HASH;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_TRIE_HASH;
};
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields
{
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* ___U3CCurrentU3Ek__BackingField;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields
{
	Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* ___U3CCurrentU3Ek__BackingField;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields
{
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_PRICE;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_LIMIT;
};
struct LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RHASH_DEFAULT;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SHASH_DEFAULT;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_GetBigIntegerForEncoding_mCEF6F62DE74545014F39F1C7672A6DCEA8DCD847_gshared (TransactionTypeEncoder_1_tCA5A25CDFDA186E3CD6FB79953C86982F509C190* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_AddTypeToEncodedBytes_mA8EB93FB234D48D5792133C3F2ECD1AE7439251A_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encodedBytes, uint8_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionTypeEncoder_1__ctor_mA2955FAFAC6D155378BAEF96B44772ECE9D34649_gshared (TransactionTypeEncoder_1_tCA5A25CDFDA186E3CD6FB79953C86982F509C190* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_inline (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1 (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 (*) (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324 (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_inline (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096* __this, const RuntimeMethod* method)
{
	return ((  AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* (*) (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_srcData, const RuntimeMethod* method) ;
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) ;
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_items, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8 (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__ctor_m8E30C8E47A736CD667A25ED969352CB5F510DA7A (DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m8B68A14C93AA88885686C4F348A23EA597F51BCF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_bigInteger, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m6A3F6E34074F98A7D88E242EFE77FB63AABBA329 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_chainId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, int32_t ___1_numberOfEncodingElements, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m1EF3F7B45328F9D2AD7E3EB31FC78219DFDA1806 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_chainId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811 (int32_t ___0_number, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA (RuntimeObject* ___0_signature, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___1_encodedData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, RuntimeObject* ___1_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataEncoder_EncodeSigned_mDE2A2B39F05CCD1293D333689FCB4F4C93A05014 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* ___0_signedData, int32_t ___1_numberOfElements, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_dataItems, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_indexOfListDataItems, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, bool ___1_prefix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m380DD863FBD3F5C076A56B2A4BFC8384C1E3462E (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m9F1519286F76AF2BF5F258F85E811C978E3889C3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase__ctor_mDCA89E6B58A83587BC279ECD1B9C1ACC1E258161 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_get_RawHash_mBDE019C306B735B6FDE62E3A511F60218036EE07 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_SetSignature_m4FD99F899D0A65D258BA7CFCD0BFCEC5F7CD7949 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___0_signature, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTypeTransaction__ctor_mEC60D942420AD0CB87E9DBC3DD0D87CCA1FC22EC (SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA*, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72, const RuntimeMethod*))TransactionTypeEncoder_1_GetBigIntegerForEncoding_mCEF6F62DE74545014F39F1C7672A6DCEA8DCD847_gshared)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccessListRLPEncoderDecoder_EncodeAccessList_m19721FDF07E68C23A8858E899BADC9206D5F9480 (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___0_accessListItems, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___0_transaction, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encodedBytes, uint8_t ___1_type, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t, const RuntimeMethod*))TransactionTypeEncoder_1_AddTypeToEncodedBytes_mA8EB93FB234D48D5792133C3F2ECD1AE7439251A_gshared)(___0_encodedBytes, ___1_type, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1 (int32_t ___0_transactionType, const RuntimeMethod* method) ;
inline void TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA* __this, const RuntimeMethod* method)
{
	((  void (*) (TransactionTypeEncoder_1_t171D4067E527B7D87CB7C9663961F22C165080AA*, const RuntimeMethod*))TransactionTypeEncoder_1__ctor_mA2955FAFAC6D155378BAEF96B44772ECE9D34649_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34 (uint8_t ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_right, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8 (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem_set_Address_m02AC4A9672473673291EC9A307CF8B2B83951820 (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAddressU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5 (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CStorageKeysU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CStorageKeysU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageKeysU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessListItem__ctor_m9445470FF3EBC4C4A2C830406E6F5010F88B726A (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline(__this, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AccessListRLPEncoderDecoder_EncodeAccessList_m19721FDF07E68C23A8858E899BADC9206D5F9480 (List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___0_accessListItems, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* V_2 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_3 = NULL;
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_4 = NULL;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_5;
	memset((&V_5), 0, sizeof(V_5));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = ___0_accessListItems;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_1 = ___0_accessListItems;
		int32_t L_2;
		L_2 = List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_inline(L_1, List_1_get_Count_m0BB9CF9506246DC1E18A6833CC459D0CE5853907_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)192));
		return L_4;
	}

IL_001a:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_5, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_5;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_6 = ___0_accessListItems;
		Enumerator_tB31FE5AECD7B38818A46E896BEC743AD4D8CF096 L_7;
		L_7 = List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1(L_6, List_1_GetEnumerator_m6B1F2F4C1769A976C20858635DE37816494C6EF1_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c7:
			{
				Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324((&V_1), Enumerator_Dispose_mB314C07EA57C31C2E6917FE2F65042088C804324_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00b9_1;
			}

IL_002c_1:
			{
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_8;
				L_8 = Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_inline((&V_1), Enumerator_get_Current_mE3ADF8014B916CA0E0EE262BAC6A99AE4AD24C2F_RuntimeMethod_var);
				V_2 = L_8;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_9 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
				List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_9, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
				V_3 = L_9;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_10 = V_3;
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_11 = V_2;
				String_t* L_12;
				L_12 = AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8_inline(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_13, NULL);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_10, L_14, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_15 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
				List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_15, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
				V_4 = L_15;
				AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* L_16 = V_2;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_17;
				L_17 = AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline(L_16, NULL);
				Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_18;
				L_18 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_17, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
				V_5 = L_18;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0088_1:
					{
						Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_5), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
						return;
					}
				});
				try
				{
					{
						goto IL_007d_2;
					}

IL_0066_2:
					{
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
						L_19 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_5), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
						V_6 = L_19;
						List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_20 = V_4;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_6;
						il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
						L_22 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_21, NULL);
						List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_20, L_22, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
					}

IL_007d_2:
					{
						bool L_23;
						L_23 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_5), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
						if (L_23)
						{
							goto IL_0066_2;
						}
					}
					{
						goto IL_0096_1;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0096_1:
			{
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_24 = V_3;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_25 = V_4;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26;
				L_26 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_25, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
				L_27 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_26, NULL);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_24, L_27, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_28 = V_0;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_29 = V_3;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_30;
				L_30 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_29, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
				L_31 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_30, NULL);
				List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_28, L_31, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
			}

IL_00b9_1:
			{
				bool L_32;
				L_32 = Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8((&V_1), Enumerator_MoveNext_mBF68EC84ACDB27C09479EF020E229E82D08315E8_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_002c_1;
				}
			}
			{
				goto IL_00d5;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_33 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_34;
		L_34 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_33, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_34, NULL);
		return L_35;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__ctor_m8E30C8E47A736CD667A25ED969352CB5F510DA7A (DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValues__cctor_mDB3DAFD94FC8614D5EE0DB2CC19AB700FB02ABC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899* L_0 = (DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899*)il2cpp_codegen_object_new(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		DefaultValues__ctor_m8E30C8E47A736CD667A25ED969352CB5F510DA7A(L_0, NULL);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___ZERO_BYTE_ARRAY), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_3;
		L_3 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_3, L_4, NULL);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_DATA_HASH = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_DATA_HASH), (void*)L_5);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_6;
		L_6 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_6, L_8, NULL);
		((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_TRIE_HASH = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_TRIE_HASH), (void*)L_9);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m6A3F6E34074F98A7D88E242EFE77FB63AABBA329 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_nonce;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_gasPrice;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_gasLimit;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_receiveAddress;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___5_data;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6;
		L_6 = LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_7 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		RLPSignedDataHashBuilder__ctor_m8B68A14C93AA88885686C4F348A23EA597F51BCF(L_7, L_6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransaction__ctor_m21E35DC359DCC692DAEB19FC6E1BDBAD64F9BBD2 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, String_t* ___0_to, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_amount, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___2_nonce, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___3_gasPrice, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___4_gasLimit, String_t* ___5_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___2_nonce;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___3_gasPrice;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___4_gasLimit;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_4, NULL);
		String_t* L_6 = ___0_to;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_6, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___1_amount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_8, NULL);
		String_t* L_10 = ___5_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_10, NULL);
		LegacyTransaction__ctor_m6A3F6E34074F98A7D88E242EFE77FB63AABBA329(__this, L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransaction_GetElementsInOrder_m1DD527D9C3EEF9CBBFC10EEDA86FAB19D0961992 (LegacyTransaction_t1C70ABBEAA9CD7D2FAA199E09DD98EF0D23B9EB3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___3_receiveAddress;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		___3_receiveAddress = L_1;
	}

IL_000b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_nonce;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_gasPrice;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_gasLimit;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___3_receiveAddress;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___4_value;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___5_data;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		return L_13;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m1EF3F7B45328F9D2AD7E3EB31FC78219DFDA1806 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_chainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_nonce;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_gasPrice;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_gasLimit;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_receiveAddress;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___5_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___6_chainId;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7;
		L_7 = LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_8 = (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4*)il2cpp_codegen_object_new(RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4_il2cpp_TypeInfo_var);
		RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11(L_8, L_7, 6, NULL);
		SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__ctor_m6D90F35D1C31B4D358FDEFCD83C3FD156E9A6A8B (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, String_t* ___0_to, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_amount, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___2_nonce, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___3_gasPrice, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___4_gasLimit, String_t* ___5_data, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___6_chainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___2_nonce;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_0, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2 = ___3_gasPrice;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4 = ___4_gasLimit;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_4, NULL);
		String_t* L_6 = ___0_to;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_6, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_8 = ___1_amount;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_8, NULL);
		String_t* L_10 = ___5_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_10, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_12 = ___6_chainId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_12, NULL);
		LegacyTransactionChainId__ctor_m1EF3F7B45328F9D2AD7E3EB31FC78219DFDA1806(__this, L_1, L_3, L_5, L_7, L_9, L_11, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F LegacyTransactionChainId_GetChainIdAsBigInteger_mCCA8999D57B292F332D51A1A860C4F199862B00F (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBigIntegerFromRLPDecoded_mAD7F985D3961A7070872967A541A414B9B5D13ED(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LegacyTransactionChainId_get_ChainId_mE15EC4FEE13CAF17C0A834AEE750CE37BC6001F3 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(L_0, NULL);
		int32_t L_2 = 6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* LegacyTransactionChainId_GetElementsInOrder_mB60AD855FEDE959652C6AD1194C08FE3CDAB6334 (LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_nonce, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_gasPrice, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_gasLimit, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_receiveAddress, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_value, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_data, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_chainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___3_receiveAddress;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		___3_receiveAddress = L_1;
	}

IL_000b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_nonce;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_gasPrice;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_gasLimit;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___3_receiveAddress;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_10);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_11 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___4_value;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___5_data;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___6_chainId;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_16);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_17 = L_15;
		il2cpp_codegen_runtime_class_init_inline(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_18);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_19 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_20);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionChainId__cctor_m1732926F6B1990F1E8E6F257C4F5A36E6F4AFEBF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811(0, NULL);
		((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___RHASH_DEFAULT), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mB8A2D4491D58D2CFEDB5F7086A4D41E2BA349811(0, NULL);
		((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_StaticFields*)il2cpp_codegen_static_fields_for(LegacyTransactionChainId_t92C6976DAD06ABC3AF8659E6D8B0B4FF74FB4DE7_il2cpp_TypeInfo_var))->___SHASH_DEFAULT), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataEncoder_EncodeSigned_mDE2A2B39F05CCD1293D333689FCB4F4C93A05014 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* ___0_signedData, int32_t ___1_numberOfElements, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000a:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = V_0;
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_2 = ___0_signedData;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_3;
		L_3 = SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline(L_2, NULL);
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_6, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_7, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___1_numberOfElements;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_11 = ___0_signedData;
		RuntimeObject* L_12;
		L_12 = SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88(L_11, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13 = V_0;
		RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA(L_12, L_13, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_14 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15;
		L_15 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_14, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA (RuntimeObject* ___0_signature, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___1_encodedData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_signature;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_1 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_3 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_3);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_5 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = 0;
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		if (L_8)
		{
			goto IL_0026;
		}
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		V_0 = L_9;
		goto IL_002d;
	}

IL_0026:
	{
		RuntimeObject* L_10 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_10);
		V_0 = L_11;
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_12, NULL);
		V_0 = L_13;
		RuntimeObject* L_14 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F(L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_16, NULL);
		V_1 = L_17;
		RuntimeObject* L_18 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = ConvertorForRLPEncodingExtensions_TrimZeroBytes_mEAF1B87C87761C26491C2F3106011097B4E6D99F(L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_20, NULL);
		V_2 = L_21;
		goto IL_0079;
	}

IL_0058:
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_22, NULL);
		V_0 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_24, NULL);
		V_1 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_StaticFields*)il2cpp_codegen_static_fields_for(DefaultValues_tC3F6D58F05F9327BD53735FC2D446D7405A47899_il2cpp_TypeInfo_var))->___EMPTY_BYTE_ARRAY;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_26, NULL);
		V_2 = L_27;
	}

IL_0079:
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_28 = ___1_encodedData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_28, L_29, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_30 = ___1_encodedData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_30, L_31, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_32 = ___1_encodedData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_32, L_33, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignatureU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSignatureU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m8B68A14C93AA88885686C4F348A23EA597F51BCF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_data;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___0_data;
		RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11(__this, L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder__ctor_m847B36519054299C9A34B9412FADF502F0A47B11 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, int32_t ___1_numberOfEncodingElements, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_numberOfEncodingElements;
		__this->___numberOfEncodingElements = L_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = ___0_data;
		RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_get_RawHash_mBDE019C306B735B6FDE62E3A511F60218036EE07 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF(__this, NULL);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___rlpSignedEncoded;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___rlpSignedEncoded;
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2;
		L_2 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline(__this, NULL);
		SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* L_4 = (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F*)il2cpp_codegen_object_new(SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F_il2cpp_TypeInfo_var);
		SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611(L_4, L_2, L_3, NULL);
		int32_t L_5 = __this->___numberOfEncodingElements;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = RLPSignedDataEncoder_EncodeSigned_mDE2A2B39F05CCD1293D333689FCB4F4C93A05014(L_4, L_5, NULL);
		__this->___rlpSignedEncoded = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpSignedEncoded), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___rlpSignedEncoded;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0;
		L_0 = RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLP_EncodeDataItemsAsElementOrListAndCombineAsList_m03BF5928F42FA0AE887AF871B1D36202A3A6D791(L_0, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, NULL);
		__this->___rlpRawWithNoSignature = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpRawWithNoSignature), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___rlpRawWithNoSignature;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_SetSignature_m4FD99F899D0A65D258BA7CFCD0BFCEC5F7CD7949 (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___0_signature, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_signature;
		RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline(__this, L_0, NULL);
		__this->___rlpSignedEncoded = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rlpSignedEncoded), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m380DD863FBD3F5C076A56B2A4BFC8384C1E3462E (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Signature_get_R_mA7D7770AB9F63885830C2EBFB81BE35503DC9AFD (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55 (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Signature_get_S_m1709E5CA9B9EDA3F3747117834A622CEF9CE96BF (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CSU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393 (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CSU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Signature_get_V_m38057C8BA3E63CB9DAE239B700DC22A1396D195E (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CVU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CVU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SignatureExtensions_CreateStringSignature_mCC07C991DD1B2C3116BE9F27F157032316FED075 (RuntimeObject* ___0_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_1, (bool)0, NULL);
		String_t* L_3;
		L_3 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_2, ((int32_t)64), ((int32_t)48), NULL);
		RuntimeObject* L_4 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_5, (bool)0, NULL);
		String_t* L_7;
		L_7 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_6, ((int32_t)64), ((int32_t)48), NULL);
		RuntimeObject* L_8 = ___0_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_8);
		String_t* L_10;
		L_10 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_9, (bool)0, NULL);
		String_t* L_11;
		L_11 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89, L_3, L_7, L_10, NULL);
		return L_11;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CVU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CVU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CSU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CSU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedData_GetSignature_m5BCFE6CA47DA7D778E78995CC18BBC9D50733C88 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_2 = (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999*)il2cpp_codegen_object_new(Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999_il2cpp_TypeInfo_var);
		Signature__ctor_m380DD863FBD3F5C076A56B2A4BFC8384C1E3462E(L_2, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_3 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline(__this, NULL);
		Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline(L_3, L_4, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline(__this, NULL);
		Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline(L_5, L_6, NULL);
		Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* L_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline(__this, NULL);
		Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline(L_7, L_8, NULL);
		return L_7;
	}

IL_003a:
	{
		return (RuntimeObject*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m9F1519286F76AF2BF5F258F85E811C978E3889C3 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_data;
		SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedData__ctor_m11E3AB4DBAD0E8CB950901ED4FD64C8FF0B2E611 (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_data, RuntimeObject* ___1_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_data;
		SignedData__ctor_m9F1519286F76AF2BF5F258F85E811C978E3889C3(__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_signature;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___1_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_2);
		SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007_inline(__this, L_3, NULL);
		RuntimeObject* L_4 = ___1_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_4);
		SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2_inline(__this, L_5, NULL);
		RuntimeObject* L_6 = ___1_signature;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(2, ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A_il2cpp_TypeInfo_var, L_6);
		SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5_inline(__this, L_7, NULL);
	}

IL_002e:
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransaction__ctor_m0492AFCCAAC52C94D70CC576615EC469B9392B07 (SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A* __this, const RuntimeMethod* method) 
{
	{
		SignedLegacyTransactionBase__ctor_mDCA89E6B58A83587BC279ECD1B9C1ACC1E258161(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransaction__cctor_m70153129661C0B036E77FBF5A2E9B243B62EFDF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DA633D8982D07B9B6B488E1767152B942ED6CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0E0C429E93D94E33D5AA4C943CDFF123EB9FF31);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0;
		L_0 = BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4(_stringLiteral98DA633D8982D07B9B6B488E1767152B942ED6CB, NULL);
		((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE))->____bits), (void*)NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_Parse_m8C6FB2B62154E2EE7C46930C85C120BE977576C4(_stringLiteralF0E0C429E93D94E33D5AA4C943CDFF123EB9FF31, NULL);
		((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT))->____bits), (void*)NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedTransaction_get_RawHash_m4A1175A258E3F115529450CBBCEC3FF5EB175618 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6, __this);
		V_0 = L_0;
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Sha3Keccack_CalculateHash_mE94324F2BF9D80A18C59A08CF5F0735B78ECAAA0(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedTransaction_get_Signature_m641D35B543E5655526A6125FFED32C9715795AE9 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignatureU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTransaction_set_Signature_m1643DAD232E6B11C9E1C67398B3FA268DC6C1416 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSignatureU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6 (SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = __this->___U3CRlpSignerEncoderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___0_value, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___0_value;
		__this->___U3CRlpSignerEncoderU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRlpSignerEncoderU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransactionBase_get_RawHash_mCCD974B4B052C19C025EBB2E7A79F85720D57FB9 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLPSignedDataHashBuilder_get_RawHash_mBDE019C306B735B6FDE62E3A511F60218036EE07(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignedLegacyTransactionBase_get_Signature_mBDA650A6280E4C884F0232EF8041E32CE08C51E9 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransactionBase_GetRLPEncoded_mFD945B8CA3E4E5AC568B20E6DBE34A8358C59E29 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLPSignedDataHashBuilder_GetRLPEncoded_m75958043E912323BD3DB1B878556737C2A807B99(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedLegacyTransactionBase_GetRLPEncodedRaw_m94FAB7B17075A6B42C11ACCE246AC0459B99813F (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RLPSignedDataHashBuilder_GetRLPEncodedRaw_m18AA664C1D6005E7C133A7A25492B8D59BD492EF(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_SetSignature_m135CE4F22D59E7A8F1249B7601CA799779C76A87 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RuntimeObject* ___0_signature, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0;
		L_0 = SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_signature;
		RLPSignedDataHashBuilder_SetSignature_m4FD99F899D0A65D258BA7CFCD0BFCEC5F7CD7949(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase__ctor_mDCA89E6B58A83587BC279ECD1B9C1ACC1E258161 (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTypeTransaction_SetSignature_m9B656823A7AC88D2F82B77DAE419BF39A407968B (SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* __this, RuntimeObject* ___0_signature, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_signature;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(8, __this, L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignedTypeTransaction__ctor_mEC60D942420AD0CB87E9DBC3DD0D87CCA1FC22EC (SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B* __this, const RuntimeMethod* method) 
{
	{
		SignedTransaction__ctor_m8D6922DA2F90B0283E10BE57C9BC936E0483EBA6(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559__ctor_mE0EFA1A36A81052017B7A5714C6B53E8836DC962 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_chainId, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___1_nonce, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___2_maxPriorityFeePerGas, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___3_maxFeePerGas, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___4_gasLimit, String_t* ___5_receiverAddress, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___6_amount, String_t* ___7_data, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___8_accessList, const RuntimeMethod* method) 
{
	{
		SignedTypeTransaction__ctor_mEC60D942420AD0CB87E9DBC3DD0D87CCA1FC22EC(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_chainId;
		Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5_inline(__this, L_0, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_1 = ___1_nonce;
		Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69_inline(__this, L_1, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_2 = ___2_maxPriorityFeePerGas;
		Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72_inline(__this, L_2, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_3 = ___3_maxFeePerGas;
		Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69_inline(__this, L_3, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_4 = ___4_gasLimit;
		Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF_inline(__this, L_4, NULL);
		String_t* L_5 = ___5_receiverAddress;
		Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18_inline(__this, L_5, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_6 = ___6_amount;
		Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1_inline(__this, L_6, NULL);
		String_t* L_7 = ___7_data;
		Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676_inline(__this, L_7, NULL);
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_8 = ___8_accessList;
		Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7_inline(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CChainIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		__this->___U3CChainIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CChainIdU3Ek__BackingField))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CNonceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CNonceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CNonceU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxPriorityFeePerGasU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxFeePerGasU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CMaxFeePerGasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxFeePerGasU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CGasLimitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CGasLimitU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CGasLimitU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReceiverAddressU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReceiverAddressU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceiverAddressU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CAmountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CAmountU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CAmountU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = __this->___U3CAccessListU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = ___0_value;
		__this->___U3CAccessListU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessListU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559_GetRLPEncoded_m7478EA2A0C32FC9740E8317C3FBA4146718D0C7B (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0;
		L_0 = Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* >::Invoke(4, L_0, __this);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559_GetRLPEncodedRaw_mD92187472E9CF0E57D29291A446211AF6AFD1123 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0;
		L_0 = Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* >::Invoke(5, L_0, __this);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0 = ((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1 = L_0;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_2 = ___0_transaction;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3;
		L_3 = Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0_inline(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ConvertorForRLPEncodingExtensions_ToBytesForRLPEncoding_mDBF69202E3C33FE269928F135C6ECF4601729743(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_4, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_1, L_5, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_6 = L_1;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_7 = ___0_transaction;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_8;
		L_8 = Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE_inline(L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_8, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_9, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_6, L_10, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_11 = L_6;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_12 = ___0_transaction;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_13;
		L_13 = Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_13, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_14, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_11, L_15, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_16 = L_11;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_17 = ___0_transaction;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_18;
		L_18 = Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E_inline(L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_18, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_19, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_16, L_20, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_21 = L_16;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_22 = ___0_transaction;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_23;
		L_23 = Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A_inline(L_22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_23, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_24, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_21, L_25, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_26 = L_21;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_27 = ___0_transaction;
		String_t* L_28;
		L_28 = Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430_inline(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_28, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_29, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_26, L_30, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_31 = L_26;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_32 = ___0_transaction;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_33;
		L_33 = Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37_inline(L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E(__this, L_33, TransactionTypeEncoder_1_GetBigIntegerForEncoding_mD9C51B6461CD721742082939AD636E87F007802E_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_34, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_31, L_35, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_36 = L_31;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_37 = ___0_transaction;
		String_t* L_38;
		L_38 = Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4_inline(L_37, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = RLP_EncodeElement_m72EA7F8BF5B3575AE1520AEEB29694A7E87526C1(L_39, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_36, L_40, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_41 = L_36;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_42 = ___0_transaction;
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_43;
		L_43 = Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D_inline(L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = AccessListRLPEncoderDecoder_EncodeAccessList_m19721FDF07E68C23A8858E899BADC9206D5F9480(L_43, NULL);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_41, L_44, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559Encoder_EncodeRaw_m7BFBF782F6599167E286BB7A3D752D604062D433 (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_0 = ___0_transaction;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1;
		L_1 = Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F(__this, L_0, NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2;
		L_2 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_1, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_2, NULL);
		uint8_t L_4 = __this->___Type;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5(L_3, L_4, TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Transaction1559Encoder_Encode_m694952F5CE6469E535F21CC84EE636F4E9AF28EC (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	{
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_0 = ___0_transaction;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_1;
		L_1 = Transaction1559Encoder_GetEncodedElements_mBDB068C9A45E537384B69B5ED0D4A61AAE2B7F3F(__this, L_0, NULL);
		V_0 = L_1;
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_2 = ___0_transaction;
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7, L_2);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_4 = V_0;
		RLPSignedDataEncoder_AddSignatureToEncodedData_m9A1FE50EE75C591B26BF48F7A6FBB6B30A8A97DA(L_3, L_4, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_5 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6;
		L_6 = List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A(L_5, List_1_ToArray_mB7CD4E01798A238ACFEA3A03CD31B4EBBA00637A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = RLP_EncodeList_m2A2C2A6B4DDA95C331AECF96926B0D9C1B16FE05(L_6, NULL);
		uint8_t L_8 = __this->___Type;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5(L_7, L_8, TransactionTypeEncoder_1_AddTypeToEncodedBytes_m631C1792AFBDAFD03A766A8EAF7E974BBACDACA5_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1(2, NULL);
		__this->___Type = L_0;
		TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA(__this, TransactionTypeEncoder_1__ctor_m699E9434D752911B41AA410BF4034A081B6FA4BA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Encoder__cctor_m9393CB3C81A3F26DBAF7041BB424033E0C412607 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0 = (Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E*)il2cpp_codegen_object_new(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder__ctor_mBBF96D9C7FAEDF76E8AACF92C12F3BAC9E12135A(L_0, NULL);
		((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1 (int32_t ___0_transactionType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_transactionType;
		return (uint8_t)((int32_t)(uint8_t)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromV_m4A452B035B4B3E2849EA7207CA6147DA369F95C5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_v, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_v;
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3;
		L_3 = VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34 (uint8_t ___0_v, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = ___0_v;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)27))))
		{
			goto IL_000c;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)34))))
		{
			goto IL_0023;
		}
	}

IL_000c:
	{
		String_t* L_3;
		L_3 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B1E24B4D727EDA78ED297F0CF28ED9026B51D02)), L_3, NULL);
		Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VRecoveryAndChainCalculations_GetRecIdFromV_m930CB9D6268213A7DA579AC28E1E0126F4231F34_RuntimeMethod_var)));
	}

IL_0023:
	{
		uint8_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)31))))
		{
			goto IL_002d;
		}
	}
	{
		uint8_t L_7 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 4)));
	}

IL_002d:
	{
		uint8_t L_8 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)27)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F VRecoveryAndChainCalculations_CalculateV_mAC5B6F11BB74AFD4301066BF73E5FC64C048A930 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_chainId, int32_t ___1_recId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_chainId;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1;
		L_1 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(2, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_2;
		L_2 = BigInteger_op_Multiply_m2AF82FA0B4750F56C6A5522A54FBFF2C84919EFE(L_0, L_1, NULL);
		int32_t L_3 = ___1_recId;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_4;
		L_4 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(L_3, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_5;
		L_5 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_2, L_4, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_6;
		L_6 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(((int32_t)35), NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_7;
		L_7 = BigInteger_op_Addition_m895A3ED96D07E1A6E4AD97483EDC256107A31B12(L_5, L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AccessListItem_set_StorageKeys_mC44001373EA02A97D0EBBD554AC47C58CF7C9D9A_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = ___0_value;
		__this->___U3CStorageKeysU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageKeysU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccessListItem_get_Address_m34B6C0590AEBD642BC0A156609AB18A4B8BE01F8_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* AccessListItem_get_StorageKeys_m67B0C1F73D53C01564E9D6799DC9AAE6F34584F5_inline (AccessListItem_t03E29A2B0B98BAB0E60DD60D62AB58235257DD4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = __this->___U3CStorageKeysU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = ((Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedLegacyTransactionBase_set_RlpSignerEncoder_m2E48E16936EF5766F77818F30F38D403947405C5_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___0_value, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = ___0_value;
		__this->___U3CRlpSignerEncoderU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRlpSignerEncoderU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* SignedLegacyTransactionBase_get_RlpSignerEncoder_m859B630FAE7B2667973FBE19EF1B2A89F30B2DDA_inline (SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F* __this, const RuntimeMethod* method) 
{
	{
		RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* L_0 = __this->___U3CRlpSignerEncoderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* RLPSignedDataHashBuilder_get_Data_m2904CB6BA451E29C691C9053D1CD2E66DDD2A904_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* SignedData_get_Data_m0B4B3B958EDD8340E984A868C03F025552ED650B_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Data_mAB87DA8AC2B612D1A97F526ADAC70204B1551B9C_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RLPSignedDataHashBuilder_get_Signature_m30DFAA97567C1D3B8B893DEB71F24F8FC4C89078_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSignatureU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RLPSignedDataHashBuilder_set_Signature_mD3719D97D6BFEFBF79830FB803E52E276E1D8D0F_inline (RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSignatureU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignatureU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_R_m8B6BD7ADAE981EAEE8B977D5BE43FEBCF56B3DD9_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_S_mC99DA4526CE67078B602CFE1CD223AE9A10F065F_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CSU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_R_m261A6B7900366DC1E27C4AAA3EBFB341B0F3BF55_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_S_mD8491BE0225CF5FEC82804652442E023460B8393_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CSU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SignedData_get_V_mBD8C626B8CF802E879880012D096186E9A1F27D3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CVU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_V_m6727A9B12FE4BDA7D1F033B3A1B084C7320902BA_inline (Signature_tC487FD9C83B6062C1A61A2C9379FABDBB8E53999* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CVU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_Data_m670AE6C57F16900FE9F2CFA653205C53E0A43DC3_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_R_m0297C2DE8C8DFB3926E03ABF77B43D7DEE39B007_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_S_mF7C601F54F3C18E7B6742E79ABC0674AEC104EA2_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CSU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignedData_set_V_mF1C4CA0C6F3EA199E4E709B208F09B2DABBC98C5_inline (SignedData_tC7A81B431FCC5A0EE9AB5164385ABF4DBAB2A49F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CVU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ChainId_m1A2B716F5FF9435E5AC12AB1CCF08C10177CE5B5_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		__this->___U3CChainIdU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CChainIdU3Ek__BackingField))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Nonce_m83586722A6150A78FDDAFBE06C05071106B6BB69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CNonceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CNonceU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxPriorityFeePerGas_m406383220249002ECEDDF724133A63329F9CAF72_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxPriorityFeePerGasU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_MaxFeePerGas_m1D1D1C7AC7FB647900838F4F40453A9D29FC0C69_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CMaxFeePerGasU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CMaxFeePerGasU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_GasLimit_m089B2F56386EE6F11AEF2170A2E25F72928806CF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CGasLimitU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CGasLimitU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_ReceiverAddress_mC3037E05445DC6D1424F9A47235C49A70AD34A18_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CReceiverAddressU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CReceiverAddressU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Amount_m98DF4CD67DBF0C3D870197371D1D626DA9C58AF1_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CAmountU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CAmountU3Ek__BackingField))->___value))->____bits), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_Data_m84CAAE87C95387EE9E1656A2796C280E21671676_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Transaction1559_set_AccessList_m3813B46F053603B83700013005E7B3BF35D36DA7_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = ___0_value;
		__this->___U3CAccessListU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessListU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* Transaction1559Encoder_get_Current_m53D7B01460A85290C57CFA9BF2C8AC10476FDAA5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var);
		Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E* L_0 = ((Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_StaticFields*)il2cpp_codegen_static_fields_for(Transaction1559Encoder_t1EC48A56B2918A8B383660543875BE269507527E_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Transaction1559_get_ChainId_mFED7ACF2FED0435904F19950C6C7174DE0DAE1F0_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CChainIdU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Nonce_mFDF11934A2AFC5C084405A0F0FF354A4197EC2EE_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CNonceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxPriorityFeePerGas_mF0DD4E81F8BF05DA24B5AADB86754A1EB239A0FF_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxPriorityFeePerGasU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_MaxFeePerGas_m76D66F7213EAD582458B2BBF0A03C74E1A99B91E_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CMaxFeePerGasU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_GasLimit_m16ADA6F6F4EE902B3E1226F6376548F31E4C675A_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CGasLimitU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_ReceiverAddress_m3D7A87A2C2B8432E727A502B875C4B19426F9430_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CReceiverAddressU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Transaction1559_get_Amount_mBF2B1406D7644EC74F85B02A48659D053FDAEF37_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CAmountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Transaction1559_get_Data_m4BDA2DA7A2CD6AE69CD8B3E1B0DB9532DF7178D4_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDataU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* Transaction1559_get_AccessList_mC2540EB22043800C36ADD4BD03894507D9242E0D_inline (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, const RuntimeMethod* method) 
{
	{
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_0 = __this->___U3CAccessListU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}