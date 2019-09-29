#ifndef _H_61067FB4F773B339552FBE9B83111201_Inertia__H_
#define _H_61067FB4F773B339552FBE9B83111201_Inertia__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Inertia_
            {
                ::DDS::Double m_;
                ::geometry_msgs::msg::dds_::Vector3_ com_;
                ::DDS::Double ixx_;
                ::DDS::Double ixy_;
                ::DDS::Double ixz_;
                ::DDS::Double iyy_;
                ::DDS::Double iyz_;
                ::DDS::Double izz_;
            };

            typedef DDS_DCPSStruct_var<Inertia_> Inertia__var;
            typedef Inertia_& Inertia__out;

        }

    }

}

#endif /* _H_61067FB4F773B339552FBE9B83111201_Inertia__H_ */
