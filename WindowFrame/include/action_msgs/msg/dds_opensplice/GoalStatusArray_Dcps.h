#ifndef _H_9FC81A0AE7451538FD5172057BF8EC79_GoalStatusArray_DCPS_H_
#define _H_9FC81A0AE7451538FD5172057BF8EC79_GoalStatusArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GoalStatusArray_.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace action_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class GoalStatusArray_TypeSupportInterface;

            typedef GoalStatusArray_TypeSupportInterface * GoalStatusArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GoalStatusArray_TypeSupportInterface> GoalStatusArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GoalStatusArray_TypeSupportInterface> GoalStatusArray_TypeSupportInterface_out;


            class GoalStatusArray_DataWriter;

            typedef GoalStatusArray_DataWriter * GoalStatusArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GoalStatusArray_DataWriter> GoalStatusArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < GoalStatusArray_DataWriter> GoalStatusArray_DataWriter_out;


            class GoalStatusArray_DataReader;

            typedef GoalStatusArray_DataReader * GoalStatusArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GoalStatusArray_DataReader> GoalStatusArray_DataReader_var;
            typedef DDS_DCPSInterface_out < GoalStatusArray_DataReader> GoalStatusArray_DataReader_out;


            class GoalStatusArray_DataReaderView;

            typedef GoalStatusArray_DataReaderView * GoalStatusArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GoalStatusArray_DataReaderView> GoalStatusArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GoalStatusArray_DataReaderView> GoalStatusArray_DataReaderView_out;

            struct GoalStatusArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GoalStatusArray_, struct GoalStatusArray_Seq_uniq_> GoalStatusArray_Seq;
            typedef DDS_DCPSSequence_var < GoalStatusArray_Seq> GoalStatusArray_Seq_var;
            typedef DDS_DCPSSequence_out < GoalStatusArray_Seq> GoalStatusArray_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalStatusArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GoalStatusArray_TypeSupportInterface_ptr _ptr_type;
                typedef GoalStatusArray_TypeSupportInterface_var _var_type;

                static GoalStatusArray_TypeSupportInterface_ptr _duplicate (GoalStatusArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatusArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatusArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatusArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatusArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GoalStatusArray_TypeSupportInterface () {};
                ~GoalStatusArray_TypeSupportInterface () {};
            private:
                GoalStatusArray_TypeSupportInterface (const GoalStatusArray_TypeSupportInterface &);
                GoalStatusArray_TypeSupportInterface & operator = (const GoalStatusArray_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalStatusArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GoalStatusArray_DataWriter_ptr _ptr_type;
                typedef GoalStatusArray_DataWriter_var _var_type;

                static GoalStatusArray_DataWriter_ptr _duplicate (GoalStatusArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatusArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatusArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatusArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatusArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GoalStatusArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GoalStatusArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GoalStatusArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GoalStatusArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GoalStatusArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GoalStatusArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GoalStatusArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GoalStatusArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GoalStatusArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GoalStatusArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GoalStatusArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalStatusArray_& instance_data) = 0;

            protected:
                GoalStatusArray_DataWriter () {};
                ~GoalStatusArray_DataWriter () {};
            private:
                GoalStatusArray_DataWriter (const GoalStatusArray_DataWriter &);
                GoalStatusArray_DataWriter & operator = (const GoalStatusArray_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalStatusArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GoalStatusArray_DataReader_ptr _ptr_type;
                typedef GoalStatusArray_DataReader_var _var_type;

                static GoalStatusArray_DataReader_ptr _duplicate (GoalStatusArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatusArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatusArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatusArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatusArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalStatusArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalStatusArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalStatusArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalStatusArray_& instance) = 0;

            protected:
                GoalStatusArray_DataReader () {};
                ~GoalStatusArray_DataReader () {};
            private:
                GoalStatusArray_DataReader (const GoalStatusArray_DataReader &);
                GoalStatusArray_DataReader & operator = (const GoalStatusArray_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalStatusArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GoalStatusArray_DataReaderView_ptr _ptr_type;
                typedef GoalStatusArray_DataReaderView_var _var_type;

                static GoalStatusArray_DataReaderView_ptr _duplicate (GoalStatusArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatusArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatusArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatusArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatusArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalStatusArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalStatusArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalStatusArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalStatusArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalStatusArray_& instance) = 0;

            protected:
                GoalStatusArray_DataReaderView () {};
                ~GoalStatusArray_DataReaderView () {};
            private:
                GoalStatusArray_DataReaderView (const GoalStatusArray_DataReaderView &);
                GoalStatusArray_DataReaderView & operator = (const GoalStatusArray_DataReaderView &);
            };
        }

    }

}

#endif
