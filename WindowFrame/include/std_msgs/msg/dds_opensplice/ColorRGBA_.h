#ifndef _H_4346FC60D76D5EB0587320A3F21280B3_ColorRGBA__H_
#define _H_4346FC60D76D5EB0587320A3F21280B3_ColorRGBA__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_msgs ColorRGBA_
            {
                ::DDS::Float r_;
                ::DDS::Float g_;
                ::DDS::Float b_;
                ::DDS::Float a_;
            };

            typedef DDS_DCPSStruct_var<ColorRGBA_> ColorRGBA__var;
            typedef ColorRGBA_& ColorRGBA__out;

        }

    }

}

#endif /* _H_4346FC60D76D5EB0587320A3F21280B3_ColorRGBA__H_ */
