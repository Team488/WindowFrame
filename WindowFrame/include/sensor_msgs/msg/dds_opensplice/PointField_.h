#ifndef _H_582C02A0E1DF77093D595261362A0C17_PointField__H_
#define _H_582C02A0E1DF77093D595261362A0C17_PointField__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace PointField_Constants
            {
                const ::DDS::Octet INT8_ = 1;

                const ::DDS::Octet UINT8_ = 2;

                const ::DDS::Octet INT16_ = 3;

                const ::DDS::Octet UINT16_ = 4;

                const ::DDS::Octet INT32_ = 5;

                const ::DDS::Octet UINT32_ = 6;

                const ::DDS::Octet FLOAT32_ = 7;

                const ::DDS::Octet FLOAT64_ = 8;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointField_
            {
                ::DDS::String_mgr name_;
                ::DDS::ULong offset_;
                ::DDS::Octet datatype_;
                ::DDS::ULong count_;
            };

            typedef DDS_DCPSStruct_var<PointField_> PointField__var;
            typedef DDS_DCPSStruct_out < PointField_> PointField__out;

        }

    }

}

#endif /* _H_582C02A0E1DF77093D595261362A0C17_PointField__H_ */
