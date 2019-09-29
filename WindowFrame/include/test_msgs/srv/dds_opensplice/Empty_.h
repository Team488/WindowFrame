#ifndef _H_85A598F9CEDC4D8C3EFC62E57BEF0F7B_Empty__H_
#define _H_85A598F9CEDC4D8C3EFC62E57BEF0F7B_Empty__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace srv
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Request_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Empty_Request_> Empty_Request__var;
            typedef Empty_Request_& Empty_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Empty_Response_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Empty_Response_> Empty_Response__var;
            typedef Empty_Response_& Empty_Response__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::srv::dds_::Empty_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_Empty_Request_> Sample_Empty_Request__var;
            typedef Sample_Empty_Request_& Sample_Empty_Request__out;

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Sample_Empty_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::test_msgs::srv::dds_::Empty_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_Empty_Response_> Sample_Empty_Response__var;
            typedef Sample_Empty_Response_& Sample_Empty_Response__out;

        }

    }

}

#endif /* _H_85A598F9CEDC4D8C3EFC62E57BEF0F7B_Empty__H_ */
