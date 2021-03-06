#ifndef _H_3ABA403BA07D0CEDF2329B1A58914ABB_Transition_DCPS_H_
#define _H_3ABA403BA07D0CEDF2329B1A58914ABB_Transition_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Transition_.h"

#include "lifecycle_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace lifecycle_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Transition_TypeSupportInterface;

            typedef Transition_TypeSupportInterface * Transition_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Transition_TypeSupportInterface> Transition_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Transition_TypeSupportInterface> Transition_TypeSupportInterface_out;


            class Transition_DataWriter;

            typedef Transition_DataWriter * Transition_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Transition_DataWriter> Transition_DataWriter_var;
            typedef DDS_DCPSInterface_out < Transition_DataWriter> Transition_DataWriter_out;


            class Transition_DataReader;

            typedef Transition_DataReader * Transition_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Transition_DataReader> Transition_DataReader_var;
            typedef DDS_DCPSInterface_out < Transition_DataReader> Transition_DataReader_out;


            class Transition_DataReaderView;

            typedef Transition_DataReaderView * Transition_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Transition_DataReaderView> Transition_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Transition_DataReaderView> Transition_DataReaderView_out;

            struct Transition_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Transition_, struct Transition_Seq_uniq_> Transition_Seq;
            typedef DDS_DCPSSequence_var < Transition_Seq> Transition_Seq_var;
            typedef DDS_DCPSSequence_out < Transition_Seq> Transition_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Transition_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Transition_TypeSupportInterface_ptr _ptr_type;
                typedef Transition_TypeSupportInterface_var _var_type;

                static Transition_TypeSupportInterface_ptr _duplicate (Transition_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transition_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Transition_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transition_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Transition_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Transition_TypeSupportInterface () {};
                ~Transition_TypeSupportInterface () {};
            private:
                Transition_TypeSupportInterface (const Transition_TypeSupportInterface &);
                Transition_TypeSupportInterface & operator = (const Transition_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Transition_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Transition_DataWriter_ptr _ptr_type;
                typedef Transition_DataWriter_var _var_type;

                static Transition_DataWriter_ptr _duplicate (Transition_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transition_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Transition_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transition_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Transition_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Transition_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Transition_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Transition_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Transition_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Transition_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Transition_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Transition_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Transition_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Transition_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Transition_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Transition_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Transition_& instance_data) = 0;

            protected:
                Transition_DataWriter () {};
                ~Transition_DataWriter () {};
            private:
                Transition_DataWriter (const Transition_DataWriter &);
                Transition_DataWriter & operator = (const Transition_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Transition_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Transition_DataReader_ptr _ptr_type;
                typedef Transition_DataReader_var _var_type;

                static Transition_DataReader_ptr _duplicate (Transition_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transition_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Transition_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transition_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Transition_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Transition_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Transition_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Transition_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Transition_& instance) = 0;

            protected:
                Transition_DataReader () {};
                ~Transition_DataReader () {};
            private:
                Transition_DataReader (const Transition_DataReader &);
                Transition_DataReader & operator = (const Transition_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_lifecycle_msgs Transition_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Transition_DataReaderView_ptr _ptr_type;
                typedef Transition_DataReaderView_var _var_type;

                static Transition_DataReaderView_ptr _duplicate (Transition_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Transition_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Transition_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Transition_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Transition_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Transition_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Transition_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Transition_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Transition_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Transition_& instance) = 0;

            protected:
                Transition_DataReaderView () {};
                ~Transition_DataReaderView () {};
            private:
                Transition_DataReaderView (const Transition_DataReaderView &);
                Transition_DataReaderView & operator = (const Transition_DataReaderView &);
            };
        }

    }

}

#endif
