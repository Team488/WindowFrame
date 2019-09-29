#ifndef _H_5A338E42E3EF6DAC7E121E23C912D2CC_GetAvailableTransitions_DCPS_H_
#define _H_5A338E42E3EF6DAC7E121E23C912D2CC_GetAvailableTransitions_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetAvailableTransitions_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetAvailableTransitions_Request_TypeSupportInterface;

            typedef GetAvailableTransitions_Request_TypeSupportInterface * GetAvailableTransitions_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Request_TypeSupportInterface> GetAvailableTransitions_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Request_TypeSupportInterface> GetAvailableTransitions_Request_TypeSupportInterface_out;


            class GetAvailableTransitions_Request_DataWriter;

            typedef GetAvailableTransitions_Request_DataWriter * GetAvailableTransitions_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Request_DataWriter> GetAvailableTransitions_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Request_DataWriter> GetAvailableTransitions_Request_DataWriter_out;


            class GetAvailableTransitions_Request_DataReader;

            typedef GetAvailableTransitions_Request_DataReader * GetAvailableTransitions_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Request_DataReader> GetAvailableTransitions_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Request_DataReader> GetAvailableTransitions_Request_DataReader_out;


            class GetAvailableTransitions_Request_DataReaderView;

            typedef GetAvailableTransitions_Request_DataReaderView * GetAvailableTransitions_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Request_DataReaderView> GetAvailableTransitions_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Request_DataReaderView> GetAvailableTransitions_Request_DataReaderView_out;

            struct GetAvailableTransitions_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetAvailableTransitions_Request_, struct GetAvailableTransitions_Request_Seq_uniq_> GetAvailableTransitions_Request_Seq;
            typedef DDS_DCPSSequence_var < GetAvailableTransitions_Request_Seq> GetAvailableTransitions_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetAvailableTransitions_Request_Seq> GetAvailableTransitions_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetAvailableTransitions_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetAvailableTransitions_Request_TypeSupportInterface_var _var_type;

                static GetAvailableTransitions_Request_TypeSupportInterface_ptr _duplicate (GetAvailableTransitions_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetAvailableTransitions_Request_TypeSupportInterface () {};
                ~GetAvailableTransitions_Request_TypeSupportInterface () {};
            private:
                GetAvailableTransitions_Request_TypeSupportInterface (const GetAvailableTransitions_Request_TypeSupportInterface &);
                GetAvailableTransitions_Request_TypeSupportInterface & operator = (const GetAvailableTransitions_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetAvailableTransitions_Request_DataWriter_ptr _ptr_type;
                typedef GetAvailableTransitions_Request_DataWriter_var _var_type;

                static GetAvailableTransitions_Request_DataWriter_ptr _duplicate (GetAvailableTransitions_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetAvailableTransitions_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetAvailableTransitions_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetAvailableTransitions_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableTransitions_Request_& instance_data) = 0;

            protected:
                GetAvailableTransitions_Request_DataWriter () {};
                ~GetAvailableTransitions_Request_DataWriter () {};
            private:
                GetAvailableTransitions_Request_DataWriter (const GetAvailableTransitions_Request_DataWriter &);
                GetAvailableTransitions_Request_DataWriter & operator = (const GetAvailableTransitions_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetAvailableTransitions_Request_DataReader_ptr _ptr_type;
                typedef GetAvailableTransitions_Request_DataReader_var _var_type;

                static GetAvailableTransitions_Request_DataReader_ptr _duplicate (GetAvailableTransitions_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableTransitions_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableTransitions_Request_& instance) = 0;

            protected:
                GetAvailableTransitions_Request_DataReader () {};
                ~GetAvailableTransitions_Request_DataReader () {};
            private:
                GetAvailableTransitions_Request_DataReader (const GetAvailableTransitions_Request_DataReader &);
                GetAvailableTransitions_Request_DataReader & operator = (const GetAvailableTransitions_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetAvailableTransitions_Request_DataReaderView_ptr _ptr_type;
                typedef GetAvailableTransitions_Request_DataReaderView_var _var_type;

                static GetAvailableTransitions_Request_DataReaderView_ptr _duplicate (GetAvailableTransitions_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableTransitions_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableTransitions_Request_& instance) = 0;

            protected:
                GetAvailableTransitions_Request_DataReaderView () {};
                ~GetAvailableTransitions_Request_DataReaderView () {};
            private:
                GetAvailableTransitions_Request_DataReaderView (const GetAvailableTransitions_Request_DataReaderView &);
                GetAvailableTransitions_Request_DataReaderView & operator = (const GetAvailableTransitions_Request_DataReaderView &);
            };
            class GetAvailableTransitions_Response_TypeSupportInterface;

            typedef GetAvailableTransitions_Response_TypeSupportInterface * GetAvailableTransitions_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Response_TypeSupportInterface> GetAvailableTransitions_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Response_TypeSupportInterface> GetAvailableTransitions_Response_TypeSupportInterface_out;


            class GetAvailableTransitions_Response_DataWriter;

            typedef GetAvailableTransitions_Response_DataWriter * GetAvailableTransitions_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Response_DataWriter> GetAvailableTransitions_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Response_DataWriter> GetAvailableTransitions_Response_DataWriter_out;


            class GetAvailableTransitions_Response_DataReader;

            typedef GetAvailableTransitions_Response_DataReader * GetAvailableTransitions_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Response_DataReader> GetAvailableTransitions_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Response_DataReader> GetAvailableTransitions_Response_DataReader_out;


            class GetAvailableTransitions_Response_DataReaderView;

            typedef GetAvailableTransitions_Response_DataReaderView * GetAvailableTransitions_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableTransitions_Response_DataReaderView> GetAvailableTransitions_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetAvailableTransitions_Response_DataReaderView> GetAvailableTransitions_Response_DataReaderView_out;

            struct GetAvailableTransitions_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetAvailableTransitions_Response_, struct GetAvailableTransitions_Response_Seq_uniq_> GetAvailableTransitions_Response_Seq;
            typedef DDS_DCPSSequence_var < GetAvailableTransitions_Response_Seq> GetAvailableTransitions_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetAvailableTransitions_Response_Seq> GetAvailableTransitions_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetAvailableTransitions_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetAvailableTransitions_Response_TypeSupportInterface_var _var_type;

                static GetAvailableTransitions_Response_TypeSupportInterface_ptr _duplicate (GetAvailableTransitions_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetAvailableTransitions_Response_TypeSupportInterface () {};
                ~GetAvailableTransitions_Response_TypeSupportInterface () {};
            private:
                GetAvailableTransitions_Response_TypeSupportInterface (const GetAvailableTransitions_Response_TypeSupportInterface &);
                GetAvailableTransitions_Response_TypeSupportInterface & operator = (const GetAvailableTransitions_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetAvailableTransitions_Response_DataWriter_ptr _ptr_type;
                typedef GetAvailableTransitions_Response_DataWriter_var _var_type;

                static GetAvailableTransitions_Response_DataWriter_ptr _duplicate (GetAvailableTransitions_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetAvailableTransitions_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetAvailableTransitions_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetAvailableTransitions_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableTransitions_Response_& instance_data) = 0;

            protected:
                GetAvailableTransitions_Response_DataWriter () {};
                ~GetAvailableTransitions_Response_DataWriter () {};
            private:
                GetAvailableTransitions_Response_DataWriter (const GetAvailableTransitions_Response_DataWriter &);
                GetAvailableTransitions_Response_DataWriter & operator = (const GetAvailableTransitions_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetAvailableTransitions_Response_DataReader_ptr _ptr_type;
                typedef GetAvailableTransitions_Response_DataReader_var _var_type;

                static GetAvailableTransitions_Response_DataReader_ptr _duplicate (GetAvailableTransitions_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableTransitions_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableTransitions_Response_& instance) = 0;

            protected:
                GetAvailableTransitions_Response_DataReader () {};
                ~GetAvailableTransitions_Response_DataReader () {};
            private:
                GetAvailableTransitions_Response_DataReader (const GetAvailableTransitions_Response_DataReader &);
                GetAvailableTransitions_Response_DataReader & operator = (const GetAvailableTransitions_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableTransitions_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetAvailableTransitions_Response_DataReaderView_ptr _ptr_type;
                typedef GetAvailableTransitions_Response_DataReaderView_var _var_type;

                static GetAvailableTransitions_Response_DataReaderView_ptr _duplicate (GetAvailableTransitions_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableTransitions_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableTransitions_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableTransitions_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableTransitions_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableTransitions_Response_& instance) = 0;

            protected:
                GetAvailableTransitions_Response_DataReaderView () {};
                ~GetAvailableTransitions_Response_DataReaderView () {};
            private:
                GetAvailableTransitions_Response_DataReaderView (const GetAvailableTransitions_Response_DataReaderView &);
                GetAvailableTransitions_Response_DataReaderView & operator = (const GetAvailableTransitions_Response_DataReaderView &);
            };
            class Sample_GetAvailableTransitions_Request_TypeSupportInterface;

            typedef Sample_GetAvailableTransitions_Request_TypeSupportInterface * Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Request_TypeSupportInterface> Sample_GetAvailableTransitions_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Request_TypeSupportInterface> Sample_GetAvailableTransitions_Request_TypeSupportInterface_out;


            class Sample_GetAvailableTransitions_Request_DataWriter;

            typedef Sample_GetAvailableTransitions_Request_DataWriter * Sample_GetAvailableTransitions_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Request_DataWriter> Sample_GetAvailableTransitions_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Request_DataWriter> Sample_GetAvailableTransitions_Request_DataWriter_out;


            class Sample_GetAvailableTransitions_Request_DataReader;

            typedef Sample_GetAvailableTransitions_Request_DataReader * Sample_GetAvailableTransitions_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Request_DataReader> Sample_GetAvailableTransitions_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Request_DataReader> Sample_GetAvailableTransitions_Request_DataReader_out;


            class Sample_GetAvailableTransitions_Request_DataReaderView;

            typedef Sample_GetAvailableTransitions_Request_DataReaderView * Sample_GetAvailableTransitions_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Request_DataReaderView> Sample_GetAvailableTransitions_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Request_DataReaderView> Sample_GetAvailableTransitions_Request_DataReaderView_out;

            struct Sample_GetAvailableTransitions_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetAvailableTransitions_Request_, struct Sample_GetAvailableTransitions_Request_Seq_uniq_> Sample_GetAvailableTransitions_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetAvailableTransitions_Request_Seq> Sample_GetAvailableTransitions_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetAvailableTransitions_Request_Seq> Sample_GetAvailableTransitions_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Request_TypeSupportInterface_var _var_type;

                static Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr _duplicate (Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetAvailableTransitions_Request_TypeSupportInterface () {};
                ~Sample_GetAvailableTransitions_Request_TypeSupportInterface () {};
            private:
                Sample_GetAvailableTransitions_Request_TypeSupportInterface (const Sample_GetAvailableTransitions_Request_TypeSupportInterface &);
                Sample_GetAvailableTransitions_Request_TypeSupportInterface & operator = (const Sample_GetAvailableTransitions_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetAvailableTransitions_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Request_DataWriter_var _var_type;

                static Sample_GetAvailableTransitions_Request_DataWriter_ptr _duplicate (Sample_GetAvailableTransitions_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetAvailableTransitions_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetAvailableTransitions_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetAvailableTransitions_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableTransitions_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableTransitions_Request_& instance_data) = 0;

            protected:
                Sample_GetAvailableTransitions_Request_DataWriter () {};
                ~Sample_GetAvailableTransitions_Request_DataWriter () {};
            private:
                Sample_GetAvailableTransitions_Request_DataWriter (const Sample_GetAvailableTransitions_Request_DataWriter &);
                Sample_GetAvailableTransitions_Request_DataWriter & operator = (const Sample_GetAvailableTransitions_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetAvailableTransitions_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Request_DataReader_var _var_type;

                static Sample_GetAvailableTransitions_Request_DataReader_ptr _duplicate (Sample_GetAvailableTransitions_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableTransitions_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableTransitions_Request_& instance) = 0;

            protected:
                Sample_GetAvailableTransitions_Request_DataReader () {};
                ~Sample_GetAvailableTransitions_Request_DataReader () {};
            private:
                Sample_GetAvailableTransitions_Request_DataReader (const Sample_GetAvailableTransitions_Request_DataReader &);
                Sample_GetAvailableTransitions_Request_DataReader & operator = (const Sample_GetAvailableTransitions_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetAvailableTransitions_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Request_DataReaderView_var _var_type;

                static Sample_GetAvailableTransitions_Request_DataReaderView_ptr _duplicate (Sample_GetAvailableTransitions_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableTransitions_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableTransitions_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableTransitions_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableTransitions_Request_& instance) = 0;

            protected:
                Sample_GetAvailableTransitions_Request_DataReaderView () {};
                ~Sample_GetAvailableTransitions_Request_DataReaderView () {};
            private:
                Sample_GetAvailableTransitions_Request_DataReaderView (const Sample_GetAvailableTransitions_Request_DataReaderView &);
                Sample_GetAvailableTransitions_Request_DataReaderView & operator = (const Sample_GetAvailableTransitions_Request_DataReaderView &);
            };
            class Sample_GetAvailableTransitions_Response_TypeSupportInterface;

            typedef Sample_GetAvailableTransitions_Response_TypeSupportInterface * Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Response_TypeSupportInterface> Sample_GetAvailableTransitions_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Response_TypeSupportInterface> Sample_GetAvailableTransitions_Response_TypeSupportInterface_out;


            class Sample_GetAvailableTransitions_Response_DataWriter;

            typedef Sample_GetAvailableTransitions_Response_DataWriter * Sample_GetAvailableTransitions_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Response_DataWriter> Sample_GetAvailableTransitions_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Response_DataWriter> Sample_GetAvailableTransitions_Response_DataWriter_out;


            class Sample_GetAvailableTransitions_Response_DataReader;

            typedef Sample_GetAvailableTransitions_Response_DataReader * Sample_GetAvailableTransitions_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Response_DataReader> Sample_GetAvailableTransitions_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Response_DataReader> Sample_GetAvailableTransitions_Response_DataReader_out;


            class Sample_GetAvailableTransitions_Response_DataReaderView;

            typedef Sample_GetAvailableTransitions_Response_DataReaderView * Sample_GetAvailableTransitions_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableTransitions_Response_DataReaderView> Sample_GetAvailableTransitions_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableTransitions_Response_DataReaderView> Sample_GetAvailableTransitions_Response_DataReaderView_out;

            struct Sample_GetAvailableTransitions_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetAvailableTransitions_Response_, struct Sample_GetAvailableTransitions_Response_Seq_uniq_> Sample_GetAvailableTransitions_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetAvailableTransitions_Response_Seq> Sample_GetAvailableTransitions_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetAvailableTransitions_Response_Seq> Sample_GetAvailableTransitions_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Response_TypeSupportInterface_var _var_type;

                static Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr _duplicate (Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetAvailableTransitions_Response_TypeSupportInterface () {};
                ~Sample_GetAvailableTransitions_Response_TypeSupportInterface () {};
            private:
                Sample_GetAvailableTransitions_Response_TypeSupportInterface (const Sample_GetAvailableTransitions_Response_TypeSupportInterface &);
                Sample_GetAvailableTransitions_Response_TypeSupportInterface & operator = (const Sample_GetAvailableTransitions_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetAvailableTransitions_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Response_DataWriter_var _var_type;

                static Sample_GetAvailableTransitions_Response_DataWriter_ptr _duplicate (Sample_GetAvailableTransitions_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetAvailableTransitions_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetAvailableTransitions_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetAvailableTransitions_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableTransitions_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableTransitions_Response_& instance_data) = 0;

            protected:
                Sample_GetAvailableTransitions_Response_DataWriter () {};
                ~Sample_GetAvailableTransitions_Response_DataWriter () {};
            private:
                Sample_GetAvailableTransitions_Response_DataWriter (const Sample_GetAvailableTransitions_Response_DataWriter &);
                Sample_GetAvailableTransitions_Response_DataWriter & operator = (const Sample_GetAvailableTransitions_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetAvailableTransitions_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Response_DataReader_var _var_type;

                static Sample_GetAvailableTransitions_Response_DataReader_ptr _duplicate (Sample_GetAvailableTransitions_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableTransitions_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableTransitions_Response_& instance) = 0;

            protected:
                Sample_GetAvailableTransitions_Response_DataReader () {};
                ~Sample_GetAvailableTransitions_Response_DataReader () {};
            private:
                Sample_GetAvailableTransitions_Response_DataReader (const Sample_GetAvailableTransitions_Response_DataReader &);
                Sample_GetAvailableTransitions_Response_DataReader & operator = (const Sample_GetAvailableTransitions_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableTransitions_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetAvailableTransitions_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetAvailableTransitions_Response_DataReaderView_var _var_type;

                static Sample_GetAvailableTransitions_Response_DataReaderView_ptr _duplicate (Sample_GetAvailableTransitions_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableTransitions_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableTransitions_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableTransitions_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableTransitions_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableTransitions_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableTransitions_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableTransitions_Response_& instance) = 0;

            protected:
                Sample_GetAvailableTransitions_Response_DataReaderView () {};
                ~Sample_GetAvailableTransitions_Response_DataReaderView () {};
            private:
                Sample_GetAvailableTransitions_Response_DataReaderView (const Sample_GetAvailableTransitions_Response_DataReaderView &);
                Sample_GetAvailableTransitions_Response_DataReaderView & operator = (const Sample_GetAvailableTransitions_Response_DataReaderView &);
            };
        }

    }

}

#endif
