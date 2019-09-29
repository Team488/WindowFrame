#ifndef _H_79D2704CABA6F9DED46215B8E76E750E_TimeReference__H_
#define _H_79D2704CABA6F9DED46215B8E76E750E_TimeReference__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs TimeReference_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::builtin_interfaces::msg::dds_::Time_ time_ref_;
                ::DDS::String_mgr source_;
            };

            typedef DDS_DCPSStruct_var<TimeReference_> TimeReference__var;
            typedef DDS_DCPSStruct_out < TimeReference_> TimeReference__out;

        }

    }

}

#endif /* _H_79D2704CABA6F9DED46215B8E76E750E_TimeReference__H_ */
