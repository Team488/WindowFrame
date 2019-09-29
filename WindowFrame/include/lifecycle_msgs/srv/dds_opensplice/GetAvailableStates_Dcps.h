#ifndef _H_CB0DB276A51B1505AEB20CB65E1865A4_GetAvailableStates_DCPS_H_
#define _H_CB0DB276A51B1505AEB20CB65E1865A4_GetAvailableStates_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetAvailableStates_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetAvailableStates_Request_TypeSupportInterface;

            typedef GetAvailableStates_Request_TypeSupportInterface * GetAvailableStates_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Request_TypeSupportInterface> GetAvailableStates_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Request_TypeSupportInterface> GetAvailableStates_Request_TypeSupportInterface_out;


            class GetAvailableStates_Request_DataWriter;

            typedef GetAvailableStates_Request_DataWriter * GetAvailableStates_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Request_DataWriter> GetAvailableStates_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Request_DataWriter> GetAvailableStates_Request_DataWriter_out;


            class GetAvailableStates_Request_DataReader;

            typedef GetAvailableStates_Request_DataReader * GetAvailableStates_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Request_DataReader> GetAvailableStates_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Request_DataReader> GetAvailableStates_Request_DataReader_out;


            class GetAvailableStates_Request_DataReaderView;

            typedef GetAvailableStates_Request_DataReaderView * GetAvailableStates_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Request_DataReaderView> GetAvailableStates_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Request_DataReaderView> GetAvailableStates_Request_DataReaderView_out;

            struct GetAvailableStates_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetAvailableStates_Request_, struct GetAvailableStates_Request_Seq_uniq_> GetAvailableStates_Request_Seq;
            typedef DDS_DCPSSequence_var < GetAvailableStates_Request_Seq> GetAvailableStates_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetAvailableStates_Request_Seq> GetAvailableStates_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetAvailableStates_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetAvailableStates_Request_TypeSupportInterface_var _var_type;

                static GetAvailableStates_Request_TypeSupportInterface_ptr _duplicate (GetAvailableStates_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetAvailableStates_Request_TypeSupportInterface () {};
                ~GetAvailableStates_Request_TypeSupportInterface () {};
            private:
                GetAvailableStates_Request_TypeSupportInterface (const GetAvailableStates_Request_TypeSupportInterface &);
                GetAvailableStates_Request_TypeSupportInterface & operator = (const GetAvailableStates_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetAvailableStates_Request_DataWriter_ptr _ptr_type;
                typedef GetAvailableStates_Request_DataWriter_var _var_type;

                static GetAvailableStates_Request_DataWriter_ptr _duplicate (GetAvailableStates_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetAvailableStates_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetAvailableStates_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetAvailableStates_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableStates_Request_& instance_data) = 0;

            protected:
                GetAvailableStates_Request_DataWriter () {};
                ~GetAvailableStates_Request_DataWriter () {};
            private:
                GetAvailableStates_Request_DataWriter (const GetAvailableStates_Request_DataWriter &);
                GetAvailableStates_Request_DataWriter & operator = (const GetAvailableStates_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetAvailableStates_Request_DataReader_ptr _ptr_type;
                typedef GetAvailableStates_Request_DataReader_var _var_type;

                static GetAvailableStates_Request_DataReader_ptr _duplicate (GetAvailableStates_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableStates_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableStates_Request_& instance) = 0;

            protected:
                GetAvailableStates_Request_DataReader () {};
                ~GetAvailableStates_Request_DataReader () {};
            private:
                GetAvailableStates_Request_DataReader (const GetAvailableStates_Request_DataReader &);
                GetAvailableStates_Request_DataReader & operator = (const GetAvailableStates_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetAvailableStates_Request_DataReaderView_ptr _ptr_type;
                typedef GetAvailableStates_Request_DataReaderView_var _var_type;

                static GetAvailableStates_Request_DataReaderView_ptr _duplicate (GetAvailableStates_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableStates_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableStates_Request_& instance) = 0;

            protected:
                GetAvailableStates_Request_DataReaderView () {};
                ~GetAvailableStates_Request_DataReaderView () {};
            private:
                GetAvailableStates_Request_DataReaderView (const GetAvailableStates_Request_DataReaderView &);
                GetAvailableStates_Request_DataReaderView & operator = (const GetAvailableStates_Request_DataReaderView &);
            };
            class GetAvailableStates_Response_TypeSupportInterface;

            typedef GetAvailableStates_Response_TypeSupportInterface * GetAvailableStates_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Response_TypeSupportInterface> GetAvailableStates_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Response_TypeSupportInterface> GetAvailableStates_Response_TypeSupportInterface_out;


            class GetAvailableStates_Response_DataWriter;

            typedef GetAvailableStates_Response_DataWriter * GetAvailableStates_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Response_DataWriter> GetAvailableStates_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Response_DataWriter> GetAvailableStates_Response_DataWriter_out;


            class GetAvailableStates_Response_DataReader;

            typedef GetAvailableStates_Response_DataReader * GetAvailableStates_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Response_DataReader> GetAvailableStates_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Response_DataReader> GetAvailableStates_Response_DataReader_out;


            class GetAvailableStates_Response_DataReaderView;

            typedef GetAvailableStates_Response_DataReaderView * GetAvailableStates_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetAvailableStates_Response_DataReaderView> GetAvailableStates_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetAvailableStates_Response_DataReaderView> GetAvailableStates_Response_DataReaderView_out;

            struct GetAvailableStates_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetAvailableStates_Response_, struct GetAvailableStates_Response_Seq_uniq_> GetAvailableStates_Response_Seq;
            typedef DDS_DCPSSequence_var < GetAvailableStates_Response_Seq> GetAvailableStates_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetAvailableStates_Response_Seq> GetAvailableStates_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetAvailableStates_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetAvailableStates_Response_TypeSupportInterface_var _var_type;

                static GetAvailableStates_Response_TypeSupportInterface_ptr _duplicate (GetAvailableStates_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetAvailableStates_Response_TypeSupportInterface () {};
                ~GetAvailableStates_Response_TypeSupportInterface () {};
            private:
                GetAvailableStates_Response_TypeSupportInterface (const GetAvailableStates_Response_TypeSupportInterface &);
                GetAvailableStates_Response_TypeSupportInterface & operator = (const GetAvailableStates_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetAvailableStates_Response_DataWriter_ptr _ptr_type;
                typedef GetAvailableStates_Response_DataWriter_var _var_type;

                static GetAvailableStates_Response_DataWriter_ptr _duplicate (GetAvailableStates_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetAvailableStates_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetAvailableStates_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetAvailableStates_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableStates_Response_& instance_data) = 0;

            protected:
                GetAvailableStates_Response_DataWriter () {};
                ~GetAvailableStates_Response_DataWriter () {};
            private:
                GetAvailableStates_Response_DataWriter (const GetAvailableStates_Response_DataWriter &);
                GetAvailableStates_Response_DataWriter & operator = (const GetAvailableStates_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetAvailableStates_Response_DataReader_ptr _ptr_type;
                typedef GetAvailableStates_Response_DataReader_var _var_type;

                static GetAvailableStates_Response_DataReader_ptr _duplicate (GetAvailableStates_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableStates_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableStates_Response_& instance) = 0;

            protected:
                GetAvailableStates_Response_DataReader () {};
                ~GetAvailableStates_Response_DataReader () {};
            private:
                GetAvailableStates_Response_DataReader (const GetAvailableStates_Response_DataReader &);
                GetAvailableStates_Response_DataReader & operator = (const GetAvailableStates_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs GetAvailableStates_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetAvailableStates_Response_DataReaderView_ptr _ptr_type;
                typedef GetAvailableStates_Response_DataReaderView_var _var_type;

                static GetAvailableStates_Response_DataReaderView_ptr _duplicate (GetAvailableStates_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetAvailableStates_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetAvailableStates_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetAvailableStates_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetAvailableStates_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetAvailableStates_Response_& instance) = 0;

            protected:
                GetAvailableStates_Response_DataReaderView () {};
                ~GetAvailableStates_Response_DataReaderView () {};
            private:
                GetAvailableStates_Response_DataReaderView (const GetAvailableStates_Response_DataReaderView &);
                GetAvailableStates_Response_DataReaderView & operator = (const GetAvailableStates_Response_DataReaderView &);
            };
            class Sample_GetAvailableStates_Request_TypeSupportInterface;

            typedef Sample_GetAvailableStates_Request_TypeSupportInterface * Sample_GetAvailableStates_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Request_TypeSupportInterface> Sample_GetAvailableStates_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Request_TypeSupportInterface> Sample_GetAvailableStates_Request_TypeSupportInterface_out;


            class Sample_GetAvailableStates_Request_DataWriter;

            typedef Sample_GetAvailableStates_Request_DataWriter * Sample_GetAvailableStates_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Request_DataWriter> Sample_GetAvailableStates_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Request_DataWriter> Sample_GetAvailableStates_Request_DataWriter_out;


            class Sample_GetAvailableStates_Request_DataReader;

            typedef Sample_GetAvailableStates_Request_DataReader * Sample_GetAvailableStates_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Request_DataReader> Sample_GetAvailableStates_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Request_DataReader> Sample_GetAvailableStates_Request_DataReader_out;


            class Sample_GetAvailableStates_Request_DataReaderView;

            typedef Sample_GetAvailableStates_Request_DataReaderView * Sample_GetAvailableStates_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Request_DataReaderView> Sample_GetAvailableStates_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Request_DataReaderView> Sample_GetAvailableStates_Request_DataReaderView_out;

            struct Sample_GetAvailableStates_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetAvailableStates_Request_, struct Sample_GetAvailableStates_Request_Seq_uniq_> Sample_GetAvailableStates_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetAvailableStates_Request_Seq> Sample_GetAvailableStates_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetAvailableStates_Request_Seq> Sample_GetAvailableStates_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetAvailableStates_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Request_TypeSupportInterface_var _var_type;

                static Sample_GetAvailableStates_Request_TypeSupportInterface_ptr _duplicate (Sample_GetAvailableStates_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetAvailableStates_Request_TypeSupportInterface () {};
                ~Sample_GetAvailableStates_Request_TypeSupportInterface () {};
            private:
                Sample_GetAvailableStates_Request_TypeSupportInterface (const Sample_GetAvailableStates_Request_TypeSupportInterface &);
                Sample_GetAvailableStates_Request_TypeSupportInterface & operator = (const Sample_GetAvailableStates_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetAvailableStates_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Request_DataWriter_var _var_type;

                static Sample_GetAvailableStates_Request_DataWriter_ptr _duplicate (Sample_GetAvailableStates_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetAvailableStates_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetAvailableStates_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetAvailableStates_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableStates_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableStates_Request_& instance_data) = 0;

            protected:
                Sample_GetAvailableStates_Request_DataWriter () {};
                ~Sample_GetAvailableStates_Request_DataWriter () {};
            private:
                Sample_GetAvailableStates_Request_DataWriter (const Sample_GetAvailableStates_Request_DataWriter &);
                Sample_GetAvailableStates_Request_DataWriter & operator = (const Sample_GetAvailableStates_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetAvailableStates_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Request_DataReader_var _var_type;

                static Sample_GetAvailableStates_Request_DataReader_ptr _duplicate (Sample_GetAvailableStates_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableStates_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableStates_Request_& instance) = 0;

            protected:
                Sample_GetAvailableStates_Request_DataReader () {};
                ~Sample_GetAvailableStates_Request_DataReader () {};
            private:
                Sample_GetAvailableStates_Request_DataReader (const Sample_GetAvailableStates_Request_DataReader &);
                Sample_GetAvailableStates_Request_DataReader & operator = (const Sample_GetAvailableStates_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetAvailableStates_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Request_DataReaderView_var _var_type;

                static Sample_GetAvailableStates_Request_DataReaderView_ptr _duplicate (Sample_GetAvailableStates_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableStates_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableStates_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableStates_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableStates_Request_& instance) = 0;

            protected:
                Sample_GetAvailableStates_Request_DataReaderView () {};
                ~Sample_GetAvailableStates_Request_DataReaderView () {};
            private:
                Sample_GetAvailableStates_Request_DataReaderView (const Sample_GetAvailableStates_Request_DataReaderView &);
                Sample_GetAvailableStates_Request_DataReaderView & operator = (const Sample_GetAvailableStates_Request_DataReaderView &);
            };
            class Sample_GetAvailableStates_Response_TypeSupportInterface;

            typedef Sample_GetAvailableStates_Response_TypeSupportInterface * Sample_GetAvailableStates_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Response_TypeSupportInterface> Sample_GetAvailableStates_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Response_TypeSupportInterface> Sample_GetAvailableStates_Response_TypeSupportInterface_out;


            class Sample_GetAvailableStates_Response_DataWriter;

            typedef Sample_GetAvailableStates_Response_DataWriter * Sample_GetAvailableStates_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Response_DataWriter> Sample_GetAvailableStates_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Response_DataWriter> Sample_GetAvailableStates_Response_DataWriter_out;


            class Sample_GetAvailableStates_Response_DataReader;

            typedef Sample_GetAvailableStates_Response_DataReader * Sample_GetAvailableStates_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Response_DataReader> Sample_GetAvailableStates_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Response_DataReader> Sample_GetAvailableStates_Response_DataReader_out;


            class Sample_GetAvailableStates_Response_DataReaderView;

            typedef Sample_GetAvailableStates_Response_DataReaderView * Sample_GetAvailableStates_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetAvailableStates_Response_DataReaderView> Sample_GetAvailableStates_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetAvailableStates_Response_DataReaderView> Sample_GetAvailableStates_Response_DataReaderView_out;

            struct Sample_GetAvailableStates_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetAvailableStates_Response_, struct Sample_GetAvailableStates_Response_Seq_uniq_> Sample_GetAvailableStates_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetAvailableStates_Response_Seq> Sample_GetAvailableStates_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetAvailableStates_Response_Seq> Sample_GetAvailableStates_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetAvailableStates_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Response_TypeSupportInterface_var _var_type;

                static Sample_GetAvailableStates_Response_TypeSupportInterface_ptr _duplicate (Sample_GetAvailableStates_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetAvailableStates_Response_TypeSupportInterface () {};
                ~Sample_GetAvailableStates_Response_TypeSupportInterface () {};
            private:
                Sample_GetAvailableStates_Response_TypeSupportInterface (const Sample_GetAvailableStates_Response_TypeSupportInterface &);
                Sample_GetAvailableStates_Response_TypeSupportInterface & operator = (const Sample_GetAvailableStates_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetAvailableStates_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Response_DataWriter_var _var_type;

                static Sample_GetAvailableStates_Response_DataWriter_ptr _duplicate (Sample_GetAvailableStates_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetAvailableStates_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetAvailableStates_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetAvailableStates_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableStates_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableStates_Response_& instance_data) = 0;

            protected:
                Sample_GetAvailableStates_Response_DataWriter () {};
                ~Sample_GetAvailableStates_Response_DataWriter () {};
            private:
                Sample_GetAvailableStates_Response_DataWriter (const Sample_GetAvailableStates_Response_DataWriter &);
                Sample_GetAvailableStates_Response_DataWriter & operator = (const Sample_GetAvailableStates_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetAvailableStates_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Response_DataReader_var _var_type;

                static Sample_GetAvailableStates_Response_DataReader_ptr _duplicate (Sample_GetAvailableStates_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableStates_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableStates_Response_& instance) = 0;

            protected:
                Sample_GetAvailableStates_Response_DataReader () {};
                ~Sample_GetAvailableStates_Response_DataReader () {};
            private:
                Sample_GetAvailableStates_Response_DataReader (const Sample_GetAvailableStates_Response_DataReader &);
                Sample_GetAvailableStates_Response_DataReader & operator = (const Sample_GetAvailableStates_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Sample_GetAvailableStates_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetAvailableStates_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetAvailableStates_Response_DataReaderView_var _var_type;

                static Sample_GetAvailableStates_Response_DataReaderView_ptr _duplicate (Sample_GetAvailableStates_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetAvailableStates_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetAvailableStates_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetAvailableStates_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetAvailableStates_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetAvailableStates_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetAvailableStates_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetAvailableStates_Response_& instance) = 0;

            protected:
                Sample_GetAvailableStates_Response_DataReaderView () {};
                ~Sample_GetAvailableStates_Response_DataReaderView () {};
            private:
                Sample_GetAvailableStates_Response_DataReaderView (const Sample_GetAvailableStates_Response_DataReaderView &);
                Sample_GetAvailableStates_Response_DataReaderView & operator = (const Sample_GetAvailableStates_Response_DataReaderView &);
            };
        }

    }

}

#endif
