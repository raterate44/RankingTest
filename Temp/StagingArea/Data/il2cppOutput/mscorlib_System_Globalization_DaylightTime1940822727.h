﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_TimeSpan1834055012.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t1940822727  : public Il2CppObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t2933746480  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t2933746480  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t1834055012  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t1940822727, ___m_start_0)); }
	inline DateTime_t2933746480  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t2933746480 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t2933746480  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t1940822727, ___m_end_1)); }
	inline DateTime_t2933746480  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t2933746480 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t2933746480  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t1940822727, ___m_delta_2)); }
	inline TimeSpan_t1834055012  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t1834055012 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t1834055012  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
