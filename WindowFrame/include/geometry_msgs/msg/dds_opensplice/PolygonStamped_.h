#ifndef _H_24EFBE3A9829B203AA5E6570D805E5FC_PolygonStamped__H_
#define _H_24EFBE3A9829B203AA5E6570D805E5FC_PolygonStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Polygon_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PolygonStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Polygon_ polygon_;
            };

            typedef DDS_DCPSStruct_var<PolygonStamped_> PolygonStamped__var;
            typedef DDS_DCPSStruct_out < PolygonStamped_> PolygonStamped__out;

        }

    }

}

#endif /* _H_24EFBE3A9829B203AA5E6570D805E5FC_PolygonStamped__H_ */
