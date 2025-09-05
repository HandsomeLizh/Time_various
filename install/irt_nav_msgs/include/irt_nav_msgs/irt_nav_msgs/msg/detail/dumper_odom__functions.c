// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/dumper_odom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__DumperOdom__init(irt_nav_msgs__msg__DumperOdom * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__DumperOdom__fini(msg);
    return false;
  }
  // timestamp
  // wheelspeed_count_fl
  // wheelspeed_count_fr
  // wheelspeed_count_rl
  // wheelspeed_count_rr
  // bin_position
  // bin_tilt
  // boost
  // brake
  // direction_value
  // engine_speed
  // fuel
  // handbreak
  // horn
  // steering_angle
  // steering_rate
  // steering_switch
  // throttle
  return true;
}

void
irt_nav_msgs__msg__DumperOdom__fini(irt_nav_msgs__msg__DumperOdom * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // timestamp
  // wheelspeed_count_fl
  // wheelspeed_count_fr
  // wheelspeed_count_rl
  // wheelspeed_count_rr
  // bin_position
  // bin_tilt
  // boost
  // brake
  // direction_value
  // engine_speed
  // fuel
  // handbreak
  // horn
  // steering_angle
  // steering_rate
  // steering_switch
  // throttle
}

bool
irt_nav_msgs__msg__DumperOdom__are_equal(const irt_nav_msgs__msg__DumperOdom * lhs, const irt_nav_msgs__msg__DumperOdom * rhs)
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
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // wheelspeed_count_fl
  if (lhs->wheelspeed_count_fl != rhs->wheelspeed_count_fl) {
    return false;
  }
  // wheelspeed_count_fr
  if (lhs->wheelspeed_count_fr != rhs->wheelspeed_count_fr) {
    return false;
  }
  // wheelspeed_count_rl
  if (lhs->wheelspeed_count_rl != rhs->wheelspeed_count_rl) {
    return false;
  }
  // wheelspeed_count_rr
  if (lhs->wheelspeed_count_rr != rhs->wheelspeed_count_rr) {
    return false;
  }
  // bin_position
  if (lhs->bin_position != rhs->bin_position) {
    return false;
  }
  // bin_tilt
  if (lhs->bin_tilt != rhs->bin_tilt) {
    return false;
  }
  // boost
  if (lhs->boost != rhs->boost) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // direction_value
  if (lhs->direction_value != rhs->direction_value) {
    return false;
  }
  // engine_speed
  if (lhs->engine_speed != rhs->engine_speed) {
    return false;
  }
  // fuel
  if (lhs->fuel != rhs->fuel) {
    return false;
  }
  // handbreak
  if (lhs->handbreak != rhs->handbreak) {
    return false;
  }
  // horn
  if (lhs->horn != rhs->horn) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  // steering_rate
  if (lhs->steering_rate != rhs->steering_rate) {
    return false;
  }
  // steering_switch
  if (lhs->steering_switch != rhs->steering_switch) {
    return false;
  }
  // throttle
  if (lhs->throttle != rhs->throttle) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__DumperOdom__copy(
  const irt_nav_msgs__msg__DumperOdom * input,
  irt_nav_msgs__msg__DumperOdom * output)
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
  // timestamp
  output->timestamp = input->timestamp;
  // wheelspeed_count_fl
  output->wheelspeed_count_fl = input->wheelspeed_count_fl;
  // wheelspeed_count_fr
  output->wheelspeed_count_fr = input->wheelspeed_count_fr;
  // wheelspeed_count_rl
  output->wheelspeed_count_rl = input->wheelspeed_count_rl;
  // wheelspeed_count_rr
  output->wheelspeed_count_rr = input->wheelspeed_count_rr;
  // bin_position
  output->bin_position = input->bin_position;
  // bin_tilt
  output->bin_tilt = input->bin_tilt;
  // boost
  output->boost = input->boost;
  // brake
  output->brake = input->brake;
  // direction_value
  output->direction_value = input->direction_value;
  // engine_speed
  output->engine_speed = input->engine_speed;
  // fuel
  output->fuel = input->fuel;
  // handbreak
  output->handbreak = input->handbreak;
  // horn
  output->horn = input->horn;
  // steering_angle
  output->steering_angle = input->steering_angle;
  // steering_rate
  output->steering_rate = input->steering_rate;
  // steering_switch
  output->steering_switch = input->steering_switch;
  // throttle
  output->throttle = input->throttle;
  return true;
}

irt_nav_msgs__msg__DumperOdom *
irt_nav_msgs__msg__DumperOdom__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__DumperOdom * msg = (irt_nav_msgs__msg__DumperOdom *)allocator.allocate(sizeof(irt_nav_msgs__msg__DumperOdom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__DumperOdom));
  bool success = irt_nav_msgs__msg__DumperOdom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__DumperOdom__destroy(irt_nav_msgs__msg__DumperOdom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__DumperOdom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__DumperOdom__Sequence__init(irt_nav_msgs__msg__DumperOdom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__DumperOdom * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__DumperOdom *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__DumperOdom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__DumperOdom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__DumperOdom__fini(&data[i - 1]);
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
irt_nav_msgs__msg__DumperOdom__Sequence__fini(irt_nav_msgs__msg__DumperOdom__Sequence * array)
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
      irt_nav_msgs__msg__DumperOdom__fini(&array->data[i]);
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

irt_nav_msgs__msg__DumperOdom__Sequence *
irt_nav_msgs__msg__DumperOdom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__DumperOdom__Sequence * array = (irt_nav_msgs__msg__DumperOdom__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__DumperOdom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__DumperOdom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__DumperOdom__Sequence__destroy(irt_nav_msgs__msg__DumperOdom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__DumperOdom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__DumperOdom__Sequence__are_equal(const irt_nav_msgs__msg__DumperOdom__Sequence * lhs, const irt_nav_msgs__msg__DumperOdom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__DumperOdom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__DumperOdom__Sequence__copy(
  const irt_nav_msgs__msg__DumperOdom__Sequence * input,
  irt_nav_msgs__msg__DumperOdom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__DumperOdom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__DumperOdom * data =
      (irt_nav_msgs__msg__DumperOdom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__DumperOdom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__DumperOdom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__DumperOdom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
