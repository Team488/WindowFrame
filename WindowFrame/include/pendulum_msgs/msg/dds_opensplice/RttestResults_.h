#ifndef _H_220763046B33429D96FAB2CF7DC82818_RttestResults__H_
#define _H_220763046B33429D96FAB2CF7DC82818_RttestResults__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "pendulum_msgs/msg/dds_opensplice/JointCommand_.h"
#include "pendulum_msgs/msg/dds_opensplice/JointState_.h"
#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace pendulum_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs RttestResults_
            {
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
                ::pendulum_msgs::msg::dds_::JointCommand_ command_;
                ::pendulum_msgs::msg::dds_::JointState_ state_;
                ::DDS::ULongLong cur_latency_;
                ::DDS::Double mean_latency_;
                ::DDS::ULongLong min_latency_;
                ::DDS::ULongLong max_latency_;
                ::DDS::ULongLong minor_pagefaults_;
                ::DDS::ULongLong major_pagefaults_;
            };

            typedef DDS_DCPSStruct_var<RttestResults_> RttestResults__var;
            typedef RttestResults_& RttestResults__out;

        }

    }

}

#endif /* _H_220763046B33429D96FAB2CF7DC82818_RttestResults__H_ */
