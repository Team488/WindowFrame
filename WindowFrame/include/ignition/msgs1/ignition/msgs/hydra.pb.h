// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ignition/msgs/hydra.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fhydra_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fhydra_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ignition_2fmsgs_2fhydra_2eproto IGNITION_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct_ignition_2fmsgs_2fhydra_2eproto {
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
extern IGNITION_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ignition_2fmsgs_2fhydra_2eproto;
namespace ignition {
namespace msgs {
class Hydra;
class HydraDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern HydraDefaultTypeInternal _Hydra_default_instance_;
class Hydra_Paddle;
class Hydra_PaddleDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern Hydra_PaddleDefaultTypeInternal _Hydra_Paddle_default_instance_;
}  // namespace msgs
}  // namespace ignition
PROTOBUF_NAMESPACE_OPEN
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Hydra* Arena::CreateMaybeMessage<::ignition::msgs::Hydra>(Arena*);
template<> IGNITION_MSGS_VISIBLE ::ignition::msgs::Hydra_Paddle* Arena::CreateMaybeMessage<::ignition::msgs::Hydra_Paddle>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ignition {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE Hydra_Paddle :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Hydra.Paddle) */ {
 public:
  Hydra_Paddle();
  virtual ~Hydra_Paddle();

  Hydra_Paddle(const Hydra_Paddle& from);
  Hydra_Paddle(Hydra_Paddle&& from) noexcept
    : Hydra_Paddle() {
    *this = ::std::move(from);
  }

  inline Hydra_Paddle& operator=(const Hydra_Paddle& from) {
    CopyFrom(from);
    return *this;
  }
  inline Hydra_Paddle& operator=(Hydra_Paddle&& from) noexcept {
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
  static const Hydra_Paddle& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hydra_Paddle* internal_default_instance() {
    return reinterpret_cast<const Hydra_Paddle*>(
               &_Hydra_Paddle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Hydra_Paddle& a, Hydra_Paddle& b) {
    a.Swap(&b);
  }
  inline void Swap(Hydra_Paddle* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Hydra_Paddle* New() const final {
    return CreateMaybeMessage<Hydra_Paddle>(nullptr);
  }

  Hydra_Paddle* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Hydra_Paddle>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Hydra_Paddle& from);
  void MergeFrom(const Hydra_Paddle& from);
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
  void InternalSwap(Hydra_Paddle* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Hydra.Paddle";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fhydra_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fhydra_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPoseFieldNumber = 1,
    kButtonBumperFieldNumber = 2,
    kButton1FieldNumber = 3,
    kButton2FieldNumber = 4,
    kButton3FieldNumber = 5,
    kButton4FieldNumber = 6,
    kButtonJoyFieldNumber = 7,
    kButtonCenterFieldNumber = 8,
    kJoyXFieldNumber = 9,
    kJoyYFieldNumber = 10,
    kTriggerFieldNumber = 11,
  };
  // optional .ignition.msgs.Pose pose = 1;
  bool has_pose() const;
  void clear_pose();
  const ::ignition::msgs::Pose& pose() const;
  ::ignition::msgs::Pose* release_pose();
  ::ignition::msgs::Pose* mutable_pose();
  void set_allocated_pose(::ignition::msgs::Pose* pose);

  // optional bool button_bumper = 2;
  bool has_button_bumper() const;
  void clear_button_bumper();
  bool button_bumper() const;
  void set_button_bumper(bool value);

  // optional bool button_1 = 3;
  bool has_button_1() const;
  void clear_button_1();
  bool button_1() const;
  void set_button_1(bool value);

  // optional bool button_2 = 4;
  bool has_button_2() const;
  void clear_button_2();
  bool button_2() const;
  void set_button_2(bool value);

  // optional bool button_3 = 5;
  bool has_button_3() const;
  void clear_button_3();
  bool button_3() const;
  void set_button_3(bool value);

  // optional bool button_4 = 6;
  bool has_button_4() const;
  void clear_button_4();
  bool button_4() const;
  void set_button_4(bool value);

  // optional bool button_joy = 7;
  bool has_button_joy() const;
  void clear_button_joy();
  bool button_joy() const;
  void set_button_joy(bool value);

  // optional bool button_center = 8;
  bool has_button_center() const;
  void clear_button_center();
  bool button_center() const;
  void set_button_center(bool value);

  // optional double joy_x = 9;
  bool has_joy_x() const;
  void clear_joy_x();
  double joy_x() const;
  void set_joy_x(double value);

  // optional double joy_y = 10;
  bool has_joy_y() const;
  void clear_joy_y();
  double joy_y() const;
  void set_joy_y(double value);

  // optional double trigger = 11;
  bool has_trigger() const;
  void clear_trigger();
  double trigger() const;
  void set_trigger(double value);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Hydra.Paddle)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Pose* pose_;
  bool button_bumper_;
  bool button_1_;
  bool button_2_;
  bool button_3_;
  bool button_4_;
  bool button_joy_;
  bool button_center_;
  double joy_x_;
  double joy_y_;
  double trigger_;
  friend struct ::TableStruct_ignition_2fmsgs_2fhydra_2eproto;
};
// -------------------------------------------------------------------

class IGNITION_MSGS_VISIBLE Hydra :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ignition.msgs.Hydra) */ {
 public:
  Hydra();
  virtual ~Hydra();

