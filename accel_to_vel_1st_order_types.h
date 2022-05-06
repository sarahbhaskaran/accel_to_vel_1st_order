/*
 * accel_to_vel_1st_order_types.h
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

#ifndef RTW_HEADER_accel_to_vel_1st_order_types_h_
#define RTW_HEADER_accel_to_vel_1st_order_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_accel_to_vel_1st_order_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_accel_to_vel_1st_order_geometry_msgs_Vector3_

struct SL_Bus_accel_to_vel_1st_order_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_accel_to_vel_1st_order_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_accel_to_vel_1st_order_geometry_msgs_Twist_

struct SL_Bus_accel_to_vel_1st_order_geometry_msgs_Twist
{
  SL_Bus_accel_to_vel_1st_order_geometry_msgs_Vector3 Linear;
  SL_Bus_accel_to_vel_1st_order_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_accel_to_vel_1st_order_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_accel_to_vel_1st_order_std_msgs_Float64_

struct SL_Bus_accel_to_vel_1st_order_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_P_T */

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_S_T */

/* Parameters (default storage) */
typedef struct P_accel_to_vel_1st_order_T_ P_accel_to_vel_1st_order_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_accel_to_vel_1st_orde_T RT_MODEL_accel_to_vel_1st_ord_T;

#endif                          /* RTW_HEADER_accel_to_vel_1st_order_types_h_ */
