// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/FactorResidual.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/factor_residual__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `factor_name`
// Member `related_keys`
#include "rosidl_runtime_c/string_functions.h"
// Member `samples`
#include "irt_nav_msgs/msg/detail/residual_sample__functions.h"

bool
irt_nav_msgs__msg__FactorResidual__init(irt_nav_msgs__msg__FactorResidual * msg)
{
  if (!msg) {
    return false;
  }
  // factor_name
  if (!rosidl_runtime_c__String__init(&msg->factor_name)) {
    irt_nav_msgs__msg__FactorResidual__fini(msg);
    return false;
  }
  // current_state_key
  // related_keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->related_keys, 0)) {
    irt_nav_msgs__msg__FactorResidual__fini(msg);
    return false;
  }
  // samples
  if (!irt_nav_msgs__msg__ResidualSample__Sequence__init(&msg->samples, 0)) {
    irt_nav_msgs__msg__FactorResidual__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__FactorResidual__fini(irt_nav_msgs__msg__FactorResidual * msg)
{
  if (!msg) {
    return;
  }
  // factor_name
  rosidl_runtime_c__String__fini(&msg->factor_name);
  // current_state_key
  // related_keys
  rosidl_runtime_c__String__Sequence__fini(&msg->related_keys);
  // samples
  irt_nav_msgs__msg__ResidualSample__Sequence__fini(&msg->samples);
}

bool
irt_nav_msgs__msg__FactorResidual__are_equal(const irt_nav_msgs__msg__FactorResidual * lhs, const irt_nav_msgs__msg__FactorResidual * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // factor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->factor_name), &(rhs->factor_name)))
  {
    return false;
  }
  // current_state_key
  if (lhs->current_state_key != rhs->current_state_key) {
    return false;
  }
  // related_keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->related_keys), &(rhs->related_keys)))
  {
    return false;
  }
  // samples
  if (!irt_nav_msgs__msg__ResidualSample__Sequence__are_equal(
      &(lhs->samples), &(rhs->samples)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__FactorResidual__copy(
  const irt_nav_msgs__msg__FactorResidual * input,
  irt_nav_msgs__msg__FactorResidual * output)
{
  if (!input || !output) {
    return false;
  }
  // factor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->factor_name), &(output->factor_name)))
  {
    return false;
  }
  // current_state_key
  output->current_state_key = input->current_state_key;
  // related_keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->related_keys), &(output->related_keys)))
  {
    return false;
  }
  // samples
  if (!irt_nav_msgs__msg__ResidualSample__Sequence__copy(
      &(input->samples), &(output->samples)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__FactorResidual *
irt_nav_msgs__msg__FactorResidual__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__FactorResidual * msg = (irt_nav_msgs__msg__FactorResidual *)allocator.allocate(sizeof(irt_nav_msgs__msg__FactorResidual), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__FactorResidual));
  bool success = irt_nav_msgs__msg__FactorResidual__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__FactorResidual__destroy(irt_nav_msgs__msg__FactorResidual * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__FactorResidual__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__FactorResidual__Sequence__init(irt_nav_msgs__msg__FactorResidual__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__FactorResidual * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__FactorResidual *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__FactorResidual), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__FactorResidual__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__FactorResidual__fini(&data[i - 1]);
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
irt_nav_msgs__msg__FactorResidual__Sequence__fini(irt_nav_msgs__msg__FactorResidual__Sequence * array)
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
      irt_nav_msgs__msg__FactorResidual__fini(&array->data[i]);
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

irt_nav_msgs__msg__FactorResidual__Sequence *
irt_nav_msgs__msg__FactorResidual__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__FactorResidual__Sequence * array = (irt_nav_msgs__msg__FactorResidual__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__FactorResidual__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__FactorResidual__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__FactorResidual__Sequence__destroy(irt_nav_msgs__msg__FactorResidual__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__FactorResidual__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__FactorResidual__Sequence__are_equal(const irt_nav_msgs__msg__FactorResidual__Sequence * lhs, const irt_nav_msgs__msg__FactorResidual__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__FactorResidual__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__FactorResidual__Sequence__copy(
  const irt_nav_msgs__msg__FactorResidual__Sequence * input,
  irt_nav_msgs__msg__FactorResidual__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__FactorResidual);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__FactorResidual * data =
      (irt_nav_msgs__msg__FactorResidual *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__FactorResidual__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__FactorResidual__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__FactorResidual__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
