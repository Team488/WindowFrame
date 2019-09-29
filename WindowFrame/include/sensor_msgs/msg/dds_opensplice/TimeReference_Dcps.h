#ifndef _H_79D2704CABA6F9DED46215B8E76E750E_TimeReference_DCPS_H_
#define _H_79D2704CABA6F9DED46215B8E76E750E_TimeReference_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TimeReference_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TimeReference_TypeSupportInterface;

            typedef TimeReference_TypeSupportInterface * TimeReference_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TimeReference_TypeSupportInterface> TimeReference_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TimeReference_TypeSupportInterface> TimeReference_TypeSupportInterface_out;


            class TimeReference_DataWriter;

            typedef TimeReference_DataWriter * TimeReference_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TimeReference_DataWriter> TimeReference_DataWriter_var;
            typedef DDS_DCPSInterface_out < TimeReference_DataWriter> TimeReference_DataWriter_out;


            class TimeReference_DataReader;

            typedef TimeReference_DataReader * TimeReference_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TimeReference_DataReader> TimeReference_DataReader_var;
            typedef DDS_DCPSInterface_out < TimeReference_DataReader> TimeReference_DataReader_out;


            class TimeReference_DataReaderView;

            typedef TimeReference_DataReaderView * TimeReference_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TimeReference_DataReaderView> TimeReference_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TimeReference_DataReaderView> TimeReference_DataReaderView_out;

            struct TimeReference_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TimeReference_, struct TimeReference_Seq_uniq_> TimeReference_Seq;
            typedef DDS_DCPSSequence_var < TimeReference_Seq> TimeReference_Seq_var;
            typedef DDS_DCPSSequence_out < TimeReference_Seq> TimeReference_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs TimeReference_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TimeReference_TypeSupportInterface_ptr _ptr_type;
                typedef TimeReference_TypeSupportInterface_var _var_type;

                static TimeReference_TypeSupportInterface_ptr _duplicate (TimeReference_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TimeReference_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TimeReference_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TimeReference_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TimeReference_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TimeReference_TypeSupportInterface () {};
                ~TimeReference_TypeSupportInterface () {};
            private:
                TimeReference_TypeSupportInterface (const TimeReference_TypeSupportInterface &);
                TimeReference_TypeSupportInterface & operator = (const TimeReference_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs TimeReference_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TimeReference_DataWriter_ptr _ptr_type;
                typedef TimeReference_DataWriter_var _var_type;

                static TimeReference_DataWriter_ptr _duplicate (TimeReference_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TimeReference_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TimeReference_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TimeReference_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TimeReference_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TimeReference_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TimeReference_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TimeReference_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TimeReference_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TimeReference_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TimeReference_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TimeReference_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TimeReference_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TimeReference_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TimeReference_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TimeReference_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TimeReference_& instance_data) = 0;

            protected:
                TimeReference_DataWriter () {};
                ~TimeReference_DataWriter () {};
            private:
                TimeReference_DataWriter (const TimeReference_DataWriter &);
                TimeReference_DataWriter & operator = (const TimeReference_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs TimeReference_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TimeReference_DataReader_ptr _ptr_type;
                typedef TimeReference_DataReader_var _var_type;

                static TimeReference_DataReader_ptr _duplicate (TimeReference_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TimeReference_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TimeReference_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TimeReference_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TimeReference_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TimeReference_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TimeReference_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TimeReference_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TimeReference_& instance) = 0;

            protected:
                TimeReference_DataReader () {};
                ~TimeReference_DataReader () {};
            private:
                TimeReference_DataReader (const TimeReference_DataReader &);
                TimeReference_DataReader & operator = (const TimeReference_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs TimeReference_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TimeReference_DataReaderView_ptr _ptr_type;
                typedef TimeReference_DataReaderView_var _var_type;

                static TimeReference_DataReaderView_ptr _duplicate (TimeReference_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TimeReference_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TimeReference_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TimeReference_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TimeReference_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TimeReference_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TimeReference_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TimeReference_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TimeReference_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TimeReference_& instance) = 0;

            protected:
                TimeReference_DataReaderView () {};
                ~TimeReference_DataReaderView () {};
            private:
                TimeReference_DataReaderView (const TimeReference_DataReaderView &);
                TimeReference_DataReaderView & operator = (const TimeReference_DataReaderView &);
            };
        }

    }

}

#endif
