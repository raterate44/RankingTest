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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry1445113794.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
extern "C"  void DictionaryEntry__ctor_m2901884110 (DictionaryEntry_t1445113794 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  Il2CppObject * DictionaryEntry_get_Key_m3623293571 (DictionaryEntry_t1445113794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  Il2CppObject * DictionaryEntry_get_Value_m2812883243 (DictionaryEntry_t1445113794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DictionaryEntry_t1445113794;
struct DictionaryEntry_t1445113794_marshaled_com;

extern "C" void DictionaryEntry_t1445113794_marshal_com(const DictionaryEntry_t1445113794& unmarshaled, DictionaryEntry_t1445113794_marshaled_com& marshaled);
extern "C" void DictionaryEntry_t1445113794_marshal_com_back(const DictionaryEntry_t1445113794_marshaled_com& marshaled, DictionaryEntry_t1445113794& unmarshaled);
extern "C" void DictionaryEntry_t1445113794_marshal_com_cleanup(DictionaryEntry_t1445113794_marshaled_com& marshaled);
