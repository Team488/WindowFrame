// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/joystick.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fjoystick_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fjoystick_2eproto

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
#include "ignition/msgs/vector3d.pb.h"
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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fjoystick_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fjoystick_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fjoystick_2eproto;
namespace ignition {
namespace msgs {
class Joystick;
class JoystickDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern JoystickDefaultTypeInternal _Joystick_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Joystick* Arena::CreateMaybeMessage<::ignition::msgs::Joystick>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Joystick :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Joystick) */ {
 public:
  Joystick();
  virtual ~Joystick();

  Joystick(const Joystick& from);
  Joystick(Joystick&& from) noexcept
    : Joystick() {
    *this = ::std::move(from);
  }

  inline Joystick& operator=(const Joystick& from) {
    CopyFrom(from);
    return *this;
  }
  inline Joystick& operator=(Joystick&& from) noexcept {
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
  static const Joystick& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Joystick* internal_default_instance() {
    return reinterpret_cast<const Joystick*>(
               &_Joystick_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Joystick& a, Joystick& b) {
    a.Swap(&b);
  }
  inline void Swap(Joystick* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Joystick* New() const final {
    return CreateMaybeMessage<Joystick>(nullptr);
  }

  Joystick* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Joystick>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Joystick& from);
  void MergeFrom(const Joystick& from);
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
  void InternalSwap(Joystick* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Joystick";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fjoystick_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fjoystick_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kButtonsFieldNumber = 4,
    kHeaderFieldNumber = 1,
    kTranslationFieldNumber = 2,
    kRotationFieldNumber = 3,
  };
  // repeated int32 buttons = 4;
  int buttons_size() const;
  void clear_buttons();
  ::PROTOBUF_NAMESPACE_ID::int32 buttons(int index) const;
  void set_buttons(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_buttons(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      buttons() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_buttons();

  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Vector3d translation = 2;
  bool has_translation() const;
  void clear_translation();
  const ::ignition::msgs::Vector3d& translation() const;
  ::ignition::msgs::Vector3d* release_translation();
  ::ignition::msgs::Vector3d* mutable_translation();
  void set_allocated_translation(::ignition::msgs::Vector3d* translation);

  // optional .ignition.msgs.Vector3d rotation = 3;
  bool has_rotation() const;
  void clear_rotation();
  const ::ignition::msgs::Vector3d& rotation() const;
  ::ignition::msgs::Vector3d* release_rotation();
  ::ignition::msgs::Vector3d* mutable_rotation();
  void set_allocated_rotation(::ignition::msgs::Vector3d* rotation);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Joystick)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > buttons_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Vector3d* translation_;
  ::ignition::msgs::Vector3d* rotation_;
  friend struct ::TableStruct_ignition_2fmsgs_2fjoystick_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Joystick

// optional .ignition.msgs.Header header = 1;
inline bool Joystick::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& Joystick::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Joystick.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Joystick::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Joystick.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Joystick::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Joystick.header)
  return header_;
}
inline void Joystick::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Joystick.header)
}

// optional .ignition.msgs.Vector3d translation = 2;
inline bool Joystick::has_translation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline const ::ignition::msgs::Vector3d& Joystick::translation() const {
  const ::ignition::msgs::Vector3d* p = translation_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Joystick.translation)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* Joystick::release_translation() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Joystick.translation)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Vector3d* temp = translation_;
  translation_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* Joystick::mutable_translation() {
  _has_bits_[0] |= 0x00000002u;
  if (translation_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    translation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Joystick.translation)
  return translation_;
}
inline void Joystick::set_allocated_translation(::ignition::msgs::Vector3d* translation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(translation_);
  }
  if (translation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      translation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, translation, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  translation_ = translation;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Joystick.translation)
}

// optional .ignition.msgs.Vector3d rotation = 3;
inline bool Joystick::has_rotation() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline const ::ignition::msgs::Vector3d& Joystick::rotation() const {
  const ::ignition::msgs::Vector3d* p = rotation_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Joystick.rotation)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Vector3d*>(
      &::ignition::msgs::_Vector3d_default_instance_);
}
inline ::ignition::msgs::Vector3d* Joystick::release_rotation() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Joystick.rotation)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Vector3d* temp = rotation_;
  rotation_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Vector3d* Joystick::mutable_rotation() {
  _has_bits_[0] |= 0x00000004u;
  if (rotation_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Vector3d>(GetArenaNoVirtual());
    rotation_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Joystick.rotation)
  return rotation_;
}
inline void Joystick::set_allocated_rotation(::ignition::msgs::Vector3d* rotation) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(rotation_);
  }
  if (rotation) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      rotation = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, rotation, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  rotation_ = rotation;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Joystick.rotation)
}

// repeated int32 buttons = 4;
inline int Joystick::buttons_size() const {
  return buttons_.size();
}
inline void Joystick::clear_buttons() {
  buttons_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Joystick::buttons(int index) const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Joystick.buttons)
  return buttons_.Get(index);
}
inline void Joystick::set_buttons(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  buttons_.Set(index, value);
  // @@protoc_insertion_point(field_set:ignition.msgs.Joystick.buttons)
}
inline void Joystick::add_buttons(::PROTOBUF_NAMESPACE_ID::int32 value) {
  buttons_.Add(value);
  // @@protoc_insertion_point(field_add:ignition.msgs.Joystick.buttons)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Joystick::buttons() const {
  // @@protoc_insertion_point(field_list:ignition.msgs.Joystick.buttons)
  return buttons_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Joystick::mutable_buttons() {
  // @@protoc_insertion_point(field_mutable_list:ignition.msgs.Joystick.buttons)
  return &buttons_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef std::unique_ptr<Joystick> JoystickUniquePtr;
typedef std::unique_ptr<const Joystick> ConstJoystickUniquePtr;
typedef std::shared_ptr<Joystick> JoystickSharedPtr;
typedef std::shared_ptr<const Joystick> ConstJoystickSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fjoystick_2eproto
