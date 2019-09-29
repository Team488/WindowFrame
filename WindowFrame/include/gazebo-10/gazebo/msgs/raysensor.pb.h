// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raysensor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_raysensor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_raysensor_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_raysensor_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_raysensor_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_raysensor_2eproto;
namespace gazebo {
namespace msgs {
class RaySensor;
class RaySensorDefaultTypeInternal;
GZ_MSGS_VISIBLE extern RaySensorDefaultTypeInternal _RaySensor_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::RaySensor* Arena::CreateMaybeMessage<::gazebo::msgs::RaySensor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE RaySensor :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.RaySensor) */ {
 public:
  RaySensor();
  virtual ~RaySensor();

  RaySensor(const RaySensor& from);
  RaySensor(RaySensor&& from) noexcept
    : RaySensor() {
    *this = ::std::move(from);
  }

  inline RaySensor& operator=(const RaySensor& from) {
    CopyFrom(from);
    return *this;
  }
  inline RaySensor& operator=(RaySensor&& from) noexcept {
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
  static const RaySensor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RaySensor* internal_default_instance() {
    return reinterpret_cast<const RaySensor*>(
               &_RaySensor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RaySensor& a, RaySensor& b) {
    a.Swap(&b);
  }
  inline void Swap(RaySensor* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RaySensor* New() const final {
    return CreateMaybeMessage<RaySensor>(nullptr);
  }

  RaySensor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RaySensor>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RaySensor& from);
  void MergeFrom(const RaySensor& from);
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
  void InternalSwap(RaySensor* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.RaySensor";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_raysensor_2eproto);
    return ::descriptor_table_raysensor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDisplayScanFieldNumber = 1,
    kHorizontalSamplesFieldNumber = 2,
    kHorizontalResolutionFieldNumber = 3,
    kHorizontalMinAngleFieldNumber = 4,
    kHorizontalMaxAngleFieldNumber = 5,
    kVerticalResolutionFieldNumber = 7,
    kVerticalMinAngleFieldNumber = 8,
    kVerticalMaxAngleFieldNumber = 9,
    kRangeMinFieldNumber = 10,
    kRangeMaxFieldNumber = 11,
    kRangeResolutionFieldNumber = 12,
    kVerticalSamplesFieldNumber = 6,
  };
  // optional bool display_scan = 1;
  bool has_display_scan() const;
  void clear_display_scan();
  bool display_scan() const;
  void set_display_scan(bool value);

  // optional int32 horizontal_samples = 2;
  bool has_horizontal_samples() const;
  void clear_horizontal_samples();
  ::PROTOBUF_NAMESPACE_ID::int32 horizontal_samples() const;
  void set_horizontal_samples(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional double horizontal_resolution = 3;
  bool has_horizontal_resolution() const;
  void clear_horizontal_resolution();
  double horizontal_resolution() const;
  void set_horizontal_resolution(double value);

  // optional double horizontal_min_angle = 4;
  bool has_horizontal_min_angle() const;
  void clear_horizontal_min_angle();
  double horizontal_min_angle() const;
  void set_horizontal_min_angle(double value);

  // optional double horizontal_max_angle = 5;
  bool has_horizontal_max_angle() const;
  void clear_horizontal_max_angle();
  double horizontal_max_angle() const;
  void set_horizontal_max_angle(double value);

  // optional double vertical_resolution = 7;
  bool has_vertical_resolution() const;
  void clear_vertical_resolution();
  double vertical_resolution() const;
  void set_vertical_resolution(double value);

  // optional double vertical_min_angle = 8;
  bool has_vertical_min_angle() const;
  void clear_vertical_min_angle();
  double vertical_min_angle() const;
  void set_vertical_min_angle(double value);

  // optional double vertical_max_angle = 9;
  bool has_vertical_max_angle() const;
  void clear_vertical_max_angle();
  double vertical_max_angle() const;
  void set_vertical_max_angle(double value);

  // optional double range_min = 10;
  bool has_range_min() const;
  void clear_range_min();
  double range_min() const;
  void set_range_min(double value);

  // optional double range_max = 11;
  bool has_range_max() const;
  void clear_range_max();
  double range_max() const;
  void set_range_max(double value);

  // optional double range_resolution = 12;
  bool has_range_resolution() const;
  void clear_range_resolution();
  double range_resolution() const;
  void set_range_resolution(double value);

  // optional int32 vertical_samples = 6;
  bool has_vertical_samples() const;
  void clear_vertical_samples();
  ::PROTOBUF_NAMESPACE_ID::int32 vertical_samples() const;
  void set_vertical_samples(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.RaySensor)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  bool display_scan_;
  ::PROTOBUF_NAMESPACE_ID::int32 horizontal_samples_;
  double horizontal_resolution_;
  double horizontal_min_angle_;
  double horizontal_max_angle_;
  double vertical_resolution_;
  double vertical_min_angle_;
  double vertical_max_angle_;
  double range_min_;
  double range_max_;
  double range_resolution_;
  ::PROTOBUF_NAMESPACE_ID::int32 vertical_samples_;
  friend struct ::TableStruct_raysensor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RaySensor

// optional bool display_scan = 1;
inline bool RaySensor::has_display_scan() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RaySensor::clear_display_scan() {
  display_scan_ = false;
  _has_bits_[0] &= ~0x00000001u;
}
inline bool RaySensor::display_scan() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.display_scan)
  return display_scan_;
}
inline void RaySensor::set_display_scan(bool value) {
  _has_bits_[0] |= 0x00000001u;
  display_scan_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.display_scan)
}

// optional int32 horizontal_samples = 2;
inline bool RaySensor::has_horizontal_samples() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RaySensor::clear_horizontal_samples() {
  horizontal_samples_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RaySensor::horizontal_samples() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.horizontal_samples)
  return horizontal_samples_;
}
inline void RaySensor::set_horizontal_samples(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  horizontal_samples_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.horizontal_samples)
}

