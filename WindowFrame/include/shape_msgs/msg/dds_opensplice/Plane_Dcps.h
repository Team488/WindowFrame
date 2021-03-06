#ifndef _H_7361E7116D72A8C795622D653FDA6FFE_Plane_DCPS_H_
#define _H_7361E7116D72A8C795622D653FDA6FFE_Plane_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Plane_.h"

#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Plane_TypeSupportInterface;

            typedef Plane_TypeSupportInterface * Plane_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Plane_TypeSupportInterface> Plane_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Plane_TypeSupportInterface> Plane_TypeSupportInterface_out;


            class Plane_DataWriter;

            typedef Plane_DataWriter * Plane_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Plane_DataWriter> Plane_DataWriter_var;
            typedef DDS_DCPSInterface_out < Plane_DataWriter> Plane_DataWriter_out;


            class Plane_DataReader;

            typedef Plane_DataReader * Plane_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Plane_DataReader> Plane_DataReader_var;
            typedef DDS_DCPSInterface_out < Plane_DataReader> Plane_DataReader_out;


            class Plane_DataReaderView;

            typedef Plane_DataReaderView * Plane_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Plane_DataReaderView> Plane_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Plane_DataReaderView> Plane_DataReaderView_out;

            struct Plane_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Plane_, struct Plane_Seq_uniq_> Plane_Seq;
            typedef DDS_DCPSSequence_var < Plane_Seq> Plane_Seq_var;
            typedef DDS_DCPSSequence_out < Plane_Seq> Plane_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Plane_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Plane_TypeSupportInterface_ptr _ptr_type;
                typedef Plane_TypeSupportInterface_var _var_type;

                static Plane_TypeSupportInterface_ptr _duplicate (Plane_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Plane_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Plane_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Plane_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Plane_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Plane_TypeSupportInterface () {};
                ~Plane_TypeSupportInterface () {};
            private:
                Plane_TypeSupportInterface (const Plane_TypeSupportInterface &);
                Plane_TypeSupportInterface & operator = (const Plane_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Plane_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Plane_DataWriter_ptr _ptr_type;
                typedef Plane_DataWriter_var _var_type;

                static Plane_DataWriter_ptr _duplicate (Plane_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Plane_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Plane_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Plane_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Plane_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Plane_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Plane_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Plane_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Plane_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Plane_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Plane_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Plane_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Plane_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Plane_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Plane_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Plane_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Plane_& instance_data) = 0;

            protected:
                Plane_DataWriter () {};
                ~Plane_DataWriter () {};
            private:
                Plane_DataWriter (const Plane_DataWriter &);
                Plane_DataWriter & operator = (const Plane_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Plane_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Plane_DataReader_ptr _ptr_type;
                typedef Plane_DataReader_var _var_type;

                static Plane_DataReader_ptr _duplicate (Plane_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Plane_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Plane_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Plane_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Plane_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Plane_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Plane_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Plane_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Plane_& instance) = 0;

            protected:
                Plane_DataReader () {};
                ~Plane_DataReader () {};
            private:
                Plane_DataReader (const Plane_DataReader &);
                Plane_DataReader & operator = (const Plane_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Plane_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Plane_DataReaderView_ptr _ptr_type;
                typedef Plane_DataReaderView_var _var_type;

                static Plane_DataReaderView_ptr _duplicate (Plane_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Plane_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Plane_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Plane_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Plane_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Plane_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Plane_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Plane_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Plane_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Plane_& instance) = 0;

            protected:
                Plane_DataReaderView () {};
                ~Plane_DataReaderView () {};
            private:
                Plane_DataReaderView (const Plane_DataReaderView &);
                Plane_DataReaderView & operator = (const Plane_DataReaderView &);
            };
        }

    }

}

#endif
