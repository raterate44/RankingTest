﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t2623446055;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycasterManager
struct  RaycasterManager_t1244304166  : public Il2CppObject
{
public:

public:
};

struct RaycasterManager_t1244304166_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::s_Raycasters
	List_1_t2623446055 * ___s_Raycasters_0;

public:
	inline static int32_t get_offset_of_s_Raycasters_0() { return static_cast<int32_t>(offsetof(RaycasterManager_t1244304166_StaticFields, ___s_Raycasters_0)); }
	inline List_1_t2623446055 * get_s_Raycasters_0() const { return ___s_Raycasters_0; }
	inline List_1_t2623446055 ** get_address_of_s_Raycasters_0() { return &___s_Raycasters_0; }
	inline void set_s_Raycasters_0(List_1_t2623446055 * value)
	{
		___s_Raycasters_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Raycasters_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
