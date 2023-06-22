// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from friend_msgs:msg/R2D2.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__R2_D2__TRAITS_HPP_
#define FRIEND_MSGS__MSG__DETAIL__R2_D2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "friend_msgs/msg/detail/r2_d2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace friend_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const R2D2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const R2D2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const R2D2 & msg, bool use_flow_style = false)
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

}  // namespace friend_msgs

namespace rosidl_generator_traits
{

[[deprecated("use friend_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const friend_msgs::msg::R2D2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  friend_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use friend_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const friend_msgs::msg::R2D2 & msg)
{
  return friend_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<friend_msgs::msg::R2D2>()
{
  return "friend_msgs::msg::R2D2";
}

template<>
inline const char * name<friend_msgs::msg::R2D2>()
{
  return "friend_msgs/msg/R2D2";
}

template<>
struct has_fixed_size<friend_msgs::msg::R2D2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<friend_msgs::msg::R2D2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<friend_msgs::msg::R2D2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRIEND_MSGS__MSG__DETAIL__R2_D2__TRAITS_HPP_
