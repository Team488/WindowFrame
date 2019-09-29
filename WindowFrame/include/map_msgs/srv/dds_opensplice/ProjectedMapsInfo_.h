#ifndef _H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo__H_
#define _H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "map_msgs/msg/dds_opensplice/ProjectedMapInfo_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Request_
            {
                struct _projected_maps_info__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::map_msgs::msg::dds_::ProjectedMapInfo_, struct _projected_maps_info__seq_uniq_ > _projected_maps_info__seq;
                typedef DDS_DCPSSequence_var< _projected_maps_info__seq > _projected_maps_info__seq_var;
                typedef DDS_DCPSSequence_out< _projected_maps_info__seq > _projected_maps_info__seq_out;
                _projected_maps_info__seq projected_maps_info_;
            };

            typedef DDS_DCPSStruct_var<ProjectedMapsInfo_Request_> ProjectedMapsInfo_Request__var;
            typedef DDS_DCPSStruct_out < ProjectedMapsInfo_Request_> ProjectedMapsInfo_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<ProjectedMapsInfo_Response_> ProjectedMapsInfo_Response__var;
            typedef ProjectedMapsInfo_Response_& ProjectedMapsInfo_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::ProjectedMapsInfo_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_ProjectedMapsInfo_Request_> Sample_ProjectedMapsInfo_Request__var;
            typedef DDS_DCPSStruct_out < Sample_ProjectedMapsInfo_Request_> Sample_ProjectedMapsInfo_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::ProjectedMapsInfo_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_ProjectedMapsInfo_Response_> Sample_ProjectedMapsInfo_Response__var;
            typedef Sample_ProjectedMapsInfo_Response_& Sample_ProjectedMapsInfo_Response__out;

        }

    }

}

#endif /* _H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo__H_ */
