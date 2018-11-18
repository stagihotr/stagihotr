/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/KCG/config.txt
** Generation date: 2018-11-17T12:07:22
*************************************************************$ */
#ifndef _Main_H_
#define _Main_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* _L89/, walkStart/ */ walkStart;
  kcg_bool /* walkStop/ */ walkStop;
  T_String_01 /* @10/ScalarNumber/, @10/_L2/, _L15/, walkSteps/ */ walkSteps;
  T_String_01 /* @11/ScalarNumber/,
     @11/_L2/,
     _L18/,
     walkMagnitude/ */ walkMagnitude;
  kcg_bool /* _L90/, sitStart/ */ sitStart;
  kcg_bool /* _L91/, raiseStart/ */ raiseStart;
  kcg_bool /* @10/Notification/,
     @10/_L1/,
     StepsNotification/,
     _L51/ */ StepsNotification;
  kcg_bool /* @11/Notification/,
     @11/_L1/,
     MagnitudeNotification/,
     _L52/ */ MagnitudeNotification;
} inC_Main;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_ImageReference /* ImageReference/,
     OutImageReference/,
     _L37/ */ OutImageReference;
  kcg_bool /* @1/EnablePbSit/, @1/_L10/, EnablePbSit/, _L41/ */ EnablePbSit;
  kcg_bool /* @1/EnablePbRaise/,
     @1/_L3/,
     @1/isSitting/,
     EnablePbRaise/,
     _L42/,
     _L43/,
     varDoneSitting/ */ EnablePbRaise;
  S_ToLabel_10 /* @2/OutCMD/,
     @2/_L44/,
     Out_Protocol_OutCMD/,
     _L64/ */ Out_Protocol_OutCMD;
  S_ToLabel_76 /* @2/OutProtocol/,
     @2/_L40/,
     Out_Protocol_OutProtocol/,
     _L62/ */ Out_Protocol_OutProtocol;
  S_ToLabel_33 /* @2/OutMd5/,
     @2/_L39/,
     Out_Protocol_OutMD5/,
     _L63/ */ Out_Protocol_OutMD5;
  T_String_76 /* @2/Protocolo/, @2/_L48/, Protocolo/, _L87/ */ Protocolo;
  T_String_10 /* @2/Comando/, @2/_L45/, Comando/, _L88/ */ Comando;
  kcg_bool /* PulseWalk/ */ PulseWalk;
  kcg_bool /* PulseSit/ */ PulseSit;
  kcg_bool /* PulseRaise/ */ PulseRaise;
  kcg_bool /* _L105/, changed/ */ changed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM1: */ SM1_reset_nxt;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_int32 /* SM1:Runned:_L4/ */ _L4_Runned_SM1;
  kcg_bool /* @9/_L8/, @9/isFinished/, SM1:Running:_L37/ */ _L37_Running_SM1;
  kcg_bool /* SM1:Running:_L25/ */ _L25_Running_SM1;
  kcg_int32 /* @10/_L5/ */ _L5_Read_InputNumber_5;
  kcg_int32 /* @11/_L5/ */ _L5_Read_InputNumber_1;
  kcg_int32 /* @4/_L9/ */ _L9_Counter_8_Transition_2_int32;
  kcg_bool /* @3/_L71/ */ _L71_Transition_2;
  kcg_int32 /* @3/_L93/ */ _L93_Transition_2;
  kcg_int32 /* @6/_L9/ */ _L9_Counter_8_Transition_1_int32;
  kcg_bool /* @5/_L71/ */ _L71_Transition_1;
  kcg_int32 /* @5/_L93/ */ _L93_Transition_1;
  kcg_int32 /* @7/_L9/ */ _L9_Counter_1_int32;
  kcg_int32 /* @8/_L9/ */ _L9_Counter_2_int32;
  kcg_int32 /* @9/_L7/ */ _L7_MovingCycle_1;
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Main;

/* ===========  node initialization and cycle functions  =========== */
/* Main/ */
extern void Main(inC_Main *inC, outC_Main *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Main_reset(outC_Main *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Main_init(outC_Main *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Main/
  @1: (DisplayView#1)
  @2: (Protocol#1)
  @3: (Transition#2)
  @4: @3/(pwlinear::Counter#8)
  @5: (Transition#1)
  @6: @5/(pwlinear::Counter#8)
  @7: (pwlinear::Counter#1)
  @8: (pwlinear::Counter#2)
  @9: (MovingCycle#1)
  @10: (Read_InputNumber#5)
  @11: (Read_InputNumber#1)
*/

#endif /* _Main_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.h
** Generation date: 2018-11-17T12:07:22
*************************************************************$ */

