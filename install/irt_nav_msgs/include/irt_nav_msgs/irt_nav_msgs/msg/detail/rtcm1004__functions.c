// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/RTCM1004.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcm1004__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__RTCM1004__init(irt_nav_msgs__msg__RTCM1004 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__RTCM1004__fini(msg);
    return false;
  }
  // msg_number
  // ref_station_id
  // gps_epoch_time_ms
  // flag_gnss_synchronous
  // no_gps_sat_signal_processed
  // divergency_free_smoothing_indicator
  // smoothing_interval
  // sat_id
  // l1_code_indicator
  // l1_pseudorange_mod1lightms_m
  // l1_phasenrange_l1_pseudorange_m
  // l1_locktime_indicator
  // l1_integer_pseudorange_modulus_ambiguity_m
  // l1_cnr_db_hz
  // l2_code_indicator
  // l2_l1_pseudorange_difference_m
  // l2_phaserange_l1_pseudorange_m
  // l2_locktime_indicator
  // l2_cnr_db_hz
  // msg_counter
  return true;
}

void
irt_nav_msgs__msg__RTCM1004__fini(irt_nav_msgs__msg__RTCM1004 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // msg_number
  // ref_station_id
  // gps_epoch_time_ms
  // flag_gnss_synchronous
  // no_gps_sat_signal_processed
  // divergency_free_smoothing_indicator
  // smoothing_interval
  // sat_id
  // l1_code_indicator
  // l1_pseudorange_mod1lightms_m
  // l1_phasenrange_l1_pseudorange_m
  // l1_locktime_indicator
  // l1_integer_pseudorange_modulus_ambiguity_m
  // l1_cnr_db_hz
  // l2_code_indicator
  // l2_l1_pseudorange_difference_m
  // l2_phaserange_l1_pseudorange_m
  // l2_locktime_indicator
  // l2_cnr_db_hz
  // msg_counter
}

