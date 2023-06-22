// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from friend_msgs:srv/FriendInfoService.idl
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
#include "friend_msgs/srv/detail/friend_info_service__struct.h"
#include "friend_msgs/srv/detail/friend_info_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool friend_msgs__srv__friend_info_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("friend_msgs.srv._friend_info_service.FriendInfoService_Request", full_classname_dest, 62) == 0);
  }
  friend_msgs__srv__FriendInfoService_Request * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * friend_msgs__srv__friend_info_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FriendInfoService_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("friend_msgs.srv._friend_info_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FriendInfoService_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  friend_msgs__srv__FriendInfoService_Request * ros_message = (friend_msgs__srv__FriendInfoService_Request *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
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
// #include "friend_msgs/srv/detail/friend_info_service__struct.h"
// already included above
// #include "friend_msgs/srv/detail/friend_info_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool friend_msgs__srv__friend_info_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("friend_msgs.srv._friend_info_service.FriendInfoService_Response", full_classname_dest, 63) == 0);
  }
  friend_msgs__srv__FriendInfoService_Response * ros_message = _ros_message;
  {  // heartbeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "heartbeat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heartbeat = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * friend_msgs__srv__friend_info_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FriendInfoService_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("friend_msgs.srv._friend_info_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FriendInfoService_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  friend_msgs__srv__FriendInfoService_Response * ros_message = (friend_msgs__srv__FriendInfoService_Response *)raw_ros_message;
  {  // heartbeat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->heartbeat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heartbeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
