// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_
#define BUGGY__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "buggy/srv/detail/custom_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace buggy
{

namespace srv
{

namespace builder
{

class Init_CustomSrv_Request_data
{
public:
  Init_CustomSrv_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::buggy::srv::CustomSrv_Request data(::buggy::srv::CustomSrv_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy::srv::CustomSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy::srv::CustomSrv_Request>()
{
  return buggy::srv::builder::Init_CustomSrv_Request_data();
}

}  // namespace buggy


namespace buggy
{

namespace srv
{

namespace builder
{

class Init_CustomSrv_Response_result
{
public:
  Init_CustomSrv_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::buggy::srv::CustomSrv_Response result(::buggy::srv::CustomSrv_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy::srv::CustomSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy::srv::CustomSrv_Response>()
{
  return buggy::srv::builder::Init_CustomSrv_Response_result();
}

}  // namespace buggy

#endif  // BUGGY__SRV__DETAIL__CUSTOM_SRV__BUILDER_HPP_
