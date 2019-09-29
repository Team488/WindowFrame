#ifndef _H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph__H_
#define _H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace tf2_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<FrameGraph_Request_> FrameGraph_Request__var;
            typedef FrameGraph_Request_& FrameGraph_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs FrameGraph_Response_
            {
                ::DDS::String_mgr frame_yaml_;
            };

            typedef DDS_DCPSStruct_var<FrameGraph_Response_> FrameGraph_Response__var;
            typedef DDS_DCPSStruct_out < FrameGraph_Response_> FrameGraph_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::tf2_msgs::srv::dds_::FrameGraph_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_FrameGraph_Request_> Sample_FrameGraph_Request__var;
            typedef Sample_FrameGraph_Request_& Sample_FrameGraph_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs Sample_FrameGraph_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::tf2_msgs::srv::dds_::FrameGraph_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_FrameGraph_Response_> Sample_FrameGraph_Response__var;
            typedef DDS_DCPSStruct_out < Sample_FrameGraph_Response_> Sample_FrameGraph_Response__out;

        }

    }

}

#endif /* _H_B90563D1B074A0158EC766522F5A9CF4_FrameGraph__H_ */
