#ifndef _H_A66E66CBCA3E91F1FA7C34FA3F60F4CC_PointStamped_DCPS_H_
#define _H_A66E66CBCA3E91F1FA7C34FA3F60F4CC_PointStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PointStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PointStamped_TypeSupportInterface;

            typedef PointStamped_TypeSupportInterface * PointStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PointStamped_TypeSupportInterface> PointStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PointStamped_TypeSupportInterface> PointStamped_TypeSupportInterface_out;


            class PointStamped_DataWriter;

            typedef PointStamped_DataWriter * PointStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PointStamped_DataWriter> PointStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < PointStamped_DataWriter> PointStamped_DataWriter_out;


            class PointStamped_DataReader;

            typedef PointStamped_DataReader * PointStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PointStamped_DataReader> PointStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < PointStamped_DataReader> PointStamped_DataReader_out;


            class PointStamped_DataReaderView;

            typedef PointStamped_DataReaderView * PointStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PointStamped_DataReaderView> PointStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PointStamped_DataReaderView> PointStamped_DataReaderView_out;

            struct PointStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PointStamped_, struct PointStamped_Seq_uniq_> PointStamped_Seq;
            typedef DDS_DCPSSequence_var < PointStamped_Seq> PointStamped_Seq_var;
            typedef DDS_DCPSSequence_out < PointStamped_Seq> PointStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PointStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PointStamped_TypeSupportInterface_ptr _ptr_type;
                typedef PointStamped_TypeSupportInterface_var _var_type;

                static PointStamped_TypeSupportInterface_ptr _duplicate (PointStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PointStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PointStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PointStamped_TypeSupportInterface () {};
                ~PointStamped_TypeSupportInterface () {};
            private:
                PointStamped_TypeSupportInterface (const PointStamped_TypeSupportInterface &);
                PointStamped_TypeSupportInterface & operator = (const PointStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PointStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PointStamped_DataWriter_ptr _ptr_type;
                typedef PointStamped_DataWriter_var _var_type;

                static PointStamped_DataWriter_ptr _duplicate (PointStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PointStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PointStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PointStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PointStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PointStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PointStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PointStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PointStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PointStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PointStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PointStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PointStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PointStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointStamped_& instance_data) = 0;

            protected:
                PointStamped_DataWriter () {};
                ~PointStamped_DataWriter () {};
            private:
                PointStamped_DataWriter (const PointStamped_DataWriter &);
                PointStamped_DataWriter & operator = (const PointStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PointStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PointStamped_DataReader_ptr _ptr_type;
                typedef PointStamped_DataReader_var _var_type;

                static PointStamped_DataReader_ptr _duplicate (PointStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PointStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PointStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointStamped_& instance) = 0;

            protected:
                PointStamped_DataReader () {};
                ~PointStamped_DataReader () {};
            private:
                PointStamped_DataReader (const PointStamped_DataReader &);
                PointStamped_DataReader & operator = (const PointStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PointStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PointStamped_DataReaderView_ptr _ptr_type;
                typedef PointStamped_DataReaderView_var _var_type;

                static PointStamped_DataReaderView_ptr _duplicate (PointStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PointStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PointStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PointStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PointStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PointStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PointStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PointStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PointStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PointStamped_& instance) = 0;

            protected:
                PointStamped_DataReaderView () {};
                ~PointStamped_DataReaderView () {};
            private:
                PointStamped_DataReaderView (const PointStamped_DataReaderView &);
                PointStamped_DataReaderView & operator = (const PointStamped_DataReaderView &);
            };
        }

    }

}

#endif
