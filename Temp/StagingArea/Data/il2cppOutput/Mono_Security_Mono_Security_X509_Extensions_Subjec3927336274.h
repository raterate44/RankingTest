﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t4049133037;

#include "Mono_Security_Mono_Security_X509_X509Extension1746250420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t3927336274  : public X509Extension_t1746250421
{
public:
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t4049133037 * ____names_3;

public:
	inline static int32_t get_offset_of__names_3() { return static_cast<int32_t>(offsetof(SubjectAltNameExtension_t3927336274, ____names_3)); }
	inline GeneralNames_t4049133037 * get__names_3() const { return ____names_3; }
	inline GeneralNames_t4049133037 ** get_address_of__names_3() { return &____names_3; }
	inline void set__names_3(GeneralNames_t4049133037 * value)
	{
		____names_3 = value;
		Il2CppCodeGenWriteBarrier(&____names_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
