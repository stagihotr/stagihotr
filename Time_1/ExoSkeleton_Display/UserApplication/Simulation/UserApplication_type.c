#include "UserApplication_type.h"

#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"

#include "kcg_types.h"

#include <SmuConfig.h>

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */
#define UNUSED(x) (void)(x)
#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** array_char_12 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_12VTable_defined
    extern struct SimTypeVTable *pSimarray_char_12VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_12VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_12VTable;
#endif

int array_char_12_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_12VTable != NULL
        && pSimarray_char_12VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_12VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 12, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 12, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_12_string(const char *str, char **endptr)
{
    static array_char_12 rTemp;
    return string_to_array_char_12(str, &rTemp, endptr);
}

int string_to_array_char_12(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_12VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_12VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 12, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 12, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_12_double_conversion_allowed()
{
    if (pSimarray_char_12VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_12VTable);
    }
    return 0;
}

int array_char_12_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_12VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_12VTable, nValue);
    }
    return 0;
}

int is_array_char_12_long_conversion_allowed()
{
    if (pSimarray_char_12VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_12VTable);
    }
    return 0;
}

int array_char_12_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_12VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_12VTable, nValue);
    }
    return 0;
}

void compare_array_char_12(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_12VTable != NULL
        && pSimarray_char_12VTable->m_version >= Scv612
        && pSimarray_char_12VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_12VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_12VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_12VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 12, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_12_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 12, pfnStrAppend, pStrObj); 
}

