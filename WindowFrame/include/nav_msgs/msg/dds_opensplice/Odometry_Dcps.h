#ifndef _H_8317ECCC7A5102082FDCDD2745FC0450_Odometry_DCPS_H_
#define _H_8317ECCC7A5102082FDCDD2745FC0450_Odometry_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Odometry_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Odometry_TypeSupportInterface;

            typedef Odometry_TypeSupportInterface * Odometry_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Odometry_TypeSupportInterface> Odometry_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Odometry_TypeSupportInterface> Odometry_TypeSupportInterface_out;


            class Odometry_DataWriter;

            typedef Odometry_DataWriter * Odometry_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Odometry_DataWriter> Odometry_DataWriter_var;
            typedef DDS_DCPSInterface_out < Odometry_DataWriter> Odometry_DataWriter_out;


            class Odometry_DataReader;

            typedef Odometry_DataReader * Odometry_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Odometry_DataReader> Odometry_DataReader_var;
            typedef DDS_DCPSInterface_out < Odometry_DataReader> Odometry_DataReader_out;


            class Odometry_DataReaderView;

            typedef Odometry_DataReaderView * Odometry_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Odometry_DataReaderView> Odometry_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Odometry_DataReaderView> Odometry_DataReaderView_out;

            struct Odometry_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Odometry_, struct Odometry_Seq_uniq_> Odometry_Seq;
            typedef DDS_DCPSSequence_var < Odometry_Seq> Odometry_Seq_var;
            typedef DDS_DCPSSequence_out < Odometry_Seq> Odometry_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Odometry_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Odometry_TypeSupportInterface_ptr _ptr_type;
                typedef Odometry_TypeSupportInterface_var _var_type;

                static Odometry_TypeSupportInterface_ptr _duplicate (Odometry_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Odometry_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Odometry_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Odometry_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Odometry_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Odometry_TypeSupportInterface () {};
                ~Odometry_TypeSupportInterface () {};
            private:
                Odometry_TypeSupportInterface (const Odometry_TypeSupportInterface &);
                Odometry_TypeSupportInterface & operator = (const Odometry_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Odometry_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Odometry_DataWriter_ptr _ptr_type;
                typedef Odometry_DataWriter_var _var_type;

                static Odometry_DataWriter_ptr _duplicate (Odometry_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Odometry_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Odometry_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Odometry_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Odometry_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Odometry_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Odometry_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Odometry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Odometry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Odometry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Odometry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Odometry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Odometry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Odometry_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Odometry_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Odometry_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Odometry_& instance_data) = 0;

            protected:
                Odometry_DataWriter () {};
                ~Odometry_DataWriter () {};
            private:
                Odometry_DataWriter (const Odometry_DataWriter &);
                Odometry_DataWriter & operator = (const Odometry_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Odometry_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Odometry_DataReader_ptr _ptr_type;
                typedef Odometry_DataReader_var _var_type;

                static Odometry_DataReader_ptr _duplicate (Odometry_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Odometry_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Odometry_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Odometry_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Odometry_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Odometry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Odometry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Odometry_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Odometry_& instance) = 0;

            protected:
                Odometry_DataReader () {};
                ~Odometry_DataReader () {};
            private:
                Odometry_DataReader (const Odometry_DataReader &);
                Odometry_DataReader & operator = (const Odometry_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs Odometry_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Odometry_DataReaderView_ptr _ptr_type;
                typedef Odometry_DataReaderView_var _var_type;

                static Odometry_DataReaderView_ptr _duplicate (Odometry_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Odometry_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Odometry_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Odometry_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Odometry_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Odometry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Odometry_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Odometry_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Odometry_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Odometry_& instance) = 0;

            protected:
                Odometry_DataReaderView () {};
                ~Odometry_DataReaderView () {};
            private:
                Odometry_DataReaderView (const Odometry_DataReaderView &);
                Odometry_DataReaderView & operator = (const Odometry_DataReaderView &);
            };
        }

    }

}

#endif