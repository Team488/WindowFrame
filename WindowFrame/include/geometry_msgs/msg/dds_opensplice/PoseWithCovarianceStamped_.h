#ifndef _H_8C72E83850D372008A7A79B198DDD981_PoseWithCovarianceStamped__H_
#define _H_8C72E83850D372008A7A79B198DDD981_PoseWithCovarianceStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/PoseWithCovariance_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseWithCovarianceStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::PoseWithCovariance_ pose_;
            };

            typedef DDS_DCPSStruct_var<PoseWithCovarianceStamped_> PoseWithCovarianceStamped__var;
            typedef DDS_DCPSStruct_out < PoseWithCovarianceStamped_> PoseWithCovarianceStamped__out;

        }

    }

}

#endif /* _H_8C72E83850D372008A7A79B198DDD981_PoseWithCovarianceStamped__H_ */
