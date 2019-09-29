#ifndef _H_8317ECCC7A5102082FDCDD2745FC0450_Odometry__H_
#define _H_8317ECCC7A5102082FDCDD2745FC0450_Odometry__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/PoseWithCovariance_.h"
#include "geometry_msgs/msg/dds_opensplice/TwistWithCovariance_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Odometry_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::String_mgr child_frame_id_;
                ::geometry_msgs::msg::dds_::PoseWithCovariance_ pose_;
                ::geometry_msgs::msg::dds_::TwistWithCovariance_ twist_;
            };

            typedef DDS_DCPSStruct_var<Odometry_> Odometry__var;
            typedef DDS_DCPSStruct_out < Odometry_> Odometry__out;

        }

    }

}

#endif /* _H_8317ECCC7A5102082FDCDD2745FC0450_Odometry__H_ */
