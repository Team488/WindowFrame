#ifndef _H_656FFE9946DFEA7CAE69D18F551C9053_GridCells_DCPS_H_
#define _H_656FFE9946DFEA7CAE69D18F551C9053_GridCells_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "GridCells_.h"

#include "nav_msgs/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"
namespace nav_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class GridCells_TypeSupportInterface;

            typedef GridCells_TypeSupportInterface * GridCells_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < GridCells_TypeSupportInterface> GridCells_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < GridCells_TypeSupportInterface> GridCells_TypeSupportInterface_out;


            class GridCells_DataWriter;

            typedef GridCells_DataWriter * GridCells_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < GridCells_DataWriter> GridCells_DataWriter_var;
            typedef DDS_DCPSInterface_out < GridCells_DataWriter> GridCells_DataWriter_out;


            class GridCells_DataReader;

            typedef GridCells_DataReader * GridCells_DataReader_ptr;
            typedef DDS_DCPSInterface_var < GridCells_DataReader> GridCells_DataReader_var;
            typedef DDS_DCPSInterface_out < GridCells_DataReader> GridCells_DataReader_out;


            class GridCells_DataReaderView;

            typedef GridCells_DataReaderView * GridCells_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < GridCells_DataReaderView> GridCells_DataReaderView_var;
            typedef DDS_DCPSInterface_out < GridCells_DataReaderView> GridCells_DataReaderView_out;

            struct GridCells_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < GridCells_, struct GridCells_Seq_uniq_> GridCells_Seq;
            typedef DDS_DCPSSequence_var < GridCells_Seq> GridCells_Seq_var;
            typedef DDS_DCPSSequence_out < GridCells_Seq> GridCells_Seq_out;

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GridCells_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef GridCells_TypeSupportInterface_ptr _ptr_type;
                typedef GridCells_TypeSupportInterface_var _var_type;

                static GridCells_TypeSupportInterface_ptr _duplicate (GridCells_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GridCells_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static GridCells_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GridCells_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                GridCells_TypeSupportInterface_ptr _this () { return this; }


            protected:
                GridCells_TypeSupportInterface () {};
                ~GridCells_TypeSupportInterface () {};
            private:
                GridCells_TypeSupportInterface (const GridCells_TypeSupportInterface &);
                GridCells_TypeSupportInterface & operator = (const GridCells_TypeSupportInterface &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GridCells_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef GridCells_DataWriter_ptr _ptr_type;
                typedef GridCells_DataWriter_var _var_type;

                static GridCells_DataWriter_ptr _duplicate (GridCells_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GridCells_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static GridCells_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GridCells_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                GridCells_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const GridCells_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const GridCells_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const GridCells_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const GridCells_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const GridCells_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const GridCells_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const GridCells_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const GridCells_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const GridCells_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const GridCells_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (GridCells_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GridCells_& instance_data) = 0;

            protected:
                GridCells_DataWriter () {};
                ~GridCells_DataWriter () {};
            private:
                GridCells_DataWriter (const GridCells_DataWriter &);
                GridCells_DataWriter & operator = (const GridCells_DataWriter &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GridCells_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef GridCells_DataReader_ptr _ptr_type;
                typedef GridCells_DataReader_var _var_type;

                static GridCells_DataReader_ptr _duplicate (GridCells_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GridCells_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static GridCells_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GridCells_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                GridCells_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GridCells_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GridCells_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GridCells_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GridCells_& instance) = 0;

            protected:
                GridCells_DataReader () {};
                ~GridCells_DataReader () {};
            private:
                GridCells_DataReader (const GridCells_DataReader &);
                GridCells_DataReader & operator = (const GridCells_DataReader &);
            };

            class ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_nav_msgs GridCells_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef GridCells_DataReaderView_ptr _ptr_type;
                typedef GridCells_DataReaderView_var _var_type;

                static GridCells_DataReaderView_ptr _duplicate (GridCells_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static GridCells_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static GridCells_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static GridCells_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                GridCells_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (GridCells_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (GridCells_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (GridCells_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (GridCells_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const GridCells_& instance) = 0;

            protected:
                GridCells_DataReaderView () {};
                ~GridCells_DataReaderView () {};
            private:
                GridCells_DataReaderView (const GridCells_DataReaderView &);
                GridCells_DataReaderView & operator = (const GridCells_DataReaderView &);
            };
        }

    }

}

#endif
