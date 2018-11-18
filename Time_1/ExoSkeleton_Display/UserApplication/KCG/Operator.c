/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/Projetos/stagihotr/Time_1/ExoSkeleton_Display/UserApplication/KCG/config.txt
** Generation date: 2018-10-18T23:04:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator.h"

/* Operator/ */
void Operator(inC_Operator *inC, outC_Operator *outC)
{
  /* Probe1/, _L11/ */
  kcg_int32 Probe1;

  outC->Emit2DF = kcg_true;
  outC->Output1.Emit = kcg_true;
  outC->Output1.Value = outC->_L2_ToggleWalking_1;
  outC->_L2_ToggleWalking_1 = inC->walkButton | ((!inC->walkStop) &
      outC->_L2_ToggleWalking_1);
  /* _L6=(checkMd5#1)/ */
  checkMd5((T_String *) &TEXTO_TESTE, &outC->OutMD5, &Probe1);
  outC->md5Size = MD5_SIZE;
}

#ifndef KCG_USER_DEFINED_INIT
void Operator_init(outC_Operator *outC)
{
  kcg_size idx;

  outC->_L2_ToggleWalking_1 = kcg_true;
  outC->Emit2DF = kcg_true;
  outC->md5Size = kcg_lit_uint16(0);
  for (idx = 0; idx < 32; idx++) {
    outC->OutMD5[idx] = ' ';
  }
  outC->Output1.Emit = kcg_true;
  outC->Output1.Value = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Operator_reset(outC_Operator *outC)
{
  outC->_L2_ToggleWalking_1 = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Operator.c
** Generation date: 2018-10-18T23:04:01
*************************************************************$ */

