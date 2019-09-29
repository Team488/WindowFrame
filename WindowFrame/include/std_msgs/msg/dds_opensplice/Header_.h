#ifndef _H_9A6BD02DD9944F7A3CD9C883333C239E_Header__H_
#define _H_9A6BD02DD9944F7A3CD9C883333C239E_Header__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs Header_
            {
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
                ::DDS::String_mgr frame_id_;
            };

            typedef DDS_DCPSStruct_var<Header_> Header__var;
            typedef DDS_DCPSStruct_out < Header_> Header__out;

        }

    }

}

#endif /* _H_9A6BD02DD9944F7A3CD9C883333C239E_Header__H_ */
