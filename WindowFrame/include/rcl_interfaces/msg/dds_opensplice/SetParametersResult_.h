#ifndef _H_3F26150CEE8663F0AE641D58EC8D41B0_SetParametersResult__H_
#define _H_3F26150CEE8663F0AE641D58EC8D41B0_SetParametersResult__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces SetParametersResult_
            {
                ::DDS::Boolean successful_;
                ::DDS::String_mgr reason_;
            };

            typedef DDS_DCPSStruct_var<SetParametersResult_> SetParametersResult__var;
            typedef DDS_DCPSStruct_out < SetParametersResult_> SetParametersResult__out;

        }

    }

}

#endif /* _H_3F26150CEE8663F0AE641D58EC8D41B0_SetParametersResult__H_ */
