#ifndef _H_73365A2678F9DD61DB72CB55E455F4BB_SolidPrimitive__H_
#define _H_73365A2678F9DD61DB72CB55E455F4BB_SolidPrimitive__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace SolidPrimitive_Constants
            {
                const ::DDS::Octet BOX_ = 1;

                const ::DDS::Octet SPHERE_ = 2;

                const ::DDS::Octet CYLINDER_ = 3;

                const ::DDS::Octet CONE_ = 4;

                const ::DDS::Octet BOX_X_ = 0;

                const ::DDS::Octet BOX_Y_ = 1;

                const ::DDS::Octet BOX_Z_ = 2;

                const ::DDS::Octet SPHERE_RADIUS_ = 0;

                const ::DDS::Octet CYLINDER_HEIGHT_ = 0;

                const ::DDS::Octet CYLINDER_RADIUS_ = 1;

                const ::DDS::Octet CONE_HEIGHT_ = 0;

                const ::DDS::Octet CONE_RADIUS_ = 1;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs SolidPrimitive_
            {
                struct _dimensions__seq_uniq_{};
                typedef DDS_DCPSBFLSeq< ::DDS::Double, struct _dimensions__seq_uniq_, 3 > _dimensions__seq;
                typedef DDS_DCPSSequence_var< _dimensions__seq > _dimensions__seq_var;
                typedef DDS_DCPSSequence_out< _dimensions__seq > _dimensions__seq_out;
                ::DDS::Octet type_;
                _dimensions__seq dimensions_;
            };

            typedef DDS_DCPSStruct_var<SolidPrimitive_> SolidPrimitive__var;
            typedef DDS_DCPSStruct_out < SolidPrimitive_> SolidPrimitive__out;

        }

    }

}

#endif /* _H_73365A2678F9DD61DB72CB55E455F4BB_SolidPrimitive__H_ */
