
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JoyFeedback_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JoyFeedback_Support_1486133681_h
#define JoyFeedback_Support_1486133681_h

/* Uses */
#include "JoyFeedback_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            namespace JoyFeedback_Constants {
            } /* namespace JoyFeedback_Constants  */
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                JoyFeedback_TypeSupport, 
                JoyFeedback_);

            DDS_DATAWRITER_CPP(JoyFeedback_DataWriter, JoyFeedback_);
            DDS_DATAREADER_CPP(JoyFeedback_DataReader, JoyFeedback_Seq, JoyFeedback_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT_sensor_msgs)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif  /* JoyFeedback_Support_1486133681_h */

