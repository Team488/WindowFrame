// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friction.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_friction_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_friction_2eproto

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
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_friction_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_friction_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friction_2eproto;
namespace gazebo {
namespace msgs {
class Friction;
class FrictionDefaultTypeInternal;
GZ_MSGS_VISIBLE extern FrictionDefaultTypeInternal _Friction_default_instance_;
class Friction_Torsional;
class Friction_TorsionalDefaultTypeInternal;
GZ_MSGS_VISIBLE extern Friction_TorsionalDefaultTypeInternal _Friction_Torsional_default_instance_;
class Friction_Torsional_ODE;
class Friction_Torsional_ODEDefaultTypeInternal;
GZ_MSGS_VISIBLE extern Friction_Torsional_ODEDefaultTypeInternal _Friction_Torsional_ODE_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Friction* Arena::CreateMaybeMessage<::gazebo::msgs::Friction>(Arena*);
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Friction_Torsional* Arena::CreateMaybeMessage<::gazebo::msgs::Friction_Torsional>(Arena*);
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Friction_Torsional_ODE* Arena::CreateMaybeMessage<::gazebo::msgs::Friction_Torsional_ODE>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Friction_Torsional_ODE :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Friction.Torsional.ODE) */ {
 public:
  Friction_Torsional_ODE();
  virtual ~Friction_Torsional_ODE();

  Friction_Torsional_ODE(const Friction_Torsional_ODE& from);
  Friction_Torsional_ODE(Friction_Torsional_ODE&& from) noexcept
    : Friction_Torsional_ODE() {
    *this = ::std::move(from);
  }

  inline Friction_Torsional_ODE& operator=(const Friction_Torsional_ODE& from) {
    CopyFrom(from);
    return *this;
  }
  inline Friction_Torsional_ODE& operator=(Friction_Torsional_ODE&& from) noexcept {
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
  static const Friction_Torsional_ODE& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Friction_Torsional_ODE* internal_default_instance() {
    return reinterpret_cast<const Friction_Torsional_ODE*>(
               &_Friction_Torsional_ODE_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Friction_Torsional_ODE& a, Friction_Torsional_ODE& b) {
    a.Swap(&b);
  }
  inline void Swap(Friction_Torsional_ODE* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Friction_Torsional_ODE* New() const final {
    return CreateMaybeMessage<Friction_Torsional_ODE>(nullptr);
  }

  Friction_Torsional_ODE* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Friction_Torsional_ODE>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Friction_Torsional_ODE& from);
  void MergeFrom(const Friction_Torsional_ODE& from);
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
  void InternalSwap(Friction_Torsional_ODE* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Friction.Torsional.ODE";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friction_2eproto);
    return ::descriptor_table_friction_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSlipFieldNumber = 1,
  };
  // optional double slip = 1;
  bool has_slip() const;
  void clear_slip();
  double slip() const;
  void set_slip(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Friction.Torsional.ODE)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double slip_;
  friend struct ::TableStruct_friction_2eproto;
};
// -------------------------------------------------------------------

class GZ_MSGS_VISIBLE Friction_Torsional :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Friction.Torsional) */ {
 public:
  Friction_Torsional();
  virtual ~Friction_Torsional();

  Friction_Torsional(const Friction_Torsional& from);
  Friction_Torsional(Friction_Torsional&& from) noexcept
    : Friction_Torsional() {
    *this = ::std::move(from);
  }

  inline Friction_Torsional& operator=(const Friction_Torsional& from) {
    CopyFrom(from);
    return *this;
  }
  inline Friction_Torsional& operator=(Friction_Torsional&& from) noexcept {
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
  static const Friction_Torsional& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Friction_Torsional* internal_default_instance() {
    return reinterpret_cast<const Friction_Torsional*>(
               &_Friction_Torsional_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Friction_Torsional& a, Friction_Torsional& b) {
    a.Swap(&b);
  }
  inline void Swap(Friction_Torsional* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Friction_Torsional* New() const final {
    return CreateMaybeMessage<Friction_Torsional>(nullptr);
  }

  Friction_Torsional* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Friction_Torsional>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Friction_Torsional& from);
  void MergeFrom(const Friction_Torsional& from);
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
  void InternalSwap(Friction_Torsional* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Friction.Torsional";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friction_2eproto);
    return ::descriptor_table_friction_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Friction_Torsional_ODE ODE;

  // accessors -------------------------------------------------------

  enum : int {
    kOdeFieldNumber = 5,
    kCoefficientFieldNumber = 1,
    kPatchRadiusFieldNumber = 3,
    kSurfaceRadiusFieldNumber = 4,
    kUsePatchRadiusFieldNumber = 2,
  };
  // optional .gazebo.msgs.Friction.Torsional.ODE ode = 5;
  bool has_ode() const;
  void clear_ode();
  const ::gazebo::msgs::Friction_Torsional_ODE& ode() const;
  ::gazebo::msgs::Friction_Torsional_ODE* release_ode();
  ::gazebo::msgs::Friction_Torsional_ODE* mutable_ode();
  void set_allocated_ode(::gazebo::msgs::Friction_Torsional_ODE* ode);

  // optional double coefficient = 1;
  bool has_coefficient() const;
  void clear_coefficient();
  double coefficient() const;
  void set_coefficient(double value);

  // optional double patch_radius = 3;
  bool has_patch_radius() const;
  void clear_patch_radius();
  double patch_radius() const;
  void set_patch_radius(double value);

  // optional double surface_radius = 4;
  bool has_surface_radius() const;
  void clear_surface_radius();
  double surface_radius() const;
  void set_surface_radius(double value);

  // optional bool use_patch_radius = 2;
  bool has_use_patch_radius() const;
  void clear_use_patch_radius();
  bool use_patch_radius() const;
  void set_use_patch_radius(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Friction.Torsional)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Friction_Torsional_ODE* ode_;
  double coefficient_;
  double patch_radius_;
  double surface_radius_;
  bool use_patch_radius_;
  friend struct ::TableStruct_friction_2eproto;
};
// -------------------------------------------------------------------

class GZ_MSGS_VISIBLE Friction :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Friction) */ {
 public:
  Friction();
  virtual ~Friction();

  Friction(const Friction& from);
  Friction(Friction&& from) noexcept
    : Friction() {
    *this = ::std::move(from);
  }

  inline Friction& operator=(const Friction& from) {
    CopyFrom(from);
    return *this;
  }
  inline Friction& operator=(Friction&& from) noexcept {
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
  static const Friction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Friction* internal_default_instance() {
    return reinterpret_cast<const Friction*>(
               &_Friction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Friction& a, Friction& b) {
    a.Swap(&b);
  }
  inline void Swap(Friction* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Friction* New() const final {
    return CreateMaybeMessage<Friction>(nullptr);
  }

  Friction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Friction>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Friction& from);
  void MergeFrom(const Friction& from);
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
  void InternalSwap(Friction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Friction";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friction_2eproto);
    return ::descriptor_table_friction_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Friction_Torsional Torsional;

  // accessors -------------------------------------------------------

  enum : int {
    kFdir1FieldNumber = 3,
    kTorsionalFieldNumber = 6,
    kMuFieldNumber = 1,
    kMu2FieldNumber = 2,
    kSlip1FieldNumber = 4,
    kSlip2FieldNumber = 5,
  };
  // optional .gazebo.msgs.Vector3d fdir1 = 3;
  bool has_fdir1() const;
  void clear_fdir1();
  const ::gazebo::msgs::Vector3d& fdir1() const;
  ::gazebo::msgs::Vector3d* release_fdir1();
  ::gazebo::msgs::Vector3d* mutable_fdir1();
  void set_allocated_fdir1(::gazebo::msgs::Vector3d* fdir1);

  // optional .gazebo.msgs.Friction.Torsional torsional = 6;
  bool has_torsional() const;
  void clear_torsional();
  const ::gazebo::msgs::Friction_Torsional& torsional() const;
  ::gazebo::msgs::Friction_Torsional* release_torsional();
  ::gazebo::msgs::Friction_Torsional* mutable_torsional();
  void set_allocated_torsional(::gazebo::msgs::Friction_Torsional* torsional);

  // optional double mu = 1;
  bool has_mu() const;
  void clear_mu();
  double mu() const;
  void set_mu(double value);

  // optional double mu2 = 2;
  bool has_mu2() const;
  void clear_mu2();
  double mu2() const;
  void set_mu2(double value);

  // optional double slip1 = 4;
  bool has_slip1() const;
  void clear_slip1();
  double slip1() const;
  void set_slip1(double value);

  // optional double slip2 = 5;
  bool has_slip2() const;
  void clear_slip2();
  double slip2() const;
  void set_slip2(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Friction)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::gazebo::msgs::Vector3d* fdir1_;
  ::gazebo::msgs::Friction_Torsional* torsional_;
  double mu_;
  double mu2_;
  double slip1_;
  double slip2_;
  friend struct ::TableStruct_friction_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Friction_Torsional_ODE

// optional double slip = 1;
inline bool Friction_Torsional_ODE::has_slip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Friction_Torsional_ODE::clear_slip() {
  slip_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double Friction_Torsional_ODE::slip() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.Torsional.ODE.slip)
  return slip_;
}
inline void Friction_Torsional_ODE::set_slip(double value) {
  _has_bits_[0] |= 0x00000001u;
  slip_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.Torsional.ODE.slip)
}

// -------------------------------------------------------------------

// Friction_Torsional

// optional double coefficient = 1;
inline bool Friction_Torsional::has_coefficient() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Friction_Torsional::clear_coefficient() {
  coefficient_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Friction_Torsional::coefficient() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.Torsional.coefficient)
  return coefficient_;
}
inline void Friction_Torsional::set_coefficient(double value) {
  _has_bits_[0] |= 0x00000002u;
  coefficient_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.Torsional.coefficient)
}

// optional bool use_patch_radius = 2;
inline bool Friction_Torsional::has_use_patch_radius() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Friction_Torsional::clear_use_patch_radius() {
  use_patch_radius_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Friction_Torsional::use_patch_radius() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.Torsional.use_patch_radius)
  return use_patch_radius_;
}
inline void Friction_Torsional::set_use_patch_radius(bool value) {
  _has_bits_[0] |= 0x00000010u;
  use_patch_radius_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.Torsional.use_patch_radius)
}

// optional double patch_radius = 3;
inline bool Friction_Torsional::has_patch_radius() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Friction_Torsional::clear_patch_radius() {
  patch_radius_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Friction_Torsional::patch_radius() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.Torsional.patch_radius)
  return patch_radius_;
}
inline void Friction_Torsional::set_patch_radius(double value) {
  _has_bits_[0] |= 0x00000004u;
  patch_radius_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.Torsional.patch_radius)
}

