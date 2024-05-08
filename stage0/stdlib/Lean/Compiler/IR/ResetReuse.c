// Lean compiler output
// Module: Lean.Compiler.IR.ResetReuse
// Imports: Lean.Compiler.IR.Basic Lean.Compiler.IR.LiveVars Lean.Compiler.IR.Format
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isCtorUsing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___boxed(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
uint8_t l_Lean_IR_HasIndex_visitFnBody(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_IR_ResetReuse_R___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2(lean_object*, size_t, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_IR_CtorInfo_isScalar(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_FnBody_hasLiveVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_IR_ResetReuse_R___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8(lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_ResetReuse_Context_lctx___default;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ResetReuse_R(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isCtorUsing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_ResetReuse_R___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__1;
lean_object* l_Lean_IR_instBEqVarId___boxed(lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(lean_object*, lean_object*, size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
static lean_object* l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_Decl_insertResetReuse(lean_object*);
uint8_t l_Lean_IR_FnBody_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instHashableVarId___boxed(lean_object*);
static lean_object* l_Lean_IR_Decl_insertResetReuse___closed__1;
lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_updateBody_x21(lean_object*, lean_object*);
static lean_object* l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__3;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_IR_MaxIndex_collectDecl(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_ResetReuse_Context_casesVars___default;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_IR_ResetReuse_R___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_ctor_get(x_2, 4);
x_13 = lean_nat_dec_eq(x_11, x_12);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = l_Lean_Name_getPrefix(x_15);
x_17 = lean_ctor_get(x_2, 0);
x_18 = l_Lean_Name_getPrefix(x_17);
x_19 = lean_name_eq(x_16, x_18);
lean_dec(x_18);
lean_dec(x_16);
return x_19;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_lt(x_4, x_3);
if (x_6 == 0)
{
lean_dec(x_1);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_7 = lean_array_uget(x_5, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_5, x_4, x_8);
x_10 = 1;
x_11 = lean_usize_add(x_4, x_10);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_1);
x_14 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_13);
lean_ctor_set(x_7, 1, x_14);
x_15 = lean_array_uset(x_9, x_4, x_7);
x_4 = x_11;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
lean_inc(x_1);
x_19 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_array_uset(x_9, x_4, x_20);
x_4 = x_11;
x_5 = x_21;
goto _start;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_7, 0);
lean_inc(x_1);
x_25 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_24);
lean_ctor_set(x_7, 0, x_25);
x_26 = lean_array_uset(x_9, x_4, x_7);
x_4 = x_11;
x_5 = x_26;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_7, 0);
lean_inc(x_28);
lean_dec(x_7);
lean_inc(x_1);
x_29 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_uset(x_9, x_4, x_30);
x_4 = x_11;
x_5 = x_31;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 3);
x_7 = lean_ctor_get(x_3, 2);
lean_dec(x_7);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
x_10 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(x_2, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
x_11 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_6);
lean_ctor_set(x_3, 3, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_4);
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; 
x_15 = 1;
x_16 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_8);
lean_ctor_set(x_16, 2, x_9);
lean_ctor_set_uint8(x_16, sizeof(void*)*3, x_15);
lean_ctor_set(x_3, 2, x_16);
return x_3;
}
else
{
uint8_t x_17; lean_object* x_18; 
x_17 = 0;
x_18 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_18, 2, x_9);
lean_ctor_set_uint8(x_18, sizeof(void*)*3, x_17);
lean_ctor_set(x_3, 2, x_18);
return x_3;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_19 = lean_ctor_get(x_3, 0);
x_20 = lean_ctor_get(x_3, 1);
x_21 = lean_ctor_get(x_3, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_3);
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
x_24 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mayReuse(x_2, x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_23);
lean_dec(x_22);
x_25 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_21);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_4);
lean_ctor_set(x_26, 3, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_4);
x_27 = lean_ctor_get(x_2, 1);
x_28 = lean_ctor_get(x_22, 1);
lean_inc(x_28);
x_29 = lean_nat_dec_eq(x_27, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_30 = 1;
x_31 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_22);
lean_ctor_set(x_31, 2, x_23);
lean_ctor_set_uint8(x_31, sizeof(void*)*3, x_30);
x_32 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_20);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_32, 3, x_21);
return x_32;
}
else
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_33 = 0;
x_34 = lean_alloc_ctor(2, 3, 1);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_22);
lean_ctor_set(x_34, 2, x_23);
lean_ctor_set_uint8(x_34, sizeof(void*)*3, x_33);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_20);
lean_ctor_set(x_35, 2, x_34);
lean_ctor_set(x_35, 3, x_21);
return x_35;
}
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_4);
x_36 = l_Lean_IR_FnBody_isTerminal(x_3);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = l_Lean_IR_FnBody_body(x_3);
x_38 = lean_box(13);
x_39 = l_Lean_IR_FnBody_setBody(x_3, x_38);
x_40 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_37);
x_41 = l_Lean_IR_FnBody_setBody(x_39, x_40);
return x_41;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
case 1:
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_3);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_ctor_get(x_3, 2);
x_44 = lean_ctor_get(x_3, 3);
lean_inc(x_43);
lean_inc(x_1);
x_45 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_43);
lean_inc(x_45);
lean_inc(x_43);
x_46 = l_Lean_IR_FnBody_beq(x_43, x_45);
if (x_46 == 0)
{
lean_dec(x_43);
lean_dec(x_1);
lean_ctor_set(x_3, 2, x_45);
return x_3;
}
else
{
lean_object* x_47; 
lean_dec(x_45);
x_47 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_44);
lean_ctor_set(x_3, 3, x_47);
return x_3;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_48 = lean_ctor_get(x_3, 0);
x_49 = lean_ctor_get(x_3, 1);
x_50 = lean_ctor_get(x_3, 2);
x_51 = lean_ctor_get(x_3, 3);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_3);
lean_inc(x_50);
lean_inc(x_1);
x_52 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_50);
lean_inc(x_52);
lean_inc(x_50);
x_53 = l_Lean_IR_FnBody_beq(x_50, x_52);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_50);
lean_dec(x_1);
x_54 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_49);
lean_ctor_set(x_54, 2, x_52);
lean_ctor_set(x_54, 3, x_51);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_52);
x_55 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_51);
x_56 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_56, 0, x_48);
lean_ctor_set(x_56, 1, x_49);
lean_ctor_set(x_56, 2, x_50);
lean_ctor_set(x_56, 3, x_55);
return x_56;
}
}
}
case 10:
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_3);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; size_t x_60; size_t x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_3, 3);
x_59 = lean_array_get_size(x_58);
x_60 = lean_usize_of_nat(x_59);
lean_dec(x_59);
x_61 = 0;
x_62 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(x_1, x_2, x_60, x_61, x_58);
lean_ctor_set(x_3, 3, x_62);
return x_3;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; size_t x_68; size_t x_69; lean_object* x_70; lean_object* x_71; 
x_63 = lean_ctor_get(x_3, 0);
x_64 = lean_ctor_get(x_3, 1);
x_65 = lean_ctor_get(x_3, 2);
x_66 = lean_ctor_get(x_3, 3);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_3);
x_67 = lean_array_get_size(x_66);
x_68 = lean_usize_of_nat(x_67);
lean_dec(x_67);
x_69 = 0;
x_70 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(x_1, x_2, x_68, x_69, x_66);
x_71 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_71, 0, x_63);
lean_ctor_set(x_71, 1, x_64);
lean_ctor_set(x_71, 2, x_65);
lean_ctor_set(x_71, 3, x_70);
return x_71;
}
}
default: 
{
uint8_t x_72; 
x_72 = l_Lean_IR_FnBody_isTerminal(x_3);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = l_Lean_IR_FnBody_body(x_3);
x_74 = lean_box(13);
x_75 = l_Lean_IR_FnBody_setBody(x_3, x_74);
x_76 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_73);
x_77 = l_Lean_IR_FnBody_setBody(x_75, x_76);
return x_77;
}
else
{
lean_dec(x_1);
return x_3;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_IR_ResetReuse_Context_lctx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_instBEqVarId___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_IR_instHashableVarId___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__5;
return x_1;
}
}
static lean_object* _init_l_Lean_IR_ResetReuse_Context_casesVars___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1;
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_add(x_1, x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg), 1, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_mkFresh___rarg(x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_3);
lean_inc(x_8);
x_9 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_8, x_2, x_3);
lean_inc(x_9);
lean_inc(x_3);
x_10 = l_Lean_IR_FnBody_beq(x_3, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_1);
x_13 = lean_box(7);
x_14 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_9);
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
else
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
lean_ctor_set(x_6, 0, x_3);
return x_6;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
lean_inc(x_3);
lean_inc(x_15);
x_17 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_S(x_15, x_2, x_3);
lean_inc(x_17);
lean_inc(x_3);
x_18 = l_Lean_IR_FnBody_beq(x_3, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_1);
x_21 = lean_box(7);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_17);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_16);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_unbox(x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_8, x_4, x_5);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_3, 1);
lean_dec(x_11);
lean_ctor_set(x_3, 1, x_5);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_usize_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_array_uget(x_2, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_nat_dec_eq(x_1, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = lean_usize_add(x_3, x_9);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
x_12 = 1;
return x_12;
}
}
else
{
size_t x_13; size_t x_14; 
x_13 = 1;
x_14 = lean_usize_add(x_3, x_13);
x_3 = x_14;
goto _start;
}
}
else
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
size_t x_7; size_t x_8; uint8_t x_9; 
x_7 = 0;
x_8 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(x_2, x_1, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isCtorUsing(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 1);
x_5 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_argsContainsVar(x_4, x_2);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isCtorUsing___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isCtorUsing(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_uget(x_5, x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_5, x_4, x_11);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_6);
lean_inc(x_1);
x_15 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_14, x_6, x_7);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_1);
x_18 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_16, x_6, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_ctor_set(x_10, 1, x_19);
x_21 = 1;
x_22 = lean_usize_add(x_4, x_21);
x_23 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_22;
x_5 = x_23;
x_7 = x_20;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; size_t x_34; size_t x_35; lean_object* x_36; 
x_25 = lean_ctor_get(x_10, 0);
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_1);
x_27 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_26, x_6, x_7);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_1);
x_30 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_28, x_6, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_31);
x_34 = 1;
x_35 = lean_usize_add(x_4, x_34);
x_36 = lean_array_uset(x_12, x_4, x_33);
x_4 = x_35;
x_5 = x_36;
x_7 = x_32;
goto _start;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_10);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; size_t x_46; size_t x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_10, 0);
lean_inc(x_6);
lean_inc(x_1);
x_40 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_39, x_6, x_7);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_1);
x_43 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_41, x_6, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_ctor_set(x_10, 0, x_44);
x_46 = 1;
x_47 = lean_usize_add(x_4, x_46);
x_48 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_47;
x_5 = x_48;
x_7 = x_45;
goto _start;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; size_t x_58; size_t x_59; lean_object* x_60; 
x_50 = lean_ctor_get(x_10, 0);
lean_inc(x_50);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_1);
x_51 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_50, x_6, x_7);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
lean_inc(x_1);
x_54 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_52, x_6, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_55);
x_58 = 1;
x_59 = lean_usize_add(x_4, x_58);
x_60 = lean_array_uset(x_12, x_4, x_57);
x_4 = x_59;
x_5 = x_60;
x_7 = x_56;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 1:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_3, 2);
x_10 = lean_ctor_get(x_3, 3);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_13 = l_Lean_IR_LocalContext_addJP(x_11, x_7, x_8, x_9);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
lean_inc(x_1);
x_15 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_10, x_14, x_5);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_9, x_4, x_17);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_dec(x_25);
lean_ctor_set(x_3, 3, x_18);
lean_ctor_set(x_3, 2, x_24);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 0, x_3);
return x_20;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
lean_ctor_set(x_3, 3, x_18);
lean_ctor_set(x_3, 2, x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_3);
lean_ctor_set(x_27, 1, x_19);
lean_ctor_set(x_20, 0, x_27);
return x_20;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
lean_ctor_set(x_3, 3, x_18);
lean_ctor_set(x_3, 2, x_30);
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_19);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_29);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_34 = lean_ctor_get(x_3, 0);
x_35 = lean_ctor_get(x_3, 1);
x_36 = lean_ctor_get(x_3, 2);
x_37 = lean_ctor_get(x_3, 3);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_3);
x_38 = lean_ctor_get(x_4, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_4, 1);
lean_inc(x_39);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
x_40 = l_Lean_IR_LocalContext_addJP(x_38, x_34, x_35, x_36);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
lean_inc(x_1);
x_42 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_37, x_41, x_5);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_ctor_get(x_43, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_36, x_4, x_44);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_51 = lean_ctor_get(x_48, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_52 = x_48;
} else {
 lean_dec_ref(x_48);
 x_52 = lean_box(0);
}
x_53 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_53, 0, x_34);
lean_ctor_set(x_53, 1, x_35);
lean_ctor_set(x_53, 2, x_51);
lean_ctor_set(x_53, 3, x_45);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_46);
if (lean_is_scalar(x_50)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_50;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_49);
return x_55;
}
}
case 10:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_56 = lean_ctor_get(x_3, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_3, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_3, 2);
lean_inc(x_58);
x_59 = lean_ctor_get(x_3, 3);
lean_inc(x_59);
x_60 = lean_ctor_get(x_4, 0);
lean_inc(x_60);
lean_inc(x_3);
x_61 = l_Lean_IR_FnBody_hasLiveVar(x_3, x_60, x_1);
x_62 = lean_unbox(x_61);
lean_dec(x_61);
if (x_62 == 0)
{
uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_4);
lean_dec(x_1);
x_63 = 0;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_3);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_5);
return x_66;
}
else
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_3);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; uint8_t x_76; 
x_68 = lean_ctor_get(x_3, 3);
lean_dec(x_68);
x_69 = lean_ctor_get(x_3, 2);
lean_dec(x_69);
x_70 = lean_ctor_get(x_3, 1);
lean_dec(x_70);
x_71 = lean_ctor_get(x_3, 0);
lean_dec(x_71);
x_72 = lean_array_get_size(x_59);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = 0;
x_75 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(x_1, x_2, x_73, x_74, x_59, x_4, x_5);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_ctor_get(x_75, 1);
lean_ctor_set(x_3, 3, x_77);
x_79 = 1;
x_80 = lean_box(x_79);
lean_ctor_set(x_75, 1, x_80);
lean_ctor_set(x_75, 0, x_3);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_75);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_82 = lean_ctor_get(x_75, 0);
x_83 = lean_ctor_get(x_75, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_75);
lean_ctor_set(x_3, 3, x_82);
x_84 = 1;
x_85 = lean_box(x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_3);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_83);
return x_87;
}
}
else
{
lean_object* x_88; size_t x_89; size_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_3);
x_88 = lean_array_get_size(x_59);
x_89 = lean_usize_of_nat(x_88);
lean_dec(x_88);
x_90 = 0;
x_91 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(x_1, x_2, x_89, x_90, x_59, x_4, x_5);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_95, 0, x_56);
lean_ctor_set(x_95, 1, x_57);
lean_ctor_set(x_95, 2, x_58);
lean_ctor_set(x_95, 3, x_92);
x_96 = 1;
x_97 = lean_box(x_96);
if (lean_is_scalar(x_94)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_94;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_93);
return x_99;
}
}
}
default: 
{
uint8_t x_100; 
x_100 = l_Lean_IR_FnBody_isTerminal(x_3);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_101 = l_Lean_IR_FnBody_body(x_3);
x_102 = lean_box(13);
lean_inc(x_3);
x_103 = l_Lean_IR_FnBody_setBody(x_3, x_102);
x_104 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_isCtorUsing(x_103, x_1);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_105 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_101, x_4, x_5);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
x_108 = lean_unbox(x_107);
if (x_108 == 0)
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_105);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_110 = lean_ctor_get(x_105, 1);
x_111 = lean_ctor_get(x_105, 0);
lean_dec(x_111);
x_112 = !lean_is_exclusive(x_106);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; 
x_113 = lean_ctor_get(x_106, 0);
x_114 = lean_ctor_get(x_106, 1);
lean_dec(x_114);
lean_inc(x_103);
x_115 = l_Lean_IR_HasIndex_visitFnBody(x_1, x_103);
if (x_115 == 0)
{
lean_object* x_116; 
lean_dec(x_4);
lean_dec(x_1);
x_116 = l_Lean_IR_FnBody_setBody(x_103, x_113);
lean_ctor_set(x_106, 0, x_116);
return x_105;
}
else
{
lean_object* x_117; uint8_t x_118; 
lean_free_object(x_105);
lean_dec(x_107);
x_117 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_113, x_4, x_110);
lean_dec(x_4);
x_118 = !lean_is_exclusive(x_117);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_123; 
x_119 = lean_ctor_get(x_117, 0);
x_120 = lean_ctor_get(x_117, 1);
x_121 = l_Lean_IR_FnBody_setBody(x_103, x_119);
x_122 = 1;
x_123 = lean_box(x_122);
lean_ctor_set(x_117, 1, x_123);
lean_ctor_set(x_117, 0, x_121);
lean_ctor_set(x_106, 1, x_120);
lean_ctor_set(x_106, 0, x_117);
return x_106;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; 
x_124 = lean_ctor_get(x_117, 0);
x_125 = lean_ctor_get(x_117, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_117);
x_126 = l_Lean_IR_FnBody_setBody(x_103, x_124);
x_127 = 1;
x_128 = lean_box(x_127);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_128);
lean_ctor_set(x_106, 1, x_125);
lean_ctor_set(x_106, 0, x_129);
return x_106;
}
}
}
else
{
lean_object* x_130; uint8_t x_131; 
x_130 = lean_ctor_get(x_106, 0);
lean_inc(x_130);
lean_dec(x_106);
lean_inc(x_103);
x_131 = l_Lean_IR_HasIndex_visitFnBody(x_1, x_103);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_4);
lean_dec(x_1);
x_132 = l_Lean_IR_FnBody_setBody(x_103, x_130);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_107);
lean_ctor_set(x_105, 0, x_133);
return x_105;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_free_object(x_105);
lean_dec(x_107);
x_134 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_130, x_4, x_110);
lean_dec(x_4);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_137 = x_134;
} else {
 lean_dec_ref(x_134);
 x_137 = lean_box(0);
}
x_138 = l_Lean_IR_FnBody_setBody(x_103, x_135);
x_139 = 1;
x_140 = lean_box(x_139);
if (lean_is_scalar(x_137)) {
 x_141 = lean_alloc_ctor(0, 2, 0);
} else {
 x_141 = x_137;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_136);
