#ifndef _H_595C9FF965EAA48DA34EE6988365791D_PointCloud2_DCPS_H_
#define _H_595C9FF965EAA48DA34EE6988365791D_PointCloud2_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PointCloud2_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PointCloud2_TypeSupportInterface;

            typedef PointCloud2_TypeSupportInterface * PointCloud2_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2_TypeSupportInterface> PointCloud2_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PointCloud2_TypeSupportInterface> PointCloud2_TypeSupportInterface_out;


            class PointCloud2_DataWriter;

            typedef PointCloud2_DataWriter * PointCloud2_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2_DataWriter> PointCloud2_DataWriter_var;
            typedef DDS_DCPSInterface_out < PointCloud2_DataWriter> PointCloud2_DataWriter_out;


            class PointCloud2_DataReader;

            typedef PointCloud2_DataReader * PointCloud2_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2_DataReader> PointCloud2_DataReader_var;
            typedef DDS_DCPSInterface_out < PointCloud2_DataReader> PointCloud2_DataReader_out;


            class PointCloud2_DataReaderView;

            typedef PointCloud2_DataReaderView * PointCloud2_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2_DataReaderView> PointCloud2_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PointCloud2_DataReaderView> PointCloud2_DataReaderView_out;

            struct PointCloud2_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PointCloud2_, struct PointCloud2_Seq_uniq_> PointCloud2_Seq;
            typedef DDS_DCPSSequence_var < PointCloud2_Seq> PointCloud2_Seq_var;
            typedef DDS_DCPSSequence_out < PointCloud2_Seq> PointCloud2_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud2_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PointCloud2_TypeSupportInterface_ptr _ptr_type;
                typedef PointCloud2_TypeSupportInterface_var _var_type;

                static PointCloud2_TypeSupportInterface_ptr _duplicate (PointCloud2_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PointCloud2_TypeSupportInterface () {};
                ~PointCloud2_TypeSupportInterface () {};
            private:
                PointCloud2_TypeSupportInterface (const PointCloud2_TypeSupportInterface &);
                PointCloud2_TypeSupportInterface & operator = (const PointCloud2_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud2_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PointCloud2_DataWriter_ptr _ptr_type;
                typedef PointCloud2_DataWriter_var _var_type;

                static PointCloud2_DataWriter_ptr _duplicate (PointCloud2_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PointCloud2_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PointCloud2_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PointCloud2_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PointCloud2_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PointCloud2_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PointCloud2_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PointCloud2_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PointCloud2_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PointCloud2_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PointCloud2_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PointCloud2_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointCloud2_& instance_data) = 0;

            protected:
                PointCloud2_DataWriter () {};
                ~PointCloud2_DataWriter () {};
            private:
                PointCloud2_DataWriter (const PointCloud2_DataWriter &);
                PointCloud2_DataWriter & operator = (const PointCloud2_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud2_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PointCloud2_DataReader_ptr _ptr_type;
                typedef PointCloud2_DataReader_var _var_type;

                static PointCloud2_DataReader_ptr _duplicate (PointCloud2_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointCloud2_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointCloud2_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointCloud2_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointCloud2_& instance) = 0;

            protected:
                PointCloud2_DataReader () {};
                ~PointCloud2_DataReader () {};
            private:
                PointCloud2_DataReader (const PointCloud2_DataReader &);
                PointCloud2_DataReader & operator = (const PointCloud2_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs PointCloud2_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PointCloud2_DataReaderView_ptr _ptr_type;
                typedef PointCloud2_DataReaderView_var _var_type;

                static PointCloud2_DataReaderView_ptr _duplicate (PointCloud2_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointCloud2_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointCloud2_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointCloud2_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointCloud2_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointCloud2_& instance) = 0;

            protected:
                PointCloud2_DataReaderView () {};
                ~PointCloud2_DataReaderView () {};
            private:
                PointCloud2_DataReaderView (const PointCloud2_DataReaderView &);
                PointCloud2_DataReaderView & operator = (const PointCloud2_DataReaderView &);
            };
        }

    }

}

#endif
