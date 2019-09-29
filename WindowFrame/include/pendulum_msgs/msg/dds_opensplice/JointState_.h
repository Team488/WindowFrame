#ifndef _H_8B580ADF699999A626036F8E85341BD2_JointState__H_
#define _H_8B580ADF699999A626036F8E85341BD2_JointState__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "pendulum_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace pendulum_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_pendulum_msgs JointState_
            {
                ::DDS::Double position_;
                ::DDS::Double velocity_;
                ::DDS::Double effort_;
            };

            typedef DDS_DCPSStruct_var<JointState_> JointState__var;
            typedef JointState_& JointState__out;

        }

    }

}

#endif /* _H_8B580ADF699999A626036F8E85341BD2_JointState__H_ */
