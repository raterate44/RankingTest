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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2112584674;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2994972632;
// System.Object[]
struct ObjectU5BU5D_t3632007997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m874046876_gshared (InvokableCall_1_t2112584674 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_1__ctor_m874046876(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_1_t2112584674 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m874046876_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m2693793190_gshared (InvokableCall_1_t2112584674 * __this, UnityAction_1_t2994972632 * ___action0, const MethodInfo* method);
#define InvokableCall_1__ctor_m2693793190(__this, ___action0, method) ((  void (*) (InvokableCall_1_t2112584674 *, UnityAction_1_t2994972632 *, const MethodInfo*))InvokableCall_1__ctor_m2693793190_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m769918017_gshared (InvokableCall_1_t2112584674 * __this, ObjectU5BU5D_t3632007997* ___args0, const MethodInfo* method);
#define InvokableCall_1_Invoke_m769918017(__this, ___args0, method) ((  void (*) (InvokableCall_1_t2112584674 *, ObjectU5BU5D_t3632007997*, const MethodInfo*))InvokableCall_1_Invoke_m769918017_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m951110817_gshared (InvokableCall_1_t2112584674 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_1_Find_m951110817(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_1_t2112584674 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m951110817_gshared)(__this, ___targetObj0, ___method1, method)
