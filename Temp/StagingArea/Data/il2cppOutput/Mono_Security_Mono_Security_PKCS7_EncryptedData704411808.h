﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t837233982;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t704411809  : public Il2CppObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t837233982 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t837233982 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t3835026402* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t704411809, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t704411809, ____content_1)); }
	inline ContentInfo_t837233982 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t837233982 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t837233982 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier(&____content_1, value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t704411809, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t837233982 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t837233982 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t837233982 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier(&____encryptionAlgorithm_2, value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t704411809, ____encrypted_3)); }
	inline ByteU5BU5D_t3835026402* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t3835026402** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t3835026402* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier(&____encrypted_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
