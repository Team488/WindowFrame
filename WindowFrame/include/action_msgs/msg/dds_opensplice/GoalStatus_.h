#ifndef _H_61425F0C7FD95D602F0ACD7080E3732E_GoalStatus__H_
#define _H_61425F0C7FD95D602F0ACD7080E3732E_GoalStatus__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "action_msgs/msg/dds_opensplice/GoalInfo_.h"
#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace action_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace GoalStatus_Constants
            {
                const ::DDS::Octet STATUS_UNKNOWN_ = 0;

                const ::DDS::Octet STATUS_ACCEPTED_ = 1;

                const ::DDS::Octet STATUS_EXECUTING_ = 2;

                const ::DDS::Octet STATUS_CANCELING_ = 3;

                const ::DDS::Octet STATUS_SUCCEEDED_ = 4;

                const ::DDS::Octet STATUS_CANCELED_ = 5;

                const ::DDS::Octet STATUS_ABORTED_ = 6;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalStatus_
            {
                ::action_msgs::msg::dds_::GoalInfo_ goal_info_;
                ::DDS::Octet status_;
            };

            typedef DDS_DCPSStruct_var<GoalStatus_> GoalStatus__var;
            typedef GoalStatus_& GoalStatus__out;

        }

    }

}

#endif /* _H_61425F0C7FD95D602F0ACD7080E3732E_GoalStatus__H_ */