// optional double horizontal_resolution = 3;
inline bool RaySensor::has_horizontal_resolution() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RaySensor::clear_horizontal_resolution() {
  horizontal_resolution_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double RaySensor::horizontal_resolution() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.horizontal_resolution)
  return horizontal_resolution_;
}
inline void RaySensor::set_horizontal_resolution(double value) {
  _has_bits_[0] |= 0x00000004u;
  horizontal_resolution_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.horizontal_resolution)
}

// optional double horizontal_min_angle = 4;
inline bool RaySensor::has_horizontal_min_angle() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RaySensor::clear_horizontal_min_angle() {
  horizontal_min_angle_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double RaySensor::horizontal_min_angle() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.horizontal_min_angle)
  return horizontal_min_angle_;
}
inline void RaySensor::set_horizontal_min_angle(double value) {
  _has_bits_[0] |= 0x00000008u;
  horizontal_min_angle_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.horizontal_min_angle)
}

// optional double horizontal_max_angle = 5;
inline bool RaySensor::has_horizontal_max_angle() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RaySensor::clear_horizontal_max_angle() {
  horizontal_max_angle_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double RaySensor::horizontal_max_angle() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.horizontal_max_angle)
  return horizontal_max_angle_;
}
inline void RaySensor::set_horizontal_max_angle(double value) {
  _has_bits_[0] |= 0x00000010u;
  horizontal_max_angle_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.horizontal_max_angle)
}

// optional int32 vertical_samples = 6;
inline bool RaySensor::has_vertical_samples() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void RaySensor::clear_vertical_samples() {
  vertical_samples_ = 0;
  _has_bits_[0] &= ~0x00000800u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 RaySensor::vertical_samples() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.vertical_samples)
  return vertical_samples_;
}
inline void RaySensor::set_vertical_samples(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000800u;
  vertical_samples_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.vertical_samples)
}

// optional double vertical_resolution = 7;
inline bool RaySensor::has_vertical_resolution() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RaySensor::clear_vertical_resolution() {
  vertical_resolution_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double RaySensor::vertical_resolution() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.vertical_resolution)
  return vertical_resolution_;
}
inline void RaySensor::set_vertical_resolution(double value) {
  _has_bits_[0] |= 0x00000020u;
  vertical_resolution_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.vertical_resolution)
}

// optional double vertical_min_angle = 8;
inline bool RaySensor::has_vertical_min_angle() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RaySensor::clear_vertical_min_angle() {
  vertical_min_angle_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double RaySensor::vertical_min_angle() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.vertical_min_angle)
  return vertical_min_angle_;
}
inline void RaySensor::set_vertical_min_angle(double value) {
  _has_bits_[0] |= 0x00000040u;
  vertical_min_angle_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.vertical_min_angle)
}

// optional double vertical_max_angle = 9;
inline bool RaySensor::has_vertical_max_angle() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RaySensor::clear_vertical_max_angle() {
  vertical_max_angle_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double RaySensor::vertical_max_angle() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.vertical_max_angle)
  return vertical_max_angle_;
}
inline void RaySensor::set_vertical_max_angle(double value) {
  _has_bits_[0] |= 0x00000080u;
  vertical_max_angle_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.vertical_max_angle)
}

// optional double range_min = 10;
inline bool RaySensor::has_range_min() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void RaySensor::clear_range_min() {
  range_min_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double RaySensor::range_min() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.range_min)
  return range_min_;
}
inline void RaySensor::set_range_min(double value) {
  _has_bits_[0] |= 0x00000100u;
  range_min_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.range_min)
}

// optional double range_max = 11;
inline bool RaySensor::has_range_max() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void RaySensor::clear_range_max() {
  range_max_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline double RaySensor::range_max() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.range_max)
  return range_max_;
}
inline void RaySensor::set_range_max(double value) {
  _has_bits_[0] |= 0x00000200u;
  range_max_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.range_max)
}

// optional double range_resolution = 12;
inline bool RaySensor::has_range_resolution() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void RaySensor::clear_range_resolution() {
  range_resolution_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline double RaySensor::range_resolution() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.RaySensor.range_resolution)
  return range_resolution_;
}
inline void RaySensor::set_range_resolution(double value) {
  _has_bits_[0] |= 0x00000400u;
  range_resolution_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.RaySensor.range_resolution)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::RaySensor> RaySensorPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::RaySensor const> ConstRaySensorPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_raysensor_2eproto