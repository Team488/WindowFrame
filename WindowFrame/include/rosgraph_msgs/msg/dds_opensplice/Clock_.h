#ifndef _H_BCBFA0D31094BEE12E75322E7CC147C5_Clock__H_
#define _H_BCBFA0D31094BEE12E75322E7CC147C5_Clock__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "rosgraph_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rosgraph_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rosgraph_msgs Clock_
            {
                ::builtin_interfaces::msg::dds_::Time_ clock_;
            };

            typedef DDS_DCPSStruct_var<Clock_> Clock__var;
            typedef Clock_& Clock__out;

        }

    }

}

#endif /* _H_BCBFA0D31094BEE12E75322E7CC147C5_Clock__H_ */
