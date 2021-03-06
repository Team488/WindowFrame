#ifndef _H_2994B2F16581CEB971D4874E718884D4_ProjectedMap_DCPS_H_
#define _H_2994B2F16581CEB971D4874E718884D4_ProjectedMap_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ProjectedMap_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ProjectedMap_TypeSupportInterface;

            typedef ProjectedMap_TypeSupportInterface * ProjectedMap_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMap_TypeSupportInterface> ProjectedMap_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ProjectedMap_TypeSupportInterface> ProjectedMap_TypeSupportInterface_out;


            class ProjectedMap_DataWriter;

            typedef ProjectedMap_DataWriter * ProjectedMap_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMap_DataWriter> ProjectedMap_DataWriter_var;
            typedef DDS_DCPSInterface_out < ProjectedMap_DataWriter> ProjectedMap_DataWriter_out;


            class ProjectedMap_DataReader;

            typedef ProjectedMap_DataReader * ProjectedMap_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMap_DataReader> ProjectedMap_DataReader_var;
            typedef DDS_DCPSInterface_out < ProjectedMap_DataReader> ProjectedMap_DataReader_out;


            class ProjectedMap_DataReaderView;

            typedef ProjectedMap_DataReaderView * ProjectedMap_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMap_DataReaderView> ProjectedMap_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ProjectedMap_DataReaderView> ProjectedMap_DataReaderView_out;

            struct ProjectedMap_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ProjectedMap_, struct ProjectedMap_Seq_uniq_> ProjectedMap_Seq;
            typedef DDS_DCPSSequence_var < ProjectedMap_Seq> ProjectedMap_Seq_var;
            typedef DDS_DCPSSequence_out < ProjectedMap_Seq> ProjectedMap_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMap_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ProjectedMap_TypeSupportInterface_ptr _ptr_type;
                typedef ProjectedMap_TypeSupportInterface_var _var_type;

                static ProjectedMap_TypeSupportInterface_ptr _duplicate (ProjectedMap_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMap_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMap_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMap_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMap_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ProjectedMap_TypeSupportInterface () {};
                ~ProjectedMap_TypeSupportInterface () {};
            private:
                ProjectedMap_TypeSupportInterface (const ProjectedMap_TypeSupportInterface &);
                ProjectedMap_TypeSupportInterface & operator = (const ProjectedMap_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMap_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ProjectedMap_DataWriter_ptr _ptr_type;
                typedef ProjectedMap_DataWriter_var _var_type;

                static ProjectedMap_DataWriter_ptr _duplicate (ProjectedMap_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMap_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMap_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMap_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMap_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ProjectedMap_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ProjectedMap_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ProjectedMap_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ProjectedMap_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ProjectedMap_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ProjectedMap_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ProjectedMap_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ProjectedMap_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ProjectedMap_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ProjectedMap_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ProjectedMap_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMap_& instance_data) = 0;

            protected:
                ProjectedMap_DataWriter () {};
                ~ProjectedMap_DataWriter () {};
            private:
                ProjectedMap_DataWriter (const ProjectedMap_DataWriter &);
                ProjectedMap_DataWriter & operator = (const ProjectedMap_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMap_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ProjectedMap_DataReader_ptr _ptr_type;
                typedef ProjectedMap_DataReader_var _var_type;

                static ProjectedMap_DataReader_ptr _duplicate (ProjectedMap_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMap_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMap_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMap_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMap_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMap_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMap_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMap_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMap_& instance) = 0;

            protected:
                ProjectedMap_DataReader () {};
                ~ProjectedMap_DataReader () {};
            private:
                ProjectedMap_DataReader (const ProjectedMap_DataReader &);
                ProjectedMap_DataReader & operator = (const ProjectedMap_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMap_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ProjectedMap_DataReaderView_ptr _ptr_type;
                typedef ProjectedMap_DataReaderView_var _var_type;

                static ProjectedMap_DataReaderView_ptr _duplicate (ProjectedMap_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMap_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMap_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMap_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMap_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMap_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMap_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMap_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMap_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMap_& instance) = 0;

            protected:
                ProjectedMap_DataReaderView () {};
                ~ProjectedMap_DataReaderView () {};
            private:
                ProjectedMap_DataReaderView (const ProjectedMap_DataReaderView &);
                ProjectedMap_DataReaderView & operator = (const ProjectedMap_DataReaderView &);
            };
        }

    }

}

#endif
