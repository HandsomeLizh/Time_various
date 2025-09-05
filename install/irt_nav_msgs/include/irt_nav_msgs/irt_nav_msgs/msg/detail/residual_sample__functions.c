// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/ResidualSample.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/residual_sample__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `whitened_error`
// Member `unwhitened_error`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__ResidualSample__init(irt_nav_msgs__msg__ResidualSample * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  // whitened_error
  if (!rosidl_runtime_c__double__Sequence__init(&msg->whitened_error, 0)) {
    irt_nav_msgs__msg__ResidualSample__fini(msg);
    return false;
  }
  // unwhitened_error
  if (!rosidl_runtime_c__double__Sequence__init(&msg->unwhitened_error, 0)) {
    irt_nav_msgs__msg__ResidualSample__fini(msg);
    return false;
  }
  // loss_error
  // noise_model_weight
  return true;
}

void
irt_nav_msgs__msg__ResidualSample__fini(irt_nav_msgs__msg__ResidualSample * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  // whitened_error
  rosidl_runtime_c__double__Sequence__fini(&msg->whitened_error);
  // unwhitened_error
  rosidl_runtime_c__double__Sequence__fini(&msg->unwhitened_error);
  // loss_error
  // noise_model_weight
}

bool
irt_nav_msgs__msg__ResidualSample__are_equal(const irt_nav_msgs__msg__ResidualSample * lhs, const irt_nav_msgs__msg__ResidualSample * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // whitened_error
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->whitened_error), &(rhs->whitened_error)))
  {
    return false;
  }
  // unwhitened_error
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->unwhitened_error), &(rhs->unwhitened_error)))
  {
    return false;
  }
  // loss_error
  if (lhs->loss_error != rhs->loss_error) {
    return false;
  }
  // noise_model_weight
  if (lhs->noise_model_weight != rhs->noise_model_weight) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__ResidualSample__copy(
  const irt_nav_msgs__msg__ResidualSample * input,
  irt_nav_msgs__msg__ResidualSample * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // whitened_error
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->whitened_error), &(output->whitened_error)))
  {
    return false;
  }
  // unwhitened_error
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->unwhitened_error), &(output->unwhitened_error)))
  {
    return false;
  }
  // loss_error
  output->loss_error = input->loss_error;
  // noise_model_weight
  output->noise_model_weight = input->noise_model_weight;
  return true;
}

irt_nav_msgs__msg__ResidualSample *
irt_nav_msgs__msg__ResidualSample__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__ResidualSample * msg = (irt_nav_msgs__msg__ResidualSample *)allocator.allocate(sizeof(irt_nav_msgs__msg__ResidualSample), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__ResidualSample));
  bool success = irt_nav_msgs__msg__ResidualSample__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__ResidualSample__destroy(irt_nav_msgs__msg__ResidualSample * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__ResidualSample__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__ResidualSample__Sequence__init(irt_nav_msgs__msg__ResidualSample__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__ResidualSample * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__ResidualSample *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__ResidualSample), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__ResidualSample__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__ResidualSample__fini(&data[i - 1]);
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
irt_nav_msgs__msg__ResidualSample__Sequence__fini(irt_nav_msgs__msg__ResidualSample__Sequence * array)
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
      irt_nav_msgs__msg__ResidualSample__fini(&array->data[i]);
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

irt_nav_msgs__msg__ResidualSample__Sequence *
irt_nav_msgs__msg__ResidualSample__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__ResidualSample__Sequence * array = (irt_nav_msgs__msg__ResidualSample__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__ResidualSample__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__ResidualSample__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__ResidualSample__Sequence__destroy(irt_nav_msgs__msg__ResidualSample__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__ResidualSample__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__ResidualSample__Sequence__are_equal(const irt_nav_msgs__msg__ResidualSample__Sequence * lhs, const irt_nav_msgs__msg__ResidualSample__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__ResidualSample__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__ResidualSample__Sequence__copy(
  const irt_nav_msgs__msg__ResidualSample__Sequence * input,
  irt_nav_msgs__msg__ResidualSample__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__ResidualSample);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__ResidualSample * data =
      (irt_nav_msgs__msg__ResidualSample *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__ResidualSample__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__ResidualSample__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__ResidualSample__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
