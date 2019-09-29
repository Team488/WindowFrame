#ifndef _H_4A85AAA31427E617F07DA9B0187E03CF_InertiaStamped__H_
#define _H_4A85AAA31427E617F07DA9B0187E03CF_InertiaStamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Inertia_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs InertiaStamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Inertia_ inertia_;
            };

            typedef DDS_DCPSStruct_var<InertiaStamped_> InertiaStamped__var;
            typedef DDS_DCPSStruct_out < InertiaStamped_> InertiaStamped__out;

        }

    }

}

#endif /* _H_4A85AAA31427E617F07DA9B0187E03CF_InertiaStamped__H_ */
