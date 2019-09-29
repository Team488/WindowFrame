#ifndef _H_858E3E4AC88BE8B450F75266848F8220_TransitionDescription__H_
#define _H_858E3E4AC88BE8B450F75266848F8220_TransitionDescription__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "lifecycle_msgs/msg/dds_opensplice/Transition_.h"
#include "lifecycle_msgs/msg/dds_opensplice/State_.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionDescription_
            {
                ::lifecycle_msgs::msg::dds_::Transition_ transition_;
                ::lifecycle_msgs::msg::dds_::State_ start_state_;
                ::lifecycle_msgs::msg::dds_::State_ goal_state_;
            };

            typedef DDS_DCPSStruct_var<TransitionDescription_> TransitionDescription__var;
            typedef DDS_DCPSStruct_out < TransitionDescription_> TransitionDescription__out;

        }

    }

}

#endif /* _H_858E3E4AC88BE8B450F75266848F8220_TransitionDescription__H_ */