  Hydra(const Hydra& from);
  Hydra(Hydra&& from) noexcept
    : Hydra() {
    *this = ::std::move(from);
  }

  inline Hydra& operator=(const Hydra& from) {
    CopyFrom(from);
    return *this;
  }
  inline Hydra& operator=(Hydra&& from) noexcept {
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
  static const Hydra& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Hydra* internal_default_instance() {
    return reinterpret_cast<const Hydra*>(
               &_Hydra_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Hydra& a, Hydra& b) {
    a.Swap(&b);
  }
  inline void Swap(Hydra* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Hydra* New() const final {
    return CreateMaybeMessage<Hydra>(nullptr);
  }

  Hydra* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Hydra>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Hydra& from);
  void MergeFrom(const Hydra& from);
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
  void InternalSwap(Hydra* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ignition.msgs.Hydra";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ignition_2fmsgs_2fhydra_2eproto);
    return ::descriptor_table_ignition_2fmsgs_2fhydra_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Hydra_Paddle Paddle;

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kRightFieldNumber = 2,
    kLeftFieldNumber = 3,
  };
  // optional .ignition.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::ignition::msgs::Header& header() const;
  ::ignition::msgs::Header* release_header();
  ::ignition::msgs::Header* mutable_header();
  void set_allocated_header(::ignition::msgs::Header* header);

  // optional .ignition.msgs.Hydra.Paddle right = 2;
  bool has_right() const;
  void clear_right();
  const ::ignition::msgs::Hydra_Paddle& right() const;
  ::ignition::msgs::Hydra_Paddle* release_right();
  ::ignition::msgs::Hydra_Paddle* mutable_right();
  void set_allocated_right(::ignition::msgs::Hydra_Paddle* right);

  // optional .ignition.msgs.Hydra.Paddle left = 3;
  bool has_left() const;
  void clear_left();
  const ::ignition::msgs::Hydra_Paddle& left() const;
  ::ignition::msgs::Hydra_Paddle* release_left();
  ::ignition::msgs::Hydra_Paddle* mutable_left();
  void set_allocated_left(::ignition::msgs::Hydra_Paddle* left);

  // @@protoc_insertion_point(class_scope:ignition.msgs.Hydra)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::ignition::msgs::Header* header_;
  ::ignition::msgs::Hydra_Paddle* right_;
  ::ignition::msgs::Hydra_Paddle* left_;
  friend struct ::TableStruct_ignition_2fmsgs_2fhydra_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Hydra_Paddle

// optional .ignition.msgs.Pose pose = 1;
inline bool Hydra_Paddle::has_pose() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Pose& Hydra_Paddle::pose() const {
  const ::ignition::msgs::Pose* p = pose_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.pose)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Pose*>(
      &::ignition::msgs::_Pose_default_instance_);
}
inline ::ignition::msgs::Pose* Hydra_Paddle::release_pose() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Hydra.Paddle.pose)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Pose* temp = pose_;
  pose_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Pose* Hydra_Paddle::mutable_pose() {
  _has_bits_[0] |= 0x00000001u;
  if (pose_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Pose>(GetArenaNoVirtual());
    pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Hydra.Paddle.pose)
  return pose_;
}
inline void Hydra_Paddle::set_allocated_pose(::ignition::msgs::Pose* pose) {
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
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  pose_ = pose;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Hydra.Paddle.pose)
}

