#ifndef _H_AA7B1F03F6DCF5934F04C8929A146CB3_Joy_DCPS_H_
#define _H_AA7B1F03F6DCF5934F04C8929A146CB3_Joy_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Joy_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Joy_TypeSupportInterface;

            typedef Joy_TypeSupportInterface * Joy_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Joy_TypeSupportInterface> Joy_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Joy_TypeSupportInterface> Joy_TypeSupportInterface_out;


            class Joy_DataWriter;

            typedef Joy_DataWriter * Joy_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Joy_DataWriter> Joy_DataWriter_var;
            typedef DDS_DCPSInterface_out < Joy_DataWriter> Joy_DataWriter_out;


            class Joy_DataReader;

            typedef Joy_DataReader * Joy_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Joy_DataReader> Joy_DataReader_var;
            typedef DDS_DCPSInterface_out < Joy_DataReader> Joy_DataReader_out;


            class Joy_DataReaderView;

            typedef Joy_DataReaderView * Joy_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Joy_DataReaderView> Joy_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Joy_DataReaderView> Joy_DataReaderView_out;

            struct Joy_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Joy_, struct Joy_Seq_uniq_> Joy_Seq;
            typedef DDS_DCPSSequence_var < Joy_Seq> Joy_Seq_var;
            typedef DDS_DCPSSequence_out < Joy_Seq> Joy_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Joy_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Joy_TypeSupportInterface_ptr _ptr_type;
                typedef Joy_TypeSupportInterface_var _var_type;

                static Joy_TypeSupportInterface_ptr _duplicate (Joy_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Joy_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Joy_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Joy_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Joy_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Joy_TypeSupportInterface () {};
                ~Joy_TypeSupportInterface () {};
            private:
                Joy_TypeSupportInterface (const Joy_TypeSupportInterface &);
                Joy_TypeSupportInterface & operator = (const Joy_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Joy_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Joy_DataWriter_ptr _ptr_type;
                typedef Joy_DataWriter_var _var_type;

                static Joy_DataWriter_ptr _duplicate (Joy_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Joy_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Joy_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Joy_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Joy_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Joy_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Joy_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Joy_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Joy_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Joy_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Joy_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Joy_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Joy_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Joy_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Joy_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Joy_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Joy_& instance_data) = 0;

            protected:
                Joy_DataWriter () {};
                ~Joy_DataWriter () {};
            private:
                Joy_DataWriter (const Joy_DataWriter &);
                Joy_DataWriter & operator = (const Joy_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Joy_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Joy_DataReader_ptr _ptr_type;
                typedef Joy_DataReader_var _var_type;

                static Joy_DataReader_ptr _duplicate (Joy_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Joy_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Joy_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Joy_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Joy_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Joy_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Joy_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Joy_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Joy_& instance) = 0;

            protected:
                Joy_DataReader () {};
                ~Joy_DataReader () {};
            private:
                Joy_DataReader (const Joy_DataReader &);
                Joy_DataReader & operator = (const Joy_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs Joy_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Joy_DataReaderView_ptr _ptr_type;
                typedef Joy_DataReaderView_var _var_type;

                static Joy_DataReaderView_ptr _duplicate (Joy_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Joy_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Joy_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Joy_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Joy_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Joy_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Joy_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Joy_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Joy_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Joy_& instance) = 0;

            protected:
                Joy_DataReaderView () {};
                ~Joy_DataReaderView () {};
            private:
                Joy_DataReaderView (const Joy_DataReaderView &);
                Joy_DataReaderView & operator = (const Joy_DataReaderView &);
            };
        }

    }

}

#endif
