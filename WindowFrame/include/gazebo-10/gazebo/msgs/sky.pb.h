// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sky.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sky_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sky_2eproto

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
#include "color.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sky_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_sky_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sky_2eproto;
namespace gazebo {
namespace msgs {
class Sky;
class SkyDefaultTypeInternal;
GZ_MSGS_VISIBLE extern SkyDefaultTypeInternal _Sky_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Sky* Arena::CreateMaybeMessage<::gazebo::msgs::Sky>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Sky :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Sky) */ {
 public:
  Sky();
  virtual ~Sky();

  Sky(const Sky& from);
  Sky(Sky&& from) noexcept
    : Sky() {
    *this = ::std::move(from);
  }

  inline Sky& operator=(const Sky& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sky& operator=(Sky&& from) noexcept {
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
  static const Sky& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sky* internal_default_instance() {
    return reinterpret_cast<const Sky*>(
               &_Sky_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Sky& a, Sky& b) {
    a.Swap(&b);
  }
  inline void Swap(Sky* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Sky* New() const final {
    return CreateMaybeMessage<Sky>(nullptr);
  }

  Sky* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Sky>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Sky& from);
  void MergeFrom(const Sky& from);
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
  void InternalSwap(Sky* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Sky";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_sky_2eproto);
    return ::descriptor_table_sky_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCloudAmbientFieldNumber = 6,
    kTimeFieldNumber = 1,
    kSunriseFieldNumber = 2,
    kSunsetFieldNumber = 3,
    kWindSpeedFieldNumber = 4,
    kWindDirectionFieldNumber = 5,
    kHumidityFieldNumber = 7,
    kMeanCloudSizeFieldNumber = 8,
  };
  // optional .gazebo.msgs.Color cloud_ambient = 6;
  bool has_cloud_ambient() const;
  void clear_cloud_ambient();
  const ::gazebo::msgs::Color& cloud_ambient() const;
  ::gazebo::msgs::Color* release_cloud_ambient();
  ::gazebo::msgs::Color* mutable_cloud_ambient();
  void set_allocated_cloud_ambient(::gazebo::msgs::Color* cloud_ambient);

  // optional double time = 1;
  bool has_time() const;
  void clear_time();
  double time() const;
  void set_time(double value);

  // optional double sunrise = 2;
  bool has_sunrise() const;
  void clear_sunrise();
  double sunrise() const;
  void set_sunrise(double value);

  // optional double sunset = 3;
  bool has_sunset() const;
  void clear_sunset();
  double sunset() const;
  void set_sunset(double value);

  // optional double wind_speed = 4;
  bool has_wind_speed() const;
  void clear_wind_speed();
  double wind_speed() const;
  void set_wind_speed(double value);

  // optional double wind_direction = 5;
  bool has_wind_direction() const;
  void clear_wind_direction();
  double wind_direction() const;
  void set_wind_direction(double value);

  // optional double humidity = 7;
  bool has_humidity() const;
  void clear_humidity();
  double humidity() const;
  void set_humidity(double value);

  // optional double mean_cloud_size = 8;
  bool has_mean_cloud_size() const;
  void clear_mean_cloud_size();
  double mean_cloud_size() const;
  void set_mean_cloud_size(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Sky)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Color* cloud_ambient_;
  double time_;
  double sunrise_;
  double sunset_;
  double wind_speed_;
  double wind_direction_;
  double humidity_;
  double mean_cloud_size_;
  friend struct ::TableStruct_sky_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Sky

// optional double time = 1;
inline bool Sky::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Sky::clear_time() {
  time_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Sky::time() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.time)
  return time_;
}
inline void Sky::set_time(double value) {
  _has_bits_[0] |= 0x00000002u;
  time_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.time)
}

// optional double sunrise = 2;
inline bool Sky::has_sunrise() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Sky::clear_sunrise() {
  sunrise_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Sky::sunrise() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.sunrise)
  return sunrise_;
}
inline void Sky::set_sunrise(double value) {
  _has_bits_[0] |= 0x00000004u;
  sunrise_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.sunrise)
}

// optional double sunset = 3;
inline bool Sky::has_sunset() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Sky::clear_sunset() {
  sunset_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Sky::sunset() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.sunset)
  return sunset_;
}
inline void Sky::set_sunset(double value) {
  _has_bits_[0] |= 0x00000008u;
  sunset_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.sunset)
}

// optional double wind_speed = 4;
inline bool Sky::has_wind_speed() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Sky::clear_wind_speed() {
  wind_speed_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Sky::wind_speed() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.wind_speed)
  return wind_speed_;
}
inline void Sky::set_wind_speed(double value) {
  _has_bits_[0] |= 0x00000010u;
  wind_speed_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.wind_speed)
}

// optional double wind_direction = 5;
inline bool Sky::has_wind_direction() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Sky::clear_wind_direction() {
  wind_direction_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Sky::wind_direction() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.wind_direction)
  return wind_direction_;
}
inline void Sky::set_wind_direction(double value) {
  _has_bits_[0] |= 0x00000020u;
  wind_direction_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.wind_direction)
}

// optional .gazebo.msgs.Color cloud_ambient = 6;
inline bool Sky::has_cloud_ambient() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::gazebo::msgs::Color& Sky::cloud_ambient() const {
  const ::gazebo::msgs::Color* p = cloud_ambient_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.cloud_ambient)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Color*>(
      &::gazebo::msgs::_Color_default_instance_);
}
inline ::gazebo::msgs::Color* Sky::release_cloud_ambient() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Sky.cloud_ambient)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Color* temp = cloud_ambient_;
  cloud_ambient_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Color* Sky::mutable_cloud_ambient() {
  _has_bits_[0] |= 0x00000001u;
  if (cloud_ambient_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Color>(GetArenaNoVirtual());
    cloud_ambient_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Sky.cloud_ambient)
  return cloud_ambient_;
}
inline void Sky::set_allocated_cloud_ambient(::gazebo::msgs::Color* cloud_ambient) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(cloud_ambient_);
  }
  if (cloud_ambient) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      cloud_ambient = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, cloud_ambient, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  cloud_ambient_ = cloud_ambient;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Sky.cloud_ambient)
}

// optional double humidity = 7;
inline bool Sky::has_humidity() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Sky::clear_humidity() {
  humidity_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double Sky::humidity() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.humidity)
  return humidity_;
}
inline void Sky::set_humidity(double value) {
  _has_bits_[0] |= 0x00000040u;
  humidity_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.humidity)
}

// optional double mean_cloud_size = 8;
inline bool Sky::has_mean_cloud_size() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Sky::clear_mean_cloud_size() {
  mean_cloud_size_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double Sky::mean_cloud_size() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Sky.mean_cloud_size)
  return mean_cloud_size_;
}
inline void Sky::set_mean_cloud_size(double value) {
  _has_bits_[0] |= 0x00000080u;
  mean_cloud_size_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Sky.mean_cloud_size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Sky> SkyPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Sky const> ConstSkyPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sky_2eproto