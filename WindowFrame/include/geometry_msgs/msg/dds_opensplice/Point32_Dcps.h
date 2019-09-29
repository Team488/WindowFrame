#ifndef _H_6F687459009DC19C82231C22553242E8_Point32_DCPS_H_
#define _H_6F687459009DC19C82231C22553242E8_Point32_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Point32_.h"

#include "geometry_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace geometry_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Point32_TypeSupportInterface;

            typedef Point32_TypeSupportInterface * Point32_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Point32_TypeSupportInterface> Point32_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Point32_TypeSupportInterface> Point32_TypeSupportInterface_out;


            class Point32_DataWriter;

            typedef Point32_DataWriter * Point32_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Point32_DataWriter> Point32_DataWriter_var;
            typedef DDS_DCPSInterface_out < Point32_DataWriter> Point32_DataWriter_out;


            class Point32_DataReader;

            typedef Point32_DataReader * Point32_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Point32_DataReader> Point32_DataReader_var;
            typedef DDS_DCPSInterface_out < Point32_DataReader> Point32_DataReader_out;


            class Point32_DataReaderView;

            typedef Point32_DataReaderView * Point32_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Point32_DataReaderView> Point32_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Point32_DataReaderView> Point32_DataReaderView_out;

            struct Point32_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Point32_, struct Point32_Seq_uniq_> Point32_Seq;
            typedef DDS_DCPSSequence_var < Point32_Seq> Point32_Seq_var;
            typedef DDS_DCPSSequence_out < Point32_Seq> Point32_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Point32_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Point32_TypeSupportInterface_ptr _ptr_type;
                typedef Point32_TypeSupportInterface_var _var_type;

                static Point32_TypeSupportInterface_ptr _duplicate (Point32_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Point32_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Point32_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Point32_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Point32_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Point32_TypeSupportInterface () {};
                ~Point32_TypeSupportInterface () {};
            private:
                Point32_TypeSupportInterface (const Point32_TypeSupportInterface &);
                Point32_TypeSupportInterface & operator = (const Point32_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Point32_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Point32_DataWriter_ptr _ptr_type;
                typedef Point32_DataWriter_var _var_type;

                static Point32_DataWriter_ptr _duplicate (Point32_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Point32_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Point32_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Point32_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Point32_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Point32_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Point32_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Point32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Point32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Point32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Point32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Point32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Point32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Point32_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Point32_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Point32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Point32_& instance_data) = 0;

            protected:
                Point32_DataWriter () {};
                ~Point32_DataWriter () {};
            private:
                Point32_DataWriter (const Point32_DataWriter &);
                Point32_DataWriter & operator = (const Point32_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Point32_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Point32_DataReader_ptr _ptr_type;
                typedef Point32_DataReader_var _var_type;

                static Point32_DataReader_ptr _duplicate (Point32_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Point32_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Point32_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Point32_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Point32_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Point32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Point32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Point32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Point32_& instance) = 0;

            protected:
                Point32_DataReader () {};
                ~Point32_DataReader () {};
            private:
                Point32_DataReader (const Point32_DataReader &);
                Point32_DataReader & operator = (const Point32_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_geometry_msgs Point32_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Point32_DataReaderView_ptr _ptr_type;
                typedef Point32_DataReaderView_var _var_type;

                static Point32_DataReaderView_ptr _duplicate (Point32_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Point32_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Point32_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Point32_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Point32_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Point32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Point32_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Point32_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Point32_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Point32_& instance) = 0;

            protected:
                Point32_DataReaderView () {};
                ~Point32_DataReaderView () {};
            private:
                Point32_DataReaderView (const Point32_DataReaderView &);
                Point32_DataReaderView & operator = (const Point32_DataReaderView &);
            };
        }

    }

}

#endif
