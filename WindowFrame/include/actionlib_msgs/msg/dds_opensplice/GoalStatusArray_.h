#ifndef _H_2259A1A61A59C6B39A7DA615562B6878_GoalStatusArray__H_
#define _H_2259A1A61A59C6B39A7DA615562B6878_GoalStatusArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "actionlib_msgs/msg/dds_opensplice/GoalStatus_.h"
#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace actionlib_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatusArray_
            {
                struct _status_list__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::actionlib_msgs::msg::dds_::GoalStatus_, struct _status_list__seq_uniq_ > _status_list__seq;
                typedef DDS_DCPSSequence_var< _status_list__seq > _status_list__seq_var;
                typedef DDS_DCPSSequence_out< _status_list__seq > _status_list__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                _status_list__seq status_list_;
            };

            typedef DDS_DCPSStruct_var<GoalStatusArray_> GoalStatusArray__var;
            typedef DDS_DCPSStruct_out < GoalStatusArray_> GoalStatusArray__out;

        }

    }

}

#endif /* _H_2259A1A61A59C6B39A7DA615562B6878_GoalStatusArray__H_ */
