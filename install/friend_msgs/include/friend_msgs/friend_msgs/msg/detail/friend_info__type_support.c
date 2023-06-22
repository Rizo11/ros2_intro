// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from friend_msgs:msg/FriendInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "friend_msgs/msg/detail/friend_info__rosidl_typesupport_introspection_c.h"
#include "friend_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "friend_msgs/msg/detail/friend_info__functions.h"
#include "friend_msgs/msg/detail/friend_info__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `food_items`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  friend_msgs__msg__FriendInfo__init(message_memory);
}

void friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_fini_function(void * message_memory)
{
  friend_msgs__msg__FriendInfo__fini(message_memory);
}

size_t friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__size_function__FriendInfo__food_items(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__get_const_function__FriendInfo__food_items(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__get_function__FriendInfo__food_items(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__fetch_function__FriendInfo__food_items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__get_const_function__FriendInfo__food_items(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__assign_function__FriendInfo__food_items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__get_function__FriendInfo__food_items(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__resize_function__FriendInfo__food_items(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__FriendInfo, name),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__FriendInfo, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "food_items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(friend_msgs__msg__FriendInfo, food_items),  // bytes offset in struct
    NULL,  // default value
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__size_function__FriendInfo__food_items,  // size() function pointer
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__get_const_function__FriendInfo__food_items,  // get_const(index) function pointer
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__get_function__FriendInfo__food_items,  // get(index) function pointer
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__fetch_function__FriendInfo__food_items,  // fetch(index, &value) function pointer
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__assign_function__FriendInfo__food_items,  // assign(index, value) function pointer
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__resize_function__FriendInfo__food_items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_members = {
  "friend_msgs__msg",  // message namespace
  "FriendInfo",  // message name
  3,  // number of fields
  sizeof(friend_msgs__msg__FriendInfo),
  friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_member_array,  // message members
  friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_type_support_handle = {
  0,
  &friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_friend_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, friend_msgs, msg, FriendInfo)() {
  if (!friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_type_support_handle.typesupport_identifier) {
    friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &friend_msgs__msg__FriendInfo__rosidl_typesupport_introspection_c__FriendInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
