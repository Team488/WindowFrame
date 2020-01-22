#ifndef _H_B56788CD23D45D6628E7BCB7E7492D82_TeleportAbsolute__H_
#define _H_B56788CD23D45D6628E7BCB7E7492D82_TeleportAbsolute__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim TeleportAbsolute_Request_
            {
                ::DDS::Float x_;
                ::DDS::Float y_;
                ::DDS::Float theta_;
            };

            typedef DDS_DCPSStruct_var<TeleportAbsolute_Request_> TeleportAbsolute_Request__var;
            typedef TeleportAbsolute_Request_& TeleportAbsolute_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim TeleportAbsolute_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<TeleportAbsolute_Response_> TeleportAbsolute_Response__var;
            typedef TeleportAbsolute_Response_& TeleportAbsolute_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Sample_TeleportAbsolute_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::TeleportAbsolute_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_TeleportAbsolute_Request_> Sample_TeleportAbsolute_Request__var;
            typedef Sample_TeleportAbsolute_Request_& Sample_TeleportAbsolute_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Sample_TeleportAbsolute_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::TeleportAbsolute_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_TeleportAbsolute_Response_> Sample_TeleportAbsolute_Response__var;
            typedef Sample_TeleportAbsolute_Response_& Sample_TeleportAbsolute_Response__out;

        }

    }

}

#endif /* _H_B56788CD23D45D6628E7BCB7E7492D82_TeleportAbsolute__H_ */
