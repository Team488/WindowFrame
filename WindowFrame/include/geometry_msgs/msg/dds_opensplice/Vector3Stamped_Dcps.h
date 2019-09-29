#ifndef _H_60A2B38F4647F87B360713BB0CC4CA7C_Vector3Stamped_DCPS_H_
#define _H_60A2B38F4647F87B360713BB0CC4CA7C_Vector3Stamped_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Vector3Stamped_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Vector3Stamped_TypeSupportInterface;

            typedef Vector3Stamped_TypeSupportInterface * Vector3Stamped_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Vector3Stamped_TypeSupportInterface> Vector3Stamped_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Vector3Stamped_TypeSupportInterface> Vector3Stamped_TypeSupportInterface_out;


            class Vector3Stamped_DataWriter;

            typedef Vector3Stamped_DataWriter * Vector3Stamped_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Vector3Stamped_DataWriter> Vector3Stamped_DataWriter_var;
            typedef DDS_DCPSInterface_out < Vector3Stamped_DataWriter> Vector3Stamped_DataWriter_out;


            class Vector3Stamped_DataReader;

            typedef Vector3Stamped_DataReader * Vector3Stamped_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Vector3Stamped_DataReader> Vector3Stamped_DataReader_var;
            typedef DDS_DCPSInterface_out < Vector3Stamped_DataReader> Vector3Stamped_DataReader_out;


            class Vector3Stamped_DataReaderView;

            typedef Vector3Stamped_DataReaderView * Vector3Stamped_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Vector3Stamped_DataReaderView> Vector3Stamped_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Vector3Stamped_DataReaderView> Vector3Stamped_DataReaderView_out;

            struct Vector3Stamped_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Vector3Stamped_, struct Vector3Stamped_Seq_uniq_> Vector3Stamped_Seq;
            typedef DDS_DCPSSequence_var < Vector3Stamped_Seq> Vector3Stamped_Seq_var;
            typedef DDS_DCPSSequence_out < Vector3Stamped_Seq> Vector3Stamped_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3Stamped_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Vector3Stamped_TypeSupportInterface_ptr _ptr_type;
                typedef Vector3Stamped_TypeSupportInterface_var _var_type;

                static Vector3Stamped_TypeSupportInterface_ptr _duplicate (Vector3Stamped_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3Stamped_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Vector3Stamped_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3Stamped_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3Stamped_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Vector3Stamped_TypeSupportInterface () {};
                ~Vector3Stamped_TypeSupportInterface () {};
            private:
                Vector3Stamped_TypeSupportInterface (const Vector3Stamped_TypeSupportInterface &);
                Vector3Stamped_TypeSupportInterface & operator = (const Vector3Stamped_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3Stamped_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Vector3Stamped_DataWriter_ptr _ptr_type;
                typedef Vector3Stamped_DataWriter_var _var_type;

                static Vector3Stamped_DataWriter_ptr _duplicate (Vector3Stamped_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3Stamped_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Vector3Stamped_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3Stamped_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3Stamped_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Vector3Stamped_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Vector3Stamped_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Vector3Stamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Vector3Stamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Vector3Stamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Vector3Stamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Vector3Stamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Vector3Stamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Vector3Stamped_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Vector3Stamped_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Vector3Stamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Vector3Stamped_& instance_data) = 0;

            protected:
                Vector3Stamped_DataWriter () {};
                ~Vector3Stamped_DataWriter () {};
            private:
                Vector3Stamped_DataWriter (const Vector3Stamped_DataWriter &);
                Vector3Stamped_DataWriter & operator = (const Vector3Stamped_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3Stamped_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Vector3Stamped_DataReader_ptr _ptr_type;
                typedef Vector3Stamped_DataReader_var _var_type;

                static Vector3Stamped_DataReader_ptr _duplicate (Vector3Stamped_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3Stamped_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Vector3Stamped_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3Stamped_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3Stamped_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Vector3Stamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Vector3Stamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Vector3Stamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Vector3Stamped_& instance) = 0;

            protected:
                Vector3Stamped_DataReader () {};
                ~Vector3Stamped_DataReader () {};
            private:
                Vector3Stamped_DataReader (const Vector3Stamped_DataReader &);
                Vector3Stamped_DataReader & operator = (const Vector3Stamped_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Vector3Stamped_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Vector3Stamped_DataReaderView_ptr _ptr_type;
                typedef Vector3Stamped_DataReaderView_var _var_type;

                static Vector3Stamped_DataReaderView_ptr _duplicate (Vector3Stamped_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Vector3Stamped_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Vector3Stamped_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Vector3Stamped_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Vector3Stamped_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Vector3Stamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Vector3Stamped_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Vector3Stamped_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Vector3Stamped_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Vector3Stamped_& instance) = 0;

            protected:
                Vector3Stamped_DataReaderView () {};
                ~Vector3Stamped_DataReaderView () {};
            private:
                Vector3Stamped_DataReaderView (const Vector3Stamped_DataReaderView &);
                Vector3Stamped_DataReaderView & operator = (const Vector3Stamped_DataReaderView &);
            };
        }

    }

}

#endif
