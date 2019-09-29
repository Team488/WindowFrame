#ifndef _H_1DE4FC7FDE0C028958F9CC2E6C75F197_Range__H_
#define _H_1DE4FC7FDE0C028958F9CC2E6C75F197_Range__H_

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
            namespace Range_Constants
            {
                const ::DDS::Octet ULTRASOUND_ = 0;

                const ::DDS::Octet INFRARED_ = 1;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Range_
            {
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Octet radiation_type_;
                ::DDS::Float field_of_view_;
                ::DDS::Float min_range_;
                ::DDS::Float max_range_;
                ::DDS::Float range_;
            };

            typedef DDS_DCPSStruct_var<Range_> Range__var;
            typedef DDS_DCPSStruct_out < Range_> Range__out;

        }

    }

}

#endif /* _H_1DE4FC7FDE0C028958F9CC2E6C75F197_Range__H_ */
