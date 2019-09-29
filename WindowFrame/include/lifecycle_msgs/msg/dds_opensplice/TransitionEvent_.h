#ifndef _H_906C4E38A10C3D8F3562885972A5B9B2_TransitionEvent__H_
#define _H_906C4E38A10C3D8F3562885972A5B9B2_TransitionEvent__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionEvent_
            {
                ::DDS::ULongLong timestamp_;
                ::lifecycle_msgs::msg::dds_::Transition_ transition_;
                ::lifecycle_msgs::msg::dds_::State_ start_state_;
                ::lifecycle_msgs::msg::dds_::State_ goal_state_;
            };

            typedef DDS_DCPSStruct_var<TransitionEvent_> TransitionEvent__var;
            typedef DDS_DCPSStruct_out < TransitionEvent_> TransitionEvent__out;

        }

    }

}

#endif /* _H_906C4E38A10C3D8F3562885972A5B9B2_TransitionEvent__H_ */
