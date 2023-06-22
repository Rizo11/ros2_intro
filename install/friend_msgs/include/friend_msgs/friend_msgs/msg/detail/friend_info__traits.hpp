// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from friend_msgs:msg/FriendInfo.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__TRAITS_HPP_
#define FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "friend_msgs/msg/detail/friend_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace friend_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FriendInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: food_items
  {
    if (msg.food_items.size() == 0) {
      out << "food_items: []";
    } else {
      out << "food_items: [";
      size_t pending_items = msg.food_items.size();
      for (auto item : msg.food_items) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FriendInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
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

  // member: food_items
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.food_items.size() == 0) {
      out << "food_items: []\n";
    } else {
      out << "food_items:\n";
      for (auto item : msg.food_items) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FriendInfo & msg, bool use_flow_style = false)
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
  const friend_msgs::msg::FriendInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  friend_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use friend_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const friend_msgs::msg::FriendInfo & msg)
{
  return friend_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<friend_msgs::msg::FriendInfo>()
{
  return "friend_msgs::msg::FriendInfo";
}

template<>
inline const char * name<friend_msgs::msg::FriendInfo>()
{
  return "friend_msgs/msg/FriendInfo";
}

template<>
struct has_fixed_size<friend_msgs::msg::FriendInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<friend_msgs::msg::FriendInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<friend_msgs::msg::FriendInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__TRAITS_HPP_
