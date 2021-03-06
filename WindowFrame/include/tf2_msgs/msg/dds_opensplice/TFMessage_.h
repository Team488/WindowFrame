#ifndef _H_8C84AEF4771E9077060496A030363CBC_TFMessage__H_
#define _H_8C84AEF4771E9077060496A030363CBC_TFMessage__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/TransformStamped_.h"
#include "tf2_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace tf2_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_tf2_msgs TFMessage_
            {
                struct _transforms__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::geometry_msgs::msg::dds_::TransformStamped_, struct _transforms__seq_uniq_ > _transforms__seq;
                typedef DDS_DCPSSequence_var< _transforms__seq > _transforms__seq_var;
                typedef DDS_DCPSSequence_out< _transforms__seq > _transforms__seq_out;
                _transforms__seq transforms_;
            };

            typedef DDS_DCPSStruct_var<TFMessage_> TFMessage__var;
            typedef DDS_DCPSStruct_out < TFMessage_> TFMessage__out;

        }

    }

}

#endif /* _H_8C84AEF4771E9077060496A030363CBC_TFMessage__H_ */
