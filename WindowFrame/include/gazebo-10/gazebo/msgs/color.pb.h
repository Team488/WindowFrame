// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: color.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_color_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_color_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_color_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_color_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_color_2eproto;
namespace gazebo {
namespace msgs {
class Color;
class ColorDefaultTypeInternal;
GZ_MSGS_VISIBLE extern ColorDefaultTypeInternal _Color_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::Color* Arena::CreateMaybeMessage<::gazebo::msgs::Color>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE Color :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.Color) */ {
 public:
  Color();
  virtual ~Color();

  Color(const Color& from);
  Color(Color&& from) noexcept
    : Color() {
    *this = ::std::move(from);
  }

  inline Color& operator=(const Color& from) {
    CopyFrom(from);
    return *this;
  }
  inline Color& operator=(Color&& from) noexcept {
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
  static const Color& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Color* internal_default_instance() {
    return reinterpret_cast<const Color*>(
               &_Color_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Color& a, Color& b) {
    a.Swap(&b);
  }
  inline void Swap(Color* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Color* New() const final {
    return CreateMaybeMessage<Color>(nullptr);
  }

  Color* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Color>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Color& from);
  void MergeFrom(const Color& from);
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
  void InternalSwap(Color* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.Color";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_color_2eproto);
    return ::descriptor_table_color_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRFieldNumber = 2,
    kGFieldNumber = 3,
    kBFieldNumber = 4,
    kAFieldNumber = 5,
  };
  // required float r = 2;
  bool has_r() const;
  void clear_r();
  float r() const;
  void set_r(float value);

  // required float g = 3;
  bool has_g() const;
  void clear_g();
  float g() const;
  void set_g(float value);

  // required float b = 4;
  bool has_b() const;
  void clear_b();
  float b() const;
  void set_b(float value);

  // optional float a = 5 [default = 1];
  bool has_a() const;
  void clear_a();
  float a() const;
  void set_a(float value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Color)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float r_;
  float g_;
  float b_;
  float a_;
  friend struct ::TableStruct_color_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Color

// required float r = 2;
inline bool Color::has_r() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Color::clear_r() {
  r_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float Color::r() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Color.r)
  return r_;
}
inline void Color::set_r(float value) {
  _has_bits_[0] |= 0x00000001u;
  r_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Color.r)
}

// required float g = 3;
inline bool Color::has_g() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Color::clear_g() {
  g_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Color::g() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Color.g)
  return g_;
}
inline void Color::set_g(float value) {
  _has_bits_[0] |= 0x00000002u;
  g_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Color.g)
}

// required float b = 4;
inline bool Color::has_b() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Color::clear_b() {
  b_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Color::b() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Color.b)
  return b_;
}
inline void Color::set_b(float value) {
  _has_bits_[0] |= 0x00000004u;
  b_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Color.b)
}

// optional float a = 5 [default = 1];
inline bool Color::has_a() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Color::clear_a() {
  a_ = 1;
  _has_bits_[0] &= ~0x00000008u;
}
inline float Color::a() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Color.a)
  return a_;
}
inline void Color::set_a(float value) {
  _has_bits_[0] |= 0x00000008u;
  a_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Color.a)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::Color> ColorPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::Color const> ConstColorPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_color_2eproto
