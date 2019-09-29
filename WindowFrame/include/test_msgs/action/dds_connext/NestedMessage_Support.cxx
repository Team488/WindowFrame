
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NestedMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "NestedMessage_Support.h"
#include "NestedMessage_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_Goal_' support classes.

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
            #define TTYPENAME   NestedMessage_Goal_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_Goal_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_Goal_

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
            #define TTYPENAME   NestedMessage_Goal_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_Goal_DataReader
            #define TDataSeq    NestedMessage_Goal_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_Goal_

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
            #define TTYPENAME    NestedMessage_Goal_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_Goal_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_Goal_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_Goal_
            #define TDataReader  NestedMessage_Goal_DataReader
            #define TDataWriter  NestedMessage_Goal_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_SendGoal_Request_' support classes.

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
            #define TTYPENAME   NestedMessage_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_SendGoal_Request_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_SendGoal_Request_

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
            #define TTYPENAME   NestedMessage_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_SendGoal_Request_DataReader
            #define TDataSeq    NestedMessage_SendGoal_Request_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_SendGoal_Request_

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
            #define TTYPENAME    NestedMessage_SendGoal_Request_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_SendGoal_Request_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_SendGoal_Request_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_SendGoal_Request_
            #define TDataReader  NestedMessage_SendGoal_Request_DataReader
            #define TDataWriter  NestedMessage_SendGoal_Request_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_SendGoal_Response_' support classes.

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
            #define TTYPENAME   NestedMessage_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_SendGoal_Response_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_SendGoal_Response_

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
            #define TTYPENAME   NestedMessage_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_SendGoal_Response_DataReader
            #define TDataSeq    NestedMessage_SendGoal_Response_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_SendGoal_Response_

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
            #define TTYPENAME    NestedMessage_SendGoal_Response_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_SendGoal_Response_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_SendGoal_Response_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_SendGoal_Response_
            #define TDataReader  NestedMessage_SendGoal_Response_DataReader
            #define TDataWriter  NestedMessage_SendGoal_Response_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_Result_' support classes.

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
            #define TTYPENAME   NestedMessage_Result_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_Result_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_Result_

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
            #define TTYPENAME   NestedMessage_Result_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_Result_DataReader
            #define TDataSeq    NestedMessage_Result_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_Result_

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
            #define TTYPENAME    NestedMessage_Result_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_Result_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_Result_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_Result_
            #define TDataReader  NestedMessage_Result_DataReader
            #define TDataWriter  NestedMessage_Result_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_GetResult_Request_' support classes.

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
            #define TTYPENAME   NestedMessage_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_GetResult_Request_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_GetResult_Request_

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
            #define TTYPENAME   NestedMessage_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_GetResult_Request_DataReader
            #define TDataSeq    NestedMessage_GetResult_Request_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_GetResult_Request_

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
            #define TTYPENAME    NestedMessage_GetResult_Request_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_GetResult_Request_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_GetResult_Request_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_GetResult_Request_
            #define TDataReader  NestedMessage_GetResult_Request_DataReader
            #define TDataWriter  NestedMessage_GetResult_Request_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_GetResult_Response_' support classes.

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
            #define TTYPENAME   NestedMessage_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_GetResult_Response_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_GetResult_Response_

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
            #define TTYPENAME   NestedMessage_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_GetResult_Response_DataReader
            #define TDataSeq    NestedMessage_GetResult_Response_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_GetResult_Response_

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
            #define TTYPENAME    NestedMessage_GetResult_Response_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_GetResult_Response_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_GetResult_Response_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_GetResult_Response_
            #define TDataReader  NestedMessage_GetResult_Response_DataReader
            #define TDataWriter  NestedMessage_GetResult_Response_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_Feedback_' support classes.

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
            #define TTYPENAME   NestedMessage_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_Feedback_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_Feedback_

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
            #define TTYPENAME   NestedMessage_Feedback_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_Feedback_DataReader
            #define TDataSeq    NestedMessage_Feedback_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_Feedback_

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
            #define TTYPENAME    NestedMessage_Feedback_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_Feedback_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_Feedback_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_Feedback_
            #define TDataReader  NestedMessage_Feedback_DataReader
            #define TDataWriter  NestedMessage_Feedback_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */
namespace test_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'NestedMessage_FeedbackMessage_' support classes.

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
            #define TTYPENAME   NestedMessage_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter NestedMessage_FeedbackMessage_DataWriter
            #define TData       test_msgs::action::dds_::NestedMessage_FeedbackMessage_

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
            #define TTYPENAME   NestedMessage_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader NestedMessage_FeedbackMessage_DataReader
            #define TDataSeq    NestedMessage_FeedbackMessage_Seq
            #define TData       test_msgs::action::dds_::NestedMessage_FeedbackMessage_

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
            #define TTYPENAME    NestedMessage_FeedbackMessage_TYPENAME
            #define TPlugin_new  test_msgs::action::dds_::NestedMessage_FeedbackMessage_Plugin_new
            #define TPlugin_delete  test_msgs::action::dds_::NestedMessage_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport NestedMessage_FeedbackMessage_TypeSupport
            #define TData        test_msgs::action::dds_::NestedMessage_FeedbackMessage_
            #define TDataReader  NestedMessage_FeedbackMessage_DataReader
            #define TDataWriter  NestedMessage_FeedbackMessage_DataWriter
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
    } /* namespace action  */
} /* namespace test_msgs  */

