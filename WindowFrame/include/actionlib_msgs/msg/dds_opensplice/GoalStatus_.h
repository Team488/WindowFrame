#ifndef _H_2848E01C2519197871D502D9D55108C3_GoalStatus__H_
#define _H_2848E01C2519197871D502D9D55108C3_GoalStatus__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "actionlib_msgs/msg/dds_opensplice/GoalID_.h"
#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace actionlib_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace GoalStatus_Constants
            {
                const ::DDS::Octet PENDING_ = 0;

                const ::DDS::Octet ACTIVE_ = 1;

                const ::DDS::Octet PREEMPTED_ = 2;

                const ::DDS::Octet SUCCEEDED_ = 3;

                const ::DDS::Octet ABORTED_ = 4;

                const ::DDS::Octet REJECTED_ = 5;

                const ::DDS::Octet PREEMPTING_ = 6;

                const ::DDS::Octet RECALLING_ = 7;

                const ::DDS::Octet RECALLED_ = 8;

                const ::DDS::Octet LOST_ = 9;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatus_
            {
                ::actionlib_msgs::msg::dds_::GoalID_ goal_id_;
                ::DDS::Octet status_;
                ::DDS::String_mgr text_;
            };

            typedef DDS_DCPSStruct_var<GoalStatus_> GoalStatus__var;
            typedef DDS_DCPSStruct_out < GoalStatus_> GoalStatus__out;

        }

    }

}

#endif /* _H_2848E01C2519197871D502D9D55108C3_GoalStatus__H_ */
