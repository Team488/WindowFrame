#ifndef _H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo_DCPS_H_
#define _H_2899B5A2350F19F293B8C84E8BEEBA3D_ProjectedMapsInfo_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ProjectedMapsInfo_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace srv
    {
        namespace dds_
        {
            class ProjectedMapsInfo_Request_TypeSupportInterface;

            typedef ProjectedMapsInfo_Request_TypeSupportInterface * ProjectedMapsInfo_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Request_TypeSupportInterface> ProjectedMapsInfo_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Request_TypeSupportInterface> ProjectedMapsInfo_Request_TypeSupportInterface_out;


            class ProjectedMapsInfo_Request_DataWriter;

            typedef ProjectedMapsInfo_Request_DataWriter * ProjectedMapsInfo_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Request_DataWriter> ProjectedMapsInfo_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Request_DataWriter> ProjectedMapsInfo_Request_DataWriter_out;


            class ProjectedMapsInfo_Request_DataReader;

            typedef ProjectedMapsInfo_Request_DataReader * ProjectedMapsInfo_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Request_DataReader> ProjectedMapsInfo_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Request_DataReader> ProjectedMapsInfo_Request_DataReader_out;


            class ProjectedMapsInfo_Request_DataReaderView;

            typedef ProjectedMapsInfo_Request_DataReaderView * ProjectedMapsInfo_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Request_DataReaderView> ProjectedMapsInfo_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Request_DataReaderView> ProjectedMapsInfo_Request_DataReaderView_out;

            struct ProjectedMapsInfo_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ProjectedMapsInfo_Request_, struct ProjectedMapsInfo_Request_Seq_uniq_> ProjectedMapsInfo_Request_Seq;
            typedef DDS_DCPSSequence_var < ProjectedMapsInfo_Request_Seq> ProjectedMapsInfo_Request_Seq_var;
            typedef DDS_DCPSSequence_out < ProjectedMapsInfo_Request_Seq> ProjectedMapsInfo_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ProjectedMapsInfo_Request_TypeSupportInterface_ptr _ptr_type;
                typedef ProjectedMapsInfo_Request_TypeSupportInterface_var _var_type;

                static ProjectedMapsInfo_Request_TypeSupportInterface_ptr _duplicate (ProjectedMapsInfo_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ProjectedMapsInfo_Request_TypeSupportInterface () {};
                ~ProjectedMapsInfo_Request_TypeSupportInterface () {};
            private:
                ProjectedMapsInfo_Request_TypeSupportInterface (const ProjectedMapsInfo_Request_TypeSupportInterface &);
                ProjectedMapsInfo_Request_TypeSupportInterface & operator = (const ProjectedMapsInfo_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ProjectedMapsInfo_Request_DataWriter_ptr _ptr_type;
                typedef ProjectedMapsInfo_Request_DataWriter_var _var_type;

                static ProjectedMapsInfo_Request_DataWriter_ptr _duplicate (ProjectedMapsInfo_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ProjectedMapsInfo_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ProjectedMapsInfo_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ProjectedMapsInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapsInfo_Request_& instance_data) = 0;

            protected:
                ProjectedMapsInfo_Request_DataWriter () {};
                ~ProjectedMapsInfo_Request_DataWriter () {};
            private:
                ProjectedMapsInfo_Request_DataWriter (const ProjectedMapsInfo_Request_DataWriter &);
                ProjectedMapsInfo_Request_DataWriter & operator = (const ProjectedMapsInfo_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ProjectedMapsInfo_Request_DataReader_ptr _ptr_type;
                typedef ProjectedMapsInfo_Request_DataReader_var _var_type;

                static ProjectedMapsInfo_Request_DataReader_ptr _duplicate (ProjectedMapsInfo_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMapsInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapsInfo_Request_& instance) = 0;

            protected:
                ProjectedMapsInfo_Request_DataReader () {};
                ~ProjectedMapsInfo_Request_DataReader () {};
            private:
                ProjectedMapsInfo_Request_DataReader (const ProjectedMapsInfo_Request_DataReader &);
                ProjectedMapsInfo_Request_DataReader & operator = (const ProjectedMapsInfo_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ProjectedMapsInfo_Request_DataReaderView_ptr _ptr_type;
                typedef ProjectedMapsInfo_Request_DataReaderView_var _var_type;

                static ProjectedMapsInfo_Request_DataReaderView_ptr _duplicate (ProjectedMapsInfo_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMapsInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapsInfo_Request_& instance) = 0;

            protected:
                ProjectedMapsInfo_Request_DataReaderView () {};
                ~ProjectedMapsInfo_Request_DataReaderView () {};
            private:
                ProjectedMapsInfo_Request_DataReaderView (const ProjectedMapsInfo_Request_DataReaderView &);
                ProjectedMapsInfo_Request_DataReaderView & operator = (const ProjectedMapsInfo_Request_DataReaderView &);
            };
            class ProjectedMapsInfo_Response_TypeSupportInterface;

            typedef ProjectedMapsInfo_Response_TypeSupportInterface * ProjectedMapsInfo_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Response_TypeSupportInterface> ProjectedMapsInfo_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Response_TypeSupportInterface> ProjectedMapsInfo_Response_TypeSupportInterface_out;


            class ProjectedMapsInfo_Response_DataWriter;

            typedef ProjectedMapsInfo_Response_DataWriter * ProjectedMapsInfo_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Response_DataWriter> ProjectedMapsInfo_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Response_DataWriter> ProjectedMapsInfo_Response_DataWriter_out;


            class ProjectedMapsInfo_Response_DataReader;

            typedef ProjectedMapsInfo_Response_DataReader * ProjectedMapsInfo_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Response_DataReader> ProjectedMapsInfo_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Response_DataReader> ProjectedMapsInfo_Response_DataReader_out;


            class ProjectedMapsInfo_Response_DataReaderView;

            typedef ProjectedMapsInfo_Response_DataReaderView * ProjectedMapsInfo_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ProjectedMapsInfo_Response_DataReaderView> ProjectedMapsInfo_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ProjectedMapsInfo_Response_DataReaderView> ProjectedMapsInfo_Response_DataReaderView_out;

            struct ProjectedMapsInfo_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ProjectedMapsInfo_Response_, struct ProjectedMapsInfo_Response_Seq_uniq_> ProjectedMapsInfo_Response_Seq;
            typedef DDS_DCPSSequence_var < ProjectedMapsInfo_Response_Seq> ProjectedMapsInfo_Response_Seq_var;
            typedef DDS_DCPSSequence_out < ProjectedMapsInfo_Response_Seq> ProjectedMapsInfo_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ProjectedMapsInfo_Response_TypeSupportInterface_ptr _ptr_type;
                typedef ProjectedMapsInfo_Response_TypeSupportInterface_var _var_type;

                static ProjectedMapsInfo_Response_TypeSupportInterface_ptr _duplicate (ProjectedMapsInfo_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ProjectedMapsInfo_Response_TypeSupportInterface () {};
                ~ProjectedMapsInfo_Response_TypeSupportInterface () {};
            private:
                ProjectedMapsInfo_Response_TypeSupportInterface (const ProjectedMapsInfo_Response_TypeSupportInterface &);
                ProjectedMapsInfo_Response_TypeSupportInterface & operator = (const ProjectedMapsInfo_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ProjectedMapsInfo_Response_DataWriter_ptr _ptr_type;
                typedef ProjectedMapsInfo_Response_DataWriter_var _var_type;

                static ProjectedMapsInfo_Response_DataWriter_ptr _duplicate (ProjectedMapsInfo_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ProjectedMapsInfo_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ProjectedMapsInfo_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ProjectedMapsInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapsInfo_Response_& instance_data) = 0;

            protected:
                ProjectedMapsInfo_Response_DataWriter () {};
                ~ProjectedMapsInfo_Response_DataWriter () {};
            private:
                ProjectedMapsInfo_Response_DataWriter (const ProjectedMapsInfo_Response_DataWriter &);
                ProjectedMapsInfo_Response_DataWriter & operator = (const ProjectedMapsInfo_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ProjectedMapsInfo_Response_DataReader_ptr _ptr_type;
                typedef ProjectedMapsInfo_Response_DataReader_var _var_type;

                static ProjectedMapsInfo_Response_DataReader_ptr _duplicate (ProjectedMapsInfo_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMapsInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapsInfo_Response_& instance) = 0;

            protected:
                ProjectedMapsInfo_Response_DataReader () {};
                ~ProjectedMapsInfo_Response_DataReader () {};
            private:
                ProjectedMapsInfo_Response_DataReader (const ProjectedMapsInfo_Response_DataReader &);
                ProjectedMapsInfo_Response_DataReader & operator = (const ProjectedMapsInfo_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs ProjectedMapsInfo_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ProjectedMapsInfo_Response_DataReaderView_ptr _ptr_type;
                typedef ProjectedMapsInfo_Response_DataReaderView_var _var_type;

                static ProjectedMapsInfo_Response_DataReaderView_ptr _duplicate (ProjectedMapsInfo_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ProjectedMapsInfo_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ProjectedMapsInfo_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ProjectedMapsInfo_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ProjectedMapsInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ProjectedMapsInfo_Response_& instance) = 0;

            protected:
                ProjectedMapsInfo_Response_DataReaderView () {};
                ~ProjectedMapsInfo_Response_DataReaderView () {};
            private:
                ProjectedMapsInfo_Response_DataReaderView (const ProjectedMapsInfo_Response_DataReaderView &);
                ProjectedMapsInfo_Response_DataReaderView & operator = (const ProjectedMapsInfo_Response_DataReaderView &);
            };
            class Sample_ProjectedMapsInfo_Request_TypeSupportInterface;

            typedef Sample_ProjectedMapsInfo_Request_TypeSupportInterface * Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Request_TypeSupportInterface> Sample_ProjectedMapsInfo_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Request_TypeSupportInterface> Sample_ProjectedMapsInfo_Request_TypeSupportInterface_out;


            class Sample_ProjectedMapsInfo_Request_DataWriter;

            typedef Sample_ProjectedMapsInfo_Request_DataWriter * Sample_ProjectedMapsInfo_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Request_DataWriter> Sample_ProjectedMapsInfo_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Request_DataWriter> Sample_ProjectedMapsInfo_Request_DataWriter_out;


            class Sample_ProjectedMapsInfo_Request_DataReader;

            typedef Sample_ProjectedMapsInfo_Request_DataReader * Sample_ProjectedMapsInfo_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Request_DataReader> Sample_ProjectedMapsInfo_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Request_DataReader> Sample_ProjectedMapsInfo_Request_DataReader_out;


            class Sample_ProjectedMapsInfo_Request_DataReaderView;

            typedef Sample_ProjectedMapsInfo_Request_DataReaderView * Sample_ProjectedMapsInfo_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Request_DataReaderView> Sample_ProjectedMapsInfo_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Request_DataReaderView> Sample_ProjectedMapsInfo_Request_DataReaderView_out;

            struct Sample_ProjectedMapsInfo_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_ProjectedMapsInfo_Request_, struct Sample_ProjectedMapsInfo_Request_Seq_uniq_> Sample_ProjectedMapsInfo_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_ProjectedMapsInfo_Request_Seq> Sample_ProjectedMapsInfo_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ProjectedMapsInfo_Request_Seq> Sample_ProjectedMapsInfo_Request_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Request_TypeSupportInterface_var _var_type;

                static Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr _duplicate (Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ProjectedMapsInfo_Request_TypeSupportInterface () {};
                ~Sample_ProjectedMapsInfo_Request_TypeSupportInterface () {};
            private:
                Sample_ProjectedMapsInfo_Request_TypeSupportInterface (const Sample_ProjectedMapsInfo_Request_TypeSupportInterface &);
                Sample_ProjectedMapsInfo_Request_TypeSupportInterface & operator = (const Sample_ProjectedMapsInfo_Request_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Request_DataWriter_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Request_DataWriter_var _var_type;

                static Sample_ProjectedMapsInfo_Request_DataWriter_ptr _duplicate (Sample_ProjectedMapsInfo_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ProjectedMapsInfo_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ProjectedMapsInfo_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ProjectedMapsInfo_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ProjectedMapsInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ProjectedMapsInfo_Request_& instance_data) = 0;

            protected:
                Sample_ProjectedMapsInfo_Request_DataWriter () {};
                ~Sample_ProjectedMapsInfo_Request_DataWriter () {};
            private:
                Sample_ProjectedMapsInfo_Request_DataWriter (const Sample_ProjectedMapsInfo_Request_DataWriter &);
                Sample_ProjectedMapsInfo_Request_DataWriter & operator = (const Sample_ProjectedMapsInfo_Request_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Request_DataReader_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Request_DataReader_var _var_type;

                static Sample_ProjectedMapsInfo_Request_DataReader_ptr _duplicate (Sample_ProjectedMapsInfo_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ProjectedMapsInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ProjectedMapsInfo_Request_& instance) = 0;

            protected:
                Sample_ProjectedMapsInfo_Request_DataReader () {};
                ~Sample_ProjectedMapsInfo_Request_DataReader () {};
            private:
                Sample_ProjectedMapsInfo_Request_DataReader (const Sample_ProjectedMapsInfo_Request_DataReader &);
                Sample_ProjectedMapsInfo_Request_DataReader & operator = (const Sample_ProjectedMapsInfo_Request_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Request_DataReaderView_var _var_type;

                static Sample_ProjectedMapsInfo_Request_DataReaderView_ptr _duplicate (Sample_ProjectedMapsInfo_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ProjectedMapsInfo_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ProjectedMapsInfo_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ProjectedMapsInfo_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ProjectedMapsInfo_Request_& instance) = 0;

            protected:
                Sample_ProjectedMapsInfo_Request_DataReaderView () {};
                ~Sample_ProjectedMapsInfo_Request_DataReaderView () {};
            private:
                Sample_ProjectedMapsInfo_Request_DataReaderView (const Sample_ProjectedMapsInfo_Request_DataReaderView &);
                Sample_ProjectedMapsInfo_Request_DataReaderView & operator = (const Sample_ProjectedMapsInfo_Request_DataReaderView &);
            };
            class Sample_ProjectedMapsInfo_Response_TypeSupportInterface;

            typedef Sample_ProjectedMapsInfo_Response_TypeSupportInterface * Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Response_TypeSupportInterface> Sample_ProjectedMapsInfo_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Response_TypeSupportInterface> Sample_ProjectedMapsInfo_Response_TypeSupportInterface_out;


            class Sample_ProjectedMapsInfo_Response_DataWriter;

            typedef Sample_ProjectedMapsInfo_Response_DataWriter * Sample_ProjectedMapsInfo_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Response_DataWriter> Sample_ProjectedMapsInfo_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Response_DataWriter> Sample_ProjectedMapsInfo_Response_DataWriter_out;


            class Sample_ProjectedMapsInfo_Response_DataReader;

            typedef Sample_ProjectedMapsInfo_Response_DataReader * Sample_ProjectedMapsInfo_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Response_DataReader> Sample_ProjectedMapsInfo_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Response_DataReader> Sample_ProjectedMapsInfo_Response_DataReader_out;


            class Sample_ProjectedMapsInfo_Response_DataReaderView;

            typedef Sample_ProjectedMapsInfo_Response_DataReaderView * Sample_ProjectedMapsInfo_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ProjectedMapsInfo_Response_DataReaderView> Sample_ProjectedMapsInfo_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ProjectedMapsInfo_Response_DataReaderView> Sample_ProjectedMapsInfo_Response_DataReaderView_out;

            struct Sample_ProjectedMapsInfo_Response_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Sample_ProjectedMapsInfo_Response_, struct Sample_ProjectedMapsInfo_Response_Seq_uniq_> Sample_ProjectedMapsInfo_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_ProjectedMapsInfo_Response_Seq> Sample_ProjectedMapsInfo_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ProjectedMapsInfo_Response_Seq> Sample_ProjectedMapsInfo_Response_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Response_TypeSupportInterface_var _var_type;

                static Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr _duplicate (Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ProjectedMapsInfo_Response_TypeSupportInterface () {};
                ~Sample_ProjectedMapsInfo_Response_TypeSupportInterface () {};
            private:
                Sample_ProjectedMapsInfo_Response_TypeSupportInterface (const Sample_ProjectedMapsInfo_Response_TypeSupportInterface &);
                Sample_ProjectedMapsInfo_Response_TypeSupportInterface & operator = (const Sample_ProjectedMapsInfo_Response_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Response_DataWriter_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Response_DataWriter_var _var_type;

                static Sample_ProjectedMapsInfo_Response_DataWriter_ptr _duplicate (Sample_ProjectedMapsInfo_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ProjectedMapsInfo_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ProjectedMapsInfo_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ProjectedMapsInfo_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ProjectedMapsInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ProjectedMapsInfo_Response_& instance_data) = 0;

            protected:
                Sample_ProjectedMapsInfo_Response_DataWriter () {};
                ~Sample_ProjectedMapsInfo_Response_DataWriter () {};
            private:
                Sample_ProjectedMapsInfo_Response_DataWriter (const Sample_ProjectedMapsInfo_Response_DataWriter &);
                Sample_ProjectedMapsInfo_Response_DataWriter & operator = (const Sample_ProjectedMapsInfo_Response_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Response_DataReader_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Response_DataReader_var _var_type;

                static Sample_ProjectedMapsInfo_Response_DataReader_ptr _duplicate (Sample_ProjectedMapsInfo_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ProjectedMapsInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ProjectedMapsInfo_Response_& instance) = 0;

            protected:
                Sample_ProjectedMapsInfo_Response_DataReader () {};
                ~Sample_ProjectedMapsInfo_Response_DataReader () {};
            private:
                Sample_ProjectedMapsInfo_Response_DataReader (const Sample_ProjectedMapsInfo_Response_DataReader &);
                Sample_ProjectedMapsInfo_Response_DataReader & operator = (const Sample_ProjectedMapsInfo_Response_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs Sample_ProjectedMapsInfo_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ProjectedMapsInfo_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_ProjectedMapsInfo_Response_DataReaderView_var _var_type;

                static Sample_ProjectedMapsInfo_Response_DataReaderView_ptr _duplicate (Sample_ProjectedMapsInfo_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ProjectedMapsInfo_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ProjectedMapsInfo_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ProjectedMapsInfo_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ProjectedMapsInfo_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ProjectedMapsInfo_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ProjectedMapsInfo_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ProjectedMapsInfo_Response_& instance) = 0;

            protected:
                Sample_ProjectedMapsInfo_Response_DataReaderView () {};
                ~Sample_ProjectedMapsInfo_Response_DataReaderView () {};
            private:
                Sample_ProjectedMapsInfo_Response_DataReaderView (const Sample_ProjectedMapsInfo_Response_DataReaderView &);
                Sample_ProjectedMapsInfo_Response_DataReaderView & operator = (const Sample_ProjectedMapsInfo_Response_DataReaderView &);
            };
        }

    }

}

#endif
