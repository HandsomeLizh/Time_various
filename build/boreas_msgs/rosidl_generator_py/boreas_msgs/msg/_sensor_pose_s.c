// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from boreas_msgs:msg/SensorPose.idl
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
#include "boreas_msgs/msg/detail/sensor_pose__struct.h"
#include "boreas_msgs/msg/detail/sensor_pose__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool boreas_msgs__msg__sensor_pose__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("boreas_msgs.msg._sensor_pose.SensorPose", full_classname_dest, 39) == 0);
  }
  boreas_msgs__msg__SensorPose * ros_message = _ros_message;
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
  {  // gps_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_easting
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_easting");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_easting = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_northing
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_northing");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_northing = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_altitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_altitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos_altitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_north
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_north");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_north = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_east
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_east");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_east = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_up
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_up");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_up = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_vel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_vel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ang_vel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ang_vel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ang_vel_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * boreas_msgs__msg__sensor_pose__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorPose */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("boreas_msgs.msg._sensor_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorPose");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  boreas_msgs__msg__SensorPose * ros_message = (boreas_msgs__msg__SensorPose *)raw_ros_message;
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
  {  // gps_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_easting
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_easting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_easting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_northing
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_northing);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_northing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_altitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos_altitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_altitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_north
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_north);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_north", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_east
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_east);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_east", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_up
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_up);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_up", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ang_vel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ang_vel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ang_vel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
