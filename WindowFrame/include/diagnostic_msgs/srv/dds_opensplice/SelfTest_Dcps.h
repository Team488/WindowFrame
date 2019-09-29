#ifndef _H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest_DCPS_H_
#define _H_9E3729D99DE670EDD72F476DA5A7B12D_SelfTest_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SelfTest_.h"

#include "diagnostic_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace diagnostic_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class SelfTest_Request_TypeSupportInterface;

            typedef SelfTest_Request_TypeSupportInterface * SelfTest_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Request_TypeSupportInterface> SelfTest_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SelfTest_Request_TypeSupportInterface> SelfTest_Request_TypeSupportInterface_out;


            class SelfTest_Request_DataWriter;

            typedef SelfTest_Request_DataWriter * SelfTest_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Request_DataWriter> SelfTest_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SelfTest_Request_DataWriter> SelfTest_Request_DataWriter_out;


            class SelfTest_Request_DataReader;

            typedef SelfTest_Request_DataReader * SelfTest_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Request_DataReader> SelfTest_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SelfTest_Request_DataReader> SelfTest_Request_DataReader_out;


            class SelfTest_Request_DataReaderView;

            typedef SelfTest_Request_DataReaderView * SelfTest_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Request_DataReaderView> SelfTest_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SelfTest_Request_DataReaderView> SelfTest_Request_DataReaderView_out;

            struct SelfTest_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < SelfTest_Request_, struct SelfTest_Request_Seq_uniq_> SelfTest_Request_Seq;
            typedef DDS_DCPSSequence_var < SelfTest_Request_Seq> SelfTest_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SelfTest_Request_Seq> SelfTest_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SelfTest_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SelfTest_Request_TypeSupportInterface_var _var_type;

                static SelfTest_Request_TypeSupportInterface_ptr _duplicate (SelfTest_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SelfTest_Request_TypeSupportInterface () {};
                ~SelfTest_Request_TypeSupportInterface () {};
            private:
                SelfTest_Request_TypeSupportInterface (const SelfTest_Request_TypeSupportInterface &);
                SelfTest_Request_TypeSupportInterface & operator = (const SelfTest_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SelfTest_Request_DataWriter_ptr _ptr_type;
                typedef SelfTest_Request_DataWriter_var _var_type;

                static SelfTest_Request_DataWriter_ptr _duplicate (SelfTest_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SelfTest_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SelfTest_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SelfTest_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SelfTest_Request_& instance_data) = 0;

            protected:
                SelfTest_Request_DataWriter () {};
                ~SelfTest_Request_DataWriter () {};
            private:
                SelfTest_Request_DataWriter (const SelfTest_Request_DataWriter &);
                SelfTest_Request_DataWriter & operator = (const SelfTest_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SelfTest_Request_DataReader_ptr _ptr_type;
                typedef SelfTest_Request_DataReader_var _var_type;

                static SelfTest_Request_DataReader_ptr _duplicate (SelfTest_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SelfTest_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SelfTest_Request_& instance) = 0;

            protected:
                SelfTest_Request_DataReader () {};
                ~SelfTest_Request_DataReader () {};
            private:
                SelfTest_Request_DataReader (const SelfTest_Request_DataReader &);
                SelfTest_Request_DataReader & operator = (const SelfTest_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SelfTest_Request_DataReaderView_ptr _ptr_type;
                typedef SelfTest_Request_DataReaderView_var _var_type;

                static SelfTest_Request_DataReaderView_ptr _duplicate (SelfTest_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SelfTest_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SelfTest_Request_& instance) = 0;

            protected:
                SelfTest_Request_DataReaderView () {};
                ~SelfTest_Request_DataReaderView () {};
            private:
                SelfTest_Request_DataReaderView (const SelfTest_Request_DataReaderView &);
                SelfTest_Request_DataReaderView & operator = (const SelfTest_Request_DataReaderView &);
            };
            class SelfTest_Response_TypeSupportInterface;

            typedef SelfTest_Response_TypeSupportInterface * SelfTest_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Response_TypeSupportInterface> SelfTest_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SelfTest_Response_TypeSupportInterface> SelfTest_Response_TypeSupportInterface_out;


            class SelfTest_Response_DataWriter;

            typedef SelfTest_Response_DataWriter * SelfTest_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Response_DataWriter> SelfTest_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SelfTest_Response_DataWriter> SelfTest_Response_DataWriter_out;


            class SelfTest_Response_DataReader;

            typedef SelfTest_Response_DataReader * SelfTest_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Response_DataReader> SelfTest_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SelfTest_Response_DataReader> SelfTest_Response_DataReader_out;


            class SelfTest_Response_DataReaderView;

            typedef SelfTest_Response_DataReaderView * SelfTest_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SelfTest_Response_DataReaderView> SelfTest_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SelfTest_Response_DataReaderView> SelfTest_Response_DataReaderView_out;

            struct SelfTest_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SelfTest_Response_, struct SelfTest_Response_Seq_uniq_> SelfTest_Response_Seq;
            typedef DDS_DCPSSequence_var < SelfTest_Response_Seq> SelfTest_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SelfTest_Response_Seq> SelfTest_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SelfTest_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SelfTest_Response_TypeSupportInterface_var _var_type;

                static SelfTest_Response_TypeSupportInterface_ptr _duplicate (SelfTest_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SelfTest_Response_TypeSupportInterface () {};
                ~SelfTest_Response_TypeSupportInterface () {};
            private:
                SelfTest_Response_TypeSupportInterface (const SelfTest_Response_TypeSupportInterface &);
                SelfTest_Response_TypeSupportInterface & operator = (const SelfTest_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SelfTest_Response_DataWriter_ptr _ptr_type;
                typedef SelfTest_Response_DataWriter_var _var_type;

                static SelfTest_Response_DataWriter_ptr _duplicate (SelfTest_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SelfTest_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SelfTest_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SelfTest_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SelfTest_Response_& instance_data) = 0;

            protected:
                SelfTest_Response_DataWriter () {};
                ~SelfTest_Response_DataWriter () {};
            private:
                SelfTest_Response_DataWriter (const SelfTest_Response_DataWriter &);
                SelfTest_Response_DataWriter & operator = (const SelfTest_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SelfTest_Response_DataReader_ptr _ptr_type;
                typedef SelfTest_Response_DataReader_var _var_type;

                static SelfTest_Response_DataReader_ptr _duplicate (SelfTest_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SelfTest_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SelfTest_Response_& instance) = 0;

            protected:
                SelfTest_Response_DataReader () {};
                ~SelfTest_Response_DataReader () {};
            private:
                SelfTest_Response_DataReader (const SelfTest_Response_DataReader &);
                SelfTest_Response_DataReader & operator = (const SelfTest_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs SelfTest_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SelfTest_Response_DataReaderView_ptr _ptr_type;
                typedef SelfTest_Response_DataReaderView_var _var_type;

                static SelfTest_Response_DataReaderView_ptr _duplicate (SelfTest_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SelfTest_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SelfTest_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SelfTest_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SelfTest_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SelfTest_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SelfTest_Response_& instance) = 0;

            protected:
                SelfTest_Response_DataReaderView () {};
                ~SelfTest_Response_DataReaderView () {};
            private:
                SelfTest_Response_DataReaderView (const SelfTest_Response_DataReaderView &);
                SelfTest_Response_DataReaderView & operator = (const SelfTest_Response_DataReaderView &);
            };
            class Sample_SelfTest_Request_TypeSupportInterface;

            typedef Sample_SelfTest_Request_TypeSupportInterface * Sample_SelfTest_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Request_TypeSupportInterface> Sample_SelfTest_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Request_TypeSupportInterface> Sample_SelfTest_Request_TypeSupportInterface_out;


            class Sample_SelfTest_Request_DataWriter;

            typedef Sample_SelfTest_Request_DataWriter * Sample_SelfTest_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Request_DataWriter> Sample_SelfTest_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Request_DataWriter> Sample_SelfTest_Request_DataWriter_out;


            class Sample_SelfTest_Request_DataReader;

            typedef Sample_SelfTest_Request_DataReader * Sample_SelfTest_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Request_DataReader> Sample_SelfTest_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Request_DataReader> Sample_SelfTest_Request_DataReader_out;


            class Sample_SelfTest_Request_DataReaderView;

            typedef Sample_SelfTest_Request_DataReaderView * Sample_SelfTest_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Request_DataReaderView> Sample_SelfTest_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Request_DataReaderView> Sample_SelfTest_Request_DataReaderView_out;

            struct Sample_SelfTest_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_SelfTest_Request_, struct Sample_SelfTest_Request_Seq_uniq_> Sample_SelfTest_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SelfTest_Request_Seq> Sample_SelfTest_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SelfTest_Request_Seq> Sample_SelfTest_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SelfTest_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SelfTest_Request_TypeSupportInterface_var _var_type;

                static Sample_SelfTest_Request_TypeSupportInterface_ptr _duplicate (Sample_SelfTest_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SelfTest_Request_TypeSupportInterface () {};
                ~Sample_SelfTest_Request_TypeSupportInterface () {};
            private:
                Sample_SelfTest_Request_TypeSupportInterface (const Sample_SelfTest_Request_TypeSupportInterface &);
                Sample_SelfTest_Request_TypeSupportInterface & operator = (const Sample_SelfTest_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SelfTest_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SelfTest_Request_DataWriter_var _var_type;

                static Sample_SelfTest_Request_DataWriter_ptr _duplicate (Sample_SelfTest_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SelfTest_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SelfTest_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SelfTest_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SelfTest_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SelfTest_Request_& instance_data) = 0;

            protected:
                Sample_SelfTest_Request_DataWriter () {};
                ~Sample_SelfTest_Request_DataWriter () {};
            private:
                Sample_SelfTest_Request_DataWriter (const Sample_SelfTest_Request_DataWriter &);
                Sample_SelfTest_Request_DataWriter & operator = (const Sample_SelfTest_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SelfTest_Request_DataReader_ptr _ptr_type;
                typedef Sample_SelfTest_Request_DataReader_var _var_type;

                static Sample_SelfTest_Request_DataReader_ptr _duplicate (Sample_SelfTest_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SelfTest_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SelfTest_Request_& instance) = 0;

            protected:
                Sample_SelfTest_Request_DataReader () {};
                ~Sample_SelfTest_Request_DataReader () {};
            private:
                Sample_SelfTest_Request_DataReader (const Sample_SelfTest_Request_DataReader &);
                Sample_SelfTest_Request_DataReader & operator = (const Sample_SelfTest_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SelfTest_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SelfTest_Request_DataReaderView_var _var_type;

                static Sample_SelfTest_Request_DataReaderView_ptr _duplicate (Sample_SelfTest_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SelfTest_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SelfTest_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SelfTest_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SelfTest_Request_& instance) = 0;

            protected:
                Sample_SelfTest_Request_DataReaderView () {};
                ~Sample_SelfTest_Request_DataReaderView () {};
            private:
                Sample_SelfTest_Request_DataReaderView (const Sample_SelfTest_Request_DataReaderView &);
                Sample_SelfTest_Request_DataReaderView & operator = (const Sample_SelfTest_Request_DataReaderView &);
            };
            class Sample_SelfTest_Response_TypeSupportInterface;

            typedef Sample_SelfTest_Response_TypeSupportInterface * Sample_SelfTest_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Response_TypeSupportInterface> Sample_SelfTest_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Response_TypeSupportInterface> Sample_SelfTest_Response_TypeSupportInterface_out;


            class Sample_SelfTest_Response_DataWriter;

            typedef Sample_SelfTest_Response_DataWriter * Sample_SelfTest_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Response_DataWriter> Sample_SelfTest_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Response_DataWriter> Sample_SelfTest_Response_DataWriter_out;


            class Sample_SelfTest_Response_DataReader;

            typedef Sample_SelfTest_Response_DataReader * Sample_SelfTest_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Response_DataReader> Sample_SelfTest_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Response_DataReader> Sample_SelfTest_Response_DataReader_out;


            class Sample_SelfTest_Response_DataReaderView;

            typedef Sample_SelfTest_Response_DataReaderView * Sample_SelfTest_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SelfTest_Response_DataReaderView> Sample_SelfTest_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SelfTest_Response_DataReaderView> Sample_SelfTest_Response_DataReaderView_out;

            struct Sample_SelfTest_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SelfTest_Response_, struct Sample_SelfTest_Response_Seq_uniq_> Sample_SelfTest_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SelfTest_Response_Seq> Sample_SelfTest_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SelfTest_Response_Seq> Sample_SelfTest_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SelfTest_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SelfTest_Response_TypeSupportInterface_var _var_type;

                static Sample_SelfTest_Response_TypeSupportInterface_ptr _duplicate (Sample_SelfTest_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SelfTest_Response_TypeSupportInterface () {};
                ~Sample_SelfTest_Response_TypeSupportInterface () {};
            private:
                Sample_SelfTest_Response_TypeSupportInterface (const Sample_SelfTest_Response_TypeSupportInterface &);
                Sample_SelfTest_Response_TypeSupportInterface & operator = (const Sample_SelfTest_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SelfTest_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SelfTest_Response_DataWriter_var _var_type;

                static Sample_SelfTest_Response_DataWriter_ptr _duplicate (Sample_SelfTest_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SelfTest_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SelfTest_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SelfTest_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SelfTest_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SelfTest_Response_& instance_data) = 0;

            protected:
                Sample_SelfTest_Response_DataWriter () {};
                ~Sample_SelfTest_Response_DataWriter () {};
            private:
                Sample_SelfTest_Response_DataWriter (const Sample_SelfTest_Response_DataWriter &);
                Sample_SelfTest_Response_DataWriter & operator = (const Sample_SelfTest_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SelfTest_Response_DataReader_ptr _ptr_type;
                typedef Sample_SelfTest_Response_DataReader_var _var_type;

                static Sample_SelfTest_Response_DataReader_ptr _duplicate (Sample_SelfTest_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SelfTest_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SelfTest_Response_& instance) = 0;

            protected:
                Sample_SelfTest_Response_DataReader () {};
                ~Sample_SelfTest_Response_DataReader () {};
            private:
                Sample_SelfTest_Response_DataReader (const Sample_SelfTest_Response_DataReader &);
                Sample_SelfTest_Response_DataReader & operator = (const Sample_SelfTest_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_diagnostic_msgs Sample_SelfTest_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SelfTest_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SelfTest_Response_DataReaderView_var _var_type;

                static Sample_SelfTest_Response_DataReaderView_ptr _duplicate (Sample_SelfTest_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SelfTest_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SelfTest_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SelfTest_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SelfTest_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SelfTest_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SelfTest_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SelfTest_Response_& instance) = 0;

            protected:
                Sample_SelfTest_Response_DataReaderView () {};
                ~Sample_SelfTest_Response_DataReaderView () {};
            private:
                Sample_SelfTest_Response_DataReaderView (const Sample_SelfTest_Response_DataReaderView &);
                Sample_SelfTest_Response_DataReaderView & operator = (const Sample_SelfTest_Response_DataReaderView &);
            };
        }

    }

}

#endif
