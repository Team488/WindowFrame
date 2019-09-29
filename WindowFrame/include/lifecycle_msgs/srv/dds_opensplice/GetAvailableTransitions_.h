#ifndef _H_5A338E42E3EF6DAC7E121E23C912D2CC_GetAvailableTransitions__H_
#define _H_5A338E42E3EF6DAC7E121E23C912D2CC_GetAvailableTransitions__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "lifecycle_msgs/msg/dds_opensplice/TransitionDescription_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace lifecycle_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<GetAvailableTransitions_Request_> GetAvailableTransitions_Request__var;
            typedef GetAvailableTransitions_Request_& GetAvailableTransitions_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Response_
            {
                struct _available_transitions__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::lifecycle_msgs::msg::dds_::TransitionDescription_, struct _available_transitions__seq_uniq_ > _available_transitions__seq;
                typedef DDS_DCPSSequence_var< _available_transitions__seq > _available_transitions__seq_var;
                typedef DDS_DCPSSequence_out< _available_transitions__seq > _available_transitions__seq_out;
                _available_transitions__seq available_transitions_;
            };

            typedef DDS_DCPSStruct_var<GetAvailableTransitions_Response_> GetAvailableTransitions_Response__var;
            typedef DDS_DCPSStruct_out < GetAvailableTransitions_Response_> GetAvailableTransitions_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::GetAvailableTransitions_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetAvailableTransitions_Request_> Sample_GetAvailableTransitions_Request__var;
            typedef Sample_GetAvailableTransitions_Request_& Sample_GetAvailableTransitions_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::lifecycle_msgs::srv::dds_::GetAvailableTransitions_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetAvailableTransitions_Response_> Sample_GetAvailableTransitions_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetAvailableTransitions_Response_> Sample_GetAvailableTransitions_Response__out;

        }

    }

}

#endif /* _H_5A338E42E3EF6DAC7E121E23C912D2CC_GetAvailableTransitions__H_ */