return x_142;
}
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_143 = lean_ctor_get(x_105, 1);
lean_inc(x_143);
lean_dec(x_105);
x_144 = lean_ctor_get(x_106, 0);
lean_inc(x_144);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_145 = x_106;
} else {
 lean_dec_ref(x_106);
 x_145 = lean_box(0);
}
lean_inc(x_103);
x_146 = l_Lean_IR_HasIndex_visitFnBody(x_1, x_103);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_4);
lean_dec(x_1);
x_147 = l_Lean_IR_FnBody_setBody(x_103, x_144);
if (lean_is_scalar(x_145)) {
 x_148 = lean_alloc_ctor(0, 2, 0);
} else {
 x_148 = x_145;
}
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_107);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_143);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_107);
x_150 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_tryS(x_1, x_2, x_144, x_4, x_143);
lean_dec(x_4);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_153 = x_150;
} else {
 lean_dec_ref(x_150);
 x_153 = lean_box(0);
}
x_154 = l_Lean_IR_FnBody_setBody(x_103, x_151);
x_155 = 1;
x_156 = lean_box(x_155);
if (lean_is_scalar(x_153)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_153;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_156);
if (lean_is_scalar(x_145)) {
 x_158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_158 = x_145;
}
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_152);
return x_158;
}
}
}
else
{
uint8_t x_159; 
lean_dec(x_4);
lean_dec(x_1);
x_159 = !lean_is_exclusive(x_105);
if (x_159 == 0)
{
lean_object* x_160; uint8_t x_161; 
x_160 = lean_ctor_get(x_105, 0);
lean_dec(x_160);
x_161 = !lean_is_exclusive(x_106);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_106, 0);
x_163 = lean_ctor_get(x_106, 1);
lean_dec(x_163);
x_164 = l_Lean_IR_FnBody_setBody(x_103, x_162);
lean_ctor_set(x_106, 0, x_164);
return x_105;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_106, 0);
lean_inc(x_165);
lean_dec(x_106);
x_166 = l_Lean_IR_FnBody_setBody(x_103, x_165);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_107);
lean_ctor_set(x_105, 0, x_167);
return x_105;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_168 = lean_ctor_get(x_105, 1);
lean_inc(x_168);
lean_dec(x_105);
x_169 = lean_ctor_get(x_106, 0);
lean_inc(x_169);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_170 = x_106;
} else {
 lean_dec_ref(x_106);
 x_170 = lean_box(0);
}
x_171 = l_Lean_IR_FnBody_setBody(x_103, x_169);
if (lean_is_scalar(x_170)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_170;
}
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_107);
x_173 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_168);
return x_173;
}
}
}
else
{
uint8_t x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_103);
lean_dec(x_101);
lean_dec(x_4);
lean_dec(x_1);
x_174 = 1;
x_175 = lean_box(x_174);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_3);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_5);
return x_177;
}
}
else
{
lean_object* x_178; lean_object* x_179; uint8_t x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_178 = lean_ctor_get(x_4, 0);
lean_inc(x_178);
lean_dec(x_4);
lean_inc(x_3);
x_179 = l_Lean_IR_FnBody_hasLiveVar(x_3, x_178, x_1);
lean_dec(x_1);
x_180 = lean_unbox(x_179);
lean_dec(x_179);
x_181 = lean_box(x_180);
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_3);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_5);
return x_183;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_2);
return x_10;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
lean_inc(x_1);
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dmain(x_1, x_2, x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_Dfinalize(x_1, x_2, x_7, x_4, x_8);
lean_dec(x_4);
return x_9;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at_Lean_IR_ResetReuse_R___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_nat_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = 5;
x_3 = lean_usize_shift_left(x_1, x_2);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__1;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 5;
x_6 = l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2;
x_7 = lean_usize_land(x_2, x_6);
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_nat_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_usize_shift_right(x_2, x_5);
x_1 = x_13;
x_2 = x_14;
goto _start;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_IR_ResetReuse_R___spec__3(x_17, x_18, lean_box(0), x_19, x_3);
lean_dec(x_18);
lean_dec(x_17);
return x_20;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_uint64_of_nat(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2(x_3, x_5, x_2);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_uint64_of_nat(x_9);
x_12 = lean_uint64_to_usize(x_11);
x_13 = 1;
x_14 = lean_usize_sub(x_1, x_13);
x_15 = 5;
x_16 = lean_usize_mul(x_15, x_14);
x_17 = lean_usize_shift_right(x_12, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_ResetReuse_R___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_nat_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2;
x_11 = lean_usize_land(x_2, x_10);
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_nat_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_nat_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_usize_shift_right(x_2, x_9);
x_37 = lean_usize_add(x_3, x_8);
x_38 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = lean_usize_shift_right(x_2, x_9);
x_42 = lean_usize_add(x_3, x_8);
x_43 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2;
x_52 = lean_usize_land(x_2, x_51);
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(0);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_nat_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_Lean_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = lean_usize_shift_right(x_2, x_50);
x_74 = lean_usize_add(x_3, x_49);
x_75 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_1);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; size_t x_85; uint8_t x_86; 
x_83 = lean_unsigned_to_nat(0u);
x_84 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_ResetReuse_R___spec__7(x_1, x_83, x_4, x_5);
x_85 = 7;
x_86 = lean_usize_dec_le(x_85, x_3);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_84);
x_88 = lean_unsigned_to_nat(4u);
x_89 = lean_nat_dec_lt(x_87, x_88);
lean_dec(x_87);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_90 = lean_ctor_get(x_84, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1;
x_93 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6(x_3, x_90, x_91, lean_box(0), x_83, x_92);
lean_dec(x_91);
lean_dec(x_90);
return x_93;
}
else
{
return x_84;
}
}
else
{
return x_84;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; uint8_t x_100; 
x_94 = lean_ctor_get(x_1, 0);
x_95 = lean_ctor_get(x_1, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_1);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(0u);
x_98 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_IR_ResetReuse_R___spec__7(x_96, x_97, x_4, x_5);
x_99 = 7;
x_100 = lean_usize_dec_le(x_99, x_3);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_101 = l_Lean_PersistentHashMap_getCollisionNodeSize___rarg(x_98);
x_102 = lean_unsigned_to_nat(4u);
x_103 = lean_nat_dec_lt(x_101, x_102);
lean_dec(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_98, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1;
x_107 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6(x_3, x_104, x_105, lean_box(0), x_97, x_106);
lean_dec(x_105);
lean_dec(x_104);
return x_107;
}
else
{
return x_98;
}
}
else
{
return x_98;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at_Lean_IR_ResetReuse_R___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_uint64_of_nat(x_2);
x_8 = lean_uint64_to_usize(x_7);
x_9 = 1;
x_10 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_5, x_8, x_9, x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; uint64_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = lean_uint64_of_nat(x_2);
x_16 = lean_uint64_to_usize(x_15);
x_17 = 1;
x_18 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_13, x_16, x_17, x_2, x_3);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_14, x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8(lean_object* x_1, uint8_t x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_usize_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_uget(x_5, x_4);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_5, x_4, x_11);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_6);
x_16 = l_Lean_IR_ResetReuse_R(x_15, x_6, x_7);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_17);
lean_inc(x_14);
lean_ctor_set(x_10, 1, x_17);
x_19 = l_Lean_IR_CtorInfo_isScalar(x_14);
if (x_19 == 0)
{
if (x_2 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; 
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_1);
x_20 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(x_1, x_14, x_17, x_6, x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_21);
x_24 = 1;
x_25 = lean_usize_add(x_4, x_24);
x_26 = lean_array_uset(x_12, x_4, x_23);
x_4 = x_25;
x_5 = x_26;
x_7 = x_22;
goto _start;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; 
lean_dec(x_17);
lean_dec(x_14);
x_28 = 1;
x_29 = lean_usize_add(x_4, x_28);
x_30 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_29;
x_5 = x_30;
x_7 = x_18;
goto _start;
}
}
else
{
size_t x_32; size_t x_33; lean_object* x_34; 
lean_dec(x_17);
lean_dec(x_14);
x_32 = 1;
x_33 = lean_usize_add(x_4, x_32);
x_34 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_33;
x_5 = x_34;
x_7 = x_18;
goto _start;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_36 = lean_ctor_get(x_10, 0);
x_37 = lean_ctor_get(x_10, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_10);
lean_inc(x_6);
x_38 = l_Lean_IR_ResetReuse_R(x_37, x_6, x_7);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_inc(x_39);
lean_inc(x_36);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_Lean_IR_CtorInfo_isScalar(x_36);
if (x_42 == 0)
{
if (x_2 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; size_t x_47; size_t x_48; lean_object* x_49; 
lean_dec(x_41);
lean_inc(x_6);
lean_inc(x_1);
x_43 = l___private_Lean_Compiler_IR_ResetReuse_0__Lean_IR_ResetReuse_D(x_1, x_36, x_39, x_6, x_40);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_36);
lean_ctor_set(x_46, 1, x_44);
x_47 = 1;
x_48 = lean_usize_add(x_4, x_47);
x_49 = lean_array_uset(x_12, x_4, x_46);
x_4 = x_48;
x_5 = x_49;
x_7 = x_45;
goto _start;
}
else
{
size_t x_51; size_t x_52; lean_object* x_53; 
lean_dec(x_39);
lean_dec(x_36);
x_51 = 1;
x_52 = lean_usize_add(x_4, x_51);
x_53 = lean_array_uset(x_12, x_4, x_41);
x_4 = x_52;
x_5 = x_53;
x_7 = x_40;
goto _start;
}
}
else
{
size_t x_55; size_t x_56; lean_object* x_57; 
lean_dec(x_39);
lean_dec(x_36);
x_55 = 1;
x_56 = lean_usize_add(x_4, x_55);
x_57 = lean_array_uset(x_12, x_4, x_41);
x_4 = x_56;
x_5 = x_57;
x_7 = x_40;
goto _start;
}
}
}
else
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_10);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; size_t x_64; size_t x_65; lean_object* x_66; 
x_60 = lean_ctor_get(x_10, 0);
lean_inc(x_6);
x_61 = l_Lean_IR_ResetReuse_R(x_60, x_6, x_7);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
lean_ctor_set(x_10, 0, x_62);
x_64 = 1;
x_65 = lean_usize_add(x_4, x_64);
x_66 = lean_array_uset(x_12, x_4, x_10);
x_4 = x_65;
x_5 = x_66;
x_7 = x_63;
goto _start;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; 
x_68 = lean_ctor_get(x_10, 0);
lean_inc(x_68);
lean_dec(x_10);
lean_inc(x_6);
x_69 = l_Lean_IR_ResetReuse_R(x_68, x_6, x_7);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_70);
x_73 = 1;
x_74 = lean_usize_add(x_4, x_73);
x_75 = lean_array_uset(x_12, x_4, x_72);
x_4 = x_74;
x_5 = x_75;
x_7 = x_71;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_ResetReuse_R(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
x_9 = l_Lean_IR_ResetReuse_R(x_7, x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_IR_LocalContext_addJP(x_13, x_5, x_6, x_10);
lean_ctor_set(x_2, 0, x_14);
x_15 = l_Lean_IR_ResetReuse_R(x_8, x_2, x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 3, x_17);
lean_ctor_set(x_1, 2, x_10);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_1, 3, x_18);
lean_ctor_set(x_1, 2, x_10);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_2, 0);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_2);
lean_inc(x_10);
lean_inc(x_6);
lean_inc(x_5);
x_23 = l_Lean_IR_LocalContext_addJP(x_21, x_5, x_6, x_10);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_IR_ResetReuse_R(x_8, x_24, x_11);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
lean_ctor_set(x_1, 3, x_26);
lean_ctor_set(x_1, 2, x_10);
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_1);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_1, 0);
x_31 = lean_ctor_get(x_1, 1);
x_32 = lean_ctor_get(x_1, 2);
x_33 = lean_ctor_get(x_1, 3);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_1);
lean_inc(x_2);
x_34 = l_Lean_IR_ResetReuse_R(x_32, x_2, x_3);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_ctor_get(x_2, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_2, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_39 = x_2;
} else {
 lean_dec_ref(x_2);
 x_39 = lean_box(0);
}
lean_inc(x_35);
lean_inc(x_31);
lean_inc(x_30);
x_40 = l_Lean_IR_LocalContext_addJP(x_37, x_30, x_31, x_35);
if (lean_is_scalar(x_39)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_39;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
x_42 = l_Lean_IR_ResetReuse_R(x_33, x_41, x_36);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_45 = x_42;
} else {
 lean_dec_ref(x_42);
 x_45 = lean_box(0);
}
x_46 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_46, 0, x_30);
lean_ctor_set(x_46, 1, x_31);
lean_ctor_set(x_46, 2, x_35);
lean_ctor_set(x_46, 3, x_43);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
case 10:
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_1);
if (x_48 == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_2);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; size_t x_55; size_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_50 = lean_ctor_get(x_1, 1);
x_51 = lean_ctor_get(x_1, 3);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_50);
lean_inc(x_52);
x_53 = l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1(x_52, x_50);
x_54 = lean_array_get_size(x_51);
x_55 = lean_usize_of_nat(x_54);
lean_dec(x_54);
x_56 = 0;
x_57 = lean_box(0);
lean_inc(x_50);
x_58 = l_Lean_PersistentHashMap_insert___at_Lean_IR_ResetReuse_R___spec__4(x_52, x_50, x_57);
lean_ctor_set(x_2, 1, x_58);
lean_inc(x_50);
x_59 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8(x_50, x_53, x_55, x_56, x_51, x_2, x_3);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_59, 0);
lean_ctor_set(x_1, 3, x_61);
lean_ctor_set(x_59, 0, x_1);
return x_59;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_59, 0);
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_59);
lean_ctor_set(x_1, 3, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_1);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; lean_object* x_70; size_t x_71; size_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_65 = lean_ctor_get(x_1, 1);
x_66 = lean_ctor_get(x_1, 3);
x_67 = lean_ctor_get(x_2, 0);
x_68 = lean_ctor_get(x_2, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_2);
lean_inc(x_65);
lean_inc(x_68);
x_69 = l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1(x_68, x_65);
x_70 = lean_array_get_size(x_66);
x_71 = lean_usize_of_nat(x_70);
lean_dec(x_70);
x_72 = 0;
x_73 = lean_box(0);
lean_inc(x_65);
x_74 = l_Lean_PersistentHashMap_insert___at_Lean_IR_ResetReuse_R___spec__4(x_68, x_65, x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_67);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_65);
x_76 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8(x_65, x_69, x_71, x_72, x_66, x_75, x_3);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_79 = x_76;
} else {
 lean_dec_ref(x_76);
 x_79 = lean_box(0);
}
lean_ctor_set(x_1, 3, x_77);
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; size_t x_90; size_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_81 = lean_ctor_get(x_1, 0);
x_82 = lean_ctor_get(x_1, 1);
x_83 = lean_ctor_get(x_1, 2);
x_84 = lean_ctor_get(x_1, 3);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_1);
x_85 = lean_ctor_get(x_2, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_2, 1);
lean_inc(x_86);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_87 = x_2;
} else {
 lean_dec_ref(x_2);
 x_87 = lean_box(0);
}
lean_inc(x_82);
lean_inc(x_86);
x_88 = l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1(x_86, x_82);
x_89 = lean_array_get_size(x_84);
x_90 = lean_usize_of_nat(x_89);
lean_dec(x_89);
x_91 = 0;
x_92 = lean_box(0);
lean_inc(x_82);
x_93 = l_Lean_PersistentHashMap_insert___at_Lean_IR_ResetReuse_R___spec__4(x_86, x_82, x_92);
if (lean_is_scalar(x_87)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_87;
}
lean_ctor_set(x_94, 0, x_85);
lean_ctor_set(x_94, 1, x_93);
lean_inc(x_82);
x_95 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8(x_82, x_88, x_90, x_91, x_84, x_94, x_3);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_98 = x_95;
} else {
 lean_dec_ref(x_95);
 x_98 = lean_box(0);
}
x_99 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_99, 0, x_81);
lean_ctor_set(x_99, 1, x_82);
lean_ctor_set(x_99, 2, x_83);
lean_ctor_set(x_99, 3, x_96);
if (lean_is_scalar(x_98)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_98;
}
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
}
default: 
{
uint8_t x_101; 
x_101 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_102 = l_Lean_IR_FnBody_body(x_1);
x_103 = lean_box(13);
x_104 = l_Lean_IR_FnBody_setBody(x_1, x_103);
x_105 = l_Lean_IR_ResetReuse_R(x_102, x_2, x_3);
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_105, 0);
x_108 = l_Lean_IR_FnBody_setBody(x_104, x_107);
lean_ctor_set(x_105, 0, x_108);
return x_105;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_109 = lean_ctor_get(x_105, 0);
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_105);
x_111 = l_Lean_IR_FnBody_setBody(x_104, x_109);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
return x_112;
}
}
else
{
lean_object* x_113; 
lean_dec(x_2);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_1);
lean_ctor_set(x_113, 1, x_3);
return x_113;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at_Lean_IR_ResetReuse_R___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Lean_PersistentHashMap_containsAtAux___at_Lean_IR_ResetReuse_R___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_PersistentHashMap_contains___at_Lean_IR_ResetReuse_R___spec__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at_Lean_IR_ResetReuse_R___spec__6(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_mapMUnsafe_map___at_Lean_IR_ResetReuse_R___spec__8(x_1, x_8, x_9, x_10, x_5, x_6, x_7);
return x_11;
}
}
static lean_object* _init_l_Lean_IR_Decl_insertResetReuse___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Decl_insertResetReuse(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
x_3 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_4 = l_Lean_IR_MaxIndex_collectDecl(x_1, x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_dec(x_4);
x_7 = l_Lean_IR_Decl_insertResetReuse___closed__1;
x_8 = l_Lean_IR_ResetReuse_R(x_2, x_7, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_Decl_updateBody_x21(x_1, x_9);
return x_10;
}
else
{
return x_1;
}
}
}
lean_object* initialize_Lean_Compiler_IR_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_LiveVars(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_IR_Format(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_ResetReuse(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_LiveVars(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Format(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_ResetReuse_Context_lctx___default = _init_l_Lean_IR_ResetReuse_Context_lctx___default();
lean_mark_persistent(l_Lean_IR_ResetReuse_Context_lctx___default);
l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__1 = _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__1);
l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__2 = _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__2();
lean_mark_persistent(l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__2);
l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__3 = _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__3();
lean_mark_persistent(l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__3);
l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__4 = _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__4();
lean_mark_persistent(l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__4);
l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__5 = _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__5();
lean_mark_persistent(l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1___closed__5);
l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1 = _init_l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1();
lean_mark_persistent(l_Lean_PersistentHashMap_empty___at_Lean_IR_ResetReuse_Context_casesVars___default___spec__1);
l_Lean_IR_ResetReuse_Context_casesVars___default = _init_l_Lean_IR_ResetReuse_Context_casesVars___default();
lean_mark_persistent(l_Lean_IR_ResetReuse_Context_casesVars___default);
l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__1 = _init_l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__1();
l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2 = _init_l_Lean_PersistentHashMap_containsAux___at_Lean_IR_ResetReuse_R___spec__2___closed__2();
l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at_Lean_IR_ResetReuse_R___spec__5___closed__1);
l_Lean_IR_Decl_insertResetReuse___closed__1 = _init_l_Lean_IR_Decl_insertResetReuse___closed__1();
lean_mark_persistent(l_Lean_IR_Decl_insertResetReuse___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
