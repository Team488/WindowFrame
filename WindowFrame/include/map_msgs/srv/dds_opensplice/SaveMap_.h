#ifndef _H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap__H_
#define _H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/String_.h"
#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Request_
            {
                ::std_msgs::msg::dds_::String_ filename_;
            };

            typedef DDS_DCPSStruct_var<SaveMap_Request_> SaveMap_Request__var;
            typedef DDS_DCPSStruct_out < SaveMap_Request_> SaveMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs SaveMap_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<SaveMap_Response_> SaveMap_Response__var;
            typedef SaveMap_Response_& SaveMap_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::SaveMap_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SaveMap_Request_> Sample_SaveMap_Request__var;
            typedef DDS_DCPSStruct_out < Sample_SaveMap_Request_> Sample_SaveMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_SaveMap_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::map_msgs::srv::dds_::SaveMap_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SaveMap_Response_> Sample_SaveMap_Response__var;
            typedef Sample_SaveMap_Response_& Sample_SaveMap_Response__out;

        }

    }

}

#endif /* _H_7D95A8D88A38B20BE1F93CE4D627337F_SaveMap__H_ */
