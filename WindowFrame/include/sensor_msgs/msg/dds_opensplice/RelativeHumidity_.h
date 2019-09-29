#ifndef _H_969189097150211654554052A20D3EE4_RelativeHumidity__H_
#define _H_969189097150211654554052A20D3EE4_RelativeHumidity__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RelativeHumidity_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Double relative_humidity_;
                ::DDS::Double variance_;
            };

            typedef DDS_DCPSStruct_var<RelativeHumidity_> RelativeHumidity__var;
            typedef DDS_DCPSStruct_out < RelativeHumidity_> RelativeHumidity__out;

        }

    }

}

#endif /* _H_969189097150211654554052A20D3EE4_RelativeHumidity__H_ */
