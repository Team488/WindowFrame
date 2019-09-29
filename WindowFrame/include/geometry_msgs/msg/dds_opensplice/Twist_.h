#ifndef _H_50B1AF47ACC8768EB017490713221F39_Twist__H_
#define _H_50B1AF47ACC8768EB017490713221F39_Twist__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Twist_
            {
                ::geometry_msgs::msg::dds_::Vector3_ linear_;
                ::geometry_msgs::msg::dds_::Vector3_ angular_;
            };

            typedef DDS_DCPSStruct_var<Twist_> Twist__var;
            typedef Twist_& Twist__out;

        }

    }

}

#endif /* _H_50B1AF47ACC8768EB017490713221F39_Twist__H_ */
