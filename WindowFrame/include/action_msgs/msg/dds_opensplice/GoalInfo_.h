#ifndef _H_108FB90AB93A68D5052C1786D319AE59_GoalInfo__H_
#define _H_108FB90AB93A68D5052C1786D319AE59_GoalInfo__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "unique_identifier_msgs/msg/dds_opensplice/UUID_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace action_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalInfo_
            {
                ::unique_identifier_msgs::msg::dds_::UUID_ goal_id_;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
            };

            typedef DDS_DCPSStruct_var<GoalInfo_> GoalInfo__var;
            typedef GoalInfo_& GoalInfo__out;

        }

    }

}

#endif /* _H_108FB90AB93A68D5052C1786D319AE59_GoalInfo__H_ */
