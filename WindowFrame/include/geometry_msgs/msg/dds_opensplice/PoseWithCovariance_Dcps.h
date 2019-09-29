#ifndef _H_7A078C55875A9BA26B304FFFF5063D18_PoseWithCovariance_DCPS_H_
#define _H_7A078C55875A9BA26B304FFFF5063D18_PoseWithCovariance_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PoseWithCovariance_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PoseWithCovariance_TypeSupportInterface;

            typedef PoseWithCovariance_TypeSupportInterface * PoseWithCovariance_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PoseWithCovariance_TypeSupportInterface> PoseWithCovariance_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PoseWithCovariance_TypeSupportInterface> PoseWithCovariance_TypeSupportInterface_out;


            class PoseWithCovariance_DataWriter;

            typedef PoseWithCovariance_DataWriter * PoseWithCovariance_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PoseWithCovariance_DataWriter> PoseWithCovariance_DataWriter_var;
            typedef DDS_DCPSInterface_out < PoseWithCovariance_DataWriter> PoseWithCovariance_DataWriter_out;


            class PoseWithCovariance_DataReader;

            typedef PoseWithCovariance_DataReader * PoseWithCovariance_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PoseWithCovariance_DataReader> PoseWithCovariance_DataReader_var;
            typedef DDS_DCPSInterface_out < PoseWithCovariance_DataReader> PoseWithCovariance_DataReader_out;


            class PoseWithCovariance_DataReaderView;

            typedef PoseWithCovariance_DataReaderView * PoseWithCovariance_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PoseWithCovariance_DataReaderView> PoseWithCovariance_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PoseWithCovariance_DataReaderView> PoseWithCovariance_DataReaderView_out;

            struct PoseWithCovariance_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < PoseWithCovariance_, struct PoseWithCovariance_Seq_uniq_> PoseWithCovariance_Seq;
            typedef DDS_DCPSSequence_var < PoseWithCovariance_Seq> PoseWithCovariance_Seq_var;
            typedef DDS_DCPSSequence_out < PoseWithCovariance_Seq> PoseWithCovariance_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseWithCovariance_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PoseWithCovariance_TypeSupportInterface_ptr _ptr_type;
                typedef PoseWithCovariance_TypeSupportInterface_var _var_type;

                static PoseWithCovariance_TypeSupportInterface_ptr _duplicate (PoseWithCovariance_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseWithCovariance_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseWithCovariance_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PoseWithCovariance_TypeSupportInterface () {};
                ~PoseWithCovariance_TypeSupportInterface () {};
            private:
                PoseWithCovariance_TypeSupportInterface (const PoseWithCovariance_TypeSupportInterface &);
                PoseWithCovariance_TypeSupportInterface & operator = (const PoseWithCovariance_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseWithCovariance_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PoseWithCovariance_DataWriter_ptr _ptr_type;
                typedef PoseWithCovariance_DataWriter_var _var_type;

                static PoseWithCovariance_DataWriter_ptr _duplicate (PoseWithCovariance_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseWithCovariance_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseWithCovariance_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PoseWithCovariance_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PoseWithCovariance_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PoseWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PoseWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PoseWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PoseWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PoseWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PoseWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PoseWithCovariance_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PoseWithCovariance_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PoseWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseWithCovariance_& instance_data) = 0;

            protected:
                PoseWithCovariance_DataWriter () {};
                ~PoseWithCovariance_DataWriter () {};
            private:
                PoseWithCovariance_DataWriter (const PoseWithCovariance_DataWriter &);
                PoseWithCovariance_DataWriter & operator = (const PoseWithCovariance_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseWithCovariance_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PoseWithCovariance_DataReader_ptr _ptr_type;
                typedef PoseWithCovariance_DataReader_var _var_type;

                static PoseWithCovariance_DataReader_ptr _duplicate (PoseWithCovariance_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseWithCovariance_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseWithCovariance_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PoseWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PoseWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PoseWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseWithCovariance_& instance) = 0;

            protected:
                PoseWithCovariance_DataReader () {};
                ~PoseWithCovariance_DataReader () {};
            private:
                PoseWithCovariance_DataReader (const PoseWithCovariance_DataReader &);
                PoseWithCovariance_DataReader & operator = (const PoseWithCovariance_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseWithCovariance_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PoseWithCovariance_DataReaderView_ptr _ptr_type;
                typedef PoseWithCovariance_DataReaderView_var _var_type;

                static PoseWithCovariance_DataReaderView_ptr _duplicate (PoseWithCovariance_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseWithCovariance_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseWithCovariance_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseWithCovariance_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PoseWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PoseWithCovariance_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PoseWithCovariance_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PoseWithCovariance_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseWithCovariance_& instance) = 0;

            protected:
                PoseWithCovariance_DataReaderView () {};
                ~PoseWithCovariance_DataReaderView () {};
            private:
                PoseWithCovariance_DataReaderView (const PoseWithCovariance_DataReaderView &);
                PoseWithCovariance_DataReaderView & operator = (const PoseWithCovariance_DataReaderView &);
            };
        }

    }

}

#endif
