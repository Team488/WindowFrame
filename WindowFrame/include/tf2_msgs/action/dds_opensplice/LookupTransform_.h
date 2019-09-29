#ifndef _H_1A82234E783515488AF550FDF75BE8C1_LookupTransform__H_
#define _H_1A82234E783515488AF550FDF75BE8C1_LookupTransform__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_.h"
#include "geometry_msgs/msg/dds_opensplice/TransformStamped_.h"
#include "tf2_msgs/msg/dds_opensplice/TF2Error_.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace tf2_msgs
{
    namespace action
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Goal_
            {
                ::DDS::String_mgr target_frame_;
                ::DDS::String_mgr source_frame_;
                ::builtin_interfaces::msg::dds_::Time_ source_time_;
                ::builtin_interfaces::msg::dds_::Duration_ timeout_;
                ::builtin_interfaces::msg::dds_::Time_ target_time_;
                ::DDS::String_mgr fixed_frame_;
                ::DDS::Boolean advanced_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_Goal_> LookupTransform_Goal__var;
            typedef DDS_DCPSStruct_out < LookupTransform_Goal_> LookupTransform_Goal__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::tf2_msgs::action::dds_::LookupTransform_Goal_ goal_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_SendGoal_Request_> LookupTransform_SendGoal_Request__var;
            typedef DDS_DCPSStruct_out < LookupTransform_SendGoal_Request_> LookupTransform_SendGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_SendGoal_Response_
            {
                ::DDS::Boolean accepted_;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_SendGoal_Response_> LookupTransform_SendGoal_Response__var;
            typedef LookupTransform_SendGoal_Response_& LookupTransform_SendGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_LookupTransform_SendGoal_Request_> Sample_LookupTransform_SendGoal_Request__var;
            typedef DDS_DCPSStruct_out < Sample_LookupTransform_SendGoal_Request_> Sample_LookupTransform_SendGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_SendGoal_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_LookupTransform_SendGoal_Response_> Sample_LookupTransform_SendGoal_Response__var;
            typedef Sample_LookupTransform_SendGoal_Response_& Sample_LookupTransform_SendGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Result_
            {
                ::geometry_msgs::msg::dds_::TransformStamped_ transform_;
                ::tf2_msgs::msg::dds_::TF2Error_ error_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_Result_> LookupTransform_Result__var;
            typedef DDS_DCPSStruct_out < LookupTransform_Result_> LookupTransform_Result__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_GetResult_Request_> LookupTransform_GetResult_Request__var;
            typedef LookupTransform_GetResult_Request_& LookupTransform_GetResult_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_GetResult_Response_
            {
                ::DDS::Octet status_;
                ::tf2_msgs::action::dds_::LookupTransform_Result_ result_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_GetResult_Response_> LookupTransform_GetResult_Response__var;
            typedef DDS_DCPSStruct_out < LookupTransform_GetResult_Response_> LookupTransform_GetResult_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::tf2_msgs::action::dds_::LookupTransform_GetResult_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_LookupTransform_GetResult_Request_> Sample_LookupTransform_GetResult_Request__var;
            typedef Sample_LookupTransform_GetResult_Request_& Sample_LookupTransform_GetResult_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_LookupTransform_GetResult_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::tf2_msgs::action::dds_::LookupTransform_GetResult_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_LookupTransform_GetResult_Response_> Sample_LookupTransform_GetResult_Response__var;
            typedef DDS_DCPSStruct_out < Sample_LookupTransform_GetResult_Response_> Sample_LookupTransform_GetResult_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_Feedback_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_Feedback_> LookupTransform_Feedback__var;
            typedef LookupTransform_Feedback_& LookupTransform_Feedback__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs LookupTransform_FeedbackMessage_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::tf2_msgs::action::dds_::LookupTransform_Feedback_ feedback_;
            };

            typedef DDS_DCPSStruct_var<LookupTransform_FeedbackMessage_> LookupTransform_FeedbackMessage__var;
            typedef LookupTransform_FeedbackMessage_& LookupTransform_FeedbackMessage__out;

        }

    }

}

#endif /* _H_1A82234E783515488AF550FDF75BE8C1_LookupTransform__H_ */
