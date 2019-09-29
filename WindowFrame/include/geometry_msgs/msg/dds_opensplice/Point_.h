#ifndef _H_860E3EC91D03F9F4C2A100D7C797FBE9_Point__H_
#define _H_860E3EC91D03F9F4C2A100D7C797FBE9_Point__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Point_
            {
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double z_;
            };

            typedef DDS_DCPSStruct_var<Point_> Point__var;
            typedef Point_& Point__out;

        }

    }

}

#endif /* _H_860E3EC91D03F9F4C2A100D7C797FBE9_Point__H_ */
