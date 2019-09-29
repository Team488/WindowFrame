#ifndef _H_9F13AF5E2CABA34C6E5985A069A1BD9C_InteractiveMarkerPose__H_
#define _H_9F13AF5E2CABA34C6E5985A069A1BD9C_InteractiveMarkerPose__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerPose_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Pose_ pose_;
                ::DDS::String_mgr name_;
            };

            typedef DDS_DCPSStruct_var<InteractiveMarkerPose_> InteractiveMarkerPose__var;
            typedef DDS_DCPSStruct_out < InteractiveMarkerPose_> InteractiveMarkerPose__out;

        }

    }

}

#endif /* _H_9F13AF5E2CABA34C6E5985A069A1BD9C_InteractiveMarkerPose__H_ */
