#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A;
struct EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745;
struct FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IBlockchainBlockProcessingService_t6CBB4EF50D413AC31D7B93FD404D96FD7CA6C8D9;
struct IBlockchainLogProcessingService_t7953713B8516116C90B45F4B886E26CE501C19CF;
struct IBlockchainProcessingService_t11088E37F1860F2C2AD040779E500BE92B1E08EC;
struct IClient_t3F4473F20A6C2C4B7F392E89E960C7F7D2792ABA;
struct IDebugApiService_tE46C4A7E843DAF29F5A349974F4F433066CF81BB;
struct IERC20LogProcessingService_t662D18EBC64AFF202C034D0A1FDB461AA7CB8380;
struct IERC721LogProcessingService_tED2F38E35DB49C2911EFBFA9BA9DCAD3370CCD86;
struct IEthApiContractService_t13C3A411F7A2BF56D2D15CA1A9386FAF0EE30FFE;
struct IEthereumUserService_tCF87375A4C5BD1A728350AA8AB3DEFC9D3563AC1;
struct INetApiService_t6C6C7F68372F5FEF85A87C968FD961D987B351E2;
struct IPersonalApiService_tFBD2DC4B145D295AE5DCA5494C8682D71423953E;
struct ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997;
struct IShhApiService_t24E0B92753B00B5C5E10FAB551824C7CD30B9CB7;
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
struct SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061;
struct String_t;
struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct BlockchainBlockProcessingService_t7213EAD8D5A18455F2E6212AB215C787694C0E29  : public RuntimeObject
{
	RuntimeObject* ____ethApiContractService;
};
struct BlockchainLogProcessingService_t7DA9666719AEBAA1D2830DD7D05122526BCBE613  : public RuntimeObject
{
	RuntimeObject* ____ethApiContractService;
	RuntimeObject* ___U3CERC20U3Ek__BackingField;
	RuntimeObject* ___U3CERC721U3Ek__BackingField;
};
struct BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24  : public RuntimeObject
{
	RuntimeObject* ____ethApiContractService;
	RuntimeObject* ___U3CLogsU3Ek__BackingField;
	RuntimeObject* ___U3CBlocksU3Ek__BackingField;
};
struct ERC20LogProcessingService_t2CC31CC13164ED1F32E46BB8D4D3CEED51995940  : public RuntimeObject
{
	RuntimeObject* ____blockchainLogProcessing;
	RuntimeObject* ____ethApiContractService;
};
struct ERC721LogProcessingService_t3B564705FFB463C0B81EC86194910B5E26D8451F  : public RuntimeObject
{
	RuntimeObject* ____blockchainLogProcessing;
	RuntimeObject* ____ethApiContractService;
};
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8  : public RuntimeObject
{
	EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* ____signer;
};
struct InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7  : public RuntimeObject
{
	ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* ____messages;
};
struct LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410  : public RuntimeObject
{
	int32_t ___U3CEventLogLevelU3Ek__BackingField;
	String_t* ___U3CMessageU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCoreShared_tF3555B7BFD9C32B333E36B521381D686689C2E4D  : public RuntimeObject
{
};
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0  : public RuntimeObject
{
};
struct RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659  : public RuntimeObject
{
};
struct SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061  : public RuntimeObject
{
	String_t* ___U3CDomainU3Ek__BackingField;
	String_t* ___U3CAddressU3Ek__BackingField;
	String_t* ___U3CStatementU3Ek__BackingField;
	String_t* ___U3CUriU3Ek__BackingField;
	String_t* ___U3CVersionU3Ek__BackingField;
	String_t* ___U3CNonceU3Ek__BackingField;
	String_t* ___U3CIssuedAtU3Ek__BackingField;
	String_t* ___U3CExpirationTimeU3Ek__BackingField;
	String_t* ___U3CNotBeforeU3Ek__BackingField;
	String_t* ___U3CRequestIdU3Ek__BackingField;
	String_t* ___U3CChainIdU3Ek__BackingField;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CResourcesU3Ek__BackingField;
};
struct SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26  : public RuntimeObject
{
	RuntimeObject* ____sessionStorage;
	RuntimeObject* ____ethereumUserService;
	Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* ____web3;
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
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253  : public RuntimeObject
{
	RuntimeObject* ___U3CClientU3Ek__BackingField;
	RuntimeObject* ___U3CEthU3Ek__BackingField;
	RuntimeObject* ___U3CShhU3Ek__BackingField;
	RuntimeObject* ___U3CNetU3Ek__BackingField;
	RuntimeObject* ___U3CPersonalU3Ek__BackingField;
	RuntimeObject* ___U3CProcessingU3Ek__BackingField;
	RuntimeObject* ___U3CDebugU3Ek__BackingField;
	FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* ___U3CFeeSuggestionU3Ek__BackingField;
};
struct U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2  : public RuntimeObject
{
	SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___siweMessage;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	RuntimeObject* ___m_stateMachine;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine;
	Il2CppMethodPointer ___m_defaultContextAction;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RefSafetyRulesAttribute_t8E8C5018502576B1E3B6C659791E7724E0BBC7C2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___Version;
};
struct RefSafetyRulesAttribute_tF290D771204B860342F0C735261BE4BF7F978172  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	int32_t ___Version;
};
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState;
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder;
};
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData;
	bool ___mNonReadable;
};
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData;
	int32_t ___mNonReadable;
};
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData;
	int32_t ___mNonReadable;
};
struct AsyncIteratorMethodBuilder_tCBCFFEDB4F907234696DCC5964EA8737520E6BD1 
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ____methodBuilder;
	RuntimeObject* ____id;
};
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields
{
	Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* ___U3CCurrentU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCoreShared_tF3555B7BFD9C32B333E36B521381D686689C2E4D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_sentinel;
};
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields
{
	NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* ___U3CInstanceU3Ek__BackingField;
};
struct RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EMPTY_BYTE_ARRAY;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZERO_BYTE_ARRAY;
};
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields
{
	AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* ___AddressUtil;
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* ___Sha3Keccack;
	UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* ___U3CConvertU3Ek__BackingField;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15004[2] = 
{
	static_cast<int32_t>(offsetof(AsyncIteratorMethodBuilder_tCBCFFEDB4F907234696DCC5964EA8737520E6BD1, ____methodBuilder)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(AsyncIteratorMethodBuilder_tCBCFFEDB4F907234696DCC5964EA8737520E6BD1, ____id)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15006[4] = 
{
	0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15007[9] = 
{
	0,0,0,0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15008[1] = 
{
	static_cast<int32_t>(offsetof(ManualResetValueTaskSourceCoreShared_tF3555B7BFD9C32B333E36B521381D686689C2E4D_StaticFields, ___s_sentinel)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15010[2] = 
{
	static_cast<int32_t>(offsetof(DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C, ___m_NativeData)),static_cast<int32_t>(offsetof(DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C, ___mNonReadable)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15014[1] = 
{
	static_cast<int32_t>(offsetof(RefSafetyRulesAttribute_tF290D771204B860342F0C735261BE4BF7F978172, ___Version)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15015[12] = 
{
	static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CDomainU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CAddressU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CStatementU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CUriU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CVersionU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CNonceU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CIssuedAtU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CExpirationTimeU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CNotBeforeU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CRequestIdU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CChainIdU3Ek__BackingField)),static_cast<int32_t>(offsetof(SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061, ___U3CResourcesU3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15026[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15032[11] = 
{
	static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields, ___AddressUtil)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields, ___Sha3Keccack)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields, ___U3CConvertU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CClientU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CEthU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CShhU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CNetU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CPersonalU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CProcessingU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CDebugU3Ek__BackingField)),static_cast<int32_t>(offsetof(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253, ___U3CFeeSuggestionU3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15035[1] = 
{
	static_cast<int32_t>(offsetof(RefSafetyRulesAttribute_t8E8C5018502576B1E3B6C659791E7724E0BBC7C2, ___Version)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15036[1] = 
{
	static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2, ___siweMessage)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15037[1] = 
{
	static_cast<int32_t>(offsetof(InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7, ____messages)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15040[3] = 
{
	static_cast<int32_t>(offsetof(SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26, ____sessionStorage)),static_cast<int32_t>(offsetof(SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26, ____ethereumUserService)),static_cast<int32_t>(offsetof(SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26, ____web3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15043[1] = 
{
	static_cast<int32_t>(offsetof(BlockchainBlockProcessingService_t7213EAD8D5A18455F2E6212AB215C787694C0E29, ____ethApiContractService)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15044[3] = 
{
	static_cast<int32_t>(offsetof(BlockchainLogProcessingService_t7DA9666719AEBAA1D2830DD7D05122526BCBE613, ____ethApiContractService)),static_cast<int32_t>(offsetof(BlockchainLogProcessingService_t7DA9666719AEBAA1D2830DD7D05122526BCBE613, ___U3CERC20U3Ek__BackingField)),static_cast<int32_t>(offsetof(BlockchainLogProcessingService_t7DA9666719AEBAA1D2830DD7D05122526BCBE613, ___U3CERC721U3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15045[3] = 
{
	static_cast<int32_t>(offsetof(BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24, ____ethApiContractService)),static_cast<int32_t>(offsetof(BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24, ___U3CLogsU3Ek__BackingField)),static_cast<int32_t>(offsetof(BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24, ___U3CBlocksU3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15049[2] = 
{
	static_cast<int32_t>(offsetof(ERC20LogProcessingService_t2CC31CC13164ED1F32E46BB8D4D3CEED51995940, ____blockchainLogProcessing)),static_cast<int32_t>(offsetof(ERC20LogProcessingService_t2CC31CC13164ED1F32E46BB8D4D3CEED51995940, ____ethApiContractService)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15050[2] = 
{
	static_cast<int32_t>(offsetof(ERC721LogProcessingService_t3B564705FFB463C0B81EC86194910B5E26D8451F, ____blockchainLogProcessing)),static_cast<int32_t>(offsetof(ERC721LogProcessingService_t3B564705FFB463C0B81EC86194910B5E26D8451F, ____ethApiContractService)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15055[2] = 
{
	static_cast<int32_t>(offsetof(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields, ___EMPTY_BYTE_ARRAY)),static_cast<int32_t>(offsetof(RLP_tC7B79B5D46A79BE3BFA805F784BED419A0CDA659_StaticFields, ___ZERO_BYTE_ARRAY)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15057[7] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15059[2] = 
{
	static_cast<int32_t>(offsetof(LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410, ___U3CEventLogLevelU3Ek__BackingField)),static_cast<int32_t>(offsetof(LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410, ___U3CMessageU3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15060[1] = 
{
	static_cast<int32_t>(offsetof(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields, ___U3CInstanceU3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15065[2] = 
{
	static_cast<int32_t>(offsetof(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8, ____signer)),static_cast<int32_t>(offsetof(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields, ___U3CCurrentU3Ek__BackingField)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable15069[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
