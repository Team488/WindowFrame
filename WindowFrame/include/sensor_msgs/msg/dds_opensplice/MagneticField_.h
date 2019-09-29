#ifndef _H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField__H_
#define _H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MagneticField_
            {
                struct _magnetic_field_covariance__uniq_{};
                typedef ::DDS::Double _magnetic_field_covariance__slice;
                typedef ::DDS::Double _magnetic_field_covariance_[9];
                typedef DDS_DCPS_FArray_var< _magnetic_field_covariance_, _magnetic_field_covariance__slice, struct _magnetic_field_covariance__uniq_ > _magnetic_field_covariance__var;
                typedef _magnetic_field_covariance_ _magnetic_field_covariance__out;
                typedef DDS_DCPS_Array_forany< _magnetic_field_covariance_, _magnetic_field_covariance__slice, struct _magnetic_field_covariance__uniq_ > _magnetic_field_covariance__forany;
                static _magnetic_field_covariance__slice *_magnetic_field_covariance__alloc();
                static void _magnetic_field_covariance__free(_magnetic_field_covariance__slice *);
                static void _magnetic_field_covariance__copy(_magnetic_field_covariance__slice *to, const _magnetic_field_covariance__slice *from);
                static _magnetic_field_covariance__slice *_magnetic_field_covariance__dup(const _magnetic_field_covariance__slice *from);
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Vector3_ magnetic_field_;
                _magnetic_field_covariance_ magnetic_field_covariance_;
            };

            typedef DDS_DCPSStruct_var<MagneticField_> MagneticField__var;
            typedef DDS_DCPSStruct_out < MagneticField_> MagneticField__out;

        }

    }

}

#endif /* _H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField__H_ */
