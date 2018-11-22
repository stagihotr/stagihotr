/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/KCG/config.txt
** Generation date: 2018-11-21T22:34:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

/* Main/ */
void Main(inC_Main *inC, outC_Main *outC)
{
  kcg_int32 tmp;
  kcg_int32 tmp1;
  kcg_int32 tmp2;
  kcg_int32 tmp3;
  kcg_int32 tmp4;
  kcg_int32 tmp5;
  T_String_01 tmp6;
  T_String_02 tmp7;
  T_String_10 tmp8;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act;
  /* @3/Out_Done/,
     @3/_L96/,
     SM1:,
     SM1:raising:<1>,
     SM1:raising:_L4/,
     varDoneRising/ */
  kcg_bool _L4_raising_SM1;
  /* @5/Out_Done/,
     @5/_L96/,
     SM1:,
     SM1:Sitting:<1>,
     SM1:Sitting:_L2/,
     varDoneSitting/ */
  kcg_bool _L2_Sitting_SM1;
  /* @9/Count/, @9/_L15/, SM1:Running:_L38/ */
  kcg_int32 _L38_Running_SM1;
  /* @8/Count/, @8/_L4/, SM1:Running:_L21/ */
  kcg_int32 _L21_Running_SM1;
  /* @7/Count/, @7/_L4/, SM1:Running:_L9/ */
  kcg_int32 _L9_Running_SM1;
  /* @2/_L14/ */
  T_String_32 _L14_Protocol_1;
  /* @3/_L63/, @4/Count/, @4/_L4/ */
  kcg_int32 _L4_Counter_8_Transition_2_int32;
  /* @3/_L69/, @4/Reset/, @4/_L3/ */
  kcg_bool _L3_Counter_8_Transition_2_int32;
  /* @5/_L63/, @6/Count/, @6/_L4/ */
  kcg_int32 _L4_Counter_8_Transition_1_int32;
  /* @5/_L69/, @6/Reset/, @6/_L3/ */
  kcg_bool _L3_Counter_8_Transition_1_int32;
  /* @7/Reset/, @7/_L3/, @9/Tick/, @9/_L18/, SM1:Running:_L12/ */
  kcg_bool _L3_Counter_1_int32;
  /* @2/Comando/, @2/_L45/, Comando/, _L88/ */
  T_String_10 Comando;

  outC->Out_Protocol_OutCMD.Emit2DF = kcg_true;
  outC->Out_Protocol_OutCMD.string_size = kcg_lit_uint16(10);
  outC->Out_Protocol_OutProtocol.Emit2DF = kcg_true;
  outC->Out_Protocol_OutProtocol.string_size = kcg_lit_uint16(76);
  outC->Out_Protocol_OutMD5.Emit2DF = kcg_true;
  outC->Out_Protocol_OutMD5.string_size = kcg_lit_uint16(33);
  kcg_copy_T_String_10(&Comando, &outC->Comando);
  SM1_state_act = outC->SM1_state_nxt;
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_raising_SM1 :
      if (outC->SM1_reset_nxt) {
        outC->init1 = kcg_true;
      }
      _L3_Counter_8_Transition_2_int32 = (!outC->init1) & outC->_L71_Transition_2;
      /* @3/_L74=, @4/_L4= */
      if (_L3_Counter_8_Transition_2_int32) {
        _L4_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
        tmp4 = kcg_lit_int32(1);
      }
      else {
        /* @4/_L18= */
        if (outC->init1) {
          _L4_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
        }
        else {
          _L4_Counter_8_Transition_2_int32 = outC->_L9_Counter_8_Transition_2_int32;
        }
        tmp4 = kcg_lit_int32(0);
      }
      outC->_L71_Transition_2 = kcg_lit_int32(1) <= _L4_Counter_8_Transition_2_int32;
      /* @3/_L88= */
      if (outC->init1) {
        tmp5 = kcg_lit_int32(36);
      }
      else {
        tmp5 = outC->_L93_Transition_2;
      }
      outC->_L93_Transition_2 = tmp4 + tmp5;
      _L4_raising_SM1 = outC->_L93_Transition_2 >= kcg_lit_int32(39);
      outC->_L9_Counter_8_Transition_2_int32 =
        _L4_Counter_8_Transition_2_int32 + kcg_lit_int32(1);
      kcg_copy_T_String_02(&outC->Comando[0], (T_String_02 *) &P_CMD_UP);
      break;
    case SSM_st_sat_SM1 :
      kcg_copy_T_String_02(&outC->Comando[0], (T_String_02 *) &P_CMD_SI);
      break;
    case SSM_st_Sitting_SM1 :
      if (outC->SM1_reset_nxt) {
        outC->init = kcg_true;
      }
      _L3_Counter_8_Transition_1_int32 = (!outC->init) & outC->_L71_Transition_1;
      /* @5/_L74=, @6/_L4= */
      if (_L3_Counter_8_Transition_1_int32) {
        _L4_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
        tmp2 = kcg_lit_int32(1);
      }
      else {
        /* @6/_L18= */
        if (outC->init) {
          _L4_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
        }
        else {
          _L4_Counter_8_Transition_1_int32 = outC->_L9_Counter_8_Transition_1_int32;
        }
        tmp2 = kcg_lit_int32(0);
      }
      outC->_L71_Transition_1 = kcg_lit_int32(1) <= _L4_Counter_8_Transition_1_int32;
      /* @5/_L88= */
      if (outC->init) {
        tmp3 = kcg_lit_int32(32);
      }
      else {
        tmp3 = outC->_L93_Transition_1;
      }
      outC->_L93_Transition_1 = tmp2 + tmp3;
      _L2_Sitting_SM1 = outC->_L93_Transition_1 >= kcg_lit_int32(35);
      outC->_L9_Counter_8_Transition_1_int32 =
        _L4_Counter_8_Transition_1_int32 + kcg_lit_int32(1);
      kcg_copy_T_String_02(&outC->Comando[0], (T_String_02 *) &P_CMD_SI);
      break;
    case SSM_st_Runned_SM1 :
      if (outC->SM1_reset_nxt) {
        outC->init3 = kcg_true;
      }
      kcg_copy_T_String_02(&outC->Comando[0], (T_String_02 *) &P_CMD_FW);
      break;
    case SSM_st_Running_SM1 :
      if (outC->SM1_reset_nxt) {
        outC->init4 = kcg_true;
      }
      /* @9/_L15= */
      if (outC->init4 | outC->_L37_Running_SM1) {
        _L38_Running_SM1 = kcg_lit_int32(3);
      }
      else /* @9/_L12= */
      if (outC->init4) {
        _L38_Running_SM1 = kcg_lit_int32(3);
      }
      else {
        _L38_Running_SM1 = outC->_L7_MovingCycle_1;
      }
      _L3_Counter_1_int32 = (!outC->init4) & outC->_L25_Running_SM1;
      /* @7/_L4=, @9/_L17= */
      if (_L3_Counter_1_int32) {
        tmp = kcg_lit_int32(1);
        _L9_Running_SM1 = kcg_lit_int32(0);
      }
      else {
        tmp = kcg_lit_int32(0);
        /* @7/_L18= */
        if (outC->init4) {
          _L9_Running_SM1 = kcg_lit_int32(0);
        }
        else {
          _L9_Running_SM1 = outC->_L9_Counter_1_int32;
        }
      }
      outC->_L7_MovingCycle_1 = _L38_Running_SM1 + tmp;
      outC->_L37_Running_SM1 = _L38_Running_SM1 >= kcg_lit_int32(9);
      /* @8/_L18= */
      if (outC->init4) {
        _L21_Running_SM1 = kcg_lit_int32(0);
      }
      else {
        _L21_Running_SM1 = outC->_L9_Counter_2_int32;
      }
      /* SM1:Running:_L13= */
      if (outC->_L37_Running_SM1) {
        tmp1 = kcg_lit_int32(1);
      }
      else {
        tmp1 = kcg_lit_int32(0);
      }
      outC->_L9_Counter_2_int32 = _L21_Running_SM1 + tmp1;
      outC->_L9_Counter_1_int32 = _L9_Running_SM1 + outC->_L5_Read_InputNumber_1;
      kcg_copy_T_String_02(&outC->Comando[0], (T_String_02 *) &P_CMD_FW);
      break;
    case SSM_st_Waiting_SM1 :
      kcg_copy_T_String_02(&outC->Comando[0], (T_String_02 *) &P_CMD);
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L79=(convert2Char_1#1)/ */
  convert2Char_1(outC->_L5_Read_InputNumber_1, &tmp6);
  outC->Comando[2] = tmp6[0];
  /* _L86=(convert2Char_3#1)/ */
  convert2Char_3(
    outC->_L5_Read_InputNumber_5,
    (T_String_03 *) &outC->Comando[3]);
  outC->Comando[6] = P_RESERVED[0];
  /* @11/_L5= */
  if (inC->MagnitudeNotification) {
    tmp7[0] = inC->walkMagnitude[0];
    tmp7[1] = _END_STRING[0];
    outC->_L5_Read_InputNumber_1 = /* @11/_L6=(convert2Int#1)/ */
      convert2Int(&tmp7);
  }
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_raising_SM1 :
      kcg_copy_T_String_02(&outC->Comando[7], (T_String_02 *) &P_STATUS_RN);
      outC->OutImageReference.Emit2DF = kcg_true;
      /* @3/_L97= */
      if (_L4_raising_SM1) {
        outC->OutImageReference.Reference = kcg_lit_uint16(39);
        outC->SM1_state_nxt = SSM_st_Waiting_SM1;
      }
      else {
        outC->OutImageReference.Reference = /* @3/_L75= */(kcg_uint16)
            outC->_L93_Transition_2;
        outC->SM1_state_nxt = SSM_st_raising_SM1;
      }
      outC->SM1_reset_nxt = _L4_raising_SM1;
      outC->init1 = kcg_false;
      break;
    case SSM_st_sat_SM1 :
      kcg_copy_T_String_02(&outC->Comando[7], (T_String_02 *) &P_STATUS_WT);
      if (inC->raiseStart) {
        outC->SM1_state_nxt = SSM_st_raising_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_sat_SM1;
      }
      outC->SM1_reset_nxt = inC->raiseStart;
      break;
    case SSM_st_Sitting_SM1 :
      kcg_copy_T_String_02(&outC->Comando[7], (T_String_02 *) &P_STATUS_RN);
      outC->EnablePbRaise = _L2_Sitting_SM1;
      outC->OutImageReference.Emit2DF = kcg_true;
      /* @5/_L97= */
      if (_L2_Sitting_SM1) {
        outC->OutImageReference.Reference = kcg_lit_uint16(35);
        outC->SM1_state_nxt = SSM_st_sat_SM1;
      }
      else {
        outC->OutImageReference.Reference = /* @5/_L75= */(kcg_uint16)
            outC->_L93_Transition_1;
        outC->SM1_state_nxt = SSM_st_Sitting_SM1;
      }
      outC->SM1_reset_nxt = _L2_Sitting_SM1;
      outC->init = kcg_false;
      break;
    case SSM_st_Runned_SM1 :
      kcg_copy_T_String_02(&outC->Comando[7], (T_String_02 *) &P_STATUS_WT);
      /* SM1:Runned:_L1= */
      if (outC->init3) {
        outC->_L4_Runned_SM1 = kcg_lit_int32(0) + kcg_lit_int32(1);
      }
      else {
        outC->_L4_Runned_SM1 = outC->_L4_Runned_SM1 + kcg_lit_int32(1);
      }
      outC->SM1_reset_nxt = !(outC->_L4_Runned_SM1 >= kcg_lit_int32(10));
      if (outC->SM1_reset_nxt) {
        outC->SM1_state_nxt = SSM_st_Waiting_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Runned_SM1;
      }
      outC->init3 = kcg_false;
      break;
    case SSM_st_Running_SM1 :
      kcg_copy_T_String_02(&outC->Comando[7], (T_String_02 *) &P_STATUS_RN);
      outC->SM1_reset_nxt = outC->_L5_Read_InputNumber_5 <= _L21_Running_SM1;
      outC->OutImageReference.Emit2DF = kcg_true;
      outC->OutImageReference.Reference = /* SM1:Running:_L44= */(kcg_uint16)
          _L38_Running_SM1;
      outC->_L25_Running_SM1 = kcg_lit_int32(10) <= _L9_Running_SM1;
      if (outC->SM1_reset_nxt) {
        outC->SM1_state_nxt = SSM_st_Runned_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Running_SM1;
      }
      outC->init4 = kcg_false;
      break;
    case SSM_st_Waiting_SM1 :
      kcg_copy_T_String_02(&outC->Comando[7], (T_String_02 *) &P_STATUS_WT);
      outC->EnablePbRaise = kcg_false;
      outC->OutImageReference.Emit2DF = kcg_true;
      outC->OutImageReference.Reference = kcg_lit_uint16(1);
      if (inC->sitStart) {
        outC->SM1_state_nxt = SSM_st_Sitting_SM1;
      }
      else if (inC->walkStart) {
        outC->SM1_state_nxt = SSM_st_Running_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_Waiting_SM1;
      }
      outC->SM1_reset_nxt = inC->sitStart | inC->walkStart;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* @10/_L5= */
  if (inC->StepsNotification) {
    tmp7[0] = inC->walkSteps[0];
    tmp7[1] = _END_STRING[0];
    outC->_L5_Read_InputNumber_5 = /* @10/_L6=(convert2Int#1)/ */
      convert2Int(&tmp7);
  }
  kcg_copy_T_String_06(&outC->Protocolo[0], (T_String_06 *) &P_HEADER);
  kcg_copy_T_String_06(&outC->Protocolo[6], (T_String_06 *) &P_TOPIC);
  kcg_copy_T_String_06(&outC->Protocolo[12], (T_String_06 *) &P_FROM);
  kcg_copy_T_String_06(&outC->Protocolo[18], (T_String_06 *) &P_TO);
  kcg_copy_array_char_9(&outC->Protocolo[24], (array_char_9 *) &outC->Comando[0]);
  kcg_copy_T_String_10(&outC->Protocolo[33], (T_String_10 *) &P_TIME);
  /* @2/_L14=(checkMd5#1)/ */
  checkMd5((T_String_43 *) &outC->Protocolo[0], &_L14_Protocol_1);
  kcg_copy_T_String_32(&outC->Out_Protocol_OutMD5.value[0], &_L14_Protocol_1);
  outC->Out_Protocol_OutMD5.value[32] = _END_STRING[0];
  kcg_copy_T_String_32(&outC->Protocolo[43], &_L14_Protocol_1);
  outC->Protocolo[75] = _END_STRING[0];
  kcg_copy_T_String_76(&outC->Out_Protocol_OutProtocol.value, &outC->Protocolo);
  outC->Comando[9] = _END_STRING[0];
  kcg_copy_T_String_10(&outC->Out_Protocol_OutCMD.value, &outC->Comando);
  outC->EnablePbSit = !outC->EnablePbRaise;
  /* _L98= */
  if (outC->init2) {
    outC->init2 = kcg_false;
    kcg_copy_T_String_10(&tmp8, &outC->Comando);
  }
  else {
    kcg_copy_T_String_10(&tmp8, &Comando);
  }
  outC->changed = !kcg_comp_T_String_10(&outC->Comando, &tmp8);
  outC->PulseWalk = inC->walkStart;
  outC->PulseSit = inC->sitStart;
  outC->PulseRaise = inC->raiseStart;
}

#ifndef KCG_USER_DEFINED_INIT
void Main_init(outC_Main *outC)
{
  kcg_size idx;

  outC->SM1_reset_nxt = kcg_false;
  outC->EnablePbSit = kcg_true;
  outC->EnablePbRaise = kcg_true;
  outC->PulseWalk = kcg_true;
  outC->PulseSit = kcg_true;
  outC->PulseRaise = kcg_true;
  outC->changed = kcg_true;
  outC->_L37_Running_SM1 = kcg_true;
  outC->_L25_Running_SM1 = kcg_true;
  outC->_L71_Transition_2 = kcg_true;
  outC->_L71_Transition_1 = kcg_true;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->_L7_MovingCycle_1 = kcg_lit_int32(0);
  outC->_L9_Counter_2_int32 = kcg_lit_int32(0);
  outC->_L9_Counter_1_int32 = kcg_lit_int32(0);
  outC->_L93_Transition_1 = kcg_lit_int32(0);
  outC->_L9_Counter_8_Transition_1_int32 = kcg_lit_int32(0);
  outC->_L93_Transition_2 = kcg_lit_int32(0);
  outC->_L9_Counter_8_Transition_2_int32 = kcg_lit_int32(0);
  outC->_L4_Runned_SM1 = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->Comando[idx] = ' ';
  }
  for (idx = 0; idx < 76; idx++) {
    outC->Protocolo[idx] = ' ';
  }
  outC->Out_Protocol_OutMD5.Emit2DF = kcg_true;
  outC->Out_Protocol_OutMD5.string_size = kcg_lit_uint16(0);
  for (idx = 0; idx < 33; idx++) {
    outC->Out_Protocol_OutMD5.value[idx] = ' ';
  }
  outC->Out_Protocol_OutProtocol.Emit2DF = kcg_true;
  outC->Out_Protocol_OutProtocol.string_size = kcg_lit_uint16(0);
  for (idx = 0; idx < 76; idx++) {
    outC->Out_Protocol_OutProtocol.value[idx] = ' ';
  }
  outC->Out_Protocol_OutCMD.Emit2DF = kcg_true;
  outC->Out_Protocol_OutCMD.string_size = kcg_lit_uint16(0);
  for (idx = 0; idx < 10; idx++) {
    outC->Out_Protocol_OutCMD.value[idx] = ' ';
  }
  outC->OutImageReference.Emit2DF = kcg_true;
  outC->OutImageReference.Reference = kcg_lit_uint16(0);
  outC->_L5_Read_InputNumber_5 = DEFAULT_STEPS;
  outC->_L5_Read_InputNumber_1 = DEFAULT_MAGNITUDE;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Main_reset(outC_Main *outC)
{
  outC->SM1_reset_nxt = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->_L5_Read_InputNumber_5 = DEFAULT_STEPS;
  outC->_L5_Read_InputNumber_1 = DEFAULT_MAGNITUDE;
  outC->SM1_state_nxt = SSM_st_Waiting_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Main/
  @3: (Transition#2)
  @4: @3/(pwlinear::Counter#8)
  @5: (Transition#1)
  @6: @5/(pwlinear::Counter#8)
  @7: (pwlinear::Counter#1)
  @9: (MovingCycle#1)
  @8: (pwlinear::Counter#2)
  @11: (Read_InputNumber#1)
  @10: (Read_InputNumber#5)
  @2: (Protocol#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Main.c
** Generation date: 2018-11-21T22:34:45
*************************************************************$ */

