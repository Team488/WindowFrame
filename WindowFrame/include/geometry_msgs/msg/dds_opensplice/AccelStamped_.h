#ifndef _H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped__H_
#define _H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Accel_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs AccelStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Accel_ accel_;
            };

            typedef DDS_DCPSStruct_var<AccelStamped_> AccelStamped__var;
            typedef DDS_DCPSStruct_out < AccelStamped_> AccelStamped__out;

        }

    }

}

#endif /* _H_3AE35C965E65747D1D350F8ED4B5E684_AccelStamped__H_ */
