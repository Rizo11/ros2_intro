// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from friend_msgs:srv/SetSpeed.idl
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
#include "friend_msgs/srv/detail/set_speed__struct.h"
#include "friend_msgs/srv/detail/set_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool friend_msgs__srv__set_speed__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("friend_msgs.srv._set_speed.SetSpeed_Request", full_classname_dest, 43) == 0);
  }
  friend_msgs__srv__SetSpeed_Request * ros_message = _ros_message;
  {  // desired_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * friend_msgs__srv__set_speed__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetSpeed_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("friend_msgs.srv._set_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetSpeed_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  friend_msgs__srv__SetSpeed_Request * ros_message = (friend_msgs__srv__SetSpeed_Request *)raw_ros_message;
  {  // desired_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "friend_msgs/srv/detail/set_speed__struct.h"
// already included above
// #include "friend_msgs/srv/detail/set_speed__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool friend_msgs__srv__set_speed__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("friend_msgs.srv._set_speed.SetSpeed_Response", full_classname_dest, 44) == 0);
  }
  friend_msgs__srv__SetSpeed_Response * ros_message = _ros_message;
  {  // previous_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "previous_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->previous_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stalled
    PyObject * field = PyObject_GetAttrString(_pymsg, "stalled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stalled = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * friend_msgs__srv__set_speed__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetSpeed_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("friend_msgs.srv._set_speed");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetSpeed_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  friend_msgs__srv__SetSpeed_Response * ros_message = (friend_msgs__srv__SetSpeed_Response *)raw_ros_message;
  {  // previous_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->previous_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "previous_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stalled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stalled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stalled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
