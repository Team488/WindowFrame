#ifndef _H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap_DCPS_H_
#define _H_5FB19BC9ED0F9E8085E5266575AF3C23_GetMap_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetMap_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetMap_Request_TypeSupportInterface;

            typedef GetMap_Request_TypeSupportInterface * GetMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Request_TypeSupportInterface> GetMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetMap_Request_TypeSupportInterface> GetMap_Request_TypeSupportInterface_out;


            class GetMap_Request_DataWriter;

            typedef GetMap_Request_DataWriter * GetMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Request_DataWriter> GetMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetMap_Request_DataWriter> GetMap_Request_DataWriter_out;


            class GetMap_Request_DataReader;

            typedef GetMap_Request_DataReader * GetMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Request_DataReader> GetMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetMap_Request_DataReader> GetMap_Request_DataReader_out;


            class GetMap_Request_DataReaderView;

            typedef GetMap_Request_DataReaderView * GetMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Request_DataReaderView> GetMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetMap_Request_DataReaderView> GetMap_Request_DataReaderView_out;

            struct GetMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetMap_Request_, struct GetMap_Request_Seq_uniq_> GetMap_Request_Seq;
            typedef DDS_DCPSSequence_var < GetMap_Request_Seq> GetMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetMap_Request_Seq> GetMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetMap_Request_TypeSupportInterface_var _var_type;

                static GetMap_Request_TypeSupportInterface_ptr _duplicate (GetMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetMap_Request_TypeSupportInterface () {};
                ~GetMap_Request_TypeSupportInterface () {};
            private:
                GetMap_Request_TypeSupportInterface (const GetMap_Request_TypeSupportInterface &);
                GetMap_Request_TypeSupportInterface & operator = (const GetMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetMap_Request_DataWriter_ptr _ptr_type;
                typedef GetMap_Request_DataWriter_var _var_type;

                static GetMap_Request_DataWriter_ptr _duplicate (GetMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMap_Request_& instance_data) = 0;

            protected:
                GetMap_Request_DataWriter () {};
                ~GetMap_Request_DataWriter () {};
            private:
                GetMap_Request_DataWriter (const GetMap_Request_DataWriter &);
                GetMap_Request_DataWriter & operator = (const GetMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetMap_Request_DataReader_ptr _ptr_type;
                typedef GetMap_Request_DataReader_var _var_type;

                static GetMap_Request_DataReader_ptr _duplicate (GetMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMap_Request_& instance) = 0;

            protected:
                GetMap_Request_DataReader () {};
                ~GetMap_Request_DataReader () {};
            private:
                GetMap_Request_DataReader (const GetMap_Request_DataReader &);
                GetMap_Request_DataReader & operator = (const GetMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetMap_Request_DataReaderView_ptr _ptr_type;
                typedef GetMap_Request_DataReaderView_var _var_type;

                static GetMap_Request_DataReaderView_ptr _duplicate (GetMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMap_Request_& instance) = 0;

            protected:
                GetMap_Request_DataReaderView () {};
                ~GetMap_Request_DataReaderView () {};
            private:
                GetMap_Request_DataReaderView (const GetMap_Request_DataReaderView &);
                GetMap_Request_DataReaderView & operator = (const GetMap_Request_DataReaderView &);
            };
            class GetMap_Response_TypeSupportInterface;

            typedef GetMap_Response_TypeSupportInterface * GetMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Response_TypeSupportInterface> GetMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetMap_Response_TypeSupportInterface> GetMap_Response_TypeSupportInterface_out;


            class GetMap_Response_DataWriter;

            typedef GetMap_Response_DataWriter * GetMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Response_DataWriter> GetMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetMap_Response_DataWriter> GetMap_Response_DataWriter_out;


            class GetMap_Response_DataReader;

            typedef GetMap_Response_DataReader * GetMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Response_DataReader> GetMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetMap_Response_DataReader> GetMap_Response_DataReader_out;


            class GetMap_Response_DataReaderView;

            typedef GetMap_Response_DataReaderView * GetMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetMap_Response_DataReaderView> GetMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetMap_Response_DataReaderView> GetMap_Response_DataReaderView_out;

            struct GetMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetMap_Response_, struct GetMap_Response_Seq_uniq_> GetMap_Response_Seq;
            typedef DDS_DCPSSequence_var < GetMap_Response_Seq> GetMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetMap_Response_Seq> GetMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetMap_Response_TypeSupportInterface_var _var_type;

                static GetMap_Response_TypeSupportInterface_ptr _duplicate (GetMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetMap_Response_TypeSupportInterface () {};
                ~GetMap_Response_TypeSupportInterface () {};
            private:
                GetMap_Response_TypeSupportInterface (const GetMap_Response_TypeSupportInterface &);
                GetMap_Response_TypeSupportInterface & operator = (const GetMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetMap_Response_DataWriter_ptr _ptr_type;
                typedef GetMap_Response_DataWriter_var _var_type;

                static GetMap_Response_DataWriter_ptr _duplicate (GetMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMap_Response_& instance_data) = 0;

            protected:
                GetMap_Response_DataWriter () {};
                ~GetMap_Response_DataWriter () {};
            private:
                GetMap_Response_DataWriter (const GetMap_Response_DataWriter &);
                GetMap_Response_DataWriter & operator = (const GetMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetMap_Response_DataReader_ptr _ptr_type;
                typedef GetMap_Response_DataReader_var _var_type;

                static GetMap_Response_DataReader_ptr _duplicate (GetMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMap_Response_& instance) = 0;

            protected:
                GetMap_Response_DataReader () {};
                ~GetMap_Response_DataReader () {};
            private:
                GetMap_Response_DataReader (const GetMap_Response_DataReader &);
                GetMap_Response_DataReader & operator = (const GetMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GetMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetMap_Response_DataReaderView_ptr _ptr_type;
                typedef GetMap_Response_DataReaderView_var _var_type;

                static GetMap_Response_DataReaderView_ptr _duplicate (GetMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMap_Response_& instance) = 0;

            protected:
                GetMap_Response_DataReaderView () {};
                ~GetMap_Response_DataReaderView () {};
            private:
                GetMap_Response_DataReaderView (const GetMap_Response_DataReaderView &);
                GetMap_Response_DataReaderView & operator = (const GetMap_Response_DataReaderView &);
            };
            class Sample_GetMap_Request_TypeSupportInterface;

            typedef Sample_GetMap_Request_TypeSupportInterface * Sample_GetMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Request_TypeSupportInterface> Sample_GetMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Request_TypeSupportInterface> Sample_GetMap_Request_TypeSupportInterface_out;


            class Sample_GetMap_Request_DataWriter;

            typedef Sample_GetMap_Request_DataWriter * Sample_GetMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Request_DataWriter> Sample_GetMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Request_DataWriter> Sample_GetMap_Request_DataWriter_out;


            class Sample_GetMap_Request_DataReader;

            typedef Sample_GetMap_Request_DataReader * Sample_GetMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Request_DataReader> Sample_GetMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Request_DataReader> Sample_GetMap_Request_DataReader_out;


            class Sample_GetMap_Request_DataReaderView;

            typedef Sample_GetMap_Request_DataReaderView * Sample_GetMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Request_DataReaderView> Sample_GetMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Request_DataReaderView> Sample_GetMap_Request_DataReaderView_out;

            struct Sample_GetMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetMap_Request_, struct Sample_GetMap_Request_Seq_uniq_> Sample_GetMap_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetMap_Request_Seq> Sample_GetMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetMap_Request_Seq> Sample_GetMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetMap_Request_TypeSupportInterface_var _var_type;

                static Sample_GetMap_Request_TypeSupportInterface_ptr _duplicate (Sample_GetMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetMap_Request_TypeSupportInterface () {};
                ~Sample_GetMap_Request_TypeSupportInterface () {};
            private:
                Sample_GetMap_Request_TypeSupportInterface (const Sample_GetMap_Request_TypeSupportInterface &);
                Sample_GetMap_Request_TypeSupportInterface & operator = (const Sample_GetMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetMap_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetMap_Request_DataWriter_var _var_type;

                static Sample_GetMap_Request_DataWriter_ptr _duplicate (Sample_GetMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMap_Request_& instance_data) = 0;

            protected:
                Sample_GetMap_Request_DataWriter () {};
                ~Sample_GetMap_Request_DataWriter () {};
            private:
                Sample_GetMap_Request_DataWriter (const Sample_GetMap_Request_DataWriter &);
                Sample_GetMap_Request_DataWriter & operator = (const Sample_GetMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetMap_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetMap_Request_DataReader_var _var_type;

                static Sample_GetMap_Request_DataReader_ptr _duplicate (Sample_GetMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMap_Request_& instance) = 0;

            protected:
                Sample_GetMap_Request_DataReader () {};
                ~Sample_GetMap_Request_DataReader () {};
            private:
                Sample_GetMap_Request_DataReader (const Sample_GetMap_Request_DataReader &);
                Sample_GetMap_Request_DataReader & operator = (const Sample_GetMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetMap_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetMap_Request_DataReaderView_var _var_type;

                static Sample_GetMap_Request_DataReaderView_ptr _duplicate (Sample_GetMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMap_Request_& instance) = 0;

            protected:
                Sample_GetMap_Request_DataReaderView () {};
                ~Sample_GetMap_Request_DataReaderView () {};
            private:
                Sample_GetMap_Request_DataReaderView (const Sample_GetMap_Request_DataReaderView &);
                Sample_GetMap_Request_DataReaderView & operator = (const Sample_GetMap_Request_DataReaderView &);
            };
            class Sample_GetMap_Response_TypeSupportInterface;

            typedef Sample_GetMap_Response_TypeSupportInterface * Sample_GetMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Response_TypeSupportInterface> Sample_GetMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Response_TypeSupportInterface> Sample_GetMap_Response_TypeSupportInterface_out;


            class Sample_GetMap_Response_DataWriter;

            typedef Sample_GetMap_Response_DataWriter * Sample_GetMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Response_DataWriter> Sample_GetMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Response_DataWriter> Sample_GetMap_Response_DataWriter_out;


            class Sample_GetMap_Response_DataReader;

            typedef Sample_GetMap_Response_DataReader * Sample_GetMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Response_DataReader> Sample_GetMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Response_DataReader> Sample_GetMap_Response_DataReader_out;


            class Sample_GetMap_Response_DataReaderView;

            typedef Sample_GetMap_Response_DataReaderView * Sample_GetMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMap_Response_DataReaderView> Sample_GetMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetMap_Response_DataReaderView> Sample_GetMap_Response_DataReaderView_out;

            struct Sample_GetMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetMap_Response_, struct Sample_GetMap_Response_Seq_uniq_> Sample_GetMap_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetMap_Response_Seq> Sample_GetMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetMap_Response_Seq> Sample_GetMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetMap_Response_TypeSupportInterface_var _var_type;

                static Sample_GetMap_Response_TypeSupportInterface_ptr _duplicate (Sample_GetMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetMap_Response_TypeSupportInterface () {};
                ~Sample_GetMap_Response_TypeSupportInterface () {};
            private:
                Sample_GetMap_Response_TypeSupportInterface (const Sample_GetMap_Response_TypeSupportInterface &);
                Sample_GetMap_Response_TypeSupportInterface & operator = (const Sample_GetMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetMap_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetMap_Response_DataWriter_var _var_type;

                static Sample_GetMap_Response_DataWriter_ptr _duplicate (Sample_GetMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMap_Response_& instance_data) = 0;

            protected:
                Sample_GetMap_Response_DataWriter () {};
                ~Sample_GetMap_Response_DataWriter () {};
            private:
                Sample_GetMap_Response_DataWriter (const Sample_GetMap_Response_DataWriter &);
                Sample_GetMap_Response_DataWriter & operator = (const Sample_GetMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetMap_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetMap_Response_DataReader_var _var_type;

                static Sample_GetMap_Response_DataReader_ptr _duplicate (Sample_GetMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMap_Response_& instance) = 0;

            protected:
                Sample_GetMap_Response_DataReader () {};
                ~Sample_GetMap_Response_DataReader () {};
            private:
                Sample_GetMap_Response_DataReader (const Sample_GetMap_Response_DataReader &);
                Sample_GetMap_Response_DataReader & operator = (const Sample_GetMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Sample_GetMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetMap_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetMap_Response_DataReaderView_var _var_type;

                static Sample_GetMap_Response_DataReaderView_ptr _duplicate (Sample_GetMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMap_Response_& instance) = 0;

            protected:
                Sample_GetMap_Response_DataReaderView () {};
                ~Sample_GetMap_Response_DataReaderView () {};
            private:
                Sample_GetMap_Response_DataReaderView (const Sample_GetMap_Response_DataReaderView &);
                Sample_GetMap_Response_DataReaderView & operator = (const Sample_GetMap_Response_DataReaderView &);
            };
        }

    }

}

#endif
