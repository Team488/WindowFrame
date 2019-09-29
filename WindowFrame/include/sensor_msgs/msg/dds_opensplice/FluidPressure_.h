#ifndef _H_39C99594ED87D63CF14E4253EE949272_FluidPressure__H_
#define _H_39C99594ED87D63CF14E4253EE949272_FluidPressure__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs FluidPressure_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Double fluid_pressure_;
                ::DDS::Double variance_;
            };

            typedef DDS_DCPSStruct_var<FluidPressure_> FluidPressure__var;
            typedef DDS_DCPSStruct_out < FluidPressure_> FluidPressure__out;

        }

    }

}

#endif /* _H_39C99594ED87D63CF14E4253EE949272_FluidPressure__H_ */
