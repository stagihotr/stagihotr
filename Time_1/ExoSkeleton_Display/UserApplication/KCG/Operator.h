/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/Projetos/stagihotr/Time_1/ExoSkeleton_Display/UserApplication/KCG/config.txt
** Generation date: 2018-10-18T23:04:01
*************************************************************$ */
#ifndef _Operator_H_
#define _Operator_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* @1/Walk/, @1/_L1/, _L1/, walkButton/ */ walkButton;
  kcg_bool /* @1/Stop/, @1/_L5/, _L2/, walkStop/ */ walkStop;
} inC_Operator;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BoolMsg /* Output1/, _L4/ */ Output1;
  T_String /* OutMD5/, _L6/ */ OutMD5;
  kcg_bool /* Emit2DF/, _L9/ */ Emit2DF;
  kcg_uint16 /* md5Size/ */ md5Size;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* @1/_L2/ */ _L2_ToggleWalking_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Operator;

/* ===========  node initialization and cycle functions  =========== */
/* Operator/ */
extern void Operator(inC_Operator *inC, outC_Operator *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Operator_reset(outC_Operator *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Operator_init(outC_Operator *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Operator/
  @1: (ToggleWalking#1)
*/

#endif /* _Operator_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator.h
** Generation date: 2018-10-18T23:04:01
*************************************************************$ */

