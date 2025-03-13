// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ucb_interface:msg/Filtered.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__FILTERED__STRUCT_HPP_
#define UCB_INTERFACE__MSG__DETAIL__FILTERED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ucb_interface__msg__Filtered __attribute__((deprecated))
#else
# define DEPRECATED__ucb_interface__msg__Filtered __declspec(deprecated)
#endif

namespace ucb_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Filtered_
{
  using Type = Filtered_<ContainerAllocator>;

  explicit Filtered_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prom = 0.0;
    }
  }

  explicit Filtered_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prom = 0.0;
    }
  }

  // field types and members
  using _prom_type =
    double;
  _prom_type prom;

  // setters for named parameter idiom
  Type & set__prom(
    const double & _arg)
  {
    this->prom = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ucb_interface::msg::Filtered_<ContainerAllocator> *;
  using ConstRawPtr =
    const ucb_interface::msg::Filtered_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ucb_interface::msg::Filtered_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ucb_interface::msg::Filtered_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Filtered_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Filtered_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ucb_interface::msg::Filtered_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ucb_interface::msg::Filtered_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ucb_interface::msg::Filtered_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ucb_interface::msg::Filtered_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ucb_interface__msg__Filtered
    std::shared_ptr<ucb_interface::msg::Filtered_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ucb_interface__msg__Filtered
    std::shared_ptr<ucb_interface::msg::Filtered_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Filtered_ & other) const
  {
    if (this->prom != other.prom) {
      return false;
    }
    return true;
  }
  bool operator!=(const Filtered_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Filtered_

// alias to use template instance with default allocator
using Filtered =
  ucb_interface::msg::Filtered_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__FILTERED__STRUCT_HPP_
