#ifndef _H_C566BB3A91177314AD31483B6029CDE4_InteractiveMarkerInit__H_
#define _H_C566BB3A91177314AD31483B6029CDE4_InteractiveMarkerInit__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarker_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerInit_
            {
                struct _markers__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::InteractiveMarker_, struct _markers__seq_uniq_ > _markers__seq;
                typedef DDS_DCPSSequence_var< _markers__seq > _markers__seq_var;
                typedef DDS_DCPSSequence_out< _markers__seq > _markers__seq_out;
                ::DDS::String_mgr server_id_;
                ::DDS::ULongLong seq_num_;
                _markers__seq markers_;
            };

            typedef DDS_DCPSStruct_var<InteractiveMarkerInit_> InteractiveMarkerInit__var;
            typedef DDS_DCPSStruct_out < InteractiveMarkerInit_> InteractiveMarkerInit__out;

        }

    }

}

#endif /* _H_C566BB3A91177314AD31483B6029CDE4_InteractiveMarkerInit__H_ */
