// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_study_msgs:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_
#define ROS_STUDY_MSGS__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ArithmeticArgument in the package ros_study_msgs.
typedef struct ros_study_msgs__msg__ArithmeticArgument
{
  builtin_interfaces__msg__Time stamp;
  float argument_a;
  float argument_b;
} ros_study_msgs__msg__ArithmeticArgument;

// Struct for a sequence of ros_study_msgs__msg__ArithmeticArgument.
typedef struct ros_study_msgs__msg__ArithmeticArgument__Sequence
{
  ros_study_msgs__msg__ArithmeticArgument * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_study_msgs__msg__ArithmeticArgument__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_STUDY_MSGS__MSG__DETAIL__ARITHMETIC_ARGUMENT__STRUCT_H_
