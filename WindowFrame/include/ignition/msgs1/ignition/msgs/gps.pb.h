// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/gps.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fgps_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fgps_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fgps_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fgps_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fgps_2eproto;
namespace ignition {
namespace msgs {
class GPS;
class GPSDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern GPSDefaultTypeInternal _GPS_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::GPS* Arena::CreateMaybeMessage<::ignition::msgs::GPS>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE GPS :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.GPS) */ {
 public:
  GPS();
  virtual ~GPS();

  GPS(const GPS& from);
  GPS(GPS&& from) noexcept
    : GPS() {
    *this = ::std::move(from);
  }

  inline GPS& operator=(const GPS& from) {
    CopyFrom(from);
    return *this;
  }
  inline GPS& operator=(GPS&& from) noexcept {
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
  static const GPS& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GPS* internal_default_instance() {
    return reinterpret_cast<const GPS*>(
               &_GPS_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GPS& a, GPS& b) {
    a.Swap(&b);
  }
  inline void Swap(GPS* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GPS* New() const final {
    return CreateMaybeMessage<GPS>(nullptr);
  }

  GPS* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GPS>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GPS& from);
  void MergeFrom(const GPS& from);
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
  void InternalSwap(GPS* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.GPS";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fgps_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fgps_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLinkNameFieldNumber = 2,
    kHeaderFieldNumber = 1,
    kLatitudeDegFieldNumber = 3,
    kLongitudeDegFieldNumber = 4,
    kAltitudeFieldNumber = 5,
    kVelocityEastFieldNumber = 6,
    kVelocityNorthFieldNumber = 7,
    kVelocityUpFieldNumber = 8,
  };
  // optional string link_name = 2;
  bool has_link_name() const;
  void clear_link_name();
  const std::string& link_name() const;
  void set_link_name(const std::string& value);
  void set_link_name(std::string&& value);
  void set_link_name(const char* value);
  void set_link_name(const char* value, size_t size);
  std::string* mutable_link_name();
  std::string* release_link_name();
  void set_allocated_link_name(std::string* link_name);

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional double latitude_deg = 3;
  bool has_latitude_deg() const;
  void clear_latitude_deg();
  double latitude_deg() const;
  void set_latitude_deg(double value);

  // optional double longitude_deg = 4;
  bool has_longitude_deg() const;
  void clear_longitude_deg();
  double longitude_deg() const;
  void set_longitude_deg(double value);

  // optional double altitude = 5;
  bool has_altitude() const;
  void clear_altitude();
  double altitude() const;
  void set_altitude(double value);

  // optional double velocity_east = 6;
  bool has_velocity_east() const;
  void clear_velocity_east();
  double velocity_east() const;
  void set_velocity_east(double value);

  // optional double velocity_north = 7;
  bool has_velocity_north() const;
  void clear_velocity_north();
  double velocity_north() const;
  void set_velocity_north(double value);

  // optional double velocity_up = 8;
  bool has_velocity_up() const;
  void clear_velocity_up();
  double velocity_up() const;
  void set_velocity_up(double value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.GPS)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr link_name_;
  ::ignition::msgs::Header* header_;
  double latitude_deg_;
  double longitude_deg_;
  double altitude_;
  double velocity_east_;
  double velocity_north_;
  double velocity_up_;
  friend struct ::TableStruct_ignition_2fmsgs_2fgps_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GPS

// optional .ignition.msgs.Header header = 1;
inline bool GPS::has_header() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Header& GPS::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* GPS::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.GPS.header)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* GPS::mutable_header() {
  _has_bits_[0] |= 0x00000002u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.GPS.header)
  return header_;
}
inline void GPS::set_allocated_header(::ignition::msgs::Header* header) {
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
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.GPS.header)
}

// optional string link_name = 2;
inline bool GPS::has_link_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GPS::clear_link_name() {
  link_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& GPS::link_name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.link_name)
  return link_name_.GetNoArena();
}
inline void GPS::set_link_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.link_name)
}
inline void GPS::set_link_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.GPS.link_name)
}
inline void GPS::set_link_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.GPS.link_name)
}
inline void GPS::set_link_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  link_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.GPS.link_name)
}
inline std::string* GPS::mutable_link_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.GPS.link_name)
  return link_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GPS::release_link_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.GPS.link_name)
  if (!has_link_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return link_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GPS::set_allocated_link_name(std::string* link_name) {
  if (link_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  link_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), link_name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.GPS.link_name)
}

// optional double latitude_deg = 3;
inline bool GPS::has_latitude_deg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GPS::clear_latitude_deg() {
  latitude_deg_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double GPS::latitude_deg() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.latitude_deg)
  return latitude_deg_;
}
inline void GPS::set_latitude_deg(double value) {
  _has_bits_[0] |= 0x00000004u;
  latitude_deg_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.latitude_deg)
}

// optional double longitude_deg = 4;
inline bool GPS::has_longitude_deg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GPS::clear_longitude_deg() {
  longitude_deg_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double GPS::longitude_deg() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.longitude_deg)
  return longitude_deg_;
}
inline void GPS::set_longitude_deg(double value) {
  _has_bits_[0] |= 0x00000008u;
  longitude_deg_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.longitude_deg)
}

// optional double altitude = 5;
inline bool GPS::has_altitude() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void GPS::clear_altitude() {
  altitude_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double GPS::altitude() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.altitude)
  return altitude_;
}
inline void GPS::set_altitude(double value) {
  _has_bits_[0] |= 0x00000010u;
  altitude_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.altitude)
}

// optional double velocity_east = 6;
inline bool GPS::has_velocity_east() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void GPS::clear_velocity_east() {
  velocity_east_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double GPS::velocity_east() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.velocity_east)
  return velocity_east_;
}
inline void GPS::set_velocity_east(double value) {
  _has_bits_[0] |= 0x00000020u;
  velocity_east_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.velocity_east)
}

// optional double velocity_north = 7;
inline bool GPS::has_velocity_north() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void GPS::clear_velocity_north() {
  velocity_north_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double GPS::velocity_north() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.velocity_north)
  return velocity_north_;
}
inline void GPS::set_velocity_north(double value) {
  _has_bits_[0] |= 0x00000040u;
  velocity_north_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.velocity_north)
}

// optional double velocity_up = 8;
inline bool GPS::has_velocity_up() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void GPS::clear_velocity_up() {
  velocity_up_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double GPS::velocity_up() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.GPS.velocity_up)
  return velocity_up_;
}
inline void GPS::set_velocity_up(double value) {
  _has_bits_[0] |= 0x00000080u;
  velocity_up_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.GPS.velocity_up)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<GPS> GPSUniquePtr;
typedef std::unique_ptr<const GPS> ConstGPSUniquePtr;
typedef std::shared_ptr<GPS> GPSSharedPtr;
typedef std::shared_ptr<const GPS> ConstGPSSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fgps_2eproto