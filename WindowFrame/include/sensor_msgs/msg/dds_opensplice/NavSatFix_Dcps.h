#ifndef _H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix_DCPS_H_
#define _H_AAA8F2A95168490F84E4BD3EA787BC52_NavSatFix_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "NavSatFix_.h"

#include "sensor_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace sensor_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class NavSatFix_TypeSupportInterface;

            typedef NavSatFix_TypeSupportInterface * NavSatFix_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < NavSatFix_TypeSupportInterface> NavSatFix_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < NavSatFix_TypeSupportInterface> NavSatFix_TypeSupportInterface_out;


            class NavSatFix_DataWriter;

            typedef NavSatFix_DataWriter * NavSatFix_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < NavSatFix_DataWriter> NavSatFix_DataWriter_var;
            typedef DDS_DCPSInterface_out < NavSatFix_DataWriter> NavSatFix_DataWriter_out;


            class NavSatFix_DataReader;

            typedef NavSatFix_DataReader * NavSatFix_DataReader_ptr;
            typedef DDS_DCPSInterface_var < NavSatFix_DataReader> NavSatFix_DataReader_var;
            typedef DDS_DCPSInterface_out < NavSatFix_DataReader> NavSatFix_DataReader_out;


            class NavSatFix_DataReaderView;

            typedef NavSatFix_DataReaderView * NavSatFix_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < NavSatFix_DataReaderView> NavSatFix_DataReaderView_var;
            typedef DDS_DCPSInterface_out < NavSatFix_DataReaderView> NavSatFix_DataReaderView_out;

            struct NavSatFix_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < NavSatFix_, struct NavSatFix_Seq_uniq_> NavSatFix_Seq;
            typedef DDS_DCPSSequence_var < NavSatFix_Seq> NavSatFix_Seq_var;
            typedef DDS_DCPSSequence_out < NavSatFix_Seq> NavSatFix_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatFix_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef NavSatFix_TypeSupportInterface_ptr _ptr_type;
                typedef NavSatFix_TypeSupportInterface_var _var_type;

                static NavSatFix_TypeSupportInterface_ptr _duplicate (NavSatFix_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatFix_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static NavSatFix_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatFix_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatFix_TypeSupportInterface_ptr _this () { return this; }


            protected:
                NavSatFix_TypeSupportInterface () {};
                ~NavSatFix_TypeSupportInterface () {};
            private:
                NavSatFix_TypeSupportInterface (const NavSatFix_TypeSupportInterface &);
                NavSatFix_TypeSupportInterface & operator = (const NavSatFix_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatFix_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef NavSatFix_DataWriter_ptr _ptr_type;
                typedef NavSatFix_DataWriter_var _var_type;

                static NavSatFix_DataWriter_ptr _duplicate (NavSatFix_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatFix_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static NavSatFix_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatFix_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatFix_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const NavSatFix_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const NavSatFix_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const NavSatFix_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const NavSatFix_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const NavSatFix_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const NavSatFix_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const NavSatFix_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const NavSatFix_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const NavSatFix_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const NavSatFix_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (NavSatFix_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NavSatFix_& instance_data) = 0;

            protected:
                NavSatFix_DataWriter () {};
                ~NavSatFix_DataWriter () {};
            private:
                NavSatFix_DataWriter (const NavSatFix_DataWriter &);
                NavSatFix_DataWriter & operator = (const NavSatFix_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatFix_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef NavSatFix_DataReader_ptr _ptr_type;
                typedef NavSatFix_DataReader_var _var_type;

                static NavSatFix_DataReader_ptr _duplicate (NavSatFix_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatFix_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static NavSatFix_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatFix_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatFix_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NavSatFix_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NavSatFix_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NavSatFix_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NavSatFix_& instance) = 0;

            protected:
                NavSatFix_DataReader () {};
                ~NavSatFix_DataReader () {};
            private:
                NavSatFix_DataReader (const NavSatFix_DataReader &);
                NavSatFix_DataReader & operator = (const NavSatFix_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_sensor_msgs NavSatFix_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef NavSatFix_DataReaderView_ptr _ptr_type;
                typedef NavSatFix_DataReaderView_var _var_type;

                static NavSatFix_DataReaderView_ptr _duplicate (NavSatFix_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static NavSatFix_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static NavSatFix_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static NavSatFix_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                NavSatFix_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (NavSatFix_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (NavSatFix_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (NavSatFix_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (NavSatFix_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const NavSatFix_& instance) = 0;

            protected:
                NavSatFix_DataReaderView () {};
                ~NavSatFix_DataReaderView () {};
            private:
                NavSatFix_DataReaderView (const NavSatFix_DataReaderView &);
                NavSatFix_DataReaderView & operator = (const NavSatFix_DataReaderView &);
            };
        }

    }

}

#endif
