#ifndef _H_E72ACE1F888936C278F409DEB364A493_BasicTypes_DCPS_H_
#define _H_E72ACE1F888936C278F409DEB364A493_BasicTypes_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "BasicTypes_.h"

#include "test_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace test_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class BasicTypes_TypeSupportInterface;

            typedef BasicTypes_TypeSupportInterface * BasicTypes_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_TypeSupportInterface> BasicTypes_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < BasicTypes_TypeSupportInterface> BasicTypes_TypeSupportInterface_out;


            class BasicTypes_DataWriter;

            typedef BasicTypes_DataWriter * BasicTypes_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_DataWriter> BasicTypes_DataWriter_var;
            typedef DDS_DCPSInterface_out < BasicTypes_DataWriter> BasicTypes_DataWriter_out;


            class BasicTypes_DataReader;

            typedef BasicTypes_DataReader * BasicTypes_DataReader_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_DataReader> BasicTypes_DataReader_var;
            typedef DDS_DCPSInterface_out < BasicTypes_DataReader> BasicTypes_DataReader_out;


            class BasicTypes_DataReaderView;

            typedef BasicTypes_DataReaderView * BasicTypes_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < BasicTypes_DataReaderView> BasicTypes_DataReaderView_var;
            typedef DDS_DCPSInterface_out < BasicTypes_DataReaderView> BasicTypes_DataReaderView_out;

            struct BasicTypes_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < BasicTypes_, struct BasicTypes_Seq_uniq_> BasicTypes_Seq;
            typedef DDS_DCPSSequence_var < BasicTypes_Seq> BasicTypes_Seq_var;
            typedef DDS_DCPSSequence_out < BasicTypes_Seq> BasicTypes_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef BasicTypes_TypeSupportInterface_ptr _ptr_type;
                typedef BasicTypes_TypeSupportInterface_var _var_type;

                static BasicTypes_TypeSupportInterface_ptr _duplicate (BasicTypes_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_TypeSupportInterface_ptr _this () { return this; }


            protected:
                BasicTypes_TypeSupportInterface () {};
                ~BasicTypes_TypeSupportInterface () {};
            private:
                BasicTypes_TypeSupportInterface (const BasicTypes_TypeSupportInterface &);
                BasicTypes_TypeSupportInterface & operator = (const BasicTypes_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef BasicTypes_DataWriter_ptr _ptr_type;
                typedef BasicTypes_DataWriter_var _var_type;

                static BasicTypes_DataWriter_ptr _duplicate (BasicTypes_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const BasicTypes_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const BasicTypes_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const BasicTypes_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const BasicTypes_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const BasicTypes_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const BasicTypes_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const BasicTypes_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const BasicTypes_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const BasicTypes_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const BasicTypes_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (BasicTypes_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_& instance_data) = 0;

            protected:
                BasicTypes_DataWriter () {};
                ~BasicTypes_DataWriter () {};
            private:
                BasicTypes_DataWriter (const BasicTypes_DataWriter &);
                BasicTypes_DataWriter & operator = (const BasicTypes_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef BasicTypes_DataReader_ptr _ptr_type;
                typedef BasicTypes_DataReader_var _var_type;

                static BasicTypes_DataReader_ptr _duplicate (BasicTypes_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BasicTypes_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BasicTypes_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BasicTypes_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_& instance) = 0;

            protected:
                BasicTypes_DataReader () {};
                ~BasicTypes_DataReader () {};
            private:
                BasicTypes_DataReader (const BasicTypes_DataReader &);
                BasicTypes_DataReader & operator = (const BasicTypes_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_test_msgs BasicTypes_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef BasicTypes_DataReaderView_ptr _ptr_type;
                typedef BasicTypes_DataReaderView_var _var_type;

                static BasicTypes_DataReaderView_ptr _duplicate (BasicTypes_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static BasicTypes_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static BasicTypes_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static BasicTypes_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                BasicTypes_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (BasicTypes_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (BasicTypes_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (BasicTypes_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (BasicTypes_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const BasicTypes_& instance) = 0;

            protected:
                BasicTypes_DataReaderView () {};
                ~BasicTypes_DataReaderView () {};
            private:
                BasicTypes_DataReaderView (const BasicTypes_DataReaderView &);
                BasicTypes_DataReaderView & operator = (const BasicTypes_DataReaderView &);
            };
        }

    }

}

#endif
