// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laserscan_stamped.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_laserscan_5fstamped_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_laserscan_5fstamped_2eproto

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
#include "laserscan.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_laserscan_5fstamped_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_laserscan_5fstamped_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_laserscan_5fstamped_2eproto;
namespace gazebo {
namespace msgs {
class LaserScanStamped;
class LaserScanStampedDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LaserScanStampedDefaultTypeInternal _LaserScanStamped_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::LaserScanStamped* Arena::CreateMaybeMessage<::gazebo::msgs::LaserScanStamped>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE LaserScanStamped :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.LaserScanStamped) */ {
 public:
  LaserScanStamped();
  virtual ~LaserScanStamped();

  LaserScanStamped(const LaserScanStamped& from);
  LaserScanStamped(LaserScanStamped&& from) noexcept
    : LaserScanStamped() {
    *this = ::std::move(from);
  }

  inline LaserScanStamped& operator=(const LaserScanStamped& from) {
    CopyFrom(from);
    return *this;
  }
  inline LaserScanStamped& operator=(LaserScanStamped&& from) noexcept {
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
  static const LaserScanStamped& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LaserScanStamped* internal_default_instance() {
    return reinterpret_cast<const LaserScanStamped*>(
               &_LaserScanStamped_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LaserScanStamped& a, LaserScanStamped& b) {
    a.Swap(&b);
  }
  inline void Swap(LaserScanStamped* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LaserScanStamped* New() const final {
    return CreateMaybeMessage<LaserScanStamped>(nullptr);
  }

  LaserScanStamped* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LaserScanStamped>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LaserScanStamped& from);
  void MergeFrom(const LaserScanStamped& from);
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
  void InternalSwap(LaserScanStamped* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.LaserScanStamped";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_laserscan_5fstamped_2eproto);
    return ::descriptor_table_laserscan_5fstamped_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeFieldNumber = 1,
    kScanFieldNumber = 2,
  };
  // required .gazebo.msgs.Time time = 1;
  bool has_time() const;
  void clear_time();
  const ::gazebo::msgs::Time& time() const;
  ::gazebo::msgs::Time* release_time();
  ::gazebo::msgs::Time* mutable_time();
  void set_allocated_time(::gazebo::msgs::Time* time);

  // required .gazebo.msgs.LaserScan scan = 2;
  bool has_scan() const;
  void clear_scan();
  const ::gazebo::msgs::LaserScan& scan() const;
  ::gazebo::msgs::LaserScan* release_scan();
  ::gazebo::msgs::LaserScan* mutable_scan();
  void set_allocated_scan(::gazebo::msgs::LaserScan* scan);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LaserScanStamped)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Time* time_;
  ::gazebo::msgs::LaserScan* scan_;
  friend struct ::TableStruct_laserscan_5fstamped_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LaserScanStamped

// required .gazebo.msgs.Time time = 1;
inline bool LaserScanStamped::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::gazebo::msgs::Time& LaserScanStamped::time() const {
  const ::gazebo::msgs::Time* p = time_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScanStamped.time)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* LaserScanStamped::release_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LaserScanStamped.time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = time_;
  time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* LaserScanStamped::mutable_time() {
  _has_bits_[0] |= 0x00000001u;
  if (time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LaserScanStamped.time)
  return time_;
}
inline void LaserScanStamped::set_allocated_time(::gazebo::msgs::Time* time) {
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
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  time_ = time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LaserScanStamped.time)
}

// required .gazebo.msgs.LaserScan scan = 2;
inline bool LaserScanStamped::has_scan() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::gazebo::msgs::LaserScan& LaserScanStamped::scan() const {
  const ::gazebo::msgs::LaserScan* p = scan_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LaserScanStamped.scan)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::LaserScan*>(
      &::gazebo::msgs::_LaserScan_default_instance_);
}
inline ::gazebo::msgs::LaserScan* LaserScanStamped::release_scan() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LaserScanStamped.scan)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::LaserScan* temp = scan_;
  scan_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::LaserScan* LaserScanStamped::mutable_scan() {
  _has_bits_[0] |= 0x00000002u;
  if (scan_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::LaserScan>(GetArenaNoVirtual());
    scan_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LaserScanStamped.scan)
  return scan_;
}
inline void LaserScanStamped::set_allocated_scan(::gazebo::msgs::LaserScan* scan) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(scan_);
  }
  if (scan) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      scan = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, scan, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  scan_ = scan;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LaserScanStamped.scan)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::LaserScanStamped> LaserScanStampedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::LaserScanStamped const> ConstLaserScanStampedPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_laserscan_5fstamped_2eproto
