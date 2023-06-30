// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BUGGY__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "buggy/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "buggy/msg/detail/custom_msg__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace buggy
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy
cdr_serialize(
  const buggy::msg::CustomMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy::msg::CustomMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy
get_serialized_size(
  const buggy::msg::CustomMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy
max_serialized_size_CustomMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace buggy

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy, msg, CustomMsg)();

#ifdef __cplusplus
}
#endif

#endif  // BUGGY__MSG__DETAIL__CUSTOM_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
