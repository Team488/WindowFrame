#ifndef _H_AF1892A4237E82A96AFE77D84E225976_Polygon_DCPS_H_
#define _H_AF1892A4237E82A96AFE77D84E225976_Polygon_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Polygon_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Polygon_TypeSupportInterface;

            typedef Polygon_TypeSupportInterface * Polygon_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Polygon_TypeSupportInterface> Polygon_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Polygon_TypeSupportInterface> Polygon_TypeSupportInterface_out;


            class Polygon_DataWriter;

            typedef Polygon_DataWriter * Polygon_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Polygon_DataWriter> Polygon_DataWriter_var;
            typedef DDS_DCPSInterface_out < Polygon_DataWriter> Polygon_DataWriter_out;


            class Polygon_DataReader;

            typedef Polygon_DataReader * Polygon_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Polygon_DataReader> Polygon_DataReader_var;
            typedef DDS_DCPSInterface_out < Polygon_DataReader> Polygon_DataReader_out;


            class Polygon_DataReaderView;

            typedef Polygon_DataReaderView * Polygon_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Polygon_DataReaderView> Polygon_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Polygon_DataReaderView> Polygon_DataReaderView_out;

            struct Polygon_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Polygon_, struct Polygon_Seq_uniq_> Polygon_Seq;
            typedef DDS_DCPSSequence_var < Polygon_Seq> Polygon_Seq_var;
            typedef DDS_DCPSSequence_out < Polygon_Seq> Polygon_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Polygon_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Polygon_TypeSupportInterface_ptr _ptr_type;
                typedef Polygon_TypeSupportInterface_var _var_type;

                static Polygon_TypeSupportInterface_ptr _duplicate (Polygon_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Polygon_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Polygon_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Polygon_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Polygon_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Polygon_TypeSupportInterface () {};
                ~Polygon_TypeSupportInterface () {};
            private:
                Polygon_TypeSupportInterface (const Polygon_TypeSupportInterface &);
                Polygon_TypeSupportInterface & operator = (const Polygon_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Polygon_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Polygon_DataWriter_ptr _ptr_type;
                typedef Polygon_DataWriter_var _var_type;

                static Polygon_DataWriter_ptr _duplicate (Polygon_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Polygon_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Polygon_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Polygon_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Polygon_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Polygon_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Polygon_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Polygon_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Polygon_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Polygon_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Polygon_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Polygon_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Polygon_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Polygon_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Polygon_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Polygon_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Polygon_& instance_data) = 0;

            protected:
                Polygon_DataWriter () {};
                ~Polygon_DataWriter () {};
            private:
                Polygon_DataWriter (const Polygon_DataWriter &);
                Polygon_DataWriter & operator = (const Polygon_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Polygon_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Polygon_DataReader_ptr _ptr_type;
                typedef Polygon_DataReader_var _var_type;

                static Polygon_DataReader_ptr _duplicate (Polygon_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Polygon_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Polygon_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Polygon_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Polygon_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Polygon_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Polygon_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Polygon_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Polygon_& instance) = 0;

            protected:
                Polygon_DataReader () {};
                ~Polygon_DataReader () {};
            private:
                Polygon_DataReader (const Polygon_DataReader &);
                Polygon_DataReader & operator = (const Polygon_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Polygon_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Polygon_DataReaderView_ptr _ptr_type;
                typedef Polygon_DataReaderView_var _var_type;

                static Polygon_DataReaderView_ptr _duplicate (Polygon_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Polygon_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Polygon_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Polygon_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Polygon_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Polygon_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Polygon_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Polygon_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Polygon_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Polygon_& instance) = 0;

            protected:
                Polygon_DataReaderView () {};
                ~Polygon_DataReaderView () {};
            private:
                Polygon_DataReaderView (const Polygon_DataReaderView &);
                Polygon_DataReaderView & operator = (const Polygon_DataReaderView &);
            };
        }

    }

}

#endif
