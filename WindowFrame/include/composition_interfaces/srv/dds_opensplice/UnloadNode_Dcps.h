#ifndef _H_B4BFC739E309079E1A9CC9028B099DC0_UnloadNode_DCPS_H_
#define _H_B4BFC739E309079E1A9CC9028B099DC0_UnloadNode_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UnloadNode_.h"

#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace composition_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class UnloadNode_Request_TypeSupportInterface;

            typedef UnloadNode_Request_TypeSupportInterface * UnloadNode_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Request_TypeSupportInterface> UnloadNode_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Request_TypeSupportInterface> UnloadNode_Request_TypeSupportInterface_out;


            class UnloadNode_Request_DataWriter;

            typedef UnloadNode_Request_DataWriter * UnloadNode_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Request_DataWriter> UnloadNode_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Request_DataWriter> UnloadNode_Request_DataWriter_out;


            class UnloadNode_Request_DataReader;

            typedef UnloadNode_Request_DataReader * UnloadNode_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Request_DataReader> UnloadNode_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Request_DataReader> UnloadNode_Request_DataReader_out;


            class UnloadNode_Request_DataReaderView;

            typedef UnloadNode_Request_DataReaderView * UnloadNode_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Request_DataReaderView> UnloadNode_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Request_DataReaderView> UnloadNode_Request_DataReaderView_out;

            struct UnloadNode_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < UnloadNode_Request_, struct UnloadNode_Request_Seq_uniq_> UnloadNode_Request_Seq;
            typedef DDS_DCPSSequence_var < UnloadNode_Request_Seq> UnloadNode_Request_Seq_var;
            typedef DDS_DCPSSequence_out < UnloadNode_Request_Seq> UnloadNode_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UnloadNode_Request_TypeSupportInterface_ptr _ptr_type;
                typedef UnloadNode_Request_TypeSupportInterface_var _var_type;

                static UnloadNode_Request_TypeSupportInterface_ptr _duplicate (UnloadNode_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UnloadNode_Request_TypeSupportInterface () {};
                ~UnloadNode_Request_TypeSupportInterface () {};
            private:
                UnloadNode_Request_TypeSupportInterface (const UnloadNode_Request_TypeSupportInterface &);
                UnloadNode_Request_TypeSupportInterface & operator = (const UnloadNode_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UnloadNode_Request_DataWriter_ptr _ptr_type;
                typedef UnloadNode_Request_DataWriter_var _var_type;

                static UnloadNode_Request_DataWriter_ptr _duplicate (UnloadNode_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UnloadNode_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UnloadNode_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UnloadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnloadNode_Request_& instance_data) = 0;

            protected:
                UnloadNode_Request_DataWriter () {};
                ~UnloadNode_Request_DataWriter () {};
            private:
                UnloadNode_Request_DataWriter (const UnloadNode_Request_DataWriter &);
                UnloadNode_Request_DataWriter & operator = (const UnloadNode_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UnloadNode_Request_DataReader_ptr _ptr_type;
                typedef UnloadNode_Request_DataReader_var _var_type;

                static UnloadNode_Request_DataReader_ptr _duplicate (UnloadNode_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UnloadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnloadNode_Request_& instance) = 0;

            protected:
                UnloadNode_Request_DataReader () {};
                ~UnloadNode_Request_DataReader () {};
            private:
                UnloadNode_Request_DataReader (const UnloadNode_Request_DataReader &);
                UnloadNode_Request_DataReader & operator = (const UnloadNode_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UnloadNode_Request_DataReaderView_ptr _ptr_type;
                typedef UnloadNode_Request_DataReaderView_var _var_type;

                static UnloadNode_Request_DataReaderView_ptr _duplicate (UnloadNode_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UnloadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnloadNode_Request_& instance) = 0;

            protected:
                UnloadNode_Request_DataReaderView () {};
                ~UnloadNode_Request_DataReaderView () {};
            private:
                UnloadNode_Request_DataReaderView (const UnloadNode_Request_DataReaderView &);
                UnloadNode_Request_DataReaderView & operator = (const UnloadNode_Request_DataReaderView &);
            };
            class UnloadNode_Response_TypeSupportInterface;

            typedef UnloadNode_Response_TypeSupportInterface * UnloadNode_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Response_TypeSupportInterface> UnloadNode_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Response_TypeSupportInterface> UnloadNode_Response_TypeSupportInterface_out;


            class UnloadNode_Response_DataWriter;

            typedef UnloadNode_Response_DataWriter * UnloadNode_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Response_DataWriter> UnloadNode_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Response_DataWriter> UnloadNode_Response_DataWriter_out;


            class UnloadNode_Response_DataReader;

            typedef UnloadNode_Response_DataReader * UnloadNode_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Response_DataReader> UnloadNode_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Response_DataReader> UnloadNode_Response_DataReader_out;


            class UnloadNode_Response_DataReaderView;

            typedef UnloadNode_Response_DataReaderView * UnloadNode_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UnloadNode_Response_DataReaderView> UnloadNode_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UnloadNode_Response_DataReaderView> UnloadNode_Response_DataReaderView_out;

            struct UnloadNode_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < UnloadNode_Response_, struct UnloadNode_Response_Seq_uniq_> UnloadNode_Response_Seq;
            typedef DDS_DCPSSequence_var < UnloadNode_Response_Seq> UnloadNode_Response_Seq_var;
            typedef DDS_DCPSSequence_out < UnloadNode_Response_Seq> UnloadNode_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UnloadNode_Response_TypeSupportInterface_ptr _ptr_type;
                typedef UnloadNode_Response_TypeSupportInterface_var _var_type;

                static UnloadNode_Response_TypeSupportInterface_ptr _duplicate (UnloadNode_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UnloadNode_Response_TypeSupportInterface () {};
                ~UnloadNode_Response_TypeSupportInterface () {};
            private:
                UnloadNode_Response_TypeSupportInterface (const UnloadNode_Response_TypeSupportInterface &);
                UnloadNode_Response_TypeSupportInterface & operator = (const UnloadNode_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UnloadNode_Response_DataWriter_ptr _ptr_type;
                typedef UnloadNode_Response_DataWriter_var _var_type;

                static UnloadNode_Response_DataWriter_ptr _duplicate (UnloadNode_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UnloadNode_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UnloadNode_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UnloadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnloadNode_Response_& instance_data) = 0;

            protected:
                UnloadNode_Response_DataWriter () {};
                ~UnloadNode_Response_DataWriter () {};
            private:
                UnloadNode_Response_DataWriter (const UnloadNode_Response_DataWriter &);
                UnloadNode_Response_DataWriter & operator = (const UnloadNode_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UnloadNode_Response_DataReader_ptr _ptr_type;
                typedef UnloadNode_Response_DataReader_var _var_type;

                static UnloadNode_Response_DataReader_ptr _duplicate (UnloadNode_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UnloadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnloadNode_Response_& instance) = 0;

            protected:
                UnloadNode_Response_DataReader () {};
                ~UnloadNode_Response_DataReader () {};
            private:
                UnloadNode_Response_DataReader (const UnloadNode_Response_DataReader &);
                UnloadNode_Response_DataReader & operator = (const UnloadNode_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces UnloadNode_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UnloadNode_Response_DataReaderView_ptr _ptr_type;
                typedef UnloadNode_Response_DataReaderView_var _var_type;

                static UnloadNode_Response_DataReaderView_ptr _duplicate (UnloadNode_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UnloadNode_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UnloadNode_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UnloadNode_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UnloadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UnloadNode_Response_& instance) = 0;

            protected:
                UnloadNode_Response_DataReaderView () {};
                ~UnloadNode_Response_DataReaderView () {};
            private:
                UnloadNode_Response_DataReaderView (const UnloadNode_Response_DataReaderView &);
                UnloadNode_Response_DataReaderView & operator = (const UnloadNode_Response_DataReaderView &);
            };
            class Sample_UnloadNode_Request_TypeSupportInterface;

            typedef Sample_UnloadNode_Request_TypeSupportInterface * Sample_UnloadNode_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Request_TypeSupportInterface> Sample_UnloadNode_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Request_TypeSupportInterface> Sample_UnloadNode_Request_TypeSupportInterface_out;


            class Sample_UnloadNode_Request_DataWriter;

            typedef Sample_UnloadNode_Request_DataWriter * Sample_UnloadNode_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Request_DataWriter> Sample_UnloadNode_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Request_DataWriter> Sample_UnloadNode_Request_DataWriter_out;


            class Sample_UnloadNode_Request_DataReader;

            typedef Sample_UnloadNode_Request_DataReader * Sample_UnloadNode_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Request_DataReader> Sample_UnloadNode_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Request_DataReader> Sample_UnloadNode_Request_DataReader_out;


            class Sample_UnloadNode_Request_DataReaderView;

            typedef Sample_UnloadNode_Request_DataReaderView * Sample_UnloadNode_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Request_DataReaderView> Sample_UnloadNode_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Request_DataReaderView> Sample_UnloadNode_Request_DataReaderView_out;

            struct Sample_UnloadNode_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_UnloadNode_Request_, struct Sample_UnloadNode_Request_Seq_uniq_> Sample_UnloadNode_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_UnloadNode_Request_Seq> Sample_UnloadNode_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_UnloadNode_Request_Seq> Sample_UnloadNode_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_UnloadNode_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_UnloadNode_Request_TypeSupportInterface_var _var_type;

                static Sample_UnloadNode_Request_TypeSupportInterface_ptr _duplicate (Sample_UnloadNode_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_UnloadNode_Request_TypeSupportInterface () {};
                ~Sample_UnloadNode_Request_TypeSupportInterface () {};
            private:
                Sample_UnloadNode_Request_TypeSupportInterface (const Sample_UnloadNode_Request_TypeSupportInterface &);
                Sample_UnloadNode_Request_TypeSupportInterface & operator = (const Sample_UnloadNode_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_UnloadNode_Request_DataWriter_ptr _ptr_type;
                typedef Sample_UnloadNode_Request_DataWriter_var _var_type;

                static Sample_UnloadNode_Request_DataWriter_ptr _duplicate (Sample_UnloadNode_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_UnloadNode_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_UnloadNode_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_UnloadNode_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_UnloadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_UnloadNode_Request_& instance_data) = 0;

            protected:
                Sample_UnloadNode_Request_DataWriter () {};
                ~Sample_UnloadNode_Request_DataWriter () {};
            private:
                Sample_UnloadNode_Request_DataWriter (const Sample_UnloadNode_Request_DataWriter &);
                Sample_UnloadNode_Request_DataWriter & operator = (const Sample_UnloadNode_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_UnloadNode_Request_DataReader_ptr _ptr_type;
                typedef Sample_UnloadNode_Request_DataReader_var _var_type;

                static Sample_UnloadNode_Request_DataReader_ptr _duplicate (Sample_UnloadNode_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_UnloadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_UnloadNode_Request_& instance) = 0;

            protected:
                Sample_UnloadNode_Request_DataReader () {};
                ~Sample_UnloadNode_Request_DataReader () {};
            private:
                Sample_UnloadNode_Request_DataReader (const Sample_UnloadNode_Request_DataReader &);
                Sample_UnloadNode_Request_DataReader & operator = (const Sample_UnloadNode_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_UnloadNode_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_UnloadNode_Request_DataReaderView_var _var_type;

                static Sample_UnloadNode_Request_DataReaderView_ptr _duplicate (Sample_UnloadNode_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_UnloadNode_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_UnloadNode_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_UnloadNode_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_UnloadNode_Request_& instance) = 0;

            protected:
                Sample_UnloadNode_Request_DataReaderView () {};
                ~Sample_UnloadNode_Request_DataReaderView () {};
            private:
                Sample_UnloadNode_Request_DataReaderView (const Sample_UnloadNode_Request_DataReaderView &);
                Sample_UnloadNode_Request_DataReaderView & operator = (const Sample_UnloadNode_Request_DataReaderView &);
            };
            class Sample_UnloadNode_Response_TypeSupportInterface;

            typedef Sample_UnloadNode_Response_TypeSupportInterface * Sample_UnloadNode_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Response_TypeSupportInterface> Sample_UnloadNode_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Response_TypeSupportInterface> Sample_UnloadNode_Response_TypeSupportInterface_out;


            class Sample_UnloadNode_Response_DataWriter;

            typedef Sample_UnloadNode_Response_DataWriter * Sample_UnloadNode_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Response_DataWriter> Sample_UnloadNode_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Response_DataWriter> Sample_UnloadNode_Response_DataWriter_out;


            class Sample_UnloadNode_Response_DataReader;

            typedef Sample_UnloadNode_Response_DataReader * Sample_UnloadNode_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Response_DataReader> Sample_UnloadNode_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Response_DataReader> Sample_UnloadNode_Response_DataReader_out;


            class Sample_UnloadNode_Response_DataReaderView;

            typedef Sample_UnloadNode_Response_DataReaderView * Sample_UnloadNode_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_UnloadNode_Response_DataReaderView> Sample_UnloadNode_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_UnloadNode_Response_DataReaderView> Sample_UnloadNode_Response_DataReaderView_out;

            struct Sample_UnloadNode_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_UnloadNode_Response_, struct Sample_UnloadNode_Response_Seq_uniq_> Sample_UnloadNode_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_UnloadNode_Response_Seq> Sample_UnloadNode_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_UnloadNode_Response_Seq> Sample_UnloadNode_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_UnloadNode_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_UnloadNode_Response_TypeSupportInterface_var _var_type;

                static Sample_UnloadNode_Response_TypeSupportInterface_ptr _duplicate (Sample_UnloadNode_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_UnloadNode_Response_TypeSupportInterface () {};
                ~Sample_UnloadNode_Response_TypeSupportInterface () {};
            private:
                Sample_UnloadNode_Response_TypeSupportInterface (const Sample_UnloadNode_Response_TypeSupportInterface &);
                Sample_UnloadNode_Response_TypeSupportInterface & operator = (const Sample_UnloadNode_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_UnloadNode_Response_DataWriter_ptr _ptr_type;
                typedef Sample_UnloadNode_Response_DataWriter_var _var_type;

                static Sample_UnloadNode_Response_DataWriter_ptr _duplicate (Sample_UnloadNode_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_UnloadNode_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_UnloadNode_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_UnloadNode_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_UnloadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_UnloadNode_Response_& instance_data) = 0;

            protected:
                Sample_UnloadNode_Response_DataWriter () {};
                ~Sample_UnloadNode_Response_DataWriter () {};
            private:
                Sample_UnloadNode_Response_DataWriter (const Sample_UnloadNode_Response_DataWriter &);
                Sample_UnloadNode_Response_DataWriter & operator = (const Sample_UnloadNode_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_UnloadNode_Response_DataReader_ptr _ptr_type;
                typedef Sample_UnloadNode_Response_DataReader_var _var_type;

                static Sample_UnloadNode_Response_DataReader_ptr _duplicate (Sample_UnloadNode_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_UnloadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_UnloadNode_Response_& instance) = 0;

            protected:
                Sample_UnloadNode_Response_DataReader () {};
                ~Sample_UnloadNode_Response_DataReader () {};
            private:
                Sample_UnloadNode_Response_DataReader (const Sample_UnloadNode_Response_DataReader &);
                Sample_UnloadNode_Response_DataReader & operator = (const Sample_UnloadNode_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_UnloadNode_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_UnloadNode_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_UnloadNode_Response_DataReaderView_var _var_type;

                static Sample_UnloadNode_Response_DataReaderView_ptr _duplicate (Sample_UnloadNode_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_UnloadNode_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_UnloadNode_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_UnloadNode_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_UnloadNode_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_UnloadNode_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_UnloadNode_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_UnloadNode_Response_& instance) = 0;

            protected:
                Sample_UnloadNode_Response_DataReaderView () {};
                ~Sample_UnloadNode_Response_DataReaderView () {};
            private:
                Sample_UnloadNode_Response_DataReaderView (const Sample_UnloadNode_Response_DataReaderView &);
                Sample_UnloadNode_Response_DataReaderView & operator = (const Sample_UnloadNode_Response_DataReaderView &);
            };
        }

    }

}

#endif
