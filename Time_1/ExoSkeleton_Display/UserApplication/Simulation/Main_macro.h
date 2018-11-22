#ifndef _MAIN_MACRO_H_
#define _MAIN_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file Main_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "Main.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_Main inputs_ctx;
    outC_Main outputs_ctx;
} WU_Main;
#define WU_CTX_TYPE_Main WU_Main
#define WU_CTX_TYPE_Main_SIZE sizeof(WU_Main)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_Main() 

#define DECLARE_EXT_SENSORS_Main(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_Main_walkStart(context) context.inputs_ctx.walkStart  /* Main/walkStart */
#define VAR_Main_walkStart VARC_Main_walkStart(CTX_Main)

#define VARC_Main_walkSteps(context) context.inputs_ctx.walkSteps  /* Main/walkSteps */
#define VAR_Main_walkSteps VARC_Main_walkSteps(CTX_Main)

#define VARC_Main_walkMagnitude(context) context.inputs_ctx.walkMagnitude  /* Main/walkMagnitude */
#define VAR_Main_walkMagnitude VARC_Main_walkMagnitude(CTX_Main)

#define VARC_Main_sitStart(context) context.inputs_ctx.sitStart  /* Main/sitStart */
#define VAR_Main_sitStart VARC_Main_sitStart(CTX_Main)

#define VARC_Main_raiseStart(context) context.inputs_ctx.raiseStart  /* Main/raiseStart */
#define VAR_Main_raiseStart VARC_Main_raiseStart(CTX_Main)

#define VARC_Main_StepsNotification(context) context.inputs_ctx.StepsNotification  /* Main/StepsNotification */
#define VAR_Main_StepsNotification VARC_Main_StepsNotification(CTX_Main)

#define VARC_Main_MagnitudeNotification(context) context.inputs_ctx.MagnitudeNotification  /* Main/MagnitudeNotification */
#define VAR_Main_MagnitudeNotification VARC_Main_MagnitudeNotification(CTX_Main)

#define VARC_Main_ConfirmWalk(context) context.inputs_ctx.ConfirmWalk  /* Main/ConfirmWalk */
#define VAR_Main_ConfirmWalk VARC_Main_ConfirmWalk(CTX_Main)

#define VARC_Main_ConfirmSit(context) context.inputs_ctx.ConfirmSit  /* Main/ConfirmSit */
#define VAR_Main_ConfirmSit VARC_Main_ConfirmSit(CTX_Main)

#define VARC_Main_ConfirmRaise(context) context.inputs_ctx.ConfirmRaise  /* Main/ConfirmRaise */
#define VAR_Main_ConfirmRaise VARC_Main_ConfirmRaise(CTX_Main)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_Main_OutImageReference(context) context.outputs_ctx.OutImageReference  /* Main/OutImageReference */
#define VAR_Main_OutImageReference VARC_Main_OutImageReference(CTX_Main)

#define VARC_Main_EnablePbSit(context) context.outputs_ctx.EnablePbSit  /* Main/EnablePbSit */
#define VAR_Main_EnablePbSit VARC_Main_EnablePbSit(CTX_Main)

#define VARC_Main_EnablePbRaise(context) context.outputs_ctx.EnablePbRaise  /* Main/EnablePbRaise */
#define VAR_Main_EnablePbRaise VARC_Main_EnablePbRaise(CTX_Main)

#define VARC_Main_Out_Protocol_OutCMD(context) context.outputs_ctx.Out_Protocol_OutCMD  /* Main/Out_Protocol_OutCMD */
#define VAR_Main_Out_Protocol_OutCMD VARC_Main_Out_Protocol_OutCMD(CTX_Main)

#define VARC_Main_Out_Protocol_OutProtocol(context) context.outputs_ctx.Out_Protocol_OutProtocol  /* Main/Out_Protocol_OutProtocol */
#define VAR_Main_Out_Protocol_OutProtocol VARC_Main_Out_Protocol_OutProtocol(CTX_Main)

#define VARC_Main_Out_Protocol_OutMD5(context) context.outputs_ctx.Out_Protocol_OutMD5  /* Main/Out_Protocol_OutMD5 */
#define VAR_Main_Out_Protocol_OutMD5 VARC_Main_Out_Protocol_OutMD5(CTX_Main)

#define VARC_Main_Protocolo(context) context.outputs_ctx.Protocolo  /* Main/Protocolo */
#define VAR_Main_Protocolo VARC_Main_Protocolo(CTX_Main)

#define VARC_Main_Comando(context) context.outputs_ctx.Comando  /* Main/Comando */
#define VAR_Main_Comando VARC_Main_Comando(CTX_Main)

