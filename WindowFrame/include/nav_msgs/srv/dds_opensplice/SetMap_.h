#ifndef _H_2F26C42C00856A250CE39B527D40DEB4_SetMap__H_
#define _H_2F26C42C00856A250CE39B527D40DEB4_SetMap__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "nav_msgs/msg/dds_opensplice/OccupancyGrid_.h"
#include "geometry_msgs/msg/dds_opensplice/PoseWithCovarianceStamped_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Request_
            {
                ::nav_msgs::msg::dds_::OccupancyGrid_ map_;
                ::geometry_msgs::msg::dds_::PoseWithCovarianceStamped_ initial_pose_;
            };

            typedef DDS_DCPSStruct_var<SetMap_Request_> SetMap_Request__var;
            typedef DDS_DCPSStruct_out < SetMap_Request_> SetMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs SetMap_Response_
            {
                ::DDS::Boolean success_;
            };

            typedef DDS_DCPSStruct_var<SetMap_Response_> SetMap_Response__var;
            typedef SetMap_Response_& SetMap_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::nav_msgs::srv::dds_::SetMap_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetMap_Request_> Sample_SetMap_Request__var;
            typedef DDS_DCPSStruct_out < Sample_SetMap_Request_> Sample_SetMap_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_SetMap_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::nav_msgs::srv::dds_::SetMap_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetMap_Response_> Sample_SetMap_Response__var;
            typedef Sample_SetMap_Response_& Sample_SetMap_Response__out;

        }

    }

}

#endif /* _H_2F26C42C00856A250CE39B527D40DEB4_SetMap__H_ */
