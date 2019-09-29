#ifndef _H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap__H_
#define _H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<GetMap_Request_> GetMap_Request__var;
            typedef GetMap_Request_& GetMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Response_
            {
                ::nav_msgs::msg::dds_::OccupancyGrid_ map_;
            };

            typedef DDS_DCPSStruct_var<GetMap_Response_> GetMap_Response__var;
            typedef DDS_DCPSStruct_out < GetMap_Response_> GetMap_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::nav_msgs::srv::dds_::GetMap_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetMap_Request_> Sample_GetMap_Request__var;
            typedef Sample_GetMap_Request_& Sample_GetMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::nav_msgs::srv::dds_::GetMap_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetMap_Response_> Sample_GetMap_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetMap_Response_> Sample_GetMap_Response__out;

        }

    }

}

#endif /* _H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap__H_ */
