#ifndef _H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest__H_
#define _H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "diagnostic_msgs/msg/dds_opensplice/DiagnosticStatus_.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace diagnostic_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<SelfTest_Request_> SelfTest_Request__var;
            typedef SelfTest_Request_& SelfTest_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Response_
            {
                struct _status__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::diagnostic_msgs::msg::dds_::DiagnosticStatus_, struct _status__seq_uniq_ > _status__seq;
                typedef DDS_DCPSSequence_var< _status__seq > _status__seq_var;
                typedef DDS_DCPSSequence_out< _status__seq > _status__seq_out;
                ::DDS::String_mgr id_;
                ::DDS::Octet passed_;
                _status__seq status_;
            };

            typedef DDS_DCPSStruct_var<SelfTest_Response_> SelfTest_Response__var;
            typedef DDS_DCPSStruct_out < SelfTest_Response_> SelfTest_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::diagnostic_msgs::srv::dds_::SelfTest_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SelfTest_Request_> Sample_SelfTest_Request__var;
            typedef Sample_SelfTest_Request_& Sample_SelfTest_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::diagnostic_msgs::srv::dds_::SelfTest_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SelfTest_Response_> Sample_SelfTest_Response__var;
            typedef DDS_DCPSStruct_out < Sample_SelfTest_Response_> Sample_SelfTest_Response__out;

        }

    }

}

#endif /* _H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest__H_ */
