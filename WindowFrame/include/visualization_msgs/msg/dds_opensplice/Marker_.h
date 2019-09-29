#ifndef _H_C7AD12915264B131C649F6A66822CE46_Marker__H_
#define _H_C7AD12915264B131C649F6A66822CE46_Marker__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Pose_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_.h"
#include "std_msgs/msg/dds_opensplice/ColorRGBA_.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace Marker_Constants
            {
                const ::DDS::Octet ARROW_ = 0;

                const ::DDS::Octet CUBE_ = 1;

                const ::DDS::Octet SPHERE_ = 2;

                const ::DDS::Octet CYLINDER_ = 3;

                const ::DDS::Octet LINE_STRIP_ = 4;

                const ::DDS::Octet LINE_LIST_ = 5;

                const ::DDS::Octet CUBE_LIST_ = 6;

                const ::DDS::Octet SPHERE_LIST_ = 7;

                const ::DDS::Octet POINTS_ = 8;

                const ::DDS::Octet TEXT_VIEW_FACING_ = 9;

                const ::DDS::Octet MESH_RESOURCE_ = 10;

                const ::DDS::Octet TRIANGLE_LIST_ = 11;

                const ::DDS::Octet ADD_ = 0;

                const ::DDS::Octet MODIFY_ = 0;

                const ::DDS::Octet DELETE_ = 2;

                const ::DDS::Octet DELETEALL_ = 3;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Marker_
            {
                struct _points__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Point_, struct _points__seq_uniq_ > _points__seq;
                typedef DDS_DCPSSequence_var< _points__seq > _points__seq_var;
                typedef DDS_DCPSSequence_out< _points__seq > _points__seq_out;
                struct _colors__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::std_msgs::msg::dds_::ColorRGBA_, struct _colors__seq_uniq_ > _colors__seq;
                typedef DDS_DCPSSequence_var< _colors__seq > _colors__seq_var;
                typedef DDS_DCPSSequence_out< _colors__seq > _colors__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::String_mgr ns_;
                ::DDS::Long id_;
                ::DDS::Long type_;
                ::DDS::Long action_;
                ::geometry_msgs::msg::dds_::Pose_ pose_;
                ::geometry_msgs::msg::dds_::Vector3_ scale_;
                ::std_msgs::msg::dds_::ColorRGBA_ color_;
                ::builtin_interfaces::msg::dds_::Duration_ lifetime_;
                ::DDS::Boolean frame_locked_;
                _points__seq points_;
                _colors__seq colors_;
                ::DDS::String_mgr text_;
                ::DDS::String_mgr mesh_resource_;
                ::DDS::Boolean mesh_use_embedded_materials_;
            };

            typedef DDS_DCPSStruct_var<Marker_> Marker__var;
            typedef DDS_DCPSStruct_out < Marker_> Marker__out;

        }

    }

}

#endif /* _H_C7AD12915264B131C649F6A66822CE46_Marker__H_ */
