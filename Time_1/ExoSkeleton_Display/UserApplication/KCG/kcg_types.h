/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/KCG/config.txt
** Generation date: 2018-11-21T22:34:45
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Main/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_Sitting_1_Waiting_SM1,
  SSM_TR_Waiting_Running_2_Waiting_SM1,
  SSM_TR_Running_Runned_1_Running_SM1,
  SSM_TR_Runned_Waiting_1_Runned_SM1,
  SSM_TR_Sitting_sat_1_Sitting_SM1,
  SSM_TR_sat_raising_1_sat_SM1,
  SSM_TR_raising_Waiting_1_raising_SM1
} SSM_TR_SM1;
/* Main/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Waiting_SM1,
  SSM_st_Running_SM1,
  SSM_st_Runned_SM1,
  SSM_st_Sitting_SM1,
  SSM_st_sat_SM1,
  SSM_st_raising_SM1
} SSM_ST_SM1;
/* T_String_06/ */
typedef kcg_char T_String_06[6];

/* T_String_32/ */
typedef kcg_char T_String_32[32];

/* T_String_02/ */
typedef kcg_char T_String_02[2];

/* T_String_76/ */
typedef kcg_char T_String_76[76];

/* T_String_33/ */
typedef kcg_char T_String_33[33];

/* T_String_03/ */
typedef kcg_char T_String_03[3];

/* T_String_43/ */
typedef kcg_char T_String_43[43];

typedef kcg_char array_char_9[9];

/* T_String_01/ */
typedef kcg_char T_String_01[1];

/* T_String_10/ */
typedef kcg_char T_String_10[10];

/* S_ToLabel_76/ */
typedef struct kcg_tag_S_ToLabel_76 {
  kcg_bool Emit2DF;
  kcg_uint16 string_size;
  T_String_76 value;
} S_ToLabel_76;

/* T_ImageReference/ */
typedef struct kcg_tag_T_ImageReference {
  kcg_bool Emit2DF;
  kcg_uint16 Reference;
} T_ImageReference;

/* S_ToLabel_33/ */
typedef struct kcg_tag_S_ToLabel_33 {
  kcg_bool Emit2DF;
  kcg_uint16 string_size;
  T_String_33 value;
} S_ToLabel_33;

/* S_ToLabel_10/ */
typedef struct kcg_tag_S_ToLabel_10 {
  kcg_bool Emit2DF;
  kcg_uint16 string_size;
  T_String_10 value;
} S_ToLabel_10;

#ifndef kcg_copy_S_ToLabel_10
#define kcg_copy_S_ToLabel_10(kcg_C1, kcg_C2)                                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (S_ToLabel_10)))
#endif /* kcg_copy_S_ToLabel_10 */

#ifndef kcg_copy_S_ToLabel_33
#define kcg_copy_S_ToLabel_33(kcg_C1, kcg_C2)                                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (S_ToLabel_33)))
#endif /* kcg_copy_S_ToLabel_33 */

#ifndef kcg_copy_T_ImageReference
#define kcg_copy_T_ImageReference(kcg_C1, kcg_C2)                             \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_ImageReference)))
#endif /* kcg_copy_T_ImageReference */

#ifndef kcg_copy_S_ToLabel_76
#define kcg_copy_S_ToLabel_76(kcg_C1, kcg_C2)                                 \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (S_ToLabel_76)))
#endif /* kcg_copy_S_ToLabel_76 */

#ifndef kcg_copy_T_String_10
#define kcg_copy_T_String_10(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_10)))
#endif /* kcg_copy_T_String_10 */

#ifndef kcg_copy_T_String_01
#define kcg_copy_T_String_01(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_01)))
#endif /* kcg_copy_T_String_01 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_T_String_43
#define kcg_copy_T_String_43(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_43)))
#endif /* kcg_copy_T_String_43 */

#ifndef kcg_copy_T_String_03
#define kcg_copy_T_String_03(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_03)))
#endif /* kcg_copy_T_String_03 */

#ifndef kcg_copy_T_String_33
#define kcg_copy_T_String_33(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_33)))
#endif /* kcg_copy_T_String_33 */

#ifndef kcg_copy_T_String_76
#define kcg_copy_T_String_76(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_76)))
#endif /* kcg_copy_T_String_76 */

#ifndef kcg_copy_T_String_02
#define kcg_copy_T_String_02(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_02)))
#endif /* kcg_copy_T_String_02 */

#ifndef kcg_copy_T_String_32
#define kcg_copy_T_String_32(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_32)))
#endif /* kcg_copy_T_String_32 */

#ifndef kcg_copy_T_String_06
#define kcg_copy_T_String_06(kcg_C1, kcg_C2)                                  \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_String_06)))
#endif /* kcg_copy_T_String_06 */

