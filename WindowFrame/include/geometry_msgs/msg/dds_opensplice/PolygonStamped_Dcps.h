#ifndef _H_24EFBE3A9829B203AA5E6570D805E5FC_PolygonStamped_DCPS_H_
#define _H_24EFBE3A9829B203AA5E6570D805E5FC_PolygonStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PolygonStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PolygonStamped_TypeSupportInterface;

            typedef PolygonStamped_TypeSupportInterface * PolygonStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PolygonStamped_TypeSupportInterface> PolygonStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PolygonStamped_TypeSupportInterface> PolygonStamped_TypeSupportInterface_out;


            class PolygonStamped_DataWriter;

            typedef PolygonStamped_DataWriter * PolygonStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PolygonStamped_DataWriter> PolygonStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < PolygonStamped_DataWriter> PolygonStamped_DataWriter_out;


            class PolygonStamped_DataReader;

            typedef PolygonStamped_DataReader * PolygonStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PolygonStamped_DataReader> PolygonStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < PolygonStamped_DataReader> PolygonStamped_DataReader_out;


            class PolygonStamped_DataReaderView;

            typedef PolygonStamped_DataReaderView * PolygonStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PolygonStamped_DataReaderView> PolygonStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PolygonStamped_DataReaderView> PolygonStamped_DataReaderView_out;

            struct PolygonStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PolygonStamped_, struct PolygonStamped_Seq_uniq_> PolygonStamped_Seq;
            typedef DDS_DCPSSequence_var < PolygonStamped_Seq> PolygonStamped_Seq_var;
            typedef DDS_DCPSSequence_out < PolygonStamped_Seq> PolygonStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PolygonStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PolygonStamped_TypeSupportInterface_ptr _ptr_type;
                typedef PolygonStamped_TypeSupportInterface_var _var_type;

                static PolygonStamped_TypeSupportInterface_ptr _duplicate (PolygonStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PolygonStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PolygonStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PolygonStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PolygonStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PolygonStamped_TypeSupportInterface () {};
                ~PolygonStamped_TypeSupportInterface () {};
            private:
                PolygonStamped_TypeSupportInterface (const PolygonStamped_TypeSupportInterface &);
                PolygonStamped_TypeSupportInterface & operator = (const PolygonStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PolygonStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PolygonStamped_DataWriter_ptr _ptr_type;
                typedef PolygonStamped_DataWriter_var _var_type;

                static PolygonStamped_DataWriter_ptr _duplicate (PolygonStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PolygonStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PolygonStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PolygonStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PolygonStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PolygonStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PolygonStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PolygonStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PolygonStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PolygonStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PolygonStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PolygonStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PolygonStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PolygonStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PolygonStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PolygonStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PolygonStamped_& instance_data) = 0;

            protected:
                PolygonStamped_DataWriter () {};
                ~PolygonStamped_DataWriter () {};
            private:
                PolygonStamped_DataWriter (const PolygonStamped_DataWriter &);
                PolygonStamped_DataWriter & operator = (const PolygonStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PolygonStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PolygonStamped_DataReader_ptr _ptr_type;
                typedef PolygonStamped_DataReader_var _var_type;

                static PolygonStamped_DataReader_ptr _duplicate (PolygonStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PolygonStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PolygonStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PolygonStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PolygonStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PolygonStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PolygonStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PolygonStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PolygonStamped_& instance) = 0;

            protected:
                PolygonStamped_DataReader () {};
                ~PolygonStamped_DataReader () {};
            private:
                PolygonStamped_DataReader (const PolygonStamped_DataReader &);
                PolygonStamped_DataReader & operator = (const PolygonStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PolygonStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PolygonStamped_DataReaderView_ptr _ptr_type;
                typedef PolygonStamped_DataReaderView_var _var_type;

                static PolygonStamped_DataReaderView_ptr _duplicate (PolygonStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PolygonStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PolygonStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PolygonStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PolygonStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PolygonStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PolygonStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PolygonStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PolygonStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PolygonStamped_& instance) = 0;

            protected:
                PolygonStamped_DataReaderView () {};
                ~PolygonStamped_DataReaderView () {};
            private:
                PolygonStamped_DataReaderView (const PolygonStamped_DataReaderView &);
                PolygonStamped_DataReaderView & operator = (const PolygonStamped_DataReaderView &);
            };
        }

    }

}

#endif
