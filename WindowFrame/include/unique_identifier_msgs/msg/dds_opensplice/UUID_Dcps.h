#ifndef _H_00268DDE05B7C4AEDFBC595204C415E4_UUID_DCPS_H_
#define _H_00268DDE05B7C4AEDFBC595204C415E4_UUID_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UUID_.h"

#include "unique_identifier_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace unique_identifier_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UUID_TypeSupportInterface;

            typedef UUID_TypeSupportInterface * UUID_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UUID_TypeSupportInterface> UUID_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UUID_TypeSupportInterface> UUID_TypeSupportInterface_out;


            class UUID_DataWriter;

            typedef UUID_DataWriter * UUID_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UUID_DataWriter> UUID_DataWriter_var;
            typedef DDS_DCPSInterface_out < UUID_DataWriter> UUID_DataWriter_out;


            class UUID_DataReader;

            typedef UUID_DataReader * UUID_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UUID_DataReader> UUID_DataReader_var;
            typedef DDS_DCPSInterface_out < UUID_DataReader> UUID_DataReader_out;


            class UUID_DataReaderView;

            typedef UUID_DataReaderView * UUID_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UUID_DataReaderView> UUID_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UUID_DataReaderView> UUID_DataReaderView_out;

            struct UUID_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < UUID_, struct UUID_Seq_uniq_> UUID_Seq;
            typedef DDS_DCPSSequence_var < UUID_Seq> UUID_Seq_var;
            typedef DDS_DCPSSequence_out < UUID_Seq> UUID_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs UUID_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UUID_TypeSupportInterface_ptr _ptr_type;
                typedef UUID_TypeSupportInterface_var _var_type;

                static UUID_TypeSupportInterface_ptr _duplicate (UUID_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UUID_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UUID_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UUID_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UUID_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UUID_TypeSupportInterface () {};
                ~UUID_TypeSupportInterface () {};
            private:
                UUID_TypeSupportInterface (const UUID_TypeSupportInterface &);
                UUID_TypeSupportInterface & operator = (const UUID_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs UUID_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UUID_DataWriter_ptr _ptr_type;
                typedef UUID_DataWriter_var _var_type;

                static UUID_DataWriter_ptr _duplicate (UUID_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UUID_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UUID_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UUID_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UUID_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UUID_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UUID_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UUID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UUID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UUID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UUID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UUID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UUID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UUID_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UUID_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UUID_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UUID_& instance_data) = 0;

            protected:
                UUID_DataWriter () {};
                ~UUID_DataWriter () {};
            private:
                UUID_DataWriter (const UUID_DataWriter &);
                UUID_DataWriter & operator = (const UUID_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs UUID_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UUID_DataReader_ptr _ptr_type;
                typedef UUID_DataReader_var _var_type;

                static UUID_DataReader_ptr _duplicate (UUID_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UUID_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UUID_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UUID_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UUID_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UUID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UUID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UUID_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UUID_& instance) = 0;

            protected:
                UUID_DataReader () {};
                ~UUID_DataReader () {};
            private:
                UUID_DataReader (const UUID_DataReader &);
                UUID_DataReader & operator = (const UUID_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_unique_identifier_msgs UUID_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UUID_DataReaderView_ptr _ptr_type;
                typedef UUID_DataReaderView_var _var_type;

                static UUID_DataReaderView_ptr _duplicate (UUID_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UUID_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UUID_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UUID_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UUID_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UUID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UUID_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UUID_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UUID_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UUID_& instance) = 0;

            protected:
                UUID_DataReaderView () {};
                ~UUID_DataReaderView () {};
            private:
                UUID_DataReaderView (const UUID_DataReaderView &);
                UUID_DataReaderView & operator = (const UUID_DataReaderView &);
            };
        }

    }

}

#endif
