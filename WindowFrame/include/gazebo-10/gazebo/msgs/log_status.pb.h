// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_status.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_log_5fstatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_log_5fstatus_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "time.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_log_5fstatus_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_log_5fstatus_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_log_5fstatus_2eproto;
namespace gazebo {
namespace msgs {
class LogStatus;
class LogStatusDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LogStatusDefaultTypeInternal _LogStatus_default_instance_;
class LogStatus_LogFile;
class LogStatus_LogFileDefaultTypeInternal;
GZ_MSGS_VISIBLE extern LogStatus_LogFileDefaultTypeInternal _LogStatus_LogFile_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::LogStatus* Arena::CreateMaybeMessage<::gazebo::msgs::LogStatus>(Arena*);
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::LogStatus_LogFile* Arena::CreateMaybeMessage<::gazebo::msgs::LogStatus_LogFile>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

enum LogStatus_LogFile_Units : int {
  LogStatus_LogFile_Units_BYTES = 1,
  LogStatus_LogFile_Units_K_BYTES = 2,
  LogStatus_LogFile_Units_M_BYTES = 3,
  LogStatus_LogFile_Units_G_BYTES = 4
};
GZ_MSGS_VISIBLE bool LogStatus_LogFile_Units_IsValid(int value);
constexpr LogStatus_LogFile_Units LogStatus_LogFile_Units_Units_MIN = LogStatus_LogFile_Units_BYTES;
constexpr LogStatus_LogFile_Units LogStatus_LogFile_Units_Units_MAX = LogStatus_LogFile_Units_G_BYTES;
constexpr int LogStatus_LogFile_Units_Units_ARRAYSIZE = LogStatus_LogFile_Units_Units_MAX + 1;

GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LogStatus_LogFile_Units_descriptor();
template<typename T>
inline const std::string& LogStatus_LogFile_Units_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LogStatus_LogFile_Units>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LogStatus_LogFile_Units_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LogStatus_LogFile_Units_descriptor(), enum_t_value);
}
inline bool LogStatus_LogFile_Units_Parse(
    const std::string& name, LogStatus_LogFile_Units* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LogStatus_LogFile_Units>(
    LogStatus_LogFile_Units_descriptor(), name, value);
}
// ===================================================================

class GZ_MSGS_VISIBLE LogStatus_LogFile :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.LogStatus.LogFile) */ {
 public:
  LogStatus_LogFile();
  virtual ~LogStatus_LogFile();

  LogStatus_LogFile(const LogStatus_LogFile& from);
  LogStatus_LogFile(LogStatus_LogFile&& from) noexcept
    : LogStatus_LogFile() {
    *this = ::std::move(from);
  }

