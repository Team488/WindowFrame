#ifndef _H_053326011214FECCE4DCCBE7744B8068_PoseStamped_DCPS_H_
#define _H_053326011214FECCE4DCCBE7744B8068_PoseStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PoseStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PoseStamped_TypeSupportInterface;

            typedef PoseStamped_TypeSupportInterface * PoseStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PoseStamped_TypeSupportInterface> PoseStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PoseStamped_TypeSupportInterface> PoseStamped_TypeSupportInterface_out;


            class PoseStamped_DataWriter;

            typedef PoseStamped_DataWriter * PoseStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PoseStamped_DataWriter> PoseStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < PoseStamped_DataWriter> PoseStamped_DataWriter_out;


            class PoseStamped_DataReader;

            typedef PoseStamped_DataReader * PoseStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PoseStamped_DataReader> PoseStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < PoseStamped_DataReader> PoseStamped_DataReader_out;


            class PoseStamped_DataReaderView;

            typedef PoseStamped_DataReaderView * PoseStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PoseStamped_DataReaderView> PoseStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PoseStamped_DataReaderView> PoseStamped_DataReaderView_out;

            struct PoseStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PoseStamped_, struct PoseStamped_Seq_uniq_> PoseStamped_Seq;
            typedef DDS_DCPSSequence_var < PoseStamped_Seq> PoseStamped_Seq_var;
            typedef DDS_DCPSSequence_out < PoseStamped_Seq> PoseStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PoseStamped_TypeSupportInterface_ptr _ptr_type;
                typedef PoseStamped_TypeSupportInterface_var _var_type;

                static PoseStamped_TypeSupportInterface_ptr _duplicate (PoseStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PoseStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PoseStamped_TypeSupportInterface () {};
                ~PoseStamped_TypeSupportInterface () {};
            private:
                PoseStamped_TypeSupportInterface (const PoseStamped_TypeSupportInterface &);
                PoseStamped_TypeSupportInterface & operator = (const PoseStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PoseStamped_DataWriter_ptr _ptr_type;
                typedef PoseStamped_DataWriter_var _var_type;

                static PoseStamped_DataWriter_ptr _duplicate (PoseStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PoseStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PoseStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PoseStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PoseStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PoseStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PoseStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PoseStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PoseStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PoseStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PoseStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PoseStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PoseStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseStamped_& instance_data) = 0;

            protected:
                PoseStamped_DataWriter () {};
                ~PoseStamped_DataWriter () {};
            private:
                PoseStamped_DataWriter (const PoseStamped_DataWriter &);
                PoseStamped_DataWriter & operator = (const PoseStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PoseStamped_DataReader_ptr _ptr_type;
                typedef PoseStamped_DataReader_var _var_type;

                static PoseStamped_DataReader_ptr _duplicate (PoseStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PoseStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PoseStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PoseStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PoseStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseStamped_& instance) = 0;

            protected:
                PoseStamped_DataReader () {};
                ~PoseStamped_DataReader () {};
            private:
                PoseStamped_DataReader (const PoseStamped_DataReader &);
                PoseStamped_DataReader & operator = (const PoseStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PoseStamped_DataReaderView_ptr _ptr_type;
                typedef PoseStamped_DataReaderView_var _var_type;

                static PoseStamped_DataReaderView_ptr _duplicate (PoseStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PoseStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PoseStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PoseStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PoseStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PoseStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseStamped_& instance) = 0;

            protected:
                PoseStamped_DataReaderView () {};
                ~PoseStamped_DataReaderView () {};
            private:
                PoseStamped_DataReaderView (const PoseStamped_DataReaderView &);
                PoseStamped_DataReaderView & operator = (const PoseStamped_DataReaderView &);
            };
        }

    }

}

#endif
