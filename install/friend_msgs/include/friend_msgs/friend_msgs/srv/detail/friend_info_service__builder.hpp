// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from friend_msgs:srv/FriendInfoService.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__BUILDER_HPP_
#define FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "friend_msgs/srv/detail/friend_info_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace friend_msgs
{

namespace srv
{

namespace builder
{

class Init_FriendInfoService_Request_value
{
public:
  explicit Init_FriendInfoService_Request_value(::friend_msgs::srv::FriendInfoService_Request & msg)
  : msg_(msg)
  {}
  ::friend_msgs::srv::FriendInfoService_Request value(::friend_msgs::srv::FriendInfoService_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::friend_msgs::srv::FriendInfoService_Request msg_;
};

class Init_FriendInfoService_Request_id
{
public:
  Init_FriendInfoService_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FriendInfoService_Request_value id(::friend_msgs::srv::FriendInfoService_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FriendInfoService_Request_value(msg_);
  }

private:
  ::friend_msgs::srv::FriendInfoService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::friend_msgs::srv::FriendInfoService_Request>()
{
  return friend_msgs::srv::builder::Init_FriendInfoService_Request_id();
}

}  // namespace friend_msgs


namespace friend_msgs
{

namespace srv
{

namespace builder
{

class Init_FriendInfoService_Response_heartbeat
{
public:
  Init_FriendInfoService_Response_heartbeat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::friend_msgs::srv::FriendInfoService_Response heartbeat(::friend_msgs::srv::FriendInfoService_Response::_heartbeat_type arg)
  {
    msg_.heartbeat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::friend_msgs::srv::FriendInfoService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::friend_msgs::srv::FriendInfoService_Response>()
{
  return friend_msgs::srv::builder::Init_FriendInfoService_Response_heartbeat();
}

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__SRV__DETAIL__FRIEND_INFO_SERVICE__BUILDER_HPP_
