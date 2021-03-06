#ifndef _H_EE32E36999A3803A1312A953E76D688C_KeyValue_DCPS_H_
#define _H_EE32E36999A3803A1312A953E76D688C_KeyValue_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "KeyValue_.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace diagnostic_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class KeyValue_TypeSupportInterface;

            typedef KeyValue_TypeSupportInterface * KeyValue_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < KeyValue_TypeSupportInterface> KeyValue_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < KeyValue_TypeSupportInterface> KeyValue_TypeSupportInterface_out;


            class KeyValue_DataWriter;

            typedef KeyValue_DataWriter * KeyValue_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < KeyValue_DataWriter> KeyValue_DataWriter_var;
            typedef DDS_DCPSInterface_out < KeyValue_DataWriter> KeyValue_DataWriter_out;


            class KeyValue_DataReader;

            typedef KeyValue_DataReader * KeyValue_DataReader_ptr;
            typedef DDS_DCPSInterface_var < KeyValue_DataReader> KeyValue_DataReader_var;
            typedef DDS_DCPSInterface_out < KeyValue_DataReader> KeyValue_DataReader_out;


            class KeyValue_DataReaderView;

            typedef KeyValue_DataReaderView * KeyValue_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < KeyValue_DataReaderView> KeyValue_DataReaderView_var;
            typedef DDS_DCPSInterface_out < KeyValue_DataReaderView> KeyValue_DataReaderView_out;

            struct KeyValue_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < KeyValue_, struct KeyValue_Seq_uniq_> KeyValue_Seq;
            typedef DDS_DCPSSequence_var < KeyValue_Seq> KeyValue_Seq_var;
            typedef DDS_DCPSSequence_out < KeyValue_Seq> KeyValue_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs KeyValue_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef KeyValue_TypeSupportInterface_ptr _ptr_type;
                typedef KeyValue_TypeSupportInterface_var _var_type;

                static KeyValue_TypeSupportInterface_ptr _duplicate (KeyValue_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static KeyValue_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static KeyValue_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static KeyValue_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                KeyValue_TypeSupportInterface_ptr _this () { return this; }


            protected:
                KeyValue_TypeSupportInterface () {};
                ~KeyValue_TypeSupportInterface () {};
            private:
                KeyValue_TypeSupportInterface (const KeyValue_TypeSupportInterface &);
                KeyValue_TypeSupportInterface & operator = (const KeyValue_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs KeyValue_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef KeyValue_DataWriter_ptr _ptr_type;
                typedef KeyValue_DataWriter_var _var_type;

                static KeyValue_DataWriter_ptr _duplicate (KeyValue_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static KeyValue_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static KeyValue_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static KeyValue_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                KeyValue_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const KeyValue_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const KeyValue_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const KeyValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const KeyValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const KeyValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const KeyValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const KeyValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const KeyValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const KeyValue_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const KeyValue_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (KeyValue_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const KeyValue_& instance_data) = 0;

            protected:
                KeyValue_DataWriter () {};
                ~KeyValue_DataWriter () {};
            private:
                KeyValue_DataWriter (const KeyValue_DataWriter &);
                KeyValue_DataWriter & operator = (const KeyValue_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs KeyValue_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef KeyValue_DataReader_ptr _ptr_type;
                typedef KeyValue_DataReader_var _var_type;

                static KeyValue_DataReader_ptr _duplicate (KeyValue_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static KeyValue_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static KeyValue_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static KeyValue_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                KeyValue_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (KeyValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (KeyValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (KeyValue_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const KeyValue_& instance) = 0;

            protected:
                KeyValue_DataReader () {};
                ~KeyValue_DataReader () {};
            private:
                KeyValue_DataReader (const KeyValue_DataReader &);
                KeyValue_DataReader & operator = (const KeyValue_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs KeyValue_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef KeyValue_DataReaderView_ptr _ptr_type;
                typedef KeyValue_DataReaderView_var _var_type;

                static KeyValue_DataReaderView_ptr _duplicate (KeyValue_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static KeyValue_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static KeyValue_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static KeyValue_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                KeyValue_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (KeyValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (KeyValue_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (KeyValue_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (KeyValue_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const KeyValue_& instance) = 0;

            protected:
                KeyValue_DataReaderView () {};
                ~KeyValue_DataReaderView () {};
            private:
                KeyValue_DataReaderView (const KeyValue_DataReaderView &);
                KeyValue_DataReaderView & operator = (const KeyValue_DataReaderView &);
            };
        }

    }

}

#endif
