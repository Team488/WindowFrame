#ifndef _H_634E43C0B307F8B009E576E5C45AB17A_GetInteractiveMarkers__H_
#define _H_634E43C0B307F8B009E576E5C45AB17A_GetInteractiveMarkers__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarker_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<GetInteractiveMarkers_Request_> GetInteractiveMarkers_Request__var;
            typedef GetInteractiveMarkers_Request_& GetInteractiveMarkers_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Response_
            {
                struct _markers__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::InteractiveMarker_, struct _markers__seq_uniq_ > _markers__seq;
                typedef DDS_DCPSSequence_var< _markers__seq > _markers__seq_var;
                typedef DDS_DCPSSequence_out< _markers__seq > _markers__seq_out;
                ::DDS::ULongLong sequence_number_;
                _markers__seq markers_;
            };

            typedef DDS_DCPSStruct_var<GetInteractiveMarkers_Response_> GetInteractiveMarkers_Response__var;
            typedef DDS_DCPSStruct_out < GetInteractiveMarkers_Response_> GetInteractiveMarkers_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::visualization_msgs::srv::dds_::GetInteractiveMarkers_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetInteractiveMarkers_Request_> Sample_GetInteractiveMarkers_Request__var;
            typedef Sample_GetInteractiveMarkers_Request_& Sample_GetInteractiveMarkers_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::visualization_msgs::srv::dds_::GetInteractiveMarkers_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetInteractiveMarkers_Response_> Sample_GetInteractiveMarkers_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetInteractiveMarkers_Response_> Sample_GetInteractiveMarkers_Response__out;

        }

    }

}

#endif /* _H_634E43C0B307F8B009E576E5C45AB17A_GetInteractiveMarkers__H_ */
