// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from friend_msgs:msg/R2D2.idl
// generated code does not contain a copyright notice

#ifndef FRIEND_MSGS__MSG__DETAIL__R2_D2__STRUCT_HPP_
#define FRIEND_MSGS__MSG__DETAIL__R2_D2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__friend_msgs__msg__R2D2 __attribute__((deprecated))
#else
# define DEPRECATED__friend_msgs__msg__R2D2 __declspec(deprecated)
#endif

namespace friend_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct R2D2_
{
  using Type = R2D2_<ContainerAllocator>;

  explicit R2D2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->z = 0l;
      this->id = "";
    }
  }

  explicit R2D2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->z = 0l;
      this->id = "";
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _z_type =
    int32_t;
  _z_type z;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const int32_t & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    friend_msgs::msg::R2D2_<ContainerAllocator> *;
  using ConstRawPtr =
    const friend_msgs::msg::R2D2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<friend_msgs::msg::R2D2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<friend_msgs::msg::R2D2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      friend_msgs::msg::R2D2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::msg::R2D2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      friend_msgs::msg::R2D2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<friend_msgs::msg::R2D2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<friend_msgs::msg::R2D2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<friend_msgs::msg::R2D2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__friend_msgs__msg__R2D2
    std::shared_ptr<friend_msgs::msg::R2D2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__friend_msgs__msg__R2D2
    std::shared_ptr<friend_msgs::msg::R2D2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const R2D2_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const R2D2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct R2D2_

// alias to use template instance with default allocator
using R2D2 =
  friend_msgs::msg::R2D2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace friend_msgs

#endif  // FRIEND_MSGS__MSG__DETAIL__R2_D2__STRUCT_HPP_
