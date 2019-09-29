// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/server_control.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fserver_5fcontrol_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fserver_5fcontrol_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fserver_5fcontrol_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fserver_5fcontrol_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fserver_5fcontrol_2eproto;
namespace ignition {
namespace msgs {
class ServerControl;
class ServerControlDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern ServerControlDefaultTypeInternal _ServerControl_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::ServerControl* Arena::CreateMaybeMessage<::ignition::msgs::ServerControl>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE ServerControl :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.ServerControl) */ {
 public:
  ServerControl();
  virtual ~ServerControl();

  ServerControl(const ServerControl& from);
  ServerControl(ServerControl&& from) noexcept
    : ServerControl() {
    *this = ::std::move(from);
  }

  inline ServerControl& operator=(const ServerControl& from) {
    CopyFrom(from);
    return *this;
  }
  inline ServerControl& operator=(ServerControl&& from) noexcept {
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
  static const ServerControl& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ServerControl* internal_default_instance() {
    return reinterpret_cast<const ServerControl*>(
               &_ServerControl_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ServerControl& a, ServerControl& b) {
    a.Swap(&b);
  }
  inline void Swap(ServerControl* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ServerControl* New() const final {
    return CreateMaybeMessage<ServerControl>(nullptr);
  }

  ServerControl* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ServerControl>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ServerControl& from);
  void MergeFrom(const ServerControl& from);
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
  void InternalSwap(ServerControl* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.ServerControl";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fserver_5fcontrol_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fserver_5fcontrol_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSaveWorldNameFieldNumber = 2,
    kSaveFilenameFieldNumber = 3,
    kOpenFilenameFieldNumber = 4,
    kHeaderFieldNumber = 1,
    kNewWorldFieldNumber = 5,
    kStopFieldNumber = 6,
    kCloneFieldNumber = 7,
    kNewPortFieldNumber = 8,
  };
  // optional string save_world_name = 2;
  bool has_save_world_name() const;
  void clear_save_world_name();
  const std::string& save_world_name() const;
  void set_save_world_name(const std::string& value);
  void set_save_world_name(std::string&& value);
  void set_save_world_name(const char* value);
  void set_save_world_name(const char* value, size_t size);
  std::string* mutable_save_world_name();
  std::string* release_save_world_name();
  void set_allocated_save_world_name(std::string* save_world_name);

  // optional string save_filename = 3;
  bool has_save_filename() const;
  void clear_save_filename();
  const std::string& save_filename() const;
  void set_save_filename(const std::string& value);
  void set_save_filename(std::string&& value);
  void set_save_filename(const char* value);
  void set_save_filename(const char* value, size_t size);
  std::string* mutable_save_filename();
  std::string* release_save_filename();
  void set_allocated_save_filename(std::string* save_filename);

  // optional string open_filename = 4;
  bool has_open_filename() const;
  void clear_open_filename();
  const std::string& open_filename() const;
  void set_open_filename(const std::string& value);
  void set_open_filename(std::string&& value);
  void set_open_filename(const char* value);
  void set_open_filename(const char* value, size_t size);
  std::string* mutable_open_filename();
  std::string* release_open_filename();
  void set_allocated_open_filename(std::string* open_filename);

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional bool new_world = 5;
  bool has_new_world() const;
  void clear_new_world();
  bool new_world() const;
  void set_new_world(bool value);

  // optional bool stop = 6;
  bool has_stop() const;
  void clear_stop();
  bool stop() const;
  void set_stop(bool value);

  // optional bool clone = 7;
  bool has_clone() const;
  void clear_clone();
  bool clone() const;
  void set_clone(bool value);

  // optional uint32 new_port = 8;
  bool has_new_port() const;
  void clear_new_port();
  ::PROTOBUF_NAMESPACE_ID::uint32 new_port() const;
  void set_new_port(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.ServerControl)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr save_world_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr save_filename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr open_filename_;
  ::ignition::msgs::Header* header_;
  bool new_world_;
  bool stop_;
  bool clone_;
  ::PROTOBUF_NAMESPACE_ID::uint32 new_port_;
  friend struct ::TableStruct_ignition_2fmsgs_2fserver_5fcontrol_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ServerControl

// optional .ignition.msgs.Header header = 1;
inline bool ServerControl::has_header() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline const ::ignition::msgs::Header& ServerControl::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* ServerControl::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.ServerControl.header)
  _has_bits_[0] &= ~0x00000008u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* ServerControl::mutable_header() {
  _has_bits_[0] |= 0x00000008u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.ServerControl.header)
  return header_;
}
inline void ServerControl::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.ServerControl.header)
}

