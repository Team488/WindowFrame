#ifndef _H_C9003363A178233440D0F96D6122C26D_ListNodes_DCPS_H_
#define _H_C9003363A178233440D0F96D6122C26D_ListNodes_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ListNodes_.h"

#include "composition_interfaces/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace composition_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class ListNodes_Request_TypeSupportInterface;

            typedef ListNodes_Request_TypeSupportInterface * ListNodes_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Request_TypeSupportInterface> ListNodes_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ListNodes_Request_TypeSupportInterface> ListNodes_Request_TypeSupportInterface_out;


            class ListNodes_Request_DataWriter;

            typedef ListNodes_Request_DataWriter * ListNodes_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Request_DataWriter> ListNodes_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < ListNodes_Request_DataWriter> ListNodes_Request_DataWriter_out;


            class ListNodes_Request_DataReader;

            typedef ListNodes_Request_DataReader * ListNodes_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Request_DataReader> ListNodes_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < ListNodes_Request_DataReader> ListNodes_Request_DataReader_out;


            class ListNodes_Request_DataReaderView;

            typedef ListNodes_Request_DataReaderView * ListNodes_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Request_DataReaderView> ListNodes_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ListNodes_Request_DataReaderView> ListNodes_Request_DataReaderView_out;

            struct ListNodes_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ListNodes_Request_, struct ListNodes_Request_Seq_uniq_> ListNodes_Request_Seq;
            typedef DDS_DCPSSequence_var < ListNodes_Request_Seq> ListNodes_Request_Seq_var;
            typedef DDS_DCPSSequence_out < ListNodes_Request_Seq> ListNodes_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ListNodes_Request_TypeSupportInterface_ptr _ptr_type;
                typedef ListNodes_Request_TypeSupportInterface_var _var_type;

                static ListNodes_Request_TypeSupportInterface_ptr _duplicate (ListNodes_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ListNodes_Request_TypeSupportInterface () {};
                ~ListNodes_Request_TypeSupportInterface () {};
            private:
                ListNodes_Request_TypeSupportInterface (const ListNodes_Request_TypeSupportInterface &);
                ListNodes_Request_TypeSupportInterface & operator = (const ListNodes_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ListNodes_Request_DataWriter_ptr _ptr_type;
                typedef ListNodes_Request_DataWriter_var _var_type;

                static ListNodes_Request_DataWriter_ptr _duplicate (ListNodes_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ListNodes_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ListNodes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ListNodes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListNodes_Request_& instance_data) = 0;

            protected:
                ListNodes_Request_DataWriter () {};
                ~ListNodes_Request_DataWriter () {};
            private:
                ListNodes_Request_DataWriter (const ListNodes_Request_DataWriter &);
                ListNodes_Request_DataWriter & operator = (const ListNodes_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ListNodes_Request_DataReader_ptr _ptr_type;
                typedef ListNodes_Request_DataReader_var _var_type;

                static ListNodes_Request_DataReader_ptr _duplicate (ListNodes_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListNodes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListNodes_Request_& instance) = 0;

            protected:
                ListNodes_Request_DataReader () {};
                ~ListNodes_Request_DataReader () {};
            private:
                ListNodes_Request_DataReader (const ListNodes_Request_DataReader &);
                ListNodes_Request_DataReader & operator = (const ListNodes_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ListNodes_Request_DataReaderView_ptr _ptr_type;
                typedef ListNodes_Request_DataReaderView_var _var_type;

                static ListNodes_Request_DataReaderView_ptr _duplicate (ListNodes_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListNodes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListNodes_Request_& instance) = 0;

            protected:
                ListNodes_Request_DataReaderView () {};
                ~ListNodes_Request_DataReaderView () {};
            private:
                ListNodes_Request_DataReaderView (const ListNodes_Request_DataReaderView &);
                ListNodes_Request_DataReaderView & operator = (const ListNodes_Request_DataReaderView &);
            };
            class ListNodes_Response_TypeSupportInterface;

            typedef ListNodes_Response_TypeSupportInterface * ListNodes_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Response_TypeSupportInterface> ListNodes_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ListNodes_Response_TypeSupportInterface> ListNodes_Response_TypeSupportInterface_out;


            class ListNodes_Response_DataWriter;

            typedef ListNodes_Response_DataWriter * ListNodes_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Response_DataWriter> ListNodes_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < ListNodes_Response_DataWriter> ListNodes_Response_DataWriter_out;


            class ListNodes_Response_DataReader;

            typedef ListNodes_Response_DataReader * ListNodes_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Response_DataReader> ListNodes_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < ListNodes_Response_DataReader> ListNodes_Response_DataReader_out;


            class ListNodes_Response_DataReaderView;

            typedef ListNodes_Response_DataReaderView * ListNodes_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ListNodes_Response_DataReaderView> ListNodes_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ListNodes_Response_DataReaderView> ListNodes_Response_DataReaderView_out;

            struct ListNodes_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ListNodes_Response_, struct ListNodes_Response_Seq_uniq_> ListNodes_Response_Seq;
            typedef DDS_DCPSSequence_var < ListNodes_Response_Seq> ListNodes_Response_Seq_var;
            typedef DDS_DCPSSequence_out < ListNodes_Response_Seq> ListNodes_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ListNodes_Response_TypeSupportInterface_ptr _ptr_type;
                typedef ListNodes_Response_TypeSupportInterface_var _var_type;

                static ListNodes_Response_TypeSupportInterface_ptr _duplicate (ListNodes_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ListNodes_Response_TypeSupportInterface () {};
                ~ListNodes_Response_TypeSupportInterface () {};
            private:
                ListNodes_Response_TypeSupportInterface (const ListNodes_Response_TypeSupportInterface &);
                ListNodes_Response_TypeSupportInterface & operator = (const ListNodes_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ListNodes_Response_DataWriter_ptr _ptr_type;
                typedef ListNodes_Response_DataWriter_var _var_type;

                static ListNodes_Response_DataWriter_ptr _duplicate (ListNodes_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ListNodes_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ListNodes_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ListNodes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListNodes_Response_& instance_data) = 0;

            protected:
                ListNodes_Response_DataWriter () {};
                ~ListNodes_Response_DataWriter () {};
            private:
                ListNodes_Response_DataWriter (const ListNodes_Response_DataWriter &);
                ListNodes_Response_DataWriter & operator = (const ListNodes_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ListNodes_Response_DataReader_ptr _ptr_type;
                typedef ListNodes_Response_DataReader_var _var_type;

                static ListNodes_Response_DataReader_ptr _duplicate (ListNodes_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListNodes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListNodes_Response_& instance) = 0;

            protected:
                ListNodes_Response_DataReader () {};
                ~ListNodes_Response_DataReader () {};
            private:
                ListNodes_Response_DataReader (const ListNodes_Response_DataReader &);
                ListNodes_Response_DataReader & operator = (const ListNodes_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces ListNodes_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ListNodes_Response_DataReaderView_ptr _ptr_type;
                typedef ListNodes_Response_DataReaderView_var _var_type;

                static ListNodes_Response_DataReaderView_ptr _duplicate (ListNodes_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListNodes_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ListNodes_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListNodes_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ListNodes_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListNodes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListNodes_Response_& instance) = 0;

            protected:
                ListNodes_Response_DataReaderView () {};
                ~ListNodes_Response_DataReaderView () {};
            private:
                ListNodes_Response_DataReaderView (const ListNodes_Response_DataReaderView &);
                ListNodes_Response_DataReaderView & operator = (const ListNodes_Response_DataReaderView &);
            };
            class Sample_ListNodes_Request_TypeSupportInterface;

            typedef Sample_ListNodes_Request_TypeSupportInterface * Sample_ListNodes_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Request_TypeSupportInterface> Sample_ListNodes_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Request_TypeSupportInterface> Sample_ListNodes_Request_TypeSupportInterface_out;


            class Sample_ListNodes_Request_DataWriter;

            typedef Sample_ListNodes_Request_DataWriter * Sample_ListNodes_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Request_DataWriter> Sample_ListNodes_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Request_DataWriter> Sample_ListNodes_Request_DataWriter_out;


            class Sample_ListNodes_Request_DataReader;

            typedef Sample_ListNodes_Request_DataReader * Sample_ListNodes_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Request_DataReader> Sample_ListNodes_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Request_DataReader> Sample_ListNodes_Request_DataReader_out;


            class Sample_ListNodes_Request_DataReaderView;

            typedef Sample_ListNodes_Request_DataReaderView * Sample_ListNodes_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Request_DataReaderView> Sample_ListNodes_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Request_DataReaderView> Sample_ListNodes_Request_DataReaderView_out;

            struct Sample_ListNodes_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_ListNodes_Request_, struct Sample_ListNodes_Request_Seq_uniq_> Sample_ListNodes_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_ListNodes_Request_Seq> Sample_ListNodes_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ListNodes_Request_Seq> Sample_ListNodes_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ListNodes_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ListNodes_Request_TypeSupportInterface_var _var_type;

                static Sample_ListNodes_Request_TypeSupportInterface_ptr _duplicate (Sample_ListNodes_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ListNodes_Request_TypeSupportInterface () {};
                ~Sample_ListNodes_Request_TypeSupportInterface () {};
            private:
                Sample_ListNodes_Request_TypeSupportInterface (const Sample_ListNodes_Request_TypeSupportInterface &);
                Sample_ListNodes_Request_TypeSupportInterface & operator = (const Sample_ListNodes_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ListNodes_Request_DataWriter_ptr _ptr_type;
                typedef Sample_ListNodes_Request_DataWriter_var _var_type;

                static Sample_ListNodes_Request_DataWriter_ptr _duplicate (Sample_ListNodes_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ListNodes_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ListNodes_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ListNodes_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ListNodes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListNodes_Request_& instance_data) = 0;

            protected:
                Sample_ListNodes_Request_DataWriter () {};
                ~Sample_ListNodes_Request_DataWriter () {};
            private:
                Sample_ListNodes_Request_DataWriter (const Sample_ListNodes_Request_DataWriter &);
                Sample_ListNodes_Request_DataWriter & operator = (const Sample_ListNodes_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ListNodes_Request_DataReader_ptr _ptr_type;
                typedef Sample_ListNodes_Request_DataReader_var _var_type;

                static Sample_ListNodes_Request_DataReader_ptr _duplicate (Sample_ListNodes_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListNodes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListNodes_Request_& instance) = 0;

            protected:
                Sample_ListNodes_Request_DataReader () {};
                ~Sample_ListNodes_Request_DataReader () {};
            private:
                Sample_ListNodes_Request_DataReader (const Sample_ListNodes_Request_DataReader &);
                Sample_ListNodes_Request_DataReader & operator = (const Sample_ListNodes_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ListNodes_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_ListNodes_Request_DataReaderView_var _var_type;

                static Sample_ListNodes_Request_DataReaderView_ptr _duplicate (Sample_ListNodes_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListNodes_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListNodes_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListNodes_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListNodes_Request_& instance) = 0;

            protected:
                Sample_ListNodes_Request_DataReaderView () {};
                ~Sample_ListNodes_Request_DataReaderView () {};
            private:
                Sample_ListNodes_Request_DataReaderView (const Sample_ListNodes_Request_DataReaderView &);
                Sample_ListNodes_Request_DataReaderView & operator = (const Sample_ListNodes_Request_DataReaderView &);
            };
            class Sample_ListNodes_Response_TypeSupportInterface;

            typedef Sample_ListNodes_Response_TypeSupportInterface * Sample_ListNodes_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Response_TypeSupportInterface> Sample_ListNodes_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Response_TypeSupportInterface> Sample_ListNodes_Response_TypeSupportInterface_out;


            class Sample_ListNodes_Response_DataWriter;

            typedef Sample_ListNodes_Response_DataWriter * Sample_ListNodes_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Response_DataWriter> Sample_ListNodes_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Response_DataWriter> Sample_ListNodes_Response_DataWriter_out;


            class Sample_ListNodes_Response_DataReader;

            typedef Sample_ListNodes_Response_DataReader * Sample_ListNodes_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Response_DataReader> Sample_ListNodes_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Response_DataReader> Sample_ListNodes_Response_DataReader_out;


            class Sample_ListNodes_Response_DataReaderView;

            typedef Sample_ListNodes_Response_DataReaderView * Sample_ListNodes_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListNodes_Response_DataReaderView> Sample_ListNodes_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ListNodes_Response_DataReaderView> Sample_ListNodes_Response_DataReaderView_out;

            struct Sample_ListNodes_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_ListNodes_Response_, struct Sample_ListNodes_Response_Seq_uniq_> Sample_ListNodes_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_ListNodes_Response_Seq> Sample_ListNodes_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ListNodes_Response_Seq> Sample_ListNodes_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ListNodes_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ListNodes_Response_TypeSupportInterface_var _var_type;

                static Sample_ListNodes_Response_TypeSupportInterface_ptr _duplicate (Sample_ListNodes_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ListNodes_Response_TypeSupportInterface () {};
                ~Sample_ListNodes_Response_TypeSupportInterface () {};
            private:
                Sample_ListNodes_Response_TypeSupportInterface (const Sample_ListNodes_Response_TypeSupportInterface &);
                Sample_ListNodes_Response_TypeSupportInterface & operator = (const Sample_ListNodes_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ListNodes_Response_DataWriter_ptr _ptr_type;
                typedef Sample_ListNodes_Response_DataWriter_var _var_type;

                static Sample_ListNodes_Response_DataWriter_ptr _duplicate (Sample_ListNodes_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ListNodes_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ListNodes_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ListNodes_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ListNodes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListNodes_Response_& instance_data) = 0;

            protected:
                Sample_ListNodes_Response_DataWriter () {};
                ~Sample_ListNodes_Response_DataWriter () {};
            private:
                Sample_ListNodes_Response_DataWriter (const Sample_ListNodes_Response_DataWriter &);
                Sample_ListNodes_Response_DataWriter & operator = (const Sample_ListNodes_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ListNodes_Response_DataReader_ptr _ptr_type;
                typedef Sample_ListNodes_Response_DataReader_var _var_type;

                static Sample_ListNodes_Response_DataReader_ptr _duplicate (Sample_ListNodes_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListNodes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListNodes_Response_& instance) = 0;

            protected:
                Sample_ListNodes_Response_DataReader () {};
                ~Sample_ListNodes_Response_DataReader () {};
            private:
                Sample_ListNodes_Response_DataReader (const Sample_ListNodes_Response_DataReader &);
                Sample_ListNodes_Response_DataReader & operator = (const Sample_ListNodes_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_composition_interfaces Sample_ListNodes_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ListNodes_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_ListNodes_Response_DataReaderView_var _var_type;

                static Sample_ListNodes_Response_DataReaderView_ptr _duplicate (Sample_ListNodes_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListNodes_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListNodes_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListNodes_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListNodes_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListNodes_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListNodes_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListNodes_Response_& instance) = 0;

            protected:
                Sample_ListNodes_Response_DataReaderView () {};
                ~Sample_ListNodes_Response_DataReaderView () {};
            private:
                Sample_ListNodes_Response_DataReaderView (const Sample_ListNodes_Response_DataReaderView &);
                Sample_ListNodes_Response_DataReaderView & operator = (const Sample_ListNodes_Response_DataReaderView &);
            };
        }

    }

}

#endif