  inline LogStatus_LogFile& operator=(const LogStatus_LogFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogStatus_LogFile& operator=(LogStatus_LogFile&& from) noexcept {
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
  static const LogStatus_LogFile& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogStatus_LogFile* internal_default_instance() {
    return reinterpret_cast<const LogStatus_LogFile*>(
               &_LogStatus_LogFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogStatus_LogFile& a, LogStatus_LogFile& b) {
    a.Swap(&b);
  }
  inline void Swap(LogStatus_LogFile* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogStatus_LogFile* New() const final {
    return CreateMaybeMessage<LogStatus_LogFile>(nullptr);
  }

  LogStatus_LogFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogStatus_LogFile>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogStatus_LogFile& from);
  void MergeFrom(const LogStatus_LogFile& from);
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
  void InternalSwap(LogStatus_LogFile* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.LogStatus.LogFile";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_log_5fstatus_2eproto);
    return ::descriptor_table_log_5fstatus_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef LogStatus_LogFile_Units Units;
  static constexpr Units BYTES =
    LogStatus_LogFile_Units_BYTES;
  static constexpr Units K_BYTES =
    LogStatus_LogFile_Units_K_BYTES;
  static constexpr Units M_BYTES =
    LogStatus_LogFile_Units_M_BYTES;
  static constexpr Units G_BYTES =
    LogStatus_LogFile_Units_G_BYTES;
  static inline bool Units_IsValid(int value) {
    return LogStatus_LogFile_Units_IsValid(value);
  }
  static constexpr Units Units_MIN =
    LogStatus_LogFile_Units_Units_MIN;
  static constexpr Units Units_MAX =
    LogStatus_LogFile_Units_Units_MAX;
  static constexpr int Units_ARRAYSIZE =
    LogStatus_LogFile_Units_Units_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Units_descriptor() {
    return LogStatus_LogFile_Units_descriptor();
  }
  template<typename T>
  static inline const std::string& Units_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Units>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Units_Name.");
    return LogStatus_LogFile_Units_Name(enum_t_value);
  }
  static inline bool Units_Parse(const std::string& name,
      Units* value) {
    return LogStatus_LogFile_Units_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kUriFieldNumber = 1,
    kBasePathFieldNumber = 2,
    kFullPathFieldNumber = 3,
    kSizeFieldNumber = 4,
    kRecordResourcesFieldNumber = 6,
    kSizeUnitsFieldNumber = 5,
  };
  // optional string uri = 1;
  bool has_uri() const;
  void clear_uri();
  const std::string& uri() const;
  void set_uri(const std::string& value);
  void set_uri(std::string&& value);
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  std::string* mutable_uri();
  std::string* release_uri();
  void set_allocated_uri(std::string* uri);

  // optional string base_path = 2;
  bool has_base_path() const;
  void clear_base_path();
  const std::string& base_path() const;
  void set_base_path(const std::string& value);
  void set_base_path(std::string&& value);
  void set_base_path(const char* value);
  void set_base_path(const char* value, size_t size);
  std::string* mutable_base_path();
  std::string* release_base_path();
  void set_allocated_base_path(std::string* base_path);

  // optional string full_path = 3;
  bool has_full_path() const;
  void clear_full_path();
  const std::string& full_path() const;
  void set_full_path(const std::string& value);
  void set_full_path(std::string&& value);
  void set_full_path(const char* value);
  void set_full_path(const char* value, size_t size);
  std::string* mutable_full_path();
  std::string* release_full_path();
  void set_allocated_full_path(std::string* full_path);

  // optional float size = 4;
  bool has_size() const;
  void clear_size();
  float size() const;
  void set_size(float value);

  // optional bool record_resources = 6;
  bool has_record_resources() const;
  void clear_record_resources();
  bool record_resources() const;
  void set_record_resources(bool value);

  // optional .gazebo.msgs.LogStatus.LogFile.Units size_units = 5;
  bool has_size_units() const;
  void clear_size_units();
  ::gazebo::msgs::LogStatus_LogFile_Units size_units() const;
  void set_size_units(::gazebo::msgs::LogStatus_LogFile_Units value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LogStatus.LogFile)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uri_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr base_path_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr full_path_;
  float size_;
  bool record_resources_;
  int size_units_;
  friend struct ::TableStruct_log_5fstatus_2eproto;
};
// -------------------------------------------------------------------

class GZ_MSGS_VISIBLE LogStatus :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.LogStatus) */ {
 public:
  LogStatus();
  virtual ~LogStatus();

  LogStatus(const LogStatus& from);
  LogStatus(LogStatus&& from) noexcept
    : LogStatus() {
    *this = ::std::move(from);
  }

  inline LogStatus& operator=(const LogStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogStatus& operator=(LogStatus&& from) noexcept {
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
  static const LogStatus& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogStatus* internal_default_instance() {
    return reinterpret_cast<const LogStatus*>(
               &_LogStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LogStatus& a, LogStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(LogStatus* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogStatus* New() const final {
    return CreateMaybeMessage<LogStatus>(nullptr);
  }

  LogStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogStatus>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogStatus& from);
  void MergeFrom(const LogStatus& from);
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
  void InternalSwap(LogStatus* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.LogStatus";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_log_5fstatus_2eproto);
    return ::descriptor_table_log_5fstatus_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef LogStatus_LogFile LogFile;

  // accessors -------------------------------------------------------

  enum : int {
    kSimTimeFieldNumber = 1,
    kLogFileFieldNumber = 2,
  };
  // optional .gazebo.msgs.Time sim_time = 1;
  bool has_sim_time() const;
  void clear_sim_time();
  const ::gazebo::msgs::Time& sim_time() const;
  ::gazebo::msgs::Time* release_sim_time();
  ::gazebo::msgs::Time* mutable_sim_time();
  void set_allocated_sim_time(::gazebo::msgs::Time* sim_time);

  // optional .gazebo.msgs.LogStatus.LogFile log_file = 2;
  bool has_log_file() const;
  void clear_log_file();
  const ::gazebo::msgs::LogStatus_LogFile& log_file() const;
  ::gazebo::msgs::LogStatus_LogFile* release_log_file();
  ::gazebo::msgs::LogStatus_LogFile* mutable_log_file();
  void set_allocated_log_file(::gazebo::msgs::LogStatus_LogFile* log_file);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LogStatus)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Time* sim_time_;
  ::gazebo::msgs::LogStatus_LogFile* log_file_;
  friend struct ::TableStruct_log_5fstatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogStatus_LogFile

// optional string uri = 1;
inline bool LogStatus_LogFile::has_uri() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogStatus_LogFile::clear_uri() {
  uri_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LogStatus_LogFile::uri() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.LogFile.uri)
  return uri_.GetNoArena();
}
inline void LogStatus_LogFile::set_uri(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  uri_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogStatus.LogFile.uri)
}
inline void LogStatus_LogFile::set_uri(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  uri_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.LogStatus.LogFile.uri)
}
inline void LogStatus_LogFile::set_uri(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  uri_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LogStatus.LogFile.uri)
}
inline void LogStatus_LogFile::set_uri(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  uri_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LogStatus.LogFile.uri)
}
inline std::string* LogStatus_LogFile::mutable_uri() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogStatus.LogFile.uri)
  return uri_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogStatus_LogFile::release_uri() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogStatus.LogFile.uri)
  if (!has_uri()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return uri_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogStatus_LogFile::set_allocated_uri(std::string* uri) {
  if (uri != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  uri_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogStatus.LogFile.uri)
}

// optional string base_path = 2;
inline bool LogStatus_LogFile::has_base_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogStatus_LogFile::clear_base_path() {
  base_path_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& LogStatus_LogFile::base_path() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.LogFile.base_path)
  return base_path_.GetNoArena();
}
inline void LogStatus_LogFile::set_base_path(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  base_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogStatus.LogFile.base_path)
}
inline void LogStatus_LogFile::set_base_path(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  base_path_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.LogStatus.LogFile.base_path)
}
inline void LogStatus_LogFile::set_base_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  base_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LogStatus.LogFile.base_path)
}
inline void LogStatus_LogFile::set_base_path(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  base_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LogStatus.LogFile.base_path)
}
inline std::string* LogStatus_LogFile::mutable_base_path() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogStatus.LogFile.base_path)
  return base_path_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogStatus_LogFile::release_base_path() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogStatus.LogFile.base_path)
  if (!has_base_path()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return base_path_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogStatus_LogFile::set_allocated_base_path(std::string* base_path) {
  if (base_path != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  base_path_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), base_path);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogStatus.LogFile.base_path)
}

