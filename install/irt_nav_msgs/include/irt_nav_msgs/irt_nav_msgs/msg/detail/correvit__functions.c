// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/Correvit.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/correvit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__Correvit__init(irt_nav_msgs__msg__Correvit * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__Correvit__fini(msg);
    return false;
  }
  // angle_correvit
  // vel_x_correvit
  // vel_y_correvit
  // vel_correvit
  return true;
}

void
irt_nav_msgs__msg__Correvit__fini(irt_nav_msgs__msg__Correvit * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angle_correvit
  // vel_x_correvit
  // vel_y_correvit
  // vel_correvit
}

bool
irt_nav_msgs__msg__Correvit__are_equal(const irt_nav_msgs__msg__Correvit * lhs, const irt_nav_msgs__msg__Correvit * rhs)
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
  // angle_correvit
  if (lhs->angle_correvit != rhs->angle_correvit) {
    return false;
  }
  // vel_x_correvit
  if (lhs->vel_x_correvit != rhs->vel_x_correvit) {
    return false;
  }
  // vel_y_correvit
  if (lhs->vel_y_correvit != rhs->vel_y_correvit) {
    return false;
  }
  // vel_correvit
  if (lhs->vel_correvit != rhs->vel_correvit) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__Correvit__copy(
  const irt_nav_msgs__msg__Correvit * input,
  irt_nav_msgs__msg__Correvit * output)
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
  // angle_correvit
  output->angle_correvit = input->angle_correvit;
  // vel_x_correvit
  output->vel_x_correvit = input->vel_x_correvit;
  // vel_y_correvit
  output->vel_y_correvit = input->vel_y_correvit;
  // vel_correvit
  output->vel_correvit = input->vel_correvit;
  return true;
}

irt_nav_msgs__msg__Correvit *
irt_nav_msgs__msg__Correvit__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Correvit * msg = (irt_nav_msgs__msg__Correvit *)allocator.allocate(sizeof(irt_nav_msgs__msg__Correvit), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__Correvit));
  bool success = irt_nav_msgs__msg__Correvit__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__Correvit__destroy(irt_nav_msgs__msg__Correvit * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__Correvit__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__Correvit__Sequence__init(irt_nav_msgs__msg__Correvit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Correvit * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__Correvit *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__Correvit), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__Correvit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__Correvit__fini(&data[i - 1]);
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
irt_nav_msgs__msg__Correvit__Sequence__fini(irt_nav_msgs__msg__Correvit__Sequence * array)
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
      irt_nav_msgs__msg__Correvit__fini(&array->data[i]);
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

irt_nav_msgs__msg__Correvit__Sequence *
irt_nav_msgs__msg__Correvit__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Correvit__Sequence * array = (irt_nav_msgs__msg__Correvit__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__Correvit__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__Correvit__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__Correvit__Sequence__destroy(irt_nav_msgs__msg__Correvit__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__Correvit__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__Correvit__Sequence__are_equal(const irt_nav_msgs__msg__Correvit__Sequence * lhs, const irt_nav_msgs__msg__Correvit__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__Correvit__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__Correvit__Sequence__copy(
  const irt_nav_msgs__msg__Correvit__Sequence * input,
  irt_nav_msgs__msg__Correvit__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__Correvit);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__Correvit * data =
      (irt_nav_msgs__msg__Correvit *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__Correvit__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__Correvit__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__Correvit__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
