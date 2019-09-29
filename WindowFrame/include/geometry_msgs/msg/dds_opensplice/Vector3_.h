#ifndef _H_6966415037E76325F3CB8514F9D3A909_Vector3__H_
#define _H_6966415037E76325F3CB8514F9D3A909_Vector3__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3_
            {
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double z_;
            };

            typedef DDS_DCPSStruct_var<Vector3_> Vector3__var;
            typedef Vector3_& Vector3__out;

        }

    }

}

#endif /* _H_6966415037E76325F3CB8514F9D3A909_Vector3__H_ */
