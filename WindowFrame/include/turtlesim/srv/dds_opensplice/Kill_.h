#ifndef _H_553586E9DA3A7DBB367DA9552FE0A063_Kill__H_
#define _H_553586E9DA3A7DBB367DA9552FE0A063_Kill__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "turtlesim/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace turtlesim
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Kill_Request_
            {
                ::DDS::String_mgr name_;
            };

            typedef DDS_DCPSStruct_var<Kill_Request_> Kill_Request__var;
            typedef DDS_DCPSStruct_out < Kill_Request_> Kill_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Kill_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Kill_Response_> Kill_Response__var;
            typedef Kill_Response_& Kill_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Sample_Kill_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::Kill_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Kill_Request_> Sample_Kill_Request__var;
            typedef DDS_DCPSStruct_out < Sample_Kill_Request_> Sample_Kill_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_turtlesim Sample_Kill_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::turtlesim::srv::dds_::Kill_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Kill_Response_> Sample_Kill_Response__var;
            typedef Sample_Kill_Response_& Sample_Kill_Response__out;

        }

    }

}

#endif /* _H_553586E9DA3A7DBB367DA9552FE0A063_Kill__H_ */
