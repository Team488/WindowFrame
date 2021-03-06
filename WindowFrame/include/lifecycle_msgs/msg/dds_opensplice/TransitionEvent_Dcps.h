#ifndef _H_906C4E38A10C3D8F3562885972A5B9B2_TransitionEvent_DCPS_H_
#define _H_906C4E38A10C3D8F3562885972A5B9B2_TransitionEvent_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TransitionEvent_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TransitionEvent_TypeSupportInterface;

            typedef TransitionEvent_TypeSupportInterface * TransitionEvent_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TransitionEvent_TypeSupportInterface> TransitionEvent_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TransitionEvent_TypeSupportInterface> TransitionEvent_TypeSupportInterface_out;


            class TransitionEvent_DataWriter;

            typedef TransitionEvent_DataWriter * TransitionEvent_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TransitionEvent_DataWriter> TransitionEvent_DataWriter_var;
            typedef DDS_DCPSInterface_out < TransitionEvent_DataWriter> TransitionEvent_DataWriter_out;


            class TransitionEvent_DataReader;

            typedef TransitionEvent_DataReader * TransitionEvent_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TransitionEvent_DataReader> TransitionEvent_DataReader_var;
            typedef DDS_DCPSInterface_out < TransitionEvent_DataReader> TransitionEvent_DataReader_out;


            class TransitionEvent_DataReaderView;

            typedef TransitionEvent_DataReaderView * TransitionEvent_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TransitionEvent_DataReaderView> TransitionEvent_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TransitionEvent_DataReaderView> TransitionEvent_DataReaderView_out;

            struct TransitionEvent_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TransitionEvent_, struct TransitionEvent_Seq_uniq_> TransitionEvent_Seq;
            typedef DDS_DCPSSequence_var < TransitionEvent_Seq> TransitionEvent_Seq_var;
            typedef DDS_DCPSSequence_out < TransitionEvent_Seq> TransitionEvent_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionEvent_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TransitionEvent_TypeSupportInterface_ptr _ptr_type;
                typedef TransitionEvent_TypeSupportInterface_var _var_type;

                static TransitionEvent_TypeSupportInterface_ptr _duplicate (TransitionEvent_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionEvent_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TransitionEvent_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionEvent_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionEvent_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TransitionEvent_TypeSupportInterface () {};
                ~TransitionEvent_TypeSupportInterface () {};
            private:
                TransitionEvent_TypeSupportInterface (const TransitionEvent_TypeSupportInterface &);
                TransitionEvent_TypeSupportInterface & operator = (const TransitionEvent_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionEvent_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TransitionEvent_DataWriter_ptr _ptr_type;
                typedef TransitionEvent_DataWriter_var _var_type;

                static TransitionEvent_DataWriter_ptr _duplicate (TransitionEvent_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionEvent_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TransitionEvent_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionEvent_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionEvent_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TransitionEvent_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TransitionEvent_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TransitionEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TransitionEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TransitionEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TransitionEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TransitionEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TransitionEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TransitionEvent_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TransitionEvent_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TransitionEvent_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransitionEvent_& instance_data) = 0;

            protected:
                TransitionEvent_DataWriter () {};
                ~TransitionEvent_DataWriter () {};
            private:
                TransitionEvent_DataWriter (const TransitionEvent_DataWriter &);
                TransitionEvent_DataWriter & operator = (const TransitionEvent_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionEvent_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TransitionEvent_DataReader_ptr _ptr_type;
                typedef TransitionEvent_DataReader_var _var_type;

                static TransitionEvent_DataReader_ptr _duplicate (TransitionEvent_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionEvent_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TransitionEvent_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionEvent_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionEvent_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TransitionEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TransitionEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TransitionEvent_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransitionEvent_& instance) = 0;

            protected:
                TransitionEvent_DataReader () {};
                ~TransitionEvent_DataReader () {};
            private:
                TransitionEvent_DataReader (const TransitionEvent_DataReader &);
                TransitionEvent_DataReader & operator = (const TransitionEvent_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionEvent_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TransitionEvent_DataReaderView_ptr _ptr_type;
                typedef TransitionEvent_DataReaderView_var _var_type;

                static TransitionEvent_DataReaderView_ptr _duplicate (TransitionEvent_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionEvent_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TransitionEvent_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionEvent_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionEvent_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TransitionEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TransitionEvent_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TransitionEvent_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TransitionEvent_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransitionEvent_& instance) = 0;

            protected:
                TransitionEvent_DataReaderView () {};
                ~TransitionEvent_DataReaderView () {};
            private:
                TransitionEvent_DataReaderView (const TransitionEvent_DataReaderView &);
                TransitionEvent_DataReaderView & operator = (const TransitionEvent_DataReaderView &);
            };
        }

    }

}

#endif
