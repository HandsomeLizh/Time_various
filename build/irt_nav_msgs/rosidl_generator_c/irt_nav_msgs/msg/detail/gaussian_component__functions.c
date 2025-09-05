// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/GaussianComponent.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gaussian_component__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mean`
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__GaussianComponent__init(irt_nav_msgs__msg__GaussianComponent * msg)
{
  if (!msg) {
    return false;
  }
  // weight
  // mean
  if (!rosidl_runtime_c__double__Sequence__init(&msg->mean, 0)) {
    irt_nav_msgs__msg__GaussianComponent__fini(msg);
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    irt_nav_msgs__msg__GaussianComponent__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__GaussianComponent__fini(irt_nav_msgs__msg__GaussianComponent * msg)
{
  if (!msg) {
    return;
  }
  // weight
  // mean
  rosidl_runtime_c__double__Sequence__fini(&msg->mean);
  // covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->covariance);
}

bool
irt_nav_msgs__msg__GaussianComponent__are_equal(const irt_nav_msgs__msg__GaussianComponent * lhs, const irt_nav_msgs__msg__GaussianComponent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  // mean
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->mean), &(rhs->mean)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->covariance), &(rhs->covariance)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__GaussianComponent__copy(
  const irt_nav_msgs__msg__GaussianComponent * input,
  irt_nav_msgs__msg__GaussianComponent * output)
{
  if (!input || !output) {
    return false;
  }
  // weight
  output->weight = input->weight;
  // mean
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->mean), &(output->mean)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->covariance), &(output->covariance)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__GaussianComponent *
irt_nav_msgs__msg__GaussianComponent__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GaussianComponent * msg = (irt_nav_msgs__msg__GaussianComponent *)allocator.allocate(sizeof(irt_nav_msgs__msg__GaussianComponent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__GaussianComponent));
  bool success = irt_nav_msgs__msg__GaussianComponent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__GaussianComponent__destroy(irt_nav_msgs__msg__GaussianComponent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__GaussianComponent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__GaussianComponent__Sequence__init(irt_nav_msgs__msg__GaussianComponent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GaussianComponent * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__GaussianComponent *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__GaussianComponent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__GaussianComponent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__GaussianComponent__fini(&data[i - 1]);
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
irt_nav_msgs__msg__GaussianComponent__Sequence__fini(irt_nav_msgs__msg__GaussianComponent__Sequence * array)
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
      irt_nav_msgs__msg__GaussianComponent__fini(&array->data[i]);
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

irt_nav_msgs__msg__GaussianComponent__Sequence *
irt_nav_msgs__msg__GaussianComponent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GaussianComponent__Sequence * array = (irt_nav_msgs__msg__GaussianComponent__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__GaussianComponent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__GaussianComponent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__GaussianComponent__Sequence__destroy(irt_nav_msgs__msg__GaussianComponent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__GaussianComponent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__GaussianComponent__Sequence__are_equal(const irt_nav_msgs__msg__GaussianComponent__Sequence * lhs, const irt_nav_msgs__msg__GaussianComponent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__GaussianComponent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__GaussianComponent__Sequence__copy(
  const irt_nav_msgs__msg__GaussianComponent__Sequence * input,
  irt_nav_msgs__msg__GaussianComponent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__GaussianComponent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__GaussianComponent * data =
      (irt_nav_msgs__msg__GaussianComponent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__GaussianComponent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__GaussianComponent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__GaussianComponent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
