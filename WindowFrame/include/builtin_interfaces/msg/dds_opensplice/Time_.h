#ifndef _H_7DDA8C26B79CA8E1B5DA68B67BC927D7_Time__H_
#define _H_7DDA8C26B79CA8E1B5DA68B67BC927D7_Time__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace builtin_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Time_
            {
                ::DDS::Long sec_;
                ::DDS::ULong nanosec_;
            };

            typedef DDS_DCPSStruct_var<Time_> Time__var;
            typedef Time_& Time__out;

        }

    }

}

#endif /* _H_7DDA8C26B79CA8E1B5DA68B67BC927D7_Time__H_ */