// optional double surface_radius = 4;
inline bool Friction_Torsional::has_surface_radius() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Friction_Torsional::clear_surface_radius() {
  surface_radius_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Friction_Torsional::surface_radius() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.Torsional.surface_radius)
  return surface_radius_;
}
inline void Friction_Torsional::set_surface_radius(double value) {
  _has_bits_[0] |= 0x00000008u;
  surface_radius_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.Torsional.surface_radius)
}

// optional .gazebo.msgs.Friction.Torsional.ODE ode = 5;
inline bool Friction_Torsional::has_ode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Friction_Torsional::clear_ode() {
  if (ode_ != nullptr) ode_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::gazebo::msgs::Friction_Torsional_ODE& Friction_Torsional::ode() const {
  const ::gazebo::msgs::Friction_Torsional_ODE* p = ode_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.Torsional.ode)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Friction_Torsional_ODE*>(
      &::gazebo::msgs::_Friction_Torsional_ODE_default_instance_);
}
inline ::gazebo::msgs::Friction_Torsional_ODE* Friction_Torsional::release_ode() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Friction.Torsional.ode)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Friction_Torsional_ODE* temp = ode_;
  ode_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Friction_Torsional_ODE* Friction_Torsional::mutable_ode() {
  _has_bits_[0] |= 0x00000001u;
  if (ode_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Friction_Torsional_ODE>(GetArenaNoVirtual());
    ode_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Friction.Torsional.ode)
  return ode_;
}
inline void Friction_Torsional::set_allocated_ode(::gazebo::msgs::Friction_Torsional_ODE* ode) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete ode_;
  }
  if (ode) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ode = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ode, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  ode_ = ode;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Friction.Torsional.ode)
}

