#include "UserApplication_interface.h"
#include "UserApplication_type.h"
#include "UserApplication_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_Main inputs_ctx;
static inC_Main inputs_ctx_execute;
outC_Main outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.walkStart);
    init_kcg_bool(&inputs_ctx_execute.walkStart);
    init_kcg_bool(&inputs_ctx.walkStop);
    init_kcg_bool(&inputs_ctx_execute.walkStop);
    init_T_String_01(&inputs_ctx.walkSteps);
    init_T_String_01(&inputs_ctx_execute.walkSteps);
    init_T_String_01(&inputs_ctx.walkMagnitude);
    init_T_String_01(&inputs_ctx_execute.walkMagnitude);
    init_kcg_bool(&inputs_ctx.sitStart);
    init_kcg_bool(&inputs_ctx_execute.sitStart);
    init_kcg_bool(&inputs_ctx.raiseStart);
    init_kcg_bool(&inputs_ctx_execute.raiseStart);
    init_kcg_bool(&inputs_ctx.StepsNotification);
    init_kcg_bool(&inputs_ctx_execute.StepsNotification);
    init_kcg_bool(&inputs_ctx.MagnitudeNotification);
    init_kcg_bool(&inputs_ctx_execute.MagnitudeNotification);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.walkStart = inputs_ctx.walkStart;
    inputs_ctx_execute.walkStop = inputs_ctx.walkStop;
    kcg_copy_T_String_01(&inputs_ctx_execute.walkSteps, &inputs_ctx.walkSteps);
    kcg_copy_T_String_01(&inputs_ctx_execute.walkMagnitude, &inputs_ctx.walkMagnitude);
    inputs_ctx_execute.sitStart = inputs_ctx.sitStart;
    inputs_ctx_execute.raiseStart = inputs_ctx.raiseStart;
    inputs_ctx_execute.StepsNotification = inputs_ctx.StepsNotification;
    inputs_ctx_execute.MagnitudeNotification = inputs_ctx.MagnitudeNotification;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "809d71f5bde58825d9beb3d83df1656a";
const char* _SCSIM_SmuTypesCheckSum = "1d4140d2de3b3e910e8a148dd1cf7a1a";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    Main_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    Main_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_MainCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_MainCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_MainCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_MainCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_MainCIVTable != NULL && 
        pSimoutC_MainCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_MainCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    Main(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_Main);
    nSize += sizeof(outC_Main);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_Main));
    pCurrent += sizeof(inC_Main);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_Main));
    pCurrent += sizeof(outC_Main);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_Main));
    pCurrent += sizeof(inC_Main);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_Main));
    pCurrent += sizeof(outC_Main);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