bool
irt_nav_msgs__msg__RTCM1004__are_equal(const irt_nav_msgs__msg__RTCM1004 * lhs, const irt_nav_msgs__msg__RTCM1004 * rhs)
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
  // msg_number
  if (lhs->msg_number != rhs->msg_number) {
    return false;
  }
  // ref_station_id
  if (lhs->ref_station_id != rhs->ref_station_id) {
    return false;
  }
  // gps_epoch_time_ms
  if (lhs->gps_epoch_time_ms != rhs->gps_epoch_time_ms) {
    return false;
  }
  // flag_gnss_synchronous
  if (lhs->flag_gnss_synchronous != rhs->flag_gnss_synchronous) {
    return false;
  }
  // no_gps_sat_signal_processed
  if (lhs->no_gps_sat_signal_processed != rhs->no_gps_sat_signal_processed) {
    return false;
  }
  // divergency_free_smoothing_indicator
  if (lhs->divergency_free_smoothing_indicator != rhs->divergency_free_smoothing_indicator) {
    return false;
  }
  // smoothing_interval
  if (lhs->smoothing_interval != rhs->smoothing_interval) {
    return false;
  }
  // sat_id
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->sat_id[i] != rhs->sat_id[i]) {
      return false;
    }
  }
  // l1_code_indicator
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l1_code_indicator[i] != rhs->l1_code_indicator[i]) {
      return false;
    }
  }
  // l1_pseudorange_mod1lightms_m
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l1_pseudorange_mod1lightms_m[i] != rhs->l1_pseudorange_mod1lightms_m[i]) {
      return false;
    }
  }
  // l1_phasenrange_l1_pseudorange_m
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l1_phasenrange_l1_pseudorange_m[i] != rhs->l1_phasenrange_l1_pseudorange_m[i]) {
      return false;
    }
  }
  // l1_locktime_indicator
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l1_locktime_indicator[i] != rhs->l1_locktime_indicator[i]) {
      return false;
    }
  }
  // l1_integer_pseudorange_modulus_ambiguity_m
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l1_integer_pseudorange_modulus_ambiguity_m[i] != rhs->l1_integer_pseudorange_modulus_ambiguity_m[i]) {
      return false;
    }
  }
  // l1_cnr_db_hz
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l1_cnr_db_hz[i] != rhs->l1_cnr_db_hz[i]) {
      return false;
    }
  }
  // l2_code_indicator
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l2_code_indicator[i] != rhs->l2_code_indicator[i]) {
      return false;
    }
  }
  // l2_l1_pseudorange_difference_m
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l2_l1_pseudorange_difference_m[i] != rhs->l2_l1_pseudorange_difference_m[i]) {
      return false;
    }
  }
  // l2_phaserange_l1_pseudorange_m
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l2_phaserange_l1_pseudorange_m[i] != rhs->l2_phaserange_l1_pseudorange_m[i]) {
      return false;
    }
  }
  // l2_locktime_indicator
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l2_locktime_indicator[i] != rhs->l2_locktime_indicator[i]) {
      return false;
    }
  }
  // l2_cnr_db_hz
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->l2_cnr_db_hz[i] != rhs->l2_cnr_db_hz[i]) {
      return false;
    }
  }
  // msg_counter
  if (lhs->msg_counter != rhs->msg_counter) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__RTCM1004__copy(
  const irt_nav_msgs__msg__RTCM1004 * input,
  irt_nav_msgs__msg__RTCM1004 * output)
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
  // msg_number
  output->msg_number = input->msg_number;
  // ref_station_id
  output->ref_station_id = input->ref_station_id;
  // gps_epoch_time_ms
  output->gps_epoch_time_ms = input->gps_epoch_time_ms;
  // flag_gnss_synchronous
  output->flag_gnss_synchronous = input->flag_gnss_synchronous;
  // no_gps_sat_signal_processed
  output->no_gps_sat_signal_processed = input->no_gps_sat_signal_processed;
  // divergency_free_smoothing_indicator
  output->divergency_free_smoothing_indicator = input->divergency_free_smoothing_indicator;
  // smoothing_interval
  output->smoothing_interval = input->smoothing_interval;
  // sat_id
  for (size_t i = 0; i < 12; ++i) {
    output->sat_id[i] = input->sat_id[i];
  }
  // l1_code_indicator
  for (size_t i = 0; i < 12; ++i) {
    output->l1_code_indicator[i] = input->l1_code_indicator[i];
  }
  // l1_pseudorange_mod1lightms_m
  for (size_t i = 0; i < 12; ++i) {
    output->l1_pseudorange_mod1lightms_m[i] = input->l1_pseudorange_mod1lightms_m[i];
  }
  // l1_phasenrange_l1_pseudorange_m
  for (size_t i = 0; i < 12; ++i) {
    output->l1_phasenrange_l1_pseudorange_m[i] = input->l1_phasenrange_l1_pseudorange_m[i];
  }
  // l1_locktime_indicator
  for (size_t i = 0; i < 12; ++i) {
    output->l1_locktime_indicator[i] = input->l1_locktime_indicator[i];
  }
  // l1_integer_pseudorange_modulus_ambiguity_m
  for (size_t i = 0; i < 12; ++i) {
    output->l1_integer_pseudorange_modulus_ambiguity_m[i] = input->l1_integer_pseudorange_modulus_ambiguity_m[i];
  }
  // l1_cnr_db_hz
  for (size_t i = 0; i < 12; ++i) {
    output->l1_cnr_db_hz[i] = input->l1_cnr_db_hz[i];
  }
  // l2_code_indicator
  for (size_t i = 0; i < 12; ++i) {
    output->l2_code_indicator[i] = input->l2_code_indicator[i];
  }
  // l2_l1_pseudorange_difference_m
  for (size_t i = 0; i < 12; ++i) {
    output->l2_l1_pseudorange_difference_m[i] = input->l2_l1_pseudorange_difference_m[i];
  }
  // l2_phaserange_l1_pseudorange_m
  for (size_t i = 0; i < 12; ++i) {
    output->l2_phaserange_l1_pseudorange_m[i] = input->l2_phaserange_l1_pseudorange_m[i];
  }
  // l2_locktime_indicator
  for (size_t i = 0; i < 12; ++i) {
    output->l2_locktime_indicator[i] = input->l2_locktime_indicator[i];
  }
  // l2_cnr_db_hz
  for (size_t i = 0; i < 12; ++i) {
    output->l2_cnr_db_hz[i] = input->l2_cnr_db_hz[i];
  }
  // msg_counter
  output->msg_counter = input->msg_counter;
  return true;
}

irt_nav_msgs__msg__RTCM1004 *
irt_nav_msgs__msg__RTCM1004__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCM1004 * msg = (irt_nav_msgs__msg__RTCM1004 *)allocator.allocate(sizeof(irt_nav_msgs__msg__RTCM1004), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__RTCM1004));
  bool success = irt_nav_msgs__msg__RTCM1004__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__RTCM1004__destroy(irt_nav_msgs__msg__RTCM1004 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__RTCM1004__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__RTCM1004__Sequence__init(irt_nav_msgs__msg__RTCM1004__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCM1004 * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__RTCM1004 *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__RTCM1004), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__RTCM1004__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__RTCM1004__fini(&data[i - 1]);
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
irt_nav_msgs__msg__RTCM1004__Sequence__fini(irt_nav_msgs__msg__RTCM1004__Sequence * array)
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
      irt_nav_msgs__msg__RTCM1004__fini(&array->data[i]);
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

irt_nav_msgs__msg__RTCM1004__Sequence *
irt_nav_msgs__msg__RTCM1004__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCM1004__Sequence * array = (irt_nav_msgs__msg__RTCM1004__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__RTCM1004__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__RTCM1004__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__RTCM1004__Sequence__destroy(irt_nav_msgs__msg__RTCM1004__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__RTCM1004__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__RTCM1004__Sequence__are_equal(const irt_nav_msgs__msg__RTCM1004__Sequence * lhs, const irt_nav_msgs__msg__RTCM1004__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__RTCM1004__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__RTCM1004__Sequence__copy(
  const irt_nav_msgs__msg__RTCM1004__Sequence * input,
  irt_nav_msgs__msg__RTCM1004__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__RTCM1004);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__RTCM1004 * data =
      (irt_nav_msgs__msg__RTCM1004 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__RTCM1004__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__RTCM1004__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__RTCM1004__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
