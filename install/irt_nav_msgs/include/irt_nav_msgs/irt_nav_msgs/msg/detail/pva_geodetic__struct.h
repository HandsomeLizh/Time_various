// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irt_nav_msgs:msg/PVAGeodetic.idl
// generated code does not contain a copyright notice

#ifndef IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__STRUCT_H_
#define IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/PVAGeodetic in the package irt_nav_msgs.
typedef struct irt_nav_msgs__msg__PVAGeodetic
{
  std_msgs__msg__Header header;
  double tow;
  uint16_t wnc;
  uint8_t mode;
  uint8_t error;
  double phi_geo;
  float phi_geo_var;
  double lambda_geo;
  float lambda_geo_var;
  double h_geo;
  float h_geo_var;
  float undulation;
  double vn;
  double ve;
  double vu;
  double trk_gnd;
  double cog;
  float yaw;
  float yaw_var;
  float pitch_roll;
  float pitch_roll_var;
  double rx_clk_bias;
  double rx_clk_bias_var;
  double rx_clk_drift;
  double rx_clk_drift_var;
  uint8_t time_system;
  uint8_t datum;
  uint8_t nrsv;
  uint8_t nrsv_used;
  uint8_t nrsv_used_with_l1;
  uint8_t nrsv_used_multi;
  uint8_t wa_corr_info;
  uint16_t reference_id;
  uint16_t mean_corr_age;
  uint32_t signal_info;
  uint8_t alert_flag;
  uint8_t nr_bases;
  uint16_t ppp_info;
  double sol_age;
  double diff_age;
  bool do_not_use_this;
} irt_nav_msgs__msg__PVAGeodetic;

// Struct for a sequence of irt_nav_msgs__msg__PVAGeodetic.
typedef struct irt_nav_msgs__msg__PVAGeodetic__Sequence
{
  irt_nav_msgs__msg__PVAGeodetic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irt_nav_msgs__msg__PVAGeodetic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRT_NAV_MSGS__MSG__DETAIL__PVA_GEODETIC__STRUCT_H_
