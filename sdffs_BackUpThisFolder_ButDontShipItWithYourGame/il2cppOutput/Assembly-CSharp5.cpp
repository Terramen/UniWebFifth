#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// PrivateImplementationDetailsQOELAJF.ArrayCopy148
struct ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD;
// BDCMONOBOHD
struct BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE;
// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD____U24U24fieldU2D0_0_FieldInfo_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BDCMONOBOHD
struct BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE  : public RuntimeObject
{
};

// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08  : public RuntimeObject
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___data_1;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// PrivateImplementationDetailsKQPLETG.__BB_OBFUSCATOR_VERSION_3_5_4
struct __BB_OBFUSCATOR_VERSION_3_5_4_t27B3FE24E02302DA5D250767640EF72FC7D5FBD5  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// PrivateImplementationDetailsQOELAJF.ArrayCopy148/$ArrayType$151
struct U24ArrayTypeU24151_tB0958E78ABBF75DFB72FD60DB4B3DEB71A36CAD0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24151_tB0958E78ABBF75DFB72FD60DB4B3DEB71A36CAD0__padding[151];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// PrivateImplementationDetailsQOELAJF.ArrayCopy148
struct ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD  : public RuntimeObject
{
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// BDCMONOBOHD
struct BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields
{
	// System.Byte[] BDCMONOBOHD::LDIEHMBPGPE
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LDIEHMBPGPE_0;
	// System.Int32 BDCMONOBOHD::MLHAGADCIHG
	int32_t ___MLHAGADCIHG_1;
	// System.Int32 BDCMONOBOHD::DEAEAFJHJNF
	int32_t ___DEAEAFJHJNF_2;
	// Mono.Math.BigInteger BDCMONOBOHD::IAJJIKEPPEJ
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___IAJJIKEPPEJ_3;
};

// BDCMONOBOHD

// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_StaticFields
{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___rng_3;
};

// Mono.Math.BigInteger

// System.Text.Encoding
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

// System.Text.Encoding

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// PrivateImplementationDetailsKQPLETG.__BB_OBFUSCATOR_VERSION_3_5_4

// PrivateImplementationDetailsKQPLETG.__BB_OBFUSCATOR_VERSION_3_5_4

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// PrivateImplementationDetailsQOELAJF.ArrayCopy148/$ArrayType$151

// PrivateImplementationDetailsQOELAJF.ArrayCopy148/$ArrayType$151

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::67F3950C818E5654A415428E9B182D33DF15F7699BA51D52E92F89B0279359DC
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___67F3950C818E5654A415428E9B182D33DF15F7699BA51D52E92F89B0279359DC_0;
};

// <PrivateImplementationDetails>

// PrivateImplementationDetailsQOELAJF.ArrayCopy148
struct ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD_StaticFields
{
	// PrivateImplementationDetailsQOELAJF.ArrayCopy148/$ArrayType$151 PrivateImplementationDetailsQOELAJF.ArrayCopy148::$$field-0
	U24ArrayTypeU24151_tB0958E78ABBF75DFB72FD60DB4B3DEB71A36CAD0 ___U24U24fieldU2D0_0;
};

