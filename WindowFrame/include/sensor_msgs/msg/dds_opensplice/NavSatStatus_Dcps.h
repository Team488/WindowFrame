#ifndef _H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus_DCPS_H_
#define _H_04FD041E985B752A56E415995DD6D9D7_NavSatStatus_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "NavSatStatus_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class NavSatStatus_TypeSupportInterface;

            typedef NavSatStatus_TypeSupportInterface * NavSatStatus_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NavSatStatus_TypeSupportInterface> NavSatStatus_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NavSatStatus_TypeSupportInterface> NavSatStatus_TypeSupportInterface_out;


            class NavSatStatus_DataWriter;

            typedef NavSatStatus_DataWriter * NavSatStatus_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NavSatStatus_DataWriter> NavSatStatus_DataWriter_var;
            typedef DDS_DCPSInterface_out < NavSatStatus_DataWriter> NavSatStatus_DataWriter_out;


            class NavSatStatus_DataReader;

            typedef NavSatStatus_DataReader * NavSatStatus_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NavSatStatus_DataReader> NavSatStatus_DataReader_var;
            typedef DDS_DCPSInterface_out < NavSatStatus_DataReader> NavSatStatus_DataReader_out;


            class NavSatStatus_DataReaderView;

            typedef NavSatStatus_DataReaderView * NavSatStatus_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NavSatStatus_DataReaderView> NavSatStatus_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NavSatStatus_DataReaderView> NavSatStatus_DataReaderView_out;

            struct NavSatStatus_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < NavSatStatus_, struct NavSatStatus_Seq_uniq_> NavSatStatus_Seq;
            typedef DDS_DCPSSequence_var < NavSatStatus_Seq> NavSatStatus_Seq_var;
            typedef DDS_DCPSSequence_out < NavSatStatus_Seq> NavSatStatus_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatStatus_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NavSatStatus_TypeSupportInterface_ptr _ptr_type;
                typedef NavSatStatus_TypeSupportInterface_var _var_type;

                static NavSatStatus_TypeSupportInterface_ptr _duplicate (NavSatStatus_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatStatus_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NavSatStatus_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatStatus_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatStatus_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NavSatStatus_TypeSupportInterface () {};
                ~NavSatStatus_TypeSupportInterface () {};
            private:
                NavSatStatus_TypeSupportInterface (const NavSatStatus_TypeSupportInterface &);
                NavSatStatus_TypeSupportInterface & operator = (const NavSatStatus_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatStatus_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NavSatStatus_DataWriter_ptr _ptr_type;
                typedef NavSatStatus_DataWriter_var _var_type;

                static NavSatStatus_DataWriter_ptr _duplicate (NavSatStatus_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatStatus_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NavSatStatus_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatStatus_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatStatus_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NavSatStatus_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NavSatStatus_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NavSatStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NavSatStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NavSatStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NavSatStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NavSatStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NavSatStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NavSatStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NavSatStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NavSatStatus_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NavSatStatus_& instance_data) = 0;

            protected:
                NavSatStatus_DataWriter () {};
                ~NavSatStatus_DataWriter () {};
            private:
                NavSatStatus_DataWriter (const NavSatStatus_DataWriter &);
                NavSatStatus_DataWriter & operator = (const NavSatStatus_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatStatus_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NavSatStatus_DataReader_ptr _ptr_type;
                typedef NavSatStatus_DataReader_var _var_type;

                static NavSatStatus_DataReader_ptr _duplicate (NavSatStatus_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatStatus_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NavSatStatus_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatStatus_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatStatus_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NavSatStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NavSatStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NavSatStatus_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NavSatStatus_& instance) = 0;

            protected:
                NavSatStatus_DataReader () {};
                ~NavSatStatus_DataReader () {};
            private:
                NavSatStatus_DataReader (const NavSatStatus_DataReader &);
                NavSatStatus_DataReader & operator = (const NavSatStatus_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatStatus_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NavSatStatus_DataReaderView_ptr _ptr_type;
                typedef NavSatStatus_DataReaderView_var _var_type;

                static NavSatStatus_DataReaderView_ptr _duplicate (NavSatStatus_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatStatus_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NavSatStatus_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatStatus_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatStatus_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NavSatStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NavSatStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NavSatStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NavSatStatus_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NavSatStatus_& instance) = 0;

            protected:
                NavSatStatus_DataReaderView () {};
                ~NavSatStatus_DataReaderView () {};
            private:
                NavSatStatus_DataReaderView (const NavSatStatus_DataReaderView &);
                NavSatStatus_DataReaderView & operator = (const NavSatStatus_DataReaderView &);
            };
        }

    }

}

#endif
