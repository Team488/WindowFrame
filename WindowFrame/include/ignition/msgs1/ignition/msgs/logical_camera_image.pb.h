// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/logical_camera_image.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto

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
#include "ignition/msgs/pose.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto;
namespace ignition {
namespace msgs {
class LogicalCameraImage;
class LogicalCameraImageDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LogicalCameraImageDefaultTypeInternal _LogicalCameraImage_default_instance_;
class LogicalCameraImage_Model;
class LogicalCameraImage_ModelDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LogicalCameraImage_ModelDefaultTypeInternal _LogicalCameraImage_Model_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::LogicalCameraImage* Arena::CreateMaybeMessage<::ignition::msgs::LogicalCameraImage>(Arena*);
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::LogicalCameraImage_Model* Arena::CreateMaybeMessage<::ignition::msgs::LogicalCameraImage_Model>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LogicalCameraImage_Model :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.LogicalCameraImage.Model) */ {
 public:
  LogicalCameraImage_Model();
  virtual ~LogicalCameraImage_Model();

  LogicalCameraImage_Model(const LogicalCameraImage_Model& from);
  LogicalCameraImage_Model(LogicalCameraImage_Model&& from) noexcept
    : LogicalCameraImage_Model() {
    *this = ::std::move(from);
  }

  inline LogicalCameraImage_Model& operator=(const LogicalCameraImage_Model& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogicalCameraImage_Model& operator=(LogicalCameraImage_Model&& from) noexcept {
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
  static const LogicalCameraImage_Model& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogicalCameraImage_Model* internal_default_instance() {
    return reinterpret_cast<const LogicalCameraImage_Model*>(
               &_LogicalCameraImage_Model_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogicalCameraImage_Model& a, LogicalCameraImage_Model& b) {
    a.Swap(&b);
  }
  inline void Swap(LogicalCameraImage_Model* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogicalCameraImage_Model* New() const final {
    return CreateMaybeMessage<LogicalCameraImage_Model>(nullptr);
  }

  LogicalCameraImage_Model* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogicalCameraImage_Model>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogicalCameraImage_Model& from);
  void MergeFrom(const LogicalCameraImage_Model& from);
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
  void InternalSwap(LogicalCameraImage_Model* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.LogicalCameraImage.Model";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kPoseFieldNumber = 2,
  };
  // optional string name = 1;
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

  // optional .ignition.msgs.Pose pose = 2;
  bool has_pose() const;
  void clear_pose();
  const ::ignition::msgs::Pose& pose() const;
  ::ignition::msgs::Pose* release_pose();
  ::ignition::msgs::Pose* mutable_pose();
  void set_allocated_pose(::ignition::msgs::Pose* pose);

  // @@protoc_insertion_point(class_scope:ignition.msgs.LogicalCameraImage.Model)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::ignition::msgs::Pose* pose_;
  friend struct ::TableStruct_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto;
};
// -------------------------------------------------------------------

class IGNITION_MSGS_VISIBLE LogicalCameraImage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.LogicalCameraImage) */ {
 public:
  LogicalCameraImage();
  virtual ~LogicalCameraImage();

  LogicalCameraImage(const LogicalCameraImage& from);
  LogicalCameraImage(LogicalCameraImage&& from) noexcept
    : LogicalCameraImage() {
    *this = ::std::move(from);
  }

  inline LogicalCameraImage& operator=(const LogicalCameraImage& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogicalCameraImage& operator=(LogicalCameraImage&& from) noexcept {
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
  static const LogicalCameraImage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LogicalCameraImage* internal_default_instance() {
    return reinterpret_cast<const LogicalCameraImage*>(
               &_LogicalCameraImage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LogicalCameraImage& a, LogicalCameraImage& b) {
    a.Swap(&b);
  }
  inline void Swap(LogicalCameraImage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogicalCameraImage* New() const final {
    return CreateMaybeMessage<LogicalCameraImage>(nullptr);
  }

  LogicalCameraImage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogicalCameraImage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogicalCameraImage& from);
  void MergeFrom(const LogicalCameraImage& from);
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
  void InternalSwap(LogicalCameraImage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.LogicalCameraImage";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef LogicalCameraImage_Model Model;

  // accessors -------------------------------------------------------

  enum : int {
    kModelFieldNumber = 3,
    kHeaderFieldNumber = 1,
    kPoseFieldNumber = 2,
  };
  // repeated .ignition.msgs.LogicalCameraImage.Model model = 3;
  int model_size() const;
  void clear_model();
  ::ignition::msgs::LogicalCameraImage_Model* mutable_model(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::LogicalCameraImage_Model >*
      mutable_model();
  const ::ignition::msgs::LogicalCameraImage_Model& model(int index) const;
  ::ignition::msgs::LogicalCameraImage_Model* add_model();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::LogicalCameraImage_Model >&
      model() const;

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Pose pose = 2;
  bool has_pose() const;
  void clear_pose();
  const ::ignition::msgs::Pose& pose() const;
  ::ignition::msgs::Pose* release_pose();
  ::ignition::msgs::Pose* mutable_pose();
  void set_allocated_pose(::ignition::msgs::Pose* pose);

  // @@protoc_insertion_point(class_scope:ignition.msgs.LogicalCameraImage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::LogicalCameraImage_Model > model_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Pose* pose_;
  friend struct ::TableStruct_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogicalCameraImage_Model

// optional string name = 1;
inline bool LogicalCameraImage_Model::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogicalCameraImage_Model::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& LogicalCameraImage_Model::name() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraImage.Model.name)
  return name_.GetNoArena();
}
inline void LogicalCameraImage_Model::set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ignition.msgs.LogicalCameraImage.Model.name)
}
inline void LogicalCameraImage_Model::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ignition.msgs.LogicalCameraImage.Model.name)
}
inline void LogicalCameraImage_Model::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ignition.msgs.LogicalCameraImage.Model.name)
}
inline void LogicalCameraImage_Model::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ignition.msgs.LogicalCameraImage.Model.name)
}
inline std::string* LogicalCameraImage_Model::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:ignition.msgs.LogicalCameraImage.Model.name)
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LogicalCameraImage_Model::release_name() {
  // @@protoc_insertion_point(field_release:ignition.msgs.LogicalCameraImage.Model.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LogicalCameraImage_Model::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.LogicalCameraImage.Model.name)
}

