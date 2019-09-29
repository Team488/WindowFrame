#ifndef _H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal__H_
#define _H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "action_msgs/msg/dds_opensplice/GoalInfo_.h"
#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace action_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Request_
            {
                ::action_msgs::msg::dds_::GoalInfo_ goal_info_;
            };

            typedef DDS_DCPSStruct_var<CancelGoal_Request_> CancelGoal_Request__var;
            typedef CancelGoal_Request_& CancelGoal_Request__out;

            namespace CancelGoal_Response_Constants
            {
                const ::DDS::Octet ERROR_NONE_ = 0;

                const ::DDS::Octet ERROR_REJECTED_ = 1;

                const ::DDS::Octet ERROR_UNKNOWN_GOAL_ID_ = 2;

                const ::DDS::Octet ERROR_GOAL_TERMINATED_ = 3;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs CancelGoal_Response_
            {
                struct _goals_canceling__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::action_msgs::msg::dds_::GoalInfo_, struct _goals_canceling__seq_uniq_ > _goals_canceling__seq;
                typedef DDS_DCPSSequence_var< _goals_canceling__seq > _goals_canceling__seq_var;
                typedef DDS_DCPSSequence_out< _goals_canceling__seq > _goals_canceling__seq_out;
                ::DDS::Octet return_code_;
                _goals_canceling__seq goals_canceling_;
            };

            typedef DDS_DCPSStruct_var<CancelGoal_Response_> CancelGoal_Response__var;
            typedef DDS_DCPSStruct_out < CancelGoal_Response_> CancelGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::action_msgs::srv::dds_::CancelGoal_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_CancelGoal_Request_> Sample_CancelGoal_Request__var;
            typedef Sample_CancelGoal_Request_& Sample_CancelGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs Sample_CancelGoal_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::action_msgs::srv::dds_::CancelGoal_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_CancelGoal_Response_> Sample_CancelGoal_Response__var;
            typedef DDS_DCPSStruct_out < Sample_CancelGoal_Response_> Sample_CancelGoal_Response__out;

        }

    }

}

#endif /* _H_0B6074C021E45E35C57839B0E35CD4DC_CancelGoal__H_ */
