/* UserApplication_mapping.c */

#include "UserApplication_type.h"
#include "UserApplication_interface.h"
#include "UserApplication_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(array_9);
DECL_ITER(array_75);
DECL_ITER(array_32);
DECL_ITER(array_43);
DECL_ITER(array_6);
DECL_ITER(array_3);
DECL_ITER(array_2);
DECL_ITER(array_1);
DECL_ITER(array_33);
DECL_ITER(array_76);
DECL_ITER(array_10);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_41, 4);
DECL_SCOPE(scope_40, 1);
DECL_SCOPE(scope_39, 1);
DECL_SCOPE(scope_38, 1);
DECL_SCOPE(scope_37, 1);
DECL_SCOPE(scope_36, 1);
DECL_SCOPE(scope_35, 35);
DECL_SCOPE(scope_34, 9);
DECL_SCOPE(scope_33, 9);
DECL_SCOPE(scope_32, 7);
DECL_SCOPE(scope_31, 20);
DECL_SCOPE(scope_30, 1);
DECL_SCOPE(scope_29, 12);
DECL_SCOPE(scope_28, 1);
DECL_SCOPE(scope_27, 3);
DECL_SCOPE(scope_26, 7);
DECL_SCOPE(scope_25, 20);
DECL_SCOPE(scope_24, 1);
DECL_SCOPE(scope_23, 12);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 10);
DECL_SCOPE(scope_20, 7);
DECL_SCOPE(scope_19, 7);
DECL_SCOPE(scope_18, 13);
DECL_SCOPE(scope_17, 1);
DECL_SCOPE(scope_16, 34);
DECL_SCOPE(scope_15, 1);
DECL_SCOPE(scope_14, 1);
DECL_SCOPE(scope_13, 9);
DECL_SCOPE(scope_12, 13);
DECL_SCOPE(scope_11, 1);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 3);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 3);
DECL_SCOPE(scope_2, 2);
DECL_SCOPE(scope_1, 67);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Runned_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Runned_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Running_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Running_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Sitting_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Sitting_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Waiting_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Waiting_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_raising_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_raising_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_sat_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_sat_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Runned_Waiting_1_Runned_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Runned_Waiting_1_Runned_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Running_Runned_1_Running_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Running_Runned_1_Running_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Sitting_sat_1_Sitting_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Sitting_sat_1_Sitting_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Waiting_Running_2_Waiting_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Waiting_Running_2_Waiting_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Waiting_Sitting_1_Waiting_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Waiting_Sitting_1_Waiting_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_raising_Waiting_1_raising_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_raising_Waiting_1_raising_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_sat_raising_1_sat_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_sat_raising_1_sat_SM1; }

/* mapping definition */

const MappingIterator iter_array_9 = { "array", 9, 9, NULL };
const MappingIterator iter_array_75 = { "array", 75, 75, NULL };
const MappingIterator iter_array_32 = { "array", 32, 32, NULL };
const MappingIterator iter_array_43 = { "array", 43, 43, NULL };
const MappingIterator iter_array_6 = { "array", 6, 6, NULL };
const MappingIterator iter_array_3 = { "array", 3, 3, NULL };
const MappingIterator iter_array_2 = { "array", 2, 2, NULL };
const MappingIterator iter_array_1 = { "array", 1, 1, NULL };
const MappingIterator iter_array_33 = { "array", 33, 33, NULL };
const MappingIterator iter_array_76 = { "array", 76, 76, NULL };
const MappingIterator iter_array_10 = { "array", 10, 10, NULL };

const MappingEntry scope_41_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "EnablePbSit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EnablePbSit_DisplayView_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "EnablePbRaise", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EnablePbRaise_DisplayView_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_DisplayView_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10_DisplayView_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_41 = {
    "Main/ Main/DisplayView 1",
    scope_41_entries, 4
};

const MappingEntry scope_40_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_9, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_40 = {
    "array_char_9",
    scope_40_entries, 1
};

const MappingEntry scope_39_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_75, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_39 = {
    "array_char_75",
    scope_39_entries, 1
};

const MappingEntry scope_38_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_38 = {
    "T_String_32",
    scope_38_entries, 1
};

const MappingEntry scope_37_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_43, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_37 = {
    "T_String_43",
    scope_37_entries, 1
};

const MappingEntry scope_36_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_36 = {
    "T_String_06",
    scope_36_entries, 1
};

