#ifndef _H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI_DCPS_H_
#define _H_1AC09CD7F1F6E1B1B1DBBC50DB7B7041_GetMapROI_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetMapROI_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetMapROI_Request_TypeSupportInterface;

            typedef GetMapROI_Request_TypeSupportInterface * GetMapROI_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Request_TypeSupportInterface> GetMapROI_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Request_TypeSupportInterface> GetMapROI_Request_TypeSupportInterface_out;


            class GetMapROI_Request_DataWriter;

            typedef GetMapROI_Request_DataWriter * GetMapROI_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Request_DataWriter> GetMapROI_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Request_DataWriter> GetMapROI_Request_DataWriter_out;


            class GetMapROI_Request_DataReader;

            typedef GetMapROI_Request_DataReader * GetMapROI_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Request_DataReader> GetMapROI_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Request_DataReader> GetMapROI_Request_DataReader_out;


            class GetMapROI_Request_DataReaderView;

            typedef GetMapROI_Request_DataReaderView * GetMapROI_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Request_DataReaderView> GetMapROI_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Request_DataReaderView> GetMapROI_Request_DataReaderView_out;

            struct GetMapROI_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetMapROI_Request_, struct GetMapROI_Request_Seq_uniq_> GetMapROI_Request_Seq;
            typedef DDS_DCPSSequence_var < GetMapROI_Request_Seq> GetMapROI_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetMapROI_Request_Seq> GetMapROI_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetMapROI_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetMapROI_Request_TypeSupportInterface_var _var_type;

                static GetMapROI_Request_TypeSupportInterface_ptr _duplicate (GetMapROI_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetMapROI_Request_TypeSupportInterface () {};
                ~GetMapROI_Request_TypeSupportInterface () {};
            private:
                GetMapROI_Request_TypeSupportInterface (const GetMapROI_Request_TypeSupportInterface &);
                GetMapROI_Request_TypeSupportInterface & operator = (const GetMapROI_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetMapROI_Request_DataWriter_ptr _ptr_type;
                typedef GetMapROI_Request_DataWriter_var _var_type;

                static GetMapROI_Request_DataWriter_ptr _duplicate (GetMapROI_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetMapROI_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetMapROI_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMapROI_Request_& instance_data) = 0;

            protected:
                GetMapROI_Request_DataWriter () {};
                ~GetMapROI_Request_DataWriter () {};
            private:
                GetMapROI_Request_DataWriter (const GetMapROI_Request_DataWriter &);
                GetMapROI_Request_DataWriter & operator = (const GetMapROI_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetMapROI_Request_DataReader_ptr _ptr_type;
                typedef GetMapROI_Request_DataReader_var _var_type;

                static GetMapROI_Request_DataReader_ptr _duplicate (GetMapROI_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMapROI_Request_& instance) = 0;

            protected:
                GetMapROI_Request_DataReader () {};
                ~GetMapROI_Request_DataReader () {};
            private:
                GetMapROI_Request_DataReader (const GetMapROI_Request_DataReader &);
                GetMapROI_Request_DataReader & operator = (const GetMapROI_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetMapROI_Request_DataReaderView_ptr _ptr_type;
                typedef GetMapROI_Request_DataReaderView_var _var_type;

                static GetMapROI_Request_DataReaderView_ptr _duplicate (GetMapROI_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMapROI_Request_& instance) = 0;

            protected:
                GetMapROI_Request_DataReaderView () {};
                ~GetMapROI_Request_DataReaderView () {};
            private:
                GetMapROI_Request_DataReaderView (const GetMapROI_Request_DataReaderView &);
                GetMapROI_Request_DataReaderView & operator = (const GetMapROI_Request_DataReaderView &);
            };
            class GetMapROI_Response_TypeSupportInterface;

            typedef GetMapROI_Response_TypeSupportInterface * GetMapROI_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Response_TypeSupportInterface> GetMapROI_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Response_TypeSupportInterface> GetMapROI_Response_TypeSupportInterface_out;


            class GetMapROI_Response_DataWriter;

            typedef GetMapROI_Response_DataWriter * GetMapROI_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Response_DataWriter> GetMapROI_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Response_DataWriter> GetMapROI_Response_DataWriter_out;


            class GetMapROI_Response_DataReader;

            typedef GetMapROI_Response_DataReader * GetMapROI_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Response_DataReader> GetMapROI_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Response_DataReader> GetMapROI_Response_DataReader_out;


            class GetMapROI_Response_DataReaderView;

            typedef GetMapROI_Response_DataReaderView * GetMapROI_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetMapROI_Response_DataReaderView> GetMapROI_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetMapROI_Response_DataReaderView> GetMapROI_Response_DataReaderView_out;

            struct GetMapROI_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetMapROI_Response_, struct GetMapROI_Response_Seq_uniq_> GetMapROI_Response_Seq;
            typedef DDS_DCPSSequence_var < GetMapROI_Response_Seq> GetMapROI_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetMapROI_Response_Seq> GetMapROI_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetMapROI_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetMapROI_Response_TypeSupportInterface_var _var_type;

                static GetMapROI_Response_TypeSupportInterface_ptr _duplicate (GetMapROI_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetMapROI_Response_TypeSupportInterface () {};
                ~GetMapROI_Response_TypeSupportInterface () {};
            private:
                GetMapROI_Response_TypeSupportInterface (const GetMapROI_Response_TypeSupportInterface &);
                GetMapROI_Response_TypeSupportInterface & operator = (const GetMapROI_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetMapROI_Response_DataWriter_ptr _ptr_type;
                typedef GetMapROI_Response_DataWriter_var _var_type;

                static GetMapROI_Response_DataWriter_ptr _duplicate (GetMapROI_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetMapROI_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetMapROI_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMapROI_Response_& instance_data) = 0;

            protected:
                GetMapROI_Response_DataWriter () {};
                ~GetMapROI_Response_DataWriter () {};
            private:
                GetMapROI_Response_DataWriter (const GetMapROI_Response_DataWriter &);
                GetMapROI_Response_DataWriter & operator = (const GetMapROI_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetMapROI_Response_DataReader_ptr _ptr_type;
                typedef GetMapROI_Response_DataReader_var _var_type;

                static GetMapROI_Response_DataReader_ptr _duplicate (GetMapROI_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMapROI_Response_& instance) = 0;

            protected:
                GetMapROI_Response_DataReader () {};
                ~GetMapROI_Response_DataReader () {};
            private:
                GetMapROI_Response_DataReader (const GetMapROI_Response_DataReader &);
                GetMapROI_Response_DataReader & operator = (const GetMapROI_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetMapROI_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetMapROI_Response_DataReaderView_ptr _ptr_type;
                typedef GetMapROI_Response_DataReaderView_var _var_type;

                static GetMapROI_Response_DataReaderView_ptr _duplicate (GetMapROI_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetMapROI_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetMapROI_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetMapROI_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetMapROI_Response_& instance) = 0;

            protected:
                GetMapROI_Response_DataReaderView () {};
                ~GetMapROI_Response_DataReaderView () {};
            private:
                GetMapROI_Response_DataReaderView (const GetMapROI_Response_DataReaderView &);
                GetMapROI_Response_DataReaderView & operator = (const GetMapROI_Response_DataReaderView &);
            };
            class Sample_GetMapROI_Request_TypeSupportInterface;

            typedef Sample_GetMapROI_Request_TypeSupportInterface * Sample_GetMapROI_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Request_TypeSupportInterface> Sample_GetMapROI_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Request_TypeSupportInterface> Sample_GetMapROI_Request_TypeSupportInterface_out;


            class Sample_GetMapROI_Request_DataWriter;

            typedef Sample_GetMapROI_Request_DataWriter * Sample_GetMapROI_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Request_DataWriter> Sample_GetMapROI_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Request_DataWriter> Sample_GetMapROI_Request_DataWriter_out;


            class Sample_GetMapROI_Request_DataReader;

            typedef Sample_GetMapROI_Request_DataReader * Sample_GetMapROI_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Request_DataReader> Sample_GetMapROI_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Request_DataReader> Sample_GetMapROI_Request_DataReader_out;


            class Sample_GetMapROI_Request_DataReaderView;

            typedef Sample_GetMapROI_Request_DataReaderView * Sample_GetMapROI_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Request_DataReaderView> Sample_GetMapROI_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Request_DataReaderView> Sample_GetMapROI_Request_DataReaderView_out;

            struct Sample_GetMapROI_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetMapROI_Request_, struct Sample_GetMapROI_Request_Seq_uniq_> Sample_GetMapROI_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetMapROI_Request_Seq> Sample_GetMapROI_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetMapROI_Request_Seq> Sample_GetMapROI_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetMapROI_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetMapROI_Request_TypeSupportInterface_var _var_type;

                static Sample_GetMapROI_Request_TypeSupportInterface_ptr _duplicate (Sample_GetMapROI_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetMapROI_Request_TypeSupportInterface () {};
                ~Sample_GetMapROI_Request_TypeSupportInterface () {};
            private:
                Sample_GetMapROI_Request_TypeSupportInterface (const Sample_GetMapROI_Request_TypeSupportInterface &);
                Sample_GetMapROI_Request_TypeSupportInterface & operator = (const Sample_GetMapROI_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetMapROI_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetMapROI_Request_DataWriter_var _var_type;

                static Sample_GetMapROI_Request_DataWriter_ptr _duplicate (Sample_GetMapROI_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetMapROI_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetMapROI_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMapROI_Request_& instance_data) = 0;

            protected:
                Sample_GetMapROI_Request_DataWriter () {};
                ~Sample_GetMapROI_Request_DataWriter () {};
            private:
                Sample_GetMapROI_Request_DataWriter (const Sample_GetMapROI_Request_DataWriter &);
                Sample_GetMapROI_Request_DataWriter & operator = (const Sample_GetMapROI_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetMapROI_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetMapROI_Request_DataReader_var _var_type;

                static Sample_GetMapROI_Request_DataReader_ptr _duplicate (Sample_GetMapROI_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMapROI_Request_& instance) = 0;

            protected:
                Sample_GetMapROI_Request_DataReader () {};
                ~Sample_GetMapROI_Request_DataReader () {};
            private:
                Sample_GetMapROI_Request_DataReader (const Sample_GetMapROI_Request_DataReader &);
                Sample_GetMapROI_Request_DataReader & operator = (const Sample_GetMapROI_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetMapROI_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetMapROI_Request_DataReaderView_var _var_type;

                static Sample_GetMapROI_Request_DataReaderView_ptr _duplicate (Sample_GetMapROI_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMapROI_Request_& instance) = 0;

            protected:
                Sample_GetMapROI_Request_DataReaderView () {};
                ~Sample_GetMapROI_Request_DataReaderView () {};
            private:
                Sample_GetMapROI_Request_DataReaderView (const Sample_GetMapROI_Request_DataReaderView &);
                Sample_GetMapROI_Request_DataReaderView & operator = (const Sample_GetMapROI_Request_DataReaderView &);
            };
            class Sample_GetMapROI_Response_TypeSupportInterface;

            typedef Sample_GetMapROI_Response_TypeSupportInterface * Sample_GetMapROI_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Response_TypeSupportInterface> Sample_GetMapROI_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Response_TypeSupportInterface> Sample_GetMapROI_Response_TypeSupportInterface_out;


            class Sample_GetMapROI_Response_DataWriter;

            typedef Sample_GetMapROI_Response_DataWriter * Sample_GetMapROI_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Response_DataWriter> Sample_GetMapROI_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Response_DataWriter> Sample_GetMapROI_Response_DataWriter_out;


            class Sample_GetMapROI_Response_DataReader;

            typedef Sample_GetMapROI_Response_DataReader * Sample_GetMapROI_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Response_DataReader> Sample_GetMapROI_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Response_DataReader> Sample_GetMapROI_Response_DataReader_out;


            class Sample_GetMapROI_Response_DataReaderView;

            typedef Sample_GetMapROI_Response_DataReaderView * Sample_GetMapROI_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetMapROI_Response_DataReaderView> Sample_GetMapROI_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetMapROI_Response_DataReaderView> Sample_GetMapROI_Response_DataReaderView_out;

            struct Sample_GetMapROI_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetMapROI_Response_, struct Sample_GetMapROI_Response_Seq_uniq_> Sample_GetMapROI_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetMapROI_Response_Seq> Sample_GetMapROI_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetMapROI_Response_Seq> Sample_GetMapROI_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetMapROI_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetMapROI_Response_TypeSupportInterface_var _var_type;

                static Sample_GetMapROI_Response_TypeSupportInterface_ptr _duplicate (Sample_GetMapROI_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetMapROI_Response_TypeSupportInterface () {};
                ~Sample_GetMapROI_Response_TypeSupportInterface () {};
            private:
                Sample_GetMapROI_Response_TypeSupportInterface (const Sample_GetMapROI_Response_TypeSupportInterface &);
                Sample_GetMapROI_Response_TypeSupportInterface & operator = (const Sample_GetMapROI_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetMapROI_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetMapROI_Response_DataWriter_var _var_type;

                static Sample_GetMapROI_Response_DataWriter_ptr _duplicate (Sample_GetMapROI_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetMapROI_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetMapROI_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMapROI_Response_& instance_data) = 0;

            protected:
                Sample_GetMapROI_Response_DataWriter () {};
                ~Sample_GetMapROI_Response_DataWriter () {};
            private:
                Sample_GetMapROI_Response_DataWriter (const Sample_GetMapROI_Response_DataWriter &);
                Sample_GetMapROI_Response_DataWriter & operator = (const Sample_GetMapROI_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetMapROI_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetMapROI_Response_DataReader_var _var_type;

                static Sample_GetMapROI_Response_DataReader_ptr _duplicate (Sample_GetMapROI_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMapROI_Response_& instance) = 0;

            protected:
                Sample_GetMapROI_Response_DataReader () {};
                ~Sample_GetMapROI_Response_DataReader () {};
            private:
                Sample_GetMapROI_Response_DataReader (const Sample_GetMapROI_Response_DataReader &);
                Sample_GetMapROI_Response_DataReader & operator = (const Sample_GetMapROI_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetMapROI_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetMapROI_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetMapROI_Response_DataReaderView_var _var_type;

                static Sample_GetMapROI_Response_DataReaderView_ptr _duplicate (Sample_GetMapROI_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetMapROI_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetMapROI_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetMapROI_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetMapROI_Response_& instance) = 0;

            protected:
                Sample_GetMapROI_Response_DataReaderView () {};
                ~Sample_GetMapROI_Response_DataReaderView () {};
            private:
                Sample_GetMapROI_Response_DataReaderView (const Sample_GetMapROI_Response_DataReaderView &);
                Sample_GetMapROI_Response_DataReaderView & operator = (const Sample_GetMapROI_Response_DataReaderView &);
            };
        }

    }

}

#endif
