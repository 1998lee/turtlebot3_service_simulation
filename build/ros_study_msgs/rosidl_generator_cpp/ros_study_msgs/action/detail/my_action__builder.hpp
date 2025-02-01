// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_study_msgs:action/MyAction.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__BUILDER_HPP_
#define ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_study_msgs/action/detail/my_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_Goal_wait_time
{
public:
  explicit Init_MyAction_Goal_wait_time(::ros_study_msgs::action::MyAction_Goal & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::MyAction_Goal wait_time(::ros_study_msgs::action::MyAction_Goal::_wait_time_type arg)
  {
    msg_.wait_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_Goal msg_;
};

class Init_MyAction_Goal_location
{
public:
  Init_MyAction_Goal_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_Goal_wait_time location(::ros_study_msgs::action::MyAction_Goal::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_MyAction_Goal_wait_time(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_Goal>()
{
  return ros_study_msgs::action::builder::Init_MyAction_Goal_location();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_Result_res
{
public:
  Init_MyAction_Result_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::action::MyAction_Result res(::ros_study_msgs::action::MyAction_Result::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_Result>()
{
  return ros_study_msgs::action::builder::Init_MyAction_Result_res();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_Feedback_str
{
public:
  Init_MyAction_Feedback_str()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::action::MyAction_Feedback str(::ros_study_msgs::action::MyAction_Feedback::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_Feedback>()
{
  return ros_study_msgs::action::builder::Init_MyAction_Feedback_str();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_SendGoal_Request_goal
{
public:
  explicit Init_MyAction_SendGoal_Request_goal(::ros_study_msgs::action::MyAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::MyAction_SendGoal_Request goal(::ros_study_msgs::action::MyAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_SendGoal_Request msg_;
};

class Init_MyAction_SendGoal_Request_goal_id
{
public:
  Init_MyAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_SendGoal_Request_goal goal_id(::ros_study_msgs::action::MyAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyAction_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_SendGoal_Request>()
{
  return ros_study_msgs::action::builder::Init_MyAction_SendGoal_Request_goal_id();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_SendGoal_Response_stamp
{
public:
  explicit Init_MyAction_SendGoal_Response_stamp(::ros_study_msgs::action::MyAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::MyAction_SendGoal_Response stamp(::ros_study_msgs::action::MyAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_SendGoal_Response msg_;
};

class Init_MyAction_SendGoal_Response_accepted
{
public:
  Init_MyAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_SendGoal_Response_stamp accepted(::ros_study_msgs::action::MyAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MyAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_SendGoal_Response>()
{
  return ros_study_msgs::action::builder::Init_MyAction_SendGoal_Response_accepted();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_GetResult_Request_goal_id
{
public:
  Init_MyAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_study_msgs::action::MyAction_GetResult_Request goal_id(::ros_study_msgs::action::MyAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_GetResult_Request>()
{
  return ros_study_msgs::action::builder::Init_MyAction_GetResult_Request_goal_id();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_GetResult_Response_result
{
public:
  explicit Init_MyAction_GetResult_Response_result(::ros_study_msgs::action::MyAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::MyAction_GetResult_Response result(::ros_study_msgs::action::MyAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_GetResult_Response msg_;
};

class Init_MyAction_GetResult_Response_status
{
public:
  Init_MyAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_GetResult_Response_result status(::ros_study_msgs::action::MyAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MyAction_GetResult_Response_result(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_GetResult_Response>()
{
  return ros_study_msgs::action::builder::Init_MyAction_GetResult_Response_status();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace action
{

namespace builder
{

class Init_MyAction_FeedbackMessage_feedback
{
public:
  explicit Init_MyAction_FeedbackMessage_feedback(::ros_study_msgs::action::MyAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::action::MyAction_FeedbackMessage feedback(::ros_study_msgs::action::MyAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_FeedbackMessage msg_;
};

class Init_MyAction_FeedbackMessage_goal_id
{
public:
  Init_MyAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAction_FeedbackMessage_feedback goal_id(::ros_study_msgs::action::MyAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_study_msgs::action::MyAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::action::MyAction_FeedbackMessage>()
{
  return ros_study_msgs::action::builder::Init_MyAction_FeedbackMessage_goal_id();
}

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__ACTION__DETAIL__MY_ACTION__BUILDER_HPP_
