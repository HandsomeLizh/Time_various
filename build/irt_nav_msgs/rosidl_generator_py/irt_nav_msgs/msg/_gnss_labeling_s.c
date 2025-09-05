// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irt_nav_msgs:msg/GNSSLabeling.idl
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
#include "irt_nav_msgs/msg/detail/gnss_labeling__struct.h"
#include "irt_nav_msgs/msg/detail/gnss_labeling__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "irt_nav_msgs/msg/detail/sat_label__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__sat_label__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__sat_label__convert_to_py(void * raw_ros_message);
bool irt_nav_msgs__msg__sat_label__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * irt_nav_msgs__msg__sat_label__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool irt_nav_msgs__msg__gnss_labeling__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("irt_nav_msgs.msg._gnss_labeling.GNSSLabeling", full_classname_dest, 44) == 0);
  }
  irt_nav_msgs__msg__GNSSLabeling * ros_message = _ros_message;
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
  {  // related_state_timestamp_nanosec
    PyObject * field = PyObject_GetAttrString(_pymsg, "related_state_timestamp_nanosec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->related_state_timestamp_nanosec = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->counter = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // time_receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_receive");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_receive = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // solution_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solution_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ant_main_labels
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_main_labels");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ant_main_labels'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!irt_nav_msgs__msg__SatLabel__Sequence__init(&(ros_message->ant_main_labels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create irt_nav_msgs__msg__SatLabel__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    irt_nav_msgs__msg__SatLabel * dest = ros_message->ant_main_labels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!irt_nav_msgs__msg__sat_label__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ant_aux_labels
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_aux_labels");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ant_aux_labels'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!irt_nav_msgs__msg__SatLabel__Sequence__init(&(ros_message->ant_aux_labels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create irt_nav_msgs__msg__SatLabel__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    irt_nav_msgs__msg__SatLabel * dest = ros_message->ant_aux_labels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!irt_nav_msgs__msg__sat_label__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // faulty_prn_main
    PyObject * field = PyObject_GetAttrString(_pymsg, "faulty_prn_main");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_main), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_main.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'faulty_prn_main'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_main), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_main.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // faulty_prn_aux
    PyObject * field = PyObject_GetAttrString(_pymsg, "faulty_prn_aux");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_aux), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_aux.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'faulty_prn_aux'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->faulty_prn_aux), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->faulty_prn_aux.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gt_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "gt_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gt_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ant_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_pos");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->ant_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ant_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "ant_vel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->ant_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gt_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "gt_pos");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->gt_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gt_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "gt_vel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->gt_vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // clock_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->clock_bias = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // clock_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "clock_drift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->clock_drift = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gt_clock_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "gt_clock_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gt_clock_bias = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gt_clock_drift
    PyObject * field = PyObject_GetAttrString(_pymsg, "gt_clock_drift");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gt_clock_drift = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // environment
    PyObject * field = PyObject_GetAttrString(_pymsg, "environment");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->environment, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irt_nav_msgs__msg__gnss_labeling__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GNSSLabeling */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irt_nav_msgs.msg._gnss_labeling");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GNSSLabeling");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irt_nav_msgs__msg__GNSSLabeling * ros_message = (irt_nav_msgs__msg__GNSSLabeling *)raw_ros_message;
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
  {  // related_state_timestamp_nanosec
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->related_state_timestamp_nanosec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "related_state_timestamp_nanosec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_receive
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_receive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_receive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->solution_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_main_labels
    PyObject * field = NULL;
    size_t size = ros_message->ant_main_labels.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    irt_nav_msgs__msg__SatLabel * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ant_main_labels.data[i]);
      PyObject * pyitem = irt_nav_msgs__msg__sat_label__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_main_labels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_aux_labels
    PyObject * field = NULL;
    size_t size = ros_message->ant_aux_labels.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    irt_nav_msgs__msg__SatLabel * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ant_aux_labels.data[i]);
      PyObject * pyitem = irt_nav_msgs__msg__sat_label__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_aux_labels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // faulty_prn_main
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "faulty_prn_main");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->faulty_prn_main.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->faulty_prn_main.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->faulty_prn_main.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // faulty_prn_aux
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "faulty_prn_aux");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint8_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->faulty_prn_aux.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->faulty_prn_aux.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->faulty_prn_aux.size * sizeof(uint8_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // gt_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gt_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gt_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_pos
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->ant_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ant_vel
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->ant_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ant_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gt_pos
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->gt_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gt_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gt_vel
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->gt_vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gt_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clock_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->clock_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clock_drift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->clock_drift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clock_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gt_clock_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gt_clock_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gt_clock_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gt_clock_drift
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gt_clock_drift);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gt_clock_drift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // environment
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->environment.data,
      strlen(ros_message->environment.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "environment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
