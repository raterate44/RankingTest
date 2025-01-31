﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<UnityEngine.Font>
struct Action_1_t1807117605;
// UnityEngine.Font
struct Font_t2560754878;
// UnityEngine.Material
struct Material_t2197338622;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Font2560754878.h"

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_add_textureRebuilt_m1282639736 (Il2CppObject * __this /* static, unused */, Action_1_t1807117605 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_remove_textureRebuilt_m2672217591 (Il2CppObject * __this /* static, unused */, Action_1_t1807117605 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C"  Material_t2197338622 * Font_get_material_m2086804907 (Font_t2560754878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C"  bool Font_HasCharacter_m538120140 (Font_t2560754878 * __this, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C"  void Font_InvokeTextureRebuilt_Internal_m2007522718 (Il2CppObject * __this /* static, unused */, Font_t2560754878 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C"  bool Font_get_dynamic_m1803576936 (Font_t2560754878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C"  int32_t Font_get_fontSize_m1732593415 (Font_t2560754878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
