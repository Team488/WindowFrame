#ifndef _H_C54A9D26138A606F169FE57DC6A8ABF9_Temperature_DCPS_H_
#define _H_C54A9D26138A606F169FE57DC6A8ABF9_Temperature_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Temperature_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Temperature_TypeSupportInterface;

            typedef Temperature_TypeSupportInterface * Temperature_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Temperature_TypeSupportInterface> Temperature_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Temperature_TypeSupportInterface> Temperature_TypeSupportInterface_out;


            class Temperature_DataWriter;

            typedef Temperature_DataWriter * Temperature_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Temperature_DataWriter> Temperature_DataWriter_var;
            typedef DDS_DCPSInterface_out < Temperature_DataWriter> Temperature_DataWriter_out;


            class Temperature_DataReader;

            typedef Temperature_DataReader * Temperature_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Temperature_DataReader> Temperature_DataReader_var;
            typedef DDS_DCPSInterface_out < Temperature_DataReader> Temperature_DataReader_out;


            class Temperature_DataReaderView;

            typedef Temperature_DataReaderView * Temperature_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Temperature_DataReaderView> Temperature_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Temperature_DataReaderView> Temperature_DataReaderView_out;

            struct Temperature_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Temperature_, struct Temperature_Seq_uniq_> Temperature_Seq;
            typedef DDS_DCPSSequence_var < Temperature_Seq> Temperature_Seq_var;
            typedef DDS_DCPSSequence_out < Temperature_Seq> Temperature_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Temperature_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Temperature_TypeSupportInterface_ptr _ptr_type;
                typedef Temperature_TypeSupportInterface_var _var_type;

                static Temperature_TypeSupportInterface_ptr _duplicate (Temperature_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Temperature_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Temperature_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Temperature_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Temperature_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Temperature_TypeSupportInterface () {};
                ~Temperature_TypeSupportInterface () {};
            private:
                Temperature_TypeSupportInterface (const Temperature_TypeSupportInterface &);
                Temperature_TypeSupportInterface & operator = (const Temperature_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Temperature_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Temperature_DataWriter_ptr _ptr_type;
                typedef Temperature_DataWriter_var _var_type;

                static Temperature_DataWriter_ptr _duplicate (Temperature_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Temperature_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Temperature_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Temperature_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Temperature_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Temperature_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Temperature_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Temperature_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Temperature_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Temperature_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Temperature_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Temperature_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Temperature_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Temperature_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Temperature_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Temperature_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Temperature_& instance_data) = 0;

            protected:
                Temperature_DataWriter () {};
                ~Temperature_DataWriter () {};
            private:
                Temperature_DataWriter (const Temperature_DataWriter &);
                Temperature_DataWriter & operator = (const Temperature_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Temperature_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Temperature_DataReader_ptr _ptr_type;
                typedef Temperature_DataReader_var _var_type;

                static Temperature_DataReader_ptr _duplicate (Temperature_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Temperature_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Temperature_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Temperature_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Temperature_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Temperature_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Temperature_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Temperature_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Temperature_& instance) = 0;

            protected:
                Temperature_DataReader () {};
                ~Temperature_DataReader () {};
            private:
                Temperature_DataReader (const Temperature_DataReader &);
                Temperature_DataReader & operator = (const Temperature_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Temperature_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Temperature_DataReaderView_ptr _ptr_type;
                typedef Temperature_DataReaderView_var _var_type;

                static Temperature_DataReaderView_ptr _duplicate (Temperature_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Temperature_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Temperature_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Temperature_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Temperature_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Temperature_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Temperature_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Temperature_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Temperature_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Temperature_& instance) = 0;

            protected:
                Temperature_DataReaderView () {};
                ~Temperature_DataReaderView () {};
            private:
                Temperature_DataReaderView (const Temperature_DataReaderView &);
                Temperature_DataReaderView & operator = (const Temperature_DataReaderView &);
            };
        }

    }

}

#endif
