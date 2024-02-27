/*
 * File: Automated_Irrigation_Control_System.h
 *
 * Code generated for Simulink model 'Automated_Irrigation_Control_System'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Feb 27 23:55:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Automated_Irrigation_Control_System_h_
#define RTW_HEADER_Automated_Irrigation_Control_System_h_
#ifndef Automated_Irrigation_Control_System_COMMON_INCLUDES_
#define Automated_Irrigation_Control_System_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                /* Automated_Irrigation_Control_System_COMMON_INCLUDES_ */

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Sensor;                       /* '<Root>/Sensor' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Waterpump;                 /* '<Root>/Water pump' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Automated_Irrigation_Control_System_initialize(void);
extern void Automated_Irrigation_Control_System_step(void);

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
 * '<Root>' : 'Automated_Irrigation_Control_System'
 * '<S1>'   : 'Automated_Irrigation_Control_System/Compare To Constant'
 * '<S2>'   : 'Automated_Irrigation_Control_System/Compare To Constant1'
 */
#endif                   /* RTW_HEADER_Automated_Irrigation_Control_System_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
