// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_study_msgs:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__TRAITS_HPP_
#define ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_study_msgs/srv/detail/arithmetic_operator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_study_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArithmeticOperator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: arithmetic_operator
  {
    out << "arithmetic_operator: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_operator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticOperator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arithmetic_operator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arithmetic_operator: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_operator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticOperator_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::srv::ArithmeticOperator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::srv::ArithmeticOperator_Request & msg)
{
  return ros_study_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::srv::ArithmeticOperator_Request>()
{
  return "ros_study_msgs::srv::ArithmeticOperator_Request";
}

template<>
inline const char * name<ros_study_msgs::srv::ArithmeticOperator_Request>()
{
  return "ros_study_msgs/srv/ArithmeticOperator_Request";
}

template<>
struct has_fixed_size<ros_study_msgs::srv::ArithmeticOperator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_study_msgs::srv::ArithmeticOperator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_study_msgs::srv::ArithmeticOperator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_study_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArithmeticOperator_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: arithmetic_result
  {
    out << "arithmetic_result: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArithmeticOperator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arithmetic_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arithmetic_result: ";
    rosidl_generator_traits::value_to_yaml(msg.arithmetic_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArithmeticOperator_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_study_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ros_study_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_study_msgs::srv::ArithmeticOperator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_study_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_study_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_study_msgs::srv::ArithmeticOperator_Response & msg)
{
  return ros_study_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_study_msgs::srv::ArithmeticOperator_Response>()
{
  return "ros_study_msgs::srv::ArithmeticOperator_Response";
}

template<>
inline const char * name<ros_study_msgs::srv::ArithmeticOperator_Response>()
{
  return "ros_study_msgs/srv/ArithmeticOperator_Response";
}

template<>
struct has_fixed_size<ros_study_msgs::srv::ArithmeticOperator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_study_msgs::srv::ArithmeticOperator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_study_msgs::srv::ArithmeticOperator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_study_msgs::srv::ArithmeticOperator>()
{
  return "ros_study_msgs::srv::ArithmeticOperator";
}

template<>
inline const char * name<ros_study_msgs::srv::ArithmeticOperator>()
{
  return "ros_study_msgs/srv/ArithmeticOperator";
}

template<>
struct has_fixed_size<ros_study_msgs::srv::ArithmeticOperator>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_study_msgs::srv::ArithmeticOperator_Request>::value &&
    has_fixed_size<ros_study_msgs::srv::ArithmeticOperator_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_study_msgs::srv::ArithmeticOperator>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_study_msgs::srv::ArithmeticOperator_Request>::value &&
    has_bounded_size<ros_study_msgs::srv::ArithmeticOperator_Response>::value
  >
{
};

template<>
struct is_service<ros_study_msgs::srv::ArithmeticOperator>
  : std::true_type
{
};

template<>
struct is_service_request<ros_study_msgs::srv::ArithmeticOperator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_study_msgs::srv::ArithmeticOperator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__TRAITS_HPP_
