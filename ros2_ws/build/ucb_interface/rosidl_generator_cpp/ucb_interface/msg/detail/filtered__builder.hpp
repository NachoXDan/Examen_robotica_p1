// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ucb_interface:msg/Filtered.idl
// generated code does not contain a copyright notice

#ifndef UCB_INTERFACE__MSG__DETAIL__FILTERED__BUILDER_HPP_
#define UCB_INTERFACE__MSG__DETAIL__FILTERED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ucb_interface/msg/detail/filtered__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ucb_interface
{

namespace msg
{

namespace builder
{

class Init_Filtered_prom
{
public:
  Init_Filtered_prom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ucb_interface::msg::Filtered prom(::ucb_interface::msg::Filtered::_prom_type arg)
  {
    msg_.prom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ucb_interface::msg::Filtered msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ucb_interface::msg::Filtered>()
{
  return ucb_interface::msg::builder::Init_Filtered_prom();
}

}  // namespace ucb_interface

#endif  // UCB_INTERFACE__MSG__DETAIL__FILTERED__BUILDER_HPP_
