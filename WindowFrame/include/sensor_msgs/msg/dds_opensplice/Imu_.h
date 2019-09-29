#ifndef _H_73662F4D0B3495B26F9CC0697D742359_Imu__H_
#define _H_73662F4D0B3495B26F9CC0697D742359_Imu__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "geometry_msgs/msg/dds_opensplice/Quaternion_.h"
#include "geometry_msgs/msg/dds_opensplice/Vector3_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Imu_
            {
                struct _orientation_covariance__uniq_{};
                typedef ::DDS::Double _orientation_covariance__slice;
                typedef ::DDS::Double _orientation_covariance_[9];
                typedef DDS_DCPS_FArray_var< _orientation_covariance_, _orientation_covariance__slice, struct _orientation_covariance__uniq_ > _orientation_covariance__var;
                typedef _orientation_covariance_ _orientation_covariance__out;
                typedef DDS_DCPS_Array_forany< _orientation_covariance_, _orientation_covariance__slice, struct _orientation_covariance__uniq_ > _orientation_covariance__forany;
                static _orientation_covariance__slice *_orientation_covariance__alloc();
                static void _orientation_covariance__free(_orientation_covariance__slice *);
                static void _orientation_covariance__copy(_orientation_covariance__slice *to, const _orientation_covariance__slice *from);
                static _orientation_covariance__slice *_orientation_covariance__dup(const _orientation_covariance__slice *from);
                struct _angular_velocity_covariance__uniq_{};
                typedef ::DDS::Double _angular_velocity_covariance__slice;
                typedef ::DDS::Double _angular_velocity_covariance_[9];
                typedef DDS_DCPS_FArray_var< _angular_velocity_covariance_, _angular_velocity_covariance__slice, struct _angular_velocity_covariance__uniq_ > _angular_velocity_covariance__var;
                typedef _angular_velocity_covariance_ _angular_velocity_covariance__out;
                typedef DDS_DCPS_Array_forany< _angular_velocity_covariance_, _angular_velocity_covariance__slice, struct _angular_velocity_covariance__uniq_ > _angular_velocity_covariance__forany;
                static _angular_velocity_covariance__slice *_angular_velocity_covariance__alloc();
                static void _angular_velocity_covariance__free(_angular_velocity_covariance__slice *);
                static void _angular_velocity_covariance__copy(_angular_velocity_covariance__slice *to, const _angular_velocity_covariance__slice *from);
                static _angular_velocity_covariance__slice *_angular_velocity_covariance__dup(const _angular_velocity_covariance__slice *from);
                struct _linear_acceleration_covariance__uniq_{};
                typedef ::DDS::Double _linear_acceleration_covariance__slice;
                typedef ::DDS::Double _linear_acceleration_covariance_[9];
                typedef DDS_DCPS_FArray_var< _linear_acceleration_covariance_, _linear_acceleration_covariance__slice, struct _linear_acceleration_covariance__uniq_ > _linear_acceleration_covariance__var;
                typedef _linear_acceleration_covariance_ _linear_acceleration_covariance__out;
                typedef DDS_DCPS_Array_forany< _linear_acceleration_covariance_, _linear_acceleration_covariance__slice, struct _linear_acceleration_covariance__uniq_ > _linear_acceleration_covariance__forany;
                static _linear_acceleration_covariance__slice *_linear_acceleration_covariance__alloc();
                static void _linear_acceleration_covariance__free(_linear_acceleration_covariance__slice *);
                static void _linear_acceleration_covariance__copy(_linear_acceleration_covariance__slice *to, const _linear_acceleration_covariance__slice *from);
                static _linear_acceleration_covariance__slice *_linear_acceleration_covariance__dup(const _linear_acceleration_covariance__slice *from);
                ::std_msgs::msg::dds_::Header_ header_;
                ::geometry_msgs::msg::dds_::Quaternion_ orientation_;
                _orientation_covariance_ orientation_covariance_;
                ::geometry_msgs::msg::dds_::Vector3_ angular_velocity_;
                _angular_velocity_covariance_ angular_velocity_covariance_;
                ::geometry_msgs::msg::dds_::Vector3_ linear_acceleration_;
                _linear_acceleration_covariance_ linear_acceleration_covariance_;
            };

            typedef DDS_DCPSStruct_var<Imu_> Imu__var;
            typedef DDS_DCPSStruct_out < Imu_> Imu__out;

        }

    }

}

#endif /* _H_73662F4D0B3495B26F9CC0697D742359_Imu__H_ */
