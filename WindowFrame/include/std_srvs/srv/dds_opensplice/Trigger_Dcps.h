#ifndef _H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger_DCPS_H_
#define _H_C80C4D3D54884ED6DDB869AF2F798DEC_Trigger_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Trigger_.h"

#include "std_srvs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace std_srvs
{
    namespace srv
    {
        namespace dds_
        {
            class Trigger_Request_TypeSupportInterface;

            typedef Trigger_Request_TypeSupportInterface * Trigger_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Request_TypeSupportInterface> Trigger_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Trigger_Request_TypeSupportInterface> Trigger_Request_TypeSupportInterface_out;


            class Trigger_Request_DataWriter;

            typedef Trigger_Request_DataWriter * Trigger_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Request_DataWriter> Trigger_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Trigger_Request_DataWriter> Trigger_Request_DataWriter_out;


            class Trigger_Request_DataReader;

            typedef Trigger_Request_DataReader * Trigger_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Request_DataReader> Trigger_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Trigger_Request_DataReader> Trigger_Request_DataReader_out;


            class Trigger_Request_DataReaderView;

            typedef Trigger_Request_DataReaderView * Trigger_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Request_DataReaderView> Trigger_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Trigger_Request_DataReaderView> Trigger_Request_DataReaderView_out;

            struct Trigger_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Trigger_Request_, struct Trigger_Request_Seq_uniq_> Trigger_Request_Seq;
            typedef DDS_DCPSSequence_var < Trigger_Request_Seq> Trigger_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Trigger_Request_Seq> Trigger_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Trigger_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Trigger_Request_TypeSupportInterface_var _var_type;

                static Trigger_Request_TypeSupportInterface_ptr _duplicate (Trigger_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Trigger_Request_TypeSupportInterface () {};
                ~Trigger_Request_TypeSupportInterface () {};
            private:
                Trigger_Request_TypeSupportInterface (const Trigger_Request_TypeSupportInterface &);
                Trigger_Request_TypeSupportInterface & operator = (const Trigger_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Trigger_Request_DataWriter_ptr _ptr_type;
                typedef Trigger_Request_DataWriter_var _var_type;

                static Trigger_Request_DataWriter_ptr _duplicate (Trigger_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Trigger_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Trigger_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Trigger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Trigger_Request_& instance_data) = 0;

            protected:
                Trigger_Request_DataWriter () {};
                ~Trigger_Request_DataWriter () {};
            private:
                Trigger_Request_DataWriter (const Trigger_Request_DataWriter &);
                Trigger_Request_DataWriter & operator = (const Trigger_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Trigger_Request_DataReader_ptr _ptr_type;
                typedef Trigger_Request_DataReader_var _var_type;

                static Trigger_Request_DataReader_ptr _duplicate (Trigger_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Trigger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Trigger_Request_& instance) = 0;

            protected:
                Trigger_Request_DataReader () {};
                ~Trigger_Request_DataReader () {};
            private:
                Trigger_Request_DataReader (const Trigger_Request_DataReader &);
                Trigger_Request_DataReader & operator = (const Trigger_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Trigger_Request_DataReaderView_ptr _ptr_type;
                typedef Trigger_Request_DataReaderView_var _var_type;

                static Trigger_Request_DataReaderView_ptr _duplicate (Trigger_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Trigger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Trigger_Request_& instance) = 0;

            protected:
                Trigger_Request_DataReaderView () {};
                ~Trigger_Request_DataReaderView () {};
            private:
                Trigger_Request_DataReaderView (const Trigger_Request_DataReaderView &);
                Trigger_Request_DataReaderView & operator = (const Trigger_Request_DataReaderView &);
            };
            class Trigger_Response_TypeSupportInterface;

            typedef Trigger_Response_TypeSupportInterface * Trigger_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Response_TypeSupportInterface> Trigger_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Trigger_Response_TypeSupportInterface> Trigger_Response_TypeSupportInterface_out;


            class Trigger_Response_DataWriter;

            typedef Trigger_Response_DataWriter * Trigger_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Response_DataWriter> Trigger_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Trigger_Response_DataWriter> Trigger_Response_DataWriter_out;


            class Trigger_Response_DataReader;

            typedef Trigger_Response_DataReader * Trigger_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Response_DataReader> Trigger_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Trigger_Response_DataReader> Trigger_Response_DataReader_out;


            class Trigger_Response_DataReaderView;

            typedef Trigger_Response_DataReaderView * Trigger_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Trigger_Response_DataReaderView> Trigger_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Trigger_Response_DataReaderView> Trigger_Response_DataReaderView_out;

            struct Trigger_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Trigger_Response_, struct Trigger_Response_Seq_uniq_> Trigger_Response_Seq;
            typedef DDS_DCPSSequence_var < Trigger_Response_Seq> Trigger_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Trigger_Response_Seq> Trigger_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Trigger_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Trigger_Response_TypeSupportInterface_var _var_type;

                static Trigger_Response_TypeSupportInterface_ptr _duplicate (Trigger_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Trigger_Response_TypeSupportInterface () {};
                ~Trigger_Response_TypeSupportInterface () {};
            private:
                Trigger_Response_TypeSupportInterface (const Trigger_Response_TypeSupportInterface &);
                Trigger_Response_TypeSupportInterface & operator = (const Trigger_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Trigger_Response_DataWriter_ptr _ptr_type;
                typedef Trigger_Response_DataWriter_var _var_type;

                static Trigger_Response_DataWriter_ptr _duplicate (Trigger_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Trigger_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Trigger_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Trigger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Trigger_Response_& instance_data) = 0;

            protected:
                Trigger_Response_DataWriter () {};
                ~Trigger_Response_DataWriter () {};
            private:
                Trigger_Response_DataWriter (const Trigger_Response_DataWriter &);
                Trigger_Response_DataWriter & operator = (const Trigger_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Trigger_Response_DataReader_ptr _ptr_type;
                typedef Trigger_Response_DataReader_var _var_type;

                static Trigger_Response_DataReader_ptr _duplicate (Trigger_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Trigger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Trigger_Response_& instance) = 0;

            protected:
                Trigger_Response_DataReader () {};
                ~Trigger_Response_DataReader () {};
            private:
                Trigger_Response_DataReader (const Trigger_Response_DataReader &);
                Trigger_Response_DataReader & operator = (const Trigger_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Trigger_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Trigger_Response_DataReaderView_ptr _ptr_type;
                typedef Trigger_Response_DataReaderView_var _var_type;

                static Trigger_Response_DataReaderView_ptr _duplicate (Trigger_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Trigger_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Trigger_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Trigger_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Trigger_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Trigger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Trigger_Response_& instance) = 0;

            protected:
                Trigger_Response_DataReaderView () {};
                ~Trigger_Response_DataReaderView () {};
            private:
                Trigger_Response_DataReaderView (const Trigger_Response_DataReaderView &);
                Trigger_Response_DataReaderView & operator = (const Trigger_Response_DataReaderView &);
            };
            class Sample_Trigger_Request_TypeSupportInterface;

            typedef Sample_Trigger_Request_TypeSupportInterface * Sample_Trigger_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Request_TypeSupportInterface> Sample_Trigger_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Request_TypeSupportInterface> Sample_Trigger_Request_TypeSupportInterface_out;


            class Sample_Trigger_Request_DataWriter;

            typedef Sample_Trigger_Request_DataWriter * Sample_Trigger_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Request_DataWriter> Sample_Trigger_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Request_DataWriter> Sample_Trigger_Request_DataWriter_out;


            class Sample_Trigger_Request_DataReader;

            typedef Sample_Trigger_Request_DataReader * Sample_Trigger_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Request_DataReader> Sample_Trigger_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Request_DataReader> Sample_Trigger_Request_DataReader_out;


            class Sample_Trigger_Request_DataReaderView;

            typedef Sample_Trigger_Request_DataReaderView * Sample_Trigger_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Request_DataReaderView> Sample_Trigger_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Request_DataReaderView> Sample_Trigger_Request_DataReaderView_out;

            struct Sample_Trigger_Request_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_Trigger_Request_, struct Sample_Trigger_Request_Seq_uniq_> Sample_Trigger_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_Trigger_Request_Seq> Sample_Trigger_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Trigger_Request_Seq> Sample_Trigger_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Trigger_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Trigger_Request_TypeSupportInterface_var _var_type;

                static Sample_Trigger_Request_TypeSupportInterface_ptr _duplicate (Sample_Trigger_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Trigger_Request_TypeSupportInterface () {};
                ~Sample_Trigger_Request_TypeSupportInterface () {};
            private:
                Sample_Trigger_Request_TypeSupportInterface (const Sample_Trigger_Request_TypeSupportInterface &);
                Sample_Trigger_Request_TypeSupportInterface & operator = (const Sample_Trigger_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Trigger_Request_DataWriter_ptr _ptr_type;
                typedef Sample_Trigger_Request_DataWriter_var _var_type;

                static Sample_Trigger_Request_DataWriter_ptr _duplicate (Sample_Trigger_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Trigger_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Trigger_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Trigger_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Trigger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Trigger_Request_& instance_data) = 0;

            protected:
                Sample_Trigger_Request_DataWriter () {};
                ~Sample_Trigger_Request_DataWriter () {};
            private:
                Sample_Trigger_Request_DataWriter (const Sample_Trigger_Request_DataWriter &);
                Sample_Trigger_Request_DataWriter & operator = (const Sample_Trigger_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Trigger_Request_DataReader_ptr _ptr_type;
                typedef Sample_Trigger_Request_DataReader_var _var_type;

                static Sample_Trigger_Request_DataReader_ptr _duplicate (Sample_Trigger_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Trigger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Trigger_Request_& instance) = 0;

            protected:
                Sample_Trigger_Request_DataReader () {};
                ~Sample_Trigger_Request_DataReader () {};
            private:
                Sample_Trigger_Request_DataReader (const Sample_Trigger_Request_DataReader &);
                Sample_Trigger_Request_DataReader & operator = (const Sample_Trigger_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Trigger_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_Trigger_Request_DataReaderView_var _var_type;

                static Sample_Trigger_Request_DataReaderView_ptr _duplicate (Sample_Trigger_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Trigger_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Trigger_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Trigger_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Trigger_Request_& instance) = 0;

            protected:
                Sample_Trigger_Request_DataReaderView () {};
                ~Sample_Trigger_Request_DataReaderView () {};
            private:
                Sample_Trigger_Request_DataReaderView (const Sample_Trigger_Request_DataReaderView &);
                Sample_Trigger_Request_DataReaderView & operator = (const Sample_Trigger_Request_DataReaderView &);
            };
            class Sample_Trigger_Response_TypeSupportInterface;

            typedef Sample_Trigger_Response_TypeSupportInterface * Sample_Trigger_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Response_TypeSupportInterface> Sample_Trigger_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Response_TypeSupportInterface> Sample_Trigger_Response_TypeSupportInterface_out;


            class Sample_Trigger_Response_DataWriter;

            typedef Sample_Trigger_Response_DataWriter * Sample_Trigger_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Response_DataWriter> Sample_Trigger_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Response_DataWriter> Sample_Trigger_Response_DataWriter_out;


            class Sample_Trigger_Response_DataReader;

            typedef Sample_Trigger_Response_DataReader * Sample_Trigger_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Response_DataReader> Sample_Trigger_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Response_DataReader> Sample_Trigger_Response_DataReader_out;


            class Sample_Trigger_Response_DataReaderView;

            typedef Sample_Trigger_Response_DataReaderView * Sample_Trigger_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_Trigger_Response_DataReaderView> Sample_Trigger_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_Trigger_Response_DataReaderView> Sample_Trigger_Response_DataReaderView_out;

            struct Sample_Trigger_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_Trigger_Response_, struct Sample_Trigger_Response_Seq_uniq_> Sample_Trigger_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_Trigger_Response_Seq> Sample_Trigger_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_Trigger_Response_Seq> Sample_Trigger_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_Trigger_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_Trigger_Response_TypeSupportInterface_var _var_type;

                static Sample_Trigger_Response_TypeSupportInterface_ptr _duplicate (Sample_Trigger_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_Trigger_Response_TypeSupportInterface () {};
                ~Sample_Trigger_Response_TypeSupportInterface () {};
            private:
                Sample_Trigger_Response_TypeSupportInterface (const Sample_Trigger_Response_TypeSupportInterface &);
                Sample_Trigger_Response_TypeSupportInterface & operator = (const Sample_Trigger_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_Trigger_Response_DataWriter_ptr _ptr_type;
                typedef Sample_Trigger_Response_DataWriter_var _var_type;

                static Sample_Trigger_Response_DataWriter_ptr _duplicate (Sample_Trigger_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_Trigger_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_Trigger_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_Trigger_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_Trigger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Trigger_Response_& instance_data) = 0;

            protected:
                Sample_Trigger_Response_DataWriter () {};
                ~Sample_Trigger_Response_DataWriter () {};
            private:
                Sample_Trigger_Response_DataWriter (const Sample_Trigger_Response_DataWriter &);
                Sample_Trigger_Response_DataWriter & operator = (const Sample_Trigger_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_Trigger_Response_DataReader_ptr _ptr_type;
                typedef Sample_Trigger_Response_DataReader_var _var_type;

                static Sample_Trigger_Response_DataReader_ptr _duplicate (Sample_Trigger_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Trigger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Trigger_Response_& instance) = 0;

            protected:
                Sample_Trigger_Response_DataReader () {};
                ~Sample_Trigger_Response_DataReader () {};
            private:
                Sample_Trigger_Response_DataReader (const Sample_Trigger_Response_DataReader &);
                Sample_Trigger_Response_DataReader & operator = (const Sample_Trigger_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_std_srvs Sample_Trigger_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_Trigger_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_Trigger_Response_DataReaderView_var _var_type;

                static Sample_Trigger_Response_DataReaderView_ptr _duplicate (Sample_Trigger_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_Trigger_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_Trigger_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_Trigger_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_Trigger_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_Trigger_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_Trigger_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_Trigger_Response_& instance) = 0;

            protected:
                Sample_Trigger_Response_DataReaderView () {};
                ~Sample_Trigger_Response_DataReaderView () {};
            private:
                Sample_Trigger_Response_DataReaderView (const Sample_Trigger_Response_DataReaderView &);
                Sample_Trigger_Response_DataReaderView & operator = (const Sample_Trigger_Response_DataReaderView &);
            };
        }

    }

}

#endif
