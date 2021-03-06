#ifndef _H_6966415037E76325F3CB8514F9D3A909_Vector3_DCPS_H_
#define _H_6966415037E76325F3CB8514F9D3A909_Vector3_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Vector3_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Vector3_TypeSupportInterface;

            typedef Vector3_TypeSupportInterface * Vector3_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Vector3_TypeSupportInterface> Vector3_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Vector3_TypeSupportInterface> Vector3_TypeSupportInterface_out;


            class Vector3_DataWriter;

            typedef Vector3_DataWriter * Vector3_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Vector3_DataWriter> Vector3_DataWriter_var;
            typedef DDS_DCPSInterface_out < Vector3_DataWriter> Vector3_DataWriter_out;


            class Vector3_DataReader;

            typedef Vector3_DataReader * Vector3_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Vector3_DataReader> Vector3_DataReader_var;
            typedef DDS_DCPSInterface_out < Vector3_DataReader> Vector3_DataReader_out;


            class Vector3_DataReaderView;

            typedef Vector3_DataReaderView * Vector3_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Vector3_DataReaderView> Vector3_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Vector3_DataReaderView> Vector3_DataReaderView_out;

            struct Vector3_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Vector3_, struct Vector3_Seq_uniq_> Vector3_Seq;
            typedef DDS_DCPSSequence_var < Vector3_Seq> Vector3_Seq_var;
            typedef DDS_DCPSSequence_out < Vector3_Seq> Vector3_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Vector3_TypeSupportInterface_ptr _ptr_type;
                typedef Vector3_TypeSupportInterface_var _var_type;

                static Vector3_TypeSupportInterface_ptr _duplicate (Vector3_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Vector3_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Vector3_TypeSupportInterface () {};
                ~Vector3_TypeSupportInterface () {};
            private:
                Vector3_TypeSupportInterface (const Vector3_TypeSupportInterface &);
                Vector3_TypeSupportInterface & operator = (const Vector3_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Vector3_DataWriter_ptr _ptr_type;
                typedef Vector3_DataWriter_var _var_type;

                static Vector3_DataWriter_ptr _duplicate (Vector3_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Vector3_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Vector3_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Vector3_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Vector3_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Vector3_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Vector3_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Vector3_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Vector3_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Vector3_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Vector3_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Vector3_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Vector3_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Vector3_& instance_data) = 0;

            protected:
                Vector3_DataWriter () {};
                ~Vector3_DataWriter () {};
            private:
                Vector3_DataWriter (const Vector3_DataWriter &);
                Vector3_DataWriter & operator = (const Vector3_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Vector3_DataReader_ptr _ptr_type;
                typedef Vector3_DataReader_var _var_type;

                static Vector3_DataReader_ptr _duplicate (Vector3_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Vector3_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Vector3_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Vector3_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Vector3_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Vector3_& instance) = 0;

            protected:
                Vector3_DataReader () {};
                ~Vector3_DataReader () {};
            private:
                Vector3_DataReader (const Vector3_DataReader &);
                Vector3_DataReader & operator = (const Vector3_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Vector3_DataReaderView_ptr _ptr_type;
                typedef Vector3_DataReaderView_var _var_type;

                static Vector3_DataReaderView_ptr _duplicate (Vector3_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Vector3_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Vector3_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Vector3_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Vector3_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Vector3_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Vector3_& instance) = 0;

            protected:
                Vector3_DataReaderView () {};
                ~Vector3_DataReaderView () {};
            private:
                Vector3_DataReaderView (const Vector3_DataReaderView &);
                Vector3_DataReaderView & operator = (const Vector3_DataReaderView &);
            };
        }

    }

}

#endif