// optional string full_path = 3;
inline bool LogStatus_LogFile::has_full_path() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogStatus_LogFile::clear_full_path() {
  full_path_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& LogStatus_LogFile::full_path() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.LogFile.full_path)
  return full_path_.GetNoArena();
}
inline void LogStatus_LogFile::set_full_path(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  full_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogStatus.LogFile.full_path)
}
inline void LogStatus_LogFile::set_full_path(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  full_path_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gazebo.msgs.LogStatus.LogFile.full_path)
}
inline void LogStatus_LogFile::set_full_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  full_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LogStatus.LogFile.full_path)
}
inline void LogStatus_LogFile::set_full_path(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  full_path_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LogStatus.LogFile.full_path)
}
inline std::string* LogStatus_LogFile::mutable_full_path() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogStatus.LogFile.full_path)
  return full_path_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogStatus_LogFile::release_full_path() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogStatus.LogFile.full_path)
  if (!has_full_path()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return full_path_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogStatus_LogFile::set_allocated_full_path(std::string* full_path) {
  if (full_path != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  full_path_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), full_path);
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogStatus.LogFile.full_path)
}

// optional float size = 4;
inline bool LogStatus_LogFile::has_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogStatus_LogFile::clear_size() {
  size_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float LogStatus_LogFile::size() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.LogFile.size)
  return size_;
}
inline void LogStatus_LogFile::set_size(float value) {
  _has_bits_[0] |= 0x00000008u;
  size_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogStatus.LogFile.size)
}

