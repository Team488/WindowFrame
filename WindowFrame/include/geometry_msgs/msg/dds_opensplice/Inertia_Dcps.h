#ifndef _H_61067FB4F773B339552FBE9B83111201_Inertia_DCPS_H_
#define _H_61067FB4F773B339552FBE9B83111201_Inertia_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Inertia_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Inertia_TypeSupportInterface;

            typedef Inertia_TypeSupportInterface * Inertia_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Inertia_TypeSupportInterface> Inertia_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Inertia_TypeSupportInterface> Inertia_TypeSupportInterface_out;


            class Inertia_DataWriter;

            typedef Inertia_DataWriter * Inertia_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Inertia_DataWriter> Inertia_DataWriter_var;
            typedef DDS_DCPSInterface_out < Inertia_DataWriter> Inertia_DataWriter_out;


            class Inertia_DataReader;

            typedef Inertia_DataReader * Inertia_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Inertia_DataReader> Inertia_DataReader_var;
            typedef DDS_DCPSInterface_out < Inertia_DataReader> Inertia_DataReader_out;


            class Inertia_DataReaderView;

            typedef Inertia_DataReaderView * Inertia_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Inertia_DataReaderView> Inertia_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Inertia_DataReaderView> Inertia_DataReaderView_out;

            struct Inertia_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Inertia_, struct Inertia_Seq_uniq_> Inertia_Seq;
            typedef DDS_DCPSSequence_var < Inertia_Seq> Inertia_Seq_var;
            typedef DDS_DCPSSequence_out < Inertia_Seq> Inertia_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Inertia_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Inertia_TypeSupportInterface_ptr _ptr_type;
                typedef Inertia_TypeSupportInterface_var _var_type;

                static Inertia_TypeSupportInterface_ptr _duplicate (Inertia_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Inertia_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Inertia_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Inertia_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Inertia_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Inertia_TypeSupportInterface () {};
                ~Inertia_TypeSupportInterface () {};
            private:
                Inertia_TypeSupportInterface (const Inertia_TypeSupportInterface &);
                Inertia_TypeSupportInterface & operator = (const Inertia_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Inertia_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Inertia_DataWriter_ptr _ptr_type;
                typedef Inertia_DataWriter_var _var_type;

                static Inertia_DataWriter_ptr _duplicate (Inertia_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Inertia_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Inertia_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Inertia_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Inertia_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Inertia_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Inertia_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Inertia_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Inertia_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Inertia_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Inertia_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Inertia_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Inertia_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Inertia_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Inertia_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Inertia_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Inertia_& instance_data) = 0;

            protected:
                Inertia_DataWriter () {};
                ~Inertia_DataWriter () {};
            private:
                Inertia_DataWriter (const Inertia_DataWriter &);
                Inertia_DataWriter & operator = (const Inertia_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Inertia_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Inertia_DataReader_ptr _ptr_type;
                typedef Inertia_DataReader_var _var_type;

                static Inertia_DataReader_ptr _duplicate (Inertia_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Inertia_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Inertia_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Inertia_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Inertia_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Inertia_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Inertia_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Inertia_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Inertia_& instance) = 0;

            protected:
                Inertia_DataReader () {};
                ~Inertia_DataReader () {};
            private:
                Inertia_DataReader (const Inertia_DataReader &);
                Inertia_DataReader & operator = (const Inertia_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Inertia_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Inertia_DataReaderView_ptr _ptr_type;
                typedef Inertia_DataReaderView_var _var_type;

                static Inertia_DataReaderView_ptr _duplicate (Inertia_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Inertia_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Inertia_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Inertia_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Inertia_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Inertia_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Inertia_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Inertia_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Inertia_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Inertia_& instance) = 0;

            protected:
                Inertia_DataReaderView () {};
                ~Inertia_DataReaderView () {};
            private:
                Inertia_DataReaderView (const Inertia_DataReaderView &);
                Inertia_DataReaderView & operator = (const Inertia_DataReaderView &);
            };
        }

    }

}

#endif
