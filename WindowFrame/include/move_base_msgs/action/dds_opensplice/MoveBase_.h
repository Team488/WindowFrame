#ifndef _H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase__H_
#define _H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/PoseStamped_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "move_base_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace move_base_msgs
{
    namespace action
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Goal_
            {
                ::geometry_msgs::msg::dds_::PoseStamped_ target_pose_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_Goal_> MoveBase_Goal__var;
            typedef DDS_DCPSStruct_out < MoveBase_Goal_> MoveBase_Goal__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::move_base_msgs::action::dds_::MoveBase_Goal_ goal_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_SendGoal_Request_> MoveBase_SendGoal_Request__var;
            typedef DDS_DCPSStruct_out < MoveBase_SendGoal_Request_> MoveBase_SendGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_SendGoal_Response_
            {
                ::DDS::Boolean accepted_;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_SendGoal_Response_> MoveBase_SendGoal_Response__var;
            typedef MoveBase_SendGoal_Response_& MoveBase_SendGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::move_base_msgs::action::dds_::MoveBase_SendGoal_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_MoveBase_SendGoal_Request_> Sample_MoveBase_SendGoal_Request__var;
            typedef DDS_DCPSStruct_out < Sample_MoveBase_SendGoal_Request_> Sample_MoveBase_SendGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_SendGoal_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::move_base_msgs::action::dds_::MoveBase_SendGoal_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_MoveBase_SendGoal_Response_> Sample_MoveBase_SendGoal_Response__var;
            typedef Sample_MoveBase_SendGoal_Response_& Sample_MoveBase_SendGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Result_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_Result_> MoveBase_Result__var;
            typedef MoveBase_Result_& MoveBase_Result__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_GetResult_Request_> MoveBase_GetResult_Request__var;
            typedef MoveBase_GetResult_Request_& MoveBase_GetResult_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_GetResult_Response_
            {
                ::DDS::Octet status_;
                ::move_base_msgs::action::dds_::MoveBase_Result_ result_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_GetResult_Response_> MoveBase_GetResult_Response__var;
            typedef MoveBase_GetResult_Response_& MoveBase_GetResult_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::move_base_msgs::action::dds_::MoveBase_GetResult_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_MoveBase_GetResult_Request_> Sample_MoveBase_GetResult_Request__var;
            typedef Sample_MoveBase_GetResult_Request_& Sample_MoveBase_GetResult_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs Sample_MoveBase_GetResult_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::move_base_msgs::action::dds_::MoveBase_GetResult_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_MoveBase_GetResult_Response_> Sample_MoveBase_GetResult_Response__var;
            typedef Sample_MoveBase_GetResult_Response_& Sample_MoveBase_GetResult_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_Feedback_
            {
                ::geometry_msgs::msg::dds_::PoseStamped_ base_position_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_Feedback_> MoveBase_Feedback__var;
            typedef DDS_DCPSStruct_out < MoveBase_Feedback_> MoveBase_Feedback__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_move_base_msgs MoveBase_FeedbackMessage_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::move_base_msgs::action::dds_::MoveBase_Feedback_ feedback_;
            };

            typedef DDS_DCPSStruct_var<MoveBase_FeedbackMessage_> MoveBase_FeedbackMessage__var;
            typedef DDS_DCPSStruct_out < MoveBase_FeedbackMessage_> MoveBase_FeedbackMessage__out;

        }

    }

}

#endif /* _H_8B1467AB990E1746624E6C55D35F9ED6_MoveBase__H_ */
