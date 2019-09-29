#ifndef _H_1DE4FC7FDE0C028958F9CC2E6C75F197_Range_DCPS_H_
#define _H_1DE4FC7FDE0C028958F9CC2E6C75F197_Range_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Range_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Range_TypeSupportInterface;

            typedef Range_TypeSupportInterface * Range_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Range_TypeSupportInterface> Range_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Range_TypeSupportInterface> Range_TypeSupportInterface_out;


            class Range_DataWriter;

            typedef Range_DataWriter * Range_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Range_DataWriter> Range_DataWriter_var;
            typedef DDS_DCPSInterface_out < Range_DataWriter> Range_DataWriter_out;


            class Range_DataReader;

            typedef Range_DataReader * Range_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Range_DataReader> Range_DataReader_var;
            typedef DDS_DCPSInterface_out < Range_DataReader> Range_DataReader_out;


            class Range_DataReaderView;

            typedef Range_DataReaderView * Range_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Range_DataReaderView> Range_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Range_DataReaderView> Range_DataReaderView_out;

            struct Range_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Range_, struct Range_Seq_uniq_> Range_Seq;
            typedef DDS_DCPSSequence_var < Range_Seq> Range_Seq_var;
            typedef DDS_DCPSSequence_out < Range_Seq> Range_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Range_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Range_TypeSupportInterface_ptr _ptr_type;
                typedef Range_TypeSupportInterface_var _var_type;

                static Range_TypeSupportInterface_ptr _duplicate (Range_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Range_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Range_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Range_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Range_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Range_TypeSupportInterface () {};
                ~Range_TypeSupportInterface () {};
            private:
                Range_TypeSupportInterface (const Range_TypeSupportInterface &);
                Range_TypeSupportInterface & operator = (const Range_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Range_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Range_DataWriter_ptr _ptr_type;
                typedef Range_DataWriter_var _var_type;

                static Range_DataWriter_ptr _duplicate (Range_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Range_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Range_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Range_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Range_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Range_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Range_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Range_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Range_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Range_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Range_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Range_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Range_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Range_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Range_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Range_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Range_& instance_data) = 0;

            protected:
                Range_DataWriter () {};
                ~Range_DataWriter () {};
            private:
                Range_DataWriter (const Range_DataWriter &);
                Range_DataWriter & operator = (const Range_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Range_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Range_DataReader_ptr _ptr_type;
                typedef Range_DataReader_var _var_type;

                static Range_DataReader_ptr _duplicate (Range_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Range_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Range_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Range_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Range_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Range_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Range_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Range_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Range_& instance) = 0;

            protected:
                Range_DataReader () {};
                ~Range_DataReader () {};
            private:
                Range_DataReader (const Range_DataReader &);
                Range_DataReader & operator = (const Range_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Range_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Range_DataReaderView_ptr _ptr_type;
                typedef Range_DataReaderView_var _var_type;

                static Range_DataReaderView_ptr _duplicate (Range_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Range_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Range_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Range_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Range_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Range_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Range_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Range_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Range_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Range_& instance) = 0;

            protected:
                Range_DataReaderView () {};
                ~Range_DataReaderView () {};
            private:
                Range_DataReaderView (const Range_DataReaderView &);
                Range_DataReaderView & operator = (const Range_DataReaderView &);
            };
        }

    }

}

#endif
