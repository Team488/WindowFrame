#ifndef _H_8C0FC2D181D39BE5395C4E4AE7496900_PoseArray_DCPS_H_
#define _H_8C0FC2D181D39BE5395C4E4AE7496900_PoseArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "PoseArray_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class PoseArray_TypeSupportInterface;

            typedef PoseArray_TypeSupportInterface * PoseArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < PoseArray_TypeSupportInterface> PoseArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < PoseArray_TypeSupportInterface> PoseArray_TypeSupportInterface_out;


            class PoseArray_DataWriter;

            typedef PoseArray_DataWriter * PoseArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < PoseArray_DataWriter> PoseArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < PoseArray_DataWriter> PoseArray_DataWriter_out;


            class PoseArray_DataReader;

            typedef PoseArray_DataReader * PoseArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < PoseArray_DataReader> PoseArray_DataReader_var;
            typedef DDS_DCPSInterface_out < PoseArray_DataReader> PoseArray_DataReader_out;


            class PoseArray_DataReaderView;

            typedef PoseArray_DataReaderView * PoseArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < PoseArray_DataReaderView> PoseArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < PoseArray_DataReaderView> PoseArray_DataReaderView_out;

            struct PoseArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < PoseArray_, struct PoseArray_Seq_uniq_> PoseArray_Seq;
            typedef DDS_DCPSSequence_var < PoseArray_Seq> PoseArray_Seq_var;
            typedef DDS_DCPSSequence_out < PoseArray_Seq> PoseArray_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef PoseArray_TypeSupportInterface_ptr _ptr_type;
                typedef PoseArray_TypeSupportInterface_var _var_type;

                static PoseArray_TypeSupportInterface_ptr _duplicate (PoseArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static PoseArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                PoseArray_TypeSupportInterface () {};
                ~PoseArray_TypeSupportInterface () {};
            private:
                PoseArray_TypeSupportInterface (const PoseArray_TypeSupportInterface &);
                PoseArray_TypeSupportInterface & operator = (const PoseArray_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef PoseArray_DataWriter_ptr _ptr_type;
                typedef PoseArray_DataWriter_var _var_type;

                static PoseArray_DataWriter_ptr _duplicate (PoseArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static PoseArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const PoseArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const PoseArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const PoseArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const PoseArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const PoseArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const PoseArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const PoseArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const PoseArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const PoseArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const PoseArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (PoseArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseArray_& instance_data) = 0;

            protected:
                PoseArray_DataWriter () {};
                ~PoseArray_DataWriter () {};
            private:
                PoseArray_DataWriter (const PoseArray_DataWriter &);
                PoseArray_DataWriter & operator = (const PoseArray_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef PoseArray_DataReader_ptr _ptr_type;
                typedef PoseArray_DataReader_var _var_type;

                static PoseArray_DataReader_ptr _duplicate (PoseArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static PoseArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PoseArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PoseArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PoseArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseArray_& instance) = 0;

            protected:
                PoseArray_DataReader () {};
                ~PoseArray_DataReader () {};
            private:
                PoseArray_DataReader (const PoseArray_DataReader &);
                PoseArray_DataReader & operator = (const PoseArray_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs PoseArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef PoseArray_DataReaderView_ptr _ptr_type;
                typedef PoseArray_DataReaderView_var _var_type;

                static PoseArray_DataReaderView_ptr _duplicate (PoseArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static PoseArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static PoseArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static PoseArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                PoseArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (PoseArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (PoseArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (PoseArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (PoseArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const PoseArray_& instance) = 0;

            protected:
                PoseArray_DataReaderView () {};
                ~PoseArray_DataReaderView () {};
            private:
                PoseArray_DataReaderView (const PoseArray_DataReaderView &);
                PoseArray_DataReaderView & operator = (const PoseArray_DataReaderView &);
            };
        }

    }

}

#endif
