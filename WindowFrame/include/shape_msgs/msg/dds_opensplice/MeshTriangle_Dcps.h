#ifndef _H_A284854280C7C11B4FF124C1572CC254_MeshTriangle_DCPS_H_
#define _H_A284854280C7C11B4FF124C1572CC254_MeshTriangle_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MeshTriangle_.h"

#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MeshTriangle_TypeSupportInterface;

            typedef MeshTriangle_TypeSupportInterface * MeshTriangle_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MeshTriangle_TypeSupportInterface> MeshTriangle_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MeshTriangle_TypeSupportInterface> MeshTriangle_TypeSupportInterface_out;


            class MeshTriangle_DataWriter;

            typedef MeshTriangle_DataWriter * MeshTriangle_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MeshTriangle_DataWriter> MeshTriangle_DataWriter_var;
            typedef DDS_DCPSInterface_out < MeshTriangle_DataWriter> MeshTriangle_DataWriter_out;


            class MeshTriangle_DataReader;

            typedef MeshTriangle_DataReader * MeshTriangle_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MeshTriangle_DataReader> MeshTriangle_DataReader_var;
            typedef DDS_DCPSInterface_out < MeshTriangle_DataReader> MeshTriangle_DataReader_out;


            class MeshTriangle_DataReaderView;

            typedef MeshTriangle_DataReaderView * MeshTriangle_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MeshTriangle_DataReaderView> MeshTriangle_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MeshTriangle_DataReaderView> MeshTriangle_DataReaderView_out;

            struct MeshTriangle_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MeshTriangle_, struct MeshTriangle_Seq_uniq_> MeshTriangle_Seq;
            typedef DDS_DCPSSequence_var < MeshTriangle_Seq> MeshTriangle_Seq_var;
            typedef DDS_DCPSSequence_out < MeshTriangle_Seq> MeshTriangle_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs MeshTriangle_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MeshTriangle_TypeSupportInterface_ptr _ptr_type;
                typedef MeshTriangle_TypeSupportInterface_var _var_type;

                static MeshTriangle_TypeSupportInterface_ptr _duplicate (MeshTriangle_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MeshTriangle_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MeshTriangle_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MeshTriangle_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MeshTriangle_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MeshTriangle_TypeSupportInterface () {};
                ~MeshTriangle_TypeSupportInterface () {};
            private:
                MeshTriangle_TypeSupportInterface (const MeshTriangle_TypeSupportInterface &);
                MeshTriangle_TypeSupportInterface & operator = (const MeshTriangle_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs MeshTriangle_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MeshTriangle_DataWriter_ptr _ptr_type;
                typedef MeshTriangle_DataWriter_var _var_type;

                static MeshTriangle_DataWriter_ptr _duplicate (MeshTriangle_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MeshTriangle_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MeshTriangle_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MeshTriangle_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MeshTriangle_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MeshTriangle_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MeshTriangle_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MeshTriangle_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MeshTriangle_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MeshTriangle_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MeshTriangle_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MeshTriangle_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MeshTriangle_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MeshTriangle_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MeshTriangle_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MeshTriangle_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MeshTriangle_& instance_data) = 0;

            protected:
                MeshTriangle_DataWriter () {};
                ~MeshTriangle_DataWriter () {};
            private:
                MeshTriangle_DataWriter (const MeshTriangle_DataWriter &);
                MeshTriangle_DataWriter & operator = (const MeshTriangle_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs MeshTriangle_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MeshTriangle_DataReader_ptr _ptr_type;
                typedef MeshTriangle_DataReader_var _var_type;

                static MeshTriangle_DataReader_ptr _duplicate (MeshTriangle_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MeshTriangle_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MeshTriangle_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MeshTriangle_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MeshTriangle_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MeshTriangle_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MeshTriangle_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MeshTriangle_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MeshTriangle_& instance) = 0;

            protected:
                MeshTriangle_DataReader () {};
                ~MeshTriangle_DataReader () {};
            private:
                MeshTriangle_DataReader (const MeshTriangle_DataReader &);
                MeshTriangle_DataReader & operator = (const MeshTriangle_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs MeshTriangle_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MeshTriangle_DataReaderView_ptr _ptr_type;
                typedef MeshTriangle_DataReaderView_var _var_type;

                static MeshTriangle_DataReaderView_ptr _duplicate (MeshTriangle_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MeshTriangle_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MeshTriangle_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MeshTriangle_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MeshTriangle_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MeshTriangle_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MeshTriangle_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MeshTriangle_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MeshTriangle_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MeshTriangle_& instance) = 0;

            protected:
                MeshTriangle_DataReaderView () {};
                ~MeshTriangle_DataReaderView () {};
            private:
                MeshTriangle_DataReaderView (const MeshTriangle_DataReaderView &);
                MeshTriangle_DataReaderView & operator = (const MeshTriangle_DataReaderView &);
            };
        }

    }

}

#endif