// optional .ignition.msgs.Pose pose = 2;
inline bool LogicalCameraImage_Model::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Pose& LogicalCameraImage_Model::pose() const {
  const ::ignition::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraImage.Model.pose)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Pose*>(
      &::ignition::msgs::_Pose_default_instance_);
}
inline ::ignition::msgs::Pose* LogicalCameraImage_Model::release_pose() {
  // @@protoc_insertion_point(field_release:ignition.msgs.LogicalCameraImage.Model.pose)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Pose* LogicalCameraImage_Model::mutable_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.LogicalCameraImage.Model.pose)
  return pose_;
}
inline void LogicalCameraImage_Model::set_allocated_pose(::ignition::msgs::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.LogicalCameraImage.Model.pose)
}

// -------------------------------------------------------------------

// LogicalCameraImage

// optional .ignition.msgs.Header header = 1;
inline bool LogicalCameraImage::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& LogicalCameraImage::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraImage.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* LogicalCameraImage::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.LogicalCameraImage.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* LogicalCameraImage::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.LogicalCameraImage.header)
  return header_;
}
inline void LogicalCameraImage::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.LogicalCameraImage.header)
}

// optional .ignition.msgs.Pose pose = 2;
inline bool LogicalCameraImage::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Pose& LogicalCameraImage::pose() const {
  const ::ignition::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraImage.pose)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Pose*>(
      &::ignition::msgs::_Pose_default_instance_);
}
inline ::ignition::msgs::Pose* LogicalCameraImage::release_pose() {
  // @@protoc_insertion_point(field_release:ignition.msgs.LogicalCameraImage.pose)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Pose* LogicalCameraImage::mutable_pose() {
  _has_bits_[0] |= 0x00000002u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.LogicalCameraImage.pose)
  return pose_;
}
inline void LogicalCameraImage::set_allocated_pose(::ignition::msgs::Pose* pose) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(pose_);
  }
  if (pose) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pose = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pose, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.LogicalCameraImage.pose)
}

// repeated .ignition.msgs.LogicalCameraImage.Model model = 3;
inline int LogicalCameraImage::model_size() const {
  return model_.size();
}
inline void LogicalCameraImage::clear_model() {
  model_.Clear();
}
inline ::ignition::msgs::LogicalCameraImage_Model* LogicalCameraImage::mutable_model(int index) {
  // @@protoc_insertion_point(field_mutable:ignition.msgs.LogicalCameraImage.model)
  return model_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::LogicalCameraImage_Model >*
LogicalCameraImage::mutable_model() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.LogicalCameraImage.model)
  return &model_;
}
inline const ::ignition::msgs::LogicalCameraImage_Model& LogicalCameraImage::model(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.LogicalCameraImage.model)
  return model_.Get(index);
}
inline ::ignition::msgs::LogicalCameraImage_Model* LogicalCameraImage::add_model() {
  // @@protoc_insertion_point(field_add:ignition.msgs.LogicalCameraImage.model)
  return model_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ignition::msgs::LogicalCameraImage_Model >&
LogicalCameraImage::model() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.LogicalCameraImage.model)
  return model_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


typedef std::unique_ptr<LogicalCameraImage> LogicalCameraImageUniquePtr;
typedef std::unique_ptr<const LogicalCameraImage> ConstLogicalCameraImageUniquePtr;
typedef std::shared_ptr<LogicalCameraImage> LogicalCameraImageSharedPtr;
typedef std::shared_ptr<const LogicalCameraImage> ConstLogicalCameraImageSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2flogical_5fcamera_5fimage_2eproto
