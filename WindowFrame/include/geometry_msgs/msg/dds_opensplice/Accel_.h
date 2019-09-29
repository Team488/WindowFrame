#ifndef _H_8D7DAC7D41555F451208BD3346FE5E15_Accel__H_
#define _H_8D7DAC7D41555F451208BD3346FE5E15_Accel__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Accel_
            {
                ::geometry_msgs::msg::dds_::Vector3_ linear_;
                ::geometry_msgs::msg::dds_::Vector3_ angular_;
            };

            typedef DDS_DCPSStruct_var<Accel_> Accel__var;
            typedef Accel_& Accel__out;

        }

    }

}

#endif /* _H_8D7DAC7D41555F451208BD3346FE5E15_Accel__H_ */
