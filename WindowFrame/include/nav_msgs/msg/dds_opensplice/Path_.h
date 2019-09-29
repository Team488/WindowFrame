#ifndef _H_516DB4A89E062F7CED40BD1ED58C535F_Path__H_
#define _H_516DB4A89E062F7CED40BD1ED58C535F_Path__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/PoseStamped_.h"
#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Path_
            {
                struct _poses__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::geometry_msgs::msg::dds_::PoseStamped_, struct _poses__seq_uniq_ > _poses__seq;
                typedef DDS_DCPSSequence_var< _poses__seq > _poses__seq_var;
                typedef DDS_DCPSSequence_out< _poses__seq > _poses__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _poses__seq poses_;
            };

            typedef DDS_DCPSStruct_var<Path_> Path__var;
            typedef DDS_DCPSStruct_out < Path_> Path__out;

        }

    }

}

#endif /* _H_516DB4A89E062F7CED40BD1ED58C535F_Path__H_ */
