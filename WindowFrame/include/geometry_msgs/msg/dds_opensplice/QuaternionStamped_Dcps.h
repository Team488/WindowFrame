#ifndef _H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped_DCPS_H_
#define _H_39071A7688811BD404D1B3AFC8A0671C_QuaternionStamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "QuaternionStamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class QuaternionStamped_TypeSupportInterface;

            typedef QuaternionStamped_TypeSupportInterface * QuaternionStamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < QuaternionStamped_TypeSupportInterface> QuaternionStamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < QuaternionStamped_TypeSupportInterface> QuaternionStamped_TypeSupportInterface_out;


            class QuaternionStamped_DataWriter;

            typedef QuaternionStamped_DataWriter * QuaternionStamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < QuaternionStamped_DataWriter> QuaternionStamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < QuaternionStamped_DataWriter> QuaternionStamped_DataWriter_out;


            class QuaternionStamped_DataReader;

            typedef QuaternionStamped_DataReader * QuaternionStamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < QuaternionStamped_DataReader> QuaternionStamped_DataReader_var;
            typedef DDS_DCPSInterface_out < QuaternionStamped_DataReader> QuaternionStamped_DataReader_out;


            class QuaternionStamped_DataReaderView;

            typedef QuaternionStamped_DataReaderView * QuaternionStamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < QuaternionStamped_DataReaderView> QuaternionStamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < QuaternionStamped_DataReaderView> QuaternionStamped_DataReaderView_out;

            struct QuaternionStamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < QuaternionStamped_, struct QuaternionStamped_Seq_uniq_> QuaternionStamped_Seq;
            typedef DDS_DCPSSequence_var < QuaternionStamped_Seq> QuaternionStamped_Seq_var;
            typedef DDS_DCPSSequence_out < QuaternionStamped_Seq> QuaternionStamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs QuaternionStamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef QuaternionStamped_TypeSupportInterface_ptr _ptr_type;
                typedef QuaternionStamped_TypeSupportInterface_var _var_type;

                static QuaternionStamped_TypeSupportInterface_ptr _duplicate (QuaternionStamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static QuaternionStamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static QuaternionStamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static QuaternionStamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                QuaternionStamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                QuaternionStamped_TypeSupportInterface () {};
                ~QuaternionStamped_TypeSupportInterface () {};
            private:
                QuaternionStamped_TypeSupportInterface (const QuaternionStamped_TypeSupportInterface &);
                QuaternionStamped_TypeSupportInterface & operator = (const QuaternionStamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs QuaternionStamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef QuaternionStamped_DataWriter_ptr _ptr_type;
                typedef QuaternionStamped_DataWriter_var _var_type;

                static QuaternionStamped_DataWriter_ptr _duplicate (QuaternionStamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static QuaternionStamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static QuaternionStamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static QuaternionStamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                QuaternionStamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const QuaternionStamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const QuaternionStamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const QuaternionStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const QuaternionStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const QuaternionStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const QuaternionStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const QuaternionStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const QuaternionStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const QuaternionStamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const QuaternionStamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (QuaternionStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const QuaternionStamped_& instance_data) = 0;

            protected:
                QuaternionStamped_DataWriter () {};
                ~QuaternionStamped_DataWriter () {};
            private:
                QuaternionStamped_DataWriter (const QuaternionStamped_DataWriter &);
                QuaternionStamped_DataWriter & operator = (const QuaternionStamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs QuaternionStamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef QuaternionStamped_DataReader_ptr _ptr_type;
                typedef QuaternionStamped_DataReader_var _var_type;

                static QuaternionStamped_DataReader_ptr _duplicate (QuaternionStamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static QuaternionStamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static QuaternionStamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static QuaternionStamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                QuaternionStamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (QuaternionStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (QuaternionStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (QuaternionStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const QuaternionStamped_& instance) = 0;

            protected:
                QuaternionStamped_DataReader () {};
                ~QuaternionStamped_DataReader () {};
            private:
                QuaternionStamped_DataReader (const QuaternionStamped_DataReader &);
                QuaternionStamped_DataReader & operator = (const QuaternionStamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs QuaternionStamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef QuaternionStamped_DataReaderView_ptr _ptr_type;
                typedef QuaternionStamped_DataReaderView_var _var_type;

                static QuaternionStamped_DataReaderView_ptr _duplicate (QuaternionStamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static QuaternionStamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static QuaternionStamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static QuaternionStamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                QuaternionStamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (QuaternionStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (QuaternionStamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (QuaternionStamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (QuaternionStamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const QuaternionStamped_& instance) = 0;

            protected:
                QuaternionStamped_DataReaderView () {};
                ~QuaternionStamped_DataReaderView () {};
            private:
                QuaternionStamped_DataReaderView (const QuaternionStamped_DataReaderView &);
                QuaternionStamped_DataReaderView & operator = (const QuaternionStamped_DataReaderView &);
            };
        }

    }

}

#endif
