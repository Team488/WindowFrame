#ifndef _H_CB0DB276A51B1505AEB20CB65E1865A4_GetAvailableStates__H_
#define _H_CB0DB276A51B1505AEB20CB65E1865A4_GetAvailableStates__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<GetAvailableStates_Request_> GetAvailableStates_Request__var;
            typedef GetAvailableStates_Request_& GetAvailableStates_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Response_
            {
                struct _available_states__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::lifecycle_msgs::msg::dds_::State_, struct _available_states__seq_uniq_ > _available_states__seq;
                typedef DDS_DCPSSequence_var< _available_states__seq > _available_states__seq_var;
                typedef DDS_DCPSSequence_out< _available_states__seq > _available_states__seq_out;
                _available_states__seq available_states_;
            };

            typedef DDS_DCPSStruct_var<GetAvailableStates_Response_> GetAvailableStates_Response__var;
            typedef DDS_DCPSStruct_out < GetAvailableStates_Response_> GetAvailableStates_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::GetAvailableStates_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetAvailableStates_Request_> Sample_GetAvailableStates_Request__var;
            typedef Sample_GetAvailableStates_Request_& Sample_GetAvailableStates_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::GetAvailableStates_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetAvailableStates_Response_> Sample_GetAvailableStates_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetAvailableStates_Response_> Sample_GetAvailableStates_Response__out;

        }

    }

}

#endif /* _H_CB0DB276A51B1505AEB20CB65E1865A4_GetAvailableStates__H_ */
