#ifndef _H_850FE1700AEFDDDB32504357F7BC6210_Transform__H_
#define _H_850FE1700AEFDDDB32504357F7BC6210_Transform__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Transform_
            {
                ::geometry_msgs::msg::dds_::Vector3_ translation_;
                ::geometry_msgs::msg::dds_::Quaternion_ rotation_;
            };

            typedef DDS_DCPSStruct_var<Transform_> Transform__var;
            typedef Transform_& Transform__out;

        }

    }

}

#endif /* _H_850FE1700AEFDDDB32504357F7BC6210_Transform__H_ */
