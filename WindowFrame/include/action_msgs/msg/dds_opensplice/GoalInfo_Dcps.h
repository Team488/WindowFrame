#ifndef _H_108FB90AB93A68D5052C1786D319AE59_GoalInfo_DCPS_H_
#define _H_108FB90AB93A68D5052C1786D319AE59_GoalInfo_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GoalInfo_.h"

#include "action_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace action_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class GoalInfo_TypeSupportInterface;

            typedef GoalInfo_TypeSupportInterface * GoalInfo_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GoalInfo_TypeSupportInterface> GoalInfo_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GoalInfo_TypeSupportInterface> GoalInfo_TypeSupportInterface_out;


            class GoalInfo_DataWriter;

            typedef GoalInfo_DataWriter * GoalInfo_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GoalInfo_DataWriter> GoalInfo_DataWriter_var;
            typedef DDS_DCPSInterface_out < GoalInfo_DataWriter> GoalInfo_DataWriter_out;


            class GoalInfo_DataReader;

            typedef GoalInfo_DataReader * GoalInfo_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GoalInfo_DataReader> GoalInfo_DataReader_var;
            typedef DDS_DCPSInterface_out < GoalInfo_DataReader> GoalInfo_DataReader_out;


            class GoalInfo_DataReaderView;

            typedef GoalInfo_DataReaderView * GoalInfo_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GoalInfo_DataReaderView> GoalInfo_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GoalInfo_DataReaderView> GoalInfo_DataReaderView_out;

            struct GoalInfo_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GoalInfo_, struct GoalInfo_Seq_uniq_> GoalInfo_Seq;
            typedef DDS_DCPSSequence_var < GoalInfo_Seq> GoalInfo_Seq_var;
            typedef DDS_DCPSSequence_out < GoalInfo_Seq> GoalInfo_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalInfo_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GoalInfo_TypeSupportInterface_ptr _ptr_type;
                typedef GoalInfo_TypeSupportInterface_var _var_type;

                static GoalInfo_TypeSupportInterface_ptr _duplicate (GoalInfo_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalInfo_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GoalInfo_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalInfo_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalInfo_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GoalInfo_TypeSupportInterface () {};
                ~GoalInfo_TypeSupportInterface () {};
            private:
                GoalInfo_TypeSupportInterface (const GoalInfo_TypeSupportInterface &);
                GoalInfo_TypeSupportInterface & operator = (const GoalInfo_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalInfo_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GoalInfo_DataWriter_ptr _ptr_type;
                typedef GoalInfo_DataWriter_var _var_type;

                static GoalInfo_DataWriter_ptr _duplicate (GoalInfo_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalInfo_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GoalInfo_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalInfo_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalInfo_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GoalInfo_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GoalInfo_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GoalInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GoalInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GoalInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GoalInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GoalInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GoalInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GoalInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GoalInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GoalInfo_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalInfo_& instance_data) = 0;

            protected:
                GoalInfo_DataWriter () {};
                ~GoalInfo_DataWriter () {};
            private:
                GoalInfo_DataWriter (const GoalInfo_DataWriter &);
                GoalInfo_DataWriter & operator = (const GoalInfo_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalInfo_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GoalInfo_DataReader_ptr _ptr_type;
                typedef GoalInfo_DataReader_var _var_type;

                static GoalInfo_DataReader_ptr _duplicate (GoalInfo_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalInfo_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GoalInfo_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalInfo_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalInfo_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalInfo_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalInfo_& instance) = 0;

            protected:
                GoalInfo_DataReader () {};
                ~GoalInfo_DataReader () {};
            private:
                GoalInfo_DataReader (const GoalInfo_DataReader &);
                GoalInfo_DataReader & operator = (const GoalInfo_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_action_msgs GoalInfo_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GoalInfo_DataReaderView_ptr _ptr_type;
                typedef GoalInfo_DataReaderView_var _var_type;

                static GoalInfo_DataReaderView_ptr _duplicate (GoalInfo_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalInfo_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GoalInfo_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalInfo_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalInfo_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalInfo_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalInfo_& instance) = 0;

            protected:
                GoalInfo_DataReaderView () {};
                ~GoalInfo_DataReaderView () {};
            private:
                GoalInfo_DataReaderView (const GoalInfo_DataReaderView &);
                GoalInfo_DataReaderView & operator = (const GoalInfo_DataReaderView &);
            };
        }

    }

}

#endif
