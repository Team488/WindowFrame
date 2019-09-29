#ifndef _H_0DDB37B247F59811C144647071032270_Pose2D_DCPS_H_
#define _H_0DDB37B247F59811C144647071032270_Pose2D_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Pose2D_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Pose2D_TypeSupportInterface;

            typedef Pose2D_TypeSupportInterface * Pose2D_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Pose2D_TypeSupportInterface> Pose2D_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Pose2D_TypeSupportInterface> Pose2D_TypeSupportInterface_out;


            class Pose2D_DataWriter;

            typedef Pose2D_DataWriter * Pose2D_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Pose2D_DataWriter> Pose2D_DataWriter_var;
            typedef DDS_DCPSInterface_out < Pose2D_DataWriter> Pose2D_DataWriter_out;


            class Pose2D_DataReader;

            typedef Pose2D_DataReader * Pose2D_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Pose2D_DataReader> Pose2D_DataReader_var;
            typedef DDS_DCPSInterface_out < Pose2D_DataReader> Pose2D_DataReader_out;


            class Pose2D_DataReaderView;

            typedef Pose2D_DataReaderView * Pose2D_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Pose2D_DataReaderView> Pose2D_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Pose2D_DataReaderView> Pose2D_DataReaderView_out;

            struct Pose2D_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Pose2D_, struct Pose2D_Seq_uniq_> Pose2D_Seq;
            typedef DDS_DCPSSequence_var < Pose2D_Seq> Pose2D_Seq_var;
            typedef DDS_DCPSSequence_out < Pose2D_Seq> Pose2D_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Pose2D_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Pose2D_TypeSupportInterface_ptr _ptr_type;
                typedef Pose2D_TypeSupportInterface_var _var_type;

                static Pose2D_TypeSupportInterface_ptr _duplicate (Pose2D_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose2D_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Pose2D_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose2D_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose2D_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Pose2D_TypeSupportInterface () {};
                ~Pose2D_TypeSupportInterface () {};
            private:
                Pose2D_TypeSupportInterface (const Pose2D_TypeSupportInterface &);
                Pose2D_TypeSupportInterface & operator = (const Pose2D_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Pose2D_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Pose2D_DataWriter_ptr _ptr_type;
                typedef Pose2D_DataWriter_var _var_type;

                static Pose2D_DataWriter_ptr _duplicate (Pose2D_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose2D_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Pose2D_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose2D_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose2D_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Pose2D_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Pose2D_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Pose2D_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Pose2D_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Pose2D_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Pose2D_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Pose2D_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Pose2D_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Pose2D_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Pose2D_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Pose2D_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Pose2D_& instance_data) = 0;

            protected:
                Pose2D_DataWriter () {};
                ~Pose2D_DataWriter () {};
            private:
                Pose2D_DataWriter (const Pose2D_DataWriter &);
                Pose2D_DataWriter & operator = (const Pose2D_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Pose2D_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Pose2D_DataReader_ptr _ptr_type;
                typedef Pose2D_DataReader_var _var_type;

                static Pose2D_DataReader_ptr _duplicate (Pose2D_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose2D_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Pose2D_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose2D_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose2D_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Pose2D_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Pose2D_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Pose2D_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Pose2D_& instance) = 0;

            protected:
                Pose2D_DataReader () {};
                ~Pose2D_DataReader () {};
            private:
                Pose2D_DataReader (const Pose2D_DataReader &);
                Pose2D_DataReader & operator = (const Pose2D_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Pose2D_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Pose2D_DataReaderView_ptr _ptr_type;
                typedef Pose2D_DataReaderView_var _var_type;

                static Pose2D_DataReaderView_ptr _duplicate (Pose2D_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Pose2D_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Pose2D_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Pose2D_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Pose2D_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Pose2D_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Pose2D_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Pose2D_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Pose2D_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Pose2D_& instance) = 0;

            protected:
                Pose2D_DataReaderView () {};
                ~Pose2D_DataReaderView () {};
            private:
                Pose2D_DataReaderView (const Pose2D_DataReaderView &);
                Pose2D_DataReaderView & operator = (const Pose2D_DataReaderView &);
            };
        }

    }

}

#endif