const MappingEntry scope_35_entries[35] = {
    /* 0 */ { MAP_OUTPUT, "OutProtocol", NULL, sizeof(S_ToLabel_76), (size_t)&outputs_ctx.OutProtocol_Protocol_1, &_Type_S_ToLabel_76_Utils, NULL, NULL, &scope_5, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "OutMd5", NULL, sizeof(S_ToLabel_33), (size_t)&outputs_ctx.OutMd5_Protocol_1, &_Type_S_ToLabel_33_Utils, NULL, NULL, &scope_7, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "OutCMD", NULL, sizeof(S_ToLabel_10), (size_t)&outputs_ctx.OutCMD_Protocol_1, &_Type_S_ToLabel_10_Utils, NULL, NULL, &scope_3, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Protocolo", NULL, sizeof(T_String_76), (size_t)&outputs_ctx.Protocolo_Protocol_1, &_Type_T_String_76_Utils, NULL, NULL, &scope_6, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "Comando", NULL, sizeof(T_String_10), (size_t)&outputs_ctx.Comando_Protocol_1, &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_String_06), (size_t)&outputs_ctx._L1_Protocol_1, &_Type_T_String_06_Utils, NULL, NULL, &scope_36, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_String_06), (size_t)&outputs_ctx._L2_Protocol_1, &_Type_T_String_06_Utils, NULL, NULL, &scope_36, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_String_06), (size_t)&outputs_ctx._L3_Protocol_1, &_Type_T_String_06_Utils, NULL, NULL, &scope_36, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_String_06), (size_t)&outputs_ctx._L4_Protocol_1, &_Type_T_String_06_Utils, NULL, NULL, &scope_36, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_String_43), (size_t)&outputs_ctx._L7_Protocol_1, &_Type_T_String_43_Utils, NULL, NULL, &scope_37, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L11_Protocol_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(T_String_10), (size_t)&outputs_ctx._L13_Protocol_1, &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L14", NULL, sizeof(T_String_32), (size_t)&outputs_ctx._L14_Protocol_1, &_Type_T_String_32_Utils, NULL, NULL, &scope_38, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L16", NULL, sizeof(array_char_75), (size_t)&outputs_ctx._L16_Protocol_1, &_Type_array_char_75_Utils, NULL, NULL, &scope_39, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L17", NULL, sizeof(array_char_9), (size_t)&outputs_ctx._L17_Protocol_1, &_Type_array_char_9_Utils, NULL, NULL, &scope_40, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L24_Protocol_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L30_Protocol_1, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L32_Protocol_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L33_Protocol_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L34_Protocol_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L39", NULL, sizeof(S_ToLabel_33), (size_t)&outputs_ctx._L39_Protocol_1, &_Type_S_ToLabel_33_Utils, NULL, NULL, &scope_7, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L40", NULL, sizeof(S_ToLabel_76), (size_t)&outputs_ctx._L40_Protocol_1, &_Type_S_ToLabel_76_Utils, NULL, NULL, &scope_5, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L41_Protocol_1, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L42_Protocol_1, &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L44", NULL, sizeof(S_ToLabel_10), (size_t)&outputs_ctx._L44_Protocol_1, &_Type_S_ToLabel_10_Utils, NULL, NULL, &scope_3, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L45", NULL, sizeof(T_String_10), (size_t)&outputs_ctx._L45_Protocol_1, &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L46", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L46_Protocol_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L47", NULL, sizeof(T_String_33), (size_t)&outputs_ctx._L47_Protocol_1, &_Type_T_String_33_Utils, NULL, NULL, &scope_8, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L48", NULL, sizeof(T_String_76), (size_t)&outputs_ctx._L48_Protocol_1, &_Type_T_String_76_Utils, NULL, NULL, &scope_6, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L49", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L49_Protocol_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L51", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L51_Protocol_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L52", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L52_Protocol_1, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L53", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L53_Protocol_1, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L54", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L54_Protocol_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L56", NULL, sizeof(T_String_03), (size_t)&outputs_ctx._L56_Protocol_1, &_Type_T_String_03_Utils, NULL, NULL, &scope_11, 1, 34 }
};
const MappingScope scope_35 = {
    "Main/ Main/Protocol 1",
    scope_35_entries, 35
};

const MappingEntry scope_34_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Number", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Number_Read_InputNumber_5, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L2_Read_InputNumber_5, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Read_InputNumber_5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Read_InputNumber_5, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_Read_InputNumber_5, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L6_Read_InputNumber_5, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L7_Read_InputNumber_5, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L8_Read_InputNumber_5, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Read_InputNumber_5, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_34 = {
    "Main/ Main/Read_InputNumber 5",
    scope_34_entries, 9
};

