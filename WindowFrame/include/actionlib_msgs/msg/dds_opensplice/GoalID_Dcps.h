#ifndef _H_863D3C8522EB655A70D2EFB95E4FEB46_GoalID_DCPS_H_
#define _H_863D3C8522EB655A70D2EFB95E4FEB46_GoalID_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GoalID_.h"

#include "actionlib_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace actionlib_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class GoalID_TypeSupportInterface;

            typedef GoalID_TypeSupportInterface * GoalID_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GoalID_TypeSupportInterface> GoalID_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GoalID_TypeSupportInterface> GoalID_TypeSupportInterface_out;


            class GoalID_DataWriter;

            typedef GoalID_DataWriter * GoalID_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GoalID_DataWriter> GoalID_DataWriter_var;
            typedef DDS_DCPSInterface_out < GoalID_DataWriter> GoalID_DataWriter_out;


            class GoalID_DataReader;

            typedef GoalID_DataReader * GoalID_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GoalID_DataReader> GoalID_DataReader_var;
            typedef DDS_DCPSInterface_out < GoalID_DataReader> GoalID_DataReader_out;


            class GoalID_DataReaderView;

            typedef GoalID_DataReaderView * GoalID_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GoalID_DataReaderView> GoalID_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GoalID_DataReaderView> GoalID_DataReaderView_out;

            struct GoalID_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GoalID_, struct GoalID_Seq_uniq_> GoalID_Seq;
            typedef DDS_DCPSSequence_var < GoalID_Seq> GoalID_Seq_var;
            typedef DDS_DCPSSequence_out < GoalID_Seq> GoalID_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalID_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GoalID_TypeSupportInterface_ptr _ptr_type;
                typedef GoalID_TypeSupportInterface_var _var_type;

                static GoalID_TypeSupportInterface_ptr _duplicate (GoalID_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalID_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GoalID_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalID_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalID_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GoalID_TypeSupportInterface () {};
                ~GoalID_TypeSupportInterface () {};
            private:
                GoalID_TypeSupportInterface (const GoalID_TypeSupportInterface &);
                GoalID_TypeSupportInterface & operator = (const GoalID_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalID_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GoalID_DataWriter_ptr _ptr_type;
                typedef GoalID_DataWriter_var _var_type;

                static GoalID_DataWriter_ptr _duplicate (GoalID_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalID_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GoalID_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalID_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalID_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GoalID_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GoalID_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GoalID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GoalID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GoalID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GoalID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GoalID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GoalID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GoalID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GoalID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GoalID_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalID_& instance_data) = 0;

            protected:
                GoalID_DataWriter () {};
                ~GoalID_DataWriter () {};
            private:
                GoalID_DataWriter (const GoalID_DataWriter &);
                GoalID_DataWriter & operator = (const GoalID_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalID_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GoalID_DataReader_ptr _ptr_type;
                typedef GoalID_DataReader_var _var_type;

                static GoalID_DataReader_ptr _duplicate (GoalID_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalID_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GoalID_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalID_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalID_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalID_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalID_& instance) = 0;

            protected:
                GoalID_DataReader () {};
                ~GoalID_DataReader () {};
            private:
                GoalID_DataReader (const GoalID_DataReader &);
                GoalID_DataReader & operator = (const GoalID_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_actionlib_msgs GoalID_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GoalID_DataReaderView_ptr _ptr_type;
                typedef GoalID_DataReaderView_var _var_type;

                static GoalID_DataReaderView_ptr _duplicate (GoalID_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GoalID_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GoalID_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GoalID_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GoalID_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GoalID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GoalID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GoalID_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GoalID_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GoalID_& instance) = 0;

            protected:
                GoalID_DataReaderView () {};
                ~GoalID_DataReaderView () {};
            private:
                GoalID_DataReaderView (const GoalID_DataReaderView &);
                GoalID_DataReaderView & operator = (const GoalID_DataReaderView &);
            };
        }

    }

}

#endif
