#ifndef _H_27EB0EEFBA9BDCE898F72153E595F2CF_DescribeParameters__H_
#define _H_27EB0EEFBA9BDCE898F72153E595F2CF_DescribeParameters__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterDescriptor_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces DescribeParameters_Request_
            {
                struct _names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _names__seq_uniq_ > _names__seq;
                typedef DDS_DCPSUStrSeq_var< _names__seq > _names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _names__seq > _names__seq_out;
                _names__seq names_;
            };

            typedef DDS_DCPSStruct_var<DescribeParameters_Request_> DescribeParameters_Request__var;
            typedef DDS_DCPSStruct_out < DescribeParameters_Request_> DescribeParameters_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces DescribeParameters_Response_
            {
                struct _descriptors__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::ParameterDescriptor_, struct _descriptors__seq_uniq_ > _descriptors__seq;
                typedef DDS_DCPSSequence_var< _descriptors__seq > _descriptors__seq_var;
                typedef DDS_DCPSSequence_out< _descriptors__seq > _descriptors__seq_out;
                _descriptors__seq descriptors_;
            };

            typedef DDS_DCPSStruct_var<DescribeParameters_Response_> DescribeParameters_Response__var;
            typedef DDS_DCPSStruct_out < DescribeParameters_Response_> DescribeParameters_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_DescribeParameters_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::DescribeParameters_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_DescribeParameters_Request_> Sample_DescribeParameters_Request__var;
            typedef DDS_DCPSStruct_out < Sample_DescribeParameters_Request_> Sample_DescribeParameters_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_DescribeParameters_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::DescribeParameters_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_DescribeParameters_Response_> Sample_DescribeParameters_Response__var;
            typedef DDS_DCPSStruct_out < Sample_DescribeParameters_Response_> Sample_DescribeParameters_Response__out;

        }

    }

}

#endif /* _H_27EB0EEFBA9BDCE898F72153E595F2CF_DescribeParameters__H_ */
