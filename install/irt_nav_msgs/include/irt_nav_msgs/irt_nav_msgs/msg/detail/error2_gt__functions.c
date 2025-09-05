// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/Error2GT.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/error2_gt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose_std_ecef`
// Member `pose_std_ned`
// Member `vel_std_ecef`
// Member `vel_std_ned`
// Member `ref_llh`
// Member `ref_llh_std`
// Member `cbd`
// Member `cbd_std`
// Member `ref_cbd`
// Member `acc_bias`
// Member `gyro_bias`
// Member `acc_bias_std`
// Member `gyro_bias_std`
// Member `vel_ned`
// Member `omega_body`
// Member `omega_body_std`
// Member `ref_vel`
// Member `ref_vel_std`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
irt_nav_msgs__msg__Error2GT__init(irt_nav_msgs__msg__Error2GT * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_tow_before
  // ref_tow_after
  // tow
  // pos_1d_error_ned
  // pos_2d_error_ned
  // pos_3d_error_ned
  // pos_1d_error_body
  // pos_2d_error_body
  // pos_3d_error_body
  // pos_2d_error_geographic
  // pos_3d_error_geographic
  // pos_2d_error_ecef
  // pos_3d_error_ecef
  // vel_2d_error
  // vel_3d_error
  // pose_std_ecef
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pose_std_ecef, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // pose_std_ned
  if (!rosidl_runtime_c__double__Sequence__init(&msg->pose_std_ned, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // vel_std_ecef
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vel_std_ecef, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // vel_std_ned
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vel_std_ned, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_llh
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ref_llh, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_llh_std
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ref_llh_std, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // yaw_error
  // yaw
  // pitch
  // roll
  // ref_yaw
  // ref_yaw_std
  // ref_pitch_roll
  // ref_pitch_roll_std
  // cbd
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cbd, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // cbd_std
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cbd_std, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_cbd
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ref_cbd, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // acc_bias
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acc_bias, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // gyro_bias
  if (!rosidl_runtime_c__double__Sequence__init(&msg->gyro_bias, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // acc_bias_std
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acc_bias_std, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // gyro_bias_std
  if (!rosidl_runtime_c__double__Sequence__init(&msg->gyro_bias_std, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // vel_ned
  if (!rosidl_runtime_c__double__Sequence__init(&msg->vel_ned, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // omega_body
  if (!rosidl_runtime_c__double__Sequence__init(&msg->omega_body, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // omega_body_std
  if (!rosidl_runtime_c__double__Sequence__init(&msg->omega_body_std, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ref_vel, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_vel_std
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ref_vel_std, 0)) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
    return false;
  }
  // ref_mode
  // ref_error
  return true;
}

void
irt_nav_msgs__msg__Error2GT__fini(irt_nav_msgs__msg__Error2GT * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ref_tow_before
  // ref_tow_after
  // tow
  // pos_1d_error_ned
  // pos_2d_error_ned
  // pos_3d_error_ned
  // pos_1d_error_body
  // pos_2d_error_body
  // pos_3d_error_body
  // pos_2d_error_geographic
  // pos_3d_error_geographic
  // pos_2d_error_ecef
  // pos_3d_error_ecef
  // vel_2d_error
  // vel_3d_error
  // pose_std_ecef
  rosidl_runtime_c__double__Sequence__fini(&msg->pose_std_ecef);
  // pose_std_ned
  rosidl_runtime_c__double__Sequence__fini(&msg->pose_std_ned);
  // vel_std_ecef
  rosidl_runtime_c__double__Sequence__fini(&msg->vel_std_ecef);
  // vel_std_ned
  rosidl_runtime_c__double__Sequence__fini(&msg->vel_std_ned);
  // ref_llh
  rosidl_runtime_c__double__Sequence__fini(&msg->ref_llh);
  // ref_llh_std
  rosidl_runtime_c__double__Sequence__fini(&msg->ref_llh_std);
  // yaw_error
  // yaw
  // pitch
  // roll
  // ref_yaw
  // ref_yaw_std
  // ref_pitch_roll
  // ref_pitch_roll_std
  // cbd
  rosidl_runtime_c__double__Sequence__fini(&msg->cbd);
  // cbd_std
  rosidl_runtime_c__double__Sequence__fini(&msg->cbd_std);
  // ref_cbd
  rosidl_runtime_c__double__Sequence__fini(&msg->ref_cbd);
  // acc_bias
  rosidl_runtime_c__double__Sequence__fini(&msg->acc_bias);
  // gyro_bias
  rosidl_runtime_c__double__Sequence__fini(&msg->gyro_bias);
  // acc_bias_std
  rosidl_runtime_c__double__Sequence__fini(&msg->acc_bias_std);
  // gyro_bias_std
  rosidl_runtime_c__double__Sequence__fini(&msg->gyro_bias_std);
  // vel_ned
  rosidl_runtime_c__double__Sequence__fini(&msg->vel_ned);
  // omega_body
  rosidl_runtime_c__double__Sequence__fini(&msg->omega_body);
  // omega_body_std
  rosidl_runtime_c__double__Sequence__fini(&msg->omega_body_std);
  // ref_vel
  rosidl_runtime_c__double__Sequence__fini(&msg->ref_vel);
  // ref_vel_std
  rosidl_runtime_c__double__Sequence__fini(&msg->ref_vel_std);
  // ref_mode
  // ref_error
}

bool
irt_nav_msgs__msg__Error2GT__are_equal(const irt_nav_msgs__msg__Error2GT * lhs, const irt_nav_msgs__msg__Error2GT * rhs)
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
  // ref_tow_before
  if (lhs->ref_tow_before != rhs->ref_tow_before) {
    return false;
  }
  // ref_tow_after
  if (lhs->ref_tow_after != rhs->ref_tow_after) {
    return false;
  }
  // tow
  if (lhs->tow != rhs->tow) {
    return false;
  }
  // pos_1d_error_ned
  if (lhs->pos_1d_error_ned != rhs->pos_1d_error_ned) {
    return false;
  }
  // pos_2d_error_ned
  if (lhs->pos_2d_error_ned != rhs->pos_2d_error_ned) {
    return false;
  }
  // pos_3d_error_ned
  if (lhs->pos_3d_error_ned != rhs->pos_3d_error_ned) {
    return false;
  }
  // pos_1d_error_body
  if (lhs->pos_1d_error_body != rhs->pos_1d_error_body) {
    return false;
  }
  // pos_2d_error_body
  if (lhs->pos_2d_error_body != rhs->pos_2d_error_body) {
    return false;
  }
  // pos_3d_error_body
  if (lhs->pos_3d_error_body != rhs->pos_3d_error_body) {
    return false;
  }
  // pos_2d_error_geographic
  if (lhs->pos_2d_error_geographic != rhs->pos_2d_error_geographic) {
    return false;
  }
  // pos_3d_error_geographic
  if (lhs->pos_3d_error_geographic != rhs->pos_3d_error_geographic) {
    return false;
  }
  // pos_2d_error_ecef
  if (lhs->pos_2d_error_ecef != rhs->pos_2d_error_ecef) {
    return false;
  }
  // pos_3d_error_ecef
  if (lhs->pos_3d_error_ecef != rhs->pos_3d_error_ecef) {
    return false;
  }
  // vel_2d_error
  if (lhs->vel_2d_error != rhs->vel_2d_error) {
    return false;
  }
  // vel_3d_error
  if (lhs->vel_3d_error != rhs->vel_3d_error) {
    return false;
  }
  // pose_std_ecef
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pose_std_ecef), &(rhs->pose_std_ecef)))
  {
    return false;
  }
  // pose_std_ned
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->pose_std_ned), &(rhs->pose_std_ned)))
  {
    return false;
  }
  // vel_std_ecef
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vel_std_ecef), &(rhs->vel_std_ecef)))
  {
    return false;
  }
  // vel_std_ned
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vel_std_ned), &(rhs->vel_std_ned)))
  {
    return false;
  }
  // ref_llh
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ref_llh), &(rhs->ref_llh)))
  {
    return false;
  }
  // ref_llh_std
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ref_llh_std), &(rhs->ref_llh_std)))
  {
    return false;
  }
  // yaw_error
  if (lhs->yaw_error != rhs->yaw_error) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // ref_yaw
  if (lhs->ref_yaw != rhs->ref_yaw) {
    return false;
  }
  // ref_yaw_std
  if (lhs->ref_yaw_std != rhs->ref_yaw_std) {
    return false;
  }
  // ref_pitch_roll
  if (lhs->ref_pitch_roll != rhs->ref_pitch_roll) {
    return false;
  }
  // ref_pitch_roll_std
  if (lhs->ref_pitch_roll_std != rhs->ref_pitch_roll_std) {
    return false;
  }
  // cbd
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cbd), &(rhs->cbd)))
  {
    return false;
  }
  // cbd_std
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cbd_std), &(rhs->cbd_std)))
  {
    return false;
  }
  // ref_cbd
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ref_cbd), &(rhs->ref_cbd)))
  {
    return false;
  }
  // acc_bias
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acc_bias), &(rhs->acc_bias)))
  {
    return false;
  }
  // gyro_bias
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->gyro_bias), &(rhs->gyro_bias)))
  {
    return false;
  }
  // acc_bias_std
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acc_bias_std), &(rhs->acc_bias_std)))
  {
    return false;
  }
  // gyro_bias_std
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->gyro_bias_std), &(rhs->gyro_bias_std)))
  {
    return false;
  }
  // vel_ned
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->vel_ned), &(rhs->vel_ned)))
  {
    return false;
  }
  // omega_body
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->omega_body), &(rhs->omega_body)))
  {
    return false;
  }
  // omega_body_std
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->omega_body_std), &(rhs->omega_body_std)))
  {
    return false;
  }
  // ref_vel
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ref_vel), &(rhs->ref_vel)))
  {
    return false;
  }
  // ref_vel_std
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ref_vel_std), &(rhs->ref_vel_std)))
  {
    return false;
  }
  // ref_mode
  if (lhs->ref_mode != rhs->ref_mode) {
    return false;
  }
  // ref_error
  if (lhs->ref_error != rhs->ref_error) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__Error2GT__copy(
  const irt_nav_msgs__msg__Error2GT * input,
  irt_nav_msgs__msg__Error2GT * output)
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
  // ref_tow_before
  output->ref_tow_before = input->ref_tow_before;
  // ref_tow_after
  output->ref_tow_after = input->ref_tow_after;
  // tow
  output->tow = input->tow;
  // pos_1d_error_ned
  output->pos_1d_error_ned = input->pos_1d_error_ned;
  // pos_2d_error_ned
  output->pos_2d_error_ned = input->pos_2d_error_ned;
  // pos_3d_error_ned
  output->pos_3d_error_ned = input->pos_3d_error_ned;
  // pos_1d_error_body
  output->pos_1d_error_body = input->pos_1d_error_body;
  // pos_2d_error_body
  output->pos_2d_error_body = input->pos_2d_error_body;
  // pos_3d_error_body
  output->pos_3d_error_body = input->pos_3d_error_body;
  // pos_2d_error_geographic
  output->pos_2d_error_geographic = input->pos_2d_error_geographic;
  // pos_3d_error_geographic
  output->pos_3d_error_geographic = input->pos_3d_error_geographic;
  // pos_2d_error_ecef
  output->pos_2d_error_ecef = input->pos_2d_error_ecef;
  // pos_3d_error_ecef
  output->pos_3d_error_ecef = input->pos_3d_error_ecef;
  // vel_2d_error
  output->vel_2d_error = input->vel_2d_error;
  // vel_3d_error
  output->vel_3d_error = input->vel_3d_error;
  // pose_std_ecef
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pose_std_ecef), &(output->pose_std_ecef)))
  {
    return false;
  }
  // pose_std_ned
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->pose_std_ned), &(output->pose_std_ned)))
  {
    return false;
  }
  // vel_std_ecef
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vel_std_ecef), &(output->vel_std_ecef)))
  {
    return false;
  }
  // vel_std_ned
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vel_std_ned), &(output->vel_std_ned)))
  {
    return false;
  }
  // ref_llh
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ref_llh), &(output->ref_llh)))
  {
    return false;
  }
  // ref_llh_std
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ref_llh_std), &(output->ref_llh_std)))
  {
    return false;
  }
  // yaw_error
  output->yaw_error = input->yaw_error;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // ref_yaw
  output->ref_yaw = input->ref_yaw;
  // ref_yaw_std
  output->ref_yaw_std = input->ref_yaw_std;
  // ref_pitch_roll
  output->ref_pitch_roll = input->ref_pitch_roll;
  // ref_pitch_roll_std
  output->ref_pitch_roll_std = input->ref_pitch_roll_std;
  // cbd
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cbd), &(output->cbd)))
  {
    return false;
  }
  // cbd_std
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cbd_std), &(output->cbd_std)))
  {
    return false;
  }
  // ref_cbd
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ref_cbd), &(output->ref_cbd)))
  {
    return false;
  }
  // acc_bias
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acc_bias), &(output->acc_bias)))
  {
    return false;
  }
  // gyro_bias
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->gyro_bias), &(output->gyro_bias)))
  {
    return false;
  }
  // acc_bias_std
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acc_bias_std), &(output->acc_bias_std)))
  {
    return false;
  }
  // gyro_bias_std
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->gyro_bias_std), &(output->gyro_bias_std)))
  {
    return false;
  }
  // vel_ned
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->vel_ned), &(output->vel_ned)))
  {
    return false;
  }
  // omega_body
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->omega_body), &(output->omega_body)))
  {
    return false;
  }
  // omega_body_std
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->omega_body_std), &(output->omega_body_std)))
  {
    return false;
  }
  // ref_vel
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ref_vel), &(output->ref_vel)))
  {
    return false;
  }
  // ref_vel_std
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ref_vel_std), &(output->ref_vel_std)))
  {
    return false;
  }
  // ref_mode
  output->ref_mode = input->ref_mode;
  // ref_error
  output->ref_error = input->ref_error;
  return true;
}

