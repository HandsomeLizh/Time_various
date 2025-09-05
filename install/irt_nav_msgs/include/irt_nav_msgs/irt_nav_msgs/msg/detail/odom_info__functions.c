// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/OdomInfo.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/odom_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `odom_anchor_ecef_pos`
// Member `odom_anchor_ecef_to_enu_rpy`
// Member `odom_local_pos`
// Member `odom_local_rpy`
// Member `odom_ecef_pos`
// Member `odom_ecef_rpy`
// Member `sensor_local_pos_from`
// Member `sensor_local_rpy_from`
// Member `sensor_enu_pos_from`
// Member `sensor_enu_rpy_from`
// Member `sensor_ecef_pos_from`
// Member `sensor_ecef_rpy_from`
// Member `sensor_local_pos_to`
// Member `sensor_local_rpy_to`
// Member `sensor_enu_pos_to`
// Member `sensor_enu_rpy_to`
// Member `sensor_ecef_pos_to`
// Member `sensor_ecef_rpy_to`
// Member `sensor_local_pos_to_optimized`
// Member `sensor_local_rpy_to_optimized`
// Member `sensor_enu_pos_to_optimized`
// Member `sensor_enu_rpy_to_optimized`
// Member `sensor_ecef_pos_to_optimized`
// Member `sensor_ecef_rpy_to_optimized`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
irt_nav_msgs__msg__OdomInfo__init(irt_nav_msgs__msg__OdomInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // counter
  // key_current
  // key_previous
  // odom_anchor_ecef_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->odom_anchor_ecef_pos)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // odom_anchor_ecef_to_enu_rpy
  if (!geometry_msgs__msg__Vector3__init(&msg->odom_anchor_ecef_to_enu_rpy)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // odom_anchor_yaw_offset
  // associated_state_timestamp_i
  // associated_state_timestamp_j
  // duration_to_i
  // associated_with_i
  // associated_with_j
  // odom_local_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->odom_local_pos)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // odom_local_rpy
  if (!geometry_msgs__msg__Vector3__init(&msg->odom_local_rpy)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // odom_ecef_pos
  if (!geometry_msgs__msg__Vector3__init(&msg->odom_ecef_pos)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // odom_ecef_rpy
  if (!geometry_msgs__msg__Vector3__init(&msg->odom_ecef_rpy)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_local_pos_from
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_local_pos_from)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_local_rpy_from
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_local_rpy_from)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_enu_pos_from
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_enu_pos_from)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_enu_rpy_from
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_enu_rpy_from)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_ecef_pos_from
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_ecef_pos_from)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_ecef_rpy_from
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_ecef_rpy_from)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_local_pos_to
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_local_pos_to)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_local_rpy_to
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_local_rpy_to)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_enu_pos_to
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_enu_pos_to)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_enu_rpy_to
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_enu_rpy_to)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_ecef_pos_to
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_ecef_pos_to)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_ecef_rpy_to
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_ecef_rpy_to)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_local_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_local_pos_to_optimized)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_local_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_local_rpy_to_optimized)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_enu_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_enu_pos_to_optimized)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_enu_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_enu_rpy_to_optimized)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_ecef_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_ecef_pos_to_optimized)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  // sensor_ecef_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__init(&msg->sensor_ecef_rpy_to_optimized)) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
    return false;
  }
  return true;
}

