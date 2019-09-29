#ifndef _H_C54A9D26138A606F169FE57DC6A8ABF9_Temperature__H_
#define _H_C54A9D26138A606F169FE57DC6A8ABF9_Temperature__H_

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
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Temperature_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Double temperature_;
                ::DDS::Double variance_;
            };

            typedef DDS_DCPSStruct_var<Temperature_> Temperature__var;
            typedef DDS_DCPSStruct_out < Temperature_> Temperature__out;

        }

    }

}

#endif /* _H_C54A9D26138A606F169FE57DC6A8ABF9_Temperature__H_ */