#define VARC_Main_PulseWalk(context) context.outputs_ctx.PulseWalk  /* Main/PulseWalk */
#define VAR_Main_PulseWalk VARC_Main_PulseWalk(CTX_Main)

#define VARC_Main_PulseSit(context) context.outputs_ctx.PulseSit  /* Main/PulseSit */
#define VAR_Main_PulseSit VARC_Main_PulseSit(CTX_Main)

#define VARC_Main_PulseRaise(context) context.outputs_ctx.PulseRaise  /* Main/PulseRaise */
#define VAR_Main_PulseRaise VARC_Main_PulseRaise(CTX_Main)

#define VARC_Main_changed(context) context.outputs_ctx.changed  /* Main/changed */
#define VAR_Main_changed VARC_Main_changed(CTX_Main)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_walkStart kcg_bool
#define CPY_walkStart(DST, SRC) DST = SRC
#define T_walkSteps T_String_01
#define CPY_walkSteps(DST, SRC) kcg_copy_T_String_01(DST, SRC)
#define T_walkMagnitude T_String_01
#define CPY_walkMagnitude(DST, SRC) kcg_copy_T_String_01(DST, SRC)
#define T_sitStart kcg_bool
#define CPY_sitStart(DST, SRC) DST = SRC
#define T_raiseStart kcg_bool
#define CPY_raiseStart(DST, SRC) DST = SRC
#define T_StepsNotification kcg_bool
#define CPY_StepsNotification(DST, SRC) DST = SRC
#define T_MagnitudeNotification kcg_bool
#define CPY_MagnitudeNotification(DST, SRC) DST = SRC
#define T_ConfirmWalk kcg_bool
#define CPY_ConfirmWalk(DST, SRC) DST = SRC
#define T_ConfirmSit kcg_bool
#define CPY_ConfirmSit(DST, SRC) DST = SRC
#define T_ConfirmRaise kcg_bool
#define CPY_ConfirmRaise(DST, SRC) DST = SRC
#define T_OutImageReference T_ImageReference
#define CPY_OutImageReference(DST, SRC) kcg_copy_T_ImageReference(DST, SRC)
#define T_EnablePbSit kcg_bool
#define CPY_EnablePbSit(DST, SRC) DST = SRC
#define T_EnablePbRaise kcg_bool
#define CPY_EnablePbRaise(DST, SRC) DST = SRC
#define T_Out_Protocol_OutCMD S_ToLabel_10
#define CPY_Out_Protocol_OutCMD(DST, SRC) kcg_copy_S_ToLabel_10(DST, SRC)
#define T_Out_Protocol_OutProtocol S_ToLabel_76
#define CPY_Out_Protocol_OutProtocol(DST, SRC) kcg_copy_S_ToLabel_76(DST, SRC)
#define T_Out_Protocol_OutMD5 S_ToLabel_33
#define CPY_Out_Protocol_OutMD5(DST, SRC) kcg_copy_S_ToLabel_33(DST, SRC)
#define T_Protocolo T_String_76
#define CPY_Protocolo(DST, SRC) kcg_copy_T_String_76(DST, SRC)
#define T_Comando T_String_10
#define CPY_Comando(DST, SRC) kcg_copy_T_String_10(DST, SRC)
#define T_PulseWalk kcg_bool
#define CPY_PulseWalk(DST, SRC) DST = SRC
#define T_PulseSit kcg_bool
#define CPY_PulseSit(DST, SRC) DST = SRC
#define T_PulseRaise kcg_bool
#define CPY_PulseRaise(DST, SRC) DST = SRC
#define T_changed kcg_bool
#define CPY_changed(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_Main(context)  WU_Main context;

#define DECLARE_CTXT_Main() DECLAREC_CTXT_Main(CTX_Main)

#define DECLAREC_EXT_CTXT_Main(MODE , context) MODE WU_Main context;

#define DECLARE_EXT_CTXT_Main(MODE) DECLAREC_EXT_CTXT_Main(MODE , CTX_Main)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_Main(context) Main_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_Main(context) Main_reset(&context.outputs_ctx);
    #else
        #define INITC_Main(context) 
    #endif
#endif
#define INIT_Main() INITC_Main(CTX_Main)

#define PERFORMC_Main(context) Main( \
    &context.inputs_ctx /* input context */,\
    &context.outputs_ctx /* output/memories context */\
)
#define PERFORM_Main() PERFORMC_Main(CTX_Main)

/*$************** SCADE Macro wrapper *********************
** End of file Main_macro.h
***********************************************************$*/

#endif /* _MAIN_MACRO_H_ */
