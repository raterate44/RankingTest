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

#include "Mono_Security_Mono_Security_Cryptography_MD2635930852.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t4124672649  : public MD2_t635930852
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t3835026402* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t3835026402* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t3835026402* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t3835026402* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t4124672649, ___state_4)); }
	inline ByteU5BU5D_t3835026402* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t3835026402** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t3835026402* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t4124672649, ___checksum_5)); }
	inline ByteU5BU5D_t3835026402* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t3835026402** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t3835026402* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier(&___checksum_5, value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t4124672649, ___buffer_6)); }
	inline ByteU5BU5D_t3835026402* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t3835026402** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t3835026402* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_6, value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t4124672649, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t4124672649, ___x_8)); }
	inline ByteU5BU5D_t3835026402* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t3835026402** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t3835026402* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier(&___x_8, value);
	}
};

struct MD2Managed_t4124672649_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t3835026402* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t4124672649_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t3835026402* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t3835026402** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t3835026402* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier(&___PI_SUBST_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
