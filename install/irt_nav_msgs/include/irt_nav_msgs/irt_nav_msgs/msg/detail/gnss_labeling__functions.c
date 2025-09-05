// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gnss_labeling__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ant_main_labels`
// Member `ant_aux_labels`
#include "irt_nav_msgs/msg/detail/sat_label__functions.h"
// Member `faulty_prn_main`
// Member `faulty_prn_aux`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `ant_pos`
// Member `ant_vel`
// Member `gt_pos`
// Member `gt_vel`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `environment`
#include "rosidl_runtime_c/string_functions.h"

bool
irt_nav_msgs__msg__GNSSLabeling__init(irt_nav_msgs__msg__GNSSLabeling * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // related_state_timestamp_nanosec
  // counter
  // time_receive
  // solution_type
  // ant_main_labels
  if (!irt_nav_msgs__msg__SatLabel__Sequence__init(&msg->ant_main_labels, 0)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // ant_aux_labels
  if (!irt_nav_msgs__msg__SatLabel__Sequence__init(&msg->ant_aux_labels, 0)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // faulty_prn_main
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->faulty_prn_main, 0)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // faulty_prn_aux
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->faulty_prn_aux, 0)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // gt_available
  // ant_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->ant_pos)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // ant_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->ant_vel)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // gt_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->gt_pos)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // gt_vel
  if (!geometry_msgs__msg__Vector3__init(&msg->gt_vel)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  // clock_bias
  // clock_drift
  // gt_clock_bias
  // gt_clock_drift
  // environment
  if (!rosidl_runtime_c__String__init(&msg->environment)) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__GNSSLabeling__fini(irt_nav_msgs__msg__GNSSLabeling * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // related_state_timestamp_nanosec
  // counter
  // time_receive
  // solution_type
  // ant_main_labels
  irt_nav_msgs__msg__SatLabel__Sequence__fini(&msg->ant_main_labels);
  // ant_aux_labels
  irt_nav_msgs__msg__SatLabel__Sequence__fini(&msg->ant_aux_labels);
  // faulty_prn_main
  rosidl_runtime_c__uint8__Sequence__fini(&msg->faulty_prn_main);
  // faulty_prn_aux
  rosidl_runtime_c__uint8__Sequence__fini(&msg->faulty_prn_aux);
  // gt_available
  // ant_pos
  geometry_msgs__msg__Vector3__fini(&msg->ant_pos);
  // ant_vel
  geometry_msgs__msg__Vector3__fini(&msg->ant_vel);
  // gt_pos
  geometry_msgs__msg__Vector3__fini(&msg->gt_pos);
  // gt_vel
  geometry_msgs__msg__Vector3__fini(&msg->gt_vel);
  // clock_bias
  // clock_drift
  // gt_clock_bias
  // gt_clock_drift
  // environment
  rosidl_runtime_c__String__fini(&msg->environment);
}

bool
irt_nav_msgs__msg__GNSSLabeling__are_equal(const irt_nav_msgs__msg__GNSSLabeling * lhs, const irt_nav_msgs__msg__GNSSLabeling * rhs)
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
  // related_state_timestamp_nanosec
  if (lhs->related_state_timestamp_nanosec != rhs->related_state_timestamp_nanosec) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // time_receive
  if (lhs->time_receive != rhs->time_receive) {
    return false;
  }
  // solution_type
  if (lhs->solution_type != rhs->solution_type) {
    return false;
  }
  // ant_main_labels
  if (!irt_nav_msgs__msg__SatLabel__Sequence__are_equal(
      &(lhs->ant_main_labels), &(rhs->ant_main_labels)))
  {
    return false;
  }
  // ant_aux_labels
  if (!irt_nav_msgs__msg__SatLabel__Sequence__are_equal(
      &(lhs->ant_aux_labels), &(rhs->ant_aux_labels)))
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
  // gt_available
  if (lhs->gt_available != rhs->gt_available) {
    return false;
  }
  // ant_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ant_pos), &(rhs->ant_pos)))
  {
    return false;
  }
  // ant_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ant_vel), &(rhs->ant_vel)))
  {
    return false;
  }
  // gt_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gt_pos), &(rhs->gt_pos)))
  {
    return false;
  }
  // gt_vel
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gt_vel), &(rhs->gt_vel)))
  {
    return false;
  }
  // clock_bias
  if (lhs->clock_bias != rhs->clock_bias) {
    return false;
  }
  // clock_drift
  if (lhs->clock_drift != rhs->clock_drift) {
    return false;
  }
  // gt_clock_bias
  if (lhs->gt_clock_bias != rhs->gt_clock_bias) {
    return false;
  }
  // gt_clock_drift
  if (lhs->gt_clock_drift != rhs->gt_clock_drift) {
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->environment), &(rhs->environment)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__GNSSLabeling__copy(
  const irt_nav_msgs__msg__GNSSLabeling * input,
  irt_nav_msgs__msg__GNSSLabeling * output)
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
  // related_state_timestamp_nanosec
  output->related_state_timestamp_nanosec = input->related_state_timestamp_nanosec;
  // counter
  output->counter = input->counter;
  // time_receive
  output->time_receive = input->time_receive;
  // solution_type
  output->solution_type = input->solution_type;
  // ant_main_labels
  if (!irt_nav_msgs__msg__SatLabel__Sequence__copy(
      &(input->ant_main_labels), &(output->ant_main_labels)))
  {
    return false;
  }
  // ant_aux_labels
  if (!irt_nav_msgs__msg__SatLabel__Sequence__copy(
      &(input->ant_aux_labels), &(output->ant_aux_labels)))
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
  // gt_available
  output->gt_available = input->gt_available;
  // ant_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ant_pos), &(output->ant_pos)))
  {
    return false;
  }
  // ant_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ant_vel), &(output->ant_vel)))
  {
    return false;
  }
  // gt_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gt_pos), &(output->gt_pos)))
  {
    return false;
  }
  // gt_vel
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gt_vel), &(output->gt_vel)))
  {
    return false;
  }
  // clock_bias
  output->clock_bias = input->clock_bias;
  // clock_drift
  output->clock_drift = input->clock_drift;
  // gt_clock_bias
  output->gt_clock_bias = input->gt_clock_bias;
  // gt_clock_drift
  output->gt_clock_drift = input->gt_clock_drift;
  // environment
  if (!rosidl_runtime_c__String__copy(
      &(input->environment), &(output->environment)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__GNSSLabeling *
irt_nav_msgs__msg__GNSSLabeling__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSLabeling * msg = (irt_nav_msgs__msg__GNSSLabeling *)allocator.allocate(sizeof(irt_nav_msgs__msg__GNSSLabeling), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__GNSSLabeling));
  bool success = irt_nav_msgs__msg__GNSSLabeling__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__GNSSLabeling__destroy(irt_nav_msgs__msg__GNSSLabeling * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__GNSSLabeling__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__GNSSLabeling__Sequence__init(irt_nav_msgs__msg__GNSSLabeling__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSLabeling * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__GNSSLabeling *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__GNSSLabeling), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__GNSSLabeling__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__GNSSLabeling__fini(&data[i - 1]);
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
irt_nav_msgs__msg__GNSSLabeling__Sequence__fini(irt_nav_msgs__msg__GNSSLabeling__Sequence * array)
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
      irt_nav_msgs__msg__GNSSLabeling__fini(&array->data[i]);
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

irt_nav_msgs__msg__GNSSLabeling__Sequence *
irt_nav_msgs__msg__GNSSLabeling__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GNSSLabeling__Sequence * array = (irt_nav_msgs__msg__GNSSLabeling__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__GNSSLabeling__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__GNSSLabeling__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__GNSSLabeling__Sequence__destroy(irt_nav_msgs__msg__GNSSLabeling__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__GNSSLabeling__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__GNSSLabeling__Sequence__are_equal(const irt_nav_msgs__msg__GNSSLabeling__Sequence * lhs, const irt_nav_msgs__msg__GNSSLabeling__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__GNSSLabeling__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__GNSSLabeling__Sequence__copy(
  const irt_nav_msgs__msg__GNSSLabeling__Sequence * input,
  irt_nav_msgs__msg__GNSSLabeling__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__GNSSLabeling);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__GNSSLabeling * data =
      (irt_nav_msgs__msg__GNSSLabeling *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__GNSSLabeling__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__GNSSLabeling__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__GNSSLabeling__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
