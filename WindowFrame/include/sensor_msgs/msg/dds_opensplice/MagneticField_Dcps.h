#ifndef _H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField_DCPS_H_
#define _H_373A2EA6896C0C8FB9EA07EF1716373B_MagneticField_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MagneticField_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MagneticField_TypeSupportInterface;

            typedef MagneticField_TypeSupportInterface * MagneticField_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MagneticField_TypeSupportInterface> MagneticField_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MagneticField_TypeSupportInterface> MagneticField_TypeSupportInterface_out;


            class MagneticField_DataWriter;

            typedef MagneticField_DataWriter * MagneticField_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MagneticField_DataWriter> MagneticField_DataWriter_var;
            typedef DDS_DCPSInterface_out < MagneticField_DataWriter> MagneticField_DataWriter_out;


            class MagneticField_DataReader;

            typedef MagneticField_DataReader * MagneticField_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MagneticField_DataReader> MagneticField_DataReader_var;
            typedef DDS_DCPSInterface_out < MagneticField_DataReader> MagneticField_DataReader_out;


            class MagneticField_DataReaderView;

            typedef MagneticField_DataReaderView * MagneticField_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MagneticField_DataReaderView> MagneticField_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MagneticField_DataReaderView> MagneticField_DataReaderView_out;

            struct MagneticField_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < MagneticField_, struct MagneticField_Seq_uniq_> MagneticField_Seq;
            typedef DDS_DCPSSequence_var < MagneticField_Seq> MagneticField_Seq_var;
            typedef DDS_DCPSSequence_out < MagneticField_Seq> MagneticField_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MagneticField_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MagneticField_TypeSupportInterface_ptr _ptr_type;
                typedef MagneticField_TypeSupportInterface_var _var_type;

                static MagneticField_TypeSupportInterface_ptr _duplicate (MagneticField_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MagneticField_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MagneticField_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MagneticField_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MagneticField_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MagneticField_TypeSupportInterface () {};
                ~MagneticField_TypeSupportInterface () {};
            private:
                MagneticField_TypeSupportInterface (const MagneticField_TypeSupportInterface &);
                MagneticField_TypeSupportInterface & operator = (const MagneticField_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MagneticField_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MagneticField_DataWriter_ptr _ptr_type;
                typedef MagneticField_DataWriter_var _var_type;

                static MagneticField_DataWriter_ptr _duplicate (MagneticField_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MagneticField_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MagneticField_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MagneticField_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MagneticField_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MagneticField_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MagneticField_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MagneticField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MagneticField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MagneticField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MagneticField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MagneticField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MagneticField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MagneticField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MagneticField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MagneticField_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MagneticField_& instance_data) = 0;

            protected:
                MagneticField_DataWriter () {};
                ~MagneticField_DataWriter () {};
            private:
                MagneticField_DataWriter (const MagneticField_DataWriter &);
                MagneticField_DataWriter & operator = (const MagneticField_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MagneticField_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MagneticField_DataReader_ptr _ptr_type;
                typedef MagneticField_DataReader_var _var_type;

                static MagneticField_DataReader_ptr _duplicate (MagneticField_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MagneticField_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MagneticField_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MagneticField_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MagneticField_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MagneticField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MagneticField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MagneticField_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MagneticField_& instance) = 0;

            protected:
                MagneticField_DataReader () {};
                ~MagneticField_DataReader () {};
            private:
                MagneticField_DataReader (const MagneticField_DataReader &);
                MagneticField_DataReader & operator = (const MagneticField_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs MagneticField_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MagneticField_DataReaderView_ptr _ptr_type;
                typedef MagneticField_DataReaderView_var _var_type;

                static MagneticField_DataReaderView_ptr _duplicate (MagneticField_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MagneticField_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MagneticField_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MagneticField_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MagneticField_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MagneticField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MagneticField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MagneticField_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MagneticField_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MagneticField_& instance) = 0;

            protected:
                MagneticField_DataReaderView () {};
                ~MagneticField_DataReaderView () {};
            private:
                MagneticField_DataReaderView (const MagneticField_DataReaderView &);
                MagneticField_DataReaderView & operator = (const MagneticField_DataReaderView &);
            };
        }

    }

}

#endif
