#ifndef _H_969189097150211654554052A20D3EE4_RelativeHumidity_DCPS_H_
#define _H_969189097150211654554052A20D3EE4_RelativeHumidity_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "RelativeHumidity_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class RelativeHumidity_TypeSupportInterface;

            typedef RelativeHumidity_TypeSupportInterface * RelativeHumidity_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < RelativeHumidity_TypeSupportInterface> RelativeHumidity_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < RelativeHumidity_TypeSupportInterface> RelativeHumidity_TypeSupportInterface_out;


            class RelativeHumidity_DataWriter;

            typedef RelativeHumidity_DataWriter * RelativeHumidity_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < RelativeHumidity_DataWriter> RelativeHumidity_DataWriter_var;
            typedef DDS_DCPSInterface_out < RelativeHumidity_DataWriter> RelativeHumidity_DataWriter_out;


            class RelativeHumidity_DataReader;

            typedef RelativeHumidity_DataReader * RelativeHumidity_DataReader_ptr;
            typedef DDS_DCPSInterface_var < RelativeHumidity_DataReader> RelativeHumidity_DataReader_var;
            typedef DDS_DCPSInterface_out < RelativeHumidity_DataReader> RelativeHumidity_DataReader_out;


            class RelativeHumidity_DataReaderView;

            typedef RelativeHumidity_DataReaderView * RelativeHumidity_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < RelativeHumidity_DataReaderView> RelativeHumidity_DataReaderView_var;
            typedef DDS_DCPSInterface_out < RelativeHumidity_DataReaderView> RelativeHumidity_DataReaderView_out;

            struct RelativeHumidity_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < RelativeHumidity_, struct RelativeHumidity_Seq_uniq_> RelativeHumidity_Seq;
            typedef DDS_DCPSSequence_var < RelativeHumidity_Seq> RelativeHumidity_Seq_var;
            typedef DDS_DCPSSequence_out < RelativeHumidity_Seq> RelativeHumidity_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RelativeHumidity_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef RelativeHumidity_TypeSupportInterface_ptr _ptr_type;
                typedef RelativeHumidity_TypeSupportInterface_var _var_type;

                static RelativeHumidity_TypeSupportInterface_ptr _duplicate (RelativeHumidity_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RelativeHumidity_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static RelativeHumidity_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RelativeHumidity_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                RelativeHumidity_TypeSupportInterface_ptr _this () { return this; }


            protected:
                RelativeHumidity_TypeSupportInterface () {};
                ~RelativeHumidity_TypeSupportInterface () {};
            private:
                RelativeHumidity_TypeSupportInterface (const RelativeHumidity_TypeSupportInterface &);
                RelativeHumidity_TypeSupportInterface & operator = (const RelativeHumidity_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RelativeHumidity_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef RelativeHumidity_DataWriter_ptr _ptr_type;
                typedef RelativeHumidity_DataWriter_var _var_type;

                static RelativeHumidity_DataWriter_ptr _duplicate (RelativeHumidity_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RelativeHumidity_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static RelativeHumidity_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RelativeHumidity_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                RelativeHumidity_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const RelativeHumidity_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const RelativeHumidity_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const RelativeHumidity_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const RelativeHumidity_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const RelativeHumidity_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const RelativeHumidity_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const RelativeHumidity_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const RelativeHumidity_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const RelativeHumidity_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const RelativeHumidity_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (RelativeHumidity_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RelativeHumidity_& instance_data) = 0;

            protected:
                RelativeHumidity_DataWriter () {};
                ~RelativeHumidity_DataWriter () {};
            private:
                RelativeHumidity_DataWriter (const RelativeHumidity_DataWriter &);
                RelativeHumidity_DataWriter & operator = (const RelativeHumidity_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RelativeHumidity_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef RelativeHumidity_DataReader_ptr _ptr_type;
                typedef RelativeHumidity_DataReader_var _var_type;

                static RelativeHumidity_DataReader_ptr _duplicate (RelativeHumidity_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RelativeHumidity_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static RelativeHumidity_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RelativeHumidity_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                RelativeHumidity_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RelativeHumidity_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RelativeHumidity_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RelativeHumidity_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RelativeHumidity_& instance) = 0;

            protected:
                RelativeHumidity_DataReader () {};
                ~RelativeHumidity_DataReader () {};
            private:
                RelativeHumidity_DataReader (const RelativeHumidity_DataReader &);
                RelativeHumidity_DataReader & operator = (const RelativeHumidity_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs RelativeHumidity_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef RelativeHumidity_DataReaderView_ptr _ptr_type;
                typedef RelativeHumidity_DataReaderView_var _var_type;

                static RelativeHumidity_DataReaderView_ptr _duplicate (RelativeHumidity_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static RelativeHumidity_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static RelativeHumidity_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static RelativeHumidity_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                RelativeHumidity_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (RelativeHumidity_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (RelativeHumidity_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (RelativeHumidity_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (RelativeHumidity_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const RelativeHumidity_& instance) = 0;

            protected:
                RelativeHumidity_DataReaderView () {};
                ~RelativeHumidity_DataReaderView () {};
            private:
                RelativeHumidity_DataReaderView (const RelativeHumidity_DataReaderView &);
                RelativeHumidity_DataReaderView & operator = (const RelativeHumidity_DataReaderView &);
            };
        }

    }

}

#endif
