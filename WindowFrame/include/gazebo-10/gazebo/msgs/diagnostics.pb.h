// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: diagnostics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_diagnostics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_diagnostics_2eproto

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
#include "time.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_diagnostics_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_diagnostics_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_diagnostics_2eproto;
namespace gazebo {
namespace msgs {
class Diagnostics;
class DiagnosticsDefaultTypeInternal;
GZ_MSGS_VISIBLE extern DiagnosticsDefaultTypeInternal _Diagnostics_default_instance_;
class Diagnostics_DiagTime;
class Diagnostics_DiagTimeDefaultTypeInternal;
GZ_MSGS_VISIBLE extern Diagnostics_DiagTimeDefaultTypeInternal _Diagnostics_DiagTime_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Diagnostics* Arena::CreateMaybeMessage<::gazebo::msgs::Diagnostics>(Arena*);
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Diagnostics_DiagTime* Arena::CreateMaybeMessage<::gazebo::msgs::Diagnostics_DiagTime>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Diagnostics_DiagTime :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Diagnostics.DiagTime) */ {
 public:
  Diagnostics_DiagTime();
  virtual ~Diagnostics_DiagTime();

  Diagnostics_DiagTime(const Diagnostics_DiagTime& from);
  Diagnostics_DiagTime(Diagnostics_DiagTime&& from) noexcept
    : Diagnostics_DiagTime() {
    *this = ::std::move(from);
  }

  inline Diagnostics_DiagTime& operator=(const Diagnostics_DiagTime& from) {
    CopyFrom(from);
    return *this;
  }
  inline Diagnostics_DiagTime& operator=(Diagnostics_DiagTime&& from) noexcept {
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
  static const Diagnostics_DiagTime& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Diagnostics_DiagTime* internal_default_instance() {
    return reinterpret_cast<const Diagnostics_DiagTime*>(
               &_Diagnostics_DiagTime_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Diagnostics_DiagTime& a, Diagnostics_DiagTime& b) {
    a.Swap(&b);
  }
  inline void Swap(Diagnostics_DiagTime* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Diagnostics_DiagTime* New() const final {
    return CreateMaybeMessage<Diagnostics_DiagTime>(nullptr);
  }

  Diagnostics_DiagTime* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Diagnostics_DiagTime>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Diagnostics_DiagTime& from);
  void MergeFrom(const Diagnostics_DiagTime& from);
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
  void InternalSwap(Diagnostics_DiagTime* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Diagnostics.DiagTime";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_diagnostics_2eproto);
    return ::descriptor_table_diagnostics_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kElapsedFieldNumber = 2,
    kWallFieldNumber = 3,
  };
  // required string name = 1;
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

  // required .gazebo.msgs.Time elapsed = 2;
  bool has_elapsed() const;
  void clear_elapsed();
  const ::gazebo::msgs::Time& elapsed() const;
  ::gazebo::msgs::Time* release_elapsed();
  ::gazebo::msgs::Time* mutable_elapsed();
  void set_allocated_elapsed(::gazebo::msgs::Time* elapsed);

  // required .gazebo.msgs.Time wall = 3;
  bool has_wall() const;
  void clear_wall();
  const ::gazebo::msgs::Time& wall() const;
  ::gazebo::msgs::Time* release_wall();
  ::gazebo::msgs::Time* mutable_wall();
  void set_allocated_wall(::gazebo::msgs::Time* wall);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Diagnostics.DiagTime)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::gazebo::msgs::Time* elapsed_;
  ::gazebo::msgs::Time* wall_;
  friend struct ::TableStruct_diagnostics_2eproto;
};
// -------------------------------------------------------------------

class GZ_MSGS_VISIBLE Diagnostics :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Diagnostics) */ {
 public:
  Diagnostics();
  virtual ~Diagnostics();

  Diagnostics(const Diagnostics& from);
  Diagnostics(Diagnostics&& from) noexcept
    : Diagnostics() {
    *this = ::std::move(from);
  }

