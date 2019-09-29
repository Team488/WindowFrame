#ifndef _H_7EF71F294292B744F81EBEA34B72E592_NestedMessage__H_
#define _H_7EF71F294292B744F81EBEA34B72E592_NestedMessage__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/dds_opensplice/Builtins_.h"
#include "test_msgs/msg/dds_opensplice/BasicTypes_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace action
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Goal_
            {
                ::test_msgs::msg::dds_::Builtins_ nested_field_no_pkg_;
                ::test_msgs::msg::dds_::BasicTypes_ nested_field_;
                ::builtin_interfaces::msg::dds_::Time_ nested_different_pkg_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_Goal_> NestedMessage_Goal__var;
            typedef NestedMessage_Goal_& NestedMessage_Goal__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::test_msgs::action::dds_::NestedMessage_Goal_ goal_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_SendGoal_Request_> NestedMessage_SendGoal_Request__var;
            typedef NestedMessage_SendGoal_Request_& NestedMessage_SendGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_SendGoal_Response_
            {
                ::DDS::Boolean accepted_;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_SendGoal_Response_> NestedMessage_SendGoal_Response__var;
            typedef NestedMessage_SendGoal_Response_& NestedMessage_SendGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::action::dds_::NestedMessage_SendGoal_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_NestedMessage_SendGoal_Request_> Sample_NestedMessage_SendGoal_Request__var;
            typedef Sample_NestedMessage_SendGoal_Request_& Sample_NestedMessage_SendGoal_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_SendGoal_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::action::dds_::NestedMessage_SendGoal_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_NestedMessage_SendGoal_Response_> Sample_NestedMessage_SendGoal_Response__var;
            typedef Sample_NestedMessage_SendGoal_Response_& Sample_NestedMessage_SendGoal_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Result_
            {
                ::test_msgs::msg::dds_::Builtins_ nested_field_no_pkg_;
                ::test_msgs::msg::dds_::BasicTypes_ nested_field_;
                ::builtin_interfaces::msg::dds_::Time_ nested_different_pkg_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_Result_> NestedMessage_Result__var;
            typedef NestedMessage_Result_& NestedMessage_Result__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Request_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_GetResult_Request_> NestedMessage_GetResult_Request__var;
            typedef NestedMessage_GetResult_Request_& NestedMessage_GetResult_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_GetResult_Response_
            {
                ::DDS::Octet status_;
                ::test_msgs::action::dds_::NestedMessage_Result_ result_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_GetResult_Response_> NestedMessage_GetResult_Response__var;
            typedef NestedMessage_GetResult_Response_& NestedMessage_GetResult_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::action::dds_::NestedMessage_GetResult_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_NestedMessage_GetResult_Request_> Sample_NestedMessage_GetResult_Request__var;
            typedef Sample_NestedMessage_GetResult_Request_& Sample_NestedMessage_GetResult_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_NestedMessage_GetResult_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::action::dds_::NestedMessage_GetResult_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_NestedMessage_GetResult_Response_> Sample_NestedMessage_GetResult_Response__var;
            typedef Sample_NestedMessage_GetResult_Response_& Sample_NestedMessage_GetResult_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_Feedback_
            {
                ::test_msgs::msg::dds_::Builtins_ nested_field_no_pkg_;
                ::test_msgs::msg::dds_::BasicTypes_ nested_field_;
                ::builtin_interfaces::msg::dds_::Time_ nested_different_pkg_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_Feedback_> NestedMessage_Feedback__var;
            typedef NestedMessage_Feedback_& NestedMessage_Feedback__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs NestedMessage_FeedbackMessage_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::test_msgs::action::dds_::NestedMessage_Feedback_ feedback_;
            };

            typedef DDS_DCPSStruct_var<NestedMessage_FeedbackMessage_> NestedMessage_FeedbackMessage__var;
            typedef NestedMessage_FeedbackMessage_& NestedMessage_FeedbackMessage__out;

        }

    }

}

#endif /* _H_7EF71F294292B744F81EBEA34B72E592_NestedMessage__H_ */
