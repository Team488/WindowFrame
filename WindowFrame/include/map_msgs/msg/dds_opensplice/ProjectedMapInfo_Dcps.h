#ifndef _H_50A87980DA33A6B0872275882AC74958_ProjectedMapInfo_DCPS_H_
#define _H_50A87980DA33A6B0872275882AC74958_ProjectedMapInfo_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ProjectedMapInfo_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ProjectedMapInfo_TypeSupportInterface;

            typedef ProjectedMapInfo_TypeSupportInterface * ProjectedMapInfo_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapInfo_TypeSupportInterface> ProjectedMapInfo_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ProjectedMapInfo_TypeSupportInterface> ProjectedMapInfo_TypeSupportInterface_out;


            class ProjectedMapInfo_DataWriter;

            typedef ProjectedMapInfo_DataWriter * ProjectedMapInfo_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapInfo_DataWriter> ProjectedMapInfo_DataWriter_var;
            typedef DDS_DCPSInterface_out < ProjectedMapInfo_DataWriter> ProjectedMapInfo_DataWriter_out;


            class ProjectedMapInfo_DataReader;

            typedef ProjectedMapInfo_DataReader * ProjectedMapInfo_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapInfo_DataReader> ProjectedMapInfo_DataReader_var;
            typedef DDS_DCPSInterface_out < ProjectedMapInfo_DataReader> ProjectedMapInfo_DataReader_out;


            class ProjectedMapInfo_DataReaderView;

            typedef ProjectedMapInfo_DataReaderView * ProjectedMapInfo_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapInfo_DataReaderView> ProjectedMapInfo_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ProjectedMapInfo_DataReaderView> ProjectedMapInfo_DataReaderView_out;

            struct ProjectedMapInfo_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ProjectedMapInfo_, struct ProjectedMapInfo_Seq_uniq_> ProjectedMapInfo_Seq;
            typedef DDS_DCPSSequence_var < ProjectedMapInfo_Seq> ProjectedMapInfo_Seq_var;
            typedef DDS_DCPSSequence_out < ProjectedMapInfo_Seq> ProjectedMapInfo_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapInfo_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ProjectedMapInfo_TypeSupportInterface_ptr _ptr_type;
                typedef ProjectedMapInfo_TypeSupportInterface_var _var_type;

                static ProjectedMapInfo_TypeSupportInterface_ptr _duplicate (ProjectedMapInfo_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapInfo_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapInfo_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ProjectedMapInfo_TypeSupportInterface () {};
                ~ProjectedMapInfo_TypeSupportInterface () {};
            private:
                ProjectedMapInfo_TypeSupportInterface (const ProjectedMapInfo_TypeSupportInterface &);
                ProjectedMapInfo_TypeSupportInterface & operator = (const ProjectedMapInfo_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapInfo_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ProjectedMapInfo_DataWriter_ptr _ptr_type;
                typedef ProjectedMapInfo_DataWriter_var _var_type;

                static ProjectedMapInfo_DataWriter_ptr _duplicate (ProjectedMapInfo_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapInfo_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapInfo_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ProjectedMapInfo_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ProjectedMapInfo_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ProjectedMapInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ProjectedMapInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ProjectedMapInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ProjectedMapInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ProjectedMapInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ProjectedMapInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ProjectedMapInfo_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ProjectedMapInfo_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ProjectedMapInfo_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapInfo_& instance_data) = 0;

            protected:
                ProjectedMapInfo_DataWriter () {};
                ~ProjectedMapInfo_DataWriter () {};
            private:
                ProjectedMapInfo_DataWriter (const ProjectedMapInfo_DataWriter &);
                ProjectedMapInfo_DataWriter & operator = (const ProjectedMapInfo_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapInfo_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ProjectedMapInfo_DataReader_ptr _ptr_type;
                typedef ProjectedMapInfo_DataReader_var _var_type;

                static ProjectedMapInfo_DataReader_ptr _duplicate (ProjectedMapInfo_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapInfo_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapInfo_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMapInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMapInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMapInfo_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapInfo_& instance) = 0;

            protected:
                ProjectedMapInfo_DataReader () {};
                ~ProjectedMapInfo_DataReader () {};
            private:
                ProjectedMapInfo_DataReader (const ProjectedMapInfo_DataReader &);
                ProjectedMapInfo_DataReader & operator = (const ProjectedMapInfo_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapInfo_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ProjectedMapInfo_DataReaderView_ptr _ptr_type;
                typedef ProjectedMapInfo_DataReaderView_var _var_type;

                static ProjectedMapInfo_DataReaderView_ptr _duplicate (ProjectedMapInfo_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapInfo_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapInfo_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapInfo_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMapInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMapInfo_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMapInfo_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMapInfo_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapInfo_& instance) = 0;

            protected:
                ProjectedMapInfo_DataReaderView () {};
                ~ProjectedMapInfo_DataReaderView () {};
            private:
                ProjectedMapInfo_DataReaderView (const ProjectedMapInfo_DataReaderView &);
                ProjectedMapInfo_DataReaderView & operator = (const ProjectedMapInfo_DataReaderView &);
            };
        }

    }

}

#endif