const MappingEntry scope_33_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "Number", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Number_Read_InputNumber_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L2_Read_InputNumber_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1_Read_InputNumber_1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Read_InputNumber_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_Read_InputNumber_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L6_Read_InputNumber_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L7_Read_InputNumber_1, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L8_Read_InputNumber_1, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Read_InputNumber_1, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_33 = {
    "Main/ Main/Read_InputNumber 1",
    scope_33_entries, 9
};

const MappingEntry scope_32_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Count_Counter_8_Transition_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_Counter_8_Transition_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Counter_8_Transition_2_int32, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Counter_8_Transition_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Counter_8_Transition_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L18_Counter_8_Transition_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L47_Counter_8_Transition_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 6 }
};
const MappingScope scope_32 = {
    "Main/ MainSM1:raising:/Transition 2/pwlinear::Counter 8",
    scope_32_entries, 7
};

const MappingEntry scope_31_entries[20] = {
    /* 0 */ { MAP_OUTPUT, "Out_ImageReference", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx.Out_ImageReference_Transition_2, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Out_Done", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Out_Done_Transition_2, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L76", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L76_Transition_2, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L75_Transition_2, &_Type_kcg_uint16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L74_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L72_Transition_2, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L71_Transition_2, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L69_Transition_2, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L63_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L82_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L84_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L85", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L85_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L88_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L90_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L91_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L93_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96_Transition_2, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L97_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L98_Transition_2, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_EXPANDED, "pwlinear::Counter 8", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 19 }
};
const MappingScope scope_31 = {
    "Main/ MainSM1:raising:/Transition 2",
    scope_31_entries, 20
};

const MappingEntry scope_30_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_raising_Waiting_1_raising_SM1, NULL, 1, 0 }
};
const MappingScope scope_30 = {
    "Main/ MainSM1:raising:<1",
    scope_30_entries, 1
};

const MappingEntry scope_29_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_raising_Waiting_1_raising_SM1, &scope_30, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_raising_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L3_raising_SM1, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4_raising_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_raising_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1_raising_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L12_raising_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, &scope_10, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L13_raising_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, &scope_10, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14_raising_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_raising_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16_raising_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "Transition 2", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 11 }
};
const MappingScope scope_29 = {
    "Main/ MainSM1:raising:",
    scope_29_entries, 12
};

const MappingEntry scope_28_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_sat_raising_1_sat_SM1, NULL, 1, 0 }
};
const MappingScope scope_28 = {
    "Main/ MainSM1:sat:<1",
    scope_28_entries, 1
};

const MappingEntry scope_27_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_sat_raising_1_sat_SM1, &scope_28, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L26_sat_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_sat_SM1, &scope_10, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L27", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L27_sat_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_sat_SM1, &scope_10, 1, 2 }
};
const MappingScope scope_27 = {
    "Main/ MainSM1:sat:",
    scope_27_entries, 3
};

const MappingEntry scope_26_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Count_Counter_8_Transition_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_Counter_8_Transition_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Counter_8_Transition_1_int32, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Counter_8_Transition_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Counter_8_Transition_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L18_Counter_8_Transition_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L47_Counter_8_Transition_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 6 }
};
const MappingScope scope_26 = {
    "Main/ MainSM1:Sitting:/Transition 1/pwlinear::Counter 8",
    scope_26_entries, 7
};

const MappingEntry scope_25_entries[20] = {
    /* 0 */ { MAP_OUTPUT, "Out_ImageReference", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx.Out_ImageReference_Transition_1, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Out_Done", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Out_Done_Transition_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L76", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L76_Transition_1, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L75_Transition_1, &_Type_kcg_uint16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L74_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L72_Transition_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L71_Transition_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L69_Transition_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L63_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L82_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L84_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L85", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L85_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L88_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L90_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L91_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L93_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L96_Transition_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L97_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L98_Transition_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_EXPANDED, "pwlinear::Counter 8", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 19 }
};
const MappingScope scope_25 = {
    "Main/ MainSM1:Sitting:/Transition 1",
    scope_25_entries, 20
};

const MappingEntry scope_24_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Sitting_sat_1_Sitting_SM1, NULL, 1, 0 }
};
const MappingScope scope_24 = {
    "Main/ MainSM1:Sitting:<1",
    scope_24_entries, 1
};

