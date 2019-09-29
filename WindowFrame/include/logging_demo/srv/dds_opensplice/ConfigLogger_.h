#ifndef _H_8C2CCA202FD992B141EFDC37CB8EA7B5_ConfigLogger__H_
#define _H_8C2CCA202FD992B141EFDC37CB8EA7B5_ConfigLogger__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "logging_demo/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace logging_demo
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Request_
            {
                ::DDS::String_mgr logger_name_;
                ::DDS::String_mgr level_;
            };

            typedef DDS_DCPSStruct_var<ConfigLogger_Request_> ConfigLogger_Request__var;
            typedef DDS_DCPSStruct_out < ConfigLogger_Request_> ConfigLogger_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo ConfigLogger_Response_
            {
                ::DDS::Boolean success_;
            };

            typedef DDS_DCPSStruct_var<ConfigLogger_Response_> ConfigLogger_Response__var;
            typedef ConfigLogger_Response_& ConfigLogger_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::logging_demo::srv::dds_::ConfigLogger_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_ConfigLogger_Request_> Sample_ConfigLogger_Request__var;
            typedef DDS_DCPSStruct_out < Sample_ConfigLogger_Request_> Sample_ConfigLogger_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_logging_demo Sample_ConfigLogger_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::logging_demo::srv::dds_::ConfigLogger_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_ConfigLogger_Response_> Sample_ConfigLogger_Response__var;
            typedef Sample_ConfigLogger_Response_& Sample_ConfigLogger_Response__out;

        }

    }

}

#endif /* _H_8C2CCA202FD992B141EFDC37CB8EA7B5_ConfigLogger__H_ */
