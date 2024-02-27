/*
 * File: Simulank.h
 *
 * Code generated for Simulink model 'Simulank'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Feb 27 23:11:05 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Simulank_h_
#define RTW_HEADER_Simulank_h_
#ifndef Simulank_COMMON_INCLUDES_
#define Simulank_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Simulank_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Model entry point functions */
extern void Simulank_initialize(void);
extern void Simulank_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add' : Unused code path elimination
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<Root>/Add2' : Unused code path elimination
 * Block '<Root>/Add3' : Unused code path elimination
 * Block '<Root>/Derivative' : Unused code path elimination
 * Block '<Root>/Derivative1' : Unused code path elimination
 * Block '<Root>/Derivative2' : Unused code path elimination
 * Block '<Root>/Derivative3' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
 * Block '<Root>/Scope3' : Unused code path elimination
 * Block '<Root>/Scope4' : Unused code path elimination
 * Block '<Root>/T_setpoint' : Unused code path elimination
 * Block '<Root>/T_setpoint1' : Unused code path elimination
 * Block '<Root>/T_setpoint2' : Unused code path elimination
 * Block '<Root>/T_setpoint3' : Unused code path elimination
 * Block '<Root>/Time constant//System gain' : Unused code path elimination
 * Block '<Root>/Time constant//System gain1' : Unused code path elimination
 * Block '<Root>/Time constant//System gain2' : Unused code path elimination
 * Block '<Root>/Time constant//System gain3' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Simulank'
 */
#endif                                 /* RTW_HEADER_Simulank_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
