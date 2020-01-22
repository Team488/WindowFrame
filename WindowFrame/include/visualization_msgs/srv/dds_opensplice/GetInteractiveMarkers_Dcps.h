#ifndef _H_634E43C0B307F8B009E576E5C45AB17A_GetInteractiveMarkers_DCPS_H_
#define _H_634E43C0B307F8B009E576E5C45AB17A_GetInteractiveMarkers_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GetInteractiveMarkers_.h"

#include "visualization_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace visualization_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class GetInteractiveMarkers_Request_TypeSupportInterface;

            typedef GetInteractiveMarkers_Request_TypeSupportInterface * GetInteractiveMarkers_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Request_TypeSupportInterface> GetInteractiveMarkers_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Request_TypeSupportInterface> GetInteractiveMarkers_Request_TypeSupportInterface_out;


            class GetInteractiveMarkers_Request_DataWriter;

            typedef GetInteractiveMarkers_Request_DataWriter * GetInteractiveMarkers_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Request_DataWriter> GetInteractiveMarkers_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Request_DataWriter> GetInteractiveMarkers_Request_DataWriter_out;


            class GetInteractiveMarkers_Request_DataReader;

            typedef GetInteractiveMarkers_Request_DataReader * GetInteractiveMarkers_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Request_DataReader> GetInteractiveMarkers_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Request_DataReader> GetInteractiveMarkers_Request_DataReader_out;


            class GetInteractiveMarkers_Request_DataReaderView;

            typedef GetInteractiveMarkers_Request_DataReaderView * GetInteractiveMarkers_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Request_DataReaderView> GetInteractiveMarkers_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Request_DataReaderView> GetInteractiveMarkers_Request_DataReaderView_out;

            struct GetInteractiveMarkers_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < GetInteractiveMarkers_Request_, struct GetInteractiveMarkers_Request_Seq_uniq_> GetInteractiveMarkers_Request_Seq;
            typedef DDS_DCPSSequence_var < GetInteractiveMarkers_Request_Seq> GetInteractiveMarkers_Request_Seq_var;
            typedef DDS_DCPSSequence_out < GetInteractiveMarkers_Request_Seq> GetInteractiveMarkers_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetInteractiveMarkers_Request_TypeSupportInterface_ptr _ptr_type;
                typedef GetInteractiveMarkers_Request_TypeSupportInterface_var _var_type;

                static GetInteractiveMarkers_Request_TypeSupportInterface_ptr _duplicate (GetInteractiveMarkers_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetInteractiveMarkers_Request_TypeSupportInterface () {};
                ~GetInteractiveMarkers_Request_TypeSupportInterface () {};
            private:
                GetInteractiveMarkers_Request_TypeSupportInterface (const GetInteractiveMarkers_Request_TypeSupportInterface &);
                GetInteractiveMarkers_Request_TypeSupportInterface & operator = (const GetInteractiveMarkers_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetInteractiveMarkers_Request_DataWriter_ptr _ptr_type;
                typedef GetInteractiveMarkers_Request_DataWriter_var _var_type;

                static GetInteractiveMarkers_Request_DataWriter_ptr _duplicate (GetInteractiveMarkers_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetInteractiveMarkers_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetInteractiveMarkers_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetInteractiveMarkers_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetInteractiveMarkers_Request_& instance_data) = 0;

            protected:
                GetInteractiveMarkers_Request_DataWriter () {};
                ~GetInteractiveMarkers_Request_DataWriter () {};
            private:
                GetInteractiveMarkers_Request_DataWriter (const GetInteractiveMarkers_Request_DataWriter &);
                GetInteractiveMarkers_Request_DataWriter & operator = (const GetInteractiveMarkers_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetInteractiveMarkers_Request_DataReader_ptr _ptr_type;
                typedef GetInteractiveMarkers_Request_DataReader_var _var_type;

                static GetInteractiveMarkers_Request_DataReader_ptr _duplicate (GetInteractiveMarkers_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetInteractiveMarkers_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetInteractiveMarkers_Request_& instance) = 0;

            protected:
                GetInteractiveMarkers_Request_DataReader () {};
                ~GetInteractiveMarkers_Request_DataReader () {};
            private:
                GetInteractiveMarkers_Request_DataReader (const GetInteractiveMarkers_Request_DataReader &);
                GetInteractiveMarkers_Request_DataReader & operator = (const GetInteractiveMarkers_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetInteractiveMarkers_Request_DataReaderView_ptr _ptr_type;
                typedef GetInteractiveMarkers_Request_DataReaderView_var _var_type;

                static GetInteractiveMarkers_Request_DataReaderView_ptr _duplicate (GetInteractiveMarkers_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetInteractiveMarkers_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetInteractiveMarkers_Request_& instance) = 0;

            protected:
                GetInteractiveMarkers_Request_DataReaderView () {};
                ~GetInteractiveMarkers_Request_DataReaderView () {};
            private:
                GetInteractiveMarkers_Request_DataReaderView (const GetInteractiveMarkers_Request_DataReaderView &);
                GetInteractiveMarkers_Request_DataReaderView & operator = (const GetInteractiveMarkers_Request_DataReaderView &);
            };
            class GetInteractiveMarkers_Response_TypeSupportInterface;

            typedef GetInteractiveMarkers_Response_TypeSupportInterface * GetInteractiveMarkers_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Response_TypeSupportInterface> GetInteractiveMarkers_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Response_TypeSupportInterface> GetInteractiveMarkers_Response_TypeSupportInterface_out;


            class GetInteractiveMarkers_Response_DataWriter;

            typedef GetInteractiveMarkers_Response_DataWriter * GetInteractiveMarkers_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Response_DataWriter> GetInteractiveMarkers_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Response_DataWriter> GetInteractiveMarkers_Response_DataWriter_out;


            class GetInteractiveMarkers_Response_DataReader;

            typedef GetInteractiveMarkers_Response_DataReader * GetInteractiveMarkers_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Response_DataReader> GetInteractiveMarkers_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Response_DataReader> GetInteractiveMarkers_Response_DataReader_out;


            class GetInteractiveMarkers_Response_DataReaderView;

            typedef GetInteractiveMarkers_Response_DataReaderView * GetInteractiveMarkers_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GetInteractiveMarkers_Response_DataReaderView> GetInteractiveMarkers_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GetInteractiveMarkers_Response_DataReaderView> GetInteractiveMarkers_Response_DataReaderView_out;

            struct GetInteractiveMarkers_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GetInteractiveMarkers_Response_, struct GetInteractiveMarkers_Response_Seq_uniq_> GetInteractiveMarkers_Response_Seq;
            typedef DDS_DCPSSequence_var < GetInteractiveMarkers_Response_Seq> GetInteractiveMarkers_Response_Seq_var;
            typedef DDS_DCPSSequence_out < GetInteractiveMarkers_Response_Seq> GetInteractiveMarkers_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GetInteractiveMarkers_Response_TypeSupportInterface_ptr _ptr_type;
                typedef GetInteractiveMarkers_Response_TypeSupportInterface_var _var_type;

                static GetInteractiveMarkers_Response_TypeSupportInterface_ptr _duplicate (GetInteractiveMarkers_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GetInteractiveMarkers_Response_TypeSupportInterface () {};
                ~GetInteractiveMarkers_Response_TypeSupportInterface () {};
            private:
                GetInteractiveMarkers_Response_TypeSupportInterface (const GetInteractiveMarkers_Response_TypeSupportInterface &);
                GetInteractiveMarkers_Response_TypeSupportInterface & operator = (const GetInteractiveMarkers_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GetInteractiveMarkers_Response_DataWriter_ptr _ptr_type;
                typedef GetInteractiveMarkers_Response_DataWriter_var _var_type;

                static GetInteractiveMarkers_Response_DataWriter_ptr _duplicate (GetInteractiveMarkers_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GetInteractiveMarkers_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GetInteractiveMarkers_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GetInteractiveMarkers_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetInteractiveMarkers_Response_& instance_data) = 0;

            protected:
                GetInteractiveMarkers_Response_DataWriter () {};
                ~GetInteractiveMarkers_Response_DataWriter () {};
            private:
                GetInteractiveMarkers_Response_DataWriter (const GetInteractiveMarkers_Response_DataWriter &);
                GetInteractiveMarkers_Response_DataWriter & operator = (const GetInteractiveMarkers_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GetInteractiveMarkers_Response_DataReader_ptr _ptr_type;
                typedef GetInteractiveMarkers_Response_DataReader_var _var_type;

                static GetInteractiveMarkers_Response_DataReader_ptr _duplicate (GetInteractiveMarkers_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetInteractiveMarkers_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetInteractiveMarkers_Response_& instance) = 0;

            protected:
                GetInteractiveMarkers_Response_DataReader () {};
                ~GetInteractiveMarkers_Response_DataReader () {};
            private:
                GetInteractiveMarkers_Response_DataReader (const GetInteractiveMarkers_Response_DataReader &);
                GetInteractiveMarkers_Response_DataReader & operator = (const GetInteractiveMarkers_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs GetInteractiveMarkers_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GetInteractiveMarkers_Response_DataReaderView_ptr _ptr_type;
                typedef GetInteractiveMarkers_Response_DataReaderView_var _var_type;

                static GetInteractiveMarkers_Response_DataReaderView_ptr _duplicate (GetInteractiveMarkers_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GetInteractiveMarkers_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GetInteractiveMarkers_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GetInteractiveMarkers_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GetInteractiveMarkers_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GetInteractiveMarkers_Response_& instance) = 0;

            protected:
                GetInteractiveMarkers_Response_DataReaderView () {};
                ~GetInteractiveMarkers_Response_DataReaderView () {};
            private:
                GetInteractiveMarkers_Response_DataReaderView (const GetInteractiveMarkers_Response_DataReaderView &);
                GetInteractiveMarkers_Response_DataReaderView & operator = (const GetInteractiveMarkers_Response_DataReaderView &);
            };
            class Sample_GetInteractiveMarkers_Request_TypeSupportInterface;

            typedef Sample_GetInteractiveMarkers_Request_TypeSupportInterface * Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Request_TypeSupportInterface> Sample_GetInteractiveMarkers_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Request_TypeSupportInterface> Sample_GetInteractiveMarkers_Request_TypeSupportInterface_out;


            class Sample_GetInteractiveMarkers_Request_DataWriter;

            typedef Sample_GetInteractiveMarkers_Request_DataWriter * Sample_GetInteractiveMarkers_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Request_DataWriter> Sample_GetInteractiveMarkers_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Request_DataWriter> Sample_GetInteractiveMarkers_Request_DataWriter_out;


            class Sample_GetInteractiveMarkers_Request_DataReader;

            typedef Sample_GetInteractiveMarkers_Request_DataReader * Sample_GetInteractiveMarkers_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Request_DataReader> Sample_GetInteractiveMarkers_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Request_DataReader> Sample_GetInteractiveMarkers_Request_DataReader_out;


            class Sample_GetInteractiveMarkers_Request_DataReaderView;

            typedef Sample_GetInteractiveMarkers_Request_DataReaderView * Sample_GetInteractiveMarkers_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Request_DataReaderView> Sample_GetInteractiveMarkers_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Request_DataReaderView> Sample_GetInteractiveMarkers_Request_DataReaderView_out;

            struct Sample_GetInteractiveMarkers_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_GetInteractiveMarkers_Request_, struct Sample_GetInteractiveMarkers_Request_Seq_uniq_> Sample_GetInteractiveMarkers_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetInteractiveMarkers_Request_Seq> Sample_GetInteractiveMarkers_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetInteractiveMarkers_Request_Seq> Sample_GetInteractiveMarkers_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Request_TypeSupportInterface_var _var_type;

                static Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr _duplicate (Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetInteractiveMarkers_Request_TypeSupportInterface () {};
                ~Sample_GetInteractiveMarkers_Request_TypeSupportInterface () {};
            private:
                Sample_GetInteractiveMarkers_Request_TypeSupportInterface (const Sample_GetInteractiveMarkers_Request_TypeSupportInterface &);
                Sample_GetInteractiveMarkers_Request_TypeSupportInterface & operator = (const Sample_GetInteractiveMarkers_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Request_DataWriter_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Request_DataWriter_var _var_type;

                static Sample_GetInteractiveMarkers_Request_DataWriter_ptr _duplicate (Sample_GetInteractiveMarkers_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetInteractiveMarkers_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetInteractiveMarkers_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetInteractiveMarkers_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetInteractiveMarkers_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetInteractiveMarkers_Request_& instance_data) = 0;

            protected:
                Sample_GetInteractiveMarkers_Request_DataWriter () {};
                ~Sample_GetInteractiveMarkers_Request_DataWriter () {};
            private:
                Sample_GetInteractiveMarkers_Request_DataWriter (const Sample_GetInteractiveMarkers_Request_DataWriter &);
                Sample_GetInteractiveMarkers_Request_DataWriter & operator = (const Sample_GetInteractiveMarkers_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Request_DataReader_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Request_DataReader_var _var_type;

                static Sample_GetInteractiveMarkers_Request_DataReader_ptr _duplicate (Sample_GetInteractiveMarkers_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetInteractiveMarkers_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetInteractiveMarkers_Request_& instance) = 0;

            protected:
                Sample_GetInteractiveMarkers_Request_DataReader () {};
                ~Sample_GetInteractiveMarkers_Request_DataReader () {};
            private:
                Sample_GetInteractiveMarkers_Request_DataReader (const Sample_GetInteractiveMarkers_Request_DataReader &);
                Sample_GetInteractiveMarkers_Request_DataReader & operator = (const Sample_GetInteractiveMarkers_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Request_DataReaderView_var _var_type;

                static Sample_GetInteractiveMarkers_Request_DataReaderView_ptr _duplicate (Sample_GetInteractiveMarkers_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetInteractiveMarkers_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetInteractiveMarkers_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetInteractiveMarkers_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetInteractiveMarkers_Request_& instance) = 0;

            protected:
                Sample_GetInteractiveMarkers_Request_DataReaderView () {};
                ~Sample_GetInteractiveMarkers_Request_DataReaderView () {};
            private:
                Sample_GetInteractiveMarkers_Request_DataReaderView (const Sample_GetInteractiveMarkers_Request_DataReaderView &);
                Sample_GetInteractiveMarkers_Request_DataReaderView & operator = (const Sample_GetInteractiveMarkers_Request_DataReaderView &);
            };
            class Sample_GetInteractiveMarkers_Response_TypeSupportInterface;

            typedef Sample_GetInteractiveMarkers_Response_TypeSupportInterface * Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Response_TypeSupportInterface> Sample_GetInteractiveMarkers_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Response_TypeSupportInterface> Sample_GetInteractiveMarkers_Response_TypeSupportInterface_out;


            class Sample_GetInteractiveMarkers_Response_DataWriter;

            typedef Sample_GetInteractiveMarkers_Response_DataWriter * Sample_GetInteractiveMarkers_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Response_DataWriter> Sample_GetInteractiveMarkers_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Response_DataWriter> Sample_GetInteractiveMarkers_Response_DataWriter_out;


            class Sample_GetInteractiveMarkers_Response_DataReader;

            typedef Sample_GetInteractiveMarkers_Response_DataReader * Sample_GetInteractiveMarkers_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Response_DataReader> Sample_GetInteractiveMarkers_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Response_DataReader> Sample_GetInteractiveMarkers_Response_DataReader_out;


            class Sample_GetInteractiveMarkers_Response_DataReaderView;

            typedef Sample_GetInteractiveMarkers_Response_DataReaderView * Sample_GetInteractiveMarkers_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_GetInteractiveMarkers_Response_DataReaderView> Sample_GetInteractiveMarkers_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_GetInteractiveMarkers_Response_DataReaderView> Sample_GetInteractiveMarkers_Response_DataReaderView_out;

            struct Sample_GetInteractiveMarkers_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_GetInteractiveMarkers_Response_, struct Sample_GetInteractiveMarkers_Response_Seq_uniq_> Sample_GetInteractiveMarkers_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_GetInteractiveMarkers_Response_Seq> Sample_GetInteractiveMarkers_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_GetInteractiveMarkers_Response_Seq> Sample_GetInteractiveMarkers_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Response_TypeSupportInterface_var _var_type;

                static Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr _duplicate (Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_GetInteractiveMarkers_Response_TypeSupportInterface () {};
                ~Sample_GetInteractiveMarkers_Response_TypeSupportInterface () {};
            private:
                Sample_GetInteractiveMarkers_Response_TypeSupportInterface (const Sample_GetInteractiveMarkers_Response_TypeSupportInterface &);
                Sample_GetInteractiveMarkers_Response_TypeSupportInterface & operator = (const Sample_GetInteractiveMarkers_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Response_DataWriter_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Response_DataWriter_var _var_type;

                static Sample_GetInteractiveMarkers_Response_DataWriter_ptr _duplicate (Sample_GetInteractiveMarkers_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_GetInteractiveMarkers_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_GetInteractiveMarkers_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_GetInteractiveMarkers_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_GetInteractiveMarkers_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetInteractiveMarkers_Response_& instance_data) = 0;

            protected:
                Sample_GetInteractiveMarkers_Response_DataWriter () {};
                ~Sample_GetInteractiveMarkers_Response_DataWriter () {};
            private:
                Sample_GetInteractiveMarkers_Response_DataWriter (const Sample_GetInteractiveMarkers_Response_DataWriter &);
                Sample_GetInteractiveMarkers_Response_DataWriter & operator = (const Sample_GetInteractiveMarkers_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Response_DataReader_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Response_DataReader_var _var_type;

                static Sample_GetInteractiveMarkers_Response_DataReader_ptr _duplicate (Sample_GetInteractiveMarkers_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetInteractiveMarkers_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetInteractiveMarkers_Response_& instance) = 0;

            protected:
                Sample_GetInteractiveMarkers_Response_DataReader () {};
                ~Sample_GetInteractiveMarkers_Response_DataReader () {};
            private:
                Sample_GetInteractiveMarkers_Response_DataReader (const Sample_GetInteractiveMarkers_Response_DataReader &);
                Sample_GetInteractiveMarkers_Response_DataReader & operator = (const Sample_GetInteractiveMarkers_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_visualization_msgs Sample_GetInteractiveMarkers_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_GetInteractiveMarkers_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_GetInteractiveMarkers_Response_DataReaderView_var _var_type;

                static Sample_GetInteractiveMarkers_Response_DataReaderView_ptr _duplicate (Sample_GetInteractiveMarkers_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_GetInteractiveMarkers_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_GetInteractiveMarkers_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_GetInteractiveMarkers_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_GetInteractiveMarkers_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_GetInteractiveMarkers_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_GetInteractiveMarkers_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_GetInteractiveMarkers_Response_& instance) = 0;

            protected:
                Sample_GetInteractiveMarkers_Response_DataReaderView () {};
                ~Sample_GetInteractiveMarkers_Response_DataReaderView () {};
            private:
                Sample_GetInteractiveMarkers_Response_DataReaderView (const Sample_GetInteractiveMarkers_Response_DataReaderView &);
                Sample_GetInteractiveMarkers_Response_DataReaderView & operator = (const Sample_GetInteractiveMarkers_Response_DataReaderView &);
            };
        }

    }

}

#endif
