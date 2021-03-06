#ifndef _H_8D7DAC7D41555F451208BD3346FE5E15_Accel_DCPS_H_
#define _H_8D7DAC7D41555F451208BD3346FE5E15_Accel_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Accel_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Accel_TypeSupportInterface;

            typedef Accel_TypeSupportInterface * Accel_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Accel_TypeSupportInterface> Accel_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Accel_TypeSupportInterface> Accel_TypeSupportInterface_out;


            class Accel_DataWriter;

            typedef Accel_DataWriter * Accel_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Accel_DataWriter> Accel_DataWriter_var;
            typedef DDS_DCPSInterface_out < Accel_DataWriter> Accel_DataWriter_out;


            class Accel_DataReader;

            typedef Accel_DataReader * Accel_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Accel_DataReader> Accel_DataReader_var;
            typedef DDS_DCPSInterface_out < Accel_DataReader> Accel_DataReader_out;


            class Accel_DataReaderView;

            typedef Accel_DataReaderView * Accel_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Accel_DataReaderView> Accel_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Accel_DataReaderView> Accel_DataReaderView_out;

            struct Accel_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Accel_, struct Accel_Seq_uniq_> Accel_Seq;
            typedef DDS_DCPSSequence_var < Accel_Seq> Accel_Seq_var;
            typedef DDS_DCPSSequence_out < Accel_Seq> Accel_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Accel_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Accel_TypeSupportInterface_ptr _ptr_type;
                typedef Accel_TypeSupportInterface_var _var_type;

                static Accel_TypeSupportInterface_ptr _duplicate (Accel_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Accel_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Accel_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Accel_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Accel_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Accel_TypeSupportInterface () {};
                ~Accel_TypeSupportInterface () {};
            private:
                Accel_TypeSupportInterface (const Accel_TypeSupportInterface &);
                Accel_TypeSupportInterface & operator = (const Accel_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Accel_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Accel_DataWriter_ptr _ptr_type;
                typedef Accel_DataWriter_var _var_type;

                static Accel_DataWriter_ptr _duplicate (Accel_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Accel_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Accel_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Accel_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Accel_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Accel_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Accel_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Accel_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Accel_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Accel_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Accel_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Accel_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Accel_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Accel_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Accel_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Accel_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Accel_& instance_data) = 0;

            protected:
                Accel_DataWriter () {};
                ~Accel_DataWriter () {};
            private:
                Accel_DataWriter (const Accel_DataWriter &);
                Accel_DataWriter & operator = (const Accel_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Accel_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Accel_DataReader_ptr _ptr_type;
                typedef Accel_DataReader_var _var_type;

                static Accel_DataReader_ptr _duplicate (Accel_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Accel_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Accel_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Accel_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Accel_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Accel_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Accel_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Accel_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Accel_& instance) = 0;

            protected:
                Accel_DataReader () {};
                ~Accel_DataReader () {};
            private:
                Accel_DataReader (const Accel_DataReader &);
                Accel_DataReader & operator = (const Accel_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Accel_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Accel_DataReaderView_ptr _ptr_type;
                typedef Accel_DataReaderView_var _var_type;

                static Accel_DataReaderView_ptr _duplicate (Accel_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Accel_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Accel_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Accel_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Accel_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Accel_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Accel_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Accel_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Accel_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Accel_& instance) = 0;

            protected:
                Accel_DataReaderView () {};
                ~Accel_DataReaderView () {};
            private:
                Accel_DataReaderView (const Accel_DataReaderView &);
                Accel_DataReaderView & operator = (const Accel_DataReaderView &);
            };
        }

    }

}

#endif
