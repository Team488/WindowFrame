// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/subscribe.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fsubscribe_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fsubscribe_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fsubscribe_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fsubscribe_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fsubscribe_2eproto;
namespace ignition {
namespace msgs {
class Subscribe;
class SubscribeDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern SubscribeDefaultTypeInternal _Subscribe_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Subscribe* Arena::CreateMaybeMessage<::ignition::msgs::Subscribe>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Subscribe :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Subscribe) */ {
 public:
  Subscribe();
  virtual ~Subscribe();

  Subscribe(const Subscribe& from);
  Subscribe(Subscribe&& from) noexcept
    : Subscribe() {
    *this = ::std::move(from);
  }

  inline Subscribe& operator=(const Subscribe& from) {
    CopyFrom(from);
    return *this;
  }
  inline Subscribe& operator=(Subscribe&& from) noexcept {
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
  static const Subscribe& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Subscribe* internal_default_instance() {
    return reinterpret_cast<const Subscribe*>(
               &_Subscribe_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Subscribe& a, Subscribe& b) {
    a.Swap(&b);
  }
  inline void Swap(Subscribe* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Subscribe* New() const final {
    return CreateMaybeMessage<Subscribe>(nullptr);
  }

  Subscribe* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Subscribe>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Subscribe& from);
  void MergeFrom(const Subscribe& from);
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
  void InternalSwap(Subscribe* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Subscribe";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fsubscribe_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fsubscribe_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTopicFieldNumber = 2,
    kHostFieldNumber = 3,
    kMsgTypeFieldNumber = 5,
    kHeaderFieldNumber = 1,
    kPortFieldNumber = 4,
    kLatchingFieldNumber = 6,
  };
  // optional string topic = 2;
  bool has_topic() const;
  void clear_topic();
  const std::string& topic() const;
  void set_topic(const std::string& value);
  void set_topic(std::string&& value);
  void set_topic(const char* value);
  void set_topic(const char* value, size_t size);
  std::string* mutable_topic();
  std::string* release_topic();
  void set_allocated_topic(std::string* topic);

  // optional string host = 3;
  bool has_host() const;
  void clear_host();
  const std::string& host() const;
  void set_host(const std::string& value);
  void set_host(std::string&& value);
  void set_host(const char* value);
  void set_host(const char* value, size_t size);
  std::string* mutable_host();
  std::string* release_host();
  void set_allocated_host(std::string* host);

  // optional string msg_type = 5;
  bool has_msg_type() const;
  void clear_msg_type();
  const std::string& msg_type() const;
  void set_msg_type(const std::string& value);
  void set_msg_type(std::string&& value);
  void set_msg_type(const char* value);
  void set_msg_type(const char* value, size_t size);
  std::string* mutable_msg_type();
  std::string* release_msg_type();
  void set_allocated_msg_type(std::string* msg_type);

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional uint32 port = 4;
  bool has_port() const;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::uint32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional bool latching = 6 [default = false];
  bool has_latching() const;
  void clear_latching();
  bool latching() const;
  void set_latching(bool value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Subscribe)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr topic_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr host_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_type_;
  ::ignition::msgs::Header* header_;
  ::PROTOBUF_NAMESPACE_ID::uint32 port_;
  bool latching_;
  friend struct ::TableStruct_ignition_2fmsgs_2fsubscribe_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Subscribe

// optional .ignition.msgs.Header header = 1;
inline bool Subscribe::has_header() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::Header& Subscribe::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Subscribe.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Subscribe::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Subscribe.header)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Subscribe::mutable_header() {
  _has_bits_[0] |= 0x00000008u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Subscribe.header)
  return header_;
}
inline void Subscribe::set_allocated_header(::ignition::msgs::Header* header) {
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
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Subscribe.header)
}

// optional string topic = 2;
inline bool Subscribe::has_topic() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Subscribe::clear_topic() {
  topic_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Subscribe::topic() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Subscribe.topic)
  return topic_.GetNoArena();
}
inline void Subscribe::set_topic(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.Subscribe.topic)
}
inline void Subscribe::set_topic(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.Subscribe.topic)
}
inline void Subscribe::set_topic(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.Subscribe.topic)
}
inline void Subscribe::set_topic(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  topic_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.Subscribe.topic)
}
inline std::string* Subscribe::mutable_topic() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Subscribe.topic)
  return topic_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Subscribe::release_topic() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Subscribe.topic)
  if (!has_topic()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return topic_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Subscribe::set_allocated_topic(std::string* topic) {
  if (topic != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  topic_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), topic);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Subscribe.topic)
}

// optional string host = 3;
inline bool Subscribe::has_host() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Subscribe::clear_host() {
  host_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Subscribe::host() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Subscribe.host)
  return host_.GetNoArena();
}
inline void Subscribe::set_host(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.Subscribe.host)
}
inline void Subscribe::set_host(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.Subscribe.host)
}
inline void Subscribe::set_host(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.Subscribe.host)
}
inline void Subscribe::set_host(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  host_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.Subscribe.host)
}
inline std::string* Subscribe::mutable_host() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Subscribe.host)
  return host_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Subscribe::release_host() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Subscribe.host)
  if (!has_host()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return host_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Subscribe::set_allocated_host(std::string* host) {
  if (host != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  host_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), host);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Subscribe.host)
}

// optional uint32 port = 4;
inline bool Subscribe::has_port() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Subscribe::clear_port() {
  port_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Subscribe::port() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Subscribe.port)
  return port_;
}
inline void Subscribe::set_port(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  port_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Subscribe.port)
}

// optional string msg_type = 5;
inline bool Subscribe::has_msg_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Subscribe::clear_msg_type() {
  msg_type_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Subscribe::msg_type() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Subscribe.msg_type)
  return msg_type_.GetNoArena();
}
inline void Subscribe::set_msg_type(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.Subscribe.msg_type)
}
inline void Subscribe::set_msg_type(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.Subscribe.msg_type)
}
inline void Subscribe::set_msg_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.Subscribe.msg_type)
}
inline void Subscribe::set_msg_type(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  msg_type_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.Subscribe.msg_type)
}
inline std::string* Subscribe::mutable_msg_type() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Subscribe.msg_type)
  return msg_type_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Subscribe::release_msg_type() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Subscribe.msg_type)
  if (!has_msg_type()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return msg_type_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Subscribe::set_allocated_msg_type(std::string* msg_type) {
  if (msg_type != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  msg_type_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), msg_type);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Subscribe.msg_type)
}

// optional bool latching = 6 [default = false];
inline bool Subscribe::has_latching() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Subscribe::clear_latching() {
  latching_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool Subscribe::latching() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Subscribe.latching)
  return latching_;
}
inline void Subscribe::set_latching(bool value) {
  _has_bits_[0] |= 0x00000020u;
  latching_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Subscribe.latching)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Subscribe> SubscribeUniquePtr;
typedef std::unique_ptr<const Subscribe> ConstSubscribeUniquePtr;
typedef std::shared_ptr<Subscribe> SubscribeSharedPtr;
typedef std::shared_ptr<const Subscribe> ConstSubscribeSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fsubscribe_2eproto
