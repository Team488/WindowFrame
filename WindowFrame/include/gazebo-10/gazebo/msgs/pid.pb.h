// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pid.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pid_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pid_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_pid_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_pid_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pid_2eproto;
namespace gazebo {
namespace msgs {
class PID;
class PIDDefaultTypeInternal;
GZ_MSGS_VISIBLE extern PIDDefaultTypeInternal _PID_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::PID* Arena::CreateMaybeMessage<::gazebo::msgs::PID>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE PID :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.PID) */ {
 public:
  PID();
  virtual ~PID();

  PID(const PID& from);
  PID(PID&& from) noexcept
    : PID() {
    *this = ::std::move(from);
  }

  inline PID& operator=(const PID& from) {
    CopyFrom(from);
    return *this;
  }
  inline PID& operator=(PID&& from) noexcept {
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
  static const PID& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PID* internal_default_instance() {
    return reinterpret_cast<const PID*>(
               &_PID_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PID& a, PID& b) {
    a.Swap(&b);
  }
  inline void Swap(PID* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PID* New() const final {
    return CreateMaybeMessage<PID>(nullptr);
  }

  PID* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PID>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PID& from);
  void MergeFrom(const PID& from);
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
  void InternalSwap(PID* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.PID";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pid_2eproto);
    return ::descriptor_table_pid_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTargetFieldNumber = 1,
    kPGainFieldNumber = 2,
    kIGainFieldNumber = 3,
    kDGainFieldNumber = 4,
    kIMaxFieldNumber = 5,
    kIMinFieldNumber = 6,
    kLimitFieldNumber = 7,
  };
  // optional double target = 1 [default = 0];
  bool has_target() const;
  void clear_target();
  double target() const;
  void set_target(double value);

  // optional double p_gain = 2 [default = 0];
  bool has_p_gain() const;
  void clear_p_gain();
  double p_gain() const;
  void set_p_gain(double value);

  // optional double i_gain = 3 [default = 0];
  bool has_i_gain() const;
  void clear_i_gain();
  double i_gain() const;
  void set_i_gain(double value);

  // optional double d_gain = 4 [default = 0];
  bool has_d_gain() const;
  void clear_d_gain();
  double d_gain() const;
  void set_d_gain(double value);

  // optional double i_max = 5 [default = 0];
  bool has_i_max() const;
  void clear_i_max();
  double i_max() const;
  void set_i_max(double value);

  // optional double i_min = 6 [default = 0];
  bool has_i_min() const;
  void clear_i_min();
  double i_min() const;
  void set_i_min(double value);

  // optional double limit = 7 [default = 0];
  bool has_limit() const;
  void clear_limit();
  double limit() const;
  void set_limit(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.PID)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double target_;
  double p_gain_;
  double i_gain_;
  double d_gain_;
  double i_max_;
  double i_min_;
  double limit_;
  friend struct ::TableStruct_pid_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PID

// optional double target = 1 [default = 0];
inline bool PID::has_target() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PID::clear_target() {
  target_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double PID::target() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.target)
  return target_;
}
inline void PID::set_target(double value) {
  _has_bits_[0] |= 0x00000001u;
  target_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.target)
}

// optional double p_gain = 2 [default = 0];
inline bool PID::has_p_gain() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PID::clear_p_gain() {
  p_gain_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double PID::p_gain() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.p_gain)
  return p_gain_;
}
inline void PID::set_p_gain(double value) {
  _has_bits_[0] |= 0x00000002u;
  p_gain_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.p_gain)
}

// optional double i_gain = 3 [default = 0];
inline bool PID::has_i_gain() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PID::clear_i_gain() {
  i_gain_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double PID::i_gain() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.i_gain)
  return i_gain_;
}
inline void PID::set_i_gain(double value) {
  _has_bits_[0] |= 0x00000004u;
  i_gain_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.i_gain)
}

// optional double d_gain = 4 [default = 0];
inline bool PID::has_d_gain() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PID::clear_d_gain() {
  d_gain_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double PID::d_gain() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.d_gain)
  return d_gain_;
}
inline void PID::set_d_gain(double value) {
  _has_bits_[0] |= 0x00000008u;
  d_gain_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.d_gain)
}

// optional double i_max = 5 [default = 0];
inline bool PID::has_i_max() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PID::clear_i_max() {
  i_max_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double PID::i_max() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.i_max)
  return i_max_;
}
inline void PID::set_i_max(double value) {
  _has_bits_[0] |= 0x00000010u;
  i_max_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.i_max)
}

// optional double i_min = 6 [default = 0];
inline bool PID::has_i_min() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PID::clear_i_min() {
  i_min_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double PID::i_min() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.i_min)
  return i_min_;
}
inline void PID::set_i_min(double value) {
  _has_bits_[0] |= 0x00000020u;
  i_min_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.i_min)
}

// optional double limit = 7 [default = 0];
inline bool PID::has_limit() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PID::clear_limit() {
  limit_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double PID::limit() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PID.limit)
  return limit_;
}
inline void PID::set_limit(double value) {
  _has_bits_[0] |= 0x00000040u;
  limit_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PID.limit)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::PID> PIDPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::PID const> ConstPIDPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pid_2eproto
