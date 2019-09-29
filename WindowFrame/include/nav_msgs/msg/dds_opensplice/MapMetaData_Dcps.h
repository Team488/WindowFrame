#ifndef _H_36A79E197C398948CC556E6E2BE74298_MapMetaData_DCPS_H_
#define _H_36A79E197C398948CC556E6E2BE74298_MapMetaData_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "MapMetaData_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class MapMetaData_TypeSupportInterface;

            typedef MapMetaData_TypeSupportInterface * MapMetaData_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < MapMetaData_TypeSupportInterface> MapMetaData_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < MapMetaData_TypeSupportInterface> MapMetaData_TypeSupportInterface_out;


            class MapMetaData_DataWriter;

            typedef MapMetaData_DataWriter * MapMetaData_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < MapMetaData_DataWriter> MapMetaData_DataWriter_var;
            typedef DDS_DCPSInterface_out < MapMetaData_DataWriter> MapMetaData_DataWriter_out;


            class MapMetaData_DataReader;

            typedef MapMetaData_DataReader * MapMetaData_DataReader_ptr;
            typedef DDS_DCPSInterface_var < MapMetaData_DataReader> MapMetaData_DataReader_var;
            typedef DDS_DCPSInterface_out < MapMetaData_DataReader> MapMetaData_DataReader_out;


            class MapMetaData_DataReaderView;

            typedef MapMetaData_DataReaderView * MapMetaData_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < MapMetaData_DataReaderView> MapMetaData_DataReaderView_var;
            typedef DDS_DCPSInterface_out < MapMetaData_DataReaderView> MapMetaData_DataReaderView_out;

            struct MapMetaData_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < MapMetaData_, struct MapMetaData_Seq_uniq_> MapMetaData_Seq;
            typedef DDS_DCPSSequence_var < MapMetaData_Seq> MapMetaData_Seq_var;
            typedef DDS_DCPSSequence_out < MapMetaData_Seq> MapMetaData_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs MapMetaData_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef MapMetaData_TypeSupportInterface_ptr _ptr_type;
                typedef MapMetaData_TypeSupportInterface_var _var_type;

                static MapMetaData_TypeSupportInterface_ptr _duplicate (MapMetaData_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MapMetaData_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static MapMetaData_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MapMetaData_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                MapMetaData_TypeSupportInterface_ptr _this () { return this; }


            protected:
                MapMetaData_TypeSupportInterface () {};
                ~MapMetaData_TypeSupportInterface () {};
            private:
                MapMetaData_TypeSupportInterface (const MapMetaData_TypeSupportInterface &);
                MapMetaData_TypeSupportInterface & operator = (const MapMetaData_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs MapMetaData_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef MapMetaData_DataWriter_ptr _ptr_type;
                typedef MapMetaData_DataWriter_var _var_type;

                static MapMetaData_DataWriter_ptr _duplicate (MapMetaData_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MapMetaData_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static MapMetaData_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MapMetaData_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                MapMetaData_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const MapMetaData_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const MapMetaData_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const MapMetaData_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const MapMetaData_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const MapMetaData_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const MapMetaData_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const MapMetaData_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const MapMetaData_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const MapMetaData_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const MapMetaData_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (MapMetaData_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MapMetaData_& instance_data) = 0;

            protected:
                MapMetaData_DataWriter () {};
                ~MapMetaData_DataWriter () {};
            private:
                MapMetaData_DataWriter (const MapMetaData_DataWriter &);
                MapMetaData_DataWriter & operator = (const MapMetaData_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs MapMetaData_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef MapMetaData_DataReader_ptr _ptr_type;
                typedef MapMetaData_DataReader_var _var_type;

                static MapMetaData_DataReader_ptr _duplicate (MapMetaData_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MapMetaData_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static MapMetaData_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MapMetaData_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                MapMetaData_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MapMetaData_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MapMetaData_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MapMetaData_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MapMetaData_& instance) = 0;

            protected:
                MapMetaData_DataReader () {};
                ~MapMetaData_DataReader () {};
            private:
                MapMetaData_DataReader (const MapMetaData_DataReader &);
                MapMetaData_DataReader & operator = (const MapMetaData_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs MapMetaData_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef MapMetaData_DataReaderView_ptr _ptr_type;
                typedef MapMetaData_DataReaderView_var _var_type;

                static MapMetaData_DataReaderView_ptr _duplicate (MapMetaData_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static MapMetaData_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static MapMetaData_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static MapMetaData_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                MapMetaData_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (MapMetaData_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (MapMetaData_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (MapMetaData_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (MapMetaData_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const MapMetaData_& instance) = 0;

            protected:
                MapMetaData_DataReaderView () {};
                ~MapMetaData_DataReaderView () {};
            private:
                MapMetaData_DataReaderView (const MapMetaData_DataReaderView &);
                MapMetaData_DataReaderView & operator = (const MapMetaData_DataReaderView &);
            };
        }

    }

}

#endif
