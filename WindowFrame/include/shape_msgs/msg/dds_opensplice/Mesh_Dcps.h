#ifndef _H_2A46B60BEAEE656CBC27AFBD8C898621_Mesh_DCPS_H_
#define _H_2A46B60BEAEE656CBC27AFBD8C898621_Mesh_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Mesh_.h"

#include "shape_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace shape_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Mesh_TypeSupportInterface;

            typedef Mesh_TypeSupportInterface * Mesh_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Mesh_TypeSupportInterface> Mesh_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Mesh_TypeSupportInterface> Mesh_TypeSupportInterface_out;


            class Mesh_DataWriter;

            typedef Mesh_DataWriter * Mesh_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Mesh_DataWriter> Mesh_DataWriter_var;
            typedef DDS_DCPSInterface_out < Mesh_DataWriter> Mesh_DataWriter_out;


            class Mesh_DataReader;

            typedef Mesh_DataReader * Mesh_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Mesh_DataReader> Mesh_DataReader_var;
            typedef DDS_DCPSInterface_out < Mesh_DataReader> Mesh_DataReader_out;


            class Mesh_DataReaderView;

            typedef Mesh_DataReaderView * Mesh_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Mesh_DataReaderView> Mesh_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Mesh_DataReaderView> Mesh_DataReaderView_out;

            struct Mesh_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Mesh_, struct Mesh_Seq_uniq_> Mesh_Seq;
            typedef DDS_DCPSSequence_var < Mesh_Seq> Mesh_Seq_var;
            typedef DDS_DCPSSequence_out < Mesh_Seq> Mesh_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Mesh_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Mesh_TypeSupportInterface_ptr _ptr_type;
                typedef Mesh_TypeSupportInterface_var _var_type;

                static Mesh_TypeSupportInterface_ptr _duplicate (Mesh_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Mesh_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Mesh_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Mesh_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Mesh_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Mesh_TypeSupportInterface () {};
                ~Mesh_TypeSupportInterface () {};
            private:
                Mesh_TypeSupportInterface (const Mesh_TypeSupportInterface &);
                Mesh_TypeSupportInterface & operator = (const Mesh_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Mesh_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Mesh_DataWriter_ptr _ptr_type;
                typedef Mesh_DataWriter_var _var_type;

                static Mesh_DataWriter_ptr _duplicate (Mesh_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Mesh_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Mesh_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Mesh_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Mesh_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Mesh_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Mesh_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Mesh_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Mesh_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Mesh_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Mesh_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Mesh_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Mesh_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Mesh_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Mesh_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Mesh_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Mesh_& instance_data) = 0;

            protected:
                Mesh_DataWriter () {};
                ~Mesh_DataWriter () {};
            private:
                Mesh_DataWriter (const Mesh_DataWriter &);
                Mesh_DataWriter & operator = (const Mesh_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Mesh_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Mesh_DataReader_ptr _ptr_type;
                typedef Mesh_DataReader_var _var_type;

                static Mesh_DataReader_ptr _duplicate (Mesh_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Mesh_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Mesh_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Mesh_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Mesh_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Mesh_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Mesh_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Mesh_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Mesh_& instance) = 0;

            protected:
                Mesh_DataReader () {};
                ~Mesh_DataReader () {};
            private:
                Mesh_DataReader (const Mesh_DataReader &);
                Mesh_DataReader & operator = (const Mesh_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_shape_msgs Mesh_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Mesh_DataReaderView_ptr _ptr_type;
                typedef Mesh_DataReaderView_var _var_type;

                static Mesh_DataReaderView_ptr _duplicate (Mesh_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Mesh_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Mesh_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Mesh_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Mesh_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Mesh_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Mesh_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Mesh_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Mesh_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Mesh_& instance) = 0;

            protected:
                Mesh_DataReaderView () {};
                ~Mesh_DataReaderView () {};
            private:
                Mesh_DataReaderView (const Mesh_DataReaderView &);
                Mesh_DataReaderView & operator = (const Mesh_DataReaderView &);
            };
        }

    }

}

#endif
