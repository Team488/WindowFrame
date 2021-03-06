#ifndef _H_5FAF3CACD957DF193045B169109FE222_State_DCPS_H_
#define _H_5FAF3CACD957DF193045B169109FE222_State_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "State_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class State_TypeSupportInterface;

            typedef State_TypeSupportInterface * State_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < State_TypeSupportInterface> State_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < State_TypeSupportInterface> State_TypeSupportInterface_out;


            class State_DataWriter;

            typedef State_DataWriter * State_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < State_DataWriter> State_DataWriter_var;
            typedef DDS_DCPSInterface_out < State_DataWriter> State_DataWriter_out;


            class State_DataReader;

            typedef State_DataReader * State_DataReader_ptr;
            typedef DDS_DCPSInterface_var < State_DataReader> State_DataReader_var;
            typedef DDS_DCPSInterface_out < State_DataReader> State_DataReader_out;


            class State_DataReaderView;

            typedef State_DataReaderView * State_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < State_DataReaderView> State_DataReaderView_var;
            typedef DDS_DCPSInterface_out < State_DataReaderView> State_DataReaderView_out;

            struct State_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < State_, struct State_Seq_uniq_> State_Seq;
            typedef DDS_DCPSSequence_var < State_Seq> State_Seq_var;
            typedef DDS_DCPSSequence_out < State_Seq> State_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs State_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef State_TypeSupportInterface_ptr _ptr_type;
                typedef State_TypeSupportInterface_var _var_type;

                static State_TypeSupportInterface_ptr _duplicate (State_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static State_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static State_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static State_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                State_TypeSupportInterface_ptr _this () { return this; }


            protected:
                State_TypeSupportInterface () {};
                ~State_TypeSupportInterface () {};
            private:
                State_TypeSupportInterface (const State_TypeSupportInterface &);
                State_TypeSupportInterface & operator = (const State_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs State_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef State_DataWriter_ptr _ptr_type;
                typedef State_DataWriter_var _var_type;

                static State_DataWriter_ptr _duplicate (State_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static State_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static State_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static State_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                State_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const State_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const State_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const State_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const State_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const State_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const State_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const State_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const State_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const State_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const State_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (State_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const State_& instance_data) = 0;

            protected:
                State_DataWriter () {};
                ~State_DataWriter () {};
            private:
                State_DataWriter (const State_DataWriter &);
                State_DataWriter & operator = (const State_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs State_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef State_DataReader_ptr _ptr_type;
                typedef State_DataReader_var _var_type;

                static State_DataReader_ptr _duplicate (State_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static State_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static State_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static State_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                State_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (State_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (State_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (State_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (State_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const State_& instance) = 0;

            protected:
                State_DataReader () {};
                ~State_DataReader () {};
            private:
                State_DataReader (const State_DataReader &);
                State_DataReader & operator = (const State_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs State_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef State_DataReaderView_ptr _ptr_type;
                typedef State_DataReaderView_var _var_type;

                static State_DataReaderView_ptr _duplicate (State_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static State_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static State_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static State_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                State_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (State_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (State_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (State_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (State_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (State_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const State_& instance) = 0;

            protected:
                State_DataReaderView () {};
                ~State_DataReaderView () {};
            private:
                State_DataReaderView (const State_DataReaderView &);
                State_DataReaderView & operator = (const State_DataReaderView &);
            };
        }

    }

}

#endif
