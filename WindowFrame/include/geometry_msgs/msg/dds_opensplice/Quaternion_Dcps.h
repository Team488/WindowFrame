#ifndef _H_8DF7A4A8A31858074C9A497C4AE05C98_Quaternion_DCPS_H_
#define _H_8DF7A4A8A31858074C9A497C4AE05C98_Quaternion_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Quaternion_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Quaternion_TypeSupportInterface;

            typedef Quaternion_TypeSupportInterface * Quaternion_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Quaternion_TypeSupportInterface> Quaternion_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Quaternion_TypeSupportInterface> Quaternion_TypeSupportInterface_out;


            class Quaternion_DataWriter;

            typedef Quaternion_DataWriter * Quaternion_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Quaternion_DataWriter> Quaternion_DataWriter_var;
            typedef DDS_DCPSInterface_out < Quaternion_DataWriter> Quaternion_DataWriter_out;


            class Quaternion_DataReader;

            typedef Quaternion_DataReader * Quaternion_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Quaternion_DataReader> Quaternion_DataReader_var;
            typedef DDS_DCPSInterface_out < Quaternion_DataReader> Quaternion_DataReader_out;


            class Quaternion_DataReaderView;

            typedef Quaternion_DataReaderView * Quaternion_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Quaternion_DataReaderView> Quaternion_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Quaternion_DataReaderView> Quaternion_DataReaderView_out;

            struct Quaternion_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Quaternion_, struct Quaternion_Seq_uniq_> Quaternion_Seq;
            typedef DDS_DCPSSequence_var < Quaternion_Seq> Quaternion_Seq_var;
            typedef DDS_DCPSSequence_out < Quaternion_Seq> Quaternion_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Quaternion_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Quaternion_TypeSupportInterface_ptr _ptr_type;
                typedef Quaternion_TypeSupportInterface_var _var_type;

                static Quaternion_TypeSupportInterface_ptr _duplicate (Quaternion_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Quaternion_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Quaternion_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Quaternion_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Quaternion_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Quaternion_TypeSupportInterface () {};
                ~Quaternion_TypeSupportInterface () {};
            private:
                Quaternion_TypeSupportInterface (const Quaternion_TypeSupportInterface &);
                Quaternion_TypeSupportInterface & operator = (const Quaternion_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Quaternion_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Quaternion_DataWriter_ptr _ptr_type;
                typedef Quaternion_DataWriter_var _var_type;

                static Quaternion_DataWriter_ptr _duplicate (Quaternion_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Quaternion_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Quaternion_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Quaternion_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Quaternion_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Quaternion_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Quaternion_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Quaternion_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Quaternion_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Quaternion_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Quaternion_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Quaternion_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Quaternion_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Quaternion_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Quaternion_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Quaternion_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Quaternion_& instance_data) = 0;

            protected:
                Quaternion_DataWriter () {};
                ~Quaternion_DataWriter () {};
            private:
                Quaternion_DataWriter (const Quaternion_DataWriter &);
                Quaternion_DataWriter & operator = (const Quaternion_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Quaternion_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Quaternion_DataReader_ptr _ptr_type;
                typedef Quaternion_DataReader_var _var_type;

                static Quaternion_DataReader_ptr _duplicate (Quaternion_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Quaternion_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Quaternion_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Quaternion_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Quaternion_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Quaternion_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Quaternion_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Quaternion_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Quaternion_& instance) = 0;

            protected:
                Quaternion_DataReader () {};
                ~Quaternion_DataReader () {};
            private:
                Quaternion_DataReader (const Quaternion_DataReader &);
                Quaternion_DataReader & operator = (const Quaternion_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Quaternion_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Quaternion_DataReaderView_ptr _ptr_type;
                typedef Quaternion_DataReaderView_var _var_type;

                static Quaternion_DataReaderView_ptr _duplicate (Quaternion_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Quaternion_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Quaternion_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Quaternion_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Quaternion_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Quaternion_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Quaternion_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Quaternion_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Quaternion_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Quaternion_& instance) = 0;

            protected:
                Quaternion_DataReaderView () {};
                ~Quaternion_DataReaderView () {};
            private:
                Quaternion_DataReaderView (const Quaternion_DataReaderView &);
                Quaternion_DataReaderView & operator = (const Quaternion_DataReaderView &);
            };
        }

    }

}

#endif
