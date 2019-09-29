#ifndef _H_91C4C85E0A888E2015DDB9F9725DC26F_InteractiveMarkerFeedback__H_
#define _H_91C4C85E0A888E2015DDB9F9725DC26F_InteractiveMarkerFeedback__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace InteractiveMarkerFeedback_Constants
            {
                const ::DDS::Octet KEEP_ALIVE_ = 0;

                const ::DDS::Octet POSE_UPDATE_ = 1;

                const ::DDS::Octet MENU_SELECT_ = 2;

                const ::DDS::Octet BUTTON_CLICK_ = 3;

                const ::DDS::Octet MOUSE_DOWN_ = 4;

                const ::DDS::Octet MOUSE_UP_ = 5;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerFeedback_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::String_mgr client_id_;
                ::DDS::String_mgr marker_name_;
                ::DDS::String_mgr control_name_;
                ::DDS::Octet event_type_;
                ::geometry_msgs::msg::dds_::Pose_ pose_;
                ::DDS::ULong menu_entry_id_;
                ::geometry_msgs::msg::dds_::Point_ mouse_point_;
                ::DDS::Boolean mouse_point_valid_;
            };

            typedef DDS_DCPSStruct_var<InteractiveMarkerFeedback_> InteractiveMarkerFeedback__var;
            typedef DDS_DCPSStruct_out < InteractiveMarkerFeedback_> InteractiveMarkerFeedback__out;

        }

    }

}

#endif /* _H_91C4C85E0A888E2015DDB9F9725DC26F_InteractiveMarkerFeedback__H_ */