  inline Diagnostics& operator=(const Diagnostics& from) {
    CopyFrom(from);
    return *this;
  }
  inline Diagnostics& operator=(Diagnostics&& from) noexcept {
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
  static const Diagnostics& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Diagnostics* internal_default_instance() {
    return reinterpret_cast<const Diagnostics*>(
               &_Diagnostics_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Diagnostics& a, Diagnostics& b) {
    a.Swap(&b);
  }
  inline void Swap(Diagnostics* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Diagnostics* New() const final {
    return CreateMaybeMessage<Diagnostics>(nullptr);
  }

  Diagnostics* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Diagnostics>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Diagnostics& from);
  void MergeFrom(const Diagnostics& from);
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
  void InternalSwap(Diagnostics* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Diagnostics";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_diagnostics_2eproto);
    return ::descriptor_table_diagnostics_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Diagnostics_DiagTime DiagTime;

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
    kRealTimeFieldNumber = 2,
    kSimTimeFieldNumber = 3,
    kRealTimeFactorFieldNumber = 4,
  };
  // repeated .gazebo.msgs.Diagnostics.DiagTime time = 1;
  int time_size() const;
  void clear_time();
  ::gazebo::msgs::Diagnostics_DiagTime* mutable_time(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Diagnostics_DiagTime >*
      mutable_time();
  const ::gazebo::msgs::Diagnostics_DiagTime& time(int index) const;
  ::gazebo::msgs::Diagnostics_DiagTime* add_time();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Diagnostics_DiagTime >&
      time() const;

  // required .gazebo.msgs.Time real_time = 2;
  bool has_real_time() const;
  void clear_real_time();
  const ::gazebo::msgs::Time& real_time() const;
  ::gazebo::msgs::Time* release_real_time();
  ::gazebo::msgs::Time* mutable_real_time();
  void set_allocated_real_time(::gazebo::msgs::Time* real_time);

  // required .gazebo.msgs.Time sim_time = 3;
  bool has_sim_time() const;
  void clear_sim_time();
  const ::gazebo::msgs::Time& sim_time() const;
  ::gazebo::msgs::Time* release_sim_time();
  ::gazebo::msgs::Time* mutable_sim_time();
  void set_allocated_sim_time(::gazebo::msgs::Time* sim_time);

  // required double real_time_factor = 4;
  bool has_real_time_factor() const;
  void clear_real_time_factor();
  double real_time_factor() const;
  void set_real_time_factor(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Diagnostics)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Diagnostics_DiagTime > time_;
  ::gazebo::msgs::Time* real_time_;
  ::gazebo::msgs::Time* sim_time_;
  double real_time_factor_;
  friend struct ::TableStruct_diagnostics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Diagnostics_DiagTime

// required string name = 1;
inline bool Diagnostics_DiagTime::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Diagnostics_DiagTime::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Diagnostics_DiagTime::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.DiagTime.name)
  return name_.GetNoArena();
}
inline void Diagnostics_DiagTime::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Diagnostics.DiagTime.name)
}
inline void Diagnostics_DiagTime::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.Diagnostics.DiagTime.name)
}
inline void Diagnostics_DiagTime::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Diagnostics.DiagTime.name)
}
inline void Diagnostics_DiagTime::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Diagnostics.DiagTime.name)
}
inline std::string* Diagnostics_DiagTime::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Diagnostics.DiagTime.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Diagnostics_DiagTime::release_name() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Diagnostics.DiagTime.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Diagnostics_DiagTime::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Diagnostics.DiagTime.name)
}

// required .gazebo.msgs.Time elapsed = 2;
inline bool Diagnostics_DiagTime::has_elapsed() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::gazebo::msgs::Time& Diagnostics_DiagTime::elapsed() const {
  const ::gazebo::msgs::Time* p = elapsed_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.DiagTime.elapsed)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* Diagnostics_DiagTime::release_elapsed() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Diagnostics.DiagTime.elapsed)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Time* temp = elapsed_;
  elapsed_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Diagnostics_DiagTime::mutable_elapsed() {
  _has_bits_[0] |= 0x00000002u;
  if (elapsed_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    elapsed_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Diagnostics.DiagTime.elapsed)
  return elapsed_;
}
inline void Diagnostics_DiagTime::set_allocated_elapsed(::gazebo::msgs::Time* elapsed) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(elapsed_);
  }
  if (elapsed) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      elapsed = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, elapsed, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  elapsed_ = elapsed;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Diagnostics.DiagTime.elapsed)
}

