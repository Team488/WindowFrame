#ifndef _H_3630A73C060CC2B59C3715ABEF50583A_SetBool__H_
#define _H_3630A73C060CC2B59C3715ABEF50583A_SetBool__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_srvs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Request_
            {
                ::DDS::Boolean data_;
            };

            typedef DDS_DCPSStruct_var<SetBool_Request_> SetBool_Request__var;
            typedef SetBool_Request_& SetBool_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs SetBool_Response_
            {
                ::DDS::Boolean success_;
                ::DDS::String_mgr message_;
            };

            typedef DDS_DCPSStruct_var<SetBool_Response_> SetBool_Response__var;
            typedef DDS_DCPSStruct_out < SetBool_Response_> SetBool_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::std_srvs::srv::dds_::SetBool_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetBool_Request_> Sample_SetBool_Request__var;
            typedef Sample_SetBool_Request_& Sample_SetBool_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_SetBool_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::std_srvs::srv::dds_::SetBool_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetBool_Response_> Sample_SetBool_Response__var;
            typedef DDS_DCPSStruct_out < Sample_SetBool_Response_> Sample_SetBool_Response__out;

        }

    }

}

#endif /* _H_3630A73C060CC2B59C3715ABEF50583A_SetBool__H_ */
