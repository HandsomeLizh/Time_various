// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/PVTLS.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/pvtls__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ls_ant_main`
// Member `ls_ant_aux`
#include "irt_nav_msgs/msg/detail/sol_ls__functions.h"

bool
irt_nav_msgs__msg__PVTLS__init(irt_nav_msgs__msg__PVTLS * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__PVTLS__fini(msg);
    return false;
  }
  // ls_ant_main
  if (!irt_nav_msgs__msg__SolLS__init(&msg->ls_ant_main)) {
    irt_nav_msgs__msg__PVTLS__fini(msg);
    return false;
  }
  // ls_ant_aux
  if (!irt_nav_msgs__msg__SolLS__init(&msg->ls_ant_aux)) {
    irt_nav_msgs__msg__PVTLS__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__PVTLS__fini(irt_nav_msgs__msg__PVTLS * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ls_ant_main
  irt_nav_msgs__msg__SolLS__fini(&msg->ls_ant_main);
  // ls_ant_aux
  irt_nav_msgs__msg__SolLS__fini(&msg->ls_ant_aux);
}

bool
irt_nav_msgs__msg__PVTLS__are_equal(const irt_nav_msgs__msg__PVTLS * lhs, const irt_nav_msgs__msg__PVTLS * rhs)
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
  // ls_ant_main
  if (!irt_nav_msgs__msg__SolLS__are_equal(
      &(lhs->ls_ant_main), &(rhs->ls_ant_main)))
  {
    return false;
  }
  // ls_ant_aux
  if (!irt_nav_msgs__msg__SolLS__are_equal(
      &(lhs->ls_ant_aux), &(rhs->ls_ant_aux)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__PVTLS__copy(
  const irt_nav_msgs__msg__PVTLS * input,
  irt_nav_msgs__msg__PVTLS * output)
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
  // ls_ant_main
  if (!irt_nav_msgs__msg__SolLS__copy(
      &(input->ls_ant_main), &(output->ls_ant_main)))
  {
    return false;
  }
  // ls_ant_aux
  if (!irt_nav_msgs__msg__SolLS__copy(
      &(input->ls_ant_aux), &(output->ls_ant_aux)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__PVTLS *
irt_nav_msgs__msg__PVTLS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PVTLS * msg = (irt_nav_msgs__msg__PVTLS *)allocator.allocate(sizeof(irt_nav_msgs__msg__PVTLS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__PVTLS));
  bool success = irt_nav_msgs__msg__PVTLS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__PVTLS__destroy(irt_nav_msgs__msg__PVTLS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__PVTLS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__PVTLS__Sequence__init(irt_nav_msgs__msg__PVTLS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PVTLS * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__PVTLS *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__PVTLS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__PVTLS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__PVTLS__fini(&data[i - 1]);
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
irt_nav_msgs__msg__PVTLS__Sequence__fini(irt_nav_msgs__msg__PVTLS__Sequence * array)
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
      irt_nav_msgs__msg__PVTLS__fini(&array->data[i]);
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

irt_nav_msgs__msg__PVTLS__Sequence *
irt_nav_msgs__msg__PVTLS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__PVTLS__Sequence * array = (irt_nav_msgs__msg__PVTLS__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__PVTLS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__PVTLS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__PVTLS__Sequence__destroy(irt_nav_msgs__msg__PVTLS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__PVTLS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__PVTLS__Sequence__are_equal(const irt_nav_msgs__msg__PVTLS__Sequence * lhs, const irt_nav_msgs__msg__PVTLS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__PVTLS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__PVTLS__Sequence__copy(
  const irt_nav_msgs__msg__PVTLS__Sequence * input,
  irt_nav_msgs__msg__PVTLS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__PVTLS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__PVTLS * data =
      (irt_nav_msgs__msg__PVTLS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__PVTLS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__PVTLS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__PVTLS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
