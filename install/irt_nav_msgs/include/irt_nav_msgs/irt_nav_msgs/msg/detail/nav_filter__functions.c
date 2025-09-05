// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/NavFilter.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/nav_filter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__NavFilter__init(irt_nav_msgs__msg__NavFilter * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__NavFilter__fini(msg);
    return false;
  }
  // filter_enabled
  // gnss_obs_delay
  // state_ekf
  // var_ekf
  // vel_normed_ekf
  // euler_ekf
  // update_exit_ekf
  // ant_ecef_ekf
  // ant_llh_ekf
  // ant_vel_ekf
  // state_ukf
  // var_ukf
  // vel_normed_ukf
  // euler_ukf
  // update_exit_ukf
  // ant_ecef_ukf
  // ant_llh_ukf
  // ant_vel_ukf
  // filter_time
  return true;
}

void
irt_nav_msgs__msg__NavFilter__fini(irt_nav_msgs__msg__NavFilter * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // filter_enabled
  // gnss_obs_delay
  // state_ekf
  // var_ekf
  // vel_normed_ekf
  // euler_ekf
  // update_exit_ekf
  // ant_ecef_ekf
  // ant_llh_ekf
  // ant_vel_ekf
  // state_ukf
  // var_ukf
  // vel_normed_ukf
  // euler_ukf
  // update_exit_ukf
  // ant_ecef_ukf
  // ant_llh_ukf
  // ant_vel_ukf
  // filter_time
}

bool
irt_nav_msgs__msg__NavFilter__are_equal(const irt_nav_msgs__msg__NavFilter * lhs, const irt_nav_msgs__msg__NavFilter * rhs)
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
  // filter_enabled
  if (lhs->filter_enabled != rhs->filter_enabled) {
    return false;
  }
  // gnss_obs_delay
  if (lhs->gnss_obs_delay != rhs->gnss_obs_delay) {
    return false;
  }
  // state_ekf
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->state_ekf[i] != rhs->state_ekf[i]) {
      return false;
    }
  }
  // var_ekf
  for (size_t i = 0; i < 17; ++i) {
    if (lhs->var_ekf[i] != rhs->var_ekf[i]) {
      return false;
    }
  }
  // vel_normed_ekf
  if (lhs->vel_normed_ekf != rhs->vel_normed_ekf) {
    return false;
  }
  // euler_ekf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->euler_ekf[i] != rhs->euler_ekf[i]) {
      return false;
    }
  }
  // update_exit_ekf
  if (lhs->update_exit_ekf != rhs->update_exit_ekf) {
    return false;
  }
  // ant_ecef_ekf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->ant_ecef_ekf[i] != rhs->ant_ecef_ekf[i]) {
      return false;
    }
  }
  // ant_llh_ekf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->ant_llh_ekf[i] != rhs->ant_llh_ekf[i]) {
      return false;
    }
  }
  // ant_vel_ekf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->ant_vel_ekf[i] != rhs->ant_vel_ekf[i]) {
      return false;
    }
  }
  // state_ukf
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->state_ukf[i] != rhs->state_ukf[i]) {
      return false;
    }
  }
  // var_ukf
  for (size_t i = 0; i < 17; ++i) {
    if (lhs->var_ukf[i] != rhs->var_ukf[i]) {
      return false;
    }
  }
  // vel_normed_ukf
  if (lhs->vel_normed_ukf != rhs->vel_normed_ukf) {
    return false;
  }
  // euler_ukf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->euler_ukf[i] != rhs->euler_ukf[i]) {
      return false;
    }
  }
  // update_exit_ukf
  if (lhs->update_exit_ukf != rhs->update_exit_ukf) {
    return false;
  }
  // ant_ecef_ukf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->ant_ecef_ukf[i] != rhs->ant_ecef_ukf[i]) {
      return false;
    }
  }
  // ant_llh_ukf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->ant_llh_ukf[i] != rhs->ant_llh_ukf[i]) {
      return false;
    }
  }
  // ant_vel_ukf
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->ant_vel_ukf[i] != rhs->ant_vel_ukf[i]) {
      return false;
    }
  }
  // filter_time
  if (lhs->filter_time != rhs->filter_time) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__NavFilter__copy(
  const irt_nav_msgs__msg__NavFilter * input,
  irt_nav_msgs__msg__NavFilter * output)
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
  // filter_enabled
  output->filter_enabled = input->filter_enabled;
  // gnss_obs_delay
  output->gnss_obs_delay = input->gnss_obs_delay;
  // state_ekf
  for (size_t i = 0; i < 18; ++i) {
    output->state_ekf[i] = input->state_ekf[i];
  }
  // var_ekf
  for (size_t i = 0; i < 17; ++i) {
    output->var_ekf[i] = input->var_ekf[i];
  }
  // vel_normed_ekf
  output->vel_normed_ekf = input->vel_normed_ekf;
  // euler_ekf
  for (size_t i = 0; i < 3; ++i) {
    output->euler_ekf[i] = input->euler_ekf[i];
  }
  // update_exit_ekf
  output->update_exit_ekf = input->update_exit_ekf;
  // ant_ecef_ekf
  for (size_t i = 0; i < 3; ++i) {
    output->ant_ecef_ekf[i] = input->ant_ecef_ekf[i];
  }
  // ant_llh_ekf
  for (size_t i = 0; i < 3; ++i) {
    output->ant_llh_ekf[i] = input->ant_llh_ekf[i];
  }
  // ant_vel_ekf
  for (size_t i = 0; i < 3; ++i) {
    output->ant_vel_ekf[i] = input->ant_vel_ekf[i];
  }
  // state_ukf
  for (size_t i = 0; i < 18; ++i) {
    output->state_ukf[i] = input->state_ukf[i];
  }
  // var_ukf
  for (size_t i = 0; i < 17; ++i) {
    output->var_ukf[i] = input->var_ukf[i];
  }
  // vel_normed_ukf
  output->vel_normed_ukf = input->vel_normed_ukf;
  // euler_ukf
  for (size_t i = 0; i < 3; ++i) {
    output->euler_ukf[i] = input->euler_ukf[i];
  }
  // update_exit_ukf
  output->update_exit_ukf = input->update_exit_ukf;
  // ant_ecef_ukf
  for (size_t i = 0; i < 3; ++i) {
    output->ant_ecef_ukf[i] = input->ant_ecef_ukf[i];
  }
  // ant_llh_ukf
  for (size_t i = 0; i < 3; ++i) {
    output->ant_llh_ukf[i] = input->ant_llh_ukf[i];
  }
  // ant_vel_ukf
  for (size_t i = 0; i < 3; ++i) {
    output->ant_vel_ukf[i] = input->ant_vel_ukf[i];
  }
  // filter_time
  output->filter_time = input->filter_time;
  return true;
}

