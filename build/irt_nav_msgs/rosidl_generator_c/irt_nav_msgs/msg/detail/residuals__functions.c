// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/Residuals.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/residuals__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `residuals_ant_main`
// Member `residuals_ant_aux`
#include "irt_nav_msgs/msg/detail/residual__functions.h"

bool
irt_nav_msgs__msg__Residuals__init(irt_nav_msgs__msg__Residuals * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__Residuals__fini(msg);
    return false;
  }
  // residuals_ant_main
  if (!irt_nav_msgs__msg__Residual__Sequence__init(&msg->residuals_ant_main, 0)) {
    irt_nav_msgs__msg__Residuals__fini(msg);
    return false;
  }
  // residuals_ant_aux
  if (!irt_nav_msgs__msg__Residual__Sequence__init(&msg->residuals_ant_aux, 0)) {
    irt_nav_msgs__msg__Residuals__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__Residuals__fini(irt_nav_msgs__msg__Residuals * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // residuals_ant_main
  irt_nav_msgs__msg__Residual__Sequence__fini(&msg->residuals_ant_main);
  // residuals_ant_aux
  irt_nav_msgs__msg__Residual__Sequence__fini(&msg->residuals_ant_aux);
}

bool
irt_nav_msgs__msg__Residuals__are_equal(const irt_nav_msgs__msg__Residuals * lhs, const irt_nav_msgs__msg__Residuals * rhs)
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
  // residuals_ant_main
  if (!irt_nav_msgs__msg__Residual__Sequence__are_equal(
      &(lhs->residuals_ant_main), &(rhs->residuals_ant_main)))
  {
    return false;
  }
  // residuals_ant_aux
  if (!irt_nav_msgs__msg__Residual__Sequence__are_equal(
      &(lhs->residuals_ant_aux), &(rhs->residuals_ant_aux)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__Residuals__copy(
  const irt_nav_msgs__msg__Residuals * input,
  irt_nav_msgs__msg__Residuals * output)
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
  // residuals_ant_main
  if (!irt_nav_msgs__msg__Residual__Sequence__copy(
      &(input->residuals_ant_main), &(output->residuals_ant_main)))
  {
    return false;
  }
  // residuals_ant_aux
  if (!irt_nav_msgs__msg__Residual__Sequence__copy(
      &(input->residuals_ant_aux), &(output->residuals_ant_aux)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__Residuals *
irt_nav_msgs__msg__Residuals__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Residuals * msg = (irt_nav_msgs__msg__Residuals *)allocator.allocate(sizeof(irt_nav_msgs__msg__Residuals), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__Residuals));
  bool success = irt_nav_msgs__msg__Residuals__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__Residuals__destroy(irt_nav_msgs__msg__Residuals * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__Residuals__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__Residuals__Sequence__init(irt_nav_msgs__msg__Residuals__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Residuals * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__Residuals *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__Residuals), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__Residuals__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__Residuals__fini(&data[i - 1]);
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
irt_nav_msgs__msg__Residuals__Sequence__fini(irt_nav_msgs__msg__Residuals__Sequence * array)
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
      irt_nav_msgs__msg__Residuals__fini(&array->data[i]);
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

irt_nav_msgs__msg__Residuals__Sequence *
irt_nav_msgs__msg__Residuals__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Residuals__Sequence * array = (irt_nav_msgs__msg__Residuals__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__Residuals__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__Residuals__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__Residuals__Sequence__destroy(irt_nav_msgs__msg__Residuals__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__Residuals__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__Residuals__Sequence__are_equal(const irt_nav_msgs__msg__Residuals__Sequence * lhs, const irt_nav_msgs__msg__Residuals__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__Residuals__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__Residuals__Sequence__copy(
  const irt_nav_msgs__msg__Residuals__Sequence * input,
  irt_nav_msgs__msg__Residuals__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__Residuals);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__Residuals * data =
      (irt_nav_msgs__msg__Residuals *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__Residuals__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__Residuals__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__Residuals__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
