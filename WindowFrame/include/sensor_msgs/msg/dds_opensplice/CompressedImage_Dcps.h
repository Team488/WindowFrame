#ifndef _H_7BAE0845263813F3D121C02B3683C71D_CompressedImage_DCPS_H_
#define _H_7BAE0845263813F3D121C02B3683C71D_CompressedImage_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "CompressedImage_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class CompressedImage_TypeSupportInterface;

            typedef CompressedImage_TypeSupportInterface * CompressedImage_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < CompressedImage_TypeSupportInterface> CompressedImage_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < CompressedImage_TypeSupportInterface> CompressedImage_TypeSupportInterface_out;


            class CompressedImage_DataWriter;

            typedef CompressedImage_DataWriter * CompressedImage_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < CompressedImage_DataWriter> CompressedImage_DataWriter_var;
            typedef DDS_DCPSInterface_out < CompressedImage_DataWriter> CompressedImage_DataWriter_out;


            class CompressedImage_DataReader;

            typedef CompressedImage_DataReader * CompressedImage_DataReader_ptr;
            typedef DDS_DCPSInterface_var < CompressedImage_DataReader> CompressedImage_DataReader_var;
            typedef DDS_DCPSInterface_out < CompressedImage_DataReader> CompressedImage_DataReader_out;


            class CompressedImage_DataReaderView;

            typedef CompressedImage_DataReaderView * CompressedImage_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < CompressedImage_DataReaderView> CompressedImage_DataReaderView_var;
            typedef DDS_DCPSInterface_out < CompressedImage_DataReaderView> CompressedImage_DataReaderView_out;

            struct CompressedImage_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < CompressedImage_, struct CompressedImage_Seq_uniq_> CompressedImage_Seq;
            typedef DDS_DCPSSequence_var < CompressedImage_Seq> CompressedImage_Seq_var;
            typedef DDS_DCPSSequence_out < CompressedImage_Seq> CompressedImage_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs CompressedImage_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef CompressedImage_TypeSupportInterface_ptr _ptr_type;
                typedef CompressedImage_TypeSupportInterface_var _var_type;

                static CompressedImage_TypeSupportInterface_ptr _duplicate (CompressedImage_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CompressedImage_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static CompressedImage_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CompressedImage_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                CompressedImage_TypeSupportInterface_ptr _this () { return this; }


            protected:
                CompressedImage_TypeSupportInterface () {};
                ~CompressedImage_TypeSupportInterface () {};
            private:
                CompressedImage_TypeSupportInterface (const CompressedImage_TypeSupportInterface &);
                CompressedImage_TypeSupportInterface & operator = (const CompressedImage_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs CompressedImage_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef CompressedImage_DataWriter_ptr _ptr_type;
                typedef CompressedImage_DataWriter_var _var_type;

                static CompressedImage_DataWriter_ptr _duplicate (CompressedImage_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CompressedImage_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static CompressedImage_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CompressedImage_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                CompressedImage_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const CompressedImage_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const CompressedImage_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const CompressedImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const CompressedImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const CompressedImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const CompressedImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const CompressedImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const CompressedImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const CompressedImage_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const CompressedImage_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (CompressedImage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CompressedImage_& instance_data) = 0;

            protected:
                CompressedImage_DataWriter () {};
                ~CompressedImage_DataWriter () {};
            private:
                CompressedImage_DataWriter (const CompressedImage_DataWriter &);
                CompressedImage_DataWriter & operator = (const CompressedImage_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs CompressedImage_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef CompressedImage_DataReader_ptr _ptr_type;
                typedef CompressedImage_DataReader_var _var_type;

                static CompressedImage_DataReader_ptr _duplicate (CompressedImage_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CompressedImage_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static CompressedImage_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CompressedImage_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                CompressedImage_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (CompressedImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (CompressedImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (CompressedImage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CompressedImage_& instance) = 0;

            protected:
                CompressedImage_DataReader () {};
                ~CompressedImage_DataReader () {};
            private:
                CompressedImage_DataReader (const CompressedImage_DataReader &);
                CompressedImage_DataReader & operator = (const CompressedImage_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs CompressedImage_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef CompressedImage_DataReaderView_ptr _ptr_type;
                typedef CompressedImage_DataReaderView_var _var_type;

                static CompressedImage_DataReaderView_ptr _duplicate (CompressedImage_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static CompressedImage_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static CompressedImage_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static CompressedImage_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                CompressedImage_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (CompressedImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (CompressedImage_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (CompressedImage_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (CompressedImage_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const CompressedImage_& instance) = 0;

            protected:
                CompressedImage_DataReaderView () {};
                ~CompressedImage_DataReaderView () {};
            private:
                CompressedImage_DataReaderView (const CompressedImage_DataReaderView &);
                CompressedImage_DataReaderView & operator = (const CompressedImage_DataReaderView &);
            };
        }

    }

}

#endif
