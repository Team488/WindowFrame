#ifndef _H_5958D35B947A10D5ED17F975A1C71C5B_InteractiveMarkerUpdate__H_
#define _H_5958D35B947A10D5ED17F975A1C71C5B_InteractiveMarkerUpdate__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarker_.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarkerPose_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace InteractiveMarkerUpdate_Constants
            {
                const ::DDS::Octet KEEP_ALIVE_ = 0;

                const ::DDS::Octet UPDATE_ = 1;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerUpdate_
            {
                struct _markers__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::InteractiveMarker_, struct _markers__seq_uniq_ > _markers__seq;
                typedef DDS_DCPSSequence_var< _markers__seq > _markers__seq_var;
                typedef DDS_DCPSSequence_out< _markers__seq > _markers__seq_out;
                struct _poses__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::InteractiveMarkerPose_, struct _poses__seq_uniq_ > _poses__seq;
                typedef DDS_DCPSSequence_var< _poses__seq > _poses__seq_var;
                typedef DDS_DCPSSequence_out< _poses__seq > _poses__seq_out;
                struct _erases__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _erases__seq_uniq_ > _erases__seq;
                typedef DDS_DCPSUStrSeq_var< _erases__seq > _erases__seq_var;
                typedef DDS_DCPSUStrSeq_out< _erases__seq > _erases__seq_out;
                ::DDS::String_mgr server_id_;
                ::DDS::ULongLong seq_num_;
                ::DDS::Octet type_;
                _markers__seq markers_;
                _poses__seq poses_;
                _erases__seq erases_;
            };

            typedef DDS_DCPSStruct_var<InteractiveMarkerUpdate_> InteractiveMarkerUpdate__var;
            typedef DDS_DCPSStruct_out < InteractiveMarkerUpdate_> InteractiveMarkerUpdate__out;

        }

    }

}

#endif /* _H_5958D35B947A10D5ED17F975A1C71C5B_InteractiveMarkerUpdate__H_ */
