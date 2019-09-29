#ifndef _H_166166F045F7703716904AA42D242328_ChannelFloat32_DCPS_H_
#define _H_166166F045F7703716904AA42D242328_ChannelFloat32_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ChannelFloat32_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ChannelFloat32_TypeSupportInterface;

            typedef ChannelFloat32_TypeSupportInterface * ChannelFloat32_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ChannelFloat32_TypeSupportInterface> ChannelFloat32_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ChannelFloat32_TypeSupportInterface> ChannelFloat32_TypeSupportInterface_out;


            class ChannelFloat32_DataWriter;

            typedef ChannelFloat32_DataWriter * ChannelFloat32_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ChannelFloat32_DataWriter> ChannelFloat32_DataWriter_var;
            typedef DDS_DCPSInterface_out < ChannelFloat32_DataWriter> ChannelFloat32_DataWriter_out;


            class ChannelFloat32_DataReader;

            typedef ChannelFloat32_DataReader * ChannelFloat32_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ChannelFloat32_DataReader> ChannelFloat32_DataReader_var;
            typedef DDS_DCPSInterface_out < ChannelFloat32_DataReader> ChannelFloat32_DataReader_out;


            class ChannelFloat32_DataReaderView;

            typedef ChannelFloat32_DataReaderView * ChannelFloat32_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ChannelFloat32_DataReaderView> ChannelFloat32_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ChannelFloat32_DataReaderView> ChannelFloat32_DataReaderView_out;

            struct ChannelFloat32_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ChannelFloat32_, struct ChannelFloat32_Seq_uniq_> ChannelFloat32_Seq;
            typedef DDS_DCPSSequence_var < ChannelFloat32_Seq> ChannelFloat32_Seq_var;
            typedef DDS_DCPSSequence_out < ChannelFloat32_Seq> ChannelFloat32_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs ChannelFloat32_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ChannelFloat32_TypeSupportInterface_ptr _ptr_type;
                typedef ChannelFloat32_TypeSupportInterface_var _var_type;

                static ChannelFloat32_TypeSupportInterface_ptr _duplicate (ChannelFloat32_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChannelFloat32_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ChannelFloat32_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChannelFloat32_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ChannelFloat32_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ChannelFloat32_TypeSupportInterface () {};
                ~ChannelFloat32_TypeSupportInterface () {};
            private:
                ChannelFloat32_TypeSupportInterface (const ChannelFloat32_TypeSupportInterface &);
                ChannelFloat32_TypeSupportInterface & operator = (const ChannelFloat32_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs ChannelFloat32_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ChannelFloat32_DataWriter_ptr _ptr_type;
                typedef ChannelFloat32_DataWriter_var _var_type;

                static ChannelFloat32_DataWriter_ptr _duplicate (ChannelFloat32_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChannelFloat32_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ChannelFloat32_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChannelFloat32_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ChannelFloat32_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ChannelFloat32_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ChannelFloat32_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ChannelFloat32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ChannelFloat32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ChannelFloat32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ChannelFloat32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ChannelFloat32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ChannelFloat32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ChannelFloat32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ChannelFloat32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ChannelFloat32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChannelFloat32_& instance_data) = 0;

            protected:
                ChannelFloat32_DataWriter () {};
                ~ChannelFloat32_DataWriter () {};
            private:
                ChannelFloat32_DataWriter (const ChannelFloat32_DataWriter &);
                ChannelFloat32_DataWriter & operator = (const ChannelFloat32_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs ChannelFloat32_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ChannelFloat32_DataReader_ptr _ptr_type;
                typedef ChannelFloat32_DataReader_var _var_type;

                static ChannelFloat32_DataReader_ptr _duplicate (ChannelFloat32_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChannelFloat32_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ChannelFloat32_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChannelFloat32_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ChannelFloat32_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ChannelFloat32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ChannelFloat32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ChannelFloat32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChannelFloat32_& instance) = 0;

            protected:
                ChannelFloat32_DataReader () {};
                ~ChannelFloat32_DataReader () {};
            private:
                ChannelFloat32_DataReader (const ChannelFloat32_DataReader &);
                ChannelFloat32_DataReader & operator = (const ChannelFloat32_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs ChannelFloat32_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ChannelFloat32_DataReaderView_ptr _ptr_type;
                typedef ChannelFloat32_DataReaderView_var _var_type;

                static ChannelFloat32_DataReaderView_ptr _duplicate (ChannelFloat32_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ChannelFloat32_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ChannelFloat32_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ChannelFloat32_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ChannelFloat32_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ChannelFloat32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ChannelFloat32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ChannelFloat32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ChannelFloat32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ChannelFloat32_& instance) = 0;

            protected:
                ChannelFloat32_DataReaderView () {};
                ~ChannelFloat32_DataReaderView () {};
            private:
                ChannelFloat32_DataReaderView (const ChannelFloat32_DataReaderView &);
                ChannelFloat32_DataReaderView & operator = (const ChannelFloat32_DataReaderView &);
            };
        }

    }

}

#endif
