#ifndef _H_2848E01C2519197871D502D9D55108C3_GoalStatus_DCPS_H_
#define _H_2848E01C2519197871D502D9D55108C3_GoalStatus_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GoalStatus_.h"

#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace actionlib_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class GoalStatus_TypeSupportInterface;

            typedef GoalStatus_TypeSupportInterface * GoalStatus_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GoalStatus_TypeSupportInterface> GoalStatus_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GoalStatus_TypeSupportInterface> GoalStatus_TypeSupportInterface_out;


            class GoalStatus_DataWriter;

            typedef GoalStatus_DataWriter * GoalStatus_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GoalStatus_DataWriter> GoalStatus_DataWriter_var;
            typedef DDS_DCPSInterface_out < GoalStatus_DataWriter> GoalStatus_DataWriter_out;


            class GoalStatus_DataReader;

            typedef GoalStatus_DataReader * GoalStatus_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GoalStatus_DataReader> GoalStatus_DataReader_var;
            typedef DDS_DCPSInterface_out < GoalStatus_DataReader> GoalStatus_DataReader_out;


            class GoalStatus_DataReaderView;

            typedef GoalStatus_DataReaderView * GoalStatus_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GoalStatus_DataReaderView> GoalStatus_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GoalStatus_DataReaderView> GoalStatus_DataReaderView_out;

            struct GoalStatus_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GoalStatus_, struct GoalStatus_Seq_uniq_> GoalStatus_Seq;
            typedef DDS_DCPSSequence_var < GoalStatus_Seq> GoalStatus_Seq_var;
            typedef DDS_DCPSSequence_out < GoalStatus_Seq> GoalStatus_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatus_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GoalStatus_TypeSupportInterface_ptr _ptr_type;
                typedef GoalStatus_TypeSupportInterface_var _var_type;

                static GoalStatus_TypeSupportInterface_ptr _duplicate (GoalStatus_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatus_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatus_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatus_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatus_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GoalStatus_TypeSupportInterface () {};
                ~GoalStatus_TypeSupportInterface () {};
            private:
                GoalStatus_TypeSupportInterface (const GoalStatus_TypeSupportInterface &);
                GoalStatus_TypeSupportInterface & operator = (const GoalStatus_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatus_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GoalStatus_DataWriter_ptr _ptr_type;
                typedef GoalStatus_DataWriter_var _var_type;

                static GoalStatus_DataWriter_ptr _duplicate (GoalStatus_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatus_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatus_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatus_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatus_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GoalStatus_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GoalStatus_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GoalStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GoalStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GoalStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GoalStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GoalStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GoalStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GoalStatus_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GoalStatus_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GoalStatus_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalStatus_& instance_data) = 0;

            protected:
                GoalStatus_DataWriter () {};
                ~GoalStatus_DataWriter () {};
            private:
                GoalStatus_DataWriter (const GoalStatus_DataWriter &);
                GoalStatus_DataWriter & operator = (const GoalStatus_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatus_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GoalStatus_DataReader_ptr _ptr_type;
                typedef GoalStatus_DataReader_var _var_type;

                static GoalStatus_DataReader_ptr _duplicate (GoalStatus_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatus_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatus_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatus_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatus_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalStatus_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalStatus_& instance) = 0;

            protected:
                GoalStatus_DataReader () {};
                ~GoalStatus_DataReader () {};
            private:
                GoalStatus_DataReader (const GoalStatus_DataReader &);
                GoalStatus_DataReader & operator = (const GoalStatus_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalStatus_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GoalStatus_DataReaderView_ptr _ptr_type;
                typedef GoalStatus_DataReaderView_var _var_type;

                static GoalStatus_DataReaderView_ptr _duplicate (GoalStatus_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalStatus_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GoalStatus_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalStatus_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalStatus_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalStatus_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalStatus_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalStatus_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalStatus_& instance) = 0;

            protected:
                GoalStatus_DataReaderView () {};
                ~GoalStatus_DataReaderView () {};
            private:
                GoalStatus_DataReaderView (const GoalStatus_DataReaderView &);
                GoalStatus_DataReaderView & operator = (const GoalStatus_DataReaderView &);
            };
        }

    }

}

#endif
