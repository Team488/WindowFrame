#ifndef _H_3686DE4BE50904FB1D35B234C3985683_PointCloud2Update_DCPS_H_
#define _H_3686DE4BE50904FB1D35B234C3985683_PointCloud2Update_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PointCloud2Update_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PointCloud2Update_TypeSupportInterface;

            typedef PointCloud2Update_TypeSupportInterface * PointCloud2Update_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2Update_TypeSupportInterface> PointCloud2Update_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PointCloud2Update_TypeSupportInterface> PointCloud2Update_TypeSupportInterface_out;


            class PointCloud2Update_DataWriter;

            typedef PointCloud2Update_DataWriter * PointCloud2Update_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2Update_DataWriter> PointCloud2Update_DataWriter_var;
            typedef DDS_DCPSInterface_out < PointCloud2Update_DataWriter> PointCloud2Update_DataWriter_out;


            class PointCloud2Update_DataReader;

            typedef PointCloud2Update_DataReader * PointCloud2Update_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2Update_DataReader> PointCloud2Update_DataReader_var;
            typedef DDS_DCPSInterface_out < PointCloud2Update_DataReader> PointCloud2Update_DataReader_out;


            class PointCloud2Update_DataReaderView;

            typedef PointCloud2Update_DataReaderView * PointCloud2Update_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PointCloud2Update_DataReaderView> PointCloud2Update_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PointCloud2Update_DataReaderView> PointCloud2Update_DataReaderView_out;

            struct PointCloud2Update_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PointCloud2Update_, struct PointCloud2Update_Seq_uniq_> PointCloud2Update_Seq;
            typedef DDS_DCPSSequence_var < PointCloud2Update_Seq> PointCloud2Update_Seq_var;
            typedef DDS_DCPSSequence_out < PointCloud2Update_Seq> PointCloud2Update_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs PointCloud2Update_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PointCloud2Update_TypeSupportInterface_ptr _ptr_type;
                typedef PointCloud2Update_TypeSupportInterface_var _var_type;

                static PointCloud2Update_TypeSupportInterface_ptr _duplicate (PointCloud2Update_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2Update_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2Update_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2Update_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2Update_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PointCloud2Update_TypeSupportInterface () {};
                ~PointCloud2Update_TypeSupportInterface () {};
            private:
                PointCloud2Update_TypeSupportInterface (const PointCloud2Update_TypeSupportInterface &);
                PointCloud2Update_TypeSupportInterface & operator = (const PointCloud2Update_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs PointCloud2Update_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PointCloud2Update_DataWriter_ptr _ptr_type;
                typedef PointCloud2Update_DataWriter_var _var_type;

                static PointCloud2Update_DataWriter_ptr _duplicate (PointCloud2Update_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2Update_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2Update_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2Update_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2Update_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PointCloud2Update_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PointCloud2Update_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PointCloud2Update_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PointCloud2Update_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PointCloud2Update_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PointCloud2Update_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PointCloud2Update_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PointCloud2Update_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PointCloud2Update_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PointCloud2Update_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PointCloud2Update_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointCloud2Update_& instance_data) = 0;

            protected:
                PointCloud2Update_DataWriter () {};
                ~PointCloud2Update_DataWriter () {};
            private:
                PointCloud2Update_DataWriter (const PointCloud2Update_DataWriter &);
                PointCloud2Update_DataWriter & operator = (const PointCloud2Update_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs PointCloud2Update_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PointCloud2Update_DataReader_ptr _ptr_type;
                typedef PointCloud2Update_DataReader_var _var_type;

                static PointCloud2Update_DataReader_ptr _duplicate (PointCloud2Update_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2Update_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2Update_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2Update_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2Update_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointCloud2Update_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointCloud2Update_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointCloud2Update_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointCloud2Update_& instance) = 0;

            protected:
                PointCloud2Update_DataReader () {};
                ~PointCloud2Update_DataReader () {};
            private:
                PointCloud2Update_DataReader (const PointCloud2Update_DataReader &);
                PointCloud2Update_DataReader & operator = (const PointCloud2Update_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs PointCloud2Update_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PointCloud2Update_DataReaderView_ptr _ptr_type;
                typedef PointCloud2Update_DataReaderView_var _var_type;

                static PointCloud2Update_DataReaderView_ptr _duplicate (PointCloud2Update_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointCloud2Update_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PointCloud2Update_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointCloud2Update_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PointCloud2Update_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointCloud2Update_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointCloud2Update_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointCloud2Update_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointCloud2Update_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointCloud2Update_& instance) = 0;

            protected:
                PointCloud2Update_DataReaderView () {};
                ~PointCloud2Update_DataReaderView () {};
            private:
                PointCloud2Update_DataReaderView (const PointCloud2Update_DataReaderView &);
                PointCloud2Update_DataReaderView & operator = (const PointCloud2Update_DataReaderView &);
            };
        }

    }

}

#endif
