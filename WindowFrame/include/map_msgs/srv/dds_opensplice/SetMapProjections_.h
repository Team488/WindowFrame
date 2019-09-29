#ifndef _H_120B83A90B7FD4FC7CB7F8D99153FF79_SetMapProjections__H_
#define _H_120B83A90B7FD4FC7CB7F8D99153FF79_SetMapProjections__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<SetMapProjections_Request_> SetMapProjections_Request__var;
            typedef SetMapProjections_Request_& SetMapProjections_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SetMapProjections_Response_
            {
                struct _projected_maps_info__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::map_msgs::msg::dds_::ProjectedMapInfo_, struct _projected_maps_info__seq_uniq_ > _projected_maps_info__seq;
                typedef DDS_DCPSSequence_var< _projected_maps_info__seq > _projected_maps_info__seq_var;
                typedef DDS_DCPSSequence_out< _projected_maps_info__seq > _projected_maps_info__seq_out;
                _projected_maps_info__seq projected_maps_info_;
            };

            typedef DDS_DCPSStruct_var<SetMapProjections_Response_> SetMapProjections_Response__var;
            typedef DDS_DCPSStruct_out < SetMapProjections_Response_> SetMapProjections_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::SetMapProjections_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetMapProjections_Request_> Sample_SetMapProjections_Request__var;
            typedef Sample_SetMapProjections_Request_& Sample_SetMapProjections_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SetMapProjections_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::SetMapProjections_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetMapProjections_Response_> Sample_SetMapProjections_Response__var;
            typedef DDS_DCPSStruct_out < Sample_SetMapProjections_Response_> Sample_SetMapProjections_Response__out;

        }

    }

}

#endif /* _H_120B83A90B7FD4FC7CB7F8D99153FF79_SetMapProjections__H_ */
