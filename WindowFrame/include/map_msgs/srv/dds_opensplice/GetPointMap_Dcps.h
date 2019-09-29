#ifndef _H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap_DCPS_H_
#define _H_1A352D8E16F90DAD85FF79333D7C503F_GetPointMap_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetPointMap_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetPointMap_Request_TypeSupportInterface;

            typedef GetPointMap_Request_TypeSupportInterface * GetPointMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Request_TypeSupportInterface> GetPointMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Request_TypeSupportInterface> GetPointMap_Request_TypeSupportInterface_out;


            class GetPointMap_Request_DataWriter;

            typedef GetPointMap_Request_DataWriter * GetPointMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Request_DataWriter> GetPointMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Request_DataWriter> GetPointMap_Request_DataWriter_out;


            class GetPointMap_Request_DataReader;

            typedef GetPointMap_Request_DataReader * GetPointMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Request_DataReader> GetPointMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Request_DataReader> GetPointMap_Request_DataReader_out;


            class GetPointMap_Request_DataReaderView;

            typedef GetPointMap_Request_DataReaderView * GetPointMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Request_DataReaderView> GetPointMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Request_DataReaderView> GetPointMap_Request_DataReaderView_out;

            struct GetPointMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetPointMap_Request_, struct GetPointMap_Request_Seq_uniq_> GetPointMap_Request_Seq;
            typedef DDS_DCPSSequence_var < GetPointMap_Request_Seq> GetPointMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetPointMap_Request_Seq> GetPointMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetPointMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetPointMap_Request_TypeSupportInterface_var _var_type;

                static GetPointMap_Request_TypeSupportInterface_ptr _duplicate (GetPointMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetPointMap_Request_TypeSupportInterface () {};
                ~GetPointMap_Request_TypeSupportInterface () {};
            private:
                GetPointMap_Request_TypeSupportInterface (const GetPointMap_Request_TypeSupportInterface &);
                GetPointMap_Request_TypeSupportInterface & operator = (const GetPointMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetPointMap_Request_DataWriter_ptr _ptr_type;
                typedef GetPointMap_Request_DataWriter_var _var_type;

                static GetPointMap_Request_DataWriter_ptr _duplicate (GetPointMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetPointMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetPointMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetPointMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMap_Request_& instance_data) = 0;

            protected:
                GetPointMap_Request_DataWriter () {};
                ~GetPointMap_Request_DataWriter () {};
            private:
                GetPointMap_Request_DataWriter (const GetPointMap_Request_DataWriter &);
                GetPointMap_Request_DataWriter & operator = (const GetPointMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetPointMap_Request_DataReader_ptr _ptr_type;
                typedef GetPointMap_Request_DataReader_var _var_type;

                static GetPointMap_Request_DataReader_ptr _duplicate (GetPointMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMap_Request_& instance) = 0;

            protected:
                GetPointMap_Request_DataReader () {};
                ~GetPointMap_Request_DataReader () {};
            private:
                GetPointMap_Request_DataReader (const GetPointMap_Request_DataReader &);
                GetPointMap_Request_DataReader & operator = (const GetPointMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetPointMap_Request_DataReaderView_ptr _ptr_type;
                typedef GetPointMap_Request_DataReaderView_var _var_type;

                static GetPointMap_Request_DataReaderView_ptr _duplicate (GetPointMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMap_Request_& instance) = 0;

            protected:
                GetPointMap_Request_DataReaderView () {};
                ~GetPointMap_Request_DataReaderView () {};
            private:
                GetPointMap_Request_DataReaderView (const GetPointMap_Request_DataReaderView &);
                GetPointMap_Request_DataReaderView & operator = (const GetPointMap_Request_DataReaderView &);
            };
            class GetPointMap_Response_TypeSupportInterface;

            typedef GetPointMap_Response_TypeSupportInterface * GetPointMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Response_TypeSupportInterface> GetPointMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Response_TypeSupportInterface> GetPointMap_Response_TypeSupportInterface_out;


            class GetPointMap_Response_DataWriter;

            typedef GetPointMap_Response_DataWriter * GetPointMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Response_DataWriter> GetPointMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Response_DataWriter> GetPointMap_Response_DataWriter_out;


            class GetPointMap_Response_DataReader;

            typedef GetPointMap_Response_DataReader * GetPointMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Response_DataReader> GetPointMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Response_DataReader> GetPointMap_Response_DataReader_out;


            class GetPointMap_Response_DataReaderView;

            typedef GetPointMap_Response_DataReaderView * GetPointMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetPointMap_Response_DataReaderView> GetPointMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetPointMap_Response_DataReaderView> GetPointMap_Response_DataReaderView_out;

            struct GetPointMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetPointMap_Response_, struct GetPointMap_Response_Seq_uniq_> GetPointMap_Response_Seq;
            typedef DDS_DCPSSequence_var < GetPointMap_Response_Seq> GetPointMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetPointMap_Response_Seq> GetPointMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetPointMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetPointMap_Response_TypeSupportInterface_var _var_type;

                static GetPointMap_Response_TypeSupportInterface_ptr _duplicate (GetPointMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetPointMap_Response_TypeSupportInterface () {};
                ~GetPointMap_Response_TypeSupportInterface () {};
            private:
                GetPointMap_Response_TypeSupportInterface (const GetPointMap_Response_TypeSupportInterface &);
                GetPointMap_Response_TypeSupportInterface & operator = (const GetPointMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetPointMap_Response_DataWriter_ptr _ptr_type;
                typedef GetPointMap_Response_DataWriter_var _var_type;

                static GetPointMap_Response_DataWriter_ptr _duplicate (GetPointMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetPointMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetPointMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetPointMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMap_Response_& instance_data) = 0;

            protected:
                GetPointMap_Response_DataWriter () {};
                ~GetPointMap_Response_DataWriter () {};
            private:
                GetPointMap_Response_DataWriter (const GetPointMap_Response_DataWriter &);
                GetPointMap_Response_DataWriter & operator = (const GetPointMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetPointMap_Response_DataReader_ptr _ptr_type;
                typedef GetPointMap_Response_DataReader_var _var_type;

                static GetPointMap_Response_DataReader_ptr _duplicate (GetPointMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMap_Response_& instance) = 0;

            protected:
                GetPointMap_Response_DataReader () {};
                ~GetPointMap_Response_DataReader () {};
            private:
                GetPointMap_Response_DataReader (const GetPointMap_Response_DataReader &);
                GetPointMap_Response_DataReader & operator = (const GetPointMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetPointMap_Response_DataReaderView_ptr _ptr_type;
                typedef GetPointMap_Response_DataReaderView_var _var_type;

                static GetPointMap_Response_DataReaderView_ptr _duplicate (GetPointMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMap_Response_& instance) = 0;

            protected:
                GetPointMap_Response_DataReaderView () {};
                ~GetPointMap_Response_DataReaderView () {};
            private:
                GetPointMap_Response_DataReaderView (const GetPointMap_Response_DataReaderView &);
                GetPointMap_Response_DataReaderView & operator = (const GetPointMap_Response_DataReaderView &);
            };
            class Sample_GetPointMap_Request_TypeSupportInterface;

            typedef Sample_GetPointMap_Request_TypeSupportInterface * Sample_GetPointMap_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Request_TypeSupportInterface> Sample_GetPointMap_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Request_TypeSupportInterface> Sample_GetPointMap_Request_TypeSupportInterface_out;


            class Sample_GetPointMap_Request_DataWriter;

            typedef Sample_GetPointMap_Request_DataWriter * Sample_GetPointMap_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Request_DataWriter> Sample_GetPointMap_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Request_DataWriter> Sample_GetPointMap_Request_DataWriter_out;


            class Sample_GetPointMap_Request_DataReader;

            typedef Sample_GetPointMap_Request_DataReader * Sample_GetPointMap_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Request_DataReader> Sample_GetPointMap_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Request_DataReader> Sample_GetPointMap_Request_DataReader_out;


            class Sample_GetPointMap_Request_DataReaderView;

            typedef Sample_GetPointMap_Request_DataReaderView * Sample_GetPointMap_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Request_DataReaderView> Sample_GetPointMap_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Request_DataReaderView> Sample_GetPointMap_Request_DataReaderView_out;

            struct Sample_GetPointMap_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetPointMap_Request_, struct Sample_GetPointMap_Request_Seq_uniq_> Sample_GetPointMap_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetPointMap_Request_Seq> Sample_GetPointMap_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetPointMap_Request_Seq> Sample_GetPointMap_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetPointMap_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetPointMap_Request_TypeSupportInterface_var _var_type;

                static Sample_GetPointMap_Request_TypeSupportInterface_ptr _duplicate (Sample_GetPointMap_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetPointMap_Request_TypeSupportInterface () {};
                ~Sample_GetPointMap_Request_TypeSupportInterface () {};
            private:
                Sample_GetPointMap_Request_TypeSupportInterface (const Sample_GetPointMap_Request_TypeSupportInterface &);
                Sample_GetPointMap_Request_TypeSupportInterface & operator = (const Sample_GetPointMap_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetPointMap_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetPointMap_Request_DataWriter_var _var_type;

                static Sample_GetPointMap_Request_DataWriter_ptr _duplicate (Sample_GetPointMap_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetPointMap_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetPointMap_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetPointMap_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMap_Request_& instance_data) = 0;

            protected:
                Sample_GetPointMap_Request_DataWriter () {};
                ~Sample_GetPointMap_Request_DataWriter () {};
            private:
                Sample_GetPointMap_Request_DataWriter (const Sample_GetPointMap_Request_DataWriter &);
                Sample_GetPointMap_Request_DataWriter & operator = (const Sample_GetPointMap_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetPointMap_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetPointMap_Request_DataReader_var _var_type;

                static Sample_GetPointMap_Request_DataReader_ptr _duplicate (Sample_GetPointMap_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMap_Request_& instance) = 0;

            protected:
                Sample_GetPointMap_Request_DataReader () {};
                ~Sample_GetPointMap_Request_DataReader () {};
            private:
                Sample_GetPointMap_Request_DataReader (const Sample_GetPointMap_Request_DataReader &);
                Sample_GetPointMap_Request_DataReader & operator = (const Sample_GetPointMap_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetPointMap_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetPointMap_Request_DataReaderView_var _var_type;

                static Sample_GetPointMap_Request_DataReaderView_ptr _duplicate (Sample_GetPointMap_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMap_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMap_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMap_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMap_Request_& instance) = 0;

            protected:
                Sample_GetPointMap_Request_DataReaderView () {};
                ~Sample_GetPointMap_Request_DataReaderView () {};
            private:
                Sample_GetPointMap_Request_DataReaderView (const Sample_GetPointMap_Request_DataReaderView &);
                Sample_GetPointMap_Request_DataReaderView & operator = (const Sample_GetPointMap_Request_DataReaderView &);
            };
            class Sample_GetPointMap_Response_TypeSupportInterface;

            typedef Sample_GetPointMap_Response_TypeSupportInterface * Sample_GetPointMap_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Response_TypeSupportInterface> Sample_GetPointMap_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Response_TypeSupportInterface> Sample_GetPointMap_Response_TypeSupportInterface_out;


            class Sample_GetPointMap_Response_DataWriter;

            typedef Sample_GetPointMap_Response_DataWriter * Sample_GetPointMap_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Response_DataWriter> Sample_GetPointMap_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Response_DataWriter> Sample_GetPointMap_Response_DataWriter_out;


            class Sample_GetPointMap_Response_DataReader;

            typedef Sample_GetPointMap_Response_DataReader * Sample_GetPointMap_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Response_DataReader> Sample_GetPointMap_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Response_DataReader> Sample_GetPointMap_Response_DataReader_out;


            class Sample_GetPointMap_Response_DataReaderView;

            typedef Sample_GetPointMap_Response_DataReaderView * Sample_GetPointMap_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMap_Response_DataReaderView> Sample_GetPointMap_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMap_Response_DataReaderView> Sample_GetPointMap_Response_DataReaderView_out;

            struct Sample_GetPointMap_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetPointMap_Response_, struct Sample_GetPointMap_Response_Seq_uniq_> Sample_GetPointMap_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetPointMap_Response_Seq> Sample_GetPointMap_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetPointMap_Response_Seq> Sample_GetPointMap_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetPointMap_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetPointMap_Response_TypeSupportInterface_var _var_type;

                static Sample_GetPointMap_Response_TypeSupportInterface_ptr _duplicate (Sample_GetPointMap_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetPointMap_Response_TypeSupportInterface () {};
                ~Sample_GetPointMap_Response_TypeSupportInterface () {};
            private:
                Sample_GetPointMap_Response_TypeSupportInterface (const Sample_GetPointMap_Response_TypeSupportInterface &);
                Sample_GetPointMap_Response_TypeSupportInterface & operator = (const Sample_GetPointMap_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetPointMap_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetPointMap_Response_DataWriter_var _var_type;

                static Sample_GetPointMap_Response_DataWriter_ptr _duplicate (Sample_GetPointMap_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetPointMap_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetPointMap_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetPointMap_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMap_Response_& instance_data) = 0;

            protected:
                Sample_GetPointMap_Response_DataWriter () {};
                ~Sample_GetPointMap_Response_DataWriter () {};
            private:
                Sample_GetPointMap_Response_DataWriter (const Sample_GetPointMap_Response_DataWriter &);
                Sample_GetPointMap_Response_DataWriter & operator = (const Sample_GetPointMap_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetPointMap_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetPointMap_Response_DataReader_var _var_type;

                static Sample_GetPointMap_Response_DataReader_ptr _duplicate (Sample_GetPointMap_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMap_Response_& instance) = 0;

            protected:
                Sample_GetPointMap_Response_DataReader () {};
                ~Sample_GetPointMap_Response_DataReader () {};
            private:
                Sample_GetPointMap_Response_DataReader (const Sample_GetPointMap_Response_DataReader &);
                Sample_GetPointMap_Response_DataReader & operator = (const Sample_GetPointMap_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMap_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetPointMap_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetPointMap_Response_DataReaderView_var _var_type;

                static Sample_GetPointMap_Response_DataReaderView_ptr _duplicate (Sample_GetPointMap_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMap_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMap_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMap_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMap_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMap_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMap_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMap_Response_& instance) = 0;

            protected:
                Sample_GetPointMap_Response_DataReaderView () {};
                ~Sample_GetPointMap_Response_DataReaderView () {};
            private:
                Sample_GetPointMap_Response_DataReaderView (const Sample_GetPointMap_Response_DataReaderView &);
                Sample_GetPointMap_Response_DataReaderView & operator = (const Sample_GetPointMap_Response_DataReaderView &);
            };
        }

    }

}

#endif
