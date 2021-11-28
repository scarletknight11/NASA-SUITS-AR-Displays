// Empty function file for solving static linking errors when building non-iOS platforms in Unity.

#include <stddef.h>
#include <stdint.h>

#define EXTERN_API extern "C"

// JpegXR functions

EXTERN_API int JPEGXR_Decompress(void* source, uint32_t sourceSize, void* destination, uint32_t destinationSize) { return 0; }

EXTERN_API int JPEGXR_GetImageDescriptionSize(void* source, uint32_t sourceSize, uint32_t* size) { return 0; }

EXTERN_API int JPEGXR_GetImageDescription(void* source, uint32_t sourceSize, void* destination, uint32_t destinationSize) { return 0; }

EXTERN_API int JPEGXR_GetCustomDataSize(void* source, uint32_t sourceSize, uint32_t* size) { return 0; }

EXTERN_API int JPEGXR_GetCustomData(void* source, uint32_t sourceSize, void* destination, uint32_t destinationSize) { return 0; }

// Basis Universal functions

EXTERN_API int BASIS_Transcode(void* source, int srcLength, int textureFormat, uint8_t* output, int* transcodedSize) { return 0; }

// ZStandard functions

EXTERN_API void* ZSTD_createDCtx() { return (void*)0; }

EXTERN_API size_t ZSTD_freeDCtx(void* cctx) { return 0; }

EXTERN_API size_t ZSTD_decompressDCtx(void* ctx, void* dst, size_t dstCapacity, void* src, size_t srcSize) { return 0; }

EXTERN_API void* ZSTD_createDDict(void* dict, size_t dictSize) { return (void*)0; }

EXTERN_API size_t ZSTD_freeDDict(void* ddict) { return 0; }

EXTERN_API size_t ZSTD_decompress_usingDDict(void* dctx, void* dst, size_t dstCapacity, void* src, size_t srcSize, void* ddict) { return 0; }

EXTERN_API void* ZSTD_getDecompressedSize(void* src, size_t srcSize) { return (void*)0; }

EXTERN_API uint32_t ZSTD_isError(size_t code) { return 0; }

EXTERN_API void* ZSTD_getErrorName(size_t code) { return (void*)0; }