// optional string save_world_name = 2;
inline bool ServerControl::has_save_world_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerControl::clear_save_world_name() {
  save_world_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ServerControl::save_world_name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.save_world_name)
  return save_world_name_.GetNoArena();
}
inline void ServerControl::set_save_world_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  save_world_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.save_world_name)
}
inline void ServerControl::set_save_world_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  save_world_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.ServerControl.save_world_name)
}
inline void ServerControl::set_save_world_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  save_world_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.ServerControl.save_world_name)
}
inline void ServerControl::set_save_world_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  save_world_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.ServerControl.save_world_name)
}
inline std::string* ServerControl::mutable_save_world_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.ServerControl.save_world_name)
  return save_world_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ServerControl::release_save_world_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.ServerControl.save_world_name)
  if (!has_save_world_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return save_world_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ServerControl::set_allocated_save_world_name(std::string* save_world_name) {
  if (save_world_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  save_world_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), save_world_name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.ServerControl.save_world_name)
}

// optional string save_filename = 3;
inline bool ServerControl::has_save_filename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerControl::clear_save_filename() {
  save_filename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ServerControl::save_filename() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.save_filename)
  return save_filename_.GetNoArena();
}
inline void ServerControl::set_save_filename(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  save_filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.save_filename)
}
inline void ServerControl::set_save_filename(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  save_filename_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.ServerControl.save_filename)
}
inline void ServerControl::set_save_filename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  save_filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.ServerControl.save_filename)
}
inline void ServerControl::set_save_filename(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  save_filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.ServerControl.save_filename)
}
inline std::string* ServerControl::mutable_save_filename() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.ServerControl.save_filename)
  return save_filename_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ServerControl::release_save_filename() {
  // @@protoc_insertion_point(field_release:ignition.msgs.ServerControl.save_filename)
  if (!has_save_filename()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return save_filename_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ServerControl::set_allocated_save_filename(std::string* save_filename) {
  if (save_filename != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  save_filename_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), save_filename);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.ServerControl.save_filename)
}

// optional string open_filename = 4;
inline bool ServerControl::has_open_filename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ServerControl::clear_open_filename() {
  open_filename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& ServerControl::open_filename() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.open_filename)
  return open_filename_.GetNoArena();
}
inline void ServerControl::set_open_filename(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  open_filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.open_filename)
}
inline void ServerControl::set_open_filename(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  open_filename_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.ServerControl.open_filename)
}
inline void ServerControl::set_open_filename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  open_filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.ServerControl.open_filename)
}
inline void ServerControl::set_open_filename(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  open_filename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.ServerControl.open_filename)
}
inline std::string* ServerControl::mutable_open_filename() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.ServerControl.open_filename)
  return open_filename_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ServerControl::release_open_filename() {
  // @@protoc_insertion_point(field_release:ignition.msgs.ServerControl.open_filename)
  if (!has_open_filename()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return open_filename_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ServerControl::set_allocated_open_filename(std::string* open_filename) {
  if (open_filename != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  open_filename_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), open_filename);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.ServerControl.open_filename)
}

// optional bool new_world = 5;
inline bool ServerControl::has_new_world() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ServerControl::clear_new_world() {
  new_world_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool ServerControl::new_world() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.new_world)
  return new_world_;
}
inline void ServerControl::set_new_world(bool value) {
  _has_bits_[0] |= 0x00000010u;
  new_world_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.new_world)
}

// optional bool stop = 6;
inline bool ServerControl::has_stop() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ServerControl::clear_stop() {
  stop_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool ServerControl::stop() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.stop)
  return stop_;
}
inline void ServerControl::set_stop(bool value) {
  _has_bits_[0] |= 0x00000020u;
  stop_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.stop)
}

// optional bool clone = 7;
inline bool ServerControl::has_clone() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ServerControl::clear_clone() {
  clone_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool ServerControl::clone() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.clone)
  return clone_;
}
inline void ServerControl::set_clone(bool value) {
  _has_bits_[0] |= 0x00000040u;
  clone_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.clone)
}

// optional uint32 new_port = 8;
inline bool ServerControl::has_new_port() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ServerControl::clear_new_port() {
  new_port_ = 0u;
  _has_bits_[0] &= ~0x00000080u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ServerControl::new_port() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.ServerControl.new_port)
  return new_port_;
}
inline void ServerControl::set_new_port(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000080u;
  new_port_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.ServerControl.new_port)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<ServerControl> ServerControlUniquePtr;
typedef std::unique_ptr<const ServerControl> ConstServerControlUniquePtr;
typedef std::shared_ptr<ServerControl> ServerControlSharedPtr;
typedef std::shared_ptr<const ServerControl> ConstServerControlSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fserver_5fcontrol_2eproto
