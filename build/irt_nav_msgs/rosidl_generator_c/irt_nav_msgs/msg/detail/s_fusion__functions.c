// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/SFusion.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/s_fusion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
// Member `cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pva_geodetic`
#include "irt_nav_msgs/msg/detail/pva_geodetic__functions.h"

bool
irt_nav_msgs__msg__SFusion__init(irt_nav_msgs__msg__SFusion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__SFusion__fini(msg);
    return false;
  }
  // simulation_time
  // counter
  // tow
  // filter_tow
  // pps_counter
  // state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->state, 0)) {
    irt_nav_msgs__msg__SFusion__fini(msg);
    return false;
  }
  // cov
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cov, 0)) {
    irt_nav_msgs__msg__SFusion__fini(msg);
    return false;
  }
  // num_used_stat_ant1
  // num_used_stat_ant2
  // rtcm_counter
  // filter_inited_success
  // filter_inited
  // pva_geodetic
  if (!irt_nav_msgs__msg__PVAGeodetic__init(&msg->pva_geodetic)) {
    irt_nav_msgs__msg__SFusion__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__SFusion__fini(irt_nav_msgs__msg__SFusion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // simulation_time
  // counter
  // tow
  // filter_tow
  // pps_counter
  // state
  rosidl_runtime_c__double__Sequence__fini(&msg->state);
  // cov
  rosidl_runtime_c__double__Sequence__fini(&msg->cov);
  // num_used_stat_ant1
  // num_used_stat_ant2
  // rtcm_counter
  // filter_inited_success
  // filter_inited
  // pva_geodetic
  irt_nav_msgs__msg__PVAGeodetic__fini(&msg->pva_geodetic);
}

bool
irt_nav_msgs__msg__SFusion__are_equal(const irt_nav_msgs__msg__SFusion * lhs, const irt_nav_msgs__msg__SFusion * rhs)
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
  // simulation_time
  if (lhs->simulation_time != rhs->simulation_time) {
    return false;
  }
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // filter_tow
  if (lhs->filter_tow != rhs->filter_tow) {
    return false;
  }
  // pps_counter
  if (lhs->pps_counter != rhs->pps_counter) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // cov
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cov), &(rhs->cov)))
  {
    return false;
  }
  // num_used_stat_ant1
  if (lhs->num_used_stat_ant1 != rhs->num_used_stat_ant1) {
    return false;
  }
  // num_used_stat_ant2
  if (lhs->num_used_stat_ant2 != rhs->num_used_stat_ant2) {
    return false;
  }
  // rtcm_counter
  if (lhs->rtcm_counter != rhs->rtcm_counter) {
    return false;
  }
  // filter_inited_success
  if (lhs->filter_inited_success != rhs->filter_inited_success) {
    return false;
  }
  // filter_inited
  if (lhs->filter_inited != rhs->filter_inited) {
    return false;
  }
  // pva_geodetic
  if (!irt_nav_msgs__msg__PVAGeodetic__are_equal(
      &(lhs->pva_geodetic), &(rhs->pva_geodetic)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__SFusion__copy(
  const irt_nav_msgs__msg__SFusion * input,
  irt_nav_msgs__msg__SFusion * output)
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
  // simulation_time
  output->simulation_time = input->simulation_time;
  // counter
  output->counter = input->counter;
  // tow
  output->tow = input->tow;
  // filter_tow
  output->filter_tow = input->filter_tow;
  // pps_counter
  output->pps_counter = input->pps_counter;
  // state
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // cov
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cov), &(output->cov)))
  {
    return false;
  }
  // num_used_stat_ant1
  output->num_used_stat_ant1 = input->num_used_stat_ant1;
  // num_used_stat_ant2
  output->num_used_stat_ant2 = input->num_used_stat_ant2;
  // rtcm_counter
  output->rtcm_counter = input->rtcm_counter;
  // filter_inited_success
  output->filter_inited_success = input->filter_inited_success;
  // filter_inited
  output->filter_inited = input->filter_inited;
  // pva_geodetic
  if (!irt_nav_msgs__msg__PVAGeodetic__copy(
      &(input->pva_geodetic), &(output->pva_geodetic)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__SFusion *
irt_nav_msgs__msg__SFusion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SFusion * msg = (irt_nav_msgs__msg__SFusion *)allocator.allocate(sizeof(irt_nav_msgs__msg__SFusion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__SFusion));
  bool success = irt_nav_msgs__msg__SFusion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__SFusion__destroy(irt_nav_msgs__msg__SFusion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__SFusion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__SFusion__Sequence__init(irt_nav_msgs__msg__SFusion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SFusion * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__SFusion *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__SFusion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__SFusion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__SFusion__fini(&data[i - 1]);
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
irt_nav_msgs__msg__SFusion__Sequence__fini(irt_nav_msgs__msg__SFusion__Sequence * array)
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
      irt_nav_msgs__msg__SFusion__fini(&array->data[i]);
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

irt_nav_msgs__msg__SFusion__Sequence *
irt_nav_msgs__msg__SFusion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SFusion__Sequence * array = (irt_nav_msgs__msg__SFusion__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__SFusion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__SFusion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__SFusion__Sequence__destroy(irt_nav_msgs__msg__SFusion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__SFusion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__SFusion__Sequence__are_equal(const irt_nav_msgs__msg__SFusion__Sequence * lhs, const irt_nav_msgs__msg__SFusion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__SFusion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__SFusion__Sequence__copy(
  const irt_nav_msgs__msg__SFusion__Sequence * input,
  irt_nav_msgs__msg__SFusion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__SFusion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__SFusion * data =
      (irt_nav_msgs__msg__SFusion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__SFusion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__SFusion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__SFusion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
