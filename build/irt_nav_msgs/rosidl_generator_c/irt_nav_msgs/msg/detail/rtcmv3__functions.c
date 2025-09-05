// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/RTCMV3.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/rtcmv3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__RTCMV3__init(irt_nav_msgs__msg__RTCMV3 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__RTCMV3__fini(msg);
    return false;
  }
  // tow
  // base
  // svid
  // pseudorange
  // type
  // carrier
  // cn0
  // locktime
  // lli
  // reference_station_id
  return true;
}

void
irt_nav_msgs__msg__RTCMV3__fini(irt_nav_msgs__msg__RTCMV3 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tow
  // base
  // svid
  // pseudorange
  // type
  // carrier
  // cn0
  // locktime
  // lli
  // reference_station_id
}

bool
irt_nav_msgs__msg__RTCMV3__are_equal(const irt_nav_msgs__msg__RTCMV3 * lhs, const irt_nav_msgs__msg__RTCMV3 * rhs)
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
  // base
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->base[i] != rhs->base[i]) {
      return false;
    }
  }
  // svid
  for (size_t i = 0; i < 40; ++i) {
    if (lhs->svid[i] != rhs->svid[i]) {
      return false;
    }
  }
  // pseudorange
  for (size_t i = 0; i < 200; ++i) {
    if (lhs->pseudorange[i] != rhs->pseudorange[i]) {
      return false;
    }
  }
  // type
  for (size_t i = 0; i < 200; ++i) {
    if (lhs->type[i] != rhs->type[i]) {
      return false;
    }
  }
  // carrier
  for (size_t i = 0; i < 200; ++i) {
    if (lhs->carrier[i] != rhs->carrier[i]) {
      return false;
    }
  }
  // cn0
  for (size_t i = 0; i < 200; ++i) {
    if (lhs->cn0[i] != rhs->cn0[i]) {
      return false;
    }
  }
  // locktime
  for (size_t i = 0; i < 200; ++i) {
    if (lhs->locktime[i] != rhs->locktime[i]) {
      return false;
    }
  }
  // lli
  for (size_t i = 0; i < 200; ++i) {
    if (lhs->lli[i] != rhs->lli[i]) {
      return false;
    }
  }
  // reference_station_id
  if (lhs->reference_station_id != rhs->reference_station_id) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__RTCMV3__copy(
  const irt_nav_msgs__msg__RTCMV3 * input,
  irt_nav_msgs__msg__RTCMV3 * output)
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
  // base
  for (size_t i = 0; i < 3; ++i) {
    output->base[i] = input->base[i];
  }
  // svid
  for (size_t i = 0; i < 40; ++i) {
    output->svid[i] = input->svid[i];
  }
  // pseudorange
  for (size_t i = 0; i < 200; ++i) {
    output->pseudorange[i] = input->pseudorange[i];
  }
  // type
  for (size_t i = 0; i < 200; ++i) {
    output->type[i] = input->type[i];
  }
  // carrier
  for (size_t i = 0; i < 200; ++i) {
    output->carrier[i] = input->carrier[i];
  }
  // cn0
  for (size_t i = 0; i < 200; ++i) {
    output->cn0[i] = input->cn0[i];
  }
  // locktime
  for (size_t i = 0; i < 200; ++i) {
    output->locktime[i] = input->locktime[i];
  }
  // lli
  for (size_t i = 0; i < 200; ++i) {
    output->lli[i] = input->lli[i];
  }
  // reference_station_id
  output->reference_station_id = input->reference_station_id;
  return true;
}

irt_nav_msgs__msg__RTCMV3 *
irt_nav_msgs__msg__RTCMV3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCMV3 * msg = (irt_nav_msgs__msg__RTCMV3 *)allocator.allocate(sizeof(irt_nav_msgs__msg__RTCMV3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__RTCMV3));
  bool success = irt_nav_msgs__msg__RTCMV3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__RTCMV3__destroy(irt_nav_msgs__msg__RTCMV3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__RTCMV3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__RTCMV3__Sequence__init(irt_nav_msgs__msg__RTCMV3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCMV3 * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__RTCMV3 *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__RTCMV3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__RTCMV3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__RTCMV3__fini(&data[i - 1]);
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
irt_nav_msgs__msg__RTCMV3__Sequence__fini(irt_nav_msgs__msg__RTCMV3__Sequence * array)
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
      irt_nav_msgs__msg__RTCMV3__fini(&array->data[i]);
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

irt_nav_msgs__msg__RTCMV3__Sequence *
irt_nav_msgs__msg__RTCMV3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__RTCMV3__Sequence * array = (irt_nav_msgs__msg__RTCMV3__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__RTCMV3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__RTCMV3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__RTCMV3__Sequence__destroy(irt_nav_msgs__msg__RTCMV3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__RTCMV3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__RTCMV3__Sequence__are_equal(const irt_nav_msgs__msg__RTCMV3__Sequence * lhs, const irt_nav_msgs__msg__RTCMV3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__RTCMV3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__RTCMV3__Sequence__copy(
  const irt_nav_msgs__msg__RTCMV3__Sequence * input,
  irt_nav_msgs__msg__RTCMV3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__RTCMV3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__RTCMV3 * data =
      (irt_nav_msgs__msg__RTCMV3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__RTCMV3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__RTCMV3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__RTCMV3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
