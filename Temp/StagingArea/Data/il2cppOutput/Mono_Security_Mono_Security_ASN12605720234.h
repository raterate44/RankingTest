﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.Collections.ArrayList
struct ArrayList_t1468494371;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2605720235  : public Il2CppObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t3835026402* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t1468494371 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2605720235, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2605720235, ___m_aValue_1)); }
	inline ByteU5BU5D_t3835026402* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t3835026402** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t3835026402* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_aValue_1, value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2605720235, ___elist_2)); }
	inline ArrayList_t1468494371 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t1468494371 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t1468494371 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier(&___elist_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
