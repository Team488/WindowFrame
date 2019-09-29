#ifndef _H_3FE5282260966708675F248EA8E44082_InteractiveMarkerControl__H_
#define _H_3FE5282260966708675F248EA8E44082_InteractiveMarkerControl__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_.h"
#include "visualization_msgs/msg/dds_opensplice/Marker_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace InteractiveMarkerControl_Constants
            {
                const ::DDS::Octet INHERIT_ = 0;

                const ::DDS::Octet FIXED_ = 1;

                const ::DDS::Octet VIEW_FACING_ = 2;

                const ::DDS::Octet NONE_ = 0;

                const ::DDS::Octet MENU_ = 1;

                const ::DDS::Octet BUTTON_ = 2;

                const ::DDS::Octet MOVE_AXIS_ = 3;

                const ::DDS::Octet MOVE_PLANE_ = 4;

                const ::DDS::Octet ROTATE_AXIS_ = 5;

                const ::DDS::Octet MOVE_ROTATE_ = 6;

                const ::DDS::Octet MOVE_3D_ = 7;

                const ::DDS::Octet ROTATE_3D_ = 8;

                const ::DDS::Octet MOVE_ROTATE_3D_ = 9;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs InteractiveMarkerControl_
            {
                struct _markers__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::visualization_msgs::msg::dds_::Marker_, struct _markers__seq_uniq_ > _markers__seq;
                typedef DDS_DCPSSequence_var< _markers__seq > _markers__seq_var;
                typedef DDS_DCPSSequence_out< _markers__seq > _markers__seq_out;
                ::DDS::String_mgr name_;
                ::geometry_msgs::msg::dds_::Quaternion_ orientation_;
                ::DDS::Octet orientation_mode_;
                ::DDS::Octet interaction_mode_;
                ::DDS::Boolean always_visible_;
                _markers__seq markers_;
                ::DDS::Boolean independent_marker_orientation_;
                ::DDS::String_mgr description_;
            };

            typedef DDS_DCPSStruct_var<InteractiveMarkerControl_> InteractiveMarkerControl__var;
            typedef DDS_DCPSStruct_out < InteractiveMarkerControl_> InteractiveMarkerControl__out;

        }

    }

}

#endif /* _H_3FE5282260966708675F248EA8E44082_InteractiveMarkerControl__H_ */