// -------------------------------------------------------------------

// Friction

// optional double mu = 1;
inline bool Friction::has_mu() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Friction::clear_mu() {
  mu_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Friction::mu() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.mu)
  return mu_;
}
inline void Friction::set_mu(double value) {
  _has_bits_[0] |= 0x00000004u;
  mu_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.mu)
}

// optional double mu2 = 2;
inline bool Friction::has_mu2() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Friction::clear_mu2() {
  mu2_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Friction::mu2() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.mu2)
  return mu2_;
}
inline void Friction::set_mu2(double value) {
  _has_bits_[0] |= 0x00000008u;
  mu2_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.mu2)
}

// optional .gazebo.msgs.Vector3d fdir1 = 3;
inline bool Friction::has_fdir1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline const ::gazebo::msgs::Vector3d& Friction::fdir1() const {
  const ::gazebo::msgs::Vector3d* p = fdir1_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.fdir1)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline ::gazebo::msgs::Vector3d* Friction::release_fdir1() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Friction.fdir1)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Vector3d* temp = fdir1_;
  fdir1_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* Friction::mutable_fdir1() {
  _has_bits_[0] |= 0x00000001u;
  if (fdir1_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArenaNoVirtual());
    fdir1_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Friction.fdir1)
  return fdir1_;
}
inline void Friction::set_allocated_fdir1(::gazebo::msgs::Vector3d* fdir1) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(fdir1_);
  }
  if (fdir1) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      fdir1 = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fdir1, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  fdir1_ = fdir1;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Friction.fdir1)
}