const MappingEntry scope_23_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Sitting_sat_1_Sitting_SM1, &scope_24, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Sitting_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L1_Sitting_SM1, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_Sitting_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L6_Sitting_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L8_Sitting_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L10_Sitting_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, &scope_10, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L12_Sitting_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, &scope_10, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13_Sitting_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14_Sitting_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_Sitting_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "Transition 1", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 11 }
};
const MappingScope scope_23 = {
    "Main/ MainSM1:Sitting:",
    scope_23_entries, 12
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Runned_Waiting_1_Runned_SM1, NULL, 1, 0 }
};
const MappingScope scope_22 = {
    "Main/ MainSM1:Runned:<1",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Runned_Waiting_1_Runned_SM1, &scope_22, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_Runned_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Runned_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L3_Runned_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L2_Runned_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L1_Runned_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7_Runned_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L12_Runned_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, &scope_10, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L13_Runned_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, &scope_10, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L16_Runned_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, NULL, 1, 9 }
};
const MappingScope scope_21 = {
    "Main/ MainSM1:Runned:",
    scope_21_entries, 10
};

const MappingEntry scope_20_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Count_Counter_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_Counter_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Counter_1_int32, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Counter_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Counter_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L18_Counter_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L47_Counter_1_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 6 }
};
const MappingScope scope_20 = {
    "Main/ MainSM1:Running:/pwlinear::Counter 1",
    scope_20_entries, 7
};

const MappingEntry scope_19_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Count_Counter_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_Counter_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L3_Counter_2_int32, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4_Counter_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Counter_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L18_Counter_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L47_Counter_2_int32, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 6 }
};
const MappingScope scope_19 = {
    "Main/ MainSM1:Running:/pwlinear::Counter 2",
    scope_19_entries, 7
};

const MappingEntry scope_18_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "isFinished", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.isFinished_MovingCycle_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Count_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L3_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8_MovingCycle_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L7_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L12_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L14_MovingCycle_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L15_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L16_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L17_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L18_MovingCycle_1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L19_MovingCycle_1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 12 }
};
const MappingScope scope_18 = {
    "Main/ MainSM1:Running:/MovingCycle 1",
    scope_18_entries, 13
};

const MappingEntry scope_17_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Running_Runned_1_Running_SM1, NULL, 1, 0 }
};
const MappingScope scope_17 = {
    "Main/ MainSM1:Running:<1",
    scope_17_entries, 1
};

const MappingEntry scope_16_entries[34] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Running_Runned_1_Running_SM1, &scope_17, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L15_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L47_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L48_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L46_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L44_Running_SM1, &_Type_kcg_uint16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L43_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L42", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L42_Running_SM1, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, &scope_2, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L40_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L39_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L38_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L37_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L13_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L17_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L20_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L21_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L24_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L26_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L25_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L11_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L9_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L53", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L53_Running_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, &scope_10, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L54_Running_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, &scope_10, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L5_Running_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L55_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L56_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L57_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L59_Running_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L60_Running_SM1, &_Type_kcg_uint16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L61_Running_SM1, &_Type_kcg_uint16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, NULL, 1, 30 },
    /* 31 */ { MAP_EXPANDED, "MovingCycle 1", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 31 },
    /* 32 */ { MAP_EXPANDED, "pwlinear::Counter 2", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 32 },
    /* 33 */ { MAP_EXPANDED, "pwlinear::Counter 1", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 33 }
};
const MappingScope scope_16 = {
    "Main/ MainSM1:Running:",
    scope_16_entries, 34
};

const MappingEntry scope_15_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Waiting_Running_2_Waiting_SM1, NULL, 1, 0 }
};
const MappingScope scope_15 = {
    "Main/ MainSM1:Waiting:<2",
    scope_15_entries, 1
};

const MappingEntry scope_14_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Waiting_Sitting_1_Waiting_SM1, NULL, 1, 0 }
};
const MappingScope scope_14 = {
    "Main/ MainSM1:Waiting:<1",
    scope_14_entries, 1
};

const MappingEntry scope_13_entries[9] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Waiting_Sitting_1_Waiting_SM1, &scope_14, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_12_entries[6], isActive_SSM_TR_SM1_SSM_TR_Waiting_Running_2_Waiting_SM1, &scope_15, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_Waiting_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L12_Waiting_SM1, &_Type_kcg_int32_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L13_Waiting_SM1, &_Type_T_ImageReference_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_uint16), (size_t)&outputs_ctx._L14_Waiting_SM1, &_Type_kcg_uint16_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L15_Waiting_SM1, &_Type_kcg_bool_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L20", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L20_Waiting_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, &scope_10, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L22_Waiting_SM1, &_Type_T_String_02_Utils, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, &scope_10, 1, 8 }
};
const MappingScope scope_13 = {
    "Main/ MainSM1:Waiting:",
    scope_13_entries, 9
};

