//
// Copyright (C) Microsoft. All rights reserved.
//

#pragma once

#define HOLOGRAPHIC_APP_REMOTING_VERSION                  L"2021.0.17.0"
#define HOLOGRAPHIC_APP_MIN_SUPPORTED_REMOTING_VERSION    L"2021.0.0.0"
#define HOLOGRAPHIC_APP_VR_MIN_SUPPORTED_REMOTING_VERSION L"2021.0.0.0"

#if defined(__GNUC__) && __GNUC__ >= 4
#    define STREAMER_EXPORT __attribute__((visibility("default")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#    define STREAMER_EXPORT __attribute__((visibility("default")))
#elif defined(_WIN32)
#    ifdef HolographicAppRemoting_EXPORTS
#        define STREAMER_EXPORT __declspec(dllexport)
#    else
#        define STREAMER_EXPORT __declspec(dllimport)
#    endif
#else
#    define STREAMER_EXPORT
#endif

#if defined(_WIN32)
#    define STREAMER_CALL __cdecl
#else
#    define STREAMER_CALL
#endif
