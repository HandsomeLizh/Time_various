// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/GNSSObsPreProcessed.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gnss_obs_pre_processed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gnss_obs_ant_main`
// Member `gnss_obs_ant_aux`
// Member `dd_gnss_obs_dualantenna`
// Member `dd_gnss_obs_time`
// Member `dd_gnss_obs_rtcm`
#include "irt_nav_msgs/msg/detail/gnss_obs__functions.h"
// Member `gnss_corrections`
#include "irt_nav_msgs/msg/detail/gnss_correction__functions.h"
// Member `faulty_prn_main`
// Member `faulty_prn_aux`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__GNSSObsPreProcessed__init(irt_nav_msgs__msg__GNSSObsPreProcessed * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // counter
  // time_offset_gal_gps
  // is_ggto_valid
  // gnss_obs_ant_main
  if (!irt_nav_msgs__msg__GNSSObs__init(&msg->gnss_obs_ant_main)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // gnss_obs_ant_aux
  if (!irt_nav_msgs__msg__GNSSObs__init(&msg->gnss_obs_ant_aux)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // dd_gnss_obs_dualantenna
  if (!irt_nav_msgs__msg__GNSSObs__init(&msg->dd_gnss_obs_dualantenna)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // dd_gnss_obs_time
  if (!irt_nav_msgs__msg__GNSSObs__init(&msg->dd_gnss_obs_time)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // dd_gnss_obs_rtcm
  if (!irt_nav_msgs__msg__GNSSObs__init(&msg->dd_gnss_obs_rtcm)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // gnss_corrections
  if (!irt_nav_msgs__msg__GNSSCorrection__Sequence__init(&msg->gnss_corrections, 0)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // faulty_prn_main
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->faulty_prn_main, 0)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // faulty_prn_aux
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->faulty_prn_aux, 0)) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
    return false;
  }
  // has_time_dd
  // has_dualantenna
  // has_dualantenna_dd
  // has_rtcm_dd
  // has_rtk
  return true;
}

void
irt_nav_msgs__msg__GNSSObsPreProcessed__fini(irt_nav_msgs__msg__GNSSObsPreProcessed * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // counter
  // time_offset_gal_gps
  // is_ggto_valid
  // gnss_obs_ant_main
  irt_nav_msgs__msg__GNSSObs__fini(&msg->gnss_obs_ant_main);
  // gnss_obs_ant_aux
  irt_nav_msgs__msg__GNSSObs__fini(&msg->gnss_obs_ant_aux);
  // dd_gnss_obs_dualantenna
  irt_nav_msgs__msg__GNSSObs__fini(&msg->dd_gnss_obs_dualantenna);
  // dd_gnss_obs_time
  irt_nav_msgs__msg__GNSSObs__fini(&msg->dd_gnss_obs_time);
  // dd_gnss_obs_rtcm
  irt_nav_msgs__msg__GNSSObs__fini(&msg->dd_gnss_obs_rtcm);
  // gnss_corrections
  irt_nav_msgs__msg__GNSSCorrection__Sequence__fini(&msg->gnss_corrections);
  // faulty_prn_main
  rosidl_runtime_c__uint8__Sequence__fini(&msg->faulty_prn_main);
  // faulty_prn_aux
  rosidl_runtime_c__uint8__Sequence__fini(&msg->faulty_prn_aux);
  // has_time_dd
  // has_dualantenna
  // has_dualantenna_dd
  // has_rtcm_dd
  // has_rtk
}

bool
irt_nav_msgs__msg__GNSSObsPreProcessed__are_equal(const irt_nav_msgs__msg__GNSSObsPreProcessed * lhs, const irt_nav_msgs__msg__GNSSObsPreProcessed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // time_offset_gal_gps
  if (lhs->time_offset_gal_gps != rhs->time_offset_gal_gps) {
    return false;
  }
  // is_ggto_valid
  if (lhs->is_ggto_valid != rhs->is_ggto_valid) {
    return false;
  }
  // gnss_obs_ant_main
  if (!irt_nav_msgs__msg__GNSSObs__are_equal(
      &(lhs->gnss_obs_ant_main), &(rhs->gnss_obs_ant_main)))
  {
    return false;
  }
  // gnss_obs_ant_aux
  if (!irt_nav_msgs__msg__GNSSObs__are_equal(
      &(lhs->gnss_obs_ant_aux), &(rhs->gnss_obs_ant_aux)))
  {
    return false;
  }
  // dd_gnss_obs_dualantenna
  if (!irt_nav_msgs__msg__GNSSObs__are_equal(
      &(lhs->dd_gnss_obs_dualantenna), &(rhs->dd_gnss_obs_dualantenna)))
  {
    return false;
  }
  // dd_gnss_obs_time
  if (!irt_nav_msgs__msg__GNSSObs__are_equal(
      &(lhs->dd_gnss_obs_time), &(rhs->dd_gnss_obs_time)))
  {
    return false;
  }
  // dd_gnss_obs_rtcm
  if (!irt_nav_msgs__msg__GNSSObs__are_equal(
      &(lhs->dd_gnss_obs_rtcm), &(rhs->dd_gnss_obs_rtcm)))
  {
    return false;
  }
  // gnss_corrections
  if (!irt_nav_msgs__msg__GNSSCorrection__Sequence__are_equal(
      &(lhs->gnss_corrections), &(rhs->gnss_corrections)))
  {
    return false;
  }
  // faulty_prn_main
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->faulty_prn_main), &(rhs->faulty_prn_main)))
  {
    return false;
  }
  // faulty_prn_aux
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->faulty_prn_aux), &(rhs->faulty_prn_aux)))
  {
    return false;
  }
  // has_time_dd
  if (lhs->has_time_dd != rhs->has_time_dd) {
    return false;
  }
  // has_dualantenna
  if (lhs->has_dualantenna != rhs->has_dualantenna) {
    return false;
  }
  // has_dualantenna_dd
  if (lhs->has_dualantenna_dd != rhs->has_dualantenna_dd) {
    return false;
  }
  // has_rtcm_dd
  if (lhs->has_rtcm_dd != rhs->has_rtcm_dd) {
    return false;
  }
  // has_rtk
  if (lhs->has_rtk != rhs->has_rtk) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__GNSSObsPreProcessed__copy(
  const irt_nav_msgs__msg__GNSSObsPreProcessed * input,
  irt_nav_msgs__msg__GNSSObsPreProcessed * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // counter
  output->counter = input->counter;
  // time_offset_gal_gps
  output->time_offset_gal_gps = input->time_offset_gal_gps;
  // is_ggto_valid
  output->is_ggto_valid = input->is_ggto_valid;
  // gnss_obs_ant_main
  if (!irt_nav_msgs__msg__GNSSObs__copy(
      &(input->gnss_obs_ant_main), &(output->gnss_obs_ant_main)))
  {
    return false;
  }
  // gnss_obs_ant_aux
  if (!irt_nav_msgs__msg__GNSSObs__copy(
      &(input->gnss_obs_ant_aux), &(output->gnss_obs_ant_aux)))
  {
    return false;
  }
  // dd_gnss_obs_dualantenna
  if (!irt_nav_msgs__msg__GNSSObs__copy(
      &(input->dd_gnss_obs_dualantenna), &(output->dd_gnss_obs_dualantenna)))
  {
    return false;
  }
  // dd_gnss_obs_time
  if (!irt_nav_msgs__msg__GNSSObs__copy(
      &(input->dd_gnss_obs_time), &(output->dd_gnss_obs_time)))
  {
    return false;
  }
  // dd_gnss_obs_rtcm
  if (!irt_nav_msgs__msg__GNSSObs__copy(
      &(input->dd_gnss_obs_rtcm), &(output->dd_gnss_obs_rtcm)))
  {
    return false;
  }
  // gnss_corrections
  if (!irt_nav_msgs__msg__GNSSCorrection__Sequence__copy(
      &(input->gnss_corrections), &(output->gnss_corrections)))
  {
    return false;
  }
  // faulty_prn_main
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->faulty_prn_main), &(output->faulty_prn_main)))
  {
    return false;
  }
  // faulty_prn_aux
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->faulty_prn_aux), &(output->faulty_prn_aux)))
  {
    return false;
  }
  // has_time_dd
  output->has_time_dd = input->has_time_dd;
  // has_dualantenna
  output->has_dualantenna = input->has_dualantenna;
  // has_dualantenna_dd
  output->has_dualantenna_dd = input->has_dualantenna_dd;
  // has_rtcm_dd
  output->has_rtcm_dd = input->has_rtcm_dd;
  // has_rtk
  output->has_rtk = input->has_rtk;
  return true;
}

