#ifndef _H_466EFC57FC330E7BC4FB1CD6CC336FEA_LaserEcho_DCPS_H_
#define _H_466EFC57FC330E7BC4FB1CD6CC336FEA_LaserEcho_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "LaserEcho_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class LaserEcho_TypeSupportInterface;

            typedef LaserEcho_TypeSupportInterface * LaserEcho_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < LaserEcho_TypeSupportInterface> LaserEcho_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < LaserEcho_TypeSupportInterface> LaserEcho_TypeSupportInterface_out;


            class LaserEcho_DataWriter;

            typedef LaserEcho_DataWriter * LaserEcho_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < LaserEcho_DataWriter> LaserEcho_DataWriter_var;
            typedef DDS_DCPSInterface_out < LaserEcho_DataWriter> LaserEcho_DataWriter_out;


            class LaserEcho_DataReader;

            typedef LaserEcho_DataReader * LaserEcho_DataReader_ptr;
            typedef DDS_DCPSInterface_var < LaserEcho_DataReader> LaserEcho_DataReader_var;
            typedef DDS_DCPSInterface_out < LaserEcho_DataReader> LaserEcho_DataReader_out;


            class LaserEcho_DataReaderView;

            typedef LaserEcho_DataReaderView * LaserEcho_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < LaserEcho_DataReaderView> LaserEcho_DataReaderView_var;
            typedef DDS_DCPSInterface_out < LaserEcho_DataReaderView> LaserEcho_DataReaderView_out;

            struct LaserEcho_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < LaserEcho_, struct LaserEcho_Seq_uniq_> LaserEcho_Seq;
            typedef DDS_DCPSSequence_var < LaserEcho_Seq> LaserEcho_Seq_var;
            typedef DDS_DCPSSequence_out < LaserEcho_Seq> LaserEcho_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs LaserEcho_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef LaserEcho_TypeSupportInterface_ptr _ptr_type;
                typedef LaserEcho_TypeSupportInterface_var _var_type;

                static LaserEcho_TypeSupportInterface_ptr _duplicate (LaserEcho_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LaserEcho_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static LaserEcho_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LaserEcho_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                LaserEcho_TypeSupportInterface_ptr _this () { return this; }


            protected:
                LaserEcho_TypeSupportInterface () {};
                ~LaserEcho_TypeSupportInterface () {};
            private:
                LaserEcho_TypeSupportInterface (const LaserEcho_TypeSupportInterface &);
                LaserEcho_TypeSupportInterface & operator = (const LaserEcho_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs LaserEcho_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef LaserEcho_DataWriter_ptr _ptr_type;
                typedef LaserEcho_DataWriter_var _var_type;

                static LaserEcho_DataWriter_ptr _duplicate (LaserEcho_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LaserEcho_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static LaserEcho_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LaserEcho_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                LaserEcho_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const LaserEcho_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const LaserEcho_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const LaserEcho_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const LaserEcho_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const LaserEcho_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const LaserEcho_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const LaserEcho_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const LaserEcho_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const LaserEcho_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const LaserEcho_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (LaserEcho_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LaserEcho_& instance_data) = 0;

            protected:
                LaserEcho_DataWriter () {};
                ~LaserEcho_DataWriter () {};
            private:
                LaserEcho_DataWriter (const LaserEcho_DataWriter &);
                LaserEcho_DataWriter & operator = (const LaserEcho_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs LaserEcho_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef LaserEcho_DataReader_ptr _ptr_type;
                typedef LaserEcho_DataReader_var _var_type;

                static LaserEcho_DataReader_ptr _duplicate (LaserEcho_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LaserEcho_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static LaserEcho_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LaserEcho_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                LaserEcho_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LaserEcho_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LaserEcho_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LaserEcho_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LaserEcho_& instance) = 0;

            protected:
                LaserEcho_DataReader () {};
                ~LaserEcho_DataReader () {};
            private:
                LaserEcho_DataReader (const LaserEcho_DataReader &);
                LaserEcho_DataReader & operator = (const LaserEcho_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs LaserEcho_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef LaserEcho_DataReaderView_ptr _ptr_type;
                typedef LaserEcho_DataReaderView_var _var_type;

                static LaserEcho_DataReaderView_ptr _duplicate (LaserEcho_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static LaserEcho_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static LaserEcho_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static LaserEcho_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                LaserEcho_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (LaserEcho_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (LaserEcho_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (LaserEcho_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (LaserEcho_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const LaserEcho_& instance) = 0;

            protected:
                LaserEcho_DataReaderView () {};
                ~LaserEcho_DataReaderView () {};
            private:
                LaserEcho_DataReaderView (const LaserEcho_DataReaderView &);
                LaserEcho_DataReaderView & operator = (const LaserEcho_DataReaderView &);
            };
        }

    }

}

#endif
