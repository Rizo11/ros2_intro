// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy:srv/CustomSrv.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_
#define BUGGY__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy__srv__CustomSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__buggy__srv__CustomSrv_Request __declspec(deprecated)
#endif

namespace buggy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomSrv_Request_
{
  using Type = CustomSrv_Request_<ContainerAllocator>;

  explicit CustomSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit CustomSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy::srv::CustomSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy::srv::CustomSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy::srv::CustomSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy::srv::CustomSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy__srv__CustomSrv_Request
    std::shared_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy__srv__CustomSrv_Request
    std::shared_ptr<buggy::srv::CustomSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomSrv_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomSrv_Request_

// alias to use template instance with default allocator
using CustomSrv_Request =
  buggy::srv::CustomSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace buggy


// Include directives for member types
// Member 'result'
// already included above
// #include "std_msgs/msg/detail/bool__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy__srv__CustomSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__buggy__srv__CustomSrv_Response __declspec(deprecated)
#endif

namespace buggy
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomSrv_Response_
{
  using Type = CustomSrv_Response_<ContainerAllocator>;

  explicit CustomSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit CustomSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy::srv::CustomSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy::srv::CustomSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy::srv::CustomSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy::srv::CustomSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy__srv__CustomSrv_Response
    std::shared_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy__srv__CustomSrv_Response
    std::shared_ptr<buggy::srv::CustomSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomSrv_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomSrv_Response_

// alias to use template instance with default allocator
using CustomSrv_Response =
  buggy::srv::CustomSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace buggy

namespace buggy
{

namespace srv
{

struct CustomSrv
{
  using Request = buggy::srv::CustomSrv_Request;
  using Response = buggy::srv::CustomSrv_Response;
};

}  // namespace srv

}  // namespace buggy

#endif  // BUGGY__SRV__DETAIL__CUSTOM_SRV__STRUCT_HPP_