void
irt_nav_msgs__msg__OdomInfo__fini(irt_nav_msgs__msg__OdomInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // counter
  // key_current
  // key_previous
  // odom_anchor_ecef_pos
  geometry_msgs__msg__Vector3__fini(&msg->odom_anchor_ecef_pos);
  // odom_anchor_ecef_to_enu_rpy
  geometry_msgs__msg__Vector3__fini(&msg->odom_anchor_ecef_to_enu_rpy);
  // odom_anchor_yaw_offset
  // associated_state_timestamp_i
  // associated_state_timestamp_j
  // duration_to_i
  // associated_with_i
  // associated_with_j
  // odom_local_pos
  geometry_msgs__msg__Vector3__fini(&msg->odom_local_pos);
  // odom_local_rpy
  geometry_msgs__msg__Vector3__fini(&msg->odom_local_rpy);
  // odom_ecef_pos
  geometry_msgs__msg__Vector3__fini(&msg->odom_ecef_pos);
  // odom_ecef_rpy
  geometry_msgs__msg__Vector3__fini(&msg->odom_ecef_rpy);
  // sensor_local_pos_from
  geometry_msgs__msg__Vector3__fini(&msg->sensor_local_pos_from);
  // sensor_local_rpy_from
  geometry_msgs__msg__Vector3__fini(&msg->sensor_local_rpy_from);
  // sensor_enu_pos_from
  geometry_msgs__msg__Vector3__fini(&msg->sensor_enu_pos_from);
  // sensor_enu_rpy_from
  geometry_msgs__msg__Vector3__fini(&msg->sensor_enu_rpy_from);
  // sensor_ecef_pos_from
  geometry_msgs__msg__Vector3__fini(&msg->sensor_ecef_pos_from);
  // sensor_ecef_rpy_from
  geometry_msgs__msg__Vector3__fini(&msg->sensor_ecef_rpy_from);
  // sensor_local_pos_to
  geometry_msgs__msg__Vector3__fini(&msg->sensor_local_pos_to);
  // sensor_local_rpy_to
  geometry_msgs__msg__Vector3__fini(&msg->sensor_local_rpy_to);
  // sensor_enu_pos_to
  geometry_msgs__msg__Vector3__fini(&msg->sensor_enu_pos_to);
  // sensor_enu_rpy_to
  geometry_msgs__msg__Vector3__fini(&msg->sensor_enu_rpy_to);
  // sensor_ecef_pos_to
  geometry_msgs__msg__Vector3__fini(&msg->sensor_ecef_pos_to);
  // sensor_ecef_rpy_to
  geometry_msgs__msg__Vector3__fini(&msg->sensor_ecef_rpy_to);
  // sensor_local_pos_to_optimized
  geometry_msgs__msg__Vector3__fini(&msg->sensor_local_pos_to_optimized);
  // sensor_local_rpy_to_optimized
  geometry_msgs__msg__Vector3__fini(&msg->sensor_local_rpy_to_optimized);
  // sensor_enu_pos_to_optimized
  geometry_msgs__msg__Vector3__fini(&msg->sensor_enu_pos_to_optimized);
  // sensor_enu_rpy_to_optimized
  geometry_msgs__msg__Vector3__fini(&msg->sensor_enu_rpy_to_optimized);
  // sensor_ecef_pos_to_optimized
  geometry_msgs__msg__Vector3__fini(&msg->sensor_ecef_pos_to_optimized);
  // sensor_ecef_rpy_to_optimized
  geometry_msgs__msg__Vector3__fini(&msg->sensor_ecef_rpy_to_optimized);
}