const MappingEntry scope_12_entries[13] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Waiting:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Waiting_SM1, &scope_13, 1, 7 },
    /* 8 */ { MAP_STATE, "Running:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Running_SM1, &scope_16, 1, 8 },
    /* 9 */ { MAP_STATE, "Runned:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Runned_SM1, &scope_21, 1, 9 },
    /* 10 */ { MAP_STATE, "Sitting:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_Sitting_SM1, &scope_23, 1, 10 },
    /* 11 */ { MAP_STATE, "sat:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_sat_SM1, &scope_27, 1, 11 },
    /* 12 */ { MAP_STATE, "raising:", NULL, 0, 0, NULL, &scope_12_entries[0], isActive_SSM_ST_SM1_SSM_st_raising_SM1, &scope_29, 1, 12 }
};
const MappingScope scope_12 = {
    "Main/ MainSM1:",
    scope_12_entries, 13
};

const MappingEntry scope_11_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_11 = {
    "T_String_03",
    scope_11_entries, 1
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "T_String_02",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "T_String_01",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "T_String_33",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[3] = {
    /* 0 */ { MAP_FIELD, ".Emit2DF", NULL, sizeof(kcg_bool), offsetof(S_ToLabel_33, Emit2DF), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".string_size", NULL, sizeof(kcg_uint16), offsetof(S_ToLabel_33, string_size), &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".value", NULL, sizeof(T_String_33), offsetof(S_ToLabel_33, value), &_Type_T_String_33_Utils, NULL, NULL, &scope_8, 1, 2 }
};
const MappingScope scope_7 = {
    "S_ToLabel_33",
    scope_7_entries, 3
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_76, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "T_String_76",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_FIELD, ".Emit2DF", NULL, sizeof(kcg_bool), offsetof(S_ToLabel_76, Emit2DF), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".string_size", NULL, sizeof(kcg_uint16), offsetof(S_ToLabel_76, string_size), &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".value", NULL, sizeof(T_String_76), offsetof(S_ToLabel_76, value), &_Type_T_String_76_Utils, NULL, NULL, &scope_6, 1, 2 }
};
const MappingScope scope_5 = {
    "S_ToLabel_76",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "T_String_10",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[3] = {
    /* 0 */ { MAP_FIELD, ".Emit2DF", NULL, sizeof(kcg_bool), offsetof(S_ToLabel_10, Emit2DF), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".string_size", NULL, sizeof(kcg_uint16), offsetof(S_ToLabel_10, string_size), &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".value", NULL, sizeof(T_String_10), offsetof(S_ToLabel_10, value), &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 2 }
};
const MappingScope scope_3 = {
    "S_ToLabel_10",
    scope_3_entries, 3
};

const MappingEntry scope_2_entries[2] = {
    /* 0 */ { MAP_FIELD, ".Emit2DF", NULL, sizeof(kcg_bool), offsetof(T_ImageReference, Emit2DF), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".Reference", NULL, sizeof(kcg_uint16), offsetof(T_ImageReference, Reference), &_Type_kcg_uint16_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_2 = {
    "T_ImageReference",
    scope_2_entries, 2
};

const MappingEntry scope_1_entries[67] = {
    /* 0 */ { MAP_OUTPUT, "OutImageReference", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx.OutImageReference, &_Type_T_ImageReference_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "EnablePbSit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EnablePbSit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "EnablePbRaise", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.EnablePbRaise, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Out_Protocol_OutCMD", NULL, sizeof(S_ToLabel_10), (size_t)&outputs_ctx.Out_Protocol_OutCMD, &_Type_S_ToLabel_10_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "Out_Protocol_OutProtocol", NULL, sizeof(S_ToLabel_76), (size_t)&outputs_ctx.Out_Protocol_OutProtocol, &_Type_S_ToLabel_76_Utils, NULL, NULL, &scope_5, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "Out_Protocol_OutMD5", NULL, sizeof(S_ToLabel_33), (size_t)&outputs_ctx.Out_Protocol_OutMD5, &_Type_S_ToLabel_33_Utils, NULL, NULL, &scope_7, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "Protocolo", NULL, sizeof(T_String_76), (size_t)&outputs_ctx.Protocolo, &_Type_T_String_76_Utils, NULL, NULL, &scope_6, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "Comando", NULL, sizeof(T_String_10), (size_t)&outputs_ctx.Comando, &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "PulseWalk", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.PulseWalk, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "PulseSit", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.PulseSit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_OUTPUT, "PulseRaise", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.PulseRaise, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_OUTPUT, "changed", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.changed, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_INPUT, "walkStart", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.walkStart, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_INPUT, "walkSteps", NULL, sizeof(T_String_01), (size_t)&inputs_ctx.walkSteps, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 13 },
    /* 14 */ { MAP_INPUT, "walkMagnitude", NULL, sizeof(T_String_01), (size_t)&inputs_ctx.walkMagnitude, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 14 },
    /* 15 */ { MAP_INPUT, "sitStart", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.sitStart, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_INPUT, "raiseStart", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.raiseStart, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_INPUT, "StepsNotification", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.StepsNotification, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_INPUT, "MagnitudeNotification", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.MagnitudeNotification, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_INPUT, "ConfirmWalk", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.ConfirmWalk, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_INPUT, "ConfirmSit", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.ConfirmSit, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_INPUT, "ConfirmRaise", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.ConfirmRaise, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "Magnitude", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Magnitude, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "Steps", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.Steps, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "varDoneRunning", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.varDoneRunning, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "varDoneWaiting", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.varDoneWaiting, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "ImageReference", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx.ImageReference, &_Type_T_ImageReference_Utils, NULL, NULL, &scope_2, 1, 26 },
    /* 27 */ { MAP_LOCAL, "varDoneSitting", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.varDoneSitting, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "varDoneRising", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.varDoneRising, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "currentStatus", NULL, sizeof(T_String_02), (size_t)&outputs_ctx.currentStatus, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 29 },
    /* 30 */ { MAP_LOCAL, "currentCommand", NULL, sizeof(T_String_02), (size_t)&outputs_ctx.currentCommand, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L37", NULL, sizeof(T_ImageReference), (size_t)&outputs_ctx._L37, &_Type_T_ImageReference_Utils, NULL, NULL, &scope_2, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L43, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L44", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L44, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L45", NULL, sizeof(T_String_02), (size_t)&outputs_ctx._L45, &_Type_T_String_02_Utils, NULL, NULL, &scope_10, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L18", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L18, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L15, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L51, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L52, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L55, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L59, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L62", NULL, sizeof(S_ToLabel_76), (size_t)&outputs_ctx._L62, &_Type_S_ToLabel_76_Utils, NULL, NULL, &scope_5, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L63", NULL, sizeof(S_ToLabel_33), (size_t)&outputs_ctx._L63, &_Type_S_ToLabel_33_Utils, NULL, NULL, &scope_7, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L64", NULL, sizeof(S_ToLabel_10), (size_t)&outputs_ctx._L64, &_Type_S_ToLabel_10_Utils, NULL, NULL, &scope_3, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L78, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L79", NULL, sizeof(T_String_01), (size_t)&outputs_ctx._L79, &_Type_T_String_01_Utils, NULL, NULL, &scope_9, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L81, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L84, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L85", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L85, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L86", NULL, sizeof(T_String_03), (size_t)&outputs_ctx._L86, &_Type_T_String_03_Utils, NULL, NULL, &scope_11, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L87", NULL, sizeof(T_String_76), (size_t)&outputs_ctx._L87, &_Type_T_String_76_Utils, NULL, NULL, &scope_6, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L88", NULL, sizeof(T_String_10), (size_t)&outputs_ctx._L88, &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L89, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L90, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L91, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L98", NULL, sizeof(T_String_10), (size_t)&outputs_ctx._L98, &_Type_T_String_10_Utils, NULL, NULL, &scope_4, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L100, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L103", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L103, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L104, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L105, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L42, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L41, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_12, 1, 62 },
    /* 63 */ { MAP_EXPANDED, "Read_InputNumber 1", NULL, 0, 0, NULL, NULL, NULL, &scope_33, 1, 63 },
    /* 64 */ { MAP_EXPANDED, "Read_InputNumber 5", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 64 },
    /* 65 */ { MAP_EXPANDED, "Protocol 1", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 65 },
    /* 66 */ { MAP_EXPANDED, "DisplayView 1", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 66 }
};
const MappingScope scope_1 = {
    "Main/ Main",
    scope_1_entries, 67
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "Main", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
