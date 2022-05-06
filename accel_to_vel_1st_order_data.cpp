/*
 * accel_to_vel_1st_order_data.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "accel_to_vel_1st_order".
 *
 * Model version              : 1.23
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C++ source code generated on : Fri May  6 09:41:23 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "accel_to_vel_1st_order.h"
#include "accel_to_vel_1st_order_private.h"

/* Block parameters (default storage) */
P_accel_to_vel_1st_order_T accel_to_vel_1st_order_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  {
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    },                                 /* Linear */

    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    }                                  /* Angular */
  },

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S4>/Out1'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S3>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Expression: 0
   * Referenced by: '<Root>/Integrator'
   */
  0.0,

  /* Computed Parameter: TransferFcn_A
   * Referenced by: '<Root>/Transfer Fcn'
   */
  -1.566,

  /* Computed Parameter: TransferFcn_C
   * Referenced by: '<Root>/Transfer Fcn'
   */
  1.745
};