// optional double slip1 = 4;
inline bool Friction::has_slip1() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Friction::clear_slip1() {
  slip1_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Friction::slip1() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.slip1)
  return slip1_;
}
inline void Friction::set_slip1(double value) {
  _has_bits_[0] |= 0x00000010u;
  slip1_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.slip1)
}

// optional double slip2 = 5;
inline bool Friction::has_slip2() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Friction::clear_slip2() {
  slip2_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Friction::slip2() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.slip2)
  return slip2_;
}
inline void Friction::set_slip2(double value) {
  _has_bits_[0] |= 0x00000020u;
  slip2_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Friction.slip2)
}

// optional .gazebo.msgs.Friction.Torsional torsional = 6;
inline bool Friction::has_torsional() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Friction::clear_torsional() {
  if (torsional_ != nullptr) torsional_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::gazebo::msgs::Friction_Torsional& Friction::torsional() const {
  const ::gazebo::msgs::Friction_Torsional* p = torsional_;
  // @@protoc_insertion_point(field_get:gazebo.msgs.Friction.torsional)
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Friction_Torsional*>(
      &::gazebo::msgs::_Friction_Torsional_default_instance_);
}
inline ::gazebo::msgs::Friction_Torsional* Friction::release_torsional() {
  // @@protoc_insertion_point(field_release:gazebo.msgs.Friction.torsional)
  _has_bits_[0] &= ~0x00000002u;
  ::gazebo::msgs::Friction_Torsional* temp = torsional_;
  torsional_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Friction_Torsional* Friction::mutable_torsional() {
  _has_bits_[0] |= 0x00000002u;
  if (torsional_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Friction_Torsional>(GetArenaNoVirtual());
    torsional_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Friction.torsional)
  return torsional_;
}
inline void Friction::set_allocated_torsional(::gazebo::msgs::Friction_Torsional* torsional) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete torsional_;
  }
  if (torsional) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      torsional = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, torsional, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  torsional_ = torsional;
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Friction.torsional)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


typedef boost::shared_ptr<gazebo::msgs::Friction> FrictionPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Friction const> ConstFrictionPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_friction_2eproto
