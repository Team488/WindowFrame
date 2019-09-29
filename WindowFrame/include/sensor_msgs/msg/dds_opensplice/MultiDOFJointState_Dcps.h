#ifndef _H_235711209D557B5D9D7C6A016F915D4B_MultiDOFJointState_DCPS_H_
#define _H_235711209D557B5D9D7C6A016F915D4B_MultiDOFJointState_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MultiDOFJointState_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MultiDOFJointState_TypeSupportInterface;

            typedef MultiDOFJointState_TypeSupportInterface * MultiDOFJointState_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointState_TypeSupportInterface> MultiDOFJointState_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointState_TypeSupportInterface> MultiDOFJointState_TypeSupportInterface_out;


            class MultiDOFJointState_DataWriter;

            typedef MultiDOFJointState_DataWriter * MultiDOFJointState_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointState_DataWriter> MultiDOFJointState_DataWriter_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointState_DataWriter> MultiDOFJointState_DataWriter_out;


            class MultiDOFJointState_DataReader;

            typedef MultiDOFJointState_DataReader * MultiDOFJointState_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointState_DataReader> MultiDOFJointState_DataReader_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointState_DataReader> MultiDOFJointState_DataReader_out;


            class MultiDOFJointState_DataReaderView;

            typedef MultiDOFJointState_DataReaderView * MultiDOFJointState_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MultiDOFJointState_DataReaderView> MultiDOFJointState_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MultiDOFJointState_DataReaderView> MultiDOFJointState_DataReaderView_out;

            struct MultiDOFJointState_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MultiDOFJointState_, struct MultiDOFJointState_Seq_uniq_> MultiDOFJointState_Seq;
            typedef DDS_DCPSSequence_var < MultiDOFJointState_Seq> MultiDOFJointState_Seq_var;
            typedef DDS_DCPSSequence_out < MultiDOFJointState_Seq> MultiDOFJointState_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MultiDOFJointState_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MultiDOFJointState_TypeSupportInterface_ptr _ptr_type;
                typedef MultiDOFJointState_TypeSupportInterface_var _var_type;

                static MultiDOFJointState_TypeSupportInterface_ptr _duplicate (MultiDOFJointState_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointState_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointState_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MultiDOFJointState_TypeSupportInterface () {};
                ~MultiDOFJointState_TypeSupportInterface () {};
            private:
                MultiDOFJointState_TypeSupportInterface (const MultiDOFJointState_TypeSupportInterface &);
                MultiDOFJointState_TypeSupportInterface & operator = (const MultiDOFJointState_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MultiDOFJointState_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MultiDOFJointState_DataWriter_ptr _ptr_type;
                typedef MultiDOFJointState_DataWriter_var _var_type;

                static MultiDOFJointState_DataWriter_ptr _duplicate (MultiDOFJointState_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointState_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointState_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MultiDOFJointState_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MultiDOFJointState_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MultiDOFJointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MultiDOFJointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MultiDOFJointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MultiDOFJointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MultiDOFJointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MultiDOFJointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MultiDOFJointState_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MultiDOFJointState_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointState_& instance_data) = 0;

            protected:
                MultiDOFJointState_DataWriter () {};
                ~MultiDOFJointState_DataWriter () {};
            private:
                MultiDOFJointState_DataWriter (const MultiDOFJointState_DataWriter &);
                MultiDOFJointState_DataWriter & operator = (const MultiDOFJointState_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MultiDOFJointState_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MultiDOFJointState_DataReader_ptr _ptr_type;
                typedef MultiDOFJointState_DataReader_var _var_type;

                static MultiDOFJointState_DataReader_ptr _duplicate (MultiDOFJointState_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointState_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointState_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiDOFJointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiDOFJointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointState_& instance) = 0;

            protected:
                MultiDOFJointState_DataReader () {};
                ~MultiDOFJointState_DataReader () {};
            private:
                MultiDOFJointState_DataReader (const MultiDOFJointState_DataReader &);
                MultiDOFJointState_DataReader & operator = (const MultiDOFJointState_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MultiDOFJointState_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MultiDOFJointState_DataReaderView_ptr _ptr_type;
                typedef MultiDOFJointState_DataReaderView_var _var_type;

                static MultiDOFJointState_DataReaderView_ptr _duplicate (MultiDOFJointState_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MultiDOFJointState_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MultiDOFJointState_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MultiDOFJointState_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MultiDOFJointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MultiDOFJointState_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MultiDOFJointState_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MultiDOFJointState_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MultiDOFJointState_& instance) = 0;

            protected:
                MultiDOFJointState_DataReaderView () {};
                ~MultiDOFJointState_DataReaderView () {};
            private:
                MultiDOFJointState_DataReaderView (const MultiDOFJointState_DataReaderView &);
                MultiDOFJointState_DataReaderView & operator = (const MultiDOFJointState_DataReaderView &);
            };
        }

    }

}

#endif
