// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_study_msgs:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef ROS_STUDY_MSGS__SRV__DETAIL__MY_SRV__BUILDER_HPP_
#define ROS_STUDY_MSGS__SRV__DETAIL__MY_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_study_msgs/srv/detail/my_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_study_msgs
{

namespace srv
{

namespace builder
{

class Init_MySrv_Request_tblno
{
public:
  explicit Init_MySrv_Request_tblno(::ros_study_msgs::srv::MySrv_Request & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::srv::MySrv_Request tblno(::ros_study_msgs::srv::MySrv_Request::_tblno_type arg)
  {
    msg_.tblno = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Request msg_;
};

class Init_MySrv_Request_c
{
public:
  explicit Init_MySrv_Request_c(::ros_study_msgs::srv::MySrv_Request & msg)
  : msg_(msg)
  {}
  Init_MySrv_Request_tblno c(::ros_study_msgs::srv::MySrv_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_MySrv_Request_tblno(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Request msg_;
};

class Init_MySrv_Request_b
{
public:
  explicit Init_MySrv_Request_b(::ros_study_msgs::srv::MySrv_Request & msg)
  : msg_(msg)
  {}
  Init_MySrv_Request_c b(::ros_study_msgs::srv::MySrv_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_MySrv_Request_c(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Request msg_;
};

class Init_MySrv_Request_a
{
public:
  Init_MySrv_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MySrv_Request_b a(::ros_study_msgs::srv::MySrv_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MySrv_Request_b(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::srv::MySrv_Request>()
{
  return ros_study_msgs::srv::builder::Init_MySrv_Request_a();
}

}  // namespace ros_study_msgs


namespace ros_study_msgs
{

namespace srv
{

namespace builder
{

class Init_MySrv_Response_feedback
{
public:
  explicit Init_MySrv_Response_feedback(::ros_study_msgs::srv::MySrv_Response & msg)
  : msg_(msg)
  {}
  ::ros_study_msgs::srv::MySrv_Response feedback(::ros_study_msgs::srv::MySrv_Response::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Response msg_;
};

class Init_MySrv_Response_success
{
public:
  explicit Init_MySrv_Response_success(::ros_study_msgs::srv::MySrv_Response & msg)
  : msg_(msg)
  {}
  Init_MySrv_Response_feedback success(::ros_study_msgs::srv::MySrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MySrv_Response_feedback(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Response msg_;
};

class Init_MySrv_Response_timer
{
public:
  explicit Init_MySrv_Response_timer(::ros_study_msgs::srv::MySrv_Response & msg)
  : msg_(msg)
  {}
  Init_MySrv_Response_success timer(::ros_study_msgs::srv::MySrv_Response::_timer_type arg)
  {
    msg_.timer = std::move(arg);
    return Init_MySrv_Response_success(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Response msg_;
};

class Init_MySrv_Response_ordno
{
public:
  Init_MySrv_Response_ordno()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MySrv_Response_timer ordno(::ros_study_msgs::srv::MySrv_Response::_ordno_type arg)
  {
    msg_.ordno = std::move(arg);
    return Init_MySrv_Response_timer(msg_);
  }

private:
  ::ros_study_msgs::srv::MySrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_study_msgs::srv::MySrv_Response>()
{
  return ros_study_msgs::srv::builder::Init_MySrv_Response_ordno();
}

}  // namespace ros_study_msgs

#endif  // ROS_STUDY_MSGS__SRV__DETAIL__MY_SRV__BUILDER_HPP_
