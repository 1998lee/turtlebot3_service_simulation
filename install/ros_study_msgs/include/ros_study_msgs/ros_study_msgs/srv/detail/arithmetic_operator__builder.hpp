// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_study_msgs:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_
#define ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_study_msgs/srv/detail/arithmetic_operator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_study_msgs
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Request_arithmetic_operator
{
public:
  Init_ArithmeticOperator_Request_arithmetic_operator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::srv::ArithmeticOperator_Request arithmetic_operator(::ros_study_msgs::srv::ArithmeticOperator_Request::_arithmetic_operator_type arg)
  {
    msg_.arithmetic_operator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::srv::ArithmeticOperator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::srv::ArithmeticOperator_Request>()
{
  return ros_study_msgs::srv::builder::Init_ArithmeticOperator_Request_arithmetic_operator();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace srv
{

namespace builder
{

class Init_ArithmeticOperator_Response_arithmetic_result
{
public:
  Init_ArithmeticOperator_Response_arithmetic_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::srv::ArithmeticOperator_Response arithmetic_result(::ros_study_msgs::srv::ArithmeticOperator_Response::_arithmetic_result_type arg)
  {
    msg_.arithmetic_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::srv::ArithmeticOperator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::srv::ArithmeticOperator_Response>()
{
  return ros_study_msgs::srv::builder::Init_ArithmeticOperator_Response_arithmetic_result();
}

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__BUILDER_HPP_
