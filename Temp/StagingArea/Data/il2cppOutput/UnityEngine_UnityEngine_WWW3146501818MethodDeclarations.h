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

// UnityEngine.WWW
struct WWW_t3146501818;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t484745624;
// System.Text.Encoding
struct Encoding_t2125916575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[])
extern "C"  void WWW__ctor_m1920487719 (WWW_t3146501818 * __this, String_t* ___url0, ByteU5BU5D_t3835026402* ___postData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t3146501818 * __this, bool ___cancel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C"  void WWW_InitWWW_m1194933100 (WWW_t3146501818 * __this, String_t* ___url0, ByteU5BU5D_t3835026402* ___postData1, StringU5BU5D_t3764931161* ___iHeaders2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C"  Dictionary_2_t484745624 * WWW_get_responseHeaders_m977130892 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C"  String_t* WWW_get_responseHeadersString_m1644144100 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C"  String_t* WWW_get_text_m1558985139 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C"  Encoding_t2125916575 * WWW_get_DefaultEncoding_m1497697991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C"  Encoding_t2125916575 * WWW_GetTextEncoder_m1231410509 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C"  ByteU5BU5D_t3835026402* WWW_get_bytes_m420718112 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m3092701216 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C"  bool WWW_get_isDone_m3240254121 (WWW_t3146501818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C"  Dictionary_2_t484745624 * WWW_ParseHTTPHeaderString_m1452467655 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
