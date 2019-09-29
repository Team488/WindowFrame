#ifndef _H_516DB4A89E062F7CED40BD1ED58C535F_Path_DCPS_H_
#define _H_516DB4A89E062F7CED40BD1ED58C535F_Path_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Path_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Path_TypeSupportInterface;

            typedef Path_TypeSupportInterface * Path_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Path_TypeSupportInterface> Path_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Path_TypeSupportInterface> Path_TypeSupportInterface_out;


            class Path_DataWriter;

            typedef Path_DataWriter * Path_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Path_DataWriter> Path_DataWriter_var;
            typedef DDS_DCPSInterface_out < Path_DataWriter> Path_DataWriter_out;


            class Path_DataReader;

            typedef Path_DataReader * Path_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Path_DataReader> Path_DataReader_var;
            typedef DDS_DCPSInterface_out < Path_DataReader> Path_DataReader_out;


            class Path_DataReaderView;

            typedef Path_DataReaderView * Path_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Path_DataReaderView> Path_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Path_DataReaderView> Path_DataReaderView_out;

            struct Path_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Path_, struct Path_Seq_uniq_> Path_Seq;
            typedef DDS_DCPSSequence_var < Path_Seq> Path_Seq_var;
            typedef DDS_DCPSSequence_out < Path_Seq> Path_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Path_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Path_TypeSupportInterface_ptr _ptr_type;
                typedef Path_TypeSupportInterface_var _var_type;

                static Path_TypeSupportInterface_ptr _duplicate (Path_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Path_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Path_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Path_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Path_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Path_TypeSupportInterface () {};
                ~Path_TypeSupportInterface () {};
            private:
                Path_TypeSupportInterface (const Path_TypeSupportInterface &);
                Path_TypeSupportInterface & operator = (const Path_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Path_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Path_DataWriter_ptr _ptr_type;
                typedef Path_DataWriter_var _var_type;

                static Path_DataWriter_ptr _duplicate (Path_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Path_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Path_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Path_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Path_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Path_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Path_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Path_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Path_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Path_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Path_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Path_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Path_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Path_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Path_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Path_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Path_& instance_data) = 0;

            protected:
                Path_DataWriter () {};
                ~Path_DataWriter () {};
            private:
                Path_DataWriter (const Path_DataWriter &);
                Path_DataWriter & operator = (const Path_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Path_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Path_DataReader_ptr _ptr_type;
                typedef Path_DataReader_var _var_type;

                static Path_DataReader_ptr _duplicate (Path_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Path_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Path_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Path_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Path_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Path_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Path_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Path_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Path_& instance) = 0;

            protected:
                Path_DataReader () {};
                ~Path_DataReader () {};
            private:
                Path_DataReader (const Path_DataReader &);
                Path_DataReader & operator = (const Path_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Path_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Path_DataReaderView_ptr _ptr_type;
                typedef Path_DataReaderView_var _var_type;

                static Path_DataReaderView_ptr _duplicate (Path_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Path_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Path_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Path_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Path_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Path_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Path_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Path_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Path_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Path_& instance) = 0;

            protected:
                Path_DataReaderView () {};
                ~Path_DataReaderView () {};
            private:
                Path_DataReaderView (const Path_DataReaderView &);
                Path_DataReaderView & operator = (const Path_DataReaderView &);
            };
        }

    }

}

#endif