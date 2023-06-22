// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from friend_msgs:msg/FriendInfo.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__BUILDER_HPP_
#define FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "friend_msgs/msg/detail/friend_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace friend_msgs
{

namespace msg
{

namespace builder
{

class Init_FriendInfo_food_items
{
public:
  explicit Init_FriendInfo_food_items(::friend_msgs::msg::FriendInfo & msg)
  : msg_(msg)
  {}
  ::friend_msgs::msg::FriendInfo food_items(::friend_msgs::msg::FriendInfo::_food_items_type arg)
  {
    msg_.food_items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::friend_msgs::msg::FriendInfo msg_;
};

class Init_FriendInfo_id
{
public:
  explicit Init_FriendInfo_id(::friend_msgs::msg::FriendInfo & msg)
  : msg_(msg)
  {}
  Init_FriendInfo_food_items id(::friend_msgs::msg::FriendInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FriendInfo_food_items(msg_);
  }

private:
  ::friend_msgs::msg::FriendInfo msg_;
};

class Init_FriendInfo_name
{
public:
  Init_FriendInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FriendInfo_id name(::friend_msgs::msg::FriendInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FriendInfo_id(msg_);
  }

private:
  ::friend_msgs::msg::FriendInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::friend_msgs::msg::FriendInfo>()
{
  return friend_msgs::msg::builder::Init_FriendInfo_name();
}

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__MSG__DETAIL__FRIEND_INFO__BUILDER_HPP_