irt_nav_msgs__msg__Error2GT *
irt_nav_msgs__msg__Error2GT__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Error2GT * msg = (irt_nav_msgs__msg__Error2GT *)allocator.allocate(sizeof(irt_nav_msgs__msg__Error2GT), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__Error2GT));
  bool success = irt_nav_msgs__msg__Error2GT__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__Error2GT__destroy(irt_nav_msgs__msg__Error2GT * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__Error2GT__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__Error2GT__Sequence__init(irt_nav_msgs__msg__Error2GT__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Error2GT * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__Error2GT *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__Error2GT), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__Error2GT__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__Error2GT__fini(&data[i - 1]);
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
irt_nav_msgs__msg__Error2GT__Sequence__fini(irt_nav_msgs__msg__Error2GT__Sequence * array)
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
      irt_nav_msgs__msg__Error2GT__fini(&array->data[i]);
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

irt_nav_msgs__msg__Error2GT__Sequence *
irt_nav_msgs__msg__Error2GT__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Error2GT__Sequence * array = (irt_nav_msgs__msg__Error2GT__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__Error2GT__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__Error2GT__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__Error2GT__Sequence__destroy(irt_nav_msgs__msg__Error2GT__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__Error2GT__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__Error2GT__Sequence__are_equal(const irt_nav_msgs__msg__Error2GT__Sequence * lhs, const irt_nav_msgs__msg__Error2GT__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__Error2GT__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__Error2GT__Sequence__copy(
  const irt_nav_msgs__msg__Error2GT__Sequence * input,
  irt_nav_msgs__msg__Error2GT__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__Error2GT);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__Error2GT * data =
      (irt_nav_msgs__msg__Error2GT *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__Error2GT__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__Error2GT__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__Error2GT__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
