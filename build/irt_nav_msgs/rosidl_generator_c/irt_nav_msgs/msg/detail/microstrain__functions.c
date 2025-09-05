// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice
#include "irt_nav_msgs/msg/detail/microstrain__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
irt_nav_msgs__msg__Microstrain__init(irt_nav_msgs__msg__Microstrain * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    irt_nav_msgs__msg__Microstrain__fini(msg);
    return false;
  }
  // sensor_timestamp
  // data_ok
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  // mag_x
  // mag_y
  // mag_z
  // amb
  // deltatheta_x
  // deltatheta_y
  // deltatheta_z
  // deltavel_x
  // deltavel_y
  // deltavel_z
  // freq_acc
  // freq_gyro
  // freq_mag
  // freq_amb
  // freq_d_theta
  // freq_d_vel
  return true;
}

void
irt_nav_msgs__msg__Microstrain__fini(irt_nav_msgs__msg__Microstrain * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_timestamp
  // data_ok
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  // mag_x
  // mag_y
  // mag_z
  // amb
  // deltatheta_x
  // deltatheta_y
  // deltatheta_z
  // deltavel_x
  // deltavel_y
  // deltavel_z
  // freq_acc
  // freq_gyro
  // freq_mag
  // freq_amb
  // freq_d_theta
  // freq_d_vel
}

bool
irt_nav_msgs__msg__Microstrain__are_equal(const irt_nav_msgs__msg__Microstrain * lhs, const irt_nav_msgs__msg__Microstrain * rhs)
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
  // sensor_timestamp
  if (lhs->sensor_timestamp != rhs->sensor_timestamp) {
    return false;
  }
  // data_ok
  if (lhs->data_ok != rhs->data_ok) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // mag_x
  if (lhs->mag_x != rhs->mag_x) {
    return false;
  }
  // mag_y
  if (lhs->mag_y != rhs->mag_y) {
    return false;
  }
  // mag_z
  if (lhs->mag_z != rhs->mag_z) {
    return false;
  }
  // amb
  if (lhs->amb != rhs->amb) {
    return false;
  }
  // deltatheta_x
  if (lhs->deltatheta_x != rhs->deltatheta_x) {
    return false;
  }
  // deltatheta_y
  if (lhs->deltatheta_y != rhs->deltatheta_y) {
    return false;
  }
  // deltatheta_z
  if (lhs->deltatheta_z != rhs->deltatheta_z) {
    return false;
  }
  // deltavel_x
  if (lhs->deltavel_x != rhs->deltavel_x) {
    return false;
  }
  // deltavel_y
  if (lhs->deltavel_y != rhs->deltavel_y) {
    return false;
  }
  // deltavel_z
  if (lhs->deltavel_z != rhs->deltavel_z) {
    return false;
  }
  // freq_acc
  if (lhs->freq_acc != rhs->freq_acc) {
    return false;
  }
  // freq_gyro
  if (lhs->freq_gyro != rhs->freq_gyro) {
    return false;
  }
  // freq_mag
  if (lhs->freq_mag != rhs->freq_mag) {
    return false;
  }
  // freq_amb
  if (lhs->freq_amb != rhs->freq_amb) {
    return false;
  }
  // freq_d_theta
  if (lhs->freq_d_theta != rhs->freq_d_theta) {
    return false;
  }
  // freq_d_vel
  if (lhs->freq_d_vel != rhs->freq_d_vel) {
    return false;
  }
  return true;
}

bool
irt_nav_msgs__msg__Microstrain__copy(
  const irt_nav_msgs__msg__Microstrain * input,
  irt_nav_msgs__msg__Microstrain * output)
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
  // sensor_timestamp
  output->sensor_timestamp = input->sensor_timestamp;
  // data_ok
  output->data_ok = input->data_ok;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // mag_x
  output->mag_x = input->mag_x;
  // mag_y
  output->mag_y = input->mag_y;
  // mag_z
  output->mag_z = input->mag_z;
  // amb
  output->amb = input->amb;
  // deltatheta_x
  output->deltatheta_x = input->deltatheta_x;
  // deltatheta_y
  output->deltatheta_y = input->deltatheta_y;
  // deltatheta_z
  output->deltatheta_z = input->deltatheta_z;
  // deltavel_x
  output->deltavel_x = input->deltavel_x;
  // deltavel_y
  output->deltavel_y = input->deltavel_y;
  // deltavel_z
  output->deltavel_z = input->deltavel_z;
  // freq_acc
  output->freq_acc = input->freq_acc;
  // freq_gyro
  output->freq_gyro = input->freq_gyro;
  // freq_mag
  output->freq_mag = input->freq_mag;
  // freq_amb
  output->freq_amb = input->freq_amb;
  // freq_d_theta
  output->freq_d_theta = input->freq_d_theta;
  // freq_d_vel
  output->freq_d_vel = input->freq_d_vel;
  return true;
}

irt_nav_msgs__msg__Microstrain *
irt_nav_msgs__msg__Microstrain__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Microstrain * msg = (irt_nav_msgs__msg__Microstrain *)allocator.allocate(sizeof(irt_nav_msgs__msg__Microstrain), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irt_nav_msgs__msg__Microstrain));
  bool success = irt_nav_msgs__msg__Microstrain__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
irt_nav_msgs__msg__Microstrain__destroy(irt_nav_msgs__msg__Microstrain * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    irt_nav_msgs__msg__Microstrain__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
irt_nav_msgs__msg__Microstrain__Sequence__init(irt_nav_msgs__msg__Microstrain__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Microstrain * data = NULL;

  if (size) {
    data = (irt_nav_msgs__msg__Microstrain *)allocator.zero_allocate(size, sizeof(irt_nav_msgs__msg__Microstrain), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irt_nav_msgs__msg__Microstrain__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irt_nav_msgs__msg__Microstrain__fini(&data[i - 1]);
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
irt_nav_msgs__msg__Microstrain__Sequence__fini(irt_nav_msgs__msg__Microstrain__Sequence * array)
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
      irt_nav_msgs__msg__Microstrain__fini(&array->data[i]);
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

irt_nav_msgs__msg__Microstrain__Sequence *
irt_nav_msgs__msg__Microstrain__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  irt_nav_msgs__msg__Microstrain__Sequence * array = (irt_nav_msgs__msg__Microstrain__Sequence *)allocator.allocate(sizeof(irt_nav_msgs__msg__Microstrain__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = irt_nav_msgs__msg__Microstrain__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
irt_nav_msgs__msg__Microstrain__Sequence__destroy(irt_nav_msgs__msg__Microstrain__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    irt_nav_msgs__msg__Microstrain__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
irt_nav_msgs__msg__Microstrain__Sequence__are_equal(const irt_nav_msgs__msg__Microstrain__Sequence * lhs, const irt_nav_msgs__msg__Microstrain__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irt_nav_msgs__msg__Microstrain__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irt_nav_msgs__msg__Microstrain__Sequence__copy(
  const irt_nav_msgs__msg__Microstrain__Sequence * input,
  irt_nav_msgs__msg__Microstrain__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irt_nav_msgs__msg__Microstrain);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    irt_nav_msgs__msg__Microstrain * data =
      (irt_nav_msgs__msg__Microstrain *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irt_nav_msgs__msg__Microstrain__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          irt_nav_msgs__msg__Microstrain__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!irt_nav_msgs__msg__Microstrain__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
