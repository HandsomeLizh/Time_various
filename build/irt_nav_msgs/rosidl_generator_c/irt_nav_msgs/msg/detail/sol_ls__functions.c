// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/SolLS.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/sol_ls__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
irt_nav_msgs__msg__SolLS__init(irt_nav_msgs__msg__SolLS * msg)
{
  if (!msg) {
    return false;
  }
  // llh
  // vel_ned
  // receiver_clock_bias
  // receiver_clock_drift
  // dop
  // available
  return true;
}

void
irt_nav_msgs__msg__SolLS__fini(irt_nav_msgs__msg__SolLS * msg)
{
  if (!msg) {
    return;
  }
  // llh
  // vel_ned
  // receiver_clock_bias
  // receiver_clock_drift
  // dop
  // available
}

bool
irt_nav_msgs__msg__SolLS__are_equal(const irt_nav_msgs__msg__SolLS * lhs, const irt_nav_msgs__msg__SolLS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // llh
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->llh[i] != rhs->llh[i]) {
      return false;
    }
  }
  // vel_ned
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->vel_ned[i] != rhs->vel_ned[i]) {
      return false;
    }
  }
  // receiver_clock_bias
  if (lhs->receiver_clock_bias != rhs->receiver_clock_bias) {
    return false;
  }
  // receiver_clock_drift
  if (lhs->receiver_clock_drift != rhs->receiver_clock_drift) {
    return false;
  }
  // dop
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->dop[i] != rhs->dop[i]) {
      return false;
    }
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__SolLS__copy(
  const irt_nav_msgs__msg__SolLS * input,
  irt_nav_msgs__msg__SolLS * output)
{
  if (!input || !output) {
    return false;
  }
  // llh
  for (size_t i = 0; i < 3; ++i) {
    output->llh[i] = input->llh[i];
  }
  // vel_ned
  for (size_t i = 0; i < 3; ++i) {
    output->vel_ned[i] = input->vel_ned[i];
  }
  // receiver_clock_bias
  output->receiver_clock_bias = input->receiver_clock_bias;
  // receiver_clock_drift
  output->receiver_clock_drift = input->receiver_clock_drift;
  // dop
  for (size_t i = 0; i < 2; ++i) {
    output->dop[i] = input->dop[i];
  }
  // available
  output->available = input->available;
  return true;
}

irt_nav_msgs__msg__SolLS *
irt_nav_msgs__msg__SolLS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SolLS * msg = (irt_nav_msgs__msg__SolLS *)allocator.allocate(sizeof(irt_nav_msgs__msg__SolLS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__SolLS));
  bool success = irt_nav_msgs__msg__SolLS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__SolLS__destroy(irt_nav_msgs__msg__SolLS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__SolLS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__SolLS__Sequence__init(irt_nav_msgs__msg__SolLS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SolLS * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__SolLS *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__SolLS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__SolLS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__SolLS__fini(&data[i - 1]);
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
irt_nav_msgs__msg__SolLS__Sequence__fini(irt_nav_msgs__msg__SolLS__Sequence * array)
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
      irt_nav_msgs__msg__SolLS__fini(&array->data[i]);
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

irt_nav_msgs__msg__SolLS__Sequence *
irt_nav_msgs__msg__SolLS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SolLS__Sequence * array = (irt_nav_msgs__msg__SolLS__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__SolLS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__SolLS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__SolLS__Sequence__destroy(irt_nav_msgs__msg__SolLS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__SolLS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__SolLS__Sequence__are_equal(const irt_nav_msgs__msg__SolLS__Sequence * lhs, const irt_nav_msgs__msg__SolLS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__SolLS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__SolLS__Sequence__copy(
  const irt_nav_msgs__msg__SolLS__Sequence * input,
  irt_nav_msgs__msg__SolLS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__SolLS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__SolLS * data =
      (irt_nav_msgs__msg__SolLS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__SolLS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__SolLS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__SolLS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
