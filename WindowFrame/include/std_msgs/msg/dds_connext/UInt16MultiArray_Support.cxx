
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt16MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "UInt16MultiArray_Support.h"
#include "UInt16MultiArray_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'UInt16MultiArray_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   UInt16MultiArray_TYPENAME

            /* Defines */
            #define TDataWriter UInt16MultiArray_DataWriter
            #define TData       std_msgs::msg::dds_::UInt16MultiArray_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   UInt16MultiArray_TYPENAME

            /* Defines */
            #define TDataReader UInt16MultiArray_DataReader
            #define TDataSeq    UInt16MultiArray_Seq
            #define TData       std_msgs::msg::dds_::UInt16MultiArray_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    UInt16MultiArray_TYPENAME
            #define TPlugin_new  std_msgs::msg::dds_::UInt16MultiArray_Plugin_new
            #define TPlugin_delete  std_msgs::msg::dds_::UInt16MultiArray_Plugin_delete

            /* Defines */
            #define TTypeSupport UInt16MultiArray_TypeSupport
            #define TData        std_msgs::msg::dds_::UInt16MultiArray_
            #define TDataReader  UInt16MultiArray_DataReader
            #define TDataWriter  UInt16MultiArray_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

