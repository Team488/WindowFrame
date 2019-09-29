#ifndef _H_60A2B38F4647F87B360713BB0CC4CA7C_Vector3Stamped__H_
#define _H_60A2B38F4647F87B360713BB0CC4CA7C_Vector3Stamped__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3Stamped_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Vector3_ vector_;
            };

            typedef DDS_DCPSStruct_var<Vector3Stamped_> Vector3Stamped__var;
            typedef DDS_DCPSStruct_out < Vector3Stamped_> Vector3Stamped__out;

        }

    }

}

#endif /* _H_60A2B38F4647F87B360713BB0CC4CA7C_Vector3Stamped__H_ */
