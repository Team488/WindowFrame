#ifndef _H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI_DCPS_H_
#define _H_110E86A423A1A2AEE5DBB100CB1D760B_GetPointMapROI_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetPointMapROI_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetPointMapROI_Request_TypeSupportInterface;

            typedef GetPointMapROI_Request_TypeSupportInterface * GetPointMapROI_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Request_TypeSupportInterface> GetPointMapROI_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Request_TypeSupportInterface> GetPointMapROI_Request_TypeSupportInterface_out;


            class GetPointMapROI_Request_DataWriter;

            typedef GetPointMapROI_Request_DataWriter * GetPointMapROI_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Request_DataWriter> GetPointMapROI_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Request_DataWriter> GetPointMapROI_Request_DataWriter_out;


            class GetPointMapROI_Request_DataReader;

            typedef GetPointMapROI_Request_DataReader * GetPointMapROI_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Request_DataReader> GetPointMapROI_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Request_DataReader> GetPointMapROI_Request_DataReader_out;


            class GetPointMapROI_Request_DataReaderView;

            typedef GetPointMapROI_Request_DataReaderView * GetPointMapROI_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Request_DataReaderView> GetPointMapROI_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Request_DataReaderView> GetPointMapROI_Request_DataReaderView_out;

            struct GetPointMapROI_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetPointMapROI_Request_, struct GetPointMapROI_Request_Seq_uniq_> GetPointMapROI_Request_Seq;
            typedef DDS_DCPSSequence_var < GetPointMapROI_Request_Seq> GetPointMapROI_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetPointMapROI_Request_Seq> GetPointMapROI_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetPointMapROI_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetPointMapROI_Request_TypeSupportInterface_var _var_type;

                static GetPointMapROI_Request_TypeSupportInterface_ptr _duplicate (GetPointMapROI_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetPointMapROI_Request_TypeSupportInterface () {};
                ~GetPointMapROI_Request_TypeSupportInterface () {};
            private:
                GetPointMapROI_Request_TypeSupportInterface (const GetPointMapROI_Request_TypeSupportInterface &);
                GetPointMapROI_Request_TypeSupportInterface & operator = (const GetPointMapROI_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetPointMapROI_Request_DataWriter_ptr _ptr_type;
                typedef GetPointMapROI_Request_DataWriter_var _var_type;

                static GetPointMapROI_Request_DataWriter_ptr _duplicate (GetPointMapROI_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetPointMapROI_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetPointMapROI_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetPointMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMapROI_Request_& instance_data) = 0;

            protected:
                GetPointMapROI_Request_DataWriter () {};
                ~GetPointMapROI_Request_DataWriter () {};
            private:
                GetPointMapROI_Request_DataWriter (const GetPointMapROI_Request_DataWriter &);
                GetPointMapROI_Request_DataWriter & operator = (const GetPointMapROI_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetPointMapROI_Request_DataReader_ptr _ptr_type;
                typedef GetPointMapROI_Request_DataReader_var _var_type;

                static GetPointMapROI_Request_DataReader_ptr _duplicate (GetPointMapROI_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMapROI_Request_& instance) = 0;

            protected:
                GetPointMapROI_Request_DataReader () {};
                ~GetPointMapROI_Request_DataReader () {};
            private:
                GetPointMapROI_Request_DataReader (const GetPointMapROI_Request_DataReader &);
                GetPointMapROI_Request_DataReader & operator = (const GetPointMapROI_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetPointMapROI_Request_DataReaderView_ptr _ptr_type;
                typedef GetPointMapROI_Request_DataReaderView_var _var_type;

                static GetPointMapROI_Request_DataReaderView_ptr _duplicate (GetPointMapROI_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMapROI_Request_& instance) = 0;

            protected:
                GetPointMapROI_Request_DataReaderView () {};
                ~GetPointMapROI_Request_DataReaderView () {};
            private:
                GetPointMapROI_Request_DataReaderView (const GetPointMapROI_Request_DataReaderView &);
                GetPointMapROI_Request_DataReaderView & operator = (const GetPointMapROI_Request_DataReaderView &);
            };
            class GetPointMapROI_Response_TypeSupportInterface;

            typedef GetPointMapROI_Response_TypeSupportInterface * GetPointMapROI_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Response_TypeSupportInterface> GetPointMapROI_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Response_TypeSupportInterface> GetPointMapROI_Response_TypeSupportInterface_out;


            class GetPointMapROI_Response_DataWriter;

            typedef GetPointMapROI_Response_DataWriter * GetPointMapROI_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Response_DataWriter> GetPointMapROI_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Response_DataWriter> GetPointMapROI_Response_DataWriter_out;


            class GetPointMapROI_Response_DataReader;

            typedef GetPointMapROI_Response_DataReader * GetPointMapROI_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Response_DataReader> GetPointMapROI_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Response_DataReader> GetPointMapROI_Response_DataReader_out;


            class GetPointMapROI_Response_DataReaderView;

            typedef GetPointMapROI_Response_DataReaderView * GetPointMapROI_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetPointMapROI_Response_DataReaderView> GetPointMapROI_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetPointMapROI_Response_DataReaderView> GetPointMapROI_Response_DataReaderView_out;

            struct GetPointMapROI_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetPointMapROI_Response_, struct GetPointMapROI_Response_Seq_uniq_> GetPointMapROI_Response_Seq;
            typedef DDS_DCPSSequence_var < GetPointMapROI_Response_Seq> GetPointMapROI_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetPointMapROI_Response_Seq> GetPointMapROI_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetPointMapROI_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetPointMapROI_Response_TypeSupportInterface_var _var_type;

                static GetPointMapROI_Response_TypeSupportInterface_ptr _duplicate (GetPointMapROI_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetPointMapROI_Response_TypeSupportInterface () {};
                ~GetPointMapROI_Response_TypeSupportInterface () {};
            private:
                GetPointMapROI_Response_TypeSupportInterface (const GetPointMapROI_Response_TypeSupportInterface &);
                GetPointMapROI_Response_TypeSupportInterface & operator = (const GetPointMapROI_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetPointMapROI_Response_DataWriter_ptr _ptr_type;
                typedef GetPointMapROI_Response_DataWriter_var _var_type;

                static GetPointMapROI_Response_DataWriter_ptr _duplicate (GetPointMapROI_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetPointMapROI_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetPointMapROI_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetPointMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMapROI_Response_& instance_data) = 0;

            protected:
                GetPointMapROI_Response_DataWriter () {};
                ~GetPointMapROI_Response_DataWriter () {};
            private:
                GetPointMapROI_Response_DataWriter (const GetPointMapROI_Response_DataWriter &);
                GetPointMapROI_Response_DataWriter & operator = (const GetPointMapROI_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetPointMapROI_Response_DataReader_ptr _ptr_type;
                typedef GetPointMapROI_Response_DataReader_var _var_type;

                static GetPointMapROI_Response_DataReader_ptr _duplicate (GetPointMapROI_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMapROI_Response_& instance) = 0;

            protected:
                GetPointMapROI_Response_DataReader () {};
                ~GetPointMapROI_Response_DataReader () {};
            private:
                GetPointMapROI_Response_DataReader (const GetPointMapROI_Response_DataReader &);
                GetPointMapROI_Response_DataReader & operator = (const GetPointMapROI_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs GetPointMapROI_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetPointMapROI_Response_DataReaderView_ptr _ptr_type;
                typedef GetPointMapROI_Response_DataReaderView_var _var_type;

                static GetPointMapROI_Response_DataReaderView_ptr _duplicate (GetPointMapROI_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetPointMapROI_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetPointMapROI_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetPointMapROI_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetPointMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetPointMapROI_Response_& instance) = 0;

            protected:
                GetPointMapROI_Response_DataReaderView () {};
                ~GetPointMapROI_Response_DataReaderView () {};
            private:
                GetPointMapROI_Response_DataReaderView (const GetPointMapROI_Response_DataReaderView &);
                GetPointMapROI_Response_DataReaderView & operator = (const GetPointMapROI_Response_DataReaderView &);
            };
            class Sample_GetPointMapROI_Request_TypeSupportInterface;

            typedef Sample_GetPointMapROI_Request_TypeSupportInterface * Sample_GetPointMapROI_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Request_TypeSupportInterface> Sample_GetPointMapROI_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Request_TypeSupportInterface> Sample_GetPointMapROI_Request_TypeSupportInterface_out;


            class Sample_GetPointMapROI_Request_DataWriter;

            typedef Sample_GetPointMapROI_Request_DataWriter * Sample_GetPointMapROI_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Request_DataWriter> Sample_GetPointMapROI_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Request_DataWriter> Sample_GetPointMapROI_Request_DataWriter_out;


            class Sample_GetPointMapROI_Request_DataReader;

            typedef Sample_GetPointMapROI_Request_DataReader * Sample_GetPointMapROI_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Request_DataReader> Sample_GetPointMapROI_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Request_DataReader> Sample_GetPointMapROI_Request_DataReader_out;


            class Sample_GetPointMapROI_Request_DataReaderView;

            typedef Sample_GetPointMapROI_Request_DataReaderView * Sample_GetPointMapROI_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Request_DataReaderView> Sample_GetPointMapROI_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Request_DataReaderView> Sample_GetPointMapROI_Request_DataReaderView_out;

            struct Sample_GetPointMapROI_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetPointMapROI_Request_, struct Sample_GetPointMapROI_Request_Seq_uniq_> Sample_GetPointMapROI_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetPointMapROI_Request_Seq> Sample_GetPointMapROI_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetPointMapROI_Request_Seq> Sample_GetPointMapROI_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetPointMapROI_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Request_TypeSupportInterface_var _var_type;

                static Sample_GetPointMapROI_Request_TypeSupportInterface_ptr _duplicate (Sample_GetPointMapROI_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetPointMapROI_Request_TypeSupportInterface () {};
                ~Sample_GetPointMapROI_Request_TypeSupportInterface () {};
            private:
                Sample_GetPointMapROI_Request_TypeSupportInterface (const Sample_GetPointMapROI_Request_TypeSupportInterface &);
                Sample_GetPointMapROI_Request_TypeSupportInterface & operator = (const Sample_GetPointMapROI_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetPointMapROI_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Request_DataWriter_var _var_type;

                static Sample_GetPointMapROI_Request_DataWriter_ptr _duplicate (Sample_GetPointMapROI_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetPointMapROI_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetPointMapROI_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetPointMapROI_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMapROI_Request_& instance_data) = 0;

            protected:
                Sample_GetPointMapROI_Request_DataWriter () {};
                ~Sample_GetPointMapROI_Request_DataWriter () {};
            private:
                Sample_GetPointMapROI_Request_DataWriter (const Sample_GetPointMapROI_Request_DataWriter &);
                Sample_GetPointMapROI_Request_DataWriter & operator = (const Sample_GetPointMapROI_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetPointMapROI_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Request_DataReader_var _var_type;

                static Sample_GetPointMapROI_Request_DataReader_ptr _duplicate (Sample_GetPointMapROI_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMapROI_Request_& instance) = 0;

            protected:
                Sample_GetPointMapROI_Request_DataReader () {};
                ~Sample_GetPointMapROI_Request_DataReader () {};
            private:
                Sample_GetPointMapROI_Request_DataReader (const Sample_GetPointMapROI_Request_DataReader &);
                Sample_GetPointMapROI_Request_DataReader & operator = (const Sample_GetPointMapROI_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetPointMapROI_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Request_DataReaderView_var _var_type;

                static Sample_GetPointMapROI_Request_DataReaderView_ptr _duplicate (Sample_GetPointMapROI_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMapROI_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMapROI_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMapROI_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMapROI_Request_& instance) = 0;

            protected:
                Sample_GetPointMapROI_Request_DataReaderView () {};
                ~Sample_GetPointMapROI_Request_DataReaderView () {};
            private:
                Sample_GetPointMapROI_Request_DataReaderView (const Sample_GetPointMapROI_Request_DataReaderView &);
                Sample_GetPointMapROI_Request_DataReaderView & operator = (const Sample_GetPointMapROI_Request_DataReaderView &);
            };
            class Sample_GetPointMapROI_Response_TypeSupportInterface;

            typedef Sample_GetPointMapROI_Response_TypeSupportInterface * Sample_GetPointMapROI_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Response_TypeSupportInterface> Sample_GetPointMapROI_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Response_TypeSupportInterface> Sample_GetPointMapROI_Response_TypeSupportInterface_out;


            class Sample_GetPointMapROI_Response_DataWriter;

            typedef Sample_GetPointMapROI_Response_DataWriter * Sample_GetPointMapROI_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Response_DataWriter> Sample_GetPointMapROI_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Response_DataWriter> Sample_GetPointMapROI_Response_DataWriter_out;


            class Sample_GetPointMapROI_Response_DataReader;

            typedef Sample_GetPointMapROI_Response_DataReader * Sample_GetPointMapROI_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Response_DataReader> Sample_GetPointMapROI_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Response_DataReader> Sample_GetPointMapROI_Response_DataReader_out;


            class Sample_GetPointMapROI_Response_DataReaderView;

            typedef Sample_GetPointMapROI_Response_DataReaderView * Sample_GetPointMapROI_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetPointMapROI_Response_DataReaderView> Sample_GetPointMapROI_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetPointMapROI_Response_DataReaderView> Sample_GetPointMapROI_Response_DataReaderView_out;

            struct Sample_GetPointMapROI_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetPointMapROI_Response_, struct Sample_GetPointMapROI_Response_Seq_uniq_> Sample_GetPointMapROI_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetPointMapROI_Response_Seq> Sample_GetPointMapROI_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetPointMapROI_Response_Seq> Sample_GetPointMapROI_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetPointMapROI_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Response_TypeSupportInterface_var _var_type;

                static Sample_GetPointMapROI_Response_TypeSupportInterface_ptr _duplicate (Sample_GetPointMapROI_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetPointMapROI_Response_TypeSupportInterface () {};
                ~Sample_GetPointMapROI_Response_TypeSupportInterface () {};
            private:
                Sample_GetPointMapROI_Response_TypeSupportInterface (const Sample_GetPointMapROI_Response_TypeSupportInterface &);
                Sample_GetPointMapROI_Response_TypeSupportInterface & operator = (const Sample_GetPointMapROI_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetPointMapROI_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Response_DataWriter_var _var_type;

                static Sample_GetPointMapROI_Response_DataWriter_ptr _duplicate (Sample_GetPointMapROI_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetPointMapROI_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetPointMapROI_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetPointMapROI_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMapROI_Response_& instance_data) = 0;

            protected:
                Sample_GetPointMapROI_Response_DataWriter () {};
                ~Sample_GetPointMapROI_Response_DataWriter () {};
            private:
                Sample_GetPointMapROI_Response_DataWriter (const Sample_GetPointMapROI_Response_DataWriter &);
                Sample_GetPointMapROI_Response_DataWriter & operator = (const Sample_GetPointMapROI_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetPointMapROI_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Response_DataReader_var _var_type;

                static Sample_GetPointMapROI_Response_DataReader_ptr _duplicate (Sample_GetPointMapROI_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMapROI_Response_& instance) = 0;

            protected:
                Sample_GetPointMapROI_Response_DataReader () {};
                ~Sample_GetPointMapROI_Response_DataReader () {};
            private:
                Sample_GetPointMapROI_Response_DataReader (const Sample_GetPointMapROI_Response_DataReader &);
                Sample_GetPointMapROI_Response_DataReader & operator = (const Sample_GetPointMapROI_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_GetPointMapROI_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetPointMapROI_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetPointMapROI_Response_DataReaderView_var _var_type;

                static Sample_GetPointMapROI_Response_DataReaderView_ptr _duplicate (Sample_GetPointMapROI_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetPointMapROI_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetPointMapROI_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetPointMapROI_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetPointMapROI_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetPointMapROI_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetPointMapROI_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetPointMapROI_Response_& instance) = 0;

            protected:
                Sample_GetPointMapROI_Response_DataReaderView () {};
                ~Sample_GetPointMapROI_Response_DataReaderView () {};
            private:
                Sample_GetPointMapROI_Response_DataReaderView (const Sample_GetPointMapROI_Response_DataReaderView &);
                Sample_GetPointMapROI_Response_DataReaderView & operator = (const Sample_GetPointMapROI_Response_DataReaderView &);
            };
        }

    }

}

#endif
