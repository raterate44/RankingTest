﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t1807117605;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2814392016;

#include "UnityEngine_UnityEngine_Object1181371020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t2560754878  : public Object_t1181371020
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2814392016 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t2560754878, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2814392016 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2814392016 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2814392016 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontTextureRebuildCallback_3, value);
	}
};

struct Font_t2560754878_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t1807117605 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t2560754878_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t1807117605 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t1807117605 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t1807117605 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier(&___textureRebuilt_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
