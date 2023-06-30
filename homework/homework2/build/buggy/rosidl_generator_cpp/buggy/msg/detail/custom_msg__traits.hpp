// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
#define BUGGY__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "buggy/msg/detail/custom_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'name'
#include "std_msgs/msg/detail/string__traits.hpp"
// Member 'point'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"
// Member 'flag'
#include "std_msgs/msg/detail/bool__traits.hpp"
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace buggy
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    to_flow_style_yaml(msg.name, out);
    out << ", ";
  }

  // member: point
  {
    out << "point: ";
    to_flow_style_yaml(msg.point, out);
    out << ", ";
  }

  // member: flag
  {
    out << "flag: ";
    to_flow_style_yaml(msg.flag, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name:\n";
    to_block_style_yaml(msg.name, out, indentation + 2);
  }

  // member: point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "point:\n";
    to_block_style_yaml(msg.point, out, indentation + 2);
  }

  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag:\n";
    to_block_style_yaml(msg.flag, out, indentation + 2);
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace buggy

namespace rosidl_generator_traits
{

[[deprecated("use buggy::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const buggy::msg::CustomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  buggy::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use buggy::msg::to_yaml() instead")]]
inline std::string to_yaml(const buggy::msg::CustomMsg & msg)
{
  return buggy::msg::to_yaml(msg);
}

template<>
inline const char * data_type<buggy::msg::CustomMsg>()
{
  return "buggy::msg::CustomMsg";
}

template<>
inline const char * name<buggy::msg::CustomMsg>()
{
  return "buggy/msg/CustomMsg";
}

template<>
struct has_fixed_size<buggy::msg::CustomMsg>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::PointStamped>::value && has_fixed_size<std_msgs::msg::Bool>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<buggy::msg::CustomMsg>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::PointStamped>::value && has_bounded_size<std_msgs::msg::Bool>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<buggy::msg::CustomMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
