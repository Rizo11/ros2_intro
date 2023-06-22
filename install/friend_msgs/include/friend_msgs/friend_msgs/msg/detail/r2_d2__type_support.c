// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from friend_msgs:msg/R2D2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "friend_msgs/msg/detail/r2_d2__rosidl_typesupport_introspection_c.h"
#include "friend_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "friend_msgs/msg/detail/r2_d2__functions.h"
#include "friend_msgs/msg/detail/r2_d2__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  friend_msgs__msg__R2D2__init(message_memory);
}

void friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_fini_function(void * message_memory)
{
  friend_msgs__msg__R2D2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__R2D2, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__R2D2, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__R2D2, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__R2D2, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_members = {
  "friend_msgs__msg",  // message namespace
  "R2D2",  // message name
  4,  // number of fields
  sizeof(friend_msgs__msg__R2D2),
  friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_member_array,  // message members
  friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_init_function,  // function to initialize message memory (memory has to be allocated)
  friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_type_support_handle = {
  0,
  &friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_friend_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, friend_msgs, msg, R2D2)() {
  if (!friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_type_support_handle.typesupport_identifier) {
    friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &friend_msgs__msg__R2D2__rosidl_typesupport_introspection_c__R2D2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
