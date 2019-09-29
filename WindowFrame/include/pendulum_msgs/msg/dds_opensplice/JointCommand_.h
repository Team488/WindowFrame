#ifndef _H_13CE6CE8B53C0C28A443E4AA62DA2C27_JointCommand__H_
#define _H_13CE6CE8B53C0C28A443E4AA62DA2C27_JointCommand__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace pendulum_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointCommand_
            {
                ::DDS::Double position_;
            };

            typedef DDS_DCPSStruct_var<JointCommand_> JointCommand__var;
            typedef JointCommand_& JointCommand__out;

        }

    }

}

#endif /* _H_13CE6CE8B53C0C28A443E4AA62DA2C27_JointCommand__H_ */