// optional .gazebo.msgs.LogStatus.LogFile.Units size_units = 5;
inline bool LogStatus_LogFile::has_size_units() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void LogStatus_LogFile::clear_size_units() {
  size_units_ = 1;
  _has_bits_[0] &= ~0x00000020u;
}
inline ::gazebo::msgs::LogStatus_LogFile_Units LogStatus_LogFile::size_units() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.LogFile.size_units)
  return static_cast< ::gazebo::msgs::LogStatus_LogFile_Units >(size_units_);
}
inline void LogStatus_LogFile::set_size_units(::gazebo::msgs::LogStatus_LogFile_Units value) {
  assert(::gazebo::msgs::LogStatus_LogFile_Units_IsValid(value));
  _has_bits_[0] |= 0x00000020u;
  size_units_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogStatus.LogFile.size_units)
}

// optional bool record_resources = 6;
inline bool LogStatus_LogFile::has_record_resources() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LogStatus_LogFile::clear_record_resources() {
  record_resources_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool LogStatus_LogFile::record_resources() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.LogFile.record_resources)
  return record_resources_;
}
inline void LogStatus_LogFile::set_record_resources(bool value) {
  _has_bits_[0] |= 0x00000010u;
  record_resources_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogStatus.LogFile.record_resources)
}

// -------------------------------------------------------------------

// LogStatus

// optional .gazebo.msgs.Time sim_time = 1;
inline bool LogStatus::has_sim_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::gazebo::msgs::Time& LogStatus::sim_time() const {
  const ::gazebo::msgs::Time* p = sim_time_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.sim_time)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Time*>(
      &::gazebo::msgs::_Time_default_instance_);
}
inline ::gazebo::msgs::Time* LogStatus::release_sim_time() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogStatus.sim_time)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Time* temp = sim_time_;
  sim_time_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Time* LogStatus::mutable_sim_time() {
  _has_bits_[0] |= 0x00000001u;
  if (sim_time_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Time>(GetArenaNoVirtual());
    sim_time_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogStatus.sim_time)
  return sim_time_;
}
inline void LogStatus::set_allocated_sim_time(::gazebo::msgs::Time* sim_time) {
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
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  sim_time_ = sim_time;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogStatus.sim_time)
}

// optional .gazebo.msgs.LogStatus.LogFile log_file = 2;
inline bool LogStatus::has_log_file() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogStatus::clear_log_file() {
  if (log_file_ != nullptr) log_file_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::gazebo::msgs::LogStatus_LogFile& LogStatus::log_file() const {
  const ::gazebo::msgs::LogStatus_LogFile* p = log_file_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogStatus.log_file)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::LogStatus_LogFile*>(
      &::gazebo::msgs::_LogStatus_LogFile_default_instance_);
}
inline ::gazebo::msgs::LogStatus_LogFile* LogStatus::release_log_file() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.LogStatus.log_file)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::LogStatus_LogFile* temp = log_file_;
  log_file_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::LogStatus_LogFile* LogStatus::mutable_log_file() {
  _has_bits_[0] |= 0x00000002u;
  if (log_file_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::LogStatus_LogFile>(GetArenaNoVirtual());
    log_file_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogStatus.log_file)
  return log_file_;
}
inline void LogStatus::set_allocated_log_file(::gazebo::msgs::LogStatus_LogFile* log_file) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete log_file_;
  }
  if (log_file) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      log_file = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, log_file, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  log_file_ = log_file;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogStatus.log_file)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


typedef boost::shared_ptr<gazebo::msgs::LogStatus> LogStatusPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::gazebo::msgs::LogStatus_LogFile_Units> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::gazebo::msgs::LogStatus_LogFile_Units>() {
  return ::gazebo::msgs::LogStatus_LogFile_Units_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

typedef const boost::shared_ptr<gazebo::msgs::LogStatus const> ConstLogStatusPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_log_5fstatus_2eproto