// PrivateImplementationDetailsQOELAJF.ArrayCopy148

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inData, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6 (int32_t ___0_value, const RuntimeMethod* method) ;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___0_exp, BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___1_n, const RuntimeMethod* method) ;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439 (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* __this, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::ONKGCGNGKCH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_ONKGCGNGKCH_mCF5135C54D3DE2DBF9AA3518CA1EE8533F75DA42 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::ICINOAANPMJ(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_ICINOAANPMJ_m258648B06EED7DCB6FDC0F8035042CD6ECBA8A5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::BHFAMCEFAIA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BHFAMCEFAIA_m0831AA84F3DA9ED8856FFA99F493B7366AA55C4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::IOABEDKJKLL(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IOABEDKJKLL_m98F1760356918566E3CF6D8209343184F63F1C91 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::IIHMKOECFNA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::NBNFCPMEPEO(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::CCCEHIMCLDK(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CCCEHIMCLDK_mCBE96791AAF4CD91A4257BFA207B33AEAAE4492B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::PCBONNJKKGL(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_PCBONNJKKGL_m140B9622C467FB9816C3098D3CFA210F3E22D335 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::NGAJOCBBEBB(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::GEJDNHGCFMI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GEJDNHGCFMI_mA5221A6BF475979025850C9A3A8F8F16FA2E741C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::KCKLJGDHECJ(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::FLAJOKNEKNI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FLAJOKNEKNI_mB73254D1C32DB22241436492C3A743F6D3035D20 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::FLINLMMIPOG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FLINLMMIPOG_m28C93AE25706290096D3C6E5AAE085E81CB6466D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::CFLBHAILOPM(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CFLBHAILOPM_mEAB7DD32E3DF87D0345E5A1B8AF95311FA6C8547 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::LIPFHGCLIMI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LIPFHGCLIMI_m56198A1472BC75EE61FCD1DA55C55BAED3F47631 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::BOLJFOEODNM(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::CGNNEEDPOFG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CGNNEEDPOFG_mE31535F421119C730A9A032E5EA788C11D93E99A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::BIDAOOAAMDG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BIDAOOAAMDG_mCEC6CFED956FB6C9C93ED65D7E51180DA18C8096 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::GFKBGCCNAOG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GFKBGCCNAOG_mC08E99A203950FF1A8B48519532665C330BAFB84 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::NLBNAACLINI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NLBNAACLINI_mEB77429CAEB4E2882B386B35F08955CFB4237B0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::HGDJBKKIGNG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_HGDJBKKIGNG_m592E3CF30C710A3E3D3A66D7A74D14202190B982 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::BBKIAHEGKEA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BBKIAHEGKEA_m63557FF653931CDC682DCFB83B1134CBE0F69CA6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::AHHJIMJDAEF(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_AHHJIMJDAEF_m93184FCBAE6A0534BC3021473F66E81814AE1A44 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::FDAHGCLHJMN(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FDAHGCLHJMN_m13E623D9B88B01D11B502CE594F213B651043A5F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::KNOLIMCBFEH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_KNOLIMCBFEH_mAEB9EC620B5C9025EABA40721A01C4187519E89C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
// System.String BDCMONOBOHD::LNHICFHNMJG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LNHICFHNMJG_m2869F0EBB9CA3FB690498C240E353537CD8695D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) ;
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
// System.Void BDCMONOBOHD::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BDCMONOBOHD__cctor_mB97D98EC581973A5721A152B9C583525BD642894 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD____U24U24fieldU2D0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)148));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD____U24U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___LDIEHMBPGPE_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___LDIEHMBPGPE_0), (void*)L_1);
		((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1 = ((int32_t)128);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___LDIEHMBPGPE_0;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)16);
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___LDIEHMBPGPE_0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)17);
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___LDIEHMBPGPE_0;
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)18);
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2 = ((int32_t)(((int32_t)((int32_t)L_5|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_11<<((int32_t)16)))));
		int32_t L_12 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_0 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___LDIEHMBPGPE_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_14, ((int32_t)20), (RuntimeArray*)L_15, 0, L_16, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_19 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_19, L_18, NULL);
		((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3), (void*)L_19);
		return;
	}
}
// System.String BDCMONOBOHD::OLHENEFNPLO(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_OLHENEFNPLO_m7777BA8FE4C04F175B2E820764C9F77F7F1DBCFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_ONKGCGNGKCH_mCF5135C54D3DE2DBF9AA3518CA1EE8533F75DA42(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_ICINOAANPMJ_m258648B06EED7DCB6FDC0F8035042CD6ECBA8A5E(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 5)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::CMABJDJKGHJ(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CMABJDJKGHJ_m2FD3DF80EA38D11C8877FEA89A0F7DF8606EB706 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::MGJNEKGIIBK(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_MGJNEKGIIBK_m39C10B451CE64EF9E0D3B822D1CABB5E57C100BA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_BHFAMCEFAIA_m0831AA84F3DA9ED8856FFA99F493B7366AA55C4A(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 7)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_IOABEDKJKLL_m98F1760356918566E3CF6D8209343184F63F1C91(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 2)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::ICINOAANPMJ(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_ICINOAANPMJ_m258648B06EED7DCB6FDC0F8035042CD6ECBA8A5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::GMFCJIOIDIN(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GMFCJIOIDIN_m14FD4B52A4E38E22BC2944A8781F61470629623D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 1)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::ONKGCGNGKCH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_ONKGCGNGKCH_mCF5135C54D3DE2DBF9AA3518CA1EE8533F75DA42 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::AHHJIMJDAEF(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_AHHJIMJDAEF_m93184FCBAE6A0534BC3021473F66E81814AE1A44 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::IGLBLHLEPGH(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IGLBLHLEPGH_mB0B23B1CA3F546F0FAA03DA9B7C3CAA5E6BD2A2B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_CCCEHIMCLDK_mCBE96791AAF4CD91A4257BFA207B33AEAAE4492B(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 5)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_PCBONNJKKGL_m140B9622C467FB9816C3098D3CFA210F3E22D335(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::JJBFLGOANFH(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_JJBFLGOANFH_mCF7BC2243B823E95A2CEF4A3BEE5EB6A24FFFB2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 7)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::BIDAOOAAMDG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BIDAOOAAMDG_mCEC6CFED956FB6C9C93ED65D7E51180DA18C8096 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::CFJABFCOOJJ(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CFJABFCOOJJ_m388E46157C8BFF47E83229228FDC9987D35BE8D1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_ICINOAANPMJ_m258648B06EED7DCB6FDC0F8035042CD6ECBA8A5E(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_GEJDNHGCFMI_mA5221A6BF475979025850C9A3A8F8F16FA2E741C(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::ANJGBJMMJBD(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_ANJGBJMMJBD_mC6145A37316683439615D5CB6C31402B78EBCAA4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::OBMFJHPIHBJ(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_OBMFJHPIHBJ_m929C6801389A4DCEB1C54BCE4294B442A72B46CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_FLAJOKNEKNI_mB73254D1C32DB22241436492C3A743F6D3035D20(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 8)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::PCBONNJKKGL(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_PCBONNJKKGL_m140B9622C467FB9816C3098D3CFA210F3E22D335 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::FHEOBEGEGGL(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FHEOBEGEGGL_mEC9508936005E92FBF7B84C31D0EAE94B83EA4FC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_FLINLMMIPOG_m28C93AE25706290096D3C6E5AAE085E81CB6466D(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_CFLBHAILOPM_mEAB7DD32E3DF87D0345E5A1B8AF95311FA6C8547(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 7)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::JIPJNGGFLBP(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_JIPJNGGFLBP_m43BFFEF3829FAF4A78DBAB45A5723D775489B514 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 4)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 0)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::LFAHCIFIDPK(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LFAHCIFIDPK_m930EBF5BE05FD836A136D4361BC4FEF5121C3197 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_ICINOAANPMJ_m258648B06EED7DCB6FDC0F8035042CD6ECBA8A5E(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_LIPFHGCLIMI_m56198A1472BC75EE61FCD1DA55C55BAED3F47631(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::NDBFJPMAIFN(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NDBFJPMAIFN_m6C74E1FF47A039F2D38212DF23C28C334540A904 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 4)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::EFFGIKNIDBM(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_EFFGIKNIDBM_m134D151715114B0700668ED8803AB8D368EAFAFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_CGNNEEDPOFG_mE31535F421119C730A9A032E5EA788C11D93E99A(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_BIDAOOAAMDG_mCEC6CFED956FB6C9C93ED65D7E51180DA18C8096(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 3)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::NLBNAACLINI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NLBNAACLINI_mEB77429CAEB4E2882B386B35F08955CFB4237B0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::IBMLHFIJLJM(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IBMLHFIJLJM_m6AFC9E2E7623A1C4AEF26B3C80890E427C0D2F9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_GFKBGCCNAOG_mC08E99A203950FF1A8B48519532665C330BAFB84(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 2)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::IGCBFFMBFFH(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IGCBFFMBFFH_mFE8F475242624EFDC4D8DA47B524DE34276D1FAF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_NLBNAACLINI_mEB77429CAEB4E2882B386B35F08955CFB4237B0F(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 5)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::NGAJOCBBEBB(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::DPOLNEKFLCK(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_DPOLNEKFLCK_m34CE17B8E72FD6C6F144746352A893CB400732BE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 0)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_GFKBGCCNAOG_mC08E99A203950FF1A8B48519532665C330BAFB84(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 3)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::IOABEDKJKLL(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IOABEDKJKLL_m98F1760356918566E3CF6D8209343184F63F1C91 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::LNHACKFAIJL(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LNHACKFAIJL_mC32DB6E0CAB6EE9F40CCBDD232B40DB0D07077FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 5)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_GEJDNHGCFMI_mA5221A6BF475979025850C9A3A8F8F16FA2E741C(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 5)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.Void BDCMONOBOHD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BDCMONOBOHD__ctor_m67A9BA50D2B1A2FBA7E423CF8D228AFD6762BD1D (BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String BDCMONOBOHD::PDDGKPEJADA(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_PDDGKPEJADA_m7042482EF438DBB83C6DBE1ED1421118E665790A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 4)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_HGDJBKKIGNG_m592E3CF30C710A3E3D3A66D7A74D14202190B982(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 7)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::KDDHODAJJEM(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_KDDHODAJJEM_m2DB803DAF9D141778086DE4338001A96E403B543 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_CGNNEEDPOFG_mE31535F421119C730A9A032E5EA788C11D93E99A(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 8)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::MAGLPLKJEBI(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_MAGLPLKJEBI_mDD715E6570612239AFA5AD070E6463F4300ADE6B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_HGDJBKKIGNG_m592E3CF30C710A3E3D3A66D7A74D14202190B982(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_BBKIAHEGKEA_m63557FF653931CDC682DCFB83B1134CBE0F69CA6(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 8)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::HAPMLHLBHNG(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_HAPMLHLBHNG_m969BF2A397953BB901E7C538273CCD2A2A983279 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_AHHJIMJDAEF_m93184FCBAE6A0534BC3021473F66E81814AE1A44(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 4)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::DMICCAFHIPC(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_DMICCAFHIPC_m274A508D3D9E0B59F156EE69D133115DE97BCC00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_BBKIAHEGKEA_m63557FF653931CDC682DCFB83B1134CBE0F69CA6(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 3)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_FDAHGCLHJMN_m13E623D9B88B01D11B502CE594F213B651043A5F(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 2)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::ALCHPLEBOFH(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_ALCHPLEBOFH_mA422851AD54E44CD21F3A85DB915435651B9592C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 4)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 0)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::HKIGPMCBNJB(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_HKIGPMCBNJB_mF0FF995E3C8ACB87D1DCAA885FDAFD2D1B0189E9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_IOABEDKJKLL_m98F1760356918566E3CF6D8209343184F63F1C91(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 0)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 4)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::BIFIAPNDHOE(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BIFIAPNDHOE_m6C7ABFB8C72005B10AEBE77BB5C5B3724AE5C396 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_ONKGCGNGKCH_mCF5135C54D3DE2DBF9AA3518CA1EE8533F75DA42(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 4)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::JAGOJJEEPHG(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_JAGOJJEEPHG_mD862D8656843A4096A88554D21ED82C9679F513C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_FLINLMMIPOG_m28C93AE25706290096D3C6E5AAE085E81CB6466D(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 3)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_ICINOAANPMJ_m258648B06EED7DCB6FDC0F8035042CD6ECBA8A5E(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 3)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::JNMFKOKLDFC(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_JNMFKOKLDFC_m6E0A7526C85D75BD41A4A913212D71B302B80B00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_ONKGCGNGKCH_mCF5135C54D3DE2DBF9AA3518CA1EE8533F75DA42(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 2)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_ONKGCGNGKCH_mCF5135C54D3DE2DBF9AA3518CA1EE8533F75DA42(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 2)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::FLAJOKNEKNI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FLAJOKNEKNI_mB73254D1C32DB22241436492C3A743F6D3035D20 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::MBIKINJKDFK(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_MBIKINJKDFK_m2AE7E826E8010887D28D1217C5722493D14B0883 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::CPEGIEOPOIK(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CPEGIEOPOIK_m0D8AB99820B20C3C74C57071B9AA71E1D6A8ADD9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_CGNNEEDPOFG_mE31535F421119C730A9A032E5EA788C11D93E99A(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 0)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 4)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::OFGHBCAGPEP(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_OFGHBCAGPEP_m3C4A1169371E9730A11E6C36FCEC7792C47D9A65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KNOLIMCBFEH_mAEB9EC620B5C9025EABA40721A01C4187519E89C(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 5)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_GFKBGCCNAOG_mC08E99A203950FF1A8B48519532665C330BAFB84(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 8)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::OCEFEGINJFO(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_OCEFEGINJFO_m8E369F1ADEC8624D177901F33E00F63035A1C1FE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 3)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_FLINLMMIPOG_m28C93AE25706290096D3C6E5AAE085E81CB6466D(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 8)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::KNOLIMCBFEH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_KNOLIMCBFEH_mAEB9EC620B5C9025EABA40721A01C4187519E89C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::OANOJIHGMEC(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_OANOJIHGMEC_m3EF45F7A5BE18D6A17ED7FE138AAB09A4E5DD93D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_BIDAOOAAMDG_mCEC6CFED956FB6C9C93ED65D7E51180DA18C8096(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_CFLBHAILOPM_mEAB7DD32E3DF87D0345E5A1B8AF95311FA6C8547(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 3)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::BHFAMCEFAIA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BHFAMCEFAIA_m0831AA84F3DA9ED8856FFA99F493B7366AA55C4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::CCCEHIMCLDK(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CCCEHIMCLDK_mCBE96791AAF4CD91A4257BFA207B33AEAAE4492B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::CFLBHAILOPM(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CFLBHAILOPM_mEAB7DD32E3DF87D0345E5A1B8AF95311FA6C8547 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::LIPFHGCLIMI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LIPFHGCLIMI_m56198A1472BC75EE61FCD1DA55C55BAED3F47631 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::LNHICFHNMJG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LNHICFHNMJG_m2869F0EBB9CA3FB690498C240E353537CD8695D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::FLHNPIBLGJK(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FLHNPIBLGJK_mFA656E3864E02F11C887A79B5C711FF148A0BF95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 5)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_NGAJOCBBEBB_mCBE839F38080C8BFA58E0C668821B6242C6B4ACA(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::CGNNEEDPOFG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CGNNEEDPOFG_mE31535F421119C730A9A032E5EA788C11D93E99A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::GEJDNHGCFMI(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GEJDNHGCFMI_mA5221A6BF475979025850C9A3A8F8F16FA2E741C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::MFBLKEMGIBF(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_MFBLKEMGIBF_m18A9A791145FB5A0C214F4C4C2D241F0C1E7114B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_PCBONNJKKGL_m140B9622C467FB9816C3098D3CFA210F3E22D335(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 7)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_AHHJIMJDAEF_m93184FCBAE6A0534BC3021473F66E81814AE1A44(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 1, ((int32_t)il2cpp_codegen_subtract(L_47, 5)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::HGDJBKKIGNG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_HGDJBKKIGNG_m592E3CF30C710A3E3D3A66D7A74D14202190B982 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::FFCCFCJNLKN(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FFCCFCJNLKN_m720B138CE2874AD05CEA5C06E7767F0332F23425 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_AHHJIMJDAEF_m93184FCBAE6A0534BC3021473F66E81814AE1A44(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 6)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 8)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::IBEEMEOKDIG(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IBEEMEOKDIG_mE08AC2B7A1800C29B4D7C05682F4A13175ECB337 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_KNOLIMCBFEH_mAEB9EC620B5C9025EABA40721A01C4187519E89C(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 1)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 7)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::CMCNPOBEKBI(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_CMCNPOBEKBI_mAEC316639FBEA0757BA5D852A2D828AB7ED5519D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_HGDJBKKIGNG_m592E3CF30C710A3E3D3A66D7A74D14202190B982(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_KNOLIMCBFEH_mAEB9EC620B5C9025EABA40721A01C4187519E89C(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 3)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::KCKLJGDHECJ(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::LMABFKLBJHL(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_LMABFKLBJHL_m45248C76EF90707910D0942DC3B623DCF3121809 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_LNHICFHNMJG_m2869F0EBB9CA3FB690498C240E353537CD8695D8(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 6)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_IOABEDKJKLL_m98F1760356918566E3CF6D8209343184F63F1C91(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 5)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::GEBIOPEHOJF(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GEBIOPEHOJF_mB7E8AE338E836FA700C67D75F925EDEE9D2C16AB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_LNHICFHNMJG_m2869F0EBB9CA3FB690498C240E353537CD8695D8(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 0, ((int32_t)il2cpp_codegen_subtract(L_15, 7)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 0, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_LIPFHGCLIMI_m56198A1472BC75EE61FCD1DA55C55BAED3F47631(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 6)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::GPMOICJIPNP(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GPMOICJIPNP_m51999F7F0D2CC0F2030DF75B2D13142C099F0D65 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 6)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 1;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_KCKLJGDHECJ_m9F1C9CE3DF59FB238FD970CAC8C3157501EE21D9(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 0));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 1)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
	}
}
// System.String BDCMONOBOHD::FDAHGCLHJMN(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FDAHGCLHJMN_m13E623D9B88B01D11B502CE594F213B651043A5F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::GFKBGCCNAOG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_GFKBGCCNAOG_mC08E99A203950FF1A8B48519532665C330BAFB84 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::IIHMKOECFNA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IIHMKOECFNA_m9A2830CDB8D4A4D9A39406F8207E6DE9D74B36A9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::FLINLMMIPOG(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_FLINLMMIPOG_m28C93AE25706290096D3C6E5AAE085E81CB6466D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::BBKIAHEGKEA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BBKIAHEGKEA_m63557FF653931CDC682DCFB83B1134CBE0F69CA6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::BOLJFOEODNM(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::IAFHHECLIPM(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_IAFHHECLIPM_mA0A99EEDA62DE585F06977B348017226BC6B3330 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::NBNFCPMEPEO(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_NBNFCPMEPEO_mEFC3913F716C4EC5ABD239393F5C794D4FA33C4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_BMFNEGMAILJ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_BMFNEGMAILJ;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0021;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 0));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_BMFNEGMAILJ;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0007;
		}
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_BMFNEGMAILJ;
		NullCheck(L_8);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_BMFNEGMAILJ;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_BMFNEGMAILJ;
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_BMFNEGMAILJ;
		NullCheck(L_15);
		int32_t L_16 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 1, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_17, L_18);
		return L_19;
	}

