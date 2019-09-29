#ifndef _H_746A248CF39681BE3E673689AE36D567_Wrench__H_
#define _H_746A248CF39681BE3E673689AE36D567_Wrench__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Wrench_
            {
                ::geometry_msgs::msg::dds_::Vector3_ force_;
                ::geometry_msgs::msg::dds_::Vector3_ torque_;
            };

            typedef DDS_DCPSStruct_var<Wrench_> Wrench__var;
            typedef Wrench_& Wrench__out;

        }

    }

}

#endif /* _H_746A248CF39681BE3E673689AE36D567_Wrench__H_ */
