#ifndef _H_99BB8005795B030BB1BAAC4E343080B0_MarkerArray__H_
#define _H_99BB8005795B030BB1BAAC4E343080B0_MarkerArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "visualization_msgs/msg/dds_opensplice/Marker_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs MarkerArray_
            {
                struct _markers__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::Marker_, struct _markers__seq_uniq_ > _markers__seq;
                typedef DDS_DCPSSequence_var< _markers__seq > _markers__seq_var;
                typedef DDS_DCPSSequence_out< _markers__seq > _markers__seq_out;
                _markers__seq markers_;
            };

            typedef DDS_DCPSStruct_var<MarkerArray_> MarkerArray__var;
            typedef DDS_DCPSStruct_out < MarkerArray_> MarkerArray__out;

        }

    }

}

#endif /* _H_99BB8005795B030BB1BAAC4E343080B0_MarkerArray__H_ */
