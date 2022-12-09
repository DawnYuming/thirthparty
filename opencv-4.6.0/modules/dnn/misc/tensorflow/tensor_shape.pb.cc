// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensor_shape.proto

#include "tensor_shape.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace opencv_tensorflow {
constexpr TensorShapeProto_Dim::TensorShapeProto_Dim(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , size_(int64_t{0}){}
struct TensorShapeProto_DimDefaultTypeInternal {
  constexpr TensorShapeProto_DimDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TensorShapeProto_DimDefaultTypeInternal() {}
  union {
    TensorShapeProto_Dim _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TensorShapeProto_DimDefaultTypeInternal _TensorShapeProto_Dim_default_instance_;
constexpr TensorShapeProto::TensorShapeProto(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : dim_()
  , unknown_rank_(false){}
struct TensorShapeProtoDefaultTypeInternal {
  constexpr TensorShapeProtoDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~TensorShapeProtoDefaultTypeInternal() {}
  union {
    TensorShapeProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT TensorShapeProtoDefaultTypeInternal _TensorShapeProto_default_instance_;
}  // namespace opencv_tensorflow
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensor_5fshape_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensor_5fshape_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensor_5fshape_2eproto = nullptr;

const uint32_t TableStruct_tensor_5fshape_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::opencv_tensorflow::TensorShapeProto_Dim, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::opencv_tensorflow::TensorShapeProto_Dim, size_),
  PROTOBUF_FIELD_OFFSET(::opencv_tensorflow::TensorShapeProto_Dim, name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::opencv_tensorflow::TensorShapeProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::opencv_tensorflow::TensorShapeProto, dim_),
  PROTOBUF_FIELD_OFFSET(::opencv_tensorflow::TensorShapeProto, unknown_rank_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::opencv_tensorflow::TensorShapeProto_Dim)},
  { 8, -1, -1, sizeof(::opencv_tensorflow::TensorShapeProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::opencv_tensorflow::_TensorShapeProto_Dim_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::opencv_tensorflow::_TensorShapeProto_default_instance_),
};

const char descriptor_table_protodef_tensor_5fshape_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022tensor_shape.proto\022\021opencv_tensorflow\""
  "\201\001\n\020TensorShapeProto\0224\n\003dim\030\002 \003(\0132\'.open"
  "cv_tensorflow.TensorShapeProto.Dim\022\024\n\014un"
  "known_rank\030\003 \001(\010\032!\n\003Dim\022\014\n\004size\030\001 \001(\003\022\014\n"
  "\004name\030\002 \001(\tB2\n\030org.tensorflow.frameworkB"
  "\021TensorShapeProtosP\001\370\001\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensor_5fshape_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensor_5fshape_2eproto = {
  false, false, 231, descriptor_table_protodef_tensor_5fshape_2eproto, "tensor_shape.proto",
  &descriptor_table_tensor_5fshape_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_tensor_5fshape_2eproto::offsets,
  file_level_metadata_tensor_5fshape_2eproto, file_level_enum_descriptors_tensor_5fshape_2eproto, file_level_service_descriptors_tensor_5fshape_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_tensor_5fshape_2eproto_getter() {
  return &descriptor_table_tensor_5fshape_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_tensor_5fshape_2eproto(&descriptor_table_tensor_5fshape_2eproto);
namespace opencv_tensorflow {

// ===================================================================

class TensorShapeProto_Dim::_Internal {
 public:
};

TensorShapeProto_Dim::TensorShapeProto_Dim(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:opencv_tensorflow.TensorShapeProto.Dim)
}
TensorShapeProto_Dim::TensorShapeProto_Dim(const TensorShapeProto_Dim& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(),
      GetArenaForAllocation());
  }
  size_ = from.size_;
  // @@protoc_insertion_point(copy_constructor:opencv_tensorflow.TensorShapeProto.Dim)
}

inline void TensorShapeProto_Dim::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
size_ = int64_t{0};
}

TensorShapeProto_Dim::~TensorShapeProto_Dim() {
  // @@protoc_insertion_point(destructor:opencv_tensorflow.TensorShapeProto.Dim)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TensorShapeProto_Dim::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TensorShapeProto_Dim::ArenaDtor(void* object) {
  TensorShapeProto_Dim* _this = reinterpret_cast< TensorShapeProto_Dim* >(object);
  (void)_this;
}
void TensorShapeProto_Dim::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TensorShapeProto_Dim::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TensorShapeProto_Dim::Clear() {
// @@protoc_insertion_point(message_clear_start:opencv_tensorflow.TensorShapeProto.Dim)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  size_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TensorShapeProto_Dim::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "opencv_tensorflow.TensorShapeProto.Dim.name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* TensorShapeProto_Dim::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:opencv_tensorflow.TensorShapeProto.Dim)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 size = 1;
  if (this->_internal_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_size(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "opencv_tensorflow.TensorShapeProto.Dim.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:opencv_tensorflow.TensorShapeProto.Dim)
  return target;
}

size_t TensorShapeProto_Dim::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opencv_tensorflow.TensorShapeProto.Dim)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // int64 size = 1;
  if (this->_internal_size() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64SizePlusOne(this->_internal_size());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TensorShapeProto_Dim::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TensorShapeProto_Dim::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TensorShapeProto_Dim::GetClassData() const { return &_class_data_; }

void TensorShapeProto_Dim::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TensorShapeProto_Dim *>(to)->MergeFrom(
      static_cast<const TensorShapeProto_Dim &>(from));
}


void TensorShapeProto_Dim::MergeFrom(const TensorShapeProto_Dim& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opencv_tensorflow.TensorShapeProto.Dim)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (from._internal_size() != 0) {
    _internal_set_size(from._internal_size());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TensorShapeProto_Dim::CopyFrom(const TensorShapeProto_Dim& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opencv_tensorflow.TensorShapeProto.Dim)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TensorShapeProto_Dim::IsInitialized() const {
  return true;
}

void TensorShapeProto_Dim::InternalSwap(TensorShapeProto_Dim* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  swap(size_, other->size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TensorShapeProto_Dim::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensor_5fshape_2eproto_getter, &descriptor_table_tensor_5fshape_2eproto_once,
      file_level_metadata_tensor_5fshape_2eproto[0]);
}

// ===================================================================

class TensorShapeProto::_Internal {
 public:
};

TensorShapeProto::TensorShapeProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  dim_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:opencv_tensorflow.TensorShapeProto)
}
TensorShapeProto::TensorShapeProto(const TensorShapeProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      dim_(from.dim_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  unknown_rank_ = from.unknown_rank_;
  // @@protoc_insertion_point(copy_constructor:opencv_tensorflow.TensorShapeProto)
}

inline void TensorShapeProto::SharedCtor() {
unknown_rank_ = false;
}

TensorShapeProto::~TensorShapeProto() {
  // @@protoc_insertion_point(destructor:opencv_tensorflow.TensorShapeProto)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void TensorShapeProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void TensorShapeProto::ArenaDtor(void* object) {
  TensorShapeProto* _this = reinterpret_cast< TensorShapeProto* >(object);
  (void)_this;
}
void TensorShapeProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TensorShapeProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TensorShapeProto::Clear() {
// @@protoc_insertion_point(message_clear_start:opencv_tensorflow.TensorShapeProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  dim_.Clear();
  unknown_rank_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TensorShapeProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .opencv_tensorflow.TensorShapeProto.Dim dim = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_dim(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // bool unknown_rank = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          unknown_rank_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* TensorShapeProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:opencv_tensorflow.TensorShapeProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .opencv_tensorflow.TensorShapeProto.Dim dim = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_dim_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_dim(i), target, stream);
  }

  // bool unknown_rank = 3;
  if (this->_internal_unknown_rank() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->_internal_unknown_rank(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:opencv_tensorflow.TensorShapeProto)
  return target;
}

size_t TensorShapeProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opencv_tensorflow.TensorShapeProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .opencv_tensorflow.TensorShapeProto.Dim dim = 2;
  total_size += 1UL * this->_internal_dim_size();
  for (const auto& msg : this->dim_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // bool unknown_rank = 3;
  if (this->_internal_unknown_rank() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TensorShapeProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    TensorShapeProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TensorShapeProto::GetClassData() const { return &_class_data_; }

void TensorShapeProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<TensorShapeProto *>(to)->MergeFrom(
      static_cast<const TensorShapeProto &>(from));
}


void TensorShapeProto::MergeFrom(const TensorShapeProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opencv_tensorflow.TensorShapeProto)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  dim_.MergeFrom(from.dim_);
  if (from._internal_unknown_rank() != 0) {
    _internal_set_unknown_rank(from._internal_unknown_rank());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TensorShapeProto::CopyFrom(const TensorShapeProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opencv_tensorflow.TensorShapeProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TensorShapeProto::IsInitialized() const {
  return true;
}

void TensorShapeProto::InternalSwap(TensorShapeProto* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  dim_.InternalSwap(&other->dim_);
  swap(unknown_rank_, other->unknown_rank_);
}

::PROTOBUF_NAMESPACE_ID::Metadata TensorShapeProto::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensor_5fshape_2eproto_getter, &descriptor_table_tensor_5fshape_2eproto_once,
      file_level_metadata_tensor_5fshape_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace opencv_tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::opencv_tensorflow::TensorShapeProto_Dim* Arena::CreateMaybeMessage< ::opencv_tensorflow::TensorShapeProto_Dim >(Arena* arena) {
  return Arena::CreateMessageInternal< ::opencv_tensorflow::TensorShapeProto_Dim >(arena);
}
template<> PROTOBUF_NOINLINE ::opencv_tensorflow::TensorShapeProto* Arena::CreateMaybeMessage< ::opencv_tensorflow::TensorShapeProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::opencv_tensorflow::TensorShapeProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