// optional bool button_bumper = 2;
inline bool Hydra_Paddle::has_button_bumper() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Hydra_Paddle::clear_button_bumper() {
  button_bumper_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool Hydra_Paddle::button_bumper() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_bumper)
  return button_bumper_;
}
inline void Hydra_Paddle::set_button_bumper(bool value) {
  _has_bits_[0] |= 0x00000002u;
  button_bumper_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_bumper)
}

// optional bool button_1 = 3;
inline bool Hydra_Paddle::has_button_1() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Hydra_Paddle::clear_button_1() {
  button_1_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool Hydra_Paddle::button_1() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_1)
  return button_1_;
}
inline void Hydra_Paddle::set_button_1(bool value) {
  _has_bits_[0] |= 0x00000004u;
  button_1_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_1)
}

// optional bool button_2 = 4;
inline bool Hydra_Paddle::has_button_2() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Hydra_Paddle::clear_button_2() {
  button_2_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Hydra_Paddle::button_2() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_2)
  return button_2_;
}
inline void Hydra_Paddle::set_button_2(bool value) {
  _has_bits_[0] |= 0x00000008u;
  button_2_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_2)
}

// optional bool button_3 = 5;
inline bool Hydra_Paddle::has_button_3() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Hydra_Paddle::clear_button_3() {
  button_3_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Hydra_Paddle::button_3() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_3)
  return button_3_;
}
inline void Hydra_Paddle::set_button_3(bool value) {
  _has_bits_[0] |= 0x00000010u;
  button_3_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_3)
}

// optional bool button_4 = 6;
inline bool Hydra_Paddle::has_button_4() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Hydra_Paddle::clear_button_4() {
  button_4_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool Hydra_Paddle::button_4() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_4)
  return button_4_;
}
inline void Hydra_Paddle::set_button_4(bool value) {
  _has_bits_[0] |= 0x00000020u;
  button_4_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_4)
}

// optional bool button_joy = 7;
inline bool Hydra_Paddle::has_button_joy() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Hydra_Paddle::clear_button_joy() {
  button_joy_ = false;
  _has_bits_[0] &= ~0x00000040u;
}
inline bool Hydra_Paddle::button_joy() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_joy)
  return button_joy_;
}
inline void Hydra_Paddle::set_button_joy(bool value) {
  _has_bits_[0] |= 0x00000040u;
  button_joy_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_joy)
}

// optional bool button_center = 8;
inline bool Hydra_Paddle::has_button_center() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Hydra_Paddle::clear_button_center() {
  button_center_ = false;
  _has_bits_[0] &= ~0x00000080u;
}
inline bool Hydra_Paddle::button_center() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.button_center)
  return button_center_;
}
inline void Hydra_Paddle::set_button_center(bool value) {
  _has_bits_[0] |= 0x00000080u;
  button_center_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.button_center)
}

// optional double joy_x = 9;
inline bool Hydra_Paddle::has_joy_x() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Hydra_Paddle::clear_joy_x() {
  joy_x_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double Hydra_Paddle::joy_x() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.joy_x)
  return joy_x_;
}
inline void Hydra_Paddle::set_joy_x(double value) {
  _has_bits_[0] |= 0x00000100u;
  joy_x_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.joy_x)
}

// optional double joy_y = 10;
inline bool Hydra_Paddle::has_joy_y() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Hydra_Paddle::clear_joy_y() {
  joy_y_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline double Hydra_Paddle::joy_y() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.joy_y)
  return joy_y_;
}
inline void Hydra_Paddle::set_joy_y(double value) {
  _has_bits_[0] |= 0x00000200u;
  joy_y_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.joy_y)
}

