﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1525063517;
// System.Object
struct Il2CppObject;
// System.Globalization.TextInfo
struct TextInfo_t2905364611;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t1525063517  : public Il2CppObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t2905364611 * ___m_text_2;

public:
	inline static int32_t get_offset_of_m_text_2() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1525063517, ___m_text_2)); }
	inline TextInfo_t2905364611 * get_m_text_2() const { return ___m_text_2; }
	inline TextInfo_t2905364611 ** get_address_of_m_text_2() { return &___m_text_2; }
	inline void set_m_text_2(TextInfo_t2905364611 * value)
	{
		___m_text_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_2, value);
	}
};

struct CaseInsensitiveHashCodeProvider_t1525063517_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::singletonInvariant
	CaseInsensitiveHashCodeProvider_t1525063517 * ___singletonInvariant_0;
	// System.Object System.Collections.CaseInsensitiveHashCodeProvider::sync
	Il2CppObject * ___sync_1;

public:
	inline static int32_t get_offset_of_singletonInvariant_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1525063517_StaticFields, ___singletonInvariant_0)); }
	inline CaseInsensitiveHashCodeProvider_t1525063517 * get_singletonInvariant_0() const { return ___singletonInvariant_0; }
	inline CaseInsensitiveHashCodeProvider_t1525063517 ** get_address_of_singletonInvariant_0() { return &___singletonInvariant_0; }
	inline void set_singletonInvariant_0(CaseInsensitiveHashCodeProvider_t1525063517 * value)
	{
		___singletonInvariant_0 = value;
		Il2CppCodeGenWriteBarrier(&___singletonInvariant_0, value);
	}

	inline static int32_t get_offset_of_sync_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t1525063517_StaticFields, ___sync_1)); }
	inline Il2CppObject * get_sync_1() const { return ___sync_1; }
	inline Il2CppObject ** get_address_of_sync_1() { return &___sync_1; }
	inline void set_sync_1(Il2CppObject * value)
	{
		___sync_1 = value;
		Il2CppCodeGenWriteBarrier(&___sync_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
