#ifndef _H_33BF45D3A8CCB68B5028E0C7F8594761_WrenchStamped__H_
#define _H_33BF45D3A8CCB68B5028E0C7F8594761_WrenchStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Wrench_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs WrenchStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Wrench_ wrench_;
            };

            typedef DDS_DCPSStruct_var<WrenchStamped_> WrenchStamped__var;
            typedef DDS_DCPSStruct_out < WrenchStamped_> WrenchStamped__out;

        }

    }

}

#endif /* _H_33BF45D3A8CCB68B5028E0C7F8594761_WrenchStamped__H_ */
