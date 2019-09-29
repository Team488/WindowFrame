#ifndef _H_73662F4D0B3495B26F9CC0697D742359_Imu_DCPS_H_
#define _H_73662F4D0B3495B26F9CC0697D742359_Imu_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Imu_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Imu_TypeSupportInterface;

            typedef Imu_TypeSupportInterface * Imu_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Imu_TypeSupportInterface> Imu_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Imu_TypeSupportInterface> Imu_TypeSupportInterface_out;


            class Imu_DataWriter;

            typedef Imu_DataWriter * Imu_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Imu_DataWriter> Imu_DataWriter_var;
            typedef DDS_DCPSInterface_out < Imu_DataWriter> Imu_DataWriter_out;


            class Imu_DataReader;

            typedef Imu_DataReader * Imu_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Imu_DataReader> Imu_DataReader_var;
            typedef DDS_DCPSInterface_out < Imu_DataReader> Imu_DataReader_out;


            class Imu_DataReaderView;

            typedef Imu_DataReaderView * Imu_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Imu_DataReaderView> Imu_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Imu_DataReaderView> Imu_DataReaderView_out;

            struct Imu_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Imu_, struct Imu_Seq_uniq_> Imu_Seq;
            typedef DDS_DCPSSequence_var < Imu_Seq> Imu_Seq_var;
            typedef DDS_DCPSSequence_out < Imu_Seq> Imu_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Imu_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Imu_TypeSupportInterface_ptr _ptr_type;
                typedef Imu_TypeSupportInterface_var _var_type;

                static Imu_TypeSupportInterface_ptr _duplicate (Imu_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Imu_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Imu_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Imu_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Imu_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Imu_TypeSupportInterface () {};
                ~Imu_TypeSupportInterface () {};
            private:
                Imu_TypeSupportInterface (const Imu_TypeSupportInterface &);
                Imu_TypeSupportInterface & operator = (const Imu_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Imu_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Imu_DataWriter_ptr _ptr_type;
                typedef Imu_DataWriter_var _var_type;

                static Imu_DataWriter_ptr _duplicate (Imu_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Imu_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Imu_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Imu_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Imu_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Imu_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Imu_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Imu_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Imu_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Imu_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Imu_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Imu_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Imu_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Imu_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Imu_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Imu_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Imu_& instance_data) = 0;

            protected:
                Imu_DataWriter () {};
                ~Imu_DataWriter () {};
            private:
                Imu_DataWriter (const Imu_DataWriter &);
                Imu_DataWriter & operator = (const Imu_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Imu_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Imu_DataReader_ptr _ptr_type;
                typedef Imu_DataReader_var _var_type;

                static Imu_DataReader_ptr _duplicate (Imu_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Imu_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Imu_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Imu_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Imu_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Imu_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Imu_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Imu_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Imu_& instance) = 0;

            protected:
                Imu_DataReader () {};
                ~Imu_DataReader () {};
            private:
                Imu_DataReader (const Imu_DataReader &);
                Imu_DataReader & operator = (const Imu_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Imu_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Imu_DataReaderView_ptr _ptr_type;
                typedef Imu_DataReaderView_var _var_type;

                static Imu_DataReaderView_ptr _duplicate (Imu_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Imu_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Imu_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Imu_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Imu_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Imu_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Imu_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Imu_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Imu_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Imu_& instance) = 0;

            protected:
                Imu_DataReaderView () {};
                ~Imu_DataReaderView () {};
            private:
                Imu_DataReaderView (const Imu_DataReaderView &);
                Imu_DataReaderView & operator = (const Imu_DataReaderView &);
            };
        }

    }

}

#endif
