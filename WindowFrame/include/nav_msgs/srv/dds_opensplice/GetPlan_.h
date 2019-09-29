#ifndef _H_85C4AC20818E6886625885E47ED9E4EC_GetPlan__H_
#define _H_85C4AC20818E6886625885E47ED9E4EC_GetPlan__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/PoseStamped_.h"
#include "nav_msgs/msg/dds_opensplice/Path_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Request_
            {
                ::geometry_msgs::msg::dds_::PoseStamped_ start_;
                ::geometry_msgs::msg::dds_::PoseStamped_ goal_;
                ::DDS::Float tolerance_;
            };

            typedef DDS_DCPSStruct_var<GetPlan_Request_> GetPlan_Request__var;
            typedef DDS_DCPSStruct_out < GetPlan_Request_> GetPlan_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetPlan_Response_
            {
                ::nav_msgs::msg::dds_::Path_ plan_;
            };

            typedef DDS_DCPSStruct_var<GetPlan_Response_> GetPlan_Response__var;
            typedef DDS_DCPSStruct_out < GetPlan_Response_> GetPlan_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::nav_msgs::srv::dds_::GetPlan_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetPlan_Request_> Sample_GetPlan_Request__var;
            typedef DDS_DCPSStruct_out < Sample_GetPlan_Request_> Sample_GetPlan_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetPlan_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::nav_msgs::srv::dds_::GetPlan_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetPlan_Response_> Sample_GetPlan_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetPlan_Response_> Sample_GetPlan_Response__out;

        }

    }

}

#endif /* _H_85C4AC20818E6886625885E47ED9E4EC_GetPlan__H_ */
