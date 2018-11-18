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

#define VARC_Main_walkStop(context) context.inputs_ctx.walkStop  /* Main/walkStop */
#define VAR_Main_walkStop VARC_Main_walkStop(CTX_Main)

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
#define T_walkStop kcg_bool
#define CPY_walkStop(DST, SRC) DST = SRC
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
