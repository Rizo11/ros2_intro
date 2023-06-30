// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef BUGGY__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
#define BUGGY__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'name'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'point'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"
// Member 'flag'
#include "std_msgs/msg/detail/bool__struct.hpp"
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy__msg__CustomMsg __attribute__((deprecated))
#else
# define DEPRECATED__buggy__msg__CustomMsg __declspec(deprecated)
#endif

namespace buggy
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMsg_
{
  using Type = CustomMsg_<ContainerAllocator>;

  explicit CustomMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_init),
    point(_init),
    flag(_init),
    time(_init)
  {
    (void)_init;
  }

  explicit CustomMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc, _init),
    point(_alloc, _init),
    flag(_alloc, _init),
    time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _name_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _name_type name;
  using _point_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _point_type point;
  using _flag_type =
    std_msgs::msg::Bool_<ContainerAllocator>;
  _flag_type flag;
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;

  // setters for named parameter idiom
  Type & set__name(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__point(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__flag(
    const std_msgs::msg::Bool_<ContainerAllocator> & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy::msg::CustomMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy::msg::CustomMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy::msg::CustomMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy::msg::CustomMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy::msg::CustomMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy::msg::CustomMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy::msg::CustomMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy::msg::CustomMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy::msg::CustomMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy::msg::CustomMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy__msg__CustomMsg
    std::shared_ptr<buggy::msg::CustomMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy__msg__CustomMsg
    std::shared_ptr<buggy::msg::CustomMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMsg_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMsg_

// alias to use template instance with default allocator
using CustomMsg =
  buggy::msg::CustomMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy

#endif  // BUGGY__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
