#ifndef _H_DD1FB52DBD70A855A11FE0C8DA122477_Color__H_
#define _H_DD1FB52DBD70A855A11FE0C8DA122477_Color__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace turtlesim
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Color_
            {
                ::DDS::Octet r_;
                ::DDS::Octet g_;
                ::DDS::Octet b_;
            };

            typedef DDS_DCPSStruct_var<Color_> Color__var;
            typedef Color_& Color__out;

        }

    }

}

#endif /* _H_DD1FB52DBD70A855A11FE0C8DA122477_Color__H_ */
