#ifndef _H_10CABBCC101DD2C7E6476DC0C013AC51_BoundedSequences_DCPS_H_
#define _H_10CABBCC101DD2C7E6476DC0C013AC51_BoundedSequences_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "BoundedSequences_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class BoundedSequences_TypeSupportInterface;

            typedef BoundedSequences_TypeSupportInterface * BoundedSequences_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < BoundedSequences_TypeSupportInterface> BoundedSequences_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < BoundedSequences_TypeSupportInterface> BoundedSequences_TypeSupportInterface_out;


            class BoundedSequences_DataWriter;

            typedef BoundedSequences_DataWriter * BoundedSequences_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < BoundedSequences_DataWriter> BoundedSequences_DataWriter_var;
            typedef DDS_DCPSInterface_out < BoundedSequences_DataWriter> BoundedSequences_DataWriter_out;


            class BoundedSequences_DataReader;

            typedef BoundedSequences_DataReader * BoundedSequences_DataReader_ptr;
            typedef DDS_DCPSInterface_var < BoundedSequences_DataReader> BoundedSequences_DataReader_var;
            typedef DDS_DCPSInterface_out < BoundedSequences_DataReader> BoundedSequences_DataReader_out;


            class BoundedSequences_DataReaderView;

            typedef BoundedSequences_DataReaderView * BoundedSequences_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < BoundedSequences_DataReaderView> BoundedSequences_DataReaderView_var;
            typedef DDS_DCPSInterface_out < BoundedSequences_DataReaderView> BoundedSequences_DataReaderView_out;

            struct BoundedSequences_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < BoundedSequences_, struct BoundedSequences_Seq_uniq_> BoundedSequences_Seq;
            typedef DDS_DCPSSequence_var < BoundedSequences_Seq> BoundedSequences_Seq_var;
            typedef DDS_DCPSSequence_out < BoundedSequences_Seq> BoundedSequences_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BoundedSequences_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef BoundedSequences_TypeSupportInterface_ptr _ptr_type;
                typedef BoundedSequences_TypeSupportInterface_var _var_type;

                static BoundedSequences_TypeSupportInterface_ptr _duplicate (BoundedSequences_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BoundedSequences_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static BoundedSequences_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BoundedSequences_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                BoundedSequences_TypeSupportInterface_ptr _this () { return this; }


            protected:
                BoundedSequences_TypeSupportInterface () {};
                ~BoundedSequences_TypeSupportInterface () {};
            private:
                BoundedSequences_TypeSupportInterface (const BoundedSequences_TypeSupportInterface &);
                BoundedSequences_TypeSupportInterface & operator = (const BoundedSequences_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BoundedSequences_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef BoundedSequences_DataWriter_ptr _ptr_type;
                typedef BoundedSequences_DataWriter_var _var_type;

                static BoundedSequences_DataWriter_ptr _duplicate (BoundedSequences_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BoundedSequences_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static BoundedSequences_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BoundedSequences_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                BoundedSequences_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const BoundedSequences_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const BoundedSequences_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const BoundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const BoundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const BoundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const BoundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const BoundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const BoundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const BoundedSequences_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const BoundedSequences_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (BoundedSequences_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BoundedSequences_& instance_data) = 0;

            protected:
                BoundedSequences_DataWriter () {};
                ~BoundedSequences_DataWriter () {};
            private:
                BoundedSequences_DataWriter (const BoundedSequences_DataWriter &);
                BoundedSequences_DataWriter & operator = (const BoundedSequences_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BoundedSequences_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef BoundedSequences_DataReader_ptr _ptr_type;
                typedef BoundedSequences_DataReader_var _var_type;

                static BoundedSequences_DataReader_ptr _duplicate (BoundedSequences_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BoundedSequences_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static BoundedSequences_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BoundedSequences_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                BoundedSequences_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BoundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BoundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BoundedSequences_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BoundedSequences_& instance) = 0;

            protected:
                BoundedSequences_DataReader () {};
                ~BoundedSequences_DataReader () {};
            private:
                BoundedSequences_DataReader (const BoundedSequences_DataReader &);
                BoundedSequences_DataReader & operator = (const BoundedSequences_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BoundedSequences_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef BoundedSequences_DataReaderView_ptr _ptr_type;
                typedef BoundedSequences_DataReaderView_var _var_type;

                static BoundedSequences_DataReaderView_ptr _duplicate (BoundedSequences_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BoundedSequences_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static BoundedSequences_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BoundedSequences_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                BoundedSequences_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BoundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BoundedSequences_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BoundedSequences_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BoundedSequences_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BoundedSequences_& instance) = 0;

            protected:
                BoundedSequences_DataReaderView () {};
                ~BoundedSequences_DataReaderView () {};
            private:
                BoundedSequences_DataReaderView (const BoundedSequences_DataReaderView &);
                BoundedSequences_DataReaderView & operator = (const BoundedSequences_DataReaderView &);
            };
        }

    }

}

#endif
