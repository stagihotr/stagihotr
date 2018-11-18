/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation/config.txt
** Generation date: 2018-11-17T00:35:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

/* Main/ */
void Main(inC_Main *inC, outC_Main *outC)
{
  array_char_7 tmp;
  T_String_06 tmp1;
  T_String_03 tmp2;
  T_String_33 tmp3;
  array_char_24 tmp4;
  array_char_18 tmp5;
  array_char_12 tmp6;
  /* varDoneRunning/ */
  kcg_bool varDoneRunning_partial;
  /* varWaiting/ */
  kcg_bool varWaiting_partial;
  /* ImageReference/ */
  T_ImageReference ImageReference_partial;
  /* varDoneSitting/ */
  kcg_bool varDoneSitting_partial;
  /* varDoneRising/ */
  kcg_bool varDoneRising_partial;
  /* currentStatus/ */
  T_String_02 currentStatus_partial;
  /* currentCommand/ */
  T_String_02 currentCommand_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* SM1:Waiting:<2> */
  kcg_bool tr_2_guard_Waiting_SM1;
  /* SM1:Waiting:<1> */
  kcg_bool tr_1_guard_Waiting_SM1;
  /* varDoneRunning/ */
  kcg_bool _7_varDoneRunning_partial;
  /* varWaiting/ */
  kcg_bool _8_varWaiting_partial;
  /* ImageReference/ */
  T_ImageReference _9_ImageReference_partial;
  /* varDoneSitting/ */
  kcg_bool _10_varDoneSitting_partial;
  /* varDoneRising/ */
  kcg_bool _11_varDoneRising_partial;
  /* currentStatus/ */
  T_String_02 _12_currentStatus_partial;
  /* currentCommand/ */
  T_String_02 _13_currentCommand_partial;
  /* SM1: */
  SSM_ST_SM1 _14_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _15_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _16_SM1_fired_partial;
  /* SM1:Running:<1> */
  kcg_bool tr_1_guard_Running_SM1;
  /* varDoneRunning/ */
  kcg_bool _17_varDoneRunning_partial;
  /* varWaiting/ */
  kcg_bool _18_varWaiting_partial;
  /* ImageReference/ */
  T_ImageReference _19_ImageReference_partial;
  /* varDoneSitting/ */
  kcg_bool _20_varDoneSitting_partial;
  /* varDoneRising/ */
  kcg_bool _21_varDoneRising_partial;
  /* currentStatus/ */
  T_String_02 _22_currentStatus_partial;
  /* currentCommand/ */
  T_String_02 _23_currentCommand_partial;
  /* SM1: */
  SSM_ST_SM1 _24_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _26_SM1_fired_partial;
  /* SM1:Runned:<1> */
  kcg_bool tr_1_guard_Runned_SM1;
  /* varDoneRunning/ */
  kcg_bool _27_varDoneRunning_partial;
  /* varWaiting/ */
  kcg_bool _28_varWaiting_partial;
  /* ImageReference/ */
  T_ImageReference _29_ImageReference_partial;
  /* varDoneSitting/ */
  kcg_bool _30_varDoneSitting_partial;
  /* varDoneRising/ */
  kcg_bool _31_varDoneRising_partial;
  /* currentStatus/ */
  T_String_02 _32_currentStatus_partial;
  /* currentCommand/ */
  T_String_02 _33_currentCommand_partial;
  /* SM1: */
  SSM_ST_SM1 _34_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _36_SM1_fired_partial;
  /* SM1:Sitting:<1> */
  kcg_bool tr_1_guard_Sitting_SM1;
  /* varDoneRunning/ */
  kcg_bool _37_varDoneRunning_partial;
  /* varWaiting/ */
  kcg_bool _38_varWaiting_partial;
  /* ImageReference/ */
  T_ImageReference _39_ImageReference_partial;
  /* varDoneSitting/ */
  kcg_bool _40_varDoneSitting_partial;
  /* varDoneRising/ */
  kcg_bool _41_varDoneRising_partial;
  /* currentStatus/ */
  T_String_02 _42_currentStatus_partial;
  /* currentCommand/ */
  T_String_02 _43_currentCommand_partial;
  /* SM1: */
  SSM_ST_SM1 _44_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _45_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _46_SM1_fired_partial;
  /* SM1:sat:<1> */
  kcg_bool tr_1_guard_sat_SM1;
  /* varDoneRunning/ */
  kcg_bool _47_varDoneRunning_partial;
  /* varWaiting/ */
  kcg_bool _48_varWaiting_partial;
  /* ImageReference/ */
  T_ImageReference _49_ImageReference_partial;
  /* varDoneSitting/ */
  kcg_bool _50_varDoneSitting_partial;
  /* varDoneRising/ */
  kcg_bool _51_varDoneRising_partial;
  /* currentStatus/ */
  T_String_02 _52_currentStatus_partial;
  /* currentCommand/ */
  T_String_02 _53_currentCommand_partial;
  /* SM1: */
  SSM_ST_SM1 _54_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _55_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _56_SM1_fired_partial;
  /* SM1:raising:<1> */
  kcg_bool tr_1_guard_raising_SM1;
  /* varDoneRising/ */
  kcg_bool last_varDoneRising;
  /* varDoneSitting/ */
  kcg_bool last_varDoneSitting;
  /* ImageReference/ */
  T_ImageReference last_ImageReference;
  /* varWaiting/ */
  kcg_bool last_varWaiting;
  /* varDoneRunning/ */
  kcg_bool last_varDoneRunning;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  switch (outC->SM1_state_act) {
    case SSM_st_Running_SM1 :
      outC->_L19_MovingCycle_1 = kcg_lit_int32(0);
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_Running_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Running_SM1 :
      /* SM1:Running:_L12= */
      if (outC->init) {
        outC->_L12_Running_SM1 = kcg_false;
      }
      else {
        outC->_L12_Running_SM1 = outC->_L25_Running_SM1;
      }
      outC->Tick_MovingCycle_1 = outC->_L12_Running_SM1;
      outC->_L18_MovingCycle_1 = outC->Tick_MovingCycle_1;
      outC->_L16_MovingCycle_1 = kcg_lit_int32(1);
      /* @1/_L17= */
      if (outC->_L18_MovingCycle_1) {
        outC->_L17_MovingCycle_1 = outC->_L16_MovingCycle_1;
      }
      else {
        outC->_L17_MovingCycle_1 = outC->_L19_MovingCycle_1;
      }
      outC->_L40_Running_SM1 = kcg_lit_int32(9);
      outC->Finish_MovingCycle_1 = outC->_L40_Running_SM1;
      outC->_L3_MovingCycle_1 = outC->Finish_MovingCycle_1;
      outC->_L39_Running_SM1 = kcg_lit_int32(3);
      outC->Start_MovingCycle_1 = outC->_L39_Running_SM1;
      outC->_L2_MovingCycle_1 = outC->Start_MovingCycle_1;
      /* @1/_L12= */
      if (outC->init) {
        outC->_L12_MovingCycle_1 = outC->_L2_MovingCycle_1;
      }
      else {
        outC->_L12_MovingCycle_1 = outC->_L7_MovingCycle_1;
      }
      outC->_L48_Running_SM1 = kcg_false;
      outC->_L47_Running_SM1 = kcg_true;
      /* SM1:Running:_L55= */
      if (outC->init) {
        outC->_L55_Running_SM1 = kcg_true;
      }
      else {
        outC->_L55_Running_SM1 = outC->_L37_Running_SM1;
      }
      /* SM1:Running:_L46= */
      if (outC->_L55_Running_SM1) {
        outC->_L46_Running_SM1 = outC->_L47_Running_SM1;
      }
      else {
        outC->_L46_Running_SM1 = outC->_L48_Running_SM1;
      }
      outC->Reset_MovingCycle_1 = outC->_L46_Running_SM1;
      outC->_L14_MovingCycle_1 = outC->Reset_MovingCycle_1;
      /* @1/_L15= */
      if (outC->_L14_MovingCycle_1) {
        outC->_L15_MovingCycle_1 = outC->_L2_MovingCycle_1;
      }
      else {
        outC->_L15_MovingCycle_1 = outC->_L12_MovingCycle_1;
      }
      outC->_L8_MovingCycle_1 = outC->_L15_MovingCycle_1 >= outC->_L3_MovingCycle_1;
      outC->isFinished_MovingCycle_1 = outC->_L8_MovingCycle_1;
      outC->Count_MovingCycle_1 = outC->_L15_MovingCycle_1;
      outC->_L7_MovingCycle_1 = outC->_L15_MovingCycle_1 + outC->_L17_MovingCycle_1;
      outC->_L47_Counter_2_int32 = kcg_lit_int32(0);
      /* @2/_L18= */
      if (outC->init) {
        outC->_L18_Counter_2_int32 = outC->_L47_Counter_2_int32;
      }
      else {
        outC->_L18_Counter_2_int32 = outC->_L9_Counter_2_int32;
      }
      outC->_L20_Running_SM1 = kcg_lit_int32(0);
      outC->_L17_Running_SM1 = kcg_lit_int32(1);
      outC->_L37_Running_SM1 = outC->isFinished_MovingCycle_1;
      /* SM1:Running:_L13= */
      if (outC->_L37_Running_SM1) {
        outC->_L13_Running_SM1 = outC->_L17_Running_SM1;
      }
      else {
        outC->_L13_Running_SM1 = outC->_L20_Running_SM1;
      }
      outC->Incr_Counter_2_int32 = outC->_L13_Running_SM1;
      outC->_L2_Counter_2_int32 = outC->Incr_Counter_2_int32;
      outC->_L24_Running_SM1 = kcg_false;
      outC->Reset_Counter_2_int32 = outC->_L24_Running_SM1;
      outC->_L3_Counter_2_int32 = outC->Reset_Counter_2_int32;
      /* @2/_L4= */
      if (outC->_L3_Counter_2_int32) {
        outC->_L4_Counter_2_int32 = outC->_L47_Counter_2_int32;
      }
      else {
        outC->_L4_Counter_2_int32 = outC->_L18_Counter_2_int32;
      }
      outC->_L9_Counter_2_int32 = outC->_L4_Counter_2_int32 +
        outC->_L2_Counter_2_int32;
      outC->Count_Counter_2_int32 = outC->_L4_Counter_2_int32;
      outC->_L47_Counter_1_int32 = kcg_lit_int32(0);
      /* @3/_L18= */
      if (outC->init) {
        outC->_L18_Counter_1_int32 = outC->_L47_Counter_1_int32;
      }
      else {
        outC->_L18_Counter_1_int32 = outC->_L9_Counter_1_int32;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L84 = DEFAULT_MAGNITUDE;
  outC->DefaultValue_Read_InputNumber_1 = outC->_L84;
  outC->_L9_Read_InputNumber_1 = outC->DefaultValue_Read_InputNumber_1;
  /* @8/_L4= */
  if (outC->init3) {
    outC->_L4_Read_InputNumber_1 = outC->_L9_Read_InputNumber_1;
  }
  else {
    outC->_L4_Read_InputNumber_1 = outC->_L5_Read_InputNumber_1;
  }
  outC->Number_Read_InputNumber_1 = outC->_L4_Read_InputNumber_1;
  outC->_L55 = outC->Number_Read_InputNumber_1;
  outC->Magnitude = outC->_L55;
  switch (outC->SM1_state_act) {
    case SSM_st_Sitting_SM1 :
      outC->_L47_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
      break;
    case SSM_st_Running_SM1 :
      outC->_L5_Running_SM1 = outC->Magnitude;
      outC->Incr_Counter_1_int32 = outC->_L5_Running_SM1;
      outC->_L2_Counter_1_int32 = outC->Incr_Counter_1_int32;
      outC->Reset_Counter_1_int32 = outC->_L12_Running_SM1;
      outC->_L3_Counter_1_int32 = outC->Reset_Counter_1_int32;
      /* @3/_L4= */
      if (outC->_L3_Counter_1_int32) {
        outC->_L4_Counter_1_int32 = outC->_L47_Counter_1_int32;
      }
      else {
        outC->_L4_Counter_1_int32 = outC->_L18_Counter_1_int32;
      }
      outC->_L9_Counter_1_int32 = outC->_L4_Counter_1_int32 +
        outC->_L2_Counter_1_int32;
      outC->Count_Counter_1_int32 = outC->_L4_Counter_1_int32;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Sitting_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      outC->_L47_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
      break;
    case SSM_st_Sitting_SM1 :
      /* @5/_L18= */
      if (outC->init1) {
        outC->_L18_Counter_8_Transition_1_int32 =
          outC->_L47_Counter_8_Transition_1_int32;
      }
      else {
        outC->_L18_Counter_8_Transition_1_int32 =
          outC->_L9_Counter_8_Transition_1_int32;
      }
      outC->_L8_Sitting_SM1 = kcg_lit_int32(1);
      outC->InMagnitude_Transition_1 = outC->_L8_Sitting_SM1;
      outC->_L82_Transition_1 = outC->InMagnitude_Transition_1;
      outC->Incr_Counter_8_Transition_1_int32 = outC->_L82_Transition_1;
      outC->_L2_Counter_8_Transition_1_int32 =
        outC->Incr_Counter_8_Transition_1_int32;
      /* @4/_L69= */
      if (outC->init1) {
        outC->_L69_Transition_1 = kcg_false;
      }
      else {
        outC->_L69_Transition_1 = outC->_L71_Transition_1;
      }
      outC->Reset_Counter_8_Transition_1_int32 = outC->_L69_Transition_1;
      outC->_L3_Counter_8_Transition_1_int32 =
        outC->Reset_Counter_8_Transition_1_int32;
      /* @5/_L4= */
      if (outC->_L3_Counter_8_Transition_1_int32) {
        outC->_L4_Counter_8_Transition_1_int32 =
          outC->_L47_Counter_8_Transition_1_int32;
      }
      else {
        outC->_L4_Counter_8_Transition_1_int32 =
          outC->_L18_Counter_8_Transition_1_int32;
      }
      outC->_L9_Counter_8_Transition_1_int32 =
        outC->_L4_Counter_8_Transition_1_int32 + outC->_L2_Counter_8_Transition_1_int32;
      outC->Count_Counter_8_Transition_1_int32 =
        outC->_L4_Counter_8_Transition_1_int32;
      outC->InReferenceTimerTicket_Transition_1 = outC->_L8_Sitting_SM1;
      outC->_L98_Transition_1 = outC->InReferenceTimerTicket_Transition_1;
      outC->_L5_Sitting_SM1 = kcg_lit_int32(32);
      outC->InStartImage_Transition_1 = outC->_L5_Sitting_SM1;
      outC->_L84_Transition_1 = outC->InStartImage_Transition_1;
      /* @4/_L88= */
      if (outC->init1) {
        outC->_L88_Transition_1 = outC->_L84_Transition_1;
      }
      else {
        outC->_L88_Transition_1 = outC->_L93_Transition_1;
      }
      outC->_L91_Transition_1 = kcg_lit_int32(0);
      outC->_L90_Transition_1 = kcg_lit_int32(1);
      /* @4/_L74= */
      if (outC->_L69_Transition_1) {
        outC->_L74_Transition_1 = outC->_L90_Transition_1;
      }
      else {
        outC->_L74_Transition_1 = outC->_L91_Transition_1;
      }
      outC->_L93_Transition_1 = outC->_L74_Transition_1 + outC->_L88_Transition_1;
      outC->_L6_Sitting_SM1 = kcg_lit_int32(35);
      outC->InFinishImage_Transition_1 = outC->_L6_Sitting_SM1;
      outC->_L85_Transition_1 = outC->InFinishImage_Transition_1;
      outC->_L96_Transition_1 = outC->_L93_Transition_1 >= outC->_L85_Transition_1;
      /* @4/_L97= */
      if (outC->_L96_Transition_1) {
        outC->_L97_Transition_1 = outC->_L85_Transition_1;
      }
      else {
        outC->_L97_Transition_1 = outC->_L93_Transition_1;
      }
      outC->Out_Done_Transition_1 = outC->_L96_Transition_1;
      outC->_L72_Transition_1 = kcg_true;
      outC->_L75_Transition_1 = /* @4/_L75= */(kcg_uint16) outC->_L97_Transition_1;
      outC->_L76_Transition_1.Emit2DF = outC->_L72_Transition_1;
      outC->_L76_Transition_1.Reference = outC->_L75_Transition_1;
      kcg_copy_T_ImageReference(
        &outC->Out_ImageReference_Transition_1,
        &outC->_L76_Transition_1);
      outC->_L63_Transition_1 = outC->Count_Counter_8_Transition_1_int32;
      outC->_L71_Transition_1 = outC->_L98_Transition_1 <= outC->_L63_Transition_1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_raising_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      /* @7/_L18= */
      if (outC->init2) {
        outC->_L18_Counter_8_Transition_2_int32 =
          outC->_L47_Counter_8_Transition_2_int32;
      }
      else {
        outC->_L18_Counter_8_Transition_2_int32 =
          outC->_L9_Counter_8_Transition_2_int32;
      }
      outC->_L1_raising_SM1 = kcg_lit_int32(1);
      outC->InMagnitude_Transition_2 = outC->_L1_raising_SM1;
      outC->_L82_Transition_2 = outC->InMagnitude_Transition_2;
      outC->Incr_Counter_8_Transition_2_int32 = outC->_L82_Transition_2;
      outC->_L2_Counter_8_Transition_2_int32 =
        outC->Incr_Counter_8_Transition_2_int32;
      /* @6/_L69= */
      if (outC->init2) {
        outC->_L69_Transition_2 = kcg_false;
      }
      else {
        outC->_L69_Transition_2 = outC->_L71_Transition_2;
      }
      outC->Reset_Counter_8_Transition_2_int32 = outC->_L69_Transition_2;
      outC->_L3_Counter_8_Transition_2_int32 =
        outC->Reset_Counter_8_Transition_2_int32;
      /* @7/_L4= */
      if (outC->_L3_Counter_8_Transition_2_int32) {
        outC->_L4_Counter_8_Transition_2_int32 =
          outC->_L47_Counter_8_Transition_2_int32;
      }
      else {
        outC->_L4_Counter_8_Transition_2_int32 =
          outC->_L18_Counter_8_Transition_2_int32;
      }
      outC->_L9_Counter_8_Transition_2_int32 =
        outC->_L4_Counter_8_Transition_2_int32 + outC->_L2_Counter_8_Transition_2_int32;
      outC->Count_Counter_8_Transition_2_int32 =
        outC->_L4_Counter_8_Transition_2_int32;
      outC->_5_InReferenceTimerTicket_Transition_2 = outC->_L1_raising_SM1;
      outC->_L98_Transition_2 = outC->_5_InReferenceTimerTicket_Transition_2;
      outC->_L5_raising_SM1 = kcg_lit_int32(36);
      outC->InStartImage_Transition_2 = outC->_L5_raising_SM1;
      outC->_L84_Transition_2 = outC->InStartImage_Transition_2;
      /* @6/_L88= */
      if (outC->init2) {
        outC->_L88_Transition_2 = outC->_L84_Transition_2;
      }
      else {
        outC->_L88_Transition_2 = outC->_L93_Transition_2;
      }
      outC->_L91_Transition_2 = kcg_lit_int32(0);
      outC->_L90_Transition_2 = kcg_lit_int32(1);
      /* @6/_L74= */
      if (outC->_L69_Transition_2) {
        outC->_L74_Transition_2 = outC->_L90_Transition_2;
      }
      else {
        outC->_L74_Transition_2 = outC->_L91_Transition_2;
      }
      outC->_L93_Transition_2 = outC->_L74_Transition_2 + outC->_L88_Transition_2;
      outC->_L2_raising_SM1 = kcg_lit_int32(39);
      outC->InFinishImage_Transition_2 = outC->_L2_raising_SM1;
      outC->_L85_Transition_2 = outC->InFinishImage_Transition_2;
      outC->_L96_Transition_2 = outC->_L93_Transition_2 >= outC->_L85_Transition_2;
      /* @6/_L97= */
      if (outC->_L96_Transition_2) {
        outC->_L97_Transition_2 = outC->_L85_Transition_2;
      }
      else {
        outC->_L97_Transition_2 = outC->_L93_Transition_2;
      }
      outC->Out_Done_Transition_2 = outC->_L96_Transition_2;
      outC->_L72_Transition_2 = kcg_true;
      outC->_L75_Transition_2 = /* @6/_L75= */(kcg_uint16) outC->_L97_Transition_2;
      outC->_L76_Transition_2.Emit2DF = outC->_L72_Transition_2;
      outC->_L76_Transition_2.Reference = outC->_L75_Transition_2;
      kcg_copy_T_ImageReference(
        &outC->Out_ImageReference_Transition_2,
        &outC->_L76_Transition_2);
      outC->_L63_Transition_2 = outC->Count_Counter_8_Transition_2_int32;
      outC->_L71_Transition_2 = outC->_L98_Transition_2 <= outC->_L63_Transition_2;
      break;
    default :
      /* this branch is empty */
      break;
  }
  kcg_copy_T_String_01(
    &outC->_L8_Read_InputNumber_1,
    (T_String_01 *) &_END_STRING);
  kcg_copy_T_String_01(&outC->_L18, &inC->walkMagnitude);
  kcg_copy_T_String_01(&outC->ScalarNumber_Read_InputNumber_1, &outC->_L18);
  kcg_copy_T_String_01(
    &outC->_L2_Read_InputNumber_1,
    &outC->ScalarNumber_Read_InputNumber_1);
  outC->_L7_Read_InputNumber_1[0] = outC->_L2_Read_InputNumber_1[0];
  outC->_L7_Read_InputNumber_1[1] = outC->_L8_Read_InputNumber_1[0];
  outC->_L6_Read_InputNumber_1 = /* @8/_L6=(convert2Int#1)/ */
    convert2Int(&outC->_L7_Read_InputNumber_1);
  outC->_L52 = inC->MagnitudeNotification;
  outC->Notification_Read_InputNumber_1 = outC->_L52;
  outC->_L1_Read_InputNumber_1 = outC->Notification_Read_InputNumber_1;
  /* @8/_L5= */
  if (outC->_L1_Read_InputNumber_1) {
    outC->_L5_Read_InputNumber_1 = outC->_L6_Read_InputNumber_1;
  }
  else {
    outC->_L5_Read_InputNumber_1 = outC->_L4_Read_InputNumber_1;
  }
  outC->_L85 = DEFAULT_STEPS;
  outC->DefaultValue_Read_InputNumber_5 = outC->_L85;
  outC->_L9_Read_InputNumber_5 = outC->DefaultValue_Read_InputNumber_5;
  kcg_copy_T_String_01(
    &outC->_L8_Read_InputNumber_5,
    (T_String_01 *) &_END_STRING);
  kcg_copy_T_String_01(&outC->_L15, &inC->walkSteps);
  kcg_copy_T_String_01(&outC->ScalarNumber_Read_InputNumber_5, &outC->_L15);
  kcg_copy_T_String_01(
    &outC->_L2_Read_InputNumber_5,
    &outC->ScalarNumber_Read_InputNumber_5);
  outC->_L7_Read_InputNumber_5[0] = outC->_L2_Read_InputNumber_5[0];
  outC->_L7_Read_InputNumber_5[1] = outC->_L8_Read_InputNumber_5[0];
  outC->_L6_Read_InputNumber_5 = /* @9/_L6=(convert2Int#1)/ */
    convert2Int(&outC->_L7_Read_InputNumber_5);
  /* @9/_L4= */
  if (outC->init3) {
    outC->_L4_Read_InputNumber_5 = outC->_L9_Read_InputNumber_5;
  }
  else {
    outC->_L4_Read_InputNumber_5 = outC->_L5_Read_InputNumber_5;
  }
  outC->_L51 = inC->StepsNotification;
  outC->Notification_Read_InputNumber_5 = outC->_L51;
  outC->_L1_Read_InputNumber_5 = outC->Notification_Read_InputNumber_5;
  /* @9/_L5= */
  if (outC->_L1_Read_InputNumber_5) {
    outC->_L5_Read_InputNumber_5 = outC->_L6_Read_InputNumber_5;
  }
  else {
    outC->_L5_Read_InputNumber_5 = outC->_L4_Read_InputNumber_5;
  }
  outC->Number_Read_InputNumber_5 = outC->_L4_Read_InputNumber_5;
  last_varDoneSitting = outC->varDoneSitting;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      _50_varDoneSitting_partial = last_varDoneSitting;
      outC->varDoneSitting = _50_varDoneSitting_partial;
      break;
    case SSM_st_sat_SM1 :
      _40_varDoneSitting_partial = last_varDoneSitting;
      outC->varDoneSitting = _40_varDoneSitting_partial;
      break;
    case SSM_st_Sitting_SM1 :
      outC->_L2_Sitting_SM1 = outC->Out_Done_Transition_1;
      _30_varDoneSitting_partial = outC->_L2_Sitting_SM1;
      outC->varDoneSitting = _30_varDoneSitting_partial;
      break;
    case SSM_st_Runned_SM1 :
      _20_varDoneSitting_partial = last_varDoneSitting;
      outC->varDoneSitting = _20_varDoneSitting_partial;
      break;
    case SSM_st_Running_SM1 :
      _10_varDoneSitting_partial = last_varDoneSitting;
      outC->varDoneSitting = _10_varDoneSitting_partial;
      break;
    case SSM_st_Waiting_SM1 :
      outC->_L6_Waiting_SM1 = kcg_false;
      varDoneSitting_partial = outC->_L6_Waiting_SM1;
      outC->varDoneSitting = varDoneSitting_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L43 = outC->varDoneSitting;
  outC->isSitting_DisplayView_1 = outC->_L43;
  outC->_L3_DisplayView_1 = outC->isSitting_DisplayView_1;
  outC->EnablePbRaise_DisplayView_1 = outC->_L3_DisplayView_1;
  outC->_L10_DisplayView_1 = !outC->_L3_DisplayView_1;
  outC->EnablePbSit_DisplayView_1 = outC->_L10_DisplayView_1;
  outC->_L59 = outC->Number_Read_InputNumber_5;
  outC->Steps = outC->_L59;
  outC->_L81 = outC->Steps;
  /* _L86=(convert2Char_3#1)/ */ convert2Char_3(outC->_L81, &outC->_L86);
  kcg_copy_T_String_03(&outC->CommandPlus_Protocol_1, &outC->_L86);
  kcg_copy_T_String_03(&outC->_L56_Protocol_1, &outC->CommandPlus_Protocol_1);
  outC->_L78 = outC->Magnitude;
  /* _L79=(convert2Char_1#1)/ */ convert2Char_1(outC->_L78, &outC->_L79);
  kcg_copy_T_String_01(&outC->Magnitude_Protocol_1, &outC->_L79);
  kcg_copy_T_String_01(&outC->_L54_Protocol_1, &outC->Magnitude_Protocol_1);
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      kcg_copy_T_String_02(&outC->_L12_raising_SM1, (T_String_02 *) &P_CMD_UP);
      kcg_copy_T_String_02(&_53_currentCommand_partial, &outC->_L12_raising_SM1);
      kcg_copy_T_String_02(&outC->currentCommand, &_53_currentCommand_partial);
      break;
    case SSM_st_sat_SM1 :
      kcg_copy_T_String_02(&outC->_L26_sat_SM1, (T_String_02 *) &P_CMD_SI);
      kcg_copy_T_String_02(&_43_currentCommand_partial, &outC->_L26_sat_SM1);
      kcg_copy_T_String_02(&outC->currentCommand, &_43_currentCommand_partial);
      break;
    case SSM_st_Sitting_SM1 :
      kcg_copy_T_String_02(&outC->_L12_Sitting_SM1, (T_String_02 *) &P_CMD_SI);
      kcg_copy_T_String_02(&_33_currentCommand_partial, &outC->_L12_Sitting_SM1);
      kcg_copy_T_String_02(&outC->currentCommand, &_33_currentCommand_partial);
      break;
    case SSM_st_Runned_SM1 :
      kcg_copy_T_String_02(&outC->_L12_Runned_SM1, (T_String_02 *) &P_CMD_FW);
      kcg_copy_T_String_02(&_23_currentCommand_partial, &outC->_L12_Runned_SM1);
      kcg_copy_T_String_02(&outC->currentCommand, &_23_currentCommand_partial);
      break;
    case SSM_st_Running_SM1 :
      kcg_copy_T_String_02(&outC->_L54_Running_SM1, (T_String_02 *) &P_CMD_FW);
      kcg_copy_T_String_02(&_13_currentCommand_partial, &outC->_L54_Running_SM1);
      kcg_copy_T_String_02(&outC->currentCommand, &_13_currentCommand_partial);
      break;
    case SSM_st_Waiting_SM1 :
      kcg_copy_T_String_02(&outC->_L22_Waiting_SM1, (T_String_02 *) &P_CMD);
      kcg_copy_T_String_02(&currentCommand_partial, &outC->_L22_Waiting_SM1);
      kcg_copy_T_String_02(&outC->currentCommand, &currentCommand_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_T_String_02(&outC->_L44, &outC->currentCommand);
  kcg_copy_T_String_02(&outC->Command_Protocol_1, &outC->_L44);
  kcg_copy_T_String_02(&outC->_L53_Protocol_1, &outC->Command_Protocol_1);
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      kcg_copy_T_String_02(&outC->_L13_raising_SM1, (T_String_02 *) &P_STATUS_RN);
      kcg_copy_T_String_02(&_52_currentStatus_partial, &outC->_L13_raising_SM1);
      kcg_copy_T_String_02(&outC->currentStatus, &_52_currentStatus_partial);
      break;
    case SSM_st_sat_SM1 :
      kcg_copy_T_String_02(&outC->_L27_sat_SM1, (T_String_02 *) &P_STATUS_WT);
      kcg_copy_T_String_02(&_42_currentStatus_partial, &outC->_L27_sat_SM1);
      kcg_copy_T_String_02(&outC->currentStatus, &_42_currentStatus_partial);
      break;
    case SSM_st_Sitting_SM1 :
      kcg_copy_T_String_02(&outC->_L10_Sitting_SM1, (T_String_02 *) &P_STATUS_RN);
      kcg_copy_T_String_02(&_32_currentStatus_partial, &outC->_L10_Sitting_SM1);
      kcg_copy_T_String_02(&outC->currentStatus, &_32_currentStatus_partial);
      break;
    case SSM_st_Runned_SM1 :
      kcg_copy_T_String_02(&outC->_L13_Runned_SM1, (T_String_02 *) &P_STATUS_WT);
      kcg_copy_T_String_02(&_22_currentStatus_partial, &outC->_L13_Runned_SM1);
      kcg_copy_T_String_02(&outC->currentStatus, &_22_currentStatus_partial);
      break;
    case SSM_st_Running_SM1 :
      kcg_copy_T_String_02(&outC->_L53_Running_SM1, (T_String_02 *) &P_STATUS_RN);
      kcg_copy_T_String_02(&_12_currentStatus_partial, &outC->_L53_Running_SM1);
      kcg_copy_T_String_02(&outC->currentStatus, &_12_currentStatus_partial);
      break;
    case SSM_st_Waiting_SM1 :
      kcg_copy_T_String_02(&outC->_L20_Waiting_SM1, (T_String_02 *) &P_STATUS_WT);
      kcg_copy_T_String_02(&currentStatus_partial, &outC->_L20_Waiting_SM1);
      kcg_copy_T_String_02(&outC->currentStatus, &currentStatus_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_T_String_02(&outC->_L45, &outC->currentStatus);
  kcg_copy_T_String_02(&outC->Status_Protocol_1, &outC->_L45);
  kcg_copy_T_String_02(&outC->_L52_Protocol_1, &outC->Status_Protocol_1);
  kcg_copy_T_String_01(&outC->_L51_Protocol_1, (T_String_01 *) &_END_STRING);
  kcg_copy_T_String_01(&outC->_L49_Protocol_1, (T_String_01 *) &_END_STRING);
  kcg_copy_T_String_10(&outC->_L13_Protocol_1, (T_String_10 *) &P_TIME);
  kcg_copy_T_String_01(&outC->_L11_Protocol_1, (T_String_01 *) &P_RESERVED);
  kcg_copy_T_String_02(&tmp2[0], &outC->_L53_Protocol_1);
  tmp2[2] = outC->_L54_Protocol_1[0];
  kcg_copy_T_String_03(&tmp1[0], &tmp2);
  kcg_copy_T_String_03(&tmp1[3], &outC->_L56_Protocol_1);
  kcg_copy_T_String_06(&tmp[0], &tmp1);
  tmp[6] = outC->_L11_Protocol_1[0];
  kcg_copy_array_char_7(&outC->_L17_Protocol_1[0], &tmp);
  kcg_copy_T_String_02(&outC->_L17_Protocol_1[7], &outC->_L52_Protocol_1);
  kcg_copy_T_String_06(&outC->_L4_Protocol_1, (T_String_06 *) &P_TO);
  kcg_copy_T_String_06(&outC->_L3_Protocol_1, (T_String_06 *) &P_FROM);
  kcg_copy_T_String_06(&outC->_L2_Protocol_1, (T_String_06 *) &P_TOPIC);
  kcg_copy_T_String_06(&outC->_L1_Protocol_1, (T_String_06 *) &P_HEADER);
  kcg_copy_T_String_06(&tmp6[0], &outC->_L1_Protocol_1);
  kcg_copy_T_String_06(&tmp6[6], &outC->_L2_Protocol_1);
  kcg_copy_array_char_12(&tmp5[0], &tmp6);
  kcg_copy_T_String_06(&tmp5[12], &outC->_L3_Protocol_1);
  kcg_copy_array_char_18(&tmp4[0], &tmp5);
  kcg_copy_T_String_06(&tmp4[18], &outC->_L4_Protocol_1);
  kcg_copy_array_char_24(&tmp3[0], &tmp4);
  kcg_copy_array_char_9(&tmp3[24], &outC->_L17_Protocol_1);
  kcg_copy_T_String_33(&outC->_L7_Protocol_1[0], &tmp3);
  kcg_copy_T_String_10(&outC->_L7_Protocol_1[33], &outC->_L13_Protocol_1);
  /* @11/_L14=(checkMd5#1)/ */
  checkMd5(&outC->_L7_Protocol_1, &outC->_L14_Protocol_1);
  kcg_copy_T_String_43(&outC->_L16_Protocol_1[0], &outC->_L7_Protocol_1);
  kcg_copy_T_String_32(&outC->_L16_Protocol_1[43], &outC->_L14_Protocol_1);
  kcg_copy_array_char_75(&outC->_L48_Protocol_1[0], &outC->_L16_Protocol_1);
  outC->_L48_Protocol_1[75] = outC->_L51_Protocol_1[0];
  kcg_copy_T_String_32(&outC->_L47_Protocol_1[0], &outC->_L14_Protocol_1);
  outC->_L47_Protocol_1[32] = outC->_L49_Protocol_1[0];
  kcg_copy_T_String_01(&outC->_L46_Protocol_1, (T_String_01 *) &_END_STRING);
  kcg_copy_array_char_9(&outC->_L45_Protocol_1[0], &outC->_L17_Protocol_1);
  outC->_L45_Protocol_1[9] = outC->_L46_Protocol_1[0];
  outC->_L24_Protocol_1 = kcg_true;
  outC->_L32_Protocol_1 = kcg_lit_int32(10);
  outC->_L30_Protocol_1 = /* @11/_L30= */(kcg_uint16) outC->_L32_Protocol_1;
  outC->_L44_Protocol_1.Emit2DF = outC->_L24_Protocol_1;
  outC->_L44_Protocol_1.string_size = outC->_L30_Protocol_1;
  kcg_copy_T_String_10(&outC->_L44_Protocol_1.value, &outC->_L45_Protocol_1);
  outC->_L33_Protocol_1 = kcg_lit_int32(33);
  outC->_L42_Protocol_1 = /* @11/_L42= */(kcg_uint16) outC->_L33_Protocol_1;
  outC->_L34_Protocol_1 = kcg_lit_int32(76);
  outC->_L41_Protocol_1 = /* @11/_L41= */(kcg_uint16) outC->_L34_Protocol_1;
  outC->_L40_Protocol_1.Emit2DF = outC->_L24_Protocol_1;
  outC->_L40_Protocol_1.string_size = outC->_L41_Protocol_1;
  kcg_copy_T_String_76(&outC->_L40_Protocol_1.value, &outC->_L48_Protocol_1);
  outC->_L39_Protocol_1.Emit2DF = outC->_L24_Protocol_1;
  outC->_L39_Protocol_1.string_size = outC->_L42_Protocol_1;
  kcg_copy_T_String_33(&outC->_L39_Protocol_1.value, &outC->_L47_Protocol_1);
  kcg_copy_S_ToLabel_33(&outC->OutMd5_Protocol_1, &outC->_L39_Protocol_1);
  kcg_copy_S_ToLabel_10(&outC->OutCMD_Protocol_1, &outC->_L44_Protocol_1);
  kcg_copy_T_String_01(&outC->_L9_Protocol_1, (T_String_01 *) &P_MAGNITUDE);
  kcg_copy_S_ToLabel_76(&outC->OutProtocol_Protocol_1, &outC->_L40_Protocol_1);
  last_varDoneRising = outC->varDoneRising;
  kcg_copy_T_ImageReference(&last_ImageReference, &outC->ImageReference);
  last_varWaiting = outC->varWaiting;
  last_varDoneRunning = outC->varDoneRunning;
  kcg_copy_S_ToLabel_33(&outC->_L63, &outC->OutMd5_Protocol_1);
  kcg_copy_S_ToLabel_33(&outC->Out_Protocol_OutMD5, &outC->_L63);
  kcg_copy_S_ToLabel_10(&outC->_L64, &outC->OutCMD_Protocol_1);
  kcg_copy_S_ToLabel_10(&outC->Out_Protocol_OutCMD, &outC->_L64);
  kcg_copy_S_ToLabel_76(&outC->_L62, &outC->OutProtocol_Protocol_1);
  kcg_copy_S_ToLabel_76(&outC->Out_Protocol_OutProtocol, &outC->_L62);
  outC->_L41 = outC->EnablePbSit_DisplayView_1;
  outC->_L42 = outC->EnablePbRaise_DisplayView_1;
  outC->EnablePbRaise = outC->_L42;
  outC->EnablePbSit = outC->_L41;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      kcg_copy_T_ImageReference(
        &outC->_L3_raising_SM1,
        &outC->Out_ImageReference_Transition_2);
      kcg_copy_T_ImageReference(&_49_ImageReference_partial, &outC->_L3_raising_SM1);
      kcg_copy_T_ImageReference(&outC->ImageReference, &_49_ImageReference_partial);
      break;
    case SSM_st_sat_SM1 :
      kcg_copy_T_ImageReference(&_39_ImageReference_partial, &last_ImageReference);
      kcg_copy_T_ImageReference(&outC->ImageReference, &_39_ImageReference_partial);
      break;
    case SSM_st_Sitting_SM1 :
      kcg_copy_T_ImageReference(
        &outC->_L1_Sitting_SM1,
        &outC->Out_ImageReference_Transition_1);
      kcg_copy_T_ImageReference(&_29_ImageReference_partial, &outC->_L1_Sitting_SM1);
      kcg_copy_T_ImageReference(&outC->ImageReference, &_29_ImageReference_partial);
      break;
    case SSM_st_Runned_SM1 :
      kcg_copy_T_ImageReference(&_19_ImageReference_partial, &last_ImageReference);
      kcg_copy_T_ImageReference(&outC->ImageReference, &_19_ImageReference_partial);
      break;
    case SSM_st_Running_SM1 :
      outC->_L43_Running_SM1 = kcg_true;
      outC->_L38_Running_SM1 = outC->Count_MovingCycle_1;
      outC->_L44_Running_SM1 = /* SM1:Running:_L44= */(kcg_uint16)
          outC->_L38_Running_SM1;
      outC->_L42_Running_SM1.Emit2DF = outC->_L43_Running_SM1;
      outC->_L42_Running_SM1.Reference = outC->_L44_Running_SM1;
      kcg_copy_T_ImageReference(&_9_ImageReference_partial, &outC->_L42_Running_SM1);
      kcg_copy_T_ImageReference(&outC->ImageReference, &_9_ImageReference_partial);
      break;
    case SSM_st_Waiting_SM1 :
      outC->_L15_Waiting_SM1 = kcg_true;
      outC->_L12_Waiting_SM1 = kcg_lit_int32(1);
      outC->_L14_Waiting_SM1 = /* SM1:Waiting:_L14= */(kcg_uint16)
          outC->_L12_Waiting_SM1;
      outC->_L13_Waiting_SM1.Emit2DF = outC->_L15_Waiting_SM1;
      outC->_L13_Waiting_SM1.Reference = outC->_L14_Waiting_SM1;
      kcg_copy_T_ImageReference(&ImageReference_partial, &outC->_L13_Waiting_SM1);
      kcg_copy_T_ImageReference(&outC->ImageReference, &ImageReference_partial);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_T_ImageReference(&outC->_L37, &outC->ImageReference);
  kcg_copy_T_ImageReference(&outC->OutImageReference, &outC->_L37);
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      _48_varWaiting_partial = last_varWaiting;
      _47_varDoneRunning_partial = last_varDoneRunning;
      outC->_L4_raising_SM1 = outC->Out_Done_Transition_2;
      _51_varDoneRising_partial = outC->_L4_raising_SM1;
      tr_1_guard_raising_SM1 = _51_varDoneRising_partial;
      if (tr_1_guard_raising_SM1) {
        _56_SM1_fired_partial = SSM_TR_raising_Waiting_1_raising_SM1;
      }
      else {
        _56_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      _55_SM1_reset_nxt_partial = tr_1_guard_raising_SM1;
      if (tr_1_guard_raising_SM1) {
        _54_SM1_state_nxt_partial = SSM_st_Waiting_SM1;
      }
      else {
        _54_SM1_state_nxt_partial = SSM_st_raising_SM1;
      }
      break;
    case SSM_st_sat_SM1 :
      _41_varDoneRising_partial = last_varDoneRising;
      _38_varWaiting_partial = last_varWaiting;
      _37_varDoneRunning_partial = last_varDoneRunning;
      tr_1_guard_sat_SM1 = inC->raiseStart;
      if (tr_1_guard_sat_SM1) {
        _46_SM1_fired_partial = SSM_TR_sat_raising_1_sat_SM1;
      }
      else {
        _46_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      _45_SM1_reset_nxt_partial = tr_1_guard_sat_SM1;
      if (tr_1_guard_sat_SM1) {
        _44_SM1_state_nxt_partial = SSM_st_raising_SM1;
      }
      else {
        _44_SM1_state_nxt_partial = SSM_st_sat_SM1;
      }
      break;
    case SSM_st_Sitting_SM1 :
      _31_varDoneRising_partial = last_varDoneRising;
      _28_varWaiting_partial = last_varWaiting;
      _27_varDoneRunning_partial = last_varDoneRunning;
      tr_1_guard_Sitting_SM1 = _30_varDoneSitting_partial;
      if (tr_1_guard_Sitting_SM1) {
        _36_SM1_fired_partial = SSM_TR_Sitting_sat_1_Sitting_SM1;
      }
      else {
        _36_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      _35_SM1_reset_nxt_partial = tr_1_guard_Sitting_SM1;
      if (tr_1_guard_Sitting_SM1) {
        _34_SM1_state_nxt_partial = SSM_st_sat_SM1;
      }
      else {
        _34_SM1_state_nxt_partial = SSM_st_Sitting_SM1;
      }
      break;
    case SSM_st_Runned_SM1 :
      _21_varDoneRising_partial = last_varDoneRising;
      _17_varDoneRunning_partial = last_varDoneRunning;
      outC->_L5_Runned_SM1 = kcg_lit_int32(10);
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Runned_SM1 :
      if (SM1_reset_sel) {
        outC->init4 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      outC->varDoneRunning = _47_varDoneRunning_partial;
      outC->varWaiting = _48_varWaiting_partial;
      outC->varDoneRising = _51_varDoneRising_partial;
      outC->SM1_state_nxt = _54_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _55_SM1_reset_nxt_partial;
      outC->SM1_fired = _56_SM1_fired_partial;
      break;
    case SSM_st_sat_SM1 :
      outC->varDoneRunning = _37_varDoneRunning_partial;
      outC->varWaiting = _38_varWaiting_partial;
      outC->varDoneRising = _41_varDoneRising_partial;
      outC->SM1_state_nxt = _44_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _45_SM1_reset_nxt_partial;
      outC->SM1_fired = _46_SM1_fired_partial;
      break;
    case SSM_st_Sitting_SM1 :
      outC->varDoneRunning = _27_varDoneRunning_partial;
      outC->varWaiting = _28_varWaiting_partial;
      outC->varDoneRising = _31_varDoneRising_partial;
      outC->SM1_state_nxt = _34_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _35_SM1_reset_nxt_partial;
      outC->SM1_fired = _36_SM1_fired_partial;
      break;
    case SSM_st_Runned_SM1 :
      /* SM1:Runned:_L1= */
      if (outC->init4) {
        outC->_L1_Runned_SM1 = kcg_lit_int32(0);
      }
      else {
        outC->_L1_Runned_SM1 = outC->_L4_Runned_SM1;
      }
      outC->_L3_Runned_SM1 = kcg_lit_int32(1);
      outC->_L4_Runned_SM1 = outC->_L1_Runned_SM1 + outC->_L3_Runned_SM1;
      outC->_L2_Runned_SM1 = outC->_L4_Runned_SM1 >= outC->_L5_Runned_SM1;
      outC->_L7_Runned_SM1 = !outC->_L2_Runned_SM1;
      _18_varWaiting_partial = outC->_L7_Runned_SM1;
      tr_1_guard_Runned_SM1 = _18_varWaiting_partial;
      if (tr_1_guard_Runned_SM1) {
        _26_SM1_fired_partial = SSM_TR_Runned_Waiting_1_Runned_SM1;
      }
      else {
        _26_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      _25_SM1_reset_nxt_partial = tr_1_guard_Runned_SM1;
      if (tr_1_guard_Runned_SM1) {
        _24_SM1_state_nxt_partial = SSM_st_Waiting_SM1;
      }
      else {
        _24_SM1_state_nxt_partial = SSM_st_Runned_SM1;
      }
      outC->varDoneRunning = _17_varDoneRunning_partial;
      outC->varWaiting = _18_varWaiting_partial;
      outC->varDoneRising = _21_varDoneRising_partial;
      outC->SM1_state_nxt = _24_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _25_SM1_reset_nxt_partial;
      outC->SM1_fired = _26_SM1_fired_partial;
      break;
    case SSM_st_Running_SM1 :
      _11_varDoneRising_partial = last_varDoneRising;
      _8_varWaiting_partial = last_varWaiting;
      outC->_L21_Running_SM1 = outC->Count_Counter_2_int32;
      outC->_L15_Running_SM1 = outC->Steps;
      outC->_L26_Running_SM1 = outC->_L15_Running_SM1 <= outC->_L21_Running_SM1;
      _7_varDoneRunning_partial = outC->_L26_Running_SM1;
      tr_1_guard_Running_SM1 = _7_varDoneRunning_partial;
      if (tr_1_guard_Running_SM1) {
        _16_SM1_fired_partial = SSM_TR_Running_Runned_1_Running_SM1;
      }
      else {
        _16_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      _15_SM1_reset_nxt_partial = tr_1_guard_Running_SM1;
      if (tr_1_guard_Running_SM1) {
        _14_SM1_state_nxt_partial = SSM_st_Runned_SM1;
      }
      else {
        _14_SM1_state_nxt_partial = SSM_st_Running_SM1;
      }
      outC->_L9_Running_SM1 = outC->Count_Counter_1_int32;
      outC->_L11_Running_SM1 = kcg_lit_int32(10);
      outC->_L25_Running_SM1 = outC->_L11_Running_SM1 <= outC->_L9_Running_SM1;
      outC->varDoneRunning = _7_varDoneRunning_partial;
      outC->varWaiting = _8_varWaiting_partial;
      outC->varDoneRising = _11_varDoneRising_partial;
      outC->SM1_state_nxt = _14_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _15_SM1_reset_nxt_partial;
      outC->SM1_fired = _16_SM1_fired_partial;
      break;
    case SSM_st_Waiting_SM1 :
      tr_2_guard_Waiting_SM1 = inC->walkStart;
      tr_1_guard_Waiting_SM1 = inC->sitStart;
      if (tr_1_guard_Waiting_SM1) {
        SM1_fired_partial = SSM_TR_Waiting_Sitting_1_Waiting_SM1;
      }
      else if (tr_2_guard_Waiting_SM1) {
        SM1_fired_partial = SSM_TR_Waiting_Running_2_Waiting_SM1;
      }
      else {
        SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      if (tr_1_guard_Waiting_SM1) {
        SM1_reset_nxt_partial = kcg_true;
      }
      else {
        SM1_reset_nxt_partial = tr_2_guard_Waiting_SM1;
      }
      if (tr_1_guard_Waiting_SM1) {
        SM1_state_nxt_partial = SSM_st_Sitting_SM1;
      }
      else if (tr_2_guard_Waiting_SM1) {
        SM1_state_nxt_partial = SSM_st_Running_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_Waiting_SM1;
      }
      varWaiting_partial = outC->_L6_Waiting_SM1;
      varDoneRising_partial = outC->_L6_Waiting_SM1;
      varDoneRunning_partial = outC->_L6_Waiting_SM1;
      outC->varDoneRunning = varDoneRunning_partial;
      outC->varWaiting = varWaiting_partial;
      outC->varDoneRising = varDoneRising_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
  switch (outC->SM1_state_act) {
    case SSM_st_Runned_SM1 :
      outC->init4 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->init3 = kcg_false;
  switch (outC->SM1_state_act) {
    case SSM_st_raising_SM1 :
      outC->init2 = kcg_false;
      break;
    case SSM_st_Sitting_SM1 :
      outC->init1 = kcg_false;
      break;
    case SSM_st_Running_SM1 :
      outC->init = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Main_init(outC_Main *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;

  for (idx = 0; idx < 3; idx++) {
    outC->_L86[idx] = ' ';
  }
  outC->_L85 = kcg_lit_int32(0);
  outC->_L84 = kcg_lit_int32(0);
  outC->_L81 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    outC->_L79[idx1] = ' ';
  }
  outC->_L78 = kcg_lit_int32(0);
  outC->_L64.Emit2DF = kcg_true;
  outC->_L64.string_size = kcg_lit_uint16(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L64.value[idx2] = ' ';
  }
  outC->_L63.Emit2DF = kcg_true;
  outC->_L63.string_size = kcg_lit_uint16(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L63.value[idx3] = ' ';
  }
  outC->_L62.Emit2DF = kcg_true;
  outC->_L62.string_size = kcg_lit_uint16(0);
  for (idx4 = 0; idx4 < 76; idx4++) {
    outC->_L62.value[idx4] = ' ';
  }
  outC->_L41 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L59 = kcg_lit_int32(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  for (idx5 = 0; idx5 < 1; idx5++) {
    outC->_L15[idx5] = ' ';
  }
  for (idx6 = 0; idx6 < 1; idx6++) {
    outC->_L18[idx6] = ' ';
  }
  for (idx7 = 0; idx7 < 2; idx7++) {
    outC->_L45[idx7] = ' ';
  }
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L44[idx8] = ' ';
  }
  outC->_L43 = kcg_true;
  outC->_L37.Emit2DF = kcg_true;
  outC->_L37.Reference = kcg_lit_uint16(0);
  for (idx9 = 0; idx9 < 2; idx9++) {
    outC->currentCommand[idx9] = ' ';
  }
  for (idx10 = 0; idx10 < 2; idx10++) {
    outC->currentStatus[idx10] = ' ';
  }
  outC->Steps = kcg_lit_int32(0);
  outC->Magnitude = kcg_lit_int32(0);
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Waiting_SM1;
  outC->SM1_state_sel = SSM_st_Waiting_SM1;
  outC->_L5_raising_SM1 = kcg_lit_int32(0);
  outC->_L3_raising_SM1.Emit2DF = kcg_true;
  outC->_L3_raising_SM1.Reference = kcg_lit_uint16(0);
  outC->_L4_raising_SM1 = kcg_true;
  outC->_L2_raising_SM1 = kcg_lit_int32(0);
  outC->_L1_raising_SM1 = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 2; idx11++) {
    outC->_L12_raising_SM1[idx11] = ' ';
  }
  for (idx12 = 0; idx12 < 2; idx12++) {
    outC->_L13_raising_SM1[idx12] = ' ';
  }
  for (idx13 = 0; idx13 < 2; idx13++) {
    outC->_L26_sat_SM1[idx13] = ' ';
  }
  for (idx14 = 0; idx14 < 2; idx14++) {
    outC->_L27_sat_SM1[idx14] = ' ';
  }
  outC->_L2_Sitting_SM1 = kcg_true;
  outC->_L1_Sitting_SM1.Emit2DF = kcg_true;
  outC->_L1_Sitting_SM1.Reference = kcg_lit_uint16(0);
  outC->_L5_Sitting_SM1 = kcg_lit_int32(0);
  outC->_L6_Sitting_SM1 = kcg_lit_int32(0);
  outC->_L8_Sitting_SM1 = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 2; idx15++) {
    outC->_L10_Sitting_SM1[idx15] = ' ';
  }
  for (idx16 = 0; idx16 < 2; idx16++) {
    outC->_L12_Sitting_SM1[idx16] = ' ';
  }
  outC->_L5_Runned_SM1 = kcg_lit_int32(0);
  outC->_L3_Runned_SM1 = kcg_lit_int32(0);
  outC->_L2_Runned_SM1 = kcg_true;
  outC->_L1_Runned_SM1 = kcg_lit_int32(0);
  outC->_L7_Runned_SM1 = kcg_true;
  for (idx17 = 0; idx17 < 2; idx17++) {
    outC->_L12_Runned_SM1[idx17] = ' ';
  }
  for (idx18 = 0; idx18 < 2; idx18++) {
    outC->_L13_Runned_SM1[idx18] = ' ';
  }
  outC->_L15_Running_SM1 = kcg_lit_int32(0);
  outC->_L47_Running_SM1 = kcg_true;
  outC->_L48_Running_SM1 = kcg_true;
  outC->_L46_Running_SM1 = kcg_true;
  outC->_L44_Running_SM1 = kcg_lit_uint16(0);
  outC->_L43_Running_SM1 = kcg_true;
  outC->_L42_Running_SM1.Emit2DF = kcg_true;
  outC->_L42_Running_SM1.Reference = kcg_lit_uint16(0);
  outC->_L40_Running_SM1 = kcg_lit_int32(0);
  outC->_L39_Running_SM1 = kcg_lit_int32(0);
  outC->_L38_Running_SM1 = kcg_lit_int32(0);
  outC->_L13_Running_SM1 = kcg_lit_int32(0);
  outC->_L17_Running_SM1 = kcg_lit_int32(0);
  outC->_L20_Running_SM1 = kcg_lit_int32(0);
  outC->_L21_Running_SM1 = kcg_lit_int32(0);
  outC->_L24_Running_SM1 = kcg_true;
  outC->_L26_Running_SM1 = kcg_true;
  outC->_L12_Running_SM1 = kcg_true;
  outC->_L11_Running_SM1 = kcg_lit_int32(0);
  outC->_L9_Running_SM1 = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 2; idx19++) {
    outC->_L53_Running_SM1[idx19] = ' ';
  }
  for (idx20 = 0; idx20 < 2; idx20++) {
    outC->_L54_Running_SM1[idx20] = ' ';
  }
  outC->_L5_Running_SM1 = kcg_lit_int32(0);
  outC->_L55_Running_SM1 = kcg_true;
  outC->_L6_Waiting_SM1 = kcg_true;
  outC->_L12_Waiting_SM1 = kcg_lit_int32(0);
  outC->_L13_Waiting_SM1.Emit2DF = kcg_true;
  outC->_L13_Waiting_SM1.Reference = kcg_lit_uint16(0);
  outC->_L14_Waiting_SM1 = kcg_lit_uint16(0);
  outC->_L15_Waiting_SM1 = kcg_true;
  for (idx21 = 0; idx21 < 2; idx21++) {
    outC->_L20_Waiting_SM1[idx21] = ' ';
  }
  for (idx22 = 0; idx22 < 2; idx22++) {
    outC->_L22_Waiting_SM1[idx22] = ' ';
  }
  for (idx23 = 0; idx23 < 6; idx23++) {
    outC->_L1_Protocol_1[idx23] = ' ';
  }
  for (idx24 = 0; idx24 < 6; idx24++) {
    outC->_L2_Protocol_1[idx24] = ' ';
  }
  for (idx25 = 0; idx25 < 6; idx25++) {
    outC->_L3_Protocol_1[idx25] = ' ';
  }
  for (idx26 = 0; idx26 < 6; idx26++) {
    outC->_L4_Protocol_1[idx26] = ' ';
  }
  for (idx27 = 0; idx27 < 43; idx27++) {
    outC->_L7_Protocol_1[idx27] = ' ';
  }
  for (idx28 = 0; idx28 < 1; idx28++) {
    outC->_L9_Protocol_1[idx28] = ' ';
  }
  for (idx29 = 0; idx29 < 1; idx29++) {
    outC->_L11_Protocol_1[idx29] = ' ';
  }
  for (idx30 = 0; idx30 < 10; idx30++) {
    outC->_L13_Protocol_1[idx30] = ' ';
  }
  for (idx31 = 0; idx31 < 32; idx31++) {
    outC->_L14_Protocol_1[idx31] = ' ';
  }
  for (idx32 = 0; idx32 < 75; idx32++) {
    outC->_L16_Protocol_1[idx32] = ' ';
  }
  for (idx33 = 0; idx33 < 9; idx33++) {
    outC->_L17_Protocol_1[idx33] = ' ';
  }
  outC->_L24_Protocol_1 = kcg_true;
  outC->_L30_Protocol_1 = kcg_lit_uint16(0);
  outC->_L32_Protocol_1 = kcg_lit_int32(0);
  outC->_L33_Protocol_1 = kcg_lit_int32(0);
  outC->_L34_Protocol_1 = kcg_lit_int32(0);
  outC->_L39_Protocol_1.Emit2DF = kcg_true;
  outC->_L39_Protocol_1.string_size = kcg_lit_uint16(0);
  for (idx34 = 0; idx34 < 33; idx34++) {
    outC->_L39_Protocol_1.value[idx34] = ' ';
  }
  outC->_L40_Protocol_1.Emit2DF = kcg_true;
  outC->_L40_Protocol_1.string_size = kcg_lit_uint16(0);
  for (idx35 = 0; idx35 < 76; idx35++) {
    outC->_L40_Protocol_1.value[idx35] = ' ';
  }
  outC->_L41_Protocol_1 = kcg_lit_uint16(0);
  outC->_L42_Protocol_1 = kcg_lit_uint16(0);
  outC->_L44_Protocol_1.Emit2DF = kcg_true;
  outC->_L44_Protocol_1.string_size = kcg_lit_uint16(0);
  for (idx36 = 0; idx36 < 10; idx36++) {
    outC->_L44_Protocol_1.value[idx36] = ' ';
  }
  for (idx37 = 0; idx37 < 10; idx37++) {
    outC->_L45_Protocol_1[idx37] = ' ';
  }
  for (idx38 = 0; idx38 < 1; idx38++) {
    outC->_L46_Protocol_1[idx38] = ' ';
  }
  for (idx39 = 0; idx39 < 33; idx39++) {
    outC->_L47_Protocol_1[idx39] = ' ';
  }
  for (idx40 = 0; idx40 < 76; idx40++) {
    outC->_L48_Protocol_1[idx40] = ' ';
  }
  for (idx41 = 0; idx41 < 1; idx41++) {
    outC->_L49_Protocol_1[idx41] = ' ';
  }
  for (idx42 = 0; idx42 < 1; idx42++) {
    outC->_L51_Protocol_1[idx42] = ' ';
  }
  for (idx43 = 0; idx43 < 2; idx43++) {
    outC->_L52_Protocol_1[idx43] = ' ';
  }
  for (idx44 = 0; idx44 < 2; idx44++) {
    outC->_L53_Protocol_1[idx44] = ' ';
  }
  for (idx45 = 0; idx45 < 1; idx45++) {
    outC->_L54_Protocol_1[idx45] = ' ';
  }
  for (idx46 = 0; idx46 < 3; idx46++) {
    outC->_L56_Protocol_1[idx46] = ' ';
  }
  for (idx47 = 0; idx47 < 2; idx47++) {
    outC->Status_Protocol_1[idx47] = ' ';
  }
  for (idx48 = 0; idx48 < 2; idx48++) {
    outC->Command_Protocol_1[idx48] = ' ';
  }
  for (idx49 = 0; idx49 < 1; idx49++) {
    outC->Magnitude_Protocol_1[idx49] = ' ';
  }
  for (idx50 = 0; idx50 < 3; idx50++) {
    outC->CommandPlus_Protocol_1[idx50] = ' ';
  }
  outC->OutProtocol_Protocol_1.Emit2DF = kcg_true;
  outC->OutProtocol_Protocol_1.string_size = kcg_lit_uint16(0);
  for (idx51 = 0; idx51 < 76; idx51++) {
    outC->OutProtocol_Protocol_1.value[idx51] = ' ';
  }
  outC->OutMd5_Protocol_1.Emit2DF = kcg_true;
  outC->OutMd5_Protocol_1.string_size = kcg_lit_uint16(0);
  for (idx52 = 0; idx52 < 33; idx52++) {
    outC->OutMd5_Protocol_1.value[idx52] = ' ';
  }
  outC->OutCMD_Protocol_1.Emit2DF = kcg_true;
  outC->OutCMD_Protocol_1.string_size = kcg_lit_uint16(0);
  for (idx53 = 0; idx53 < 10; idx53++) {
    outC->OutCMD_Protocol_1.value[idx53] = ' ';
  }
  outC->_L3_DisplayView_1 = kcg_true;
  outC->_L10_DisplayView_1 = kcg_true;
  outC->isSitting_DisplayView_1 = kcg_true;
  outC->EnablePbSit_DisplayView_1 = kcg_true;
  outC->EnablePbRaise_DisplayView_1 = kcg_true;
  for (idx54 = 0; idx54 < 1; idx54++) {
    outC->_L2_Read_InputNumber_5[idx54] = ' ';
  }
  outC->_L1_Read_InputNumber_5 = kcg_true;
  outC->_L4_Read_InputNumber_5 = kcg_lit_int32(0);
  outC->_L6_Read_InputNumber_5 = kcg_lit_int32(0);
  for (idx55 = 0; idx55 < 2; idx55++) {
    outC->_L7_Read_InputNumber_5[idx55] = ' ';
  }
  for (idx56 = 0; idx56 < 1; idx56++) {
    outC->_L8_Read_InputNumber_5[idx56] = ' ';
  }
  outC->_L9_Read_InputNumber_5 = kcg_lit_int32(0);
  outC->Notification_Read_InputNumber_5 = kcg_true;
  for (idx57 = 0; idx57 < 1; idx57++) {
    outC->ScalarNumber_Read_InputNumber_5[idx57] = ' ';
  }
  outC->DefaultValue_Read_InputNumber_5 = kcg_lit_int32(0);
  outC->Number_Read_InputNumber_5 = kcg_lit_int32(0);
  for (idx58 = 0; idx58 < 1; idx58++) {
    outC->_L2_Read_InputNumber_1[idx58] = ' ';
  }
  outC->_L1_Read_InputNumber_1 = kcg_true;
  outC->_L4_Read_InputNumber_1 = kcg_lit_int32(0);
  outC->_L6_Read_InputNumber_1 = kcg_lit_int32(0);
  for (idx59 = 0; idx59 < 2; idx59++) {
    outC->_L7_Read_InputNumber_1[idx59] = ' ';
  }
  for (idx60 = 0; idx60 < 1; idx60++) {
    outC->_L8_Read_InputNumber_1[idx60] = ' ';
  }
  outC->_L9_Read_InputNumber_1 = kcg_lit_int32(0);
  outC->Notification_Read_InputNumber_1 = kcg_true;
  for (idx61 = 0; idx61 < 1; idx61++) {
    outC->ScalarNumber_Read_InputNumber_1[idx61] = ' ';
  }
  outC->DefaultValue_Read_InputNumber_1 = kcg_lit_int32(0);
  outC->Number_Read_InputNumber_1 = kcg_lit_int32(0);
  outC->Count_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->Reset_Counter_8_Transition_2_int32 = kcg_true;
  outC->Incr_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L47_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L18_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L4_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L3_Counter_8_Transition_2_int32 = kcg_true;
  outC->_L2_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L76_Transition_2.Emit2DF = kcg_true;
  outC->_L76_Transition_2.Reference = kcg_lit_uint16(0);
  outC->_L75_Transition_2 = kcg_lit_uint16(0);
  outC->_L74_Transition_2 = kcg_lit_int32(0);
  outC->_L72_Transition_2 = kcg_true;
  outC->_L69_Transition_2 = kcg_true;
  outC->_L63_Transition_2 = kcg_lit_int32(0);
  outC->_L82_Transition_2 = kcg_lit_int32(0);
  outC->_L84_Transition_2 = kcg_lit_int32(0);
  outC->_L85_Transition_2 = kcg_lit_int32(0);
  outC->_L88_Transition_2 = kcg_lit_int32(0);
  outC->_L90_Transition_2 = kcg_lit_int32(0);
  outC->_L91_Transition_2 = kcg_lit_int32(0);
  outC->_L96_Transition_2 = kcg_true;
  outC->_L97_Transition_2 = kcg_lit_int32(0);
  outC->_L98_Transition_2 = kcg_lit_int32(0);
  outC->InMagnitude_Transition_2 = kcg_lit_int32(0);
  outC->InStartImage_Transition_2 = kcg_lit_int32(0);
  outC->InFinishImage_Transition_2 = kcg_lit_int32(0);
  outC->_5_InReferenceTimerTicket_Transition_2 = kcg_lit_int32(0);
  outC->Out_ImageReference_Transition_2.Emit2DF = kcg_true;
  outC->Out_ImageReference_Transition_2.Reference = kcg_lit_uint16(0);
  outC->Out_Done_Transition_2 = kcg_true;
  outC->Count_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->Reset_Counter_8_Transition_1_int32 = kcg_true;
  outC->Incr_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L47_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L18_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L4_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L3_Counter_8_Transition_1_int32 = kcg_true;
  outC->_L2_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L76_Transition_1.Emit2DF = kcg_true;
  outC->_L76_Transition_1.Reference = kcg_lit_uint16(0);
  outC->_L75_Transition_1 = kcg_lit_uint16(0);
  outC->_L74_Transition_1 = kcg_lit_int32(0);
  outC->_L72_Transition_1 = kcg_true;
  outC->_L69_Transition_1 = kcg_true;
  outC->_L63_Transition_1 = kcg_lit_int32(0);
  outC->_L82_Transition_1 = kcg_lit_int32(0);
  outC->_L84_Transition_1 = kcg_lit_int32(0);
  outC->_L85_Transition_1 = kcg_lit_int32(0);
  outC->_L88_Transition_1 = kcg_lit_int32(0);
  outC->_L90_Transition_1 = kcg_lit_int32(0);
  outC->_L91_Transition_1 = kcg_lit_int32(0);
  outC->_L96_Transition_1 = kcg_true;
  outC->_L97_Transition_1 = kcg_lit_int32(0);
  outC->_L98_Transition_1 = kcg_lit_int32(0);
  outC->InMagnitude_Transition_1 = kcg_lit_int32(0);
  outC->InStartImage_Transition_1 = kcg_lit_int32(0);
  outC->InFinishImage_Transition_1 = kcg_lit_int32(0);
  outC->InReferenceTimerTicket_Transition_1 = kcg_lit_int32(0);
  outC->Out_ImageReference_Transition_1.Emit2DF = kcg_true;
  outC->Out_ImageReference_Transition_1.Reference = kcg_lit_uint16(0);
  outC->Out_Done_Transition_1 = kcg_true;
  outC->_L2_Counter_1_int32 = kcg_lit_int32(0);
  outC->_L3_Counter_1_int32 = kcg_true;
  outC->_L4_Counter_1_int32 = kcg_lit_int32(0);
  outC->_L18_Counter_1_int32 = kcg_lit_int32(0);
  outC->_L47_Counter_1_int32 = kcg_lit_int32(0);
  outC->Incr_Counter_1_int32 = kcg_lit_int32(0);
  outC->Reset_Counter_1_int32 = kcg_true;
  outC->Count_Counter_1_int32 = kcg_lit_int32(0);
  outC->_L2_Counter_2_int32 = kcg_lit_int32(0);
  outC->_L3_Counter_2_int32 = kcg_true;
  outC->_L4_Counter_2_int32 = kcg_lit_int32(0);
  outC->_L18_Counter_2_int32 = kcg_lit_int32(0);
  outC->_L47_Counter_2_int32 = kcg_lit_int32(0);
  outC->Incr_Counter_2_int32 = kcg_lit_int32(0);
  outC->Reset_Counter_2_int32 = kcg_true;
  outC->Count_Counter_2_int32 = kcg_lit_int32(0);
  outC->_L2_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L3_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L8_MovingCycle_1 = kcg_true;
  outC->_L12_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L14_MovingCycle_1 = kcg_true;
  outC->_L15_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L16_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L17_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L18_MovingCycle_1 = kcg_true;
  outC->_L19_MovingCycle_1 = kcg_lit_int32(0);
  outC->Start_MovingCycle_1 = kcg_lit_int32(0);
  outC->Finish_MovingCycle_1 = kcg_lit_int32(0);
  outC->Reset_MovingCycle_1 = kcg_true;
  outC->Tick_MovingCycle_1 = kcg_true;
  outC->isFinished_MovingCycle_1 = kcg_true;
  outC->Count_MovingCycle_1 = kcg_lit_int32(0);
  outC->varDoneRising = kcg_true;
  outC->varDoneSitting = kcg_true;
  outC->ImageReference.Emit2DF = kcg_true;
  outC->ImageReference.Reference = kcg_lit_uint16(0);
  outC->varWaiting = kcg_true;
  outC->varDoneRunning = kcg_true;
  outC->_L4_Runned_SM1 = kcg_lit_int32(0);
  outC->_L37_Running_SM1 = kcg_true;
  outC->_L25_Running_SM1 = kcg_true;
  outC->_L5_Read_InputNumber_5 = kcg_lit_int32(0);
  outC->_L5_Read_InputNumber_1 = kcg_lit_int32(0);
  outC->_L9_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L71_Transition_2 = kcg_true;
  outC->_L93_Transition_2 = kcg_lit_int32(0);
  outC->_L9_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L71_Transition_1 = kcg_true;
  outC->_L93_Transition_1 = kcg_lit_int32(0);
  outC->_L9_Counter_1_int32 = kcg_lit_int32(0);
  outC->_L9_Counter_2_int32 = kcg_lit_int32(0);
  outC->_L7_MovingCycle_1 = kcg_lit_int32(0);
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->Out_Protocol_OutMD5.Emit2DF = kcg_true;
  outC->Out_Protocol_OutMD5.string_size = kcg_lit_uint16(0);
  for (idx62 = 0; idx62 < 33; idx62++) {
    outC->Out_Protocol_OutMD5.value[idx62] = ' ';
  }
  outC->Out_Protocol_OutProtocol.Emit2DF = kcg_true;
  outC->Out_Protocol_OutProtocol.string_size = kcg_lit_uint16(0);
  for (idx63 = 0; idx63 < 76; idx63++) {
    outC->Out_Protocol_OutProtocol.value[idx63] = ' ';
  }
  outC->Out_Protocol_OutCMD.Emit2DF = kcg_true;
  outC->Out_Protocol_OutCMD.string_size = kcg_lit_uint16(0);
  for (idx64 = 0; idx64 < 10; idx64++) {
    outC->Out_Protocol_OutCMD.value[idx64] = ' ';
  }
  outC->EnablePbRaise = kcg_true;
  outC->EnablePbSit = kcg_true;
  outC->OutImageReference.Emit2DF = kcg_true;
  outC->OutImageReference.Reference = kcg_lit_uint16(0);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset(outC_Main *outC)
{
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

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
  @11: (Protocol#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.c
** Generation date: 2018-11-17T00:35:22
*************************************************************$ */

