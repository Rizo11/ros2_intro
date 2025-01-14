// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy/msg/detail/custom_msg__rosidl_typesupport_introspection_c.h"
#include "buggy/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy/msg/detail/custom_msg__functions.h"
#include "buggy/msg/detail/custom_msg__struct.h"


// Include directives for member types
// Member `name`
#include "std_msgs/msg/string.h"
// Member `name`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `point`
#include "geometry_msgs/msg/point_stamped.h"
// Member `point`
#include "geometry_msgs/msg/detail/point_stamped__rosidl_typesupport_introspection_c.h"
// Member `flag`
#include "std_msgs/msg/bool.h"
// Member `flag`
#include "std_msgs/msg/detail/bool__rosidl_typesupport_introspection_c.h"
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy__msg__CustomMsg__init(message_memory);
}

void buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_fini_function(void * message_memory)
{
  buggy__msg__CustomMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy__msg__CustomMsg, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy__msg__CustomMsg, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy__msg__CustomMsg, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy__msg__CustomMsg, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_members = {
  "buggy__msg",  // message namespace
  "CustomMsg",  // message name
  4,  // number of fields
  sizeof(buggy__msg__CustomMsg),
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array,  // message members
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle = {
  0,
  &buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy, msg, CustomMsg)() {
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PointStamped)();
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Bool)();
  buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle.typesupport_identifier) {
    buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &buggy__msg__CustomMsg__rosidl_typesupport_introspection_c__CustomMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
