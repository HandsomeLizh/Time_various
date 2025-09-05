// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/PRFactorWeights.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/pr_factor_weights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sat`
// Member `weight`
// Member `cardinality`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__PRFactorWeights__init(irt_nav_msgs__msg__PRFactorWeights * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__PRFactorWeights__fini(msg);
    return false;
  }
  // mean
  // median
  // variance
  // sat
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sat, 0)) {
    irt_nav_msgs__msg__PRFactorWeights__fini(msg);
    return false;
  }
  // weight
  if (!rosidl_runtime_c__double__Sequence__init(&msg->weight, 0)) {
    irt_nav_msgs__msg__PRFactorWeights__fini(msg);
    return false;
  }
  // cardinality
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->cardinality, 0)) {
    irt_nav_msgs__msg__PRFactorWeights__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__PRFactorWeights__fini(irt_nav_msgs__msg__PRFactorWeights * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mean
  // median
  // variance
  // sat
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sat);
  // weight
  rosidl_runtime_c__double__Sequence__fini(&msg->weight);
  // cardinality
  rosidl_runtime_c__uint32__Sequence__fini(&msg->cardinality);
}

bool
irt_nav_msgs__msg__PRFactorWeights__are_equal(const irt_nav_msgs__msg__PRFactorWeights * lhs, const irt_nav_msgs__msg__PRFactorWeights * rhs)
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
  // mean
  if (lhs->mean != rhs->mean) {
    return false;
  }
  // median
  if (lhs->median != rhs->median) {
    return false;
  }
  // variance
  if (lhs->variance != rhs->variance) {
    return false;
  }
  // sat
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->sat), &(rhs->sat)))
  {
    return false;
  }
  // weight
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->weight), &(rhs->weight)))
  {
    return false;
  }
  // cardinality
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->cardinality), &(rhs->cardinality)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__PRFactorWeights__copy(
  const irt_nav_msgs__msg__PRFactorWeights * input,
  irt_nav_msgs__msg__PRFactorWeights * output)
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
  // mean
  output->mean = input->mean;
  // median
  output->median = input->median;
  // variance
  output->variance = input->variance;
  // sat
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->sat), &(output->sat)))
  {
    return false;
  }
  // weight
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->weight), &(output->weight)))
  {
    return false;
  }
  // cardinality
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->cardinality), &(output->cardinality)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__PRFactorWeights *
irt_nav_msgs__msg__PRFactorWeights__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PRFactorWeights * msg = (irt_nav_msgs__msg__PRFactorWeights *)allocator.allocate(sizeof(irt_nav_msgs__msg__PRFactorWeights), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__PRFactorWeights));
  bool success = irt_nav_msgs__msg__PRFactorWeights__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__PRFactorWeights__destroy(irt_nav_msgs__msg__PRFactorWeights * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__PRFactorWeights__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__PRFactorWeights__Sequence__init(irt_nav_msgs__msg__PRFactorWeights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PRFactorWeights * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__PRFactorWeights *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__PRFactorWeights), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__PRFactorWeights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__PRFactorWeights__fini(&data[i - 1]);
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
irt_nav_msgs__msg__PRFactorWeights__Sequence__fini(irt_nav_msgs__msg__PRFactorWeights__Sequence * array)
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
      irt_nav_msgs__msg__PRFactorWeights__fini(&array->data[i]);
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

irt_nav_msgs__msg__PRFactorWeights__Sequence *
irt_nav_msgs__msg__PRFactorWeights__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PRFactorWeights__Sequence * array = (irt_nav_msgs__msg__PRFactorWeights__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__PRFactorWeights__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__PRFactorWeights__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__PRFactorWeights__Sequence__destroy(irt_nav_msgs__msg__PRFactorWeights__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__PRFactorWeights__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__PRFactorWeights__Sequence__are_equal(const irt_nav_msgs__msg__PRFactorWeights__Sequence * lhs, const irt_nav_msgs__msg__PRFactorWeights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__PRFactorWeights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__PRFactorWeights__Sequence__copy(
  const irt_nav_msgs__msg__PRFactorWeights__Sequence * input,
  irt_nav_msgs__msg__PRFactorWeights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__PRFactorWeights);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__PRFactorWeights * data =
      (irt_nav_msgs__msg__PRFactorWeights *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__PRFactorWeights__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__PRFactorWeights__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__PRFactorWeights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
