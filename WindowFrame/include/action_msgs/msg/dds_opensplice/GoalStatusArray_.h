#ifndef _H_9FC81A0AE7451538FD5172057BF8EC79_GoalStatusArray__H_
#define _H_9FC81A0AE7451538FD5172057BF8EC79_GoalStatusArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "action_msgs/msg/dds_opensplice/GoalStatus_.h"
#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace action_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalStatusArray_
            {
                struct _status_list__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::action_msgs::msg::dds_::GoalStatus_, struct _status_list__seq_uniq_ > _status_list__seq;
                typedef DDS_DCPSSequence_var< _status_list__seq > _status_list__seq_var;
                typedef DDS_DCPSSequence_out< _status_list__seq > _status_list__seq_out;
                _status_list__seq status_list_;
            };

            typedef DDS_DCPSStruct_var<GoalStatusArray_> GoalStatusArray__var;
            typedef DDS_DCPSStruct_out < GoalStatusArray_> GoalStatusArray__out;

        }

    }

}

#endif /* _H_9FC81A0AE7451538FD5172057BF8EC79_GoalStatusArray__H_ */
