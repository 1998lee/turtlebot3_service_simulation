// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_study_msgs:action/ArithmeticChecker.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__ACTION__DETAIL__ARITHMETIC_CHECKER__BUILDER_HPP_
#define ROS_STUDY_MSGS__ACTION__DETAIL__ARITHMETIC_CHECKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_study_msgs/action/detail/arithmetic_checker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_Goal_goal_sum
{
public:
  Init_ArithmeticChecker_Goal_goal_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_Goal goal_sum(::ros_study_msgs::action::ArithmeticChecker_Goal::_goal_sum_type arg)
  {
    msg_.goal_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_Goal>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_Goal_goal_sum();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_Result_total_sum
{
public:
  explicit Init_ArithmeticChecker_Result_total_sum(::ros_study_msgs::action::ArithmeticChecker_Result & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_Result total_sum(::ros_study_msgs::action::ArithmeticChecker_Result::_total_sum_type arg)
  {
    msg_.total_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_Result msg_;
};

class Init_ArithmeticChecker_Result_all_formula
{
public:
  Init_ArithmeticChecker_Result_all_formula()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_Result_total_sum all_formula(::ros_study_msgs::action::ArithmeticChecker_Result::_all_formula_type arg)
  {
    msg_.all_formula = std::move(arg);
    return Init_ArithmeticChecker_Result_total_sum(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_Result>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_Result_all_formula();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_Feedback_formula
{
public:
  Init_ArithmeticChecker_Feedback_formula()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_Feedback formula(::ros_study_msgs::action::ArithmeticChecker_Feedback::_formula_type arg)
  {
    msg_.formula = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_Feedback>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_Feedback_formula();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_SendGoal_Request_goal
{
public:
  explicit Init_ArithmeticChecker_SendGoal_Request_goal(::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request goal(::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request msg_;
};

class Init_ArithmeticChecker_SendGoal_Request_goal_id
{
public:
  Init_ArithmeticChecker_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_SendGoal_Request_goal goal_id(::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArithmeticChecker_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_SendGoal_Request>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_SendGoal_Request_goal_id();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_SendGoal_Response_stamp
{
public:
  explicit Init_ArithmeticChecker_SendGoal_Response_stamp(::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response stamp(::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response msg_;
};

class Init_ArithmeticChecker_SendGoal_Response_accepted
{
public:
  Init_ArithmeticChecker_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_SendGoal_Response_stamp accepted(::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ArithmeticChecker_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_SendGoal_Response>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_SendGoal_Response_accepted();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_GetResult_Request_goal_id
{
public:
  Init_ArithmeticChecker_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_GetResult_Request goal_id(::ros_study_msgs::action::ArithmeticChecker_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_GetResult_Request>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_GetResult_Request_goal_id();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_GetResult_Response_result
{
public:
  explicit Init_ArithmeticChecker_GetResult_Response_result(::ros_study_msgs::action::ArithmeticChecker_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_GetResult_Response result(::ros_study_msgs::action::ArithmeticChecker_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_GetResult_Response msg_;
};

class Init_ArithmeticChecker_GetResult_Response_status
{
public:
  Init_ArithmeticChecker_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_GetResult_Response_result status(::ros_study_msgs::action::ArithmeticChecker_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArithmeticChecker_GetResult_Response_result(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_GetResult_Response>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_GetResult_Response_status();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_ArithmeticChecker_FeedbackMessage_feedback
{
public:
  explicit Init_ArithmeticChecker_FeedbackMessage_feedback(::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage feedback(::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage msg_;
};

class Init_ArithmeticChecker_FeedbackMessage_goal_id
{
public:
  Init_ArithmeticChecker_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArithmeticChecker_FeedbackMessage_feedback goal_id(::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ArithmeticChecker_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::ArithmeticChecker_FeedbackMessage>()
{
  return ros_study_msgs::action::builder::Init_ArithmeticChecker_FeedbackMessage_goal_id();
}

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__ACTION__DETAIL__ARITHMETIC_CHECKER__BUILDER_HPP_
