#ifndef _H_8DF7A4A8A31858074C9A497C4AE05C98_Quaternion__H_
#define _H_8DF7A4A8A31858074C9A497C4AE05C98_Quaternion__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Quaternion_
            {
                ::DDS::Double x_;
                ::DDS::Double y_;
                ::DDS::Double z_;
                ::DDS::Double w_;
            };

            typedef DDS_DCPSStruct_var<Quaternion_> Quaternion__var;
            typedef Quaternion_& Quaternion__out;

        }

    }

}

#endif /* _H_8DF7A4A8A31858074C9A497C4AE05C98_Quaternion__H_ */
