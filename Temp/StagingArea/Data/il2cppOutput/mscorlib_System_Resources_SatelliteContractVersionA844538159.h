﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t2956351477;

#include "mscorlib_System_Attribute1145342165.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t844538159  : public Attribute_t1145342165
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t2956351477 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t844538159, ___ver_0)); }
	inline Version_t2956351477 * get_ver_0() const { return ___ver_0; }
	inline Version_t2956351477 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t2956351477 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier(&___ver_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
