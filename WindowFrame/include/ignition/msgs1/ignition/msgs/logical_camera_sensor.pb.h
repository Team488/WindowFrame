// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/logical_camera_sensor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "ignition/msgs/header.pb.h"
#ifndef _MSC_VER
#pragma GCC system_header
#else
#pragma warning(push)
#pragma warning(disable: 4244 4267 4100 4244 4512 4127 4068 4275 4251)
#endif
#include <memory>
#include <ignition/msgs/Export.hh>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto;
namespace ignition {
namespace msgs {
class LogicalCameraSensor;
class LogicalCameraSensorDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LogicalCameraSensorDefaultTypeInternal _LogicalCameraSensor_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::LogicalCameraSensor* Arena::CreateMaybeMessage<::ignition::msgs::LogicalCameraSensor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LogicalCameraSensor :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.LogicalCameraSensor) */ {
 public:
  LogicalCameraSensor();
  virtual ~LogicalCameraSensor();

  LogicalCameraSensor(const LogicalCameraSensor& from);
  LogicalCameraSensor(LogicalCameraSensor&& from) noexcept
    : LogicalCameraSensor() {
    *this = ::std::move(from);
  }

  inline LogicalCameraSensor& operator=(const LogicalCameraSensor& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogicalCameraSensor& operator=(LogicalCameraSensor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogicalCameraSensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogicalCameraSensor* internal_default_instance() {
    return reinterpret_cast<const LogicalCameraSensor*>(
               &_LogicalCameraSensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogicalCameraSensor& a, LogicalCameraSensor& b) {
    a.Swap(&b);
  }
  inline void Swap(LogicalCameraSensor* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogicalCameraSensor* New() const final {
    return CreateMaybeMessage<LogicalCameraSensor>(nullptr);
  }

  LogicalCameraSensor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogicalCameraSensor>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogicalCameraSensor& from);
  void MergeFrom(const LogicalCameraSensor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogicalCameraSensor* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.LogicalCameraSensor";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kNearClipFieldNumber = 2,
    kFarClipFieldNumber = 3,
    kHorizontalFovFieldNumber = 4,
    kAspectRatioFieldNumber = 5,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional double near_clip = 2;
  bool has_near_clip() const;
  void clear_near_clip();
  double near_clip() const;
  void set_near_clip(double value);

  // optional double far_clip = 3;
  bool has_far_clip() const;
  void clear_far_clip();
  double far_clip() const;
  void set_far_clip(double value);

  // optional double horizontal_fov = 4;
  bool has_horizontal_fov() const;
  void clear_horizontal_fov();
  double horizontal_fov() const;
  void set_horizontal_fov(double value);

  // optional double aspect_ratio = 5;
  bool has_aspect_ratio() const;
  void clear_aspect_ratio();
  double aspect_ratio() const;
  void set_aspect_ratio(double value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.LogicalCameraSensor)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  double near_clip_;
  double far_clip_;
  double horizontal_fov_;
  double aspect_ratio_;
  friend struct ::TableStruct_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogicalCameraSensor

// optional .ignition.msgs.Header header = 1;
inline bool LogicalCameraSensor::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& LogicalCameraSensor::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraSensor.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* LogicalCameraSensor::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.LogicalCameraSensor.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* LogicalCameraSensor::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.LogicalCameraSensor.header)
  return header_;
}
inline void LogicalCameraSensor::set_allocated_header(::ignition::msgs::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.LogicalCameraSensor.header)
}

// optional double near_clip = 2;
inline bool LogicalCameraSensor::has_near_clip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogicalCameraSensor::clear_near_clip() {
  near_clip_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double LogicalCameraSensor::near_clip() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraSensor.near_clip)
  return near_clip_;
}
inline void LogicalCameraSensor::set_near_clip(double value) {
  _has_bits_[0] |= 0x00000002u;
  near_clip_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.LogicalCameraSensor.near_clip)
}

// optional double far_clip = 3;
inline bool LogicalCameraSensor::has_far_clip() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogicalCameraSensor::clear_far_clip() {
  far_clip_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double LogicalCameraSensor::far_clip() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraSensor.far_clip)
  return far_clip_;
}
inline void LogicalCameraSensor::set_far_clip(double value) {
  _has_bits_[0] |= 0x00000004u;
  far_clip_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.LogicalCameraSensor.far_clip)
}

// optional double horizontal_fov = 4;
inline bool LogicalCameraSensor::has_horizontal_fov() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogicalCameraSensor::clear_horizontal_fov() {
  horizontal_fov_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double LogicalCameraSensor::horizontal_fov() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraSensor.horizontal_fov)
  return horizontal_fov_;
}
inline void LogicalCameraSensor::set_horizontal_fov(double value) {
  _has_bits_[0] |= 0x00000008u;
  horizontal_fov_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.LogicalCameraSensor.horizontal_fov)
}

// optional double aspect_ratio = 5;
inline bool LogicalCameraSensor::has_aspect_ratio() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LogicalCameraSensor::clear_aspect_ratio() {
  aspect_ratio_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double LogicalCameraSensor::aspect_ratio() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraSensor.aspect_ratio)
  return aspect_ratio_;
}
inline void LogicalCameraSensor::set_aspect_ratio(double value) {
  _has_bits_[0] |= 0x00000010u;
  aspect_ratio_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.LogicalCameraSensor.aspect_ratio)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<LogicalCameraSensor> LogicalCameraSensorUniquePtr;
typedef std::unique_ptr<const LogicalCameraSensor> ConstLogicalCameraSensorUniquePtr;
typedef std::shared_ptr<LogicalCameraSensor> LogicalCameraSensorSharedPtr;
typedef std::shared_ptr<const LogicalCameraSensor> ConstLogicalCameraSensorSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flogical_5fcamera_5fsensor_2eproto
