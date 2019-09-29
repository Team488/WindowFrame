#ifndef _H_582C02A0E1DF77093D595261362A0C17_PointField_DCPS_H_
#define _H_582C02A0E1DF77093D595261362A0C17_PointField_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PointField_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PointField_TypeSupportInterface;

            typedef PointField_TypeSupportInterface * PointField_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PointField_TypeSupportInterface> PointField_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PointField_TypeSupportInterface> PointField_TypeSupportInterface_out;


            class PointField_DataWriter;

            typedef PointField_DataWriter * PointField_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PointField_DataWriter> PointField_DataWriter_var;
            typedef DDS_DCPSInterface_out < PointField_DataWriter> PointField_DataWriter_out;


            class PointField_DataReader;

            typedef PointField_DataReader * PointField_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PointField_DataReader> PointField_DataReader_var;
            typedef DDS_DCPSInterface_out < PointField_DataReader> PointField_DataReader_out;


            class PointField_DataReaderView;

            typedef PointField_DataReaderView * PointField_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PointField_DataReaderView> PointField_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PointField_DataReaderView> PointField_DataReaderView_out;

            struct PointField_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PointField_, struct PointField_Seq_uniq_> PointField_Seq;
            typedef DDS_DCPSSequence_var < PointField_Seq> PointField_Seq_var;
            typedef DDS_DCPSSequence_out < PointField_Seq> PointField_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointField_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PointField_TypeSupportInterface_ptr _ptr_type;
                typedef PointField_TypeSupportInterface_var _var_type;

                static PointField_TypeSupportInterface_ptr _duplicate (PointField_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointField_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PointField_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointField_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PointField_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PointField_TypeSupportInterface () {};
                ~PointField_TypeSupportInterface () {};
            private:
                PointField_TypeSupportInterface (const PointField_TypeSupportInterface &);
                PointField_TypeSupportInterface & operator = (const PointField_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointField_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PointField_DataWriter_ptr _ptr_type;
                typedef PointField_DataWriter_var _var_type;

                static PointField_DataWriter_ptr _duplicate (PointField_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointField_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PointField_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointField_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PointField_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PointField_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PointField_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PointField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PointField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PointField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PointField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PointField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PointField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PointField_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PointField_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PointField_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointField_& instance_data) = 0;

            protected:
                PointField_DataWriter () {};
                ~PointField_DataWriter () {};
            private:
                PointField_DataWriter (const PointField_DataWriter &);
                PointField_DataWriter & operator = (const PointField_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointField_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PointField_DataReader_ptr _ptr_type;
                typedef PointField_DataReader_var _var_type;

                static PointField_DataReader_ptr _duplicate (PointField_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointField_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PointField_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointField_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PointField_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointField_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointField_& instance) = 0;

            protected:
                PointField_DataReader () {};
                ~PointField_DataReader () {};
            private:
                PointField_DataReader (const PointField_DataReader &);
                PointField_DataReader & operator = (const PointField_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointField_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PointField_DataReaderView_ptr _ptr_type;
                typedef PointField_DataReaderView_var _var_type;

                static PointField_DataReaderView_ptr _duplicate (PointField_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointField_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PointField_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointField_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PointField_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointField_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointField_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointField_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointField_& instance) = 0;

            protected:
                PointField_DataReaderView () {};
                ~PointField_DataReaderView () {};
            private:
                PointField_DataReaderView (const PointField_DataReaderView &);
                PointField_DataReaderView & operator = (const PointField_DataReaderView &);
            };
        }

    }

}

#endif
