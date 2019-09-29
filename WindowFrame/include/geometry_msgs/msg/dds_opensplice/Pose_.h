#ifndef _H_A454484F7BD48F9C6F23E22603B4C099_Pose__H_
#define _H_A454484F7BD48F9C6F23E22603B4C099_Pose__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Pose_
            {
                ::geometry_msgs::msg::dds_::Point_ position_;
                ::geometry_msgs::msg::dds_::Quaternion_ orientation_;
            };

            typedef DDS_DCPSStruct_var<Pose_> Pose__var;
            typedef Pose_& Pose__out;

        }

    }

}

#endif /* _H_A454484F7BD48F9C6F23E22603B4C099_Pose__H_ */
