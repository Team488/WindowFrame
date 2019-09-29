#ifndef _H_56F9376DBD000DA66E058687718F4E8C_RegionOfInterest__H_
#define _H_56F9376DBD000DA66E058687718F4E8C_RegionOfInterest__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RegionOfInterest_
            {
                ::DDS::ULong x_offset_;
                ::DDS::ULong y_offset_;
                ::DDS::ULong height_;
                ::DDS::ULong width_;
                ::DDS::Boolean do_rectify_;
            };

            typedef DDS_DCPSStruct_var<RegionOfInterest_> RegionOfInterest__var;
            typedef RegionOfInterest_& RegionOfInterest__out;

        }

    }

}

#endif /* _H_56F9376DBD000DA66E058687718F4E8C_RegionOfInterest__H_ */