// optional double trigger = 11;
inline bool Hydra_Paddle::has_trigger() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void Hydra_Paddle::clear_trigger() {
  trigger_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline double Hydra_Paddle::trigger() const {
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.Paddle.trigger)
  return trigger_;
}
inline void Hydra_Paddle::set_trigger(double value) {
  _has_bits_[0] |= 0x00000400u;
  trigger_ = value;
  // @@protoc_insertion_point(field_set:ignition.msgs.Hydra.Paddle.trigger)
}

// -------------------------------------------------------------------

// Hydra

// optional .ignition.msgs.Header header = 1;
inline bool Hydra::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::ignition::msgs::Header& Hydra::header() const {
  const ::ignition::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Header*>(
      &::ignition::msgs::_Header_default_instance_);
}
inline ::ignition::msgs::Header* Hydra::release_header() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Hydra.header)
  _has_bits_[0] &= ~0x00000001u;
  ::ignition::msgs::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Header* Hydra::mutable_header() {
  _has_bits_[0] |= 0x00000001u;
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Hydra.header)
  return header_;
}
inline void Hydra::set_allocated_header(::ignition::msgs::Header* header) {
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
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Hydra.header)
}

// optional .ignition.msgs.Hydra.Paddle right = 2;
inline bool Hydra::has_right() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Hydra::clear_right() {
  if (right_ != nullptr) right_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::ignition::msgs::Hydra_Paddle& Hydra::right() const {
  const ::ignition::msgs::Hydra_Paddle* p = right_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.right)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Hydra_Paddle*>(
      &::ignition::msgs::_Hydra_Paddle_default_instance_);
}
inline ::ignition::msgs::Hydra_Paddle* Hydra::release_right() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Hydra.right)
  _has_bits_[0] &= ~0x00000002u;
  ::ignition::msgs::Hydra_Paddle* temp = right_;
  right_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Hydra_Paddle* Hydra::mutable_right() {
  _has_bits_[0] |= 0x00000002u;
  if (right_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Hydra_Paddle>(GetArenaNoVirtual());
    right_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Hydra.right)
  return right_;
}
inline void Hydra::set_allocated_right(::ignition::msgs::Hydra_Paddle* right) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete right_;
  }
  if (right) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      right = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, right, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  right_ = right;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Hydra.right)
}

// optional .ignition.msgs.Hydra.Paddle left = 3;
inline bool Hydra::has_left() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Hydra::clear_left() {
  if (left_ != nullptr) left_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::ignition::msgs::Hydra_Paddle& Hydra::left() const {
  const ::ignition::msgs::Hydra_Paddle* p = left_;
  // @@protoc_insertion_point(field_get:ignition.msgs.Hydra.left)
  return p != nullptr ? *p : *reinterpret_cast<const ::ignition::msgs::Hydra_Paddle*>(
      &::ignition::msgs::_Hydra_Paddle_default_instance_);
}
inline ::ignition::msgs::Hydra_Paddle* Hydra::release_left() {
  // @@protoc_insertion_point(field_release:ignition.msgs.Hydra.left)
  _has_bits_[0] &= ~0x00000004u;
  ::ignition::msgs::Hydra_Paddle* temp = left_;
  left_ = nullptr;
  return temp;
}
inline ::ignition::msgs::Hydra_Paddle* Hydra::mutable_left() {
  _has_bits_[0] |= 0x00000004u;
  if (left_ == nullptr) {
    auto* p = CreateMaybeMessage<::ignition::msgs::Hydra_Paddle>(GetArenaNoVirtual());
    left_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ignition.msgs.Hydra.left)
  return left_;
}
inline void Hydra::set_allocated_left(::ignition::msgs::Hydra_Paddle* left) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete left_;
  }
  if (left) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      left = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, left, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  left_ = left;
  // @@protoc_insertion_point(field_set_allocated:ignition.msgs.Hydra.left)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


typedef std::unique_ptr<Hydra> HydraUniquePtr;
typedef std::unique_ptr<const Hydra> ConstHydraUniquePtr;
typedef std::shared_ptr<Hydra> HydraSharedPtr;
typedef std::shared_ptr<const Hydra> ConstHydraSharedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace ignition

#ifdef _MSC_VER
#pragma warning(pop)
#endif
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ignition_2fmsgs_2fhydra_2eproto