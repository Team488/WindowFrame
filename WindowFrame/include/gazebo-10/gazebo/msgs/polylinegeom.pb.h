// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: polylinegeom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_polylinegeom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_polylinegeom_2eproto

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
#include "vector2d.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_polylinegeom_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_polylinegeom_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_polylinegeom_2eproto;
namespace gazebo {
namespace msgs {
class Polyline;
class PolylineDefaultTypeInternal;
GZ_MSGS_VISIBLE extern PolylineDefaultTypeInternal _Polyline_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Polyline* Arena::CreateMaybeMessage<::gazebo::msgs::Polyline>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Polyline :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Polyline) */ {
 public:
  Polyline();
  virtual ~Polyline();

  Polyline(const Polyline& from);
  Polyline(Polyline&& from) noexcept
    : Polyline() {
    *this = ::std::move(from);
  }

  inline Polyline& operator=(const Polyline& from) {
    CopyFrom(from);
    return *this;
  }
  inline Polyline& operator=(Polyline&& from) noexcept {
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
  static const Polyline& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Polyline* internal_default_instance() {
    return reinterpret_cast<const Polyline*>(
               &_Polyline_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Polyline& a, Polyline& b) {
    a.Swap(&b);
  }
  inline void Swap(Polyline* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Polyline* New() const final {
    return CreateMaybeMessage<Polyline>(nullptr);
  }

  Polyline* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Polyline>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Polyline& from);
  void MergeFrom(const Polyline& from);
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
  void InternalSwap(Polyline* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Polyline";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_polylinegeom_2eproto);
    return ::descriptor_table_polylinegeom_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointFieldNumber = 2,
    kHeightFieldNumber = 1,
  };
  // repeated .gazebo.msgs.Vector2d point = 2;
  int point_size() const;
  void clear_point();
  ::gazebo::msgs::Vector2d* mutable_point(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector2d >*
      mutable_point();
  const ::gazebo::msgs::Vector2d& point(int index) const;
  ::gazebo::msgs::Vector2d* add_point();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector2d >&
      point() const;

  // required double height = 1;
  bool has_height() const;
  void clear_height();
  double height() const;
  void set_height(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Polyline)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector2d > point_;
  double height_;
  friend struct ::TableStruct_polylinegeom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Polyline

// required double height = 1;
inline bool Polyline::has_height() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Polyline::clear_height() {
  height_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double Polyline::height() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Polyline.height)
  return height_;
}
inline void Polyline::set_height(double value) {
  _has_bits_[0] |= 0x00000001u;
  height_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Polyline.height)
}

// repeated .gazebo.msgs.Vector2d point = 2;
inline int Polyline::point_size() const {
  return point_.size();
}
inline ::gazebo::msgs::Vector2d* Polyline::mutable_point(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Polyline.point)
  return point_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector2d >*
Polyline::mutable_point() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.Polyline.point)
  return &point_;
}
inline const ::gazebo::msgs::Vector2d& Polyline::point(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Polyline.point)
  return point_.Get(index);
}
inline ::gazebo::msgs::Vector2d* Polyline::add_point() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.Polyline.point)
  return point_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector2d >&
Polyline::point() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.Polyline.point)
  return point_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Polyline> PolylinePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Polyline const> ConstPolylinePtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_polylinegeom_2eproto
