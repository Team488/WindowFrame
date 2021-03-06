#ifndef _H_20B11CD5DFFD10E48C93C442181F435D_Parameter__H_
#define _H_20B11CD5DFFD10E48C93C442181F435D_Parameter__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterValue_.h"
#include "rcl_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_rcl_interfaces Parameter_
            {
                ::DDS::String_mgr name_;
                ::rcl_interfaces::msg::dds_::ParameterValue_ value_;
            };

            typedef DDS_DCPSStruct_var<Parameter_> Parameter__var;
            typedef DDS_DCPSStruct_out < Parameter_> Parameter__out;

        }

    }

}

#endif /* _H_20B11CD5DFFD10E48C93C442181F435D_Parameter__H_ */
