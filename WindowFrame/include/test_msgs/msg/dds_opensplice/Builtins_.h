#ifndef _H_4AC8CF1C8C037701F09AF5CE21962DAE_Builtins__H_
#define _H_4AC8CF1C8C037701F09AF5CE21962DAE_Builtins__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Builtins_
            {
                ::builtin_interfaces::msg::dds_::Duration_ duration_value_;
                ::builtin_interfaces::msg::dds_::Time_ time_value_;
            };

            typedef DDS_DCPSStruct_var<Builtins_> Builtins__var;
            typedef Builtins_& Builtins__out;

        }

    }

}

#endif /* _H_4AC8CF1C8C037701F09AF5CE21962DAE_Builtins__H_ */