int init_array_char_12(void *pValue)
{
    size_t i;
    for (i = 0; i < 12; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_array_char_12(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_char_12(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_char_12((array_char_12*)pToValue, (array_char_12*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_char_12_Utils = {
    array_char_12_to_string,
    check_array_char_12_string,
    string_to_array_char_12,
    is_array_char_12_double_conversion_allowed,
    array_char_12_to_double,
    is_array_char_12_long_conversion_allowed,
    array_char_12_to_long,
    compare_array_char_12,
    get_array_char_12_signature,
    init_array_char_12,
    release_array_char_12,
    copy_array_char_12,
    sizeof(array_char_12)
};

/****************************************************************
 ** array_char_18 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_18VTable_defined
    extern struct SimTypeVTable *pSimarray_char_18VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_18VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_18VTable;
#endif

int array_char_18_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_18VTable != NULL
        && pSimarray_char_18VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_18VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 18, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 18, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_18_string(const char *str, char **endptr)
{
    static array_char_18 rTemp;
    return string_to_array_char_18(str, &rTemp, endptr);
}

int string_to_array_char_18(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_18VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_18VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 18, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 18, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_18_double_conversion_allowed()
{
    if (pSimarray_char_18VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_18VTable);
    }
    return 0;
}

int array_char_18_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_18VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_18VTable, nValue);
    }
    return 0;
}

int is_array_char_18_long_conversion_allowed()
{
    if (pSimarray_char_18VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_18VTable);
    }
    return 0;
}

int array_char_18_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_18VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_18VTable, nValue);
    }
    return 0;
}

void compare_array_char_18(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_18VTable != NULL
        && pSimarray_char_18VTable->m_version >= Scv612
        && pSimarray_char_18VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_18VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_18VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_18VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 18, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_18_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 18, pfnStrAppend, pStrObj); 
}

int init_array_char_18(void *pValue)
{
    size_t i;
    for (i = 0; i < 18; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_array_char_18(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_char_18(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_char_18((array_char_18*)pToValue, (array_char_18*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_char_18_Utils = {
    array_char_18_to_string,
    check_array_char_18_string,
    string_to_array_char_18,
    is_array_char_18_double_conversion_allowed,
    array_char_18_to_double,
    is_array_char_18_long_conversion_allowed,
    array_char_18_to_long,
    compare_array_char_18,
    get_array_char_18_signature,
    init_array_char_18,
    release_array_char_18,
    copy_array_char_18,
    sizeof(array_char_18)
};

/****************************************************************
 ** array_char_24 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_24VTable_defined
    extern struct SimTypeVTable *pSimarray_char_24VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_24VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_24VTable;
#endif

int array_char_24_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_24VTable != NULL
        && pSimarray_char_24VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_24VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 24, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 24, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_24_string(const char *str, char **endptr)
{
    static array_char_24 rTemp;
    return string_to_array_char_24(str, &rTemp, endptr);
}

int string_to_array_char_24(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_24VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_24VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 24, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 24, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_24_double_conversion_allowed()
{
    if (pSimarray_char_24VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_24VTable);
    }
    return 0;
}

int array_char_24_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_24VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_24VTable, nValue);
    }
    return 0;
}

int is_array_char_24_long_conversion_allowed()
{
    if (pSimarray_char_24VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_24VTable);
    }
    return 0;
}

int array_char_24_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_24VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_24VTable, nValue);
    }
    return 0;
}

void compare_array_char_24(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_24VTable != NULL
        && pSimarray_char_24VTable->m_version >= Scv612
        && pSimarray_char_24VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_24VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_24VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_24VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 24, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_24_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 24, pfnStrAppend, pStrObj); 
}

int init_array_char_24(void *pValue)
{
    size_t i;
    for (i = 0; i < 24; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_array_char_24(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_char_24(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_char_24((array_char_24*)pToValue, (array_char_24*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_char_24_Utils = {
    array_char_24_to_string,
    check_array_char_24_string,
    string_to_array_char_24,
    is_array_char_24_double_conversion_allowed,
    array_char_24_to_double,
    is_array_char_24_long_conversion_allowed,
    array_char_24_to_long,
    compare_array_char_24,
    get_array_char_24_signature,
    init_array_char_24,
    release_array_char_24,
    copy_array_char_24,
    sizeof(array_char_24)
};

/****************************************************************
 ** array_char_7 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_7VTable_defined
    extern struct SimTypeVTable *pSimarray_char_7VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_7VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_7VTable;
#endif

int array_char_7_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_7VTable != NULL
        && pSimarray_char_7VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_7VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 7, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 7, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_7_string(const char *str, char **endptr)
{
    static array_char_7 rTemp;
    return string_to_array_char_7(str, &rTemp, endptr);
}

int string_to_array_char_7(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_7VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_7VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 7, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 7, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_7_double_conversion_allowed()
{
    if (pSimarray_char_7VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_7VTable);
    }
    return 0;
}

int array_char_7_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_7VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_7VTable, nValue);
    }
    return 0;
}

int is_array_char_7_long_conversion_allowed()
{
    if (pSimarray_char_7VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_7VTable);
    }
    return 0;
}

int array_char_7_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_7VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_7VTable, nValue);
    }
    return 0;
}

void compare_array_char_7(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_7VTable != NULL
        && pSimarray_char_7VTable->m_version >= Scv612
        && pSimarray_char_7VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_7VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_7VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_7VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 7, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_7_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 7, pfnStrAppend, pStrObj); 
}

int init_array_char_7(void *pValue)
{
    size_t i;
    for (i = 0; i < 7; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_array_char_7(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_char_7(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_char_7((array_char_7*)pToValue, (array_char_7*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_char_7_Utils = {
    array_char_7_to_string,
    check_array_char_7_string,
    string_to_array_char_7,
    is_array_char_7_double_conversion_allowed,
    array_char_7_to_double,
    is_array_char_7_long_conversion_allowed,
    array_char_7_to_long,
    compare_array_char_7,
    get_array_char_7_signature,
    init_array_char_7,
    release_array_char_7,
    copy_array_char_7,
    sizeof(array_char_7)
};

/****************************************************************
 ** array_char_75 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_75VTable_defined
    extern struct SimTypeVTable *pSimarray_char_75VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_75VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_75VTable;
#endif

int array_char_75_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_75VTable != NULL
        && pSimarray_char_75VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_75VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 75, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 75, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_75_string(const char *str, char **endptr)
{
    static array_char_75 rTemp;
    return string_to_array_char_75(str, &rTemp, endptr);
}

int string_to_array_char_75(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_75VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_75VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 75, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 75, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_75_double_conversion_allowed()
{
    if (pSimarray_char_75VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_75VTable);
    }
    return 0;
}

int array_char_75_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_75VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_75VTable, nValue);
    }
    return 0;
}

int is_array_char_75_long_conversion_allowed()
{
    if (pSimarray_char_75VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_75VTable);
    }
    return 0;
}

int array_char_75_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_75VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_75VTable, nValue);
    }
    return 0;
}

void compare_array_char_75(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_75VTable != NULL
        && pSimarray_char_75VTable->m_version >= Scv612
        && pSimarray_char_75VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_75VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_75VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_75VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 75, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_75_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 75, pfnStrAppend, pStrObj); 
}

int init_array_char_75(void *pValue)
{
    size_t i;
    for (i = 0; i < 75; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_array_char_75(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_char_75(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_char_75((array_char_75*)pToValue, (array_char_75*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_char_75_Utils = {
    array_char_75_to_string,
    check_array_char_75_string,
    string_to_array_char_75,
    is_array_char_75_double_conversion_allowed,
    array_char_75_to_double,
    is_array_char_75_long_conversion_allowed,
    array_char_75_to_long,
    compare_array_char_75,
    get_array_char_75_signature,
    init_array_char_75,
    release_array_char_75,
    copy_array_char_75,
    sizeof(array_char_75)
};

/****************************************************************
 ** array_char_9 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_9VTable_defined
    extern struct SimTypeVTable *pSimarray_char_9VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_9VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_9VTable;
#endif

int array_char_9_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_9VTable != NULL
        && pSimarray_char_9VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_9VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 9, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 9, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_9_string(const char *str, char **endptr)
{
    static array_char_9 rTemp;
    return string_to_array_char_9(str, &rTemp, endptr);
}

int string_to_array_char_9(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_9VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_9VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 9, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 9, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_9_double_conversion_allowed()
{
    if (pSimarray_char_9VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_9VTable);
    }
    return 0;
}

int array_char_9_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_9VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_9VTable, nValue);
    }
    return 0;
}

int is_array_char_9_long_conversion_allowed()
{
    if (pSimarray_char_9VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_9VTable);
    }
    return 0;
}

int array_char_9_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_9VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_9VTable, nValue);
    }
    return 0;
}

void compare_array_char_9(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_9VTable != NULL
        && pSimarray_char_9VTable->m_version >= Scv612
        && pSimarray_char_9VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_9VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_9VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_9VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 9, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_9_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 9, pfnStrAppend, pStrObj); 
}

int init_array_char_9(void *pValue)
{
    size_t i;
    for (i = 0; i < 9; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_array_char_9(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_array_char_9(void *pToValue, const void *pFromValue)
{
    kcg_copy_array_char_9((array_char_9*)pToValue, (array_char_9*)pFromValue);
    return 1;
}

SimTypeUtils _Type_array_char_9_Utils = {
    array_char_9_to_string,
    check_array_char_9_string,
    string_to_array_char_9,
    is_array_char_9_double_conversion_allowed,
    array_char_9_to_double,
    is_array_char_9_long_conversion_allowed,
    array_char_9_to_long,
    compare_array_char_9,
    get_array_char_9_signature,
    init_array_char_9,
    release_array_char_9,
    copy_array_char_9,
    sizeof(array_char_9)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int init_kcg_bool(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int release_kcg_bool(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_bool(void *pToValue, const void *pFromValue)
{
    *((kcg_bool*)pToValue) = *((kcg_bool*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    init_kcg_bool,
    release_kcg_bool,
    copy_kcg_bool,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int init_kcg_char(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int release_kcg_char(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_char(void *pToValue, const void *pFromValue)
{
    *((kcg_char*)pToValue) = *((kcg_char*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    init_kcg_char,
    release_kcg_char,
    copy_kcg_char,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, &rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceFloat;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceFloat
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int init_kcg_float32(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

int release_kcg_float32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float32(void *pToValue, const void *pFromValue)
{
    *((kcg_float32*)pToValue) = *((kcg_float32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    init_kcg_float32,
    release_kcg_float32,
    copy_kcg_float32,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, &rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int init_kcg_float64(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

int release_kcg_float64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float64(void *pToValue, const void *pFromValue)
{
    *((kcg_float64*)pToValue) = *((kcg_float64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    init_kcg_float64,
    release_kcg_float64,
    copy_kcg_float64,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, &rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int init_kcg_int16(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

int release_kcg_int16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int16(void *pToValue, const void *pFromValue)
{
    *((kcg_int16*)pToValue) = *((kcg_int16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    init_kcg_int16,
    release_kcg_int16,
    copy_kcg_int16,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, &rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int init_kcg_int32(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

int release_kcg_int32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int32(void *pToValue, const void *pFromValue)
{
    *((kcg_int32*)pToValue) = *((kcg_int32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    init_kcg_int32,
    release_kcg_int32,
    copy_kcg_int32,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, &rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int init_kcg_int64(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

int release_kcg_int64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int64(void *pToValue, const void *pFromValue)
{
    *((kcg_int64*)pToValue) = *((kcg_int64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    init_kcg_int64,
    release_kcg_int64,
    copy_kcg_int64,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, &rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int init_kcg_int8(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

int release_kcg_int8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int8(void *pToValue, const void *pFromValue)
{
    *((kcg_int8*)pToValue) = *((kcg_int8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    init_kcg_int8,
    release_kcg_int8,
    copy_kcg_int8,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, &rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int init_kcg_size(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

int release_kcg_size(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_size(void *pToValue, const void *pFromValue)
{
    *((kcg_size*)pToValue) = *((kcg_size*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    init_kcg_size,
    release_kcg_size,
    copy_kcg_size,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, &rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int init_kcg_uint16(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

int release_kcg_uint16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint16(void *pToValue, const void *pFromValue)
{
    *((kcg_uint16*)pToValue) = *((kcg_uint16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    init_kcg_uint16,
    release_kcg_uint16,
    copy_kcg_uint16,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, &rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int init_kcg_uint32(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

int release_kcg_uint32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint32(void *pToValue, const void *pFromValue)
{
    *((kcg_uint32*)pToValue) = *((kcg_uint32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    init_kcg_uint32,
    release_kcg_uint32,
    copy_kcg_uint32,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, &rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int init_kcg_uint64(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

int release_kcg_uint64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint64(void *pToValue, const void *pFromValue)
{
    *((kcg_uint64*)pToValue) = *((kcg_uint64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    init_kcg_uint64,
    release_kcg_uint64,
    copy_kcg_uint64,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, &rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int init_kcg_uint8(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

int release_kcg_uint8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint8(void *pToValue, const void *pFromValue)
{
    *((kcg_uint8*)pToValue) = *((kcg_uint8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    init_kcg_uint8,
    release_kcg_uint8,
    copy_kcg_uint8,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** S_ToLabel_10 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimS_ToLabel_10VTable_defined
    extern struct SimTypeVTable *pSimS_ToLabel_10VTable;
  #else 
    struct SimTypeVTable *pSimS_ToLabel_10VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimS_ToLabel_10VTable;
#endif

static SimFieldUtils S_ToLabel_10_fields[] = {
    {"Emit2DF", offsetof(S_ToLabel_10,Emit2DF), &_Type_kcg_bool_Utils},
    {"string_size", offsetof(S_ToLabel_10,string_size), &_Type_kcg_uint16_Utils},
    {"value", offsetof(S_ToLabel_10,value), &_Type_T_String_10_Utils},
};

int S_ToLabel_10_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimS_ToLabel_10VTable != NULL
        && pSimS_ToLabel_10VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimS_ToLabel_10VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, S_ToLabel_10_fields, 3, pfnStrAppend, pStrObj);
}

int check_S_ToLabel_10_string(const char *str, char **endptr)
{
    static S_ToLabel_10 rTemp;
    return string_to_S_ToLabel_10(str, &rTemp, endptr);
}

int string_to_S_ToLabel_10(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimS_ToLabel_10VTable != NULL) {
        nRet = string_to_VTable(str, pSimS_ToLabel_10VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, S_ToLabel_10_fields, 3, endptr);
    }
    return nRet;
}

int is_S_ToLabel_10_double_conversion_allowed()
{
    if (pSimS_ToLabel_10VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimS_ToLabel_10VTable);
    }
    return 0;
}

int S_ToLabel_10_to_double(const void *pValue, double *nValue)
{
    if (pSimS_ToLabel_10VTable != NULL) {
        return VTable_to_double(pValue, pSimS_ToLabel_10VTable, nValue);
    }
    return 0;
}

int is_S_ToLabel_10_long_conversion_allowed()
{
    if (pSimS_ToLabel_10VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimS_ToLabel_10VTable);
    }
    return 0;
}

int S_ToLabel_10_to_long(const void *pValue, long *nValue)
{
    if (pSimS_ToLabel_10VTable != NULL) {
        return VTable_to_long(pValue, pSimS_ToLabel_10VTable, nValue);
    }
    return 0;
}

void compare_S_ToLabel_10(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimS_ToLabel_10VTable != NULL
        && pSimS_ToLabel_10VTable->m_version >= Scv612
        && pSimS_ToLabel_10VTable->m_pfnCompare != NULL) {
        if (pSimS_ToLabel_10VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimS_ToLabel_10VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimS_ToLabel_10VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, S_ToLabel_10_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_S_ToLabel_10_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(S_ToLabel_10_fields, 3, pfnStrAppend, pStrObj);
}

int init_S_ToLabel_10(void *pValue)
{
    init_kcg_bool(&(((S_ToLabel_10*)pValue)->Emit2DF));
    init_kcg_uint16(&(((S_ToLabel_10*)pValue)->string_size));
    init_T_String_10(&(((S_ToLabel_10*)pValue)->value));
    return 1;
}

int release_S_ToLabel_10(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_S_ToLabel_10(void *pToValue, const void *pFromValue)
{
    kcg_copy_S_ToLabel_10((S_ToLabel_10*)pToValue, (S_ToLabel_10*)pFromValue);
    return 1;
}

SimTypeUtils _Type_S_ToLabel_10_Utils = {
    S_ToLabel_10_to_string,
    check_S_ToLabel_10_string,
    string_to_S_ToLabel_10,
    is_S_ToLabel_10_double_conversion_allowed,
    S_ToLabel_10_to_double,
    is_S_ToLabel_10_long_conversion_allowed,
    S_ToLabel_10_to_long,
    compare_S_ToLabel_10,
    get_S_ToLabel_10_signature,
    init_S_ToLabel_10,
    release_S_ToLabel_10,
    copy_S_ToLabel_10,
    sizeof(S_ToLabel_10)
};

/****************************************************************
 ** S_ToLabel_33 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimS_ToLabel_33VTable_defined
    extern struct SimTypeVTable *pSimS_ToLabel_33VTable;
  #else 
    struct SimTypeVTable *pSimS_ToLabel_33VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimS_ToLabel_33VTable;
#endif

static SimFieldUtils S_ToLabel_33_fields[] = {
    {"Emit2DF", offsetof(S_ToLabel_33,Emit2DF), &_Type_kcg_bool_Utils},
    {"string_size", offsetof(S_ToLabel_33,string_size), &_Type_kcg_uint16_Utils},
    {"value", offsetof(S_ToLabel_33,value), &_Type_T_String_33_Utils},
};

int S_ToLabel_33_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimS_ToLabel_33VTable != NULL
        && pSimS_ToLabel_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimS_ToLabel_33VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, S_ToLabel_33_fields, 3, pfnStrAppend, pStrObj);
}

int check_S_ToLabel_33_string(const char *str, char **endptr)
{
    static S_ToLabel_33 rTemp;
    return string_to_S_ToLabel_33(str, &rTemp, endptr);
}

int string_to_S_ToLabel_33(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimS_ToLabel_33VTable != NULL) {
        nRet = string_to_VTable(str, pSimS_ToLabel_33VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, S_ToLabel_33_fields, 3, endptr);
    }
    return nRet;
}

int is_S_ToLabel_33_double_conversion_allowed()
{
    if (pSimS_ToLabel_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimS_ToLabel_33VTable);
    }
    return 0;
}

int S_ToLabel_33_to_double(const void *pValue, double *nValue)
{
    if (pSimS_ToLabel_33VTable != NULL) {
        return VTable_to_double(pValue, pSimS_ToLabel_33VTable, nValue);
    }
    return 0;
}

int is_S_ToLabel_33_long_conversion_allowed()
{
    if (pSimS_ToLabel_33VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimS_ToLabel_33VTable);
    }
    return 0;
}

int S_ToLabel_33_to_long(const void *pValue, long *nValue)
{
    if (pSimS_ToLabel_33VTable != NULL) {
        return VTable_to_long(pValue, pSimS_ToLabel_33VTable, nValue);
    }
    return 0;
}

void compare_S_ToLabel_33(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimS_ToLabel_33VTable != NULL
        && pSimS_ToLabel_33VTable->m_version >= Scv612
        && pSimS_ToLabel_33VTable->m_pfnCompare != NULL) {
        if (pSimS_ToLabel_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimS_ToLabel_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimS_ToLabel_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, S_ToLabel_33_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_S_ToLabel_33_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(S_ToLabel_33_fields, 3, pfnStrAppend, pStrObj);
}

int init_S_ToLabel_33(void *pValue)
{
    init_kcg_bool(&(((S_ToLabel_33*)pValue)->Emit2DF));
    init_kcg_uint16(&(((S_ToLabel_33*)pValue)->string_size));
    init_T_String_33(&(((S_ToLabel_33*)pValue)->value));
    return 1;
}

int release_S_ToLabel_33(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_S_ToLabel_33(void *pToValue, const void *pFromValue)
{
    kcg_copy_S_ToLabel_33((S_ToLabel_33*)pToValue, (S_ToLabel_33*)pFromValue);
    return 1;
}

SimTypeUtils _Type_S_ToLabel_33_Utils = {
    S_ToLabel_33_to_string,
    check_S_ToLabel_33_string,
    string_to_S_ToLabel_33,
    is_S_ToLabel_33_double_conversion_allowed,
    S_ToLabel_33_to_double,
    is_S_ToLabel_33_long_conversion_allowed,
    S_ToLabel_33_to_long,
    compare_S_ToLabel_33,
    get_S_ToLabel_33_signature,
    init_S_ToLabel_33,
    release_S_ToLabel_33,
    copy_S_ToLabel_33,
    sizeof(S_ToLabel_33)
};

/****************************************************************
 ** S_ToLabel_76 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimS_ToLabel_76VTable_defined
    extern struct SimTypeVTable *pSimS_ToLabel_76VTable;
  #else 
    struct SimTypeVTable *pSimS_ToLabel_76VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimS_ToLabel_76VTable;
#endif

static SimFieldUtils S_ToLabel_76_fields[] = {
    {"Emit2DF", offsetof(S_ToLabel_76,Emit2DF), &_Type_kcg_bool_Utils},
    {"string_size", offsetof(S_ToLabel_76,string_size), &_Type_kcg_uint16_Utils},
    {"value", offsetof(S_ToLabel_76,value), &_Type_T_String_76_Utils},
};

int S_ToLabel_76_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimS_ToLabel_76VTable != NULL
        && pSimS_ToLabel_76VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimS_ToLabel_76VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, S_ToLabel_76_fields, 3, pfnStrAppend, pStrObj);
}

int check_S_ToLabel_76_string(const char *str, char **endptr)
{
    static S_ToLabel_76 rTemp;
    return string_to_S_ToLabel_76(str, &rTemp, endptr);
}

int string_to_S_ToLabel_76(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimS_ToLabel_76VTable != NULL) {
        nRet = string_to_VTable(str, pSimS_ToLabel_76VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, S_ToLabel_76_fields, 3, endptr);
    }
    return nRet;
}

int is_S_ToLabel_76_double_conversion_allowed()
{
    if (pSimS_ToLabel_76VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimS_ToLabel_76VTable);
    }
    return 0;
}

int S_ToLabel_76_to_double(const void *pValue, double *nValue)
{
    if (pSimS_ToLabel_76VTable != NULL) {
        return VTable_to_double(pValue, pSimS_ToLabel_76VTable, nValue);
    }
    return 0;
}

int is_S_ToLabel_76_long_conversion_allowed()
{
    if (pSimS_ToLabel_76VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimS_ToLabel_76VTable);
    }
    return 0;
}

int S_ToLabel_76_to_long(const void *pValue, long *nValue)
{
    if (pSimS_ToLabel_76VTable != NULL) {
        return VTable_to_long(pValue, pSimS_ToLabel_76VTable, nValue);
    }
    return 0;
}

void compare_S_ToLabel_76(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimS_ToLabel_76VTable != NULL
        && pSimS_ToLabel_76VTable->m_version >= Scv612
        && pSimS_ToLabel_76VTable->m_pfnCompare != NULL) {
        if (pSimS_ToLabel_76VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimS_ToLabel_76VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimS_ToLabel_76VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, S_ToLabel_76_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_S_ToLabel_76_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(S_ToLabel_76_fields, 3, pfnStrAppend, pStrObj);
}

int init_S_ToLabel_76(void *pValue)
{
    init_kcg_bool(&(((S_ToLabel_76*)pValue)->Emit2DF));
    init_kcg_uint16(&(((S_ToLabel_76*)pValue)->string_size));
    init_T_String_76(&(((S_ToLabel_76*)pValue)->value));
    return 1;
}

int release_S_ToLabel_76(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_S_ToLabel_76(void *pToValue, const void *pFromValue)
{
    kcg_copy_S_ToLabel_76((S_ToLabel_76*)pToValue, (S_ToLabel_76*)pFromValue);
    return 1;
}

SimTypeUtils _Type_S_ToLabel_76_Utils = {
    S_ToLabel_76_to_string,
    check_S_ToLabel_76_string,
    string_to_S_ToLabel_76,
    is_S_ToLabel_76_double_conversion_allowed,
    S_ToLabel_76_to_double,
    is_S_ToLabel_76_long_conversion_allowed,
    S_ToLabel_76_to_long,
    compare_S_ToLabel_76,
    get_S_ToLabel_76_signature,
    init_S_ToLabel_76,
    release_S_ToLabel_76,
    copy_S_ToLabel_76,
    sizeof(S_ToLabel_76)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "Waiting", SSM_st_Waiting_SM1},
    { "Waiting", SSM_st_Waiting_SM1},
    { "Running", SSM_st_Running_SM1},
    { "Running", SSM_st_Running_SM1},
    { "Runned", SSM_st_Runned_SM1},
    { "Runned", SSM_st_Runned_SM1},
    { "Sitting", SSM_st_Sitting_SM1},
    { "Sitting", SSM_st_Sitting_SM1},
    { "sat", SSM_st_sat_SM1},
    { "sat", SSM_st_sat_SM1},
    { "raising", SSM_st_raising_SM1},
    { "raising", SSM_st_raising_SM1},
};
const int SSM_ST_SM1_nb_values = 12;

int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, &rTemp, endptr);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = (SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM1(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_Waiting_SM1;
    return 1;
}

int release_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM1*)pToValue) = *((SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_conversion_allowed,
    SSM_ST_SM1_to_long,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    init_SSM_ST_SM1,
    release_SSM_ST_SM1,
    copy_SSM_ST_SM1,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_Waiting_Sitting_1_Waiting_SM1", SSM_TR_Waiting_Sitting_1_Waiting_SM1},
    { "SSM_TR_Waiting_Sitting_1_Waiting_SM1", SSM_TR_Waiting_Sitting_1_Waiting_SM1},
    { "SSM_TR_Waiting_Running_2_Waiting_SM1", SSM_TR_Waiting_Running_2_Waiting_SM1},
    { "SSM_TR_Waiting_Running_2_Waiting_SM1", SSM_TR_Waiting_Running_2_Waiting_SM1},
    { "SSM_TR_Running_Runned_1_Running_SM1", SSM_TR_Running_Runned_1_Running_SM1},
    { "SSM_TR_Running_Runned_1_Running_SM1", SSM_TR_Running_Runned_1_Running_SM1},
    { "SSM_TR_Runned_Waiting_1_Runned_SM1", SSM_TR_Runned_Waiting_1_Runned_SM1},
    { "SSM_TR_Runned_Waiting_1_Runned_SM1", SSM_TR_Runned_Waiting_1_Runned_SM1},
    { "SSM_TR_Sitting_sat_1_Sitting_SM1", SSM_TR_Sitting_sat_1_Sitting_SM1},
    { "SSM_TR_Sitting_sat_1_Sitting_SM1", SSM_TR_Sitting_sat_1_Sitting_SM1},
    { "SSM_TR_sat_raising_1_sat_SM1", SSM_TR_sat_raising_1_sat_SM1},
    { "SSM_TR_sat_raising_1_sat_SM1", SSM_TR_sat_raising_1_sat_SM1},
    { "SSM_TR_raising_Waiting_1_raising_SM1", SSM_TR_raising_Waiting_1_raising_SM1},
    { "SSM_TR_raising_Waiting_1_raising_SM1", SSM_TR_raising_Waiting_1_raising_SM1},
};
const int SSM_TR_SM1_nb_values = 16;

int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, &rTemp, endptr);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = (SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM1(void *pValue)
{
    *(SSM_TR_SM1*)pValue = SSM_TR_no_trans_SM1;
    return 1;
}

int release_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM1*)pToValue) = *((SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_conversion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    init_SSM_TR_SM1,
    release_SSM_TR_SM1,
    copy_SSM_TR_SM1,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** T_ImageReference 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_ImageReferenceVTable_defined
    extern struct SimTypeVTable *pSimT_ImageReferenceVTable;
  #else 
    struct SimTypeVTable *pSimT_ImageReferenceVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_ImageReferenceVTable;
#endif

static SimFieldUtils T_ImageReference_fields[] = {
    {"Emit2DF", offsetof(T_ImageReference,Emit2DF), &_Type_kcg_bool_Utils},
    {"Reference", offsetof(T_ImageReference,Reference), &_Type_kcg_uint16_Utils},
};

int T_ImageReference_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_ImageReferenceVTable != NULL
        && pSimT_ImageReferenceVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_ImageReferenceVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, T_ImageReference_fields, 2, pfnStrAppend, pStrObj);
}

int check_T_ImageReference_string(const char *str, char **endptr)
{
    static T_ImageReference rTemp;
    return string_to_T_ImageReference(str, &rTemp, endptr);
}

int string_to_T_ImageReference(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_ImageReferenceVTable != NULL) {
        nRet = string_to_VTable(str, pSimT_ImageReferenceVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, T_ImageReference_fields, 2, endptr);
    }
    return nRet;
}

int is_T_ImageReference_double_conversion_allowed()
{
    if (pSimT_ImageReferenceVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_ImageReferenceVTable);
    }
    return 0;
}

int T_ImageReference_to_double(const void *pValue, double *nValue)
{
    if (pSimT_ImageReferenceVTable != NULL) {
        return VTable_to_double(pValue, pSimT_ImageReferenceVTable, nValue);
    }
    return 0;
}

int is_T_ImageReference_long_conversion_allowed()
{
    if (pSimT_ImageReferenceVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_ImageReferenceVTable);
    }
    return 0;
}

int T_ImageReference_to_long(const void *pValue, long *nValue)
{
    if (pSimT_ImageReferenceVTable != NULL) {
        return VTable_to_long(pValue, pSimT_ImageReferenceVTable, nValue);
    }
    return 0;
}

void compare_T_ImageReference(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_ImageReferenceVTable != NULL
        && pSimT_ImageReferenceVTable->m_version >= Scv612
        && pSimT_ImageReferenceVTable->m_pfnCompare != NULL) {
        if (pSimT_ImageReferenceVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_ImageReferenceVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_ImageReferenceVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, T_ImageReference_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_ImageReference_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(T_ImageReference_fields, 2, pfnStrAppend, pStrObj);
}

int init_T_ImageReference(void *pValue)
{
    init_kcg_bool(&(((T_ImageReference*)pValue)->Emit2DF));
    init_kcg_uint16(&(((T_ImageReference*)pValue)->Reference));
    return 1;
}

int release_T_ImageReference(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_ImageReference(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_ImageReference((T_ImageReference*)pToValue, (T_ImageReference*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_ImageReference_Utils = {
    T_ImageReference_to_string,
    check_T_ImageReference_string,
    string_to_T_ImageReference,
    is_T_ImageReference_double_conversion_allowed,
    T_ImageReference_to_double,
    is_T_ImageReference_long_conversion_allowed,
    T_ImageReference_to_long,
    compare_T_ImageReference,
    get_T_ImageReference_signature,
    init_T_ImageReference,
    release_T_ImageReference,
    copy_T_ImageReference,
    sizeof(T_ImageReference)
};

/****************************************************************
 ** T_String_01 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_01VTable_defined
    extern struct SimTypeVTable *pSimT_String_01VTable;
  #else 
    struct SimTypeVTable *pSimT_String_01VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_01VTable;
#endif

int T_String_01_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_01VTable != NULL
        && pSimT_String_01VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_01VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 1, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 1, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_01_string(const char *str, char **endptr)
{
    static T_String_01 rTemp;
    return string_to_T_String_01(str, &rTemp, endptr);
}

int string_to_T_String_01(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_01VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_01VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 1, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 1, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_01_double_conversion_allowed()
{
    if (pSimT_String_01VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_01VTable);
    }
    return 0;
}

int T_String_01_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_01VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_01VTable, nValue);
    }
    return 0;
}

int is_T_String_01_long_conversion_allowed()
{
    if (pSimT_String_01VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_01VTable);
    }
    return 0;
}

int T_String_01_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_01VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_01VTable, nValue);
    }
    return 0;
}

void compare_T_String_01(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_01VTable != NULL
        && pSimT_String_01VTable->m_version >= Scv612
        && pSimT_String_01VTable->m_pfnCompare != NULL) {
        if (pSimT_String_01VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_01VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_01VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 1, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_01_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 1, pfnStrAppend, pStrObj); 
}

int init_T_String_01(void *pValue)
{
    size_t i;
    for (i = 0; i < 1; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_01(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_01(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_01((T_String_01*)pToValue, (T_String_01*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_01_Utils = {
    T_String_01_to_string,
    check_T_String_01_string,
    string_to_T_String_01,
    is_T_String_01_double_conversion_allowed,
    T_String_01_to_double,
    is_T_String_01_long_conversion_allowed,
    T_String_01_to_long,
    compare_T_String_01,
    get_T_String_01_signature,
    init_T_String_01,
    release_T_String_01,
    copy_T_String_01,
    sizeof(T_String_01)
};

/****************************************************************
 ** T_String_02 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_02VTable_defined
    extern struct SimTypeVTable *pSimT_String_02VTable;
  #else 
    struct SimTypeVTable *pSimT_String_02VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_02VTable;
#endif

int T_String_02_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_02VTable != NULL
        && pSimT_String_02VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_02VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 2, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 2, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_02_string(const char *str, char **endptr)
{
    static T_String_02 rTemp;
    return string_to_T_String_02(str, &rTemp, endptr);
}

int string_to_T_String_02(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_02VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_02VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 2, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 2, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_02_double_conversion_allowed()
{
    if (pSimT_String_02VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_02VTable);
    }
    return 0;
}

int T_String_02_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_02VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_02VTable, nValue);
    }
    return 0;
}

int is_T_String_02_long_conversion_allowed()
{
    if (pSimT_String_02VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_02VTable);
    }
    return 0;
}

int T_String_02_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_02VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_02VTable, nValue);
    }
    return 0;
}

void compare_T_String_02(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_02VTable != NULL
        && pSimT_String_02VTable->m_version >= Scv612
        && pSimT_String_02VTable->m_pfnCompare != NULL) {
        if (pSimT_String_02VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_02VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_02VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 2, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_02_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 2, pfnStrAppend, pStrObj); 
}

int init_T_String_02(void *pValue)
{
    size_t i;
    for (i = 0; i < 2; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_02(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_02(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_02((T_String_02*)pToValue, (T_String_02*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_02_Utils = {
    T_String_02_to_string,
    check_T_String_02_string,
    string_to_T_String_02,
    is_T_String_02_double_conversion_allowed,
    T_String_02_to_double,
    is_T_String_02_long_conversion_allowed,
    T_String_02_to_long,
    compare_T_String_02,
    get_T_String_02_signature,
    init_T_String_02,
    release_T_String_02,
    copy_T_String_02,
    sizeof(T_String_02)
};

/****************************************************************
 ** T_String_03 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_03VTable_defined
    extern struct SimTypeVTable *pSimT_String_03VTable;
  #else 
    struct SimTypeVTable *pSimT_String_03VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_03VTable;
#endif

int T_String_03_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_03VTable != NULL
        && pSimT_String_03VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_03VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 3, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 3, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_03_string(const char *str, char **endptr)
{
    static T_String_03 rTemp;
    return string_to_T_String_03(str, &rTemp, endptr);
}

int string_to_T_String_03(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_03VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_03VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 3, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 3, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_03_double_conversion_allowed()
{
    if (pSimT_String_03VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_03VTable);
    }
    return 0;
}

int T_String_03_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_03VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_03VTable, nValue);
    }
    return 0;
}

int is_T_String_03_long_conversion_allowed()
{
    if (pSimT_String_03VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_03VTable);
    }
    return 0;
}

int T_String_03_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_03VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_03VTable, nValue);
    }
    return 0;
}

void compare_T_String_03(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_03VTable != NULL
        && pSimT_String_03VTable->m_version >= Scv612
        && pSimT_String_03VTable->m_pfnCompare != NULL) {
        if (pSimT_String_03VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_03VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_03VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 3, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_03_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 3, pfnStrAppend, pStrObj); 
}

int init_T_String_03(void *pValue)
{
    size_t i;
    for (i = 0; i < 3; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_03(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_03(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_03((T_String_03*)pToValue, (T_String_03*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_03_Utils = {
    T_String_03_to_string,
    check_T_String_03_string,
    string_to_T_String_03,
    is_T_String_03_double_conversion_allowed,
    T_String_03_to_double,
    is_T_String_03_long_conversion_allowed,
    T_String_03_to_long,
    compare_T_String_03,
    get_T_String_03_signature,
    init_T_String_03,
    release_T_String_03,
    copy_T_String_03,
    sizeof(T_String_03)
};

/****************************************************************
 ** T_String_06 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_06VTable_defined
    extern struct SimTypeVTable *pSimT_String_06VTable;
  #else 
    struct SimTypeVTable *pSimT_String_06VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_06VTable;
#endif

int T_String_06_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_06VTable != NULL
        && pSimT_String_06VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_06VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 6, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 6, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_06_string(const char *str, char **endptr)
{
    static T_String_06 rTemp;
    return string_to_T_String_06(str, &rTemp, endptr);
}

int string_to_T_String_06(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_06VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_06VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 6, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 6, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_06_double_conversion_allowed()
{
    if (pSimT_String_06VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_06VTable);
    }
    return 0;
}

int T_String_06_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_06VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_06VTable, nValue);
    }
    return 0;
}

int is_T_String_06_long_conversion_allowed()
{
    if (pSimT_String_06VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_06VTable);
    }
    return 0;
}

int T_String_06_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_06VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_06VTable, nValue);
    }
    return 0;
}

void compare_T_String_06(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_06VTable != NULL
        && pSimT_String_06VTable->m_version >= Scv612
        && pSimT_String_06VTable->m_pfnCompare != NULL) {
        if (pSimT_String_06VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_06VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_06VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 6, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_06_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 6, pfnStrAppend, pStrObj); 
}

int init_T_String_06(void *pValue)
{
    size_t i;
    for (i = 0; i < 6; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_06(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_06(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_06((T_String_06*)pToValue, (T_String_06*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_06_Utils = {
    T_String_06_to_string,
    check_T_String_06_string,
    string_to_T_String_06,
    is_T_String_06_double_conversion_allowed,
    T_String_06_to_double,
    is_T_String_06_long_conversion_allowed,
    T_String_06_to_long,
    compare_T_String_06,
    get_T_String_06_signature,
    init_T_String_06,
    release_T_String_06,
    copy_T_String_06,
    sizeof(T_String_06)
};

/****************************************************************
 ** T_String_10 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_10VTable_defined
    extern struct SimTypeVTable *pSimT_String_10VTable;
  #else 
    struct SimTypeVTable *pSimT_String_10VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_10VTable;
#endif

int T_String_10_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_10VTable != NULL
        && pSimT_String_10VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_10VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 10, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 10, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_10_string(const char *str, char **endptr)
{
    static T_String_10 rTemp;
    return string_to_T_String_10(str, &rTemp, endptr);
}

int string_to_T_String_10(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_10VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_10VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 10, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 10, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_10_double_conversion_allowed()
{
    if (pSimT_String_10VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_10VTable);
    }
    return 0;
}

int T_String_10_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_10VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_10VTable, nValue);
    }
    return 0;
}

int is_T_String_10_long_conversion_allowed()
{
    if (pSimT_String_10VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_10VTable);
    }
    return 0;
}

int T_String_10_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_10VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_10VTable, nValue);
    }
    return 0;
}

void compare_T_String_10(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_10VTable != NULL
        && pSimT_String_10VTable->m_version >= Scv612
        && pSimT_String_10VTable->m_pfnCompare != NULL) {
        if (pSimT_String_10VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_10VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_10VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 10, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_10_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 10, pfnStrAppend, pStrObj); 
}

int init_T_String_10(void *pValue)
{
    size_t i;
    for (i = 0; i < 10; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_10(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_10(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_10((T_String_10*)pToValue, (T_String_10*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_10_Utils = {
    T_String_10_to_string,
    check_T_String_10_string,
    string_to_T_String_10,
    is_T_String_10_double_conversion_allowed,
    T_String_10_to_double,
    is_T_String_10_long_conversion_allowed,
    T_String_10_to_long,
    compare_T_String_10,
    get_T_String_10_signature,
    init_T_String_10,
    release_T_String_10,
    copy_T_String_10,
    sizeof(T_String_10)
};

/****************************************************************
 ** T_String_32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_32VTable_defined
    extern struct SimTypeVTable *pSimT_String_32VTable;
  #else 
    struct SimTypeVTable *pSimT_String_32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_32VTable;
#endif

int T_String_32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_32VTable != NULL
        && pSimT_String_32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 32, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 32, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_32_string(const char *str, char **endptr)
{
    static T_String_32 rTemp;
    return string_to_T_String_32(str, &rTemp, endptr);
}

int string_to_T_String_32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_32VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 32, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 32, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_32_double_conversion_allowed()
{
    if (pSimT_String_32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_32VTable);
    }
    return 0;
}

int T_String_32_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_32VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_32VTable, nValue);
    }
    return 0;
}

int is_T_String_32_long_conversion_allowed()
{
    if (pSimT_String_32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_32VTable);
    }
    return 0;
}

int T_String_32_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_32VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_32VTable, nValue);
    }
    return 0;
}

void compare_T_String_32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_32VTable != NULL
        && pSimT_String_32VTable->m_version >= Scv612
        && pSimT_String_32VTable->m_pfnCompare != NULL) {
        if (pSimT_String_32VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_32VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_32VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 32, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 32, pfnStrAppend, pStrObj); 
}

int init_T_String_32(void *pValue)
{
    size_t i;
    for (i = 0; i < 32; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_32(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_32((T_String_32*)pToValue, (T_String_32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_32_Utils = {
    T_String_32_to_string,
    check_T_String_32_string,
    string_to_T_String_32,
    is_T_String_32_double_conversion_allowed,
    T_String_32_to_double,
    is_T_String_32_long_conversion_allowed,
    T_String_32_to_long,
    compare_T_String_32,
    get_T_String_32_signature,
    init_T_String_32,
    release_T_String_32,
    copy_T_String_32,
    sizeof(T_String_32)
};

/****************************************************************
 ** T_String_33 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_33VTable_defined
    extern struct SimTypeVTable *pSimT_String_33VTable;
  #else 
    struct SimTypeVTable *pSimT_String_33VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_33VTable;
#endif

int T_String_33_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_33VTable != NULL
        && pSimT_String_33VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_33VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 33, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 33, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_33_string(const char *str, char **endptr)
{
    static T_String_33 rTemp;
    return string_to_T_String_33(str, &rTemp, endptr);
}

int string_to_T_String_33(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_33VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_33VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 33, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 33, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_33_double_conversion_allowed()
{
    if (pSimT_String_33VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_33VTable);
    }
    return 0;
}

int T_String_33_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_33VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_33VTable, nValue);
    }
    return 0;
}

int is_T_String_33_long_conversion_allowed()
{
    if (pSimT_String_33VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_33VTable);
    }
    return 0;
}

int T_String_33_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_33VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_33VTable, nValue);
    }
    return 0;
}

void compare_T_String_33(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_33VTable != NULL
        && pSimT_String_33VTable->m_version >= Scv612
        && pSimT_String_33VTable->m_pfnCompare != NULL) {
        if (pSimT_String_33VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_33VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_33VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 33, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_33_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 33, pfnStrAppend, pStrObj); 
}

int init_T_String_33(void *pValue)
{
    size_t i;
    for (i = 0; i < 33; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_33(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_33(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_33((T_String_33*)pToValue, (T_String_33*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_33_Utils = {
    T_String_33_to_string,
    check_T_String_33_string,
    string_to_T_String_33,
    is_T_String_33_double_conversion_allowed,
    T_String_33_to_double,
    is_T_String_33_long_conversion_allowed,
    T_String_33_to_long,
    compare_T_String_33,
    get_T_String_33_signature,
    init_T_String_33,
    release_T_String_33,
    copy_T_String_33,
    sizeof(T_String_33)
};

/****************************************************************
 ** T_String_43 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_43VTable_defined
    extern struct SimTypeVTable *pSimT_String_43VTable;
  #else 
    struct SimTypeVTable *pSimT_String_43VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_43VTable;
#endif

int T_String_43_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_43VTable != NULL
        && pSimT_String_43VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_43VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 43, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 43, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_43_string(const char *str, char **endptr)
{
    static T_String_43 rTemp;
    return string_to_T_String_43(str, &rTemp, endptr);
}

int string_to_T_String_43(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_43VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_43VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 43, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 43, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_43_double_conversion_allowed()
{
    if (pSimT_String_43VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_43VTable);
    }
    return 0;
}

int T_String_43_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_43VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_43VTable, nValue);
    }
    return 0;
}

int is_T_String_43_long_conversion_allowed()
{
    if (pSimT_String_43VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_43VTable);
    }
    return 0;
}

int T_String_43_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_43VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_43VTable, nValue);
    }
    return 0;
}

void compare_T_String_43(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_43VTable != NULL
        && pSimT_String_43VTable->m_version >= Scv612
        && pSimT_String_43VTable->m_pfnCompare != NULL) {
        if (pSimT_String_43VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_43VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_43VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 43, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_43_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 43, pfnStrAppend, pStrObj); 
}

int init_T_String_43(void *pValue)
{
    size_t i;
    for (i = 0; i < 43; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_43(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_43(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_43((T_String_43*)pToValue, (T_String_43*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_43_Utils = {
    T_String_43_to_string,
    check_T_String_43_string,
    string_to_T_String_43,
    is_T_String_43_double_conversion_allowed,
    T_String_43_to_double,
    is_T_String_43_long_conversion_allowed,
    T_String_43_to_long,
    compare_T_String_43,
    get_T_String_43_signature,
    init_T_String_43,
    release_T_String_43,
    copy_T_String_43,
    sizeof(T_String_43)
};

/****************************************************************
 ** T_String_76 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimT_String_76VTable_defined
    extern struct SimTypeVTable *pSimT_String_76VTable;
  #else 
    struct SimTypeVTable *pSimT_String_76VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimT_String_76VTable;
#endif

int T_String_76_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimT_String_76VTable != NULL
        && pSimT_String_76VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimT_String_76VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 76, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 76, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_T_String_76_string(const char *str, char **endptr)
{
    static T_String_76 rTemp;
    return string_to_T_String_76(str, &rTemp, endptr);
}

int string_to_T_String_76(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimT_String_76VTable != NULL) {
        nRet = string_to_VTable(str, pSimT_String_76VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 76, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 76, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_T_String_76_double_conversion_allowed()
{
    if (pSimT_String_76VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimT_String_76VTable);
    }
    return 0;
}

int T_String_76_to_double(const void *pValue, double *nValue)
{
    if (pSimT_String_76VTable != NULL) {
        return VTable_to_double(pValue, pSimT_String_76VTable, nValue);
    }
    return 0;
}

int is_T_String_76_long_conversion_allowed()
{
    if (pSimT_String_76VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimT_String_76VTable);
    }
    return 0;
}

int T_String_76_to_long(const void *pValue, long *nValue)
{
    if (pSimT_String_76VTable != NULL) {
        return VTable_to_long(pValue, pSimT_String_76VTable, nValue);
    }
    return 0;
}

void compare_T_String_76(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimT_String_76VTable != NULL
        && pSimT_String_76VTable->m_version >= Scv612
        && pSimT_String_76VTable->m_pfnCompare != NULL) {
        if (pSimT_String_76VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimT_String_76VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimT_String_76VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 76, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_T_String_76_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 76, pfnStrAppend, pStrObj); 
}

int init_T_String_76(void *pValue)
{
    size_t i;
    for (i = 0; i < 76; i++)
        init_kcg_char(&((kcg_char*)pValue)[i]);
    return 1;
}

int release_T_String_76(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_T_String_76(void *pToValue, const void *pFromValue)
{
    kcg_copy_T_String_76((T_String_76*)pToValue, (T_String_76*)pFromValue);
    return 1;
}

SimTypeUtils _Type_T_String_76_Utils = {
    T_String_76_to_string,
    check_T_String_76_string,
    string_to_T_String_76,
    is_T_String_76_double_conversion_allowed,
    T_String_76_to_double,
    is_T_String_76_long_conversion_allowed,
    T_String_76_to_long,
    compare_T_String_76,
    get_T_String_76_signature,
    init_T_String_76,
    release_T_String_76,
    copy_T_String_76,
    sizeof(T_String_76)
};

