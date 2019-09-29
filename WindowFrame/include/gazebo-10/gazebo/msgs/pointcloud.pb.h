// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pointcloud.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_pointcloud_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_pointcloud_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_pointcloud_2eproto GZ_MSGS_VISIBLE
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct GZ_MSGS_VISIBLE TableStruct_pointcloud_2eproto {
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
extern GZ_MSGS_VISIBLE const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_pointcloud_2eproto;
namespace gazebo {
namespace msgs {
class PointCloud;
class PointCloudDefaultTypeInternal;
GZ_MSGS_VISIBLE extern PointCloudDefaultTypeInternal _PointCloud_default_instance_;
}  // namespace msgs
}  // namespace gazebo
PROTOBUF_NAMESPACE_OPEN
template<> GZ_MSGS_VISIBLE ::gazebo::msgs::PointCloud* Arena::CreateMaybeMessage<::gazebo::msgs::PointCloud>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gazebo {
namespace msgs {

// ===================================================================

class GZ_MSGS_VISIBLE PointCloud :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gazebo.msgs.PointCloud) */ {
 public:
  PointCloud();
  virtual ~PointCloud();

  PointCloud(const PointCloud& from);
  PointCloud(PointCloud&& from) noexcept
    : PointCloud() {
    *this = ::std::move(from);
  }

  inline PointCloud& operator=(const PointCloud& from) {
    CopyFrom(from);
    return *this;
  }
  inline PointCloud& operator=(PointCloud&& from) noexcept {
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
  static const PointCloud& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PointCloud* internal_default_instance() {
    return reinterpret_cast<const PointCloud*>(
               &_PointCloud_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PointCloud& a, PointCloud& b) {
    a.Swap(&b);
  }
  inline void Swap(PointCloud* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PointCloud* New() const final {
    return CreateMaybeMessage<PointCloud>(nullptr);
  }

  PointCloud* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PointCloud>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PointCloud& from);
  void MergeFrom(const PointCloud& from);
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
  void InternalSwap(PointCloud* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gazebo.msgs.PointCloud";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_pointcloud_2eproto);
    return ::descriptor_table_pointcloud_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointsFieldNumber = 1,
  };
  // repeated .gazebo.msgs.Vector3d points = 1;
  int points_size() const;
  void clear_points();
  ::gazebo::msgs::Vector3d* mutable_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
      mutable_points();
  const ::gazebo::msgs::Vector3d& points(int index) const;
  ::gazebo::msgs::Vector3d* add_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
      points() const;

  // @@protoc_insertion_point(class_scope:gazebo.msgs.PointCloud)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector3d > points_;
  friend struct ::TableStruct_pointcloud_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PointCloud

// repeated .gazebo.msgs.Vector3d points = 1;
inline int PointCloud::points_size() const {
  return points_.size();
}
inline ::gazebo::msgs::Vector3d* PointCloud::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.PointCloud.points)
  return points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector3d >*
PointCloud::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:gazebo.msgs.PointCloud.points)
  return &points_;
}
inline const ::gazebo::msgs::Vector3d& PointCloud::points(int index) const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PointCloud.points)
  return points_.Get(index);
}
inline ::gazebo::msgs::Vector3d* PointCloud::add_points() {
  // @@protoc_insertion_point(field_add:gazebo.msgs.PointCloud.points)
  return points_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::gazebo::msgs::Vector3d >&
PointCloud::points() const {
  // @@protoc_insertion_point(field_list:gazebo.msgs.PointCloud.points)
  return points_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

typedef boost::shared_ptr<gazebo::msgs::PointCloud> PointCloudPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

typedef const boost::shared_ptr<gazebo::msgs::PointCloud const> ConstPointCloudPtr;
// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_pointcloud_2eproto