#ifdef kcg_use_S_ToLabel_10
#ifndef kcg_comp_S_ToLabel_10
extern kcg_bool kcg_comp_S_ToLabel_10(
  S_ToLabel_10 *kcg_c1,
  S_ToLabel_10 *kcg_c2);
#endif /* kcg_comp_S_ToLabel_10 */
#endif /* kcg_use_S_ToLabel_10 */

#ifdef kcg_use_S_ToLabel_33
#ifndef kcg_comp_S_ToLabel_33
extern kcg_bool kcg_comp_S_ToLabel_33(
  S_ToLabel_33 *kcg_c1,
  S_ToLabel_33 *kcg_c2);
#endif /* kcg_comp_S_ToLabel_33 */
#endif /* kcg_use_S_ToLabel_33 */

#ifdef kcg_use_T_ImageReference
#ifndef kcg_comp_T_ImageReference
extern kcg_bool kcg_comp_T_ImageReference(
  T_ImageReference *kcg_c1,
  T_ImageReference *kcg_c2);
#endif /* kcg_comp_T_ImageReference */
#endif /* kcg_use_T_ImageReference */

#ifdef kcg_use_S_ToLabel_76
#ifndef kcg_comp_S_ToLabel_76
extern kcg_bool kcg_comp_S_ToLabel_76(
  S_ToLabel_76 *kcg_c1,
  S_ToLabel_76 *kcg_c2);
#endif /* kcg_comp_S_ToLabel_76 */
#endif /* kcg_use_S_ToLabel_76 */

#ifndef kcg_comp_T_String_10
extern kcg_bool kcg_comp_T_String_10(T_String_10 *kcg_c1, T_String_10 *kcg_c2);
#define kcg_use_T_String_10
#endif /* kcg_comp_T_String_10 */

#ifdef kcg_use_T_String_01
#ifndef kcg_comp_T_String_01
extern kcg_bool kcg_comp_T_String_01(T_String_01 *kcg_c1, T_String_01 *kcg_c2);
#endif /* kcg_comp_T_String_01 */
#endif /* kcg_use_T_String_01 */

#ifdef kcg_use_array_char_9
#ifndef kcg_comp_array_char_9
extern kcg_bool kcg_comp_array_char_9(
  array_char_9 *kcg_c1,
  array_char_9 *kcg_c2);
#endif /* kcg_comp_array_char_9 */
#endif /* kcg_use_array_char_9 */

#ifdef kcg_use_T_String_43
#ifndef kcg_comp_T_String_43
extern kcg_bool kcg_comp_T_String_43(T_String_43 *kcg_c1, T_String_43 *kcg_c2);
#endif /* kcg_comp_T_String_43 */
#endif /* kcg_use_T_String_43 */

#ifdef kcg_use_T_String_03
#ifndef kcg_comp_T_String_03
extern kcg_bool kcg_comp_T_String_03(T_String_03 *kcg_c1, T_String_03 *kcg_c2);
#endif /* kcg_comp_T_String_03 */
#endif /* kcg_use_T_String_03 */

#ifdef kcg_use_T_String_33
#ifndef kcg_comp_T_String_33
extern kcg_bool kcg_comp_T_String_33(T_String_33 *kcg_c1, T_String_33 *kcg_c2);
#endif /* kcg_comp_T_String_33 */
#endif /* kcg_use_T_String_33 */

#ifdef kcg_use_T_String_76
#ifndef kcg_comp_T_String_76
extern kcg_bool kcg_comp_T_String_76(T_String_76 *kcg_c1, T_String_76 *kcg_c2);
#endif /* kcg_comp_T_String_76 */
#endif /* kcg_use_T_String_76 */

#ifdef kcg_use_T_String_02
#ifndef kcg_comp_T_String_02
extern kcg_bool kcg_comp_T_String_02(T_String_02 *kcg_c1, T_String_02 *kcg_c2);
#endif /* kcg_comp_T_String_02 */
#endif /* kcg_use_T_String_02 */

#ifdef kcg_use_T_String_32
#ifndef kcg_comp_T_String_32
extern kcg_bool kcg_comp_T_String_32(T_String_32 *kcg_c1, T_String_32 *kcg_c2);
#endif /* kcg_comp_T_String_32 */
#endif /* kcg_use_T_String_32 */

#ifdef kcg_use_T_String_06
#ifndef kcg_comp_T_String_06
extern kcg_bool kcg_comp_T_String_06(T_String_06 *kcg_c1, T_String_06 *kcg_c2);
#endif /* kcg_comp_T_String_06 */
#endif /* kcg_use_T_String_06 */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2018-11-21T22:34:45
*************************************************************$ */

