#ifndef _H_AB27C677EFF0B700A03D1FE3EC381831_MenuEntry__H_
#define _H_AB27C677EFF0B700A03D1FE3EC381831_MenuEntry__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace MenuEntry_Constants
            {
                const ::DDS::Octet FEEDBACK_ = 0;

                const ::DDS::Octet ROSRUN_ = 1;

                const ::DDS::Octet ROSLAUNCH_ = 2;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MenuEntry_
            {
                ::DDS::ULong id_;
                ::DDS::ULong parent_id_;
                ::DDS::String_mgr title_;
                ::DDS::String_mgr command_;
                ::DDS::Octet command_type_;
            };

            typedef DDS_DCPSStruct_var<MenuEntry_> MenuEntry__var;
            typedef DDS_DCPSStruct_out < MenuEntry_> MenuEntry__out;

        }

    }

}

#endif /* _H_AB27C677EFF0B700A03D1FE3EC381831_MenuEntry__H_ */
