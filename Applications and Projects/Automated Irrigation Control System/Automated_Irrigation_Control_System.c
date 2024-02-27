/*
 * File: Automated_Irrigation_Control_System.c
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

#include "Automated_Irrigation_Control_System.h"
#include "rtwtypes.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void Automated_Irrigation_Control_System_step(void)
{
  real_T rtb_Gain;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/Sensor'
   */
  rtb_Gain = 100.0 * rtU.Sensor;

  /* Outport: '<Root>/Water pump' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S2>/Constant'
   *  Logic: '<Root>/AND'
   *  RelationalOperator: '<S1>/Compare'
   *  RelationalOperator: '<S2>/Compare'
   */
  rtY.Waterpump = ((rtb_Gain <= 50.0) && (rtb_Gain >= 0.0));
}

/* Model initialize function */
void Automated_Irrigation_Control_System_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