// required .gazebo.msgs.Time wall = 3;
inline bool Diagnostics_DiagTime::has_wall() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::gazebo::msgs::Time& Diagnostics_DiagTime::wall() const {
  const ::gazebo::msgs::Time* p = wall_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.DiagTime.wall)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* Diagnostics_DiagTime::release_wall() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Diagnostics.DiagTime.wall)
  _has_bits_[0] &= ~0x00000004u;
  ::gazebo::msgs::Time* temp = wall_;
  wall_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Diagnostics_DiagTime::mutable_wall() {
  _has_bits_[0] |= 0x00000004u;
  if (wall_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    wall_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Diagnostics.DiagTime.wall)
  return wall_;
}
inline void Diagnostics_DiagTime::set_allocated_wall(::gazebo::msgs::Time* wall) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(wall_);
  }
  if (wall) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      wall = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, wall, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  wall_ = wall;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Diagnostics.DiagTime.wall)
}

// -------------------------------------------------------------------

// Diagnostics

// repeated .gazebo.msgs.Diagnostics.DiagTime time = 1;
inline int Diagnostics::time_size() const {
  return time_.size();
}
inline void Diagnostics::clear_time() {
  time_.Clear();
}
inline ::gazebo::msgs::Diagnostics_DiagTime* Diagnostics::mutable_time(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Diagnostics.time)
  return time_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Diagnostics_DiagTime >*
Diagnostics::mutable_time() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Diagnostics.time)
  return &time_;
}
inline const ::gazebo::msgs::Diagnostics_DiagTime& Diagnostics::time(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.time)
  return time_.Get(index);
}
inline ::gazebo::msgs::Diagnostics_DiagTime* Diagnostics::add_time() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Diagnostics.time)
  return time_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Diagnostics_DiagTime >&
Diagnostics::time() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Diagnostics.time)
  return time_;
}

// required .gazebo.msgs.Time real_time = 2;
inline bool Diagnostics::has_real_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::gazebo::msgs::Time& Diagnostics::real_time() const {
  const ::gazebo::msgs::Time* p = real_time_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.real_time)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* Diagnostics::release_real_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Diagnostics.real_time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = real_time_;
  real_time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Diagnostics::mutable_real_time() {
  _has_bits_[0] |= 0x00000001u;
  if (real_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    real_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Diagnostics.real_time)
  return real_time_;
}
inline void Diagnostics::set_allocated_real_time(::gazebo::msgs::Time* real_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(real_time_);
  }
  if (real_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      real_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, real_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  real_time_ = real_time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Diagnostics.real_time)
}

// required .gazebo.msgs.Time sim_time = 3;
inline bool Diagnostics::has_sim_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::gazebo::msgs::Time& Diagnostics::sim_time() const {
  const ::gazebo::msgs::Time* p = sim_time_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.sim_time)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* Diagnostics::release_sim_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Diagnostics.sim_time)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Time* temp = sim_time_;
  sim_time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* Diagnostics::mutable_sim_time() {
  _has_bits_[0] |= 0x00000002u;
  if (sim_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    sim_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Diagnostics.sim_time)
  return sim_time_;
}
inline void Diagnostics::set_allocated_sim_time(::gazebo::msgs::Time* sim_time) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sim_time_);
  }
  if (sim_time) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      sim_time = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sim_time, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  sim_time_ = sim_time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Diagnostics.sim_time)
}

// required double real_time_factor = 4;
inline bool Diagnostics::has_real_time_factor() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Diagnostics::clear_real_time_factor() {
  real_time_factor_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Diagnostics::real_time_factor() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Diagnostics.real_time_factor)
  return real_time_factor_;
}
inline void Diagnostics::set_real_time_factor(double value) {
  _has_bits_[0] |= 0x00000004u;
  real_time_factor_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Diagnostics.real_time_factor)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


typedef boost::shared_ptr<gazebo::msgs::Diagnostics> DiagnosticsPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Diagnostics const> ConstDiagnosticsPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_diagnostics_2eproto
