// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/RTCM1005.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcm1005__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__RTCM1005__init(irt_nav_msgs__msg__RTCM1005 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__RTCM1005__fini(msg);
    return false;
  }
  // msg_number
  // ref_station_id
  // reserved_itrf_realization_year
  // gps_indicator
  // glo_indicator
  // galileo_indicator
  // reference_station_indicator
  // antenna_reference_point_ecef_x_m
  // antenna_reference_point_ecef_y_m
  // antenna_reference_point_ecef_z_m
  // signle_receiver_oscillator_indicator
  // reserved1
  // reserved2
  // msg_counter
  return true;
}

void
irt_nav_msgs__msg__RTCM1005__fini(irt_nav_msgs__msg__RTCM1005 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // msg_number
  // ref_station_id
  // reserved_itrf_realization_year
  // gps_indicator
  // glo_indicator
  // galileo_indicator
  // reference_station_indicator
  // antenna_reference_point_ecef_x_m
  // antenna_reference_point_ecef_y_m
  // antenna_reference_point_ecef_z_m
  // signle_receiver_oscillator_indicator
  // reserved1
  // reserved2
  // msg_counter
}

bool
irt_nav_msgs__msg__RTCM1005__are_equal(const irt_nav_msgs__msg__RTCM1005 * lhs, const irt_nav_msgs__msg__RTCM1005 * rhs)
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
  // reserved_itrf_realization_year
  if (lhs->reserved_itrf_realization_year != rhs->reserved_itrf_realization_year) {
    return false;
  }
  // gps_indicator
  if (lhs->gps_indicator != rhs->gps_indicator) {
    return false;
  }
  // glo_indicator
  if (lhs->glo_indicator != rhs->glo_indicator) {
    return false;
  }
  // galileo_indicator
  if (lhs->galileo_indicator != rhs->galileo_indicator) {
    return false;
  }
  // reference_station_indicator
  if (lhs->reference_station_indicator != rhs->reference_station_indicator) {
    return false;
  }
  // antenna_reference_point_ecef_x_m
  if (lhs->antenna_reference_point_ecef_x_m != rhs->antenna_reference_point_ecef_x_m) {
    return false;
  }
  // antenna_reference_point_ecef_y_m
  if (lhs->antenna_reference_point_ecef_y_m != rhs->antenna_reference_point_ecef_y_m) {
    return false;
  }
  // antenna_reference_point_ecef_z_m
  if (lhs->antenna_reference_point_ecef_z_m != rhs->antenna_reference_point_ecef_z_m) {
    return false;
  }
  // signle_receiver_oscillator_indicator
  if (lhs->signle_receiver_oscillator_indicator != rhs->signle_receiver_oscillator_indicator) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // reserved2
  if (lhs->reserved2 != rhs->reserved2) {
    return false;
  }
  // msg_counter
  if (lhs->msg_counter != rhs->msg_counter) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__RTCM1005__copy(
  const irt_nav_msgs__msg__RTCM1005 * input,
  irt_nav_msgs__msg__RTCM1005 * output)
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
  // reserved_itrf_realization_year
  output->reserved_itrf_realization_year = input->reserved_itrf_realization_year;
  // gps_indicator
  output->gps_indicator = input->gps_indicator;
  // glo_indicator
  output->glo_indicator = input->glo_indicator;
  // galileo_indicator
  output->galileo_indicator = input->galileo_indicator;
  // reference_station_indicator
  output->reference_station_indicator = input->reference_station_indicator;
  // antenna_reference_point_ecef_x_m
  output->antenna_reference_point_ecef_x_m = input->antenna_reference_point_ecef_x_m;
  // antenna_reference_point_ecef_y_m
  output->antenna_reference_point_ecef_y_m = input->antenna_reference_point_ecef_y_m;
  // antenna_reference_point_ecef_z_m
  output->antenna_reference_point_ecef_z_m = input->antenna_reference_point_ecef_z_m;
  // signle_receiver_oscillator_indicator
  output->signle_receiver_oscillator_indicator = input->signle_receiver_oscillator_indicator;
  // reserved1
  output->reserved1 = input->reserved1;
  // reserved2
  output->reserved2 = input->reserved2;
  // msg_counter
  output->msg_counter = input->msg_counter;
  return true;
}

irt_nav_msgs__msg__RTCM1005 *
irt_nav_msgs__msg__RTCM1005__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCM1005 * msg = (irt_nav_msgs__msg__RTCM1005 *)allocator.allocate(sizeof(irt_nav_msgs__msg__RTCM1005), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__RTCM1005));
  bool success = irt_nav_msgs__msg__RTCM1005__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__RTCM1005__destroy(irt_nav_msgs__msg__RTCM1005 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__RTCM1005__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__RTCM1005__Sequence__init(irt_nav_msgs__msg__RTCM1005__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCM1005 * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__RTCM1005 *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__RTCM1005), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__RTCM1005__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__RTCM1005__fini(&data[i - 1]);
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
irt_nav_msgs__msg__RTCM1005__Sequence__fini(irt_nav_msgs__msg__RTCM1005__Sequence * array)
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
      irt_nav_msgs__msg__RTCM1005__fini(&array->data[i]);
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

irt_nav_msgs__msg__RTCM1005__Sequence *
irt_nav_msgs__msg__RTCM1005__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCM1005__Sequence * array = (irt_nav_msgs__msg__RTCM1005__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__RTCM1005__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__RTCM1005__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__RTCM1005__Sequence__destroy(irt_nav_msgs__msg__RTCM1005__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__RTCM1005__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__RTCM1005__Sequence__are_equal(const irt_nav_msgs__msg__RTCM1005__Sequence * lhs, const irt_nav_msgs__msg__RTCM1005__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__RTCM1005__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__RTCM1005__Sequence__copy(
  const irt_nav_msgs__msg__RTCM1005__Sequence * input,
  irt_nav_msgs__msg__RTCM1005__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__RTCM1005);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__RTCM1005 * data =
      (irt_nav_msgs__msg__RTCM1005 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__RTCM1005__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__RTCM1005__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__RTCM1005__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
