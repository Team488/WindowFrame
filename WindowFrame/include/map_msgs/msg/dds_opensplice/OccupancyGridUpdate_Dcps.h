#ifndef _H_4E92FCAD470BCD7962E54CB2963348EE_OccupancyGridUpdate_DCPS_H_
#define _H_4E92FCAD470BCD7962E54CB2963348EE_OccupancyGridUpdate_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "OccupancyGridUpdate_.h"

#include "map_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace map_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class OccupancyGridUpdate_TypeSupportInterface;

            typedef OccupancyGridUpdate_TypeSupportInterface * OccupancyGridUpdate_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGridUpdate_TypeSupportInterface> OccupancyGridUpdate_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < OccupancyGridUpdate_TypeSupportInterface> OccupancyGridUpdate_TypeSupportInterface_out;


            class OccupancyGridUpdate_DataWriter;

            typedef OccupancyGridUpdate_DataWriter * OccupancyGridUpdate_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGridUpdate_DataWriter> OccupancyGridUpdate_DataWriter_var;
            typedef DDS_DCPSInterface_out < OccupancyGridUpdate_DataWriter> OccupancyGridUpdate_DataWriter_out;


            class OccupancyGridUpdate_DataReader;

            typedef OccupancyGridUpdate_DataReader * OccupancyGridUpdate_DataReader_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGridUpdate_DataReader> OccupancyGridUpdate_DataReader_var;
            typedef DDS_DCPSInterface_out < OccupancyGridUpdate_DataReader> OccupancyGridUpdate_DataReader_out;


            class OccupancyGridUpdate_DataReaderView;

            typedef OccupancyGridUpdate_DataReaderView * OccupancyGridUpdate_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < OccupancyGridUpdate_DataReaderView> OccupancyGridUpdate_DataReaderView_var;
            typedef DDS_DCPSInterface_out < OccupancyGridUpdate_DataReaderView> OccupancyGridUpdate_DataReaderView_out;

            struct OccupancyGridUpdate_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < OccupancyGridUpdate_, struct OccupancyGridUpdate_Seq_uniq_> OccupancyGridUpdate_Seq;
            typedef DDS_DCPSSequence_var < OccupancyGridUpdate_Seq> OccupancyGridUpdate_Seq_var;
            typedef DDS_DCPSSequence_out < OccupancyGridUpdate_Seq> OccupancyGridUpdate_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs OccupancyGridUpdate_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef OccupancyGridUpdate_TypeSupportInterface_ptr _ptr_type;
                typedef OccupancyGridUpdate_TypeSupportInterface_var _var_type;

                static OccupancyGridUpdate_TypeSupportInterface_ptr _duplicate (OccupancyGridUpdate_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGridUpdate_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGridUpdate_TypeSupportInterface_ptr _this () { return this; }


            protected:
                OccupancyGridUpdate_TypeSupportInterface () {};
                ~OccupancyGridUpdate_TypeSupportInterface () {};
            private:
                OccupancyGridUpdate_TypeSupportInterface (const OccupancyGridUpdate_TypeSupportInterface &);
                OccupancyGridUpdate_TypeSupportInterface & operator = (const OccupancyGridUpdate_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs OccupancyGridUpdate_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef OccupancyGridUpdate_DataWriter_ptr _ptr_type;
                typedef OccupancyGridUpdate_DataWriter_var _var_type;

                static OccupancyGridUpdate_DataWriter_ptr _duplicate (OccupancyGridUpdate_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGridUpdate_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGridUpdate_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const OccupancyGridUpdate_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const OccupancyGridUpdate_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const OccupancyGridUpdate_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (OccupancyGridUpdate_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OccupancyGridUpdate_& instance_data) = 0;

            protected:
                OccupancyGridUpdate_DataWriter () {};
                ~OccupancyGridUpdate_DataWriter () {};
            private:
                OccupancyGridUpdate_DataWriter (const OccupancyGridUpdate_DataWriter &);
                OccupancyGridUpdate_DataWriter & operator = (const OccupancyGridUpdate_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs OccupancyGridUpdate_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef OccupancyGridUpdate_DataReader_ptr _ptr_type;
                typedef OccupancyGridUpdate_DataReader_var _var_type;

                static OccupancyGridUpdate_DataReader_ptr _duplicate (OccupancyGridUpdate_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGridUpdate_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGridUpdate_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OccupancyGridUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OccupancyGridUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OccupancyGridUpdate_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OccupancyGridUpdate_& instance) = 0;

            protected:
                OccupancyGridUpdate_DataReader () {};
                ~OccupancyGridUpdate_DataReader () {};
            private:
                OccupancyGridUpdate_DataReader (const OccupancyGridUpdate_DataReader &);
                OccupancyGridUpdate_DataReader & operator = (const OccupancyGridUpdate_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_map_msgs OccupancyGridUpdate_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef OccupancyGridUpdate_DataReaderView_ptr _ptr_type;
                typedef OccupancyGridUpdate_DataReaderView_var _var_type;

                static OccupancyGridUpdate_DataReaderView_ptr _duplicate (OccupancyGridUpdate_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static OccupancyGridUpdate_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static OccupancyGridUpdate_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                OccupancyGridUpdate_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (OccupancyGridUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (OccupancyGridUpdate_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (OccupancyGridUpdate_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (OccupancyGridUpdate_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const OccupancyGridUpdate_& instance) = 0;

            protected:
                OccupancyGridUpdate_DataReaderView () {};
                ~OccupancyGridUpdate_DataReaderView () {};
            private:
                OccupancyGridUpdate_DataReaderView (const OccupancyGridUpdate_DataReaderView &);
                OccupancyGridUpdate_DataReaderView & operator = (const OccupancyGridUpdate_DataReaderView &);
            };
        }

    }

}

#endif
