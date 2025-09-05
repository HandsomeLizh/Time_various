// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/DumperOdom.idl
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
#include "irt_nav_msgs/msg/detail/dumper_odom__struct.h"
#include "irt_nav_msgs/msg/detail/dumper_odom__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__dumper_odom__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("irt_nav_msgs.msg._dumper_odom.DumperOdom", full_classname_dest, 40) == 0);
  }
  irt_nav_msgs__msg__DumperOdom * ros_message = _ros_message;
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
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelspeed_count_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_count_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelspeed_count_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelspeed_count_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_count_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelspeed_count_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelspeed_count_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_count_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelspeed_count_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheelspeed_count_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_count_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheelspeed_count_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bin_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "bin_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bin_position = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bin_tilt
    PyObject * field = PyObject_GetAttrString(_pymsg, "bin_tilt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bin_tilt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boost
    PyObject * field = PyObject_GetAttrString(_pymsg, "boost");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boost = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // direction_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->direction_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fuel
    PyObject * field = PyObject_GetAttrString(_pymsg, "fuel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fuel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // handbreak
    PyObject * field = PyObject_GetAttrString(_pymsg, "handbreak");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->handbreak = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horn
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horn = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_switch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_switch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__dumper_odom__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DumperOdom */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._dumper_odom");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DumperOdom");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__DumperOdom * ros_message = (irt_nav_msgs__msg__DumperOdom *)raw_ros_message;
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
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_count_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelspeed_count_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_count_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_count_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelspeed_count_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_count_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_count_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelspeed_count_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_count_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_count_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheelspeed_count_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_count_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bin_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bin_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bin_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bin_tilt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bin_tilt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bin_tilt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boost
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->direction_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fuel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fuel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fuel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // handbreak
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->handbreak);
    {
      int rc = PyObject_SetAttrString(_pymessage, "handbreak", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_switch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
