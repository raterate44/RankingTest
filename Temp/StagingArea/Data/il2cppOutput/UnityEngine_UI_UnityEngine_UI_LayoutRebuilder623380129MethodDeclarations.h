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

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t623380129;
// UnityEngine.RectTransform
struct RectTransform_t2038051575;
// UnityEngine.Transform
struct Transform_t224878301;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t189972673;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t930379393;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t1078601330;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform2038051575.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate3603813582.h"
#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder623380129.h"
#include "UnityEngine_UnityEngine_Component1078601330.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C"  void LayoutRebuilder__ctor_m3739687501 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C"  void LayoutRebuilder__cctor_m4047868732 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_Initialize_m2671585490 (LayoutRebuilder_t623380129 * __this, RectTransform_t2038051575 * ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C"  void LayoutRebuilder_Clear_m2390054824 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ReapplyDrivenProperties_m1809142560 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___driven0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C"  Transform_t224878301 * LayoutRebuilder_get_transform_m3358807864 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C"  bool LayoutRebuilder_IsDestroyed_m3442208294 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_StripDisabledBehavioursFromList_m3597654705 (Il2CppObject * __this /* static, unused */, List_1_t189972673 * ___components0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_ForceRebuildLayoutImmediate_m566681977 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___layoutRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void LayoutRebuilder_Rebuild_m3304459068 (LayoutRebuilder_t623380129 * __this, int32_t ___executing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutControl_m3946051172 (LayoutRebuilder_t623380129 * __this, RectTransform_t2038051575 * ___rect0, UnityAction_1_t930379393 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C"  void LayoutRebuilder_PerformLayoutCalculation_m736744700 (LayoutRebuilder_t623380129 * __this, RectTransform_t2038051575 * ___rect0, UnityAction_1_t930379393 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutForRebuild_m640589351 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  bool LayoutRebuilder_ValidLayoutGroup_m490554819 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___parent0, List_1_t189972673 * ___comps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C"  bool LayoutRebuilder_ValidController_m2595049322 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___layoutRoot0, List_1_t189972673 * ___comps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C"  void LayoutRebuilder_MarkLayoutRootForRebuild_m2779623641 (Il2CppObject * __this /* static, unused */, RectTransform_t2038051575 * ___controller0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C"  void LayoutRebuilder_LayoutComplete_m498127808 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C"  void LayoutRebuilder_GraphicUpdateComplete_m3773376591 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C"  int32_t LayoutRebuilder_GetHashCode_m2745108660 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C"  bool LayoutRebuilder_Equals_m376170852 (LayoutRebuilder_t623380129 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C"  String_t* LayoutRebuilder_ToString_m710744868 (LayoutRebuilder_t623380129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C"  void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m1645580400 (Il2CppObject * __this /* static, unused */, LayoutRebuilder_t623380129 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C"  bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m1460852255 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__8_m259142987 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__9_m2892665286 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__A_m2896805118 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C"  void LayoutRebuilder_U3CRebuildU3Em__B_m3543053817 (Il2CppObject * __this /* static, unused */, Component_t1078601330 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
