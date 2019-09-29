#ifndef _H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI__H_
#define _H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Request_
            {
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double z_;
                ::DDS::Double r_;
                ::DDS::Double l_x_;
                ::DDS::Double l_y_;
                ::DDS::Double l_z_;
            };

            typedef DDS_DCPSStruct_var<GetPointMapROI_Request_> GetPointMapROI_Request__var;
            typedef GetPointMapROI_Request_& GetPointMapROI_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Response_
            {
                ::sensor_msgs::msg::dds_::PointCloud2_ sub_map_;
            };

            typedef DDS_DCPSStruct_var<GetPointMapROI_Response_> GetPointMapROI_Response__var;
            typedef DDS_DCPSStruct_out < GetPointMapROI_Response_> GetPointMapROI_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::GetPointMapROI_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetPointMapROI_Request_> Sample_GetPointMapROI_Request__var;
            typedef Sample_GetPointMapROI_Request_& Sample_GetPointMapROI_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::GetPointMapROI_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetPointMapROI_Response_> Sample_GetPointMapROI_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetPointMapROI_Response_> Sample_GetPointMapROI_Response__out;

        }

    }

}

#endif /* _H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI__H_ */
