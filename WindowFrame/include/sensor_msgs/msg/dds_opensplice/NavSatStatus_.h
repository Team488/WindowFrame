#ifndef _H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus__H_
#define _H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace NavSatStatus_Constants
            {
                const ::DDS::Octet STATUS_NO_FIX_ = 255;

                const ::DDS::Octet STATUS_FIX_ = 0;

                const ::DDS::Octet STATUS_SBAS_FIX_ = 1;

                const ::DDS::Octet STATUS_GBAS_FIX_ = 2;

                const ::DDS::UShort SERVICE_GPS_ = 1U;

                const ::DDS::UShort SERVICE_GLONASS_ = 2U;

                const ::DDS::UShort SERVICE_COMPASS_ = 4U;

                const ::DDS::UShort SERVICE_GALILEO_ = 8U;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatStatus_
            {
                ::DDS::Octet status_;
                ::DDS::UShort service_;
            };

            typedef DDS_DCPSStruct_var<NavSatStatus_> NavSatStatus__var;
            typedef NavSatStatus_& NavSatStatus__out;

        }

    }

}

#endif /* _H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus__H_ */
