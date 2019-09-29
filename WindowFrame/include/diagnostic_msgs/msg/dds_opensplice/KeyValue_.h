#ifndef _H_EE32E36999A3803A1312A953E76D688C_KeyValue__H_
#define _H_EE32E36999A3803A1312A953E76D688C_KeyValue__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace diagnostic_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs KeyValue_
            {
                ::DDS::String_mgr key_;
                ::DDS::String_mgr value_;
            };

            typedef DDS_DCPSStruct_var<KeyValue_> KeyValue__var;
            typedef DDS_DCPSStruct_out < KeyValue_> KeyValue__out;

        }

    }

}

#endif /* _H_EE32E36999A3803A1312A953E76D688C_KeyValue__H_ */
