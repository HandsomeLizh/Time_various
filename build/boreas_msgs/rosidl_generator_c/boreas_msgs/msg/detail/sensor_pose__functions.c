// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from boreas_msgs:msg/SensorPose.idl
// generated code does not contain a copyright notice
#include "boreas_msgs/msg/detail/sensor_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
boreas_msgs__msg__SensorPose__init(boreas_msgs__msg__SensorPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    boreas_msgs__msg__SensorPose__fini(msg);
    return false;
  }
  // gps_timestamp
  // pos_easting
  // pos_northing
  // pos_altitude
  // vel_north
  // vel_east
  // vel_up
  // roll
  // pitch
  // heading
  // ang_vel_x
  // ang_vel_y
  // ang_vel_z
  return true;
}

void
boreas_msgs__msg__SensorPose__fini(boreas_msgs__msg__SensorPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gps_timestamp
  // pos_easting
  // pos_northing
  // pos_altitude
  // vel_north
  // vel_east
  // vel_up
  // roll
  // pitch
  // heading
  // ang_vel_x
  // ang_vel_y
  // ang_vel_z
}

bool
boreas_msgs__msg__SensorPose__are_equal(const boreas_msgs__msg__SensorPose * lhs, const boreas_msgs__msg__SensorPose * rhs)
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
  // gps_timestamp
  if (lhs->gps_timestamp != rhs->gps_timestamp) {
    return false;
  }
  // pos_easting
  if (lhs->pos_easting != rhs->pos_easting) {
    return false;
  }
  // pos_northing
  if (lhs->pos_northing != rhs->pos_northing) {
    return false;
  }
  // pos_altitude
  if (lhs->pos_altitude != rhs->pos_altitude) {
    return false;
  }
  // vel_north
  if (lhs->vel_north != rhs->vel_north) {
    return false;
  }
  // vel_east
  if (lhs->vel_east != rhs->vel_east) {
    return false;
  }
  // vel_up
  if (lhs->vel_up != rhs->vel_up) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // ang_vel_x
  if (lhs->ang_vel_x != rhs->ang_vel_x) {
    return false;
  }
  // ang_vel_y
  if (lhs->ang_vel_y != rhs->ang_vel_y) {
    return false;
  }
  // ang_vel_z
  if (lhs->ang_vel_z != rhs->ang_vel_z) {
    return false;
  }
  return true;
}

bool
boreas_msgs__msg__SensorPose__copy(
  const boreas_msgs__msg__SensorPose * input,
  boreas_msgs__msg__SensorPose * output)
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
  // gps_timestamp
  output->gps_timestamp = input->gps_timestamp;
  // pos_easting
  output->pos_easting = input->pos_easting;
  // pos_northing
  output->pos_northing = input->pos_northing;
  // pos_altitude
  output->pos_altitude = input->pos_altitude;
  // vel_north
  output->vel_north = input->vel_north;
  // vel_east
  output->vel_east = input->vel_east;
  // vel_up
  output->vel_up = input->vel_up;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // heading
  output->heading = input->heading;
  // ang_vel_x
  output->ang_vel_x = input->ang_vel_x;
  // ang_vel_y
  output->ang_vel_y = input->ang_vel_y;
  // ang_vel_z
  output->ang_vel_z = input->ang_vel_z;
  return true;
}

boreas_msgs__msg__SensorPose *
boreas_msgs__msg__SensorPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boreas_msgs__msg__SensorPose * msg = (boreas_msgs__msg__SensorPose *)allocator.allocate(sizeof(boreas_msgs__msg__SensorPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(boreas_msgs__msg__SensorPose));
  bool success = boreas_msgs__msg__SensorPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
boreas_msgs__msg__SensorPose__destroy(boreas_msgs__msg__SensorPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    boreas_msgs__msg__SensorPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
boreas_msgs__msg__SensorPose__Sequence__init(boreas_msgs__msg__SensorPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boreas_msgs__msg__SensorPose * data = NULL;

  if (size) {
    data = (boreas_msgs__msg__SensorPose *)allocator.zero_allocate(size, sizeof(boreas_msgs__msg__SensorPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = boreas_msgs__msg__SensorPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        boreas_msgs__msg__SensorPose__fini(&data[i - 1]);
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
boreas_msgs__msg__SensorPose__Sequence__fini(boreas_msgs__msg__SensorPose__Sequence * array)
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
      boreas_msgs__msg__SensorPose__fini(&array->data[i]);
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

boreas_msgs__msg__SensorPose__Sequence *
boreas_msgs__msg__SensorPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  boreas_msgs__msg__SensorPose__Sequence * array = (boreas_msgs__msg__SensorPose__Sequence *)allocator.allocate(sizeof(boreas_msgs__msg__SensorPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = boreas_msgs__msg__SensorPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
boreas_msgs__msg__SensorPose__Sequence__destroy(boreas_msgs__msg__SensorPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    boreas_msgs__msg__SensorPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
boreas_msgs__msg__SensorPose__Sequence__are_equal(const boreas_msgs__msg__SensorPose__Sequence * lhs, const boreas_msgs__msg__SensorPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!boreas_msgs__msg__SensorPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
boreas_msgs__msg__SensorPose__Sequence__copy(
  const boreas_msgs__msg__SensorPose__Sequence * input,
  boreas_msgs__msg__SensorPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(boreas_msgs__msg__SensorPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    boreas_msgs__msg__SensorPose * data =
      (boreas_msgs__msg__SensorPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!boreas_msgs__msg__SensorPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          boreas_msgs__msg__SensorPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!boreas_msgs__msg__SensorPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