bool
irt_nav_msgs__msg__OdomInfo__are_equal(const irt_nav_msgs__msg__OdomInfo * lhs, const irt_nav_msgs__msg__OdomInfo * rhs)
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
  // counter
  if (lhs->counter != rhs->counter) {
    return false;
  }
  // key_current
  if (lhs->key_current != rhs->key_current) {
    return false;
  }
  // key_previous
  if (lhs->key_previous != rhs->key_previous) {
    return false;
  }
  // odom_anchor_ecef_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->odom_anchor_ecef_pos), &(rhs->odom_anchor_ecef_pos)))
  {
    return false;
  }
  // odom_anchor_ecef_to_enu_rpy
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->odom_anchor_ecef_to_enu_rpy), &(rhs->odom_anchor_ecef_to_enu_rpy)))
  {
    return false;
  }
  // odom_anchor_yaw_offset
  if (lhs->odom_anchor_yaw_offset != rhs->odom_anchor_yaw_offset) {
    return false;
  }
  // associated_state_timestamp_i
  if (lhs->associated_state_timestamp_i != rhs->associated_state_timestamp_i) {
    return false;
  }
  // associated_state_timestamp_j
  if (lhs->associated_state_timestamp_j != rhs->associated_state_timestamp_j) {
    return false;
  }
  // duration_to_i
  if (lhs->duration_to_i != rhs->duration_to_i) {
    return false;
  }
  // associated_with_i
  if (lhs->associated_with_i != rhs->associated_with_i) {
    return false;
  }
  // associated_with_j
  if (lhs->associated_with_j != rhs->associated_with_j) {
    return false;
  }
  // odom_local_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->odom_local_pos), &(rhs->odom_local_pos)))
  {
    return false;
  }
  // odom_local_rpy
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->odom_local_rpy), &(rhs->odom_local_rpy)))
  {
    return false;
  }
  // odom_ecef_pos
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->odom_ecef_pos), &(rhs->odom_ecef_pos)))
  {
    return false;
  }
  // odom_ecef_rpy
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->odom_ecef_rpy), &(rhs->odom_ecef_rpy)))
  {
    return false;
  }
  // sensor_local_pos_from
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_local_pos_from), &(rhs->sensor_local_pos_from)))
  {
    return false;
  }
  // sensor_local_rpy_from
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_local_rpy_from), &(rhs->sensor_local_rpy_from)))
  {
    return false;
  }
  // sensor_enu_pos_from
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_enu_pos_from), &(rhs->sensor_enu_pos_from)))
  {
    return false;
  }
  // sensor_enu_rpy_from
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_enu_rpy_from), &(rhs->sensor_enu_rpy_from)))
  {
    return false;
  }
  // sensor_ecef_pos_from
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_ecef_pos_from), &(rhs->sensor_ecef_pos_from)))
  {
    return false;
  }
  // sensor_ecef_rpy_from
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_ecef_rpy_from), &(rhs->sensor_ecef_rpy_from)))
  {
    return false;
  }
  // sensor_local_pos_to
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_local_pos_to), &(rhs->sensor_local_pos_to)))
  {
    return false;
  }
  // sensor_local_rpy_to
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_local_rpy_to), &(rhs->sensor_local_rpy_to)))
  {
    return false;
  }
  // sensor_enu_pos_to
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_enu_pos_to), &(rhs->sensor_enu_pos_to)))
  {
    return false;
  }
  // sensor_enu_rpy_to
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_enu_rpy_to), &(rhs->sensor_enu_rpy_to)))
  {
    return false;
  }
  // sensor_ecef_pos_to
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_ecef_pos_to), &(rhs->sensor_ecef_pos_to)))
  {
    return false;
  }
  // sensor_ecef_rpy_to
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_ecef_rpy_to), &(rhs->sensor_ecef_rpy_to)))
  {
    return false;
  }
  // sensor_local_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_local_pos_to_optimized), &(rhs->sensor_local_pos_to_optimized)))
  {
    return false;
  }
  // sensor_local_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_local_rpy_to_optimized), &(rhs->sensor_local_rpy_to_optimized)))
  {
    return false;
  }
  // sensor_enu_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_enu_pos_to_optimized), &(rhs->sensor_enu_pos_to_optimized)))
  {
    return false;
  }
  // sensor_enu_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_enu_rpy_to_optimized), &(rhs->sensor_enu_rpy_to_optimized)))
  {
    return false;
  }
  // sensor_ecef_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_ecef_pos_to_optimized), &(rhs->sensor_ecef_pos_to_optimized)))
  {
    return false;
  }
  // sensor_ecef_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->sensor_ecef_rpy_to_optimized), &(rhs->sensor_ecef_rpy_to_optimized)))
  {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__OdomInfo__copy(
  const irt_nav_msgs__msg__OdomInfo * input,
  irt_nav_msgs__msg__OdomInfo * output)
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
  // counter
  output->counter = input->counter;
  // key_current
  output->key_current = input->key_current;
  // key_previous
  output->key_previous = input->key_previous;
  // odom_anchor_ecef_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->odom_anchor_ecef_pos), &(output->odom_anchor_ecef_pos)))
  {
    return false;
  }
  // odom_anchor_ecef_to_enu_rpy
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->odom_anchor_ecef_to_enu_rpy), &(output->odom_anchor_ecef_to_enu_rpy)))
  {
    return false;
  }
  // odom_anchor_yaw_offset
  output->odom_anchor_yaw_offset = input->odom_anchor_yaw_offset;
  // associated_state_timestamp_i
  output->associated_state_timestamp_i = input->associated_state_timestamp_i;
  // associated_state_timestamp_j
  output->associated_state_timestamp_j = input->associated_state_timestamp_j;
  // duration_to_i
  output->duration_to_i = input->duration_to_i;
  // associated_with_i
  output->associated_with_i = input->associated_with_i;
  // associated_with_j
  output->associated_with_j = input->associated_with_j;
  // odom_local_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->odom_local_pos), &(output->odom_local_pos)))
  {
    return false;
  }
  // odom_local_rpy
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->odom_local_rpy), &(output->odom_local_rpy)))
  {
    return false;
  }
  // odom_ecef_pos
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->odom_ecef_pos), &(output->odom_ecef_pos)))
  {
    return false;
  }
  // odom_ecef_rpy
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->odom_ecef_rpy), &(output->odom_ecef_rpy)))
  {
    return false;
  }
  // sensor_local_pos_from
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_local_pos_from), &(output->sensor_local_pos_from)))
  {
    return false;
  }
  // sensor_local_rpy_from
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_local_rpy_from), &(output->sensor_local_rpy_from)))
  {
    return false;
  }
  // sensor_enu_pos_from
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_enu_pos_from), &(output->sensor_enu_pos_from)))
  {
    return false;
  }
  // sensor_enu_rpy_from
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_enu_rpy_from), &(output->sensor_enu_rpy_from)))
  {
    return false;
  }
  // sensor_ecef_pos_from
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_ecef_pos_from), &(output->sensor_ecef_pos_from)))
  {
    return false;
  }
  // sensor_ecef_rpy_from
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_ecef_rpy_from), &(output->sensor_ecef_rpy_from)))
  {
    return false;
  }
  // sensor_local_pos_to
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_local_pos_to), &(output->sensor_local_pos_to)))
  {
    return false;
  }
  // sensor_local_rpy_to
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_local_rpy_to), &(output->sensor_local_rpy_to)))
  {
    return false;
  }
  // sensor_enu_pos_to
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_enu_pos_to), &(output->sensor_enu_pos_to)))
  {
    return false;
  }
  // sensor_enu_rpy_to
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_enu_rpy_to), &(output->sensor_enu_rpy_to)))
  {
    return false;
  }
  // sensor_ecef_pos_to
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_ecef_pos_to), &(output->sensor_ecef_pos_to)))
  {
    return false;
  }
  // sensor_ecef_rpy_to
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_ecef_rpy_to), &(output->sensor_ecef_rpy_to)))
  {
    return false;
  }
  // sensor_local_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_local_pos_to_optimized), &(output->sensor_local_pos_to_optimized)))
  {
    return false;
  }
  // sensor_local_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_local_rpy_to_optimized), &(output->sensor_local_rpy_to_optimized)))
  {
    return false;
  }
  // sensor_enu_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_enu_pos_to_optimized), &(output->sensor_enu_pos_to_optimized)))
  {
    return false;
  }
  // sensor_enu_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_enu_rpy_to_optimized), &(output->sensor_enu_rpy_to_optimized)))
  {
    return false;
  }
  // sensor_ecef_pos_to_optimized
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_ecef_pos_to_optimized), &(output->sensor_ecef_pos_to_optimized)))
  {
    return false;
  }
  // sensor_ecef_rpy_to_optimized
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->sensor_ecef_rpy_to_optimized), &(output->sensor_ecef_rpy_to_optimized)))
  {
    return false;
  }
  return true;
}

