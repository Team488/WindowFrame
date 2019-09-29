#ifndef _H_A66E66CBCA3E91F1FA7C34FA3F60F4CC_PointStamped__H_
#define _H_A66E66CBCA3E91F1FA7C34FA3F60F4CC_PointStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PointStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Point_ point_;
            };

            typedef DDS_DCPSStruct_var<PointStamped_> PointStamped__var;
            typedef DDS_DCPSStruct_out < PointStamped_> PointStamped__out;

        }

    }

}

#endif /* _H_A66E66CBCA3E91F1FA7C34FA3F60F4CC_PointStamped__H_ */
