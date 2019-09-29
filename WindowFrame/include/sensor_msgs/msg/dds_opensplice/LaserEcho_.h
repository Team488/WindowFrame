#ifndef _H_466EFC57FC330E7BC4FB1CD6CC336FEA_LaserEcho__H_
#define _H_466EFC57FC330E7BC4FB1CD6CC336FEA_LaserEcho__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs LaserEcho_
            {
                struct _echoes__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _echoes__seq_uniq_ > _echoes__seq;
                typedef DDS_DCPSSequence_var< _echoes__seq > _echoes__seq_var;
                typedef DDS_DCPSSequence_out< _echoes__seq > _echoes__seq_out;
                _echoes__seq echoes_;
            };

            typedef DDS_DCPSStruct_var<LaserEcho_> LaserEcho__var;
            typedef DDS_DCPSStruct_out < LaserEcho_> LaserEcho__out;

        }

    }

}

#endif /* _H_466EFC57FC330E7BC4FB1CD6CC336FEA_LaserEcho__H_ */