irt_nav_msgs__msg__OdomInfo *
irt_nav_msgs__msg__OdomInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__OdomInfo * msg = (irt_nav_msgs__msg__OdomInfo *)allocator.allocate(sizeof(irt_nav_msgs__msg__OdomInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__OdomInfo));
  bool success = irt_nav_msgs__msg__OdomInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__OdomInfo__destroy(irt_nav_msgs__msg__OdomInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__OdomInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__OdomInfo__Sequence__init(irt_nav_msgs__msg__OdomInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__OdomInfo * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__OdomInfo *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__OdomInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__OdomInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__OdomInfo__fini(&data[i - 1]);
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
irt_nav_msgs__msg__OdomInfo__Sequence__fini(irt_nav_msgs__msg__OdomInfo__Sequence * array)
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
      irt_nav_msgs__msg__OdomInfo__fini(&array->data[i]);
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

irt_nav_msgs__msg__OdomInfo__Sequence *
irt_nav_msgs__msg__OdomInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__OdomInfo__Sequence * array = (irt_nav_msgs__msg__OdomInfo__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__OdomInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__OdomInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__OdomInfo__Sequence__destroy(irt_nav_msgs__msg__OdomInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__OdomInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__OdomInfo__Sequence__are_equal(const irt_nav_msgs__msg__OdomInfo__Sequence * lhs, const irt_nav_msgs__msg__OdomInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__OdomInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__OdomInfo__Sequence__copy(
  const irt_nav_msgs__msg__OdomInfo__Sequence * input,
  irt_nav_msgs__msg__OdomInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__OdomInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__OdomInfo * data =
      (irt_nav_msgs__msg__OdomInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__OdomInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__OdomInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__OdomInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
