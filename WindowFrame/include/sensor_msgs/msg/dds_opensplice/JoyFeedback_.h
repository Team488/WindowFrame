#ifndef _H_0AC68D84BAC02058AEE0D96675507BAC_JoyFeedback__H_
#define _H_0AC68D84BAC02058AEE0D96675507BAC_JoyFeedback__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace JoyFeedback_Constants
            {
                const ::DDS::Octet TYPE_LED_ = 0;

                const ::DDS::Octet TYPE_RUMBLE_ = 1;

                const ::DDS::Octet TYPE_BUZZER_ = 2;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs JoyFeedback_
            {
                ::DDS::Octet type_;
                ::DDS::Octet id_;
                ::DDS::Float intensity_;
            };

            typedef DDS_DCPSStruct_var<JoyFeedback_> JoyFeedback__var;
            typedef JoyFeedback_& JoyFeedback__out;

        }

    }

}

#endif /* _H_0AC68D84BAC02058AEE0D96675507BAC_JoyFeedback__H_ */
