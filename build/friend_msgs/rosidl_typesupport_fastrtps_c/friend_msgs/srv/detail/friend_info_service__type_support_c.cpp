// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from friend_msgs:srv/FriendInfoService.idl
// generated code does not contain a copyright notice
#include "friend_msgs/srv/detail/friend_info_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "friend_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "friend_msgs/srv/detail/friend_info_service__struct.h"
#include "friend_msgs/srv/detail/friend_info_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FriendInfoService_Request__ros_msg_type = friend_msgs__srv__FriendInfoService_Request;

static bool _FriendInfoService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FriendInfoService_Request__ros_msg_type * ros_message = static_cast<const _FriendInfoService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  return true;
}

static bool _FriendInfoService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FriendInfoService_Request__ros_msg_type * ros_message = static_cast<_FriendInfoService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t get_serialized_size_friend_msgs__srv__FriendInfoService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FriendInfoService_Request__ros_msg_type * ros_message = static_cast<const _FriendInfoService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FriendInfoService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_friend_msgs__srv__FriendInfoService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t max_serialized_size_friend_msgs__srv__FriendInfoService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FriendInfoService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_friend_msgs__srv__FriendInfoService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FriendInfoService_Request = {
  "friend_msgs::srv",
  "FriendInfoService_Request",
  _FriendInfoService_Request__cdr_serialize,
  _FriendInfoService_Request__cdr_deserialize,
  _FriendInfoService_Request__get_serialized_size,
  _FriendInfoService_Request__max_serialized_size
};

static rosidl_message_type_support_t _FriendInfoService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FriendInfoService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, FriendInfoService_Request)() {
  return &_FriendInfoService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "friend_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "friend_msgs/srv/detail/friend_info_service__struct.h"
// already included above
// #include "friend_msgs/srv/detail/friend_info_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FriendInfoService_Response__ros_msg_type = friend_msgs__srv__FriendInfoService_Response;

static bool _FriendInfoService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FriendInfoService_Response__ros_msg_type * ros_message = static_cast<const _FriendInfoService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: heartbeat
  {
    cdr << ros_message->heartbeat;
  }

  return true;
}

static bool _FriendInfoService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FriendInfoService_Response__ros_msg_type * ros_message = static_cast<_FriendInfoService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: heartbeat
  {
    cdr >> ros_message->heartbeat;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t get_serialized_size_friend_msgs__srv__FriendInfoService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FriendInfoService_Response__ros_msg_type * ros_message = static_cast<const _FriendInfoService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name heartbeat
  {
    size_t item_size = sizeof(ros_message->heartbeat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FriendInfoService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_friend_msgs__srv__FriendInfoService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_friend_msgs
size_t max_serialized_size_friend_msgs__srv__FriendInfoService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: heartbeat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FriendInfoService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_friend_msgs__srv__FriendInfoService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FriendInfoService_Response = {
  "friend_msgs::srv",
  "FriendInfoService_Response",
  _FriendInfoService_Response__cdr_serialize,
  _FriendInfoService_Response__cdr_deserialize,
  _FriendInfoService_Response__get_serialized_size,
  _FriendInfoService_Response__max_serialized_size
};

static rosidl_message_type_support_t _FriendInfoService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FriendInfoService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, FriendInfoService_Response)() {
  return &_FriendInfoService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "friend_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "friend_msgs/srv/friend_info_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FriendInfoService__callbacks = {
  "friend_msgs::srv",
  "FriendInfoService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, FriendInfoService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, FriendInfoService_Response)(),
};

static rosidl_service_type_support_t FriendInfoService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FriendInfoService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, friend_msgs, srv, FriendInfoService)() {
  return &FriendInfoService__handle;
}

#if defined(__cplusplus)
}
#endif
