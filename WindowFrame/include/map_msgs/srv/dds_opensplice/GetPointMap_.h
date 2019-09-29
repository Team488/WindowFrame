#ifndef _H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap__H_
#define _H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/dds_opensplice/PointCloud2_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<GetPointMap_Request_> GetPointMap_Request__var;
            typedef GetPointMap_Request_& GetPointMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Response_
            {
                ::sensor_msgs::msg::dds_::PointCloud2_ map_;
            };

            typedef DDS_DCPSStruct_var<GetPointMap_Response_> GetPointMap_Response__var;
            typedef DDS_DCPSStruct_out < GetPointMap_Response_> GetPointMap_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::GetPointMap_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetPointMap_Request_> Sample_GetPointMap_Request__var;
            typedef Sample_GetPointMap_Request_& Sample_GetPointMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::GetPointMap_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetPointMap_Response_> Sample_GetPointMap_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetPointMap_Response_> Sample_GetPointMap_Response__out;

        }

    }

}

#endif /* _H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap__H_ */
