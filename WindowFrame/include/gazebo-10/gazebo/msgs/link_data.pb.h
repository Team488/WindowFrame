// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link_data.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_link_5fdata_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_link_5fdata_2eproto

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
#include "vector3d.pb.h"
#include "time.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_link_5fdata_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_link_5fdata_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_link_5fdata_2eproto;
namespace gazebo {
namespace msgs {
class LinkData;
class LinkDataDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LinkDataDefaultTypeInternal _LinkData_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::LinkData* Arena::CreateMaybeMessage<::gazebo::msgs::LinkData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE LinkData :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.LinkData) */ {
 public:
  LinkData();
  virtual ~LinkData();

  LinkData(const LinkData& from);
  LinkData(LinkData&& from) noexcept
    : LinkData() {
    *this = ::std::move(from);
  }

  inline LinkData& operator=(const LinkData& from) {
    CopyFrom(from);
    return *this;
  }
  inline LinkData& operator=(LinkData&& from) noexcept {
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
  static const LinkData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LinkData* internal_default_instance() {
    return reinterpret_cast<const LinkData*>(
               &_LinkData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LinkData& a, LinkData& b) {
    a.Swap(&b);
  }
  inline void Swap(LinkData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LinkData* New() const final {
    return CreateMaybeMessage<LinkData>(nullptr);
  }

  LinkData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LinkData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LinkData& from);
  void MergeFrom(const LinkData& from);
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
  void InternalSwap(LinkData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.LinkData";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_link_5fdata_2eproto);
    return ::descriptor_table_link_5fdata_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kTimeFieldNumber = 1,
    kLinearVelocityFieldNumber = 3,
    kAngularVelocityFieldNumber = 4,
  };
  // required string name = 2;
  bool has_name() const;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);

  // required .gazebo.msgs.Time time = 1;
  bool has_time() const;
  void clear_time();
  const ::gazebo::msgs::Time& time() const;
  ::gazebo::msgs::Time* release_time();
  ::gazebo::msgs::Time* mutable_time();
  void set_allocated_time(::gazebo::msgs::Time* time);

  // optional .gazebo.msgs.Vector3d linear_velocity = 3;
  bool has_linear_velocity() const;
  void clear_linear_velocity();
  const ::gazebo::msgs::Vector3d& linear_velocity() const;
  ::gazebo::msgs::Vector3d* release_linear_velocity();
  ::gazebo::msgs::Vector3d* mutable_linear_velocity();
  void set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity);

  // optional .gazebo.msgs.Vector3d angular_velocity = 4;
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  const ::gazebo::msgs::Vector3d& angular_velocity() const;
  ::gazebo::msgs::Vector3d* release_angular_velocity();
  ::gazebo::msgs::Vector3d* mutable_angular_velocity();
  void set_allocated_angular_velocity(::gazebo::msgs::Vector3d* angular_velocity);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LinkData)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::Vector3d* linear_velocity_;
  ::gazebo::msgs::Vector3d* angular_velocity_;
  friend struct ::TableStruct_link_5fdata_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LinkData

// required .gazebo.msgs.Time time = 1;
inline bool LinkData::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::gazebo::msgs::Time& LinkData::time() const {
  const ::gazebo::msgs::Time* p = time_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.time)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* LinkData::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LinkData.time)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* LinkData::mutable_time() {
  _has_bits_[0] |= 0x00000002u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.time)
  return time_;
}
inline void LinkData::set_allocated_time(::gazebo::msgs::Time* time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(time_);
  }
  if (time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.time)
}

// required string name = 2;
inline bool LinkData::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LinkData::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LinkData::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.name)
  return name_.GetNoArena();
}
inline void LinkData::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LinkData.name)
}
inline void LinkData::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.LinkData.name)
}
inline void LinkData::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LinkData.name)
}
inline void LinkData::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LinkData.name)
}
inline std::string* LinkData::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LinkData::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LinkData.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LinkData::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.name)
}

// optional .gazebo.msgs.Vector3d linear_velocity = 3;
inline bool LinkData::has_linear_velocity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::gazebo::msgs::Vector3d& LinkData::linear_velocity() const {
  const ::gazebo::msgs::Vector3d* p = linear_velocity_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.linear_velocity)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline ::gazebo::msgs::Vector3d* LinkData::release_linear_velocity() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LinkData.linear_velocity)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Vector3d* temp = linear_velocity_;
  linear_velocity_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* LinkData::mutable_linear_velocity() {
  _has_bits_[0] |= 0x00000004u;
  if (linear_velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    linear_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.linear_velocity)
  return linear_velocity_;
}
inline void LinkData::set_allocated_linear_velocity(::gazebo::msgs::Vector3d* linear_velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(linear_velocity_);
  }
  if (linear_velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      linear_velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, linear_velocity, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  linear_velocity_ = linear_velocity;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.linear_velocity)
}

// optional .gazebo.msgs.Vector3d angular_velocity = 4;
inline bool LinkData::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::gazebo::msgs::Vector3d& LinkData::angular_velocity() const {
  const ::gazebo::msgs::Vector3d* p = angular_velocity_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LinkData.angular_velocity)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline ::gazebo::msgs::Vector3d* LinkData::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LinkData.angular_velocity)
  _has_bits_[0] &= ~0x00000008u;
  ::gazebo::msgs::Vector3d* temp = angular_velocity_;
  angular_velocity_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* LinkData::mutable_angular_velocity() {
  _has_bits_[0] |= 0x00000008u;
  if (angular_velocity_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    angular_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LinkData.angular_velocity)
  return angular_velocity_;
}
inline void LinkData::set_allocated_angular_velocity(::gazebo::msgs::Vector3d* angular_velocity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(angular_velocity_);
  }
  if (angular_velocity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      angular_velocity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, angular_velocity, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  angular_velocity_ = angular_velocity;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LinkData.angular_velocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::LinkData> LinkDataPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::LinkData const> ConstLinkDataPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_link_5fdata_2eproto
