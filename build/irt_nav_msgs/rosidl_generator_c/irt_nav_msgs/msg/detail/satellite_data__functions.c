// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/SatelliteData.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/satellite_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `factor`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
irt_nav_msgs__msg__SatelliteData__init(irt_nav_msgs__msg__SatelliteData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__SatelliteData__fini(msg);
    return false;
  }
  // sat
  // factor
  if (!rosidl_runtime_c__String__init(&msg->factor)) {
    irt_nav_msgs__msg__SatelliteData__fini(msg);
    return false;
  }
  // variance
  // elevation
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    irt_nav_msgs__msg__SatelliteData__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    irt_nav_msgs__msg__SatelliteData__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__SatelliteData__fini(irt_nav_msgs__msg__SatelliteData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sat
  // factor
  rosidl_runtime_c__String__fini(&msg->factor);
  // variance
  // elevation
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
}

bool
irt_nav_msgs__msg__SatelliteData__are_equal(const irt_nav_msgs__msg__SatelliteData * lhs, const irt_nav_msgs__msg__SatelliteData * rhs)
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
  // variance
  if (lhs->variance != rhs->variance) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__SatelliteData__copy(
  const irt_nav_msgs__msg__SatelliteData * input,
  irt_nav_msgs__msg__SatelliteData * output)
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
  // sat
  output->sat = input->sat;
  // factor
  if (!rosidl_runtime_c__String__copy(
      &(input->factor), &(output->factor)))
  {
    return false;
  }
  // variance
  output->variance = input->variance;
  // elevation
  output->elevation = input->elevation;
  // position
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__SatelliteData *
irt_nav_msgs__msg__SatelliteData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SatelliteData * msg = (irt_nav_msgs__msg__SatelliteData *)allocator.allocate(sizeof(irt_nav_msgs__msg__SatelliteData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__SatelliteData));
  bool success = irt_nav_msgs__msg__SatelliteData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__SatelliteData__destroy(irt_nav_msgs__msg__SatelliteData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__SatelliteData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__SatelliteData__Sequence__init(irt_nav_msgs__msg__SatelliteData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SatelliteData * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__SatelliteData *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__SatelliteData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__SatelliteData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__SatelliteData__fini(&data[i - 1]);
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
irt_nav_msgs__msg__SatelliteData__Sequence__fini(irt_nav_msgs__msg__SatelliteData__Sequence * array)
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
      irt_nav_msgs__msg__SatelliteData__fini(&array->data[i]);
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

irt_nav_msgs__msg__SatelliteData__Sequence *
irt_nav_msgs__msg__SatelliteData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__SatelliteData__Sequence * array = (irt_nav_msgs__msg__SatelliteData__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__SatelliteData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__SatelliteData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__SatelliteData__Sequence__destroy(irt_nav_msgs__msg__SatelliteData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__SatelliteData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__SatelliteData__Sequence__are_equal(const irt_nav_msgs__msg__SatelliteData__Sequence * lhs, const irt_nav_msgs__msg__SatelliteData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__SatelliteData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__SatelliteData__Sequence__copy(
  const irt_nav_msgs__msg__SatelliteData__Sequence * input,
  irt_nav_msgs__msg__SatelliteData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__SatelliteData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__SatelliteData * data =
      (irt_nav_msgs__msg__SatelliteData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__SatelliteData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__SatelliteData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__SatelliteData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
