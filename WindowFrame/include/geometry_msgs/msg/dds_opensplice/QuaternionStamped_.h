#ifndef _H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped__H_
#define _H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs QuaternionStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Quaternion_ quaternion_;
            };

            typedef DDS_DCPSStruct_var<QuaternionStamped_> QuaternionStamped__var;
            typedef DDS_DCPSStruct_out < QuaternionStamped_> QuaternionStamped__out;

        }

    }

}

#endif /* _H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped__H_ */
