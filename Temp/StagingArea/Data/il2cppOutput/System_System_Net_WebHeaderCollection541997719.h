﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1660208857;
// System.Boolean[]
struct BooleanU5BU5D_t2235910900;

#include "System_System_Collections_Specialized_NameValueColl982283579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebHeaderCollection
struct  WebHeaderCollection_t541997719  : public NameValueCollection_t982283579
{
public:
	// System.Boolean System.Net.WebHeaderCollection::internallyCreated
	bool ___internallyCreated_15;

public:
	inline static int32_t get_offset_of_internallyCreated_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t541997719, ___internallyCreated_15)); }
	inline bool get_internallyCreated_15() const { return ___internallyCreated_15; }
	inline bool* get_address_of_internallyCreated_15() { return &___internallyCreated_15; }
	inline void set_internallyCreated_15(bool value)
	{
		___internallyCreated_15 = value;
	}
};

struct WebHeaderCollection_t541997719_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.WebHeaderCollection::restricted
	Hashtable_t1312997718 * ___restricted_12;
	// System.Collections.Hashtable System.Net.WebHeaderCollection::multiValue
	Hashtable_t1312997718 * ___multiValue_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Net.WebHeaderCollection::restricted_response
	Dictionary_2_t1660208857 * ___restricted_response_14;
	// System.Boolean[] System.Net.WebHeaderCollection::allowed_chars
	BooleanU5BU5D_t2235910900* ___allowed_chars_16;

public:
	inline static int32_t get_offset_of_restricted_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t541997719_StaticFields, ___restricted_12)); }
	inline Hashtable_t1312997718 * get_restricted_12() const { return ___restricted_12; }
	inline Hashtable_t1312997718 ** get_address_of_restricted_12() { return &___restricted_12; }
	inline void set_restricted_12(Hashtable_t1312997718 * value)
	{
		___restricted_12 = value;
		Il2CppCodeGenWriteBarrier(&___restricted_12, value);
	}

	inline static int32_t get_offset_of_multiValue_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t541997719_StaticFields, ___multiValue_13)); }
	inline Hashtable_t1312997718 * get_multiValue_13() const { return ___multiValue_13; }
	inline Hashtable_t1312997718 ** get_address_of_multiValue_13() { return &___multiValue_13; }
	inline void set_multiValue_13(Hashtable_t1312997718 * value)
	{
		___multiValue_13 = value;
		Il2CppCodeGenWriteBarrier(&___multiValue_13, value);
	}

	inline static int32_t get_offset_of_restricted_response_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t541997719_StaticFields, ___restricted_response_14)); }
	inline Dictionary_2_t1660208857 * get_restricted_response_14() const { return ___restricted_response_14; }
	inline Dictionary_2_t1660208857 ** get_address_of_restricted_response_14() { return &___restricted_response_14; }
	inline void set_restricted_response_14(Dictionary_2_t1660208857 * value)
	{
		___restricted_response_14 = value;
		Il2CppCodeGenWriteBarrier(&___restricted_response_14, value);
	}

	inline static int32_t get_offset_of_allowed_chars_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_t541997719_StaticFields, ___allowed_chars_16)); }
	inline BooleanU5BU5D_t2235910900* get_allowed_chars_16() const { return ___allowed_chars_16; }
	inline BooleanU5BU5D_t2235910900** get_address_of_allowed_chars_16() { return &___allowed_chars_16; }
	inline void set_allowed_chars_16(BooleanU5BU5D_t2235910900* value)
	{
		___allowed_chars_16 = value;
		Il2CppCodeGenWriteBarrier(&___allowed_chars_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
