#ifndef _H_0E7D02C250CD2E7D473AF8ECD96DC404_TwistStamped__H_
#define _H_0E7D02C250CD2E7D473AF8ECD96DC404_TwistStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Twist_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs TwistStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Twist_ twist_;
            };

            typedef DDS_DCPSStruct_var<TwistStamped_> TwistStamped__var;
            typedef DDS_DCPSStruct_out < TwistStamped_> TwistStamped__out;

        }

    }

}

#endif /* _H_0E7D02C250CD2E7D473AF8ECD96DC404_TwistStamped__H_ */
