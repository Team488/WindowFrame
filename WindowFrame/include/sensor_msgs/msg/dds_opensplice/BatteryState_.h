#ifndef _H_4477BE25728510F4B26CF8EF92880E22_BatteryState__H_
#define _H_4477BE25728510F4B26CF8EF92880E22_BatteryState__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/Header_.h"
#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            namespace BatteryState_Constants
            {
                const ::DDS::Octet POWER_SUPPLY_STATUS_UNKNOWN_ = 0;

                const ::DDS::Octet POWER_SUPPLY_STATUS_CHARGING_ = 1;

                const ::DDS::Octet POWER_SUPPLY_STATUS_DISCHARGING_ = 2;

                const ::DDS::Octet POWER_SUPPLY_STATUS_NOT_CHARGING_ = 3;

                const ::DDS::Octet POWER_SUPPLY_STATUS_FULL_ = 4;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_UNKNOWN_ = 0;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_GOOD_ = 1;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_OVERHEAT_ = 2;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_DEAD_ = 3;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_OVERVOLTAGE_ = 4;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_UNSPEC_FAILURE_ = 5;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_COLD_ = 6;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE_ = 7;

                const ::DDS::Octet POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE_ = 8;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_UNKNOWN_ = 0;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_NIMH_ = 1;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_LION_ = 2;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_LIPO_ = 3;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_LIFE_ = 4;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_NICD_ = 5;

                const ::DDS::Octet POWER_SUPPLY_TECHNOLOGY_LIMN_ = 6;

            }

            struct ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs BatteryState_
            {
                struct _cell_voltage__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _cell_voltage__seq_uniq_ > _cell_voltage__seq;
                typedef DDS_DCPSSequence_var< _cell_voltage__seq > _cell_voltage__seq_var;
                typedef DDS_DCPSSequence_out< _cell_voltage__seq > _cell_voltage__seq_out;
                struct _cell_temperature__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Float, struct _cell_temperature__seq_uniq_ > _cell_temperature__seq;
                typedef DDS_DCPSSequence_var< _cell_temperature__seq > _cell_temperature__seq_var;
                typedef DDS_DCPSSequence_out< _cell_temperature__seq > _cell_temperature__seq_out;
                ::std_msgs::msg::dds_::Header_ header_;
                ::DDS::Float voltage_;
                ::DDS::Float temperature_;
                ::DDS::Float current_;
                ::DDS::Float charge_;
                ::DDS::Float capacity_;
                ::DDS::Float design_capacity_;
                ::DDS::Float percentage_;
                ::DDS::Octet power_supply_status_;
                ::DDS::Octet power_supply_health_;
                ::DDS::Octet power_supply_technology_;
                ::DDS::Boolean present_;
                _cell_voltage__seq cell_voltage_;
                _cell_temperature__seq cell_temperature_;
                ::DDS::String_mgr location_;
                ::DDS::String_mgr serial_number_;
            };

            typedef DDS_DCPSStruct_var<BatteryState_> BatteryState__var;
            typedef DDS_DCPSStruct_out < BatteryState_> BatteryState__out;

        }

    }

}

#endif /* _H_4477BE25728510F4B26CF8EF92880E22_BatteryState__H_ */
