#ifndef _H_863D3C8522EB655A70D2EFB95E4FEB46_GoalID__H_
#define _H_863D3C8522EB655A70D2EFB95E4FEB46_GoalID__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace actionlib_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalID_
            {
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
                ::DDS::String_mgr id_;
            };

            typedef DDS_DCPSStruct_var<GoalID_> GoalID__var;
            typedef DDS_DCPSStruct_out < GoalID_> GoalID__out;

        }

    }

}

#endif /* _H_863D3C8522EB655A70D2EFB95E4FEB46_GoalID__H_ */
