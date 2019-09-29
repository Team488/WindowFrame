#ifndef _H_1934D82CD6CC72861B53A9F73A34FEC8_GetState__H_
#define _H_1934D82CD6CC72861B53A9F73A34FEC8_GetState__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "lifecycle_msgs/msg/dds_opensplice/State_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace lifecycle_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<GetState_Request_> GetState_Request__var;
            typedef GetState_Request_& GetState_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetState_Response_
            {
                ::lifecycle_msgs::msg::dds_::State_ current_state_;
            };

            typedef DDS_DCPSStruct_var<GetState_Response_> GetState_Response__var;
            typedef DDS_DCPSStruct_out < GetState_Response_> GetState_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetState_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::GetState_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetState_Request_> Sample_GetState_Request__var;
            typedef Sample_GetState_Request_& Sample_GetState_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetState_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::GetState_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetState_Response_> Sample_GetState_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetState_Response_> Sample_GetState_Response__out;

        }

    }

}

#endif /* _H_1934D82CD6CC72861B53A9F73A34FEC8_GetState__H_ */
