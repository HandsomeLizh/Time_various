// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/FGOState.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/fgo_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `vel`
// Member `acc`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `pose_var`
// Member `vel_var`
// Member `acc_var`
// Member `imu_bias`
// Member `imu_bias_var`
// Member `cbd`
// Member `cbd_var`
// Member `amb`
// Member `amb_var`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__FGOState__init(irt_nav_msgs__msg__FGOState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Twist__init(&msg->vel)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Twist__init(&msg->acc)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // pose_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pose_var, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // vel_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vel_var, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // acc_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acc_var, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // heading
  // imu_bias
  if (!rosidl_runtime_c__double__Sequence__init(&msg->imu_bias, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // imu_bias_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->imu_bias_var, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // cbd
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cbd, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // cbd_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cbd_var, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // amb
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->amb, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  // amb_var
  if (!rosidl_runtime_c__double__Sequence__init(&msg->amb_var, 0)) {
    irt_nav_msgs__msg__FGOState__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__FGOState__fini(irt_nav_msgs__msg__FGOState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // vel
  geometry_msgs__msg__Twist__fini(&msg->vel);
  // acc
  geometry_msgs__msg__Twist__fini(&msg->acc);
  // pose_var
  rosidl_runtime_c__double__Sequence__fini(&msg->pose_var);
  // vel_var
  rosidl_runtime_c__double__Sequence__fini(&msg->vel_var);
  // acc_var
  rosidl_runtime_c__double__Sequence__fini(&msg->acc_var);
  // heading
  // imu_bias
  rosidl_runtime_c__double__Sequence__fini(&msg->imu_bias);
  // imu_bias_var
  rosidl_runtime_c__double__Sequence__fini(&msg->imu_bias_var);
  // cbd
  rosidl_runtime_c__double__Sequence__fini(&msg->cbd);
  // cbd_var
  rosidl_runtime_c__double__Sequence__fini(&msg->cbd_var);
  // amb
  rosidl_runtime_c__uint32__Sequence__fini(&msg->amb);
  // amb_var
  rosidl_runtime_c__double__Sequence__fini(&msg->amb_var);
}

bool
irt_nav_msgs__msg__FGOState__are_equal(const irt_nav_msgs__msg__FGOState * lhs, const irt_nav_msgs__msg__FGOState * rhs)
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
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->acc), &(rhs->acc)))
  {
    return false;
  }
  // pose_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pose_var), &(rhs->pose_var)))
  {
    return false;
  }
  // vel_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vel_var), &(rhs->vel_var)))
  {
    return false;
  }
  // acc_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acc_var), &(rhs->acc_var)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // imu_bias
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->imu_bias), &(rhs->imu_bias)))
  {
    return false;
  }
  // imu_bias_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->imu_bias_var), &(rhs->imu_bias_var)))
  {
    return false;
  }
  // cbd
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cbd), &(rhs->cbd)))
  {
    return false;
  }
  // cbd_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cbd_var), &(rhs->cbd_var)))
  {
    return false;
  }
  // amb
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->amb), &(rhs->amb)))
  {
    return false;
  }
  // amb_var
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->amb_var), &(rhs->amb_var)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__FGOState__copy(
  const irt_nav_msgs__msg__FGOState * input,
  irt_nav_msgs__msg__FGOState * output)
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
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // vel
  if (!geometry_msgs__msg__Twist__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // acc
  if (!geometry_msgs__msg__Twist__copy(
      &(input->acc), &(output->acc)))
  {
    return false;
  }
  // pose_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pose_var), &(output->pose_var)))
  {
    return false;
  }
  // vel_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vel_var), &(output->vel_var)))
  {
    return false;
  }
  // acc_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acc_var), &(output->acc_var)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // imu_bias
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->imu_bias), &(output->imu_bias)))
  {
    return false;
  }
  // imu_bias_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->imu_bias_var), &(output->imu_bias_var)))
  {
    return false;
  }
  // cbd
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cbd), &(output->cbd)))
  {
    return false;
  }
  // cbd_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cbd_var), &(output->cbd_var)))
  {
    return false;
  }
  // amb
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->amb), &(output->amb)))
  {
    return false;
  }
  // amb_var
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->amb_var), &(output->amb_var)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__FGOState *
irt_nav_msgs__msg__FGOState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__FGOState * msg = (irt_nav_msgs__msg__FGOState *)allocator.allocate(sizeof(irt_nav_msgs__msg__FGOState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__FGOState));
  bool success = irt_nav_msgs__msg__FGOState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__FGOState__destroy(irt_nav_msgs__msg__FGOState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__FGOState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__FGOState__Sequence__init(irt_nav_msgs__msg__FGOState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__FGOState * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__FGOState *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__FGOState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__FGOState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__FGOState__fini(&data[i - 1]);
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
irt_nav_msgs__msg__FGOState__Sequence__fini(irt_nav_msgs__msg__FGOState__Sequence * array)
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
      irt_nav_msgs__msg__FGOState__fini(&array->data[i]);
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

irt_nav_msgs__msg__FGOState__Sequence *
irt_nav_msgs__msg__FGOState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__FGOState__Sequence * array = (irt_nav_msgs__msg__FGOState__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__FGOState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__FGOState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__FGOState__Sequence__destroy(irt_nav_msgs__msg__FGOState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__FGOState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__FGOState__Sequence__are_equal(const irt_nav_msgs__msg__FGOState__Sequence * lhs, const irt_nav_msgs__msg__FGOState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__FGOState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__FGOState__Sequence__copy(
  const irt_nav_msgs__msg__FGOState__Sequence * input,
  irt_nav_msgs__msg__FGOState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__FGOState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__FGOState * data =
      (irt_nav_msgs__msg__FGOState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__FGOState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__FGOState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__FGOState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
