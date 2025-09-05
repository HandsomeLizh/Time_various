// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/GNSSObs.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gnss_obs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `satelite_pos`
// Member `satelite_vec`
// Member `base_pos`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `prn`
// Member `svid_carrier_used`
// Member `pseudorange`
// Member `pseudorange_raw`
// Member `pseudorange_satclk_corrected`
// Member `deltarange`
// Member `deltarange_raw`
// Member `deltarange_satclk_corrected`
// Member `pseudorange_var`
// Member `pseudorange_var_measured`
// Member `deltarange_var`
// Member `carrierphase`
// Member `carrierphase_raw`
// Member `carrierphase_satclk_corrected`
// Member `carrierphase_var_measured`
// Member `elevation_angle`
// Member `azimuth_angle`
// Member `locktime`
// Member `cn0`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__GNSSObs__init(irt_nav_msgs__msg__GNSSObs * msg)
{
  if (!msg) {
    return false;
  }
  // time_receive
  // integrity_flag
  // dd_idx_sync_ref
  // dd_idx_sync_user
  // satelite_pos
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->satelite_pos, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // satelite_vec
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->satelite_vec, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // base_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->base_pos)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // prn
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->prn, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // svid_carrier_used
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->svid_carrier_used, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // pseudorange
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pseudorange, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // pseudorange_raw
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pseudorange_raw, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // pseudorange_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pseudorange_satclk_corrected, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // deltarange
  if (!rosidl_runtime_c__double__Sequence__init(&msg->deltarange, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // deltarange_raw
  if (!rosidl_runtime_c__double__Sequence__init(&msg->deltarange_raw, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // deltarange_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__init(&msg->deltarange_satclk_corrected, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // pseudorange_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pseudorange_var, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // pseudorange_var_measured
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pseudorange_var_measured, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // deltarange_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->deltarange_var, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // carrierphase
  if (!rosidl_runtime_c__double__Sequence__init(&msg->carrierphase, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // carrierphase_raw
  if (!rosidl_runtime_c__double__Sequence__init(&msg->carrierphase_raw, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // carrierphase_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__init(&msg->carrierphase_satclk_corrected, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // carrierphase_var_measured
  if (!rosidl_runtime_c__double__Sequence__init(&msg->carrierphase_var_measured, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // elevation_angle
  if (!rosidl_runtime_c__double__Sequence__init(&msg->elevation_angle, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // azimuth_angle
  if (!rosidl_runtime_c__double__Sequence__init(&msg->azimuth_angle, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // locktime
  if (!rosidl_runtime_c__double__Sequence__init(&msg->locktime, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // cn0
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cn0, 0)) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
    return false;
  }
  // ref_sat_svid_gps
  // ref_sat_svid_gal
  // gps_corrected
  // gal_corrected
  return true;
}

void
irt_nav_msgs__msg__GNSSObs__fini(irt_nav_msgs__msg__GNSSObs * msg)
{
  if (!msg) {
    return;
  }
  // time_receive
  // integrity_flag
  // dd_idx_sync_ref
  // dd_idx_sync_user
  // satelite_pos
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->satelite_pos);
  // satelite_vec
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->satelite_vec);
  // base_pos
  geometry_msgs__msg__Vector3__fini(&msg->base_pos);
  // prn
  rosidl_runtime_c__uint16__Sequence__fini(&msg->prn);
  // svid_carrier_used
  rosidl_runtime_c__uint16__Sequence__fini(&msg->svid_carrier_used);
  // pseudorange
  rosidl_runtime_c__double__Sequence__fini(&msg->pseudorange);
  // pseudorange_raw
  rosidl_runtime_c__double__Sequence__fini(&msg->pseudorange_raw);
  // pseudorange_satclk_corrected
  rosidl_runtime_c__double__Sequence__fini(&msg->pseudorange_satclk_corrected);
  // deltarange
  rosidl_runtime_c__double__Sequence__fini(&msg->deltarange);
  // deltarange_raw
  rosidl_runtime_c__double__Sequence__fini(&msg->deltarange_raw);
  // deltarange_satclk_corrected
  rosidl_runtime_c__double__Sequence__fini(&msg->deltarange_satclk_corrected);
  // pseudorange_var
  rosidl_runtime_c__double__Sequence__fini(&msg->pseudorange_var);
  // pseudorange_var_measured
  rosidl_runtime_c__double__Sequence__fini(&msg->pseudorange_var_measured);
  // deltarange_var
  rosidl_runtime_c__double__Sequence__fini(&msg->deltarange_var);
  // carrierphase
  rosidl_runtime_c__double__Sequence__fini(&msg->carrierphase);
  // carrierphase_raw
  rosidl_runtime_c__double__Sequence__fini(&msg->carrierphase_raw);
  // carrierphase_satclk_corrected
  rosidl_runtime_c__double__Sequence__fini(&msg->carrierphase_satclk_corrected);
  // carrierphase_var_measured
  rosidl_runtime_c__double__Sequence__fini(&msg->carrierphase_var_measured);
  // elevation_angle
  rosidl_runtime_c__double__Sequence__fini(&msg->elevation_angle);
  // azimuth_angle
  rosidl_runtime_c__double__Sequence__fini(&msg->azimuth_angle);
  // locktime
  rosidl_runtime_c__double__Sequence__fini(&msg->locktime);
  // cn0
  rosidl_runtime_c__double__Sequence__fini(&msg->cn0);
  // ref_sat_svid_gps
  // ref_sat_svid_gal
  // gps_corrected
  // gal_corrected
}

bool
irt_nav_msgs__msg__GNSSObs__are_equal(const irt_nav_msgs__msg__GNSSObs * lhs, const irt_nav_msgs__msg__GNSSObs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_receive
  if (lhs->time_receive != rhs->time_receive) {
    return false;
  }
  // integrity_flag
  if (lhs->integrity_flag != rhs->integrity_flag) {
    return false;
  }
  // dd_idx_sync_ref
  if (lhs->dd_idx_sync_ref != rhs->dd_idx_sync_ref) {
    return false;
  }
  // dd_idx_sync_user
  if (lhs->dd_idx_sync_user != rhs->dd_idx_sync_user) {
    return false;
  }
  // satelite_pos
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->satelite_pos), &(rhs->satelite_pos)))
  {
    return false;
  }
  // satelite_vec
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->satelite_vec), &(rhs->satelite_vec)))
  {
    return false;
  }
  // base_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->base_pos), &(rhs->base_pos)))
  {
    return false;
  }
  // prn
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->prn), &(rhs->prn)))
  {
    return false;
  }
  // svid_carrier_used
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->svid_carrier_used), &(rhs->svid_carrier_used)))
  {
    return false;
  }
  // pseudorange
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pseudorange), &(rhs->pseudorange)))
  {
    return false;
  }
  // pseudorange_raw
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pseudorange_raw), &(rhs->pseudorange_raw)))
  {
    return false;
  }
  // pseudorange_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pseudorange_satclk_corrected), &(rhs->pseudorange_satclk_corrected)))
  {
    return false;
  }
  // deltarange
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->deltarange), &(rhs->deltarange)))
  {
    return false;
  }
  // deltarange_raw
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->deltarange_raw), &(rhs->deltarange_raw)))
  {
    return false;
  }
  // deltarange_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->deltarange_satclk_corrected), &(rhs->deltarange_satclk_corrected)))
  {
    return false;
  }
  // pseudorange_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pseudorange_var), &(rhs->pseudorange_var)))
  {
    return false;
  }
  // pseudorange_var_measured
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pseudorange_var_measured), &(rhs->pseudorange_var_measured)))
  {
    return false;
  }
  // deltarange_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->deltarange_var), &(rhs->deltarange_var)))
  {
    return false;
  }
  // carrierphase
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->carrierphase), &(rhs->carrierphase)))
  {
    return false;
  }
  // carrierphase_raw
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->carrierphase_raw), &(rhs->carrierphase_raw)))
  {
    return false;
  }
  // carrierphase_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->carrierphase_satclk_corrected), &(rhs->carrierphase_satclk_corrected)))
  {
    return false;
  }
  // carrierphase_var_measured
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->carrierphase_var_measured), &(rhs->carrierphase_var_measured)))
  {
    return false;
  }
  // elevation_angle
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->elevation_angle), &(rhs->elevation_angle)))
  {
    return false;
  }
  // azimuth_angle
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->azimuth_angle), &(rhs->azimuth_angle)))
  {
    return false;
  }
  // locktime
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->locktime), &(rhs->locktime)))
  {
    return false;
  }
  // cn0
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cn0), &(rhs->cn0)))
  {
    return false;
  }
  // ref_sat_svid_gps
  if (lhs->ref_sat_svid_gps != rhs->ref_sat_svid_gps) {
    return false;
  }
  // ref_sat_svid_gal
  if (lhs->ref_sat_svid_gal != rhs->ref_sat_svid_gal) {
    return false;
  }
  // gps_corrected
  if (lhs->gps_corrected != rhs->gps_corrected) {
    return false;
  }
  // gal_corrected
  if (lhs->gal_corrected != rhs->gal_corrected) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__GNSSObs__copy(
  const irt_nav_msgs__msg__GNSSObs * input,
  irt_nav_msgs__msg__GNSSObs * output)
{
  if (!input || !output) {
    return false;
  }
  // time_receive
  output->time_receive = input->time_receive;
  // integrity_flag
  output->integrity_flag = input->integrity_flag;
  // dd_idx_sync_ref
  output->dd_idx_sync_ref = input->dd_idx_sync_ref;
  // dd_idx_sync_user
  output->dd_idx_sync_user = input->dd_idx_sync_user;
  // satelite_pos
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->satelite_pos), &(output->satelite_pos)))
  {
    return false;
  }
  // satelite_vec
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->satelite_vec), &(output->satelite_vec)))
  {
    return false;
  }
  // base_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->base_pos), &(output->base_pos)))
  {
    return false;
  }
  // prn
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->prn), &(output->prn)))
  {
    return false;
  }
  // svid_carrier_used
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->svid_carrier_used), &(output->svid_carrier_used)))
  {
    return false;
  }
  // pseudorange
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pseudorange), &(output->pseudorange)))
  {
    return false;
  }
  // pseudorange_raw
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pseudorange_raw), &(output->pseudorange_raw)))
  {
    return false;
  }
  // pseudorange_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pseudorange_satclk_corrected), &(output->pseudorange_satclk_corrected)))
  {
    return false;
  }
  // deltarange
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->deltarange), &(output->deltarange)))
  {
    return false;
  }
  // deltarange_raw
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->deltarange_raw), &(output->deltarange_raw)))
  {
    return false;
  }
  // deltarange_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->deltarange_satclk_corrected), &(output->deltarange_satclk_corrected)))
  {
    return false;
  }
  // pseudorange_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pseudorange_var), &(output->pseudorange_var)))
  {
    return false;
  }
  // pseudorange_var_measured
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pseudorange_var_measured), &(output->pseudorange_var_measured)))
  {
    return false;
  }
  // deltarange_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->deltarange_var), &(output->deltarange_var)))
  {
    return false;
  }
  // carrierphase
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->carrierphase), &(output->carrierphase)))
  {
    return false;
  }
  // carrierphase_raw
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->carrierphase_raw), &(output->carrierphase_raw)))
  {
    return false;
  }
  // carrierphase_satclk_corrected
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->carrierphase_satclk_corrected), &(output->carrierphase_satclk_corrected)))
  {
    return false;
  }
  // carrierphase_var_measured
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->carrierphase_var_measured), &(output->carrierphase_var_measured)))
  {
    return false;
  }
  // elevation_angle
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->elevation_angle), &(output->elevation_angle)))
  {
    return false;
  }
  // azimuth_angle
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->azimuth_angle), &(output->azimuth_angle)))
  {
    return false;
  }
  // locktime
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->locktime), &(output->locktime)))
  {
    return false;
  }
  // cn0
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cn0), &(output->cn0)))
  {
    return false;
  }
  // ref_sat_svid_gps
  output->ref_sat_svid_gps = input->ref_sat_svid_gps;
  // ref_sat_svid_gal
  output->ref_sat_svid_gal = input->ref_sat_svid_gal;
  // gps_corrected
  output->gps_corrected = input->gps_corrected;
  // gal_corrected
  output->gal_corrected = input->gal_corrected;
  return true;
}

