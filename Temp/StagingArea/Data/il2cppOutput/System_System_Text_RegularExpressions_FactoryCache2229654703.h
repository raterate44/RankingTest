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
// System.Text.RegularExpressions.MRUList
struct MRUList_t2503268597;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t2229654703  : public Il2CppObject
{
public:
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t1312997718 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t2503268597 * ___mru_list_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(FactoryCache_t2229654703, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(FactoryCache_t2229654703, ___factories_1)); }
	inline Hashtable_t1312997718 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t1312997718 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t1312997718 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier(&___factories_1, value);
	}

	inline static int32_t get_offset_of_mru_list_2() { return static_cast<int32_t>(offsetof(FactoryCache_t2229654703, ___mru_list_2)); }
	inline MRUList_t2503268597 * get_mru_list_2() const { return ___mru_list_2; }
	inline MRUList_t2503268597 ** get_address_of_mru_list_2() { return &___mru_list_2; }
	inline void set_mru_list_2(MRUList_t2503268597 * value)
	{
		___mru_list_2 = value;
		Il2CppCodeGenWriteBarrier(&___mru_list_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
