#ifndef _H_458F7AEAE0CFE9D35ECA2ADB726D337B_MultiArrayDimension__H_
#define _H_458F7AEAE0CFE9D35ECA2ADB726D337B_MultiArrayDimension__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs MultiArrayDimension_
            {
                ::DDS::String_mgr label_;
                ::DDS::ULong size_;
                ::DDS::ULong stride_;
            };

            typedef DDS_DCPSStruct_var<MultiArrayDimension_> MultiArrayDimension__var;
            typedef DDS_DCPSStruct_out < MultiArrayDimension_> MultiArrayDimension__out;

        }

    }

}

#endif /* _H_458F7AEAE0CFE9D35ECA2ADB726D337B_MultiArrayDimension__H_ */
