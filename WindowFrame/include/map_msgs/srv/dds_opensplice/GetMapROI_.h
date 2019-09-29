#ifndef _H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI__H_
#define _H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Request_
            {
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double l_x_;
                ::DDS::Double l_y_;
            };

            typedef DDS_DCPSStruct_var<GetMapROI_Request_> GetMapROI_Request__var;
            typedef GetMapROI_Request_& GetMapROI_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Response_
            {
                ::nav_msgs::msg::dds_::OccupancyGrid_ sub_map_;
            };

            typedef DDS_DCPSStruct_var<GetMapROI_Response_> GetMapROI_Response__var;
            typedef DDS_DCPSStruct_out < GetMapROI_Response_> GetMapROI_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::GetMapROI_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetMapROI_Request_> Sample_GetMapROI_Request__var;
            typedef Sample_GetMapROI_Request_& Sample_GetMapROI_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::GetMapROI_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetMapROI_Response_> Sample_GetMapROI_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetMapROI_Response_> Sample_GetMapROI_Response__out;

        }

    }

}

#endif /* _H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI__H_ */
