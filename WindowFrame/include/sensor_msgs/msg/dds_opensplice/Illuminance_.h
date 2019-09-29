#ifndef _H_B25EABCC2BA171F740E7784008B1C965_Illuminance__H_
#define _H_B25EABCC2BA171F740E7784008B1C965_Illuminance__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Illuminance_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Double illuminance_;
                ::DDS::Double variance_;
            };

            typedef DDS_DCPSStruct_var<Illuminance_> Illuminance__var;
            typedef DDS_DCPSStruct_out < Illuminance_> Illuminance__out;

        }

    }

}

#endif /* _H_B25EABCC2BA171F740E7784008B1C965_Illuminance__H_ */
