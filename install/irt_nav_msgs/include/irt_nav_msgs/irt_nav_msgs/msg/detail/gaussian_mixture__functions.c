// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/GaussianMixture.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/gaussian_mixture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `factor`
// Member `environment`
#include "rosidl_runtime_c/string_functions.h"
// Member `residuals`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `gaussian`
#include "irt_nav_msgs/msg/detail/gaussian_component__functions.h"

bool
irt_nav_msgs__msg__GaussianMixture__init(irt_nav_msgs__msg__GaussianMixture * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__GaussianMixture__fini(msg);
    return false;
  }
  // tow
  // sat
  // factor
  if (!rosidl_runtime_c__String__init(&msg->factor)) {
    irt_nav_msgs__msg__GaussianMixture__fini(msg);
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__init(&msg->environment)) {
    irt_nav_msgs__msg__GaussianMixture__fini(msg);
    return false;
  }
  // runtime
  // dim
  // residuals
  if (!rosidl_runtime_c__double__Sequence__init(&msg->residuals, 0)) {
    irt_nav_msgs__msg__GaussianMixture__fini(msg);
    return false;
  }
  // gaussian
  if (!irt_nav_msgs__msg__GaussianComponent__Sequence__init(&msg->gaussian, 0)) {
    irt_nav_msgs__msg__GaussianMixture__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__GaussianMixture__fini(irt_nav_msgs__msg__GaussianMixture * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tow
  // sat
  // factor
  rosidl_runtime_c__String__fini(&msg->factor);
  // environment
  rosidl_runtime_c__String__fini(&msg->environment);
  // runtime
  // dim
  // residuals
  rosidl_runtime_c__double__Sequence__fini(&msg->residuals);
  // gaussian
  irt_nav_msgs__msg__GaussianComponent__Sequence__fini(&msg->gaussian);
}

bool
irt_nav_msgs__msg__GaussianMixture__are_equal(const irt_nav_msgs__msg__GaussianMixture * lhs, const irt_nav_msgs__msg__GaussianMixture * rhs)
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
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // sat
  if (lhs->sat != rhs->sat) {
    return false;
  }
  // factor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->factor), &(rhs->factor)))
  {
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->environment), &(rhs->environment)))
  {
    return false;
  }
  // runtime
  if (lhs->runtime != rhs->runtime) {
    return false;
  }
  // dim
  if (lhs->dim != rhs->dim) {
    return false;
  }
  // residuals
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->residuals), &(rhs->residuals)))
  {
    return false;
  }
  // gaussian
  if (!irt_nav_msgs__msg__GaussianComponent__Sequence__are_equal(
      &(lhs->gaussian), &(rhs->gaussian)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__GaussianMixture__copy(
  const irt_nav_msgs__msg__GaussianMixture * input,
  irt_nav_msgs__msg__GaussianMixture * output)
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
  // tow
  output->tow = input->tow;
  // sat
  output->sat = input->sat;
  // factor
  if (!rosidl_runtime_c__String__copy(
      &(input->factor), &(output->factor)))
  {
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__copy(
      &(input->environment), &(output->environment)))
  {
    return false;
  }
  // runtime
  output->runtime = input->runtime;
  // dim
  output->dim = input->dim;
  // residuals
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->residuals), &(output->residuals)))
  {
    return false;
  }
  // gaussian
  if (!irt_nav_msgs__msg__GaussianComponent__Sequence__copy(
      &(input->gaussian), &(output->gaussian)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__GaussianMixture *
irt_nav_msgs__msg__GaussianMixture__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GaussianMixture * msg = (irt_nav_msgs__msg__GaussianMixture *)allocator.allocate(sizeof(irt_nav_msgs__msg__GaussianMixture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__GaussianMixture));
  bool success = irt_nav_msgs__msg__GaussianMixture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__GaussianMixture__destroy(irt_nav_msgs__msg__GaussianMixture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__GaussianMixture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__GaussianMixture__Sequence__init(irt_nav_msgs__msg__GaussianMixture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GaussianMixture * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__GaussianMixture *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__GaussianMixture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__GaussianMixture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__GaussianMixture__fini(&data[i - 1]);
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
irt_nav_msgs__msg__GaussianMixture__Sequence__fini(irt_nav_msgs__msg__GaussianMixture__Sequence * array)
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
      irt_nav_msgs__msg__GaussianMixture__fini(&array->data[i]);
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

irt_nav_msgs__msg__GaussianMixture__Sequence *
irt_nav_msgs__msg__GaussianMixture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__GaussianMixture__Sequence * array = (irt_nav_msgs__msg__GaussianMixture__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__GaussianMixture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__GaussianMixture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__GaussianMixture__Sequence__destroy(irt_nav_msgs__msg__GaussianMixture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__GaussianMixture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__GaussianMixture__Sequence__are_equal(const irt_nav_msgs__msg__GaussianMixture__Sequence * lhs, const irt_nav_msgs__msg__GaussianMixture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__GaussianMixture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__GaussianMixture__Sequence__copy(
  const irt_nav_msgs__msg__GaussianMixture__Sequence * input,
  irt_nav_msgs__msg__GaussianMixture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__GaussianMixture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__GaussianMixture * data =
      (irt_nav_msgs__msg__GaussianMixture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__GaussianMixture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__GaussianMixture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__GaussianMixture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
