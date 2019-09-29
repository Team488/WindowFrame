#ifndef _H_B3DBF3E6380AABA854F119B301DDDF82_ListParameters__H_
#define _H_B3DBF3E6380AABA854F119B301DDDF82_ListParameters__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ListParametersResult_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            namespace ListParameters_Request_Constants
            {
                const ::DDS::ULongLong DEPTH_RECURSIVE_ = 0ULL;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces ListParameters_Request_
            {
                struct _prefixes__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _prefixes__seq_uniq_ > _prefixes__seq;
                typedef DDS_DCPSUStrSeq_var< _prefixes__seq > _prefixes__seq_var;
                typedef DDS_DCPSUStrSeq_out< _prefixes__seq > _prefixes__seq_out;
                _prefixes__seq prefixes_;
                ::DDS::ULongLong depth_;
            };

            typedef DDS_DCPSStruct_var<ListParameters_Request_> ListParameters_Request__var;
            typedef DDS_DCPSStruct_out < ListParameters_Request_> ListParameters_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces ListParameters_Response_
            {
                ::rcl_interfaces::msg::dds_::ListParametersResult_ result_;
            };

            typedef DDS_DCPSStruct_var<ListParameters_Response_> ListParameters_Response__var;
            typedef DDS_DCPSStruct_out < ListParameters_Response_> ListParameters_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_ListParameters_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::ListParameters_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_ListParameters_Request_> Sample_ListParameters_Request__var;
            typedef DDS_DCPSStruct_out < Sample_ListParameters_Request_> Sample_ListParameters_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Sample_ListParameters_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::ListParameters_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_ListParameters_Response_> Sample_ListParameters_Response__var;
            typedef DDS_DCPSStruct_out < Sample_ListParameters_Response_> Sample_ListParameters_Response__out;

        }

    }

}

#endif /* _H_B3DBF3E6380AABA854F119B301DDDF82_ListParameters__H_ */
