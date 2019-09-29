#ifndef _H_0C37EA39CC2F2298D3804E8F8F9ACD7B_InteractiveMarker__H_
#define _H_0C37EA39CC2F2298D3804E8F8F9ACD7B_InteractiveMarker__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_.h"
#include "visualization_msgs/msg/dds_opensplice/MenuEntry_.h"
#include "visualization_msgs/msg/dds_opensplice/InteractiveMarkerControl_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarker_
            {
                struct _menu_entries__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::MenuEntry_, struct _menu_entries__seq_uniq_ > _menu_entries__seq;
                typedef DDS_DCPSSequence_var< _menu_entries__seq > _menu_entries__seq_var;
                typedef DDS_DCPSSequence_out< _menu_entries__seq > _menu_entries__seq_out;
                struct _controls__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::InteractiveMarkerControl_, struct _controls__seq_uniq_ > _controls__seq;
                typedef DDS_DCPSSequence_var< _controls__seq > _controls__seq_var;
                typedef DDS_DCPSSequence_out< _controls__seq > _controls__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Pose_ pose_;
                ::DDS::String_mgr name_;
                ::DDS::String_mgr description_;
                ::DDS::Float scale_;
                _menu_entries__seq menu_entries_;
                _controls__seq controls_;
            };

            typedef DDS_DCPSStruct_var<InteractiveMarker_> InteractiveMarker__var;
            typedef DDS_DCPSStruct_out < InteractiveMarker_> InteractiveMarker__out;

        }

    }

}

#endif /* _H_0C37EA39CC2F2298D3804E8F8F9ACD7B_InteractiveMarker__H_ */
