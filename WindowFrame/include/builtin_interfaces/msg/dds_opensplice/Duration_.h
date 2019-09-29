#ifndef _H_C5FDDE1397501E0A7D9425B4C165396C_Duration__H_
#define _H_C5FDDE1397501E0A7D9425B4C165396C_Duration__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace builtin_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Duration_
            {
                ::DDS::Long sec_;
                ::DDS::ULong nanosec_;
            };

            typedef DDS_DCPSStruct_var<Duration_> Duration__var;
            typedef Duration_& Duration__out;

        }

    }

}

#endif /* _H_C5FDDE1397501E0A7D9425B4C165396C_Duration__H_ */
