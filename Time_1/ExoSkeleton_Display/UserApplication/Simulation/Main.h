/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation/config.txt
** Generation date: 2018-11-17T00:35:22
*************************************************************$ */
#ifndef _Main_H_
#define _Main_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* walkStart/ */ walkStart;
  kcg_bool /* walkStop/ */ walkStop;
  T_String_01 /* walkSteps/ */ walkSteps;
  T_String_01 /* walkMagnitude/ */ walkMagnitude;
  kcg_bool /* sitStart/ */ sitStart;
  kcg_bool /* raiseStart/ */ raiseStart;
  kcg_bool /* StepsNotification/ */ StepsNotification;
  kcg_bool /* MagnitudeNotification/ */ MagnitudeNotification;
} inC_Main;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_ImageReference /* OutImageReference/ */ OutImageReference;
  kcg_bool /* EnablePbSit/ */ EnablePbSit;
  kcg_bool /* EnablePbRaise/ */ EnablePbRaise;
  S_ToLabel_10 /* Out_Protocol_OutCMD/ */ Out_Protocol_OutCMD;
  S_ToLabel_76 /* Out_Protocol_OutProtocol/ */ Out_Protocol_OutProtocol;
  S_ToLabel_33 /* Out_Protocol_OutMD5/ */ Out_Protocol_OutMD5;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_int32 /* @1/_L7/ */ _L7_MovingCycle_1;
  kcg_int32 /* @2/_L9/ */ _L9_Counter_2_int32;
  kcg_int32 /* @3/_L9/ */ _L9_Counter_1_int32;
  kcg_int32 /* @4/_L93/ */ _L93_Transition_1;
  kcg_bool /* @4/_L71/ */ _L71_Transition_1;
  kcg_int32 /* @5/_L9/ */ _L9_Counter_8_Transition_1_int32;
  kcg_int32 /* @6/_L93/ */ _L93_Transition_2;
  kcg_bool /* @6/_L71/ */ _L71_Transition_2;
  kcg_int32 /* @7/_L9/ */ _L9_Counter_8_Transition_2_int32;
  kcg_int32 /* @8/_L5/ */ _L5_Read_InputNumber_1;
  kcg_int32 /* @9/_L5/ */ _L5_Read_InputNumber_5;
  kcg_bool /* SM1:Running:_L25/ */ _L25_Running_SM1;
  kcg_bool /* SM1:Running:_L37/ */ _L37_Running_SM1;
  kcg_int32 /* SM1:Runned:_L4/ */ _L4_Runned_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* varDoneRunning/ */ varDoneRunning;
  kcg_bool /* varWaiting/ */ varWaiting;
  T_ImageReference /* ImageReference/ */ ImageReference;
  kcg_bool /* varDoneSitting/ */ varDoneSitting;
  kcg_bool /* varDoneRising/ */ varDoneRising;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/Count/ */ Count_MovingCycle_1;
  kcg_bool /* @1/isFinished/ */ isFinished_MovingCycle_1;
  kcg_bool /* @1/Tick/ */ Tick_MovingCycle_1;
  kcg_bool /* @1/Reset/ */ Reset_MovingCycle_1;
  kcg_int32 /* @1/Finish/ */ Finish_MovingCycle_1;
  kcg_int32 /* @1/Start/ */ Start_MovingCycle_1;
  kcg_int32 /* @1/_L19/ */ _L19_MovingCycle_1;
  kcg_bool /* @1/_L18/ */ _L18_MovingCycle_1;
  kcg_int32 /* @1/_L17/ */ _L17_MovingCycle_1;
  kcg_int32 /* @1/_L16/ */ _L16_MovingCycle_1;
  kcg_int32 /* @1/_L15/ */ _L15_MovingCycle_1;
  kcg_bool /* @1/_L14/ */ _L14_MovingCycle_1;
  kcg_int32 /* @1/_L12/ */ _L12_MovingCycle_1;
  kcg_bool /* @1/_L8/ */ _L8_MovingCycle_1;
  kcg_int32 /* @1/_L3/ */ _L3_MovingCycle_1;
  kcg_int32 /* @1/_L2/ */ _L2_MovingCycle_1;
  kcg_int32 /* @2/Count/ */ Count_Counter_2_int32;
  kcg_bool /* @2/Reset/ */ Reset_Counter_2_int32;
  kcg_int32 /* @2/Incr/ */ Incr_Counter_2_int32;
  kcg_int32 /* @2/_L47/ */ _L47_Counter_2_int32;
  kcg_int32 /* @2/_L18/ */ _L18_Counter_2_int32;
  kcg_int32 /* @2/_L4/ */ _L4_Counter_2_int32;
  kcg_bool /* @2/_L3/ */ _L3_Counter_2_int32;
  kcg_int32 /* @2/_L2/ */ _L2_Counter_2_int32;
  kcg_int32 /* @3/Count/ */ Count_Counter_1_int32;
  kcg_bool /* @3/Reset/ */ Reset_Counter_1_int32;
  kcg_int32 /* @3/Incr/ */ Incr_Counter_1_int32;
  kcg_int32 /* @3/_L47/ */ _L47_Counter_1_int32;
  kcg_int32 /* @3/_L18/ */ _L18_Counter_1_int32;
  kcg_int32 /* @3/_L4/ */ _L4_Counter_1_int32;
  kcg_bool /* @3/_L3/ */ _L3_Counter_1_int32;
  kcg_int32 /* @3/_L2/ */ _L2_Counter_1_int32;
  kcg_bool /* @4/Out_Done/ */ Out_Done_Transition_1;
  T_ImageReference /* @4/Out_ImageReference/ */ Out_ImageReference_Transition_1;
  kcg_int32 /* @4/InReferenceTimerTicket/ */ InReferenceTimerTicket_Transition_1;
  kcg_int32 /* @4/InFinishImage/ */ InFinishImage_Transition_1;
  kcg_int32 /* @4/InStartImage/ */ InStartImage_Transition_1;
  kcg_int32 /* @4/InMagnitude/ */ InMagnitude_Transition_1;
  kcg_int32 /* @4/_L98/ */ _L98_Transition_1;
  kcg_int32 /* @4/_L97/ */ _L97_Transition_1;
  kcg_bool /* @4/_L96/ */ _L96_Transition_1;
  kcg_int32 /* @4/_L91/ */ _L91_Transition_1;
  kcg_int32 /* @4/_L90/ */ _L90_Transition_1;
  kcg_int32 /* @4/_L88/ */ _L88_Transition_1;
  kcg_int32 /* @4/_L85/ */ _L85_Transition_1;
  kcg_int32 /* @4/_L84/ */ _L84_Transition_1;
  kcg_int32 /* @4/_L82/ */ _L82_Transition_1;
  kcg_int32 /* @4/_L63/ */ _L63_Transition_1;
  kcg_bool /* @4/_L69/ */ _L69_Transition_1;
  kcg_bool /* @4/_L72/ */ _L72_Transition_1;
  kcg_int32 /* @4/_L74/ */ _L74_Transition_1;
  kcg_uint16 /* @4/_L75/ */ _L75_Transition_1;
  T_ImageReference /* @4/_L76/ */ _L76_Transition_1;
  kcg_int32 /* @5/_L2/ */ _L2_Counter_8_Transition_1_int32;
  kcg_bool /* @5/_L3/ */ _L3_Counter_8_Transition_1_int32;
  kcg_int32 /* @5/_L4/ */ _L4_Counter_8_Transition_1_int32;
  kcg_int32 /* @5/_L18/ */ _L18_Counter_8_Transition_1_int32;
  kcg_int32 /* @5/_L47/ */ _L47_Counter_8_Transition_1_int32;
  kcg_int32 /* @5/Incr/ */ Incr_Counter_8_Transition_1_int32;
  kcg_bool /* @5/Reset/ */ Reset_Counter_8_Transition_1_int32;
  kcg_int32 /* @5/Count/ */ Count_Counter_8_Transition_1_int32;
  kcg_bool /* @6/Out_Done/ */ Out_Done_Transition_2;
  T_ImageReference /* @6/Out_ImageReference/ */ Out_ImageReference_Transition_2;
  kcg_int32 /* @6/InReferenceTimerTicket/ */ _5_InReferenceTimerTicket_Transition_2;
  kcg_int32 /* @6/InFinishImage/ */ InFinishImage_Transition_2;
  kcg_int32 /* @6/InStartImage/ */ InStartImage_Transition_2;
  kcg_int32 /* @6/InMagnitude/ */ InMagnitude_Transition_2;
  kcg_int32 /* @6/_L98/ */ _L98_Transition_2;
  kcg_int32 /* @6/_L97/ */ _L97_Transition_2;
  kcg_bool /* @6/_L96/ */ _L96_Transition_2;
  kcg_int32 /* @6/_L91/ */ _L91_Transition_2;
  kcg_int32 /* @6/_L90/ */ _L90_Transition_2;
  kcg_int32 /* @6/_L88/ */ _L88_Transition_2;
  kcg_int32 /* @6/_L85/ */ _L85_Transition_2;
  kcg_int32 /* @6/_L84/ */ _L84_Transition_2;
  kcg_int32 /* @6/_L82/ */ _L82_Transition_2;
  kcg_int32 /* @6/_L63/ */ _L63_Transition_2;
  kcg_bool /* @6/_L69/ */ _L69_Transition_2;
  kcg_bool /* @6/_L72/ */ _L72_Transition_2;
  kcg_int32 /* @6/_L74/ */ _L74_Transition_2;
  kcg_uint16 /* @6/_L75/ */ _L75_Transition_2;
  T_ImageReference /* @6/_L76/ */ _L76_Transition_2;
  kcg_int32 /* @7/_L2/ */ _L2_Counter_8_Transition_2_int32;
  kcg_bool /* @7/_L3/ */ _L3_Counter_8_Transition_2_int32;
  kcg_int32 /* @7/_L4/ */ _L4_Counter_8_Transition_2_int32;
  kcg_int32 /* @7/_L18/ */ _L18_Counter_8_Transition_2_int32;
  kcg_int32 /* @7/_L47/ */ _L47_Counter_8_Transition_2_int32;
  kcg_int32 /* @7/Incr/ */ Incr_Counter_8_Transition_2_int32;
  kcg_bool /* @7/Reset/ */ Reset_Counter_8_Transition_2_int32;
  kcg_int32 /* @7/Count/ */ Count_Counter_8_Transition_2_int32;
  kcg_int32 /* @8/Number/ */ Number_Read_InputNumber_1;
  kcg_int32 /* @8/DefaultValue/ */ DefaultValue_Read_InputNumber_1;
  T_String_01 /* @8/ScalarNumber/ */ ScalarNumber_Read_InputNumber_1;
  kcg_bool /* @8/Notification/ */ Notification_Read_InputNumber_1;
  kcg_int32 /* @8/_L9/ */ _L9_Read_InputNumber_1;
  T_String_01 /* @8/_L8/ */ _L8_Read_InputNumber_1;
  T_String_02 /* @8/_L7/ */ _L7_Read_InputNumber_1;
  kcg_int32 /* @8/_L6/ */ _L6_Read_InputNumber_1;
  kcg_int32 /* @8/_L4/ */ _L4_Read_InputNumber_1;
  kcg_bool /* @8/_L1/ */ _L1_Read_InputNumber_1;
  T_String_01 /* @8/_L2/ */ _L2_Read_InputNumber_1;
  kcg_int32 /* @9/Number/ */ Number_Read_InputNumber_5;
  kcg_int32 /* @9/DefaultValue/ */ DefaultValue_Read_InputNumber_5;
  T_String_01 /* @9/ScalarNumber/ */ ScalarNumber_Read_InputNumber_5;
  kcg_bool /* @9/Notification/ */ Notification_Read_InputNumber_5;
  kcg_int32 /* @9/_L9/ */ _L9_Read_InputNumber_5;
  T_String_01 /* @9/_L8/ */ _L8_Read_InputNumber_5;
  T_String_02 /* @9/_L7/ */ _L7_Read_InputNumber_5;
  kcg_int32 /* @9/_L6/ */ _L6_Read_InputNumber_5;
  kcg_int32 /* @9/_L4/ */ _L4_Read_InputNumber_5;
  kcg_bool /* @9/_L1/ */ _L1_Read_InputNumber_5;
  T_String_01 /* @9/_L2/ */ _L2_Read_InputNumber_5;
  kcg_bool /* @10/EnablePbRaise/ */ EnablePbRaise_DisplayView_1;
  kcg_bool /* @10/EnablePbSit/ */ EnablePbSit_DisplayView_1;
  kcg_bool /* @10/isSitting/ */ isSitting_DisplayView_1;
  kcg_bool /* @10/_L10/ */ _L10_DisplayView_1;
  kcg_bool /* @10/_L3/ */ _L3_DisplayView_1;
  S_ToLabel_10 /* @11/OutCMD/ */ OutCMD_Protocol_1;
  S_ToLabel_33 /* @11/OutMd5/ */ OutMd5_Protocol_1;
  S_ToLabel_76 /* @11/OutProtocol/ */ OutProtocol_Protocol_1;
  T_String_03 /* @11/CommandPlus/ */ CommandPlus_Protocol_1;
  T_String_01 /* @11/Magnitude/ */ Magnitude_Protocol_1;
  T_String_02 /* @11/Command/ */ Command_Protocol_1;
  T_String_02 /* @11/Status/ */ Status_Protocol_1;
  T_String_03 /* @11/_L56/ */ _L56_Protocol_1;
  T_String_01 /* @11/_L54/ */ _L54_Protocol_1;
  T_String_02 /* @11/_L53/ */ _L53_Protocol_1;
  T_String_02 /* @11/_L52/ */ _L52_Protocol_1;
  T_String_01 /* @11/_L51/ */ _L51_Protocol_1;
  T_String_01 /* @11/_L49/ */ _L49_Protocol_1;
  T_String_76 /* @11/_L48/ */ _L48_Protocol_1;
  T_String_33 /* @11/_L47/ */ _L47_Protocol_1;
  T_String_01 /* @11/_L46/ */ _L46_Protocol_1;
  T_String_10 /* @11/_L45/ */ _L45_Protocol_1;
  S_ToLabel_10 /* @11/_L44/ */ _L44_Protocol_1;
  kcg_uint16 /* @11/_L42/ */ _L42_Protocol_1;
  kcg_uint16 /* @11/_L41/ */ _L41_Protocol_1;
  S_ToLabel_76 /* @11/_L40/ */ _L40_Protocol_1;
  S_ToLabel_33 /* @11/_L39/ */ _L39_Protocol_1;
  kcg_int32 /* @11/_L34/ */ _L34_Protocol_1;
  kcg_int32 /* @11/_L33/ */ _L33_Protocol_1;
  kcg_int32 /* @11/_L32/ */ _L32_Protocol_1;
  kcg_uint16 /* @11/_L30/ */ _L30_Protocol_1;
  kcg_bool /* @11/_L24/ */ _L24_Protocol_1;
  array_char_9 /* @11/_L17/ */ _L17_Protocol_1;
  array_char_75 /* @11/_L16/ */ _L16_Protocol_1;
  T_String_32 /* @11/_L14/ */ _L14_Protocol_1;
  T_String_10 /* @11/_L13/ */ _L13_Protocol_1;
  T_String_01 /* @11/_L11/ */ _L11_Protocol_1;
  T_String_01 /* @11/_L9/ */ _L9_Protocol_1;
  T_String_43 /* @11/_L7/ */ _L7_Protocol_1;
  T_String_06 /* @11/_L4/ */ _L4_Protocol_1;
  T_String_06 /* @11/_L3/ */ _L3_Protocol_1;
  T_String_06 /* @11/_L2/ */ _L2_Protocol_1;
  T_String_06 /* @11/_L1/ */ _L1_Protocol_1;
  T_String_02 /* SM1:Waiting:_L22/ */ _L22_Waiting_SM1;
  T_String_02 /* SM1:Waiting:_L20/ */ _L20_Waiting_SM1;
  kcg_bool /* SM1:Waiting:_L15/ */ _L15_Waiting_SM1;
  kcg_uint16 /* SM1:Waiting:_L14/ */ _L14_Waiting_SM1;
  T_ImageReference /* SM1:Waiting:_L13/ */ _L13_Waiting_SM1;
  kcg_int32 /* SM1:Waiting:_L12/ */ _L12_Waiting_SM1;
  kcg_bool /* SM1:Waiting:_L6/ */ _L6_Waiting_SM1;
  kcg_bool /* SM1:Running:_L55/ */ _L55_Running_SM1;
  kcg_int32 /* SM1:Running:_L5/ */ _L5_Running_SM1;
  T_String_02 /* SM1:Running:_L54/ */ _L54_Running_SM1;
  T_String_02 /* SM1:Running:_L53/ */ _L53_Running_SM1;
  kcg_int32 /* SM1:Running:_L9/ */ _L9_Running_SM1;
  kcg_int32 /* SM1:Running:_L11/ */ _L11_Running_SM1;
  kcg_bool /* SM1:Running:_L12/ */ _L12_Running_SM1;
  kcg_bool /* SM1:Running:_L26/ */ _L26_Running_SM1;
  kcg_bool /* SM1:Running:_L24/ */ _L24_Running_SM1;
  kcg_int32 /* SM1:Running:_L21/ */ _L21_Running_SM1;
  kcg_int32 /* SM1:Running:_L20/ */ _L20_Running_SM1;
  kcg_int32 /* SM1:Running:_L17/ */ _L17_Running_SM1;
  kcg_int32 /* SM1:Running:_L13/ */ _L13_Running_SM1;
  kcg_int32 /* SM1:Running:_L38/ */ _L38_Running_SM1;
  kcg_int32 /* SM1:Running:_L39/ */ _L39_Running_SM1;
  kcg_int32 /* SM1:Running:_L40/ */ _L40_Running_SM1;
  T_ImageReference /* SM1:Running:_L42/ */ _L42_Running_SM1;
  kcg_bool /* SM1:Running:_L43/ */ _L43_Running_SM1;
  kcg_uint16 /* SM1:Running:_L44/ */ _L44_Running_SM1;
  kcg_bool /* SM1:Running:_L46/ */ _L46_Running_SM1;
  kcg_bool /* SM1:Running:_L48/ */ _L48_Running_SM1;
  kcg_bool /* SM1:Running:_L47/ */ _L47_Running_SM1;
  kcg_int32 /* SM1:Running:_L15/ */ _L15_Running_SM1;
  T_String_02 /* SM1:Runned:_L13/ */ _L13_Runned_SM1;
  T_String_02 /* SM1:Runned:_L12/ */ _L12_Runned_SM1;
  kcg_bool /* SM1:Runned:_L7/ */ _L7_Runned_SM1;
  kcg_int32 /* SM1:Runned:_L1/ */ _L1_Runned_SM1;
  kcg_bool /* SM1:Runned:_L2/ */ _L2_Runned_SM1;
  kcg_int32 /* SM1:Runned:_L3/ */ _L3_Runned_SM1;
  kcg_int32 /* SM1:Runned:_L5/ */ _L5_Runned_SM1;
  T_String_02 /* SM1:Sitting:_L12/ */ _L12_Sitting_SM1;
  T_String_02 /* SM1:Sitting:_L10/ */ _L10_Sitting_SM1;
  kcg_int32 /* SM1:Sitting:_L8/ */ _L8_Sitting_SM1;
  kcg_int32 /* SM1:Sitting:_L6/ */ _L6_Sitting_SM1;
  kcg_int32 /* SM1:Sitting:_L5/ */ _L5_Sitting_SM1;
  T_ImageReference /* SM1:Sitting:_L1/ */ _L1_Sitting_SM1;
  kcg_bool /* SM1:Sitting:_L2/ */ _L2_Sitting_SM1;
  T_String_02 /* SM1:sat:_L27/ */ _L27_sat_SM1;
  T_String_02 /* SM1:sat:_L26/ */ _L26_sat_SM1;
  T_String_02 /* SM1:raising:_L13/ */ _L13_raising_SM1;
  T_String_02 /* SM1:raising:_L12/ */ _L12_raising_SM1;
  kcg_int32 /* SM1:raising:_L1/ */ _L1_raising_SM1;
  kcg_int32 /* SM1:raising:_L2/ */ _L2_raising_SM1;
  kcg_bool /* SM1:raising:_L4/ */ _L4_raising_SM1;
  T_ImageReference /* SM1:raising:_L3/ */ _L3_raising_SM1;
  kcg_int32 /* SM1:raising:_L5/ */ _L5_raising_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_int32 /* Magnitude/ */ Magnitude;
  kcg_int32 /* Steps/ */ Steps;
  T_String_02 /* currentStatus/ */ currentStatus;
  T_String_02 /* currentCommand/ */ currentCommand;
  T_ImageReference /* _L37/ */ _L37;
  kcg_bool /* _L43/ */ _L43;
  T_String_02 /* _L44/ */ _L44;
  T_String_02 /* _L45/ */ _L45;
  T_String_01 /* _L18/ */ _L18;
  T_String_01 /* _L15/ */ _L15;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  kcg_int32 /* _L55/ */ _L55;
  kcg_int32 /* _L59/ */ _L59;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L41/ */ _L41;
  S_ToLabel_76 /* _L62/ */ _L62;
  S_ToLabel_33 /* _L63/ */ _L63;
  S_ToLabel_10 /* _L64/ */ _L64;
  kcg_int32 /* _L78/ */ _L78;
  T_String_01 /* _L79/ */ _L79;
  kcg_int32 /* _L81/ */ _L81;
  kcg_int32 /* _L84/ */ _L84;
  kcg_int32 /* _L85/ */ _L85;
  T_String_03 /* _L86/ */ _L86;
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
  @1: (MovingCycle#1)
  @2: (pwlinear::Counter#2)
  @3: (pwlinear::Counter#1)
  @4: (Transition#1)
  @5: @4/(pwlinear::Counter#8)
  @6: (Transition#2)
  @7: @6/(pwlinear::Counter#8)
  @8: (Read_InputNumber#1)
  @9: (Read_InputNumber#5)
  @10: (DisplayView#1)
  @11: (Protocol#1)
*/

#endif /* _Main_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.h
** Generation date: 2018-11-17T00:35:22
*************************************************************$ */

