#ifndef _H_3E1C938B5D65B9788913B1BD5B63640D_AddTwoInts__H_
#define _H_3E1C938B5D65B9788913B1BD5B63640D_AddTwoInts__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "example_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace example_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Request_
            {
                ::DDS::LongLong a_;
                ::DDS::LongLong b_;
            };

            typedef DDS_DCPSStruct_var<AddTwoInts_Request_> AddTwoInts_Request__var;
            typedef AddTwoInts_Request_& AddTwoInts_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces AddTwoInts_Response_
            {
                ::DDS::LongLong sum_;
            };

            typedef DDS_DCPSStruct_var<AddTwoInts_Response_> AddTwoInts_Response__var;
            typedef AddTwoInts_Response_& AddTwoInts_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::example_interfaces::srv::dds_::AddTwoInts_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_AddTwoInts_Request_> Sample_AddTwoInts_Request__var;
            typedef Sample_AddTwoInts_Request_& Sample_AddTwoInts_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_example_interfaces Sample_AddTwoInts_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::example_interfaces::srv::dds_::AddTwoInts_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_AddTwoInts_Response_> Sample_AddTwoInts_Response__var;
            typedef Sample_AddTwoInts_Response_& Sample_AddTwoInts_Response__out;

        }

    }

}

#endif /* _H_3E1C938B5D65B9788913B1BD5B63640D_AddTwoInts__H_ */
