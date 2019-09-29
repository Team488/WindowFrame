#ifndef _H_337D236FA6AB96840B887B6979F2A05F_Constants__H_
#define _H_337D236FA6AB96840B887B6979F2A05F_Constants__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Constants_Constants
            {
                const ::DDS::Boolean BOOL_CONST_ = TRUE;

                const ::DDS::Octet BYTE_CONST_ = 50;

                const ::DDS::Octet CHAR_CONST_ = 100;

                const ::DDS::Float FLOAT32_CONST_ = 1.125;

                const ::DDS::Double FLOAT64_CONST_ = 1.125;

                const ::DDS::Octet INT8_CONST_ = 206;

                const ::DDS::Octet UINT8_CONST_ = 200;

                const ::DDS::Short INT16_CONST_ = (-1000);

                const ::DDS::UShort UINT16_CONST_ = 2000U;

                const ::DDS::Long INT32_CONST_ = (-30000);

                const ::DDS::ULong UINT32_CONST_ = 60000U;

                const ::DDS::LongLong INT64_CONST_ = (-40000000LL);

                const ::DDS::ULongLong UINT64_CONST_ = 50000000ULL;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs Constants_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<Constants_> Constants__var;
            typedef Constants_& Constants__out;

        }

    }

}

#endif /* _H_337D236FA6AB96840B887B6979F2A05F_Constants__H_ */
