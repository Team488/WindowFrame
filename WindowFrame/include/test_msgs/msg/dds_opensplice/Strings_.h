#ifndef _H_A409AE4DC7EA186D27E3598D81EBF55A_Strings__H_
#define _H_A409AE4DC7EA186D27E3598D81EBF55A_Strings__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Strings_Constants
            {
                const ::DDS::String_mgr STRING_CONST_ = "Hello world!";

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Strings_
            {
                ::DDS::String_mgr string_value_;
                ::DDS::String_mgr string_value_default1_;
                ::DDS::String_mgr string_value_default2_;
                ::DDS::String_mgr string_value_default3_;
                ::DDS::String_mgr string_value_default4_;
                ::DDS::String_mgr string_value_default5_;
                ::DDS::String_mgr bounded_string_value_;
                ::DDS::String_mgr bounded_string_value_default1_;
                ::DDS::String_mgr bounded_string_value_default2_;
                ::DDS::String_mgr bounded_string_value_default3_;
                ::DDS::String_mgr bounded_string_value_default4_;
                ::DDS::String_mgr bounded_string_value_default5_;
            };

            typedef DDS_DCPSStruct_var<Strings_> Strings__var;
            typedef DDS_DCPSStruct_out < Strings_> Strings__out;

        }

    }

}

#endif /* _H_A409AE4DC7EA186D27E3598D81EBF55A_Strings__H_ */