irt_nav_msgs__msg__NavFilter *
irt_nav_msgs__msg__NavFilter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__NavFilter * msg = (irt_nav_msgs__msg__NavFilter *)allocator.allocate(sizeof(irt_nav_msgs__msg__NavFilter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__NavFilter));
  bool success = irt_nav_msgs__msg__NavFilter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__NavFilter__destroy(irt_nav_msgs__msg__NavFilter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__NavFilter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__NavFilter__Sequence__init(irt_nav_msgs__msg__NavFilter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__NavFilter * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__NavFilter *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__NavFilter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__NavFilter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__NavFilter__fini(&data[i - 1]);
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
irt_nav_msgs__msg__NavFilter__Sequence__fini(irt_nav_msgs__msg__NavFilter__Sequence * array)
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
      irt_nav_msgs__msg__NavFilter__fini(&array->data[i]);
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

irt_nav_msgs__msg__NavFilter__Sequence *
irt_nav_msgs__msg__NavFilter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__NavFilter__Sequence * array = (irt_nav_msgs__msg__NavFilter__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__NavFilter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__NavFilter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__NavFilter__Sequence__destroy(irt_nav_msgs__msg__NavFilter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__NavFilter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__NavFilter__Sequence__are_equal(const irt_nav_msgs__msg__NavFilter__Sequence * lhs, const irt_nav_msgs__msg__NavFilter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__NavFilter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__NavFilter__Sequence__copy(
  const irt_nav_msgs__msg__NavFilter__Sequence * input,
  irt_nav_msgs__msg__NavFilter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__NavFilter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__NavFilter * data =
      (irt_nav_msgs__msg__NavFilter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__NavFilter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__NavFilter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__NavFilter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
