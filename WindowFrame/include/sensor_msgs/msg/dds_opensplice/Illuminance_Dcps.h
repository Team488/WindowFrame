#ifndef _H_B25EABCC2BA171F740E7784008B1C965_Illuminance_DCPS_H_
#define _H_B25EABCC2BA171F740E7784008B1C965_Illuminance_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Illuminance_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Illuminance_TypeSupportInterface;

            typedef Illuminance_TypeSupportInterface * Illuminance_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Illuminance_TypeSupportInterface> Illuminance_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Illuminance_TypeSupportInterface> Illuminance_TypeSupportInterface_out;


            class Illuminance_DataWriter;

            typedef Illuminance_DataWriter * Illuminance_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Illuminance_DataWriter> Illuminance_DataWriter_var;
            typedef DDS_DCPSInterface_out < Illuminance_DataWriter> Illuminance_DataWriter_out;


            class Illuminance_DataReader;

            typedef Illuminance_DataReader * Illuminance_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Illuminance_DataReader> Illuminance_DataReader_var;
            typedef DDS_DCPSInterface_out < Illuminance_DataReader> Illuminance_DataReader_out;


            class Illuminance_DataReaderView;

            typedef Illuminance_DataReaderView * Illuminance_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Illuminance_DataReaderView> Illuminance_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Illuminance_DataReaderView> Illuminance_DataReaderView_out;

            struct Illuminance_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Illuminance_, struct Illuminance_Seq_uniq_> Illuminance_Seq;
            typedef DDS_DCPSSequence_var < Illuminance_Seq> Illuminance_Seq_var;
            typedef DDS_DCPSSequence_out < Illuminance_Seq> Illuminance_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Illuminance_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Illuminance_TypeSupportInterface_ptr _ptr_type;
                typedef Illuminance_TypeSupportInterface_var _var_type;

                static Illuminance_TypeSupportInterface_ptr _duplicate (Illuminance_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Illuminance_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Illuminance_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Illuminance_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Illuminance_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Illuminance_TypeSupportInterface () {};
                ~Illuminance_TypeSupportInterface () {};
            private:
                Illuminance_TypeSupportInterface (const Illuminance_TypeSupportInterface &);
                Illuminance_TypeSupportInterface & operator = (const Illuminance_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Illuminance_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Illuminance_DataWriter_ptr _ptr_type;
                typedef Illuminance_DataWriter_var _var_type;

                static Illuminance_DataWriter_ptr _duplicate (Illuminance_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Illuminance_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Illuminance_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Illuminance_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Illuminance_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Illuminance_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Illuminance_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Illuminance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Illuminance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Illuminance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Illuminance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Illuminance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Illuminance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Illuminance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Illuminance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Illuminance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Illuminance_& instance_data) = 0;

            protected:
                Illuminance_DataWriter () {};
                ~Illuminance_DataWriter () {};
            private:
                Illuminance_DataWriter (const Illuminance_DataWriter &);
                Illuminance_DataWriter & operator = (const Illuminance_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Illuminance_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Illuminance_DataReader_ptr _ptr_type;
                typedef Illuminance_DataReader_var _var_type;

                static Illuminance_DataReader_ptr _duplicate (Illuminance_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Illuminance_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Illuminance_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Illuminance_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Illuminance_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Illuminance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Illuminance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Illuminance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Illuminance_& instance) = 0;

            protected:
                Illuminance_DataReader () {};
                ~Illuminance_DataReader () {};
            private:
                Illuminance_DataReader (const Illuminance_DataReader &);
                Illuminance_DataReader & operator = (const Illuminance_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Illuminance_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Illuminance_DataReaderView_ptr _ptr_type;
                typedef Illuminance_DataReaderView_var _var_type;

                static Illuminance_DataReaderView_ptr _duplicate (Illuminance_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Illuminance_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Illuminance_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Illuminance_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Illuminance_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Illuminance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Illuminance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Illuminance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Illuminance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Illuminance_& instance) = 0;

            protected:
                Illuminance_DataReaderView () {};
                ~Illuminance_DataReaderView () {};
            private:
                Illuminance_DataReaderView (const Illuminance_DataReaderView &);
                Illuminance_DataReaderView & operator = (const Illuminance_DataReaderView &);
            };
        }

    }

}

#endif