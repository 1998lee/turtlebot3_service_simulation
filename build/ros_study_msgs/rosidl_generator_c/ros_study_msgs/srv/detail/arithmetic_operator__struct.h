// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_study_msgs:srv/ArithmeticOperator.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_
#define ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLUS'.
enum
{
  ros_study_msgs__srv__ArithmeticOperator_Request__PLUS = 1
};

/// Constant 'MINUS'.
enum
{
  ros_study_msgs__srv__ArithmeticOperator_Request__MINUS = 2
};

/// Constant 'MULTIPLY'.
enum
{
  ros_study_msgs__srv__ArithmeticOperator_Request__MULTIPLY = 3
};

/// Constant 'DIVISION'.
enum
{
  ros_study_msgs__srv__ArithmeticOperator_Request__DIVISION = 4
};

/// Struct defined in srv/ArithmeticOperator in the package ros_study_msgs.
typedef struct ros_study_msgs__srv__ArithmeticOperator_Request
{
  int8_t arithmetic_operator;
} ros_study_msgs__srv__ArithmeticOperator_Request;

// Struct for a sequence of ros_study_msgs__srv__ArithmeticOperator_Request.
typedef struct ros_study_msgs__srv__ArithmeticOperator_Request__Sequence
{
  ros_study_msgs__srv__ArithmeticOperator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_study_msgs__srv__ArithmeticOperator_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ArithmeticOperator in the package ros_study_msgs.
typedef struct ros_study_msgs__srv__ArithmeticOperator_Response
{
  float arithmetic_result;
} ros_study_msgs__srv__ArithmeticOperator_Response;

// Struct for a sequence of ros_study_msgs__srv__ArithmeticOperator_Response.
typedef struct ros_study_msgs__srv__ArithmeticOperator_Response__Sequence
{
  ros_study_msgs__srv__ArithmeticOperator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_study_msgs__srv__ArithmeticOperator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_STUDY_MSGS__SRV__DETAIL__ARITHMETIC_OPERATOR__STRUCT_H_
