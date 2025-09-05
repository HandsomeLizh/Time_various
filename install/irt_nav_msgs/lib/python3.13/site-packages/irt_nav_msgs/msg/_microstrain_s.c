// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/Microstrain.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "irt_nav_msgs/msg/detail/microstrain__struct.h"
#include "irt_nav_msgs/msg/detail/microstrain__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__microstrain__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("irt_nav_msgs.msg._microstrain.Microstrain", full_classname_dest, 41) == 0);
  }
  irt_nav_msgs__msg__Microstrain * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sensor_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sensor_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // data_ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->data_ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mag_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "mag_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mag_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // amb
    PyObject * field = PyObject_GetAttrString(_pymsg, "amb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->amb = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deltatheta_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "deltatheta_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deltatheta_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deltatheta_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "deltatheta_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deltatheta_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deltatheta_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "deltatheta_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deltatheta_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deltavel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "deltavel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deltavel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deltavel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "deltavel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deltavel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // deltavel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "deltavel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deltavel_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // freq_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->freq_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // freq_gyro
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_gyro");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->freq_gyro = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // freq_mag
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_mag");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->freq_mag = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // freq_amb
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_amb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->freq_amb = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // freq_d_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_d_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->freq_d_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // freq_d_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_d_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->freq_d_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__microstrain__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Microstrain */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._microstrain");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Microstrain");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__Microstrain * ros_message = (irt_nav_msgs__msg__Microstrain *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sensor_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->data_ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mag_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mag_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mag_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->amb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deltatheta_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deltatheta_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deltatheta_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deltatheta_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deltatheta_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deltatheta_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deltatheta_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deltatheta_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deltatheta_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deltavel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deltavel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deltavel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deltavel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deltavel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deltavel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // deltavel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deltavel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deltavel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->freq_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_gyro
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->freq_gyro);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_gyro", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_mag
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->freq_mag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_mag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_amb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->freq_amb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_amb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_d_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->freq_d_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_d_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_d_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->freq_d_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_d_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
