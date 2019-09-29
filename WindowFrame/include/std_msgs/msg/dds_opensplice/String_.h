#ifndef _H_76A7E82E514941AA332F831A9BCA0CFE_String__H_
#define _H_76A7E82E514941AA332F831A9BCA0CFE_String__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs String_
            {
                ::DDS::String_mgr data_;
            };

            typedef DDS_DCPSStruct_var<String_> String__var;
            typedef DDS_DCPSStruct_out < String_> String__out;

        }

    }

}

#endif /* _H_76A7E82E514941AA332F831A9BCA0CFE_String__H_ */
