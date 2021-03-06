#ifndef _H_7DDA8C26B79CA8E1B5DA68B67BC927D7_Time_DCPS_H_
#define _H_7DDA8C26B79CA8E1B5DA68B67BC927D7_Time_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Time_.h"

#include "builtin_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace builtin_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class Time_TypeSupportInterface;

            typedef Time_TypeSupportInterface * Time_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Time_TypeSupportInterface> Time_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Time_TypeSupportInterface> Time_TypeSupportInterface_out;


            class Time_DataWriter;

            typedef Time_DataWriter * Time_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Time_DataWriter> Time_DataWriter_var;
            typedef DDS_DCPSInterface_out < Time_DataWriter> Time_DataWriter_out;


            class Time_DataReader;

            typedef Time_DataReader * Time_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Time_DataReader> Time_DataReader_var;
            typedef DDS_DCPSInterface_out < Time_DataReader> Time_DataReader_out;


            class Time_DataReaderView;

            typedef Time_DataReaderView * Time_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Time_DataReaderView> Time_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Time_DataReaderView> Time_DataReaderView_out;

            struct Time_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Time_, struct Time_Seq_uniq_> Time_Seq;
            typedef DDS_DCPSSequence_var < Time_Seq> Time_Seq_var;
            typedef DDS_DCPSSequence_out < Time_Seq> Time_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Time_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Time_TypeSupportInterface_ptr _ptr_type;
                typedef Time_TypeSupportInterface_var _var_type;

                static Time_TypeSupportInterface_ptr _duplicate (Time_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Time_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Time_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Time_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Time_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Time_TypeSupportInterface () {};
                ~Time_TypeSupportInterface () {};
            private:
                Time_TypeSupportInterface (const Time_TypeSupportInterface &);
                Time_TypeSupportInterface & operator = (const Time_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Time_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Time_DataWriter_ptr _ptr_type;
                typedef Time_DataWriter_var _var_type;

                static Time_DataWriter_ptr _duplicate (Time_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Time_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Time_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Time_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Time_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Time_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Time_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Time_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Time_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Time_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Time_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Time_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Time_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Time_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Time_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Time_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Time_& instance_data) = 0;

            protected:
                Time_DataWriter () {};
                ~Time_DataWriter () {};
            private:
                Time_DataWriter (const Time_DataWriter &);
                Time_DataWriter & operator = (const Time_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Time_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Time_DataReader_ptr _ptr_type;
                typedef Time_DataReader_var _var_type;

                static Time_DataReader_ptr _duplicate (Time_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Time_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Time_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Time_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Time_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Time_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Time_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Time_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Time_& instance) = 0;

            protected:
                Time_DataReader () {};
                ~Time_DataReader () {};
            private:
                Time_DataReader (const Time_DataReader &);
                Time_DataReader & operator = (const Time_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_builtin_interfaces Time_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Time_DataReaderView_ptr _ptr_type;
                typedef Time_DataReaderView_var _var_type;

                static Time_DataReaderView_ptr _duplicate (Time_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Time_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Time_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Time_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Time_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Time_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Time_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Time_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Time_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Time_& instance) = 0;

            protected:
                Time_DataReaderView () {};
                ~Time_DataReaderView () {};
            private:
                Time_DataReaderView (const Time_DataReaderView &);
                Time_DataReaderView & operator = (const Time_DataReaderView &);
            };
        }

    }

}

#endif
