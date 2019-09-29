#ifndef _H_6F687459009DC19C82231C22553242E8_Point32__H_
#define _H_6F687459009DC19C82231C22553242E8_Point32__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Point32_
            {
                ::DDS::Float x_;
                ::DDS::Float y_;
                ::DDS::Float z_;
            };

            typedef DDS_DCPSStruct_var<Point32_> Point32__var;
            typedef Point32_& Point32__out;

        }

    }

}

#endif /* _H_6F687459009DC19C82231C22553242E8_Point32__H_ */
