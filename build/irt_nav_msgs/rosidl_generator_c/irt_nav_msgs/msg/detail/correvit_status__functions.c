// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/CorrevitStatus.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/correvit_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__CorrevitStatus__init(irt_nav_msgs__msg__CorrevitStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__CorrevitStatus__fini(msg);
    return false;
  }
  // angle_vel_correction
  // angle_switch_off
  // direction
  // direction_head
  // direction_head_valid
  // direction_motion
  // direction_mounting
  // filter_off_on
  // filter_setting
  // head_status
  // lamp_current
  // lamp_current_control
  // sensor_id
  // temperature
  // temperature_ok
  return true;
}

void
irt_nav_msgs__msg__CorrevitStatus__fini(irt_nav_msgs__msg__CorrevitStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angle_vel_correction
  // angle_switch_off
  // direction
  // direction_head
  // direction_head_valid
  // direction_motion
  // direction_mounting
  // filter_off_on
  // filter_setting
  // head_status
  // lamp_current
  // lamp_current_control
  // sensor_id
  // temperature
  // temperature_ok
}

bool
irt_nav_msgs__msg__CorrevitStatus__are_equal(const irt_nav_msgs__msg__CorrevitStatus * lhs, const irt_nav_msgs__msg__CorrevitStatus * rhs)
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
  // angle_vel_correction
  if (lhs->angle_vel_correction != rhs->angle_vel_correction) {
    return false;
  }
  // angle_switch_off
  if (lhs->angle_switch_off != rhs->angle_switch_off) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // direction_head
  if (lhs->direction_head != rhs->direction_head) {
    return false;
  }
  // direction_head_valid
  if (lhs->direction_head_valid != rhs->direction_head_valid) {
    return false;
  }
  // direction_motion
  if (lhs->direction_motion != rhs->direction_motion) {
    return false;
  }
  // direction_mounting
  if (lhs->direction_mounting != rhs->direction_mounting) {
    return false;
  }
  // filter_off_on
  if (lhs->filter_off_on != rhs->filter_off_on) {
    return false;
  }
  // filter_setting
  if (lhs->filter_setting != rhs->filter_setting) {
    return false;
  }
  // head_status
  if (lhs->head_status != rhs->head_status) {
    return false;
  }
  // lamp_current
  if (lhs->lamp_current != rhs->lamp_current) {
    return false;
  }
  // lamp_current_control
  if (lhs->lamp_current_control != rhs->lamp_current_control) {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // temperature_ok
  if (lhs->temperature_ok != rhs->temperature_ok) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__CorrevitStatus__copy(
  const irt_nav_msgs__msg__CorrevitStatus * input,
  irt_nav_msgs__msg__CorrevitStatus * output)
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
  // angle_vel_correction
  output->angle_vel_correction = input->angle_vel_correction;
  // angle_switch_off
  output->angle_switch_off = input->angle_switch_off;
  // direction
  output->direction = input->direction;
  // direction_head
  output->direction_head = input->direction_head;
  // direction_head_valid
  output->direction_head_valid = input->direction_head_valid;
  // direction_motion
  output->direction_motion = input->direction_motion;
  // direction_mounting
  output->direction_mounting = input->direction_mounting;
  // filter_off_on
  output->filter_off_on = input->filter_off_on;
  // filter_setting
  output->filter_setting = input->filter_setting;
  // head_status
  output->head_status = input->head_status;
  // lamp_current
  output->lamp_current = input->lamp_current;
  // lamp_current_control
  output->lamp_current_control = input->lamp_current_control;
  // sensor_id
  output->sensor_id = input->sensor_id;
  // temperature
  output->temperature = input->temperature;
  // temperature_ok
  output->temperature_ok = input->temperature_ok;
  return true;
}

irt_nav_msgs__msg__CorrevitStatus *
irt_nav_msgs__msg__CorrevitStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__CorrevitStatus * msg = (irt_nav_msgs__msg__CorrevitStatus *)allocator.allocate(sizeof(irt_nav_msgs__msg__CorrevitStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__CorrevitStatus));
  bool success = irt_nav_msgs__msg__CorrevitStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__CorrevitStatus__destroy(irt_nav_msgs__msg__CorrevitStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__CorrevitStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__CorrevitStatus__Sequence__init(irt_nav_msgs__msg__CorrevitStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__CorrevitStatus * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__CorrevitStatus *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__CorrevitStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__CorrevitStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__CorrevitStatus__fini(&data[i - 1]);
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
irt_nav_msgs__msg__CorrevitStatus__Sequence__fini(irt_nav_msgs__msg__CorrevitStatus__Sequence * array)
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
      irt_nav_msgs__msg__CorrevitStatus__fini(&array->data[i]);
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

irt_nav_msgs__msg__CorrevitStatus__Sequence *
irt_nav_msgs__msg__CorrevitStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__CorrevitStatus__Sequence * array = (irt_nav_msgs__msg__CorrevitStatus__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__CorrevitStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__CorrevitStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__CorrevitStatus__Sequence__destroy(irt_nav_msgs__msg__CorrevitStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__CorrevitStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__CorrevitStatus__Sequence__are_equal(const irt_nav_msgs__msg__CorrevitStatus__Sequence * lhs, const irt_nav_msgs__msg__CorrevitStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__CorrevitStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__CorrevitStatus__Sequence__copy(
  const irt_nav_msgs__msg__CorrevitStatus__Sequence * input,
  irt_nav_msgs__msg__CorrevitStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__CorrevitStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__CorrevitStatus * data =
      (irt_nav_msgs__msg__CorrevitStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__CorrevitStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__CorrevitStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__CorrevitStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