irt_nav_msgs__msg__GNSSObs *
irt_nav_msgs__msg__GNSSObs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSObs * msg = (irt_nav_msgs__msg__GNSSObs *)allocator.allocate(sizeof(irt_nav_msgs__msg__GNSSObs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__GNSSObs));
  bool success = irt_nav_msgs__msg__GNSSObs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__GNSSObs__destroy(irt_nav_msgs__msg__GNSSObs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__GNSSObs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__GNSSObs__Sequence__init(irt_nav_msgs__msg__GNSSObs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSObs * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__GNSSObs *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__GNSSObs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__GNSSObs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__GNSSObs__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
irt_nav_msgs__msg__GNSSObs__Sequence__fini(irt_nav_msgs__msg__GNSSObs__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irt_nav_msgs__msg__GNSSObs__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

irt_nav_msgs__msg__GNSSObs__Sequence *
irt_nav_msgs__msg__GNSSObs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSObs__Sequence * array = (irt_nav_msgs__msg__GNSSObs__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__GNSSObs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__GNSSObs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__GNSSObs__Sequence__destroy(irt_nav_msgs__msg__GNSSObs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__GNSSObs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__GNSSObs__Sequence__are_equal(const irt_nav_msgs__msg__GNSSObs__Sequence * lhs, const irt_nav_msgs__msg__GNSSObs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__GNSSObs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__GNSSObs__Sequence__copy(
  const irt_nav_msgs__msg__GNSSObs__Sequence * input,
  irt_nav_msgs__msg__GNSSObs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__GNSSObs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__GNSSObs * data =
      (irt_nav_msgs__msg__GNSSObs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__GNSSObs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__GNSSObs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__GNSSObs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