irt_nav_msgs__msg__GNSSObsPreProcessed *
irt_nav_msgs__msg__GNSSObsPreProcessed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSObsPreProcessed * msg = (irt_nav_msgs__msg__GNSSObsPreProcessed *)allocator.allocate(sizeof(irt_nav_msgs__msg__GNSSObsPreProcessed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__GNSSObsPreProcessed));
  bool success = irt_nav_msgs__msg__GNSSObsPreProcessed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__GNSSObsPreProcessed__destroy(irt_nav_msgs__msg__GNSSObsPreProcessed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__init(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSObsPreProcessed * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__GNSSObsPreProcessed *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__GNSSObsPreProcessed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__GNSSObsPreProcessed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__GNSSObsPreProcessed__fini(&data[i - 1]);
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
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__fini(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array)
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
      irt_nav_msgs__msg__GNSSObsPreProcessed__fini(&array->data[i]);
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

irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence *
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array = (irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__destroy(irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__are_equal(const irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * lhs, const irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__GNSSObsPreProcessed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence__copy(
  const irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * input,
  irt_nav_msgs__msg__GNSSObsPreProcessed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__GNSSObsPreProcessed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__GNSSObsPreProcessed * data =
      (irt_nav_msgs__msg__GNSSObsPreProcessed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__GNSSObsPreProcessed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__GNSSObsPreProcessed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__GNSSObsPreProcessed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