IL_004f:
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_20;
	}
}
// System.String BDCMONOBOHD::OGGHBNNABHA(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BDCMONOBOHD_OGGHBNNABHA_m63EE236558E8D3F20A732A108D36219A24E37F95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_IOFOOKJGIPF, bool ___1_DFIAGDNDJJK, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_IOFOOKJGIPF;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_1 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((uint32_t)L_1))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_IOFOOKJGIPF;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_3 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_3, L_2, NULL);
		V_0 = L_3;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_5 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_6;
		L_6 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_5, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_7 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_4);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_8;
		L_8 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_4, L_6, L_7, NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_8, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		String_t* L_11;
		L_11 = BDCMONOBOHD_FLAJOKNEKNI_mB73254D1C32DB22241436492C3A743F6D3035D20(L_10, NULL);
		V_2 = L_11;
		bool L_12 = ___1_DFIAGDNDJJK;
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = V_2;
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, 1, ((int32_t)il2cpp_codegen_subtract(L_15, 7)), NULL);
		return L_16;
	}

IL_004c:
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_004e:
	{
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		V_3 = L_18;
		V_4 = 0;
		goto IL_00b8;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_19 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_5 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_IOFOOKJGIPF;
		int32_t L_22 = V_4;
		int32_t L_23 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_5;
		int32_t L_25 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_21, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), (RuntimeArray*)L_24, 1, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_27 = (BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08*)il2cpp_codegen_object_new(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		BigInteger__ctor_m8E3F4B6BB64E6F4A2FCB66402F58C192453ECB45(L_27, L_26, NULL);
		V_6 = L_27;
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_28 = V_6;
		int32_t L_29 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___DEAEAFJHJNF_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08_il2cpp_TypeInfo_var);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_30;
		L_30 = BigInteger_op_Implicit_mEC0736B08374B7B829F6FE6ED416186A9084EDE6(L_29, NULL);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_31 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___IAJJIKEPPEJ_3;
		NullCheck(L_28);
		BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* L_32;
		L_32 = BigInteger_ModPow_m534E775DEFD6DEDC75F71FA21492843EAA9CEC9D(L_28, L_30, L_31, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BigInteger_GetBytes_mE1CA6C5DC5B8AA9014B4169BD55307040E668439(L_32, NULL);
		V_7 = L_33;
		StringBuilder_t* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_7;
		String_t* L_36;
		L_36 = BDCMONOBOHD_BOLJFOEODNM_mB59A1D9281231A1BA4093736F19E3446036B2E41(L_35, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_36, NULL);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b8:
	{
		int32_t L_39 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_IOFOOKJGIPF;
		NullCheck(L_40);
		il2cpp_codegen_runtime_class_init_inline(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var);
		int32_t L_41 = ((BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_StaticFields*)il2cpp_codegen_static_fields_for(BDCMONOBOHD_t58BF2B8ACBAAA73FB9F5FA437E0A0EEF463423DE_il2cpp_TypeInfo_var))->___MLHAGADCIHG_1;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_40)->max_length))/L_41)))))
		{
			goto IL_005c;
		}
	}
	{
		bool L_42 = ___1_DFIAGDNDJJK;
		if (!L_42)
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_43 = V_3;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_43, NULL);
		V_8 = L_44;
		String_t* L_45 = V_8;
		String_t* L_46 = V_8;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_46, NULL);
		NullCheck(L_45);
		String_t* L_48;
		L_48 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_45, 0, ((int32_t)il2cpp_codegen_subtract(L_47, 5)), NULL);
		return L_48;
	}

IL_00e8:
	{
		StringBuilder_t* L_49 = V_3;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_49, NULL);
		return L_50;
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
// System.Void PrivateImplementationDetailsQOELAJF.ArrayCopy148::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayCopy148__ctor_mB285F0864AF245818FE9D9736AF3DB1AF7C522EA (ArrayCopy148_t10E0829208CF8824E884CEDDD9DD2663D96EEEAD* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
