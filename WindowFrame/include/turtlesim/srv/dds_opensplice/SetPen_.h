#ifndef _H_1F29DEF4026727290853A2C257497F31_SetPen__H_
#define _H_1F29DEF4026727290853A2C257497F31_SetPen__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim SetPen_Request_
            {
                ::DDS::Octet r_;
                ::DDS::Octet g_;
                ::DDS::Octet b_;
                ::DDS::Octet width_;
                ::DDS::Octet off_;
            };

            typedef DDS_DCPSStruct_var<SetPen_Request_> SetPen_Request__var;
            typedef SetPen_Request_& SetPen_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim SetPen_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<SetPen_Response_> SetPen_Response__var;
            typedef SetPen_Response_& SetPen_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Sample_SetPen_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::SetPen_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetPen_Request_> Sample_SetPen_Request__var;
            typedef Sample_SetPen_Request_& Sample_SetPen_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Sample_SetPen_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::SetPen_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetPen_Response_> Sample_SetPen_Response__var;
            typedef Sample_SetPen_Response_& Sample_SetPen_Response__out;

        }

    }

}

#endif /* _H_1F29DEF4026727290853A2C257497F31_SetPen__H_ */
