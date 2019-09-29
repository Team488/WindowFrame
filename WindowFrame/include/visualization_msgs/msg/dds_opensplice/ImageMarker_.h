#ifndef _H_1337FE43C1652C80096E8F278BB8B8EA_ImageMarker__H_
#define _H_1337FE43C1652C80096E8F278BB8B8EA_ImageMarker__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Point_.h"
#include "std_msgs/msg/dds_opensplice/ColorRGBA_.h"
#include "builtin_interfaces/msg/dds_opensplice/Duration_.h"
#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace visualization_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace ImageMarker_Constants
            {
                const ::DDS::Octet CIRCLE_ = 0;

                const ::DDS::Octet LINE_STRIP_ = 1;

                const ::DDS::Octet LINE_LIST_ = 2;

                const ::DDS::Octet POLYGON_ = 3;

                const ::DDS::Octet POINTS_ = 4;

                const ::DDS::Octet ADD_ = 0;

                const ::DDS::Octet REMOVE_ = 1;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs ImageMarker_
            {
                struct _points__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::geometry_msgs::msg::dds_::Point_, struct _points__seq_uniq_ > _points__seq;
                typedef DDS_DCPSSequence_var< _points__seq > _points__seq_var;
                typedef DDS_DCPSSequence_out< _points__seq > _points__seq_out;
                struct _outline_colors__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::std_msgs::msg::dds_::ColorRGBA_, struct _outline_colors__seq_uniq_ > _outline_colors__seq;
                typedef DDS_DCPSSequence_var< _outline_colors__seq > _outline_colors__seq_var;
                typedef DDS_DCPSSequence_out< _outline_colors__seq > _outline_colors__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::String_mgr ns_;
                ::DDS::Long id_;
                ::DDS::Long type_;
                ::DDS::Long action_;
                ::geometry_msgs::msg::dds_::Point_ position_;
                ::DDS::Float scale_;
                ::std_msgs::msg::dds_::ColorRGBA_ outline_color_;
                ::DDS::Octet filled_;
                ::std_msgs::msg::dds_::ColorRGBA_ fill_color_;
                ::builtin_interfaces::msg::dds_::Duration_ lifetime_;
                _points__seq points_;
                _outline_colors__seq outline_colors_;
            };

            typedef DDS_DCPSStruct_var<ImageMarker_> ImageMarker__var;
            typedef DDS_DCPSStruct_out < ImageMarker_> ImageMarker__out;

        }

    }

}

#endif /* _H_1337FE43C1652C80096E8F278BB8B8EA_ImageMarker__H_ */
