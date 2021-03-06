#ifndef _H_858E3E4AC88BE8B450F75266848F8220_TransitionDescription_DCPS_H_
#define _H_858E3E4AC88BE8B450F75266848F8220_TransitionDescription_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "TransitionDescription_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class TransitionDescription_TypeSupportInterface;

            typedef TransitionDescription_TypeSupportInterface * TransitionDescription_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < TransitionDescription_TypeSupportInterface> TransitionDescription_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < TransitionDescription_TypeSupportInterface> TransitionDescription_TypeSupportInterface_out;


            class TransitionDescription_DataWriter;

            typedef TransitionDescription_DataWriter * TransitionDescription_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < TransitionDescription_DataWriter> TransitionDescription_DataWriter_var;
            typedef DDS_DCPSInterface_out < TransitionDescription_DataWriter> TransitionDescription_DataWriter_out;


            class TransitionDescription_DataReader;

            typedef TransitionDescription_DataReader * TransitionDescription_DataReader_ptr;
            typedef DDS_DCPSInterface_var < TransitionDescription_DataReader> TransitionDescription_DataReader_var;
            typedef DDS_DCPSInterface_out < TransitionDescription_DataReader> TransitionDescription_DataReader_out;


            class TransitionDescription_DataReaderView;

            typedef TransitionDescription_DataReaderView * TransitionDescription_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < TransitionDescription_DataReaderView> TransitionDescription_DataReaderView_var;
            typedef DDS_DCPSInterface_out < TransitionDescription_DataReaderView> TransitionDescription_DataReaderView_out;

            struct TransitionDescription_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < TransitionDescription_, struct TransitionDescription_Seq_uniq_> TransitionDescription_Seq;
            typedef DDS_DCPSSequence_var < TransitionDescription_Seq> TransitionDescription_Seq_var;
            typedef DDS_DCPSSequence_out < TransitionDescription_Seq> TransitionDescription_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionDescription_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef TransitionDescription_TypeSupportInterface_ptr _ptr_type;
                typedef TransitionDescription_TypeSupportInterface_var _var_type;

                static TransitionDescription_TypeSupportInterface_ptr _duplicate (TransitionDescription_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionDescription_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static TransitionDescription_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionDescription_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionDescription_TypeSupportInterface_ptr _this () { return this; }


            protected:
                TransitionDescription_TypeSupportInterface () {};
                ~TransitionDescription_TypeSupportInterface () {};
            private:
                TransitionDescription_TypeSupportInterface (const TransitionDescription_TypeSupportInterface &);
                TransitionDescription_TypeSupportInterface & operator = (const TransitionDescription_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionDescription_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef TransitionDescription_DataWriter_ptr _ptr_type;
                typedef TransitionDescription_DataWriter_var _var_type;

                static TransitionDescription_DataWriter_ptr _duplicate (TransitionDescription_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionDescription_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static TransitionDescription_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionDescription_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionDescription_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const TransitionDescription_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const TransitionDescription_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const TransitionDescription_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const TransitionDescription_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const TransitionDescription_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const TransitionDescription_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const TransitionDescription_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const TransitionDescription_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const TransitionDescription_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const TransitionDescription_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (TransitionDescription_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransitionDescription_& instance_data) = 0;

            protected:
                TransitionDescription_DataWriter () {};
                ~TransitionDescription_DataWriter () {};
            private:
                TransitionDescription_DataWriter (const TransitionDescription_DataWriter &);
                TransitionDescription_DataWriter & operator = (const TransitionDescription_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionDescription_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef TransitionDescription_DataReader_ptr _ptr_type;
                typedef TransitionDescription_DataReader_var _var_type;

                static TransitionDescription_DataReader_ptr _duplicate (TransitionDescription_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionDescription_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static TransitionDescription_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionDescription_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionDescription_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TransitionDescription_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TransitionDescription_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TransitionDescription_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransitionDescription_& instance) = 0;

            protected:
                TransitionDescription_DataReader () {};
                ~TransitionDescription_DataReader () {};
            private:
                TransitionDescription_DataReader (const TransitionDescription_DataReader &);
                TransitionDescription_DataReader & operator = (const TransitionDescription_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs TransitionDescription_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef TransitionDescription_DataReaderView_ptr _ptr_type;
                typedef TransitionDescription_DataReaderView_var _var_type;

                static TransitionDescription_DataReaderView_ptr _duplicate (TransitionDescription_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static TransitionDescription_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static TransitionDescription_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static TransitionDescription_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                TransitionDescription_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (TransitionDescription_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (TransitionDescription_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (TransitionDescription_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (TransitionDescription_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const TransitionDescription_& instance) = 0;

            protected:
                TransitionDescription_DataReaderView () {};
                ~TransitionDescription_DataReaderView () {};
            private:
                TransitionDescription_DataReaderView (const TransitionDescription_DataReaderView &);
                TransitionDescription_DataReaderView & operator = (const TransitionDescription_DataReaderView &);
            };
        }

    }

}

#endif
