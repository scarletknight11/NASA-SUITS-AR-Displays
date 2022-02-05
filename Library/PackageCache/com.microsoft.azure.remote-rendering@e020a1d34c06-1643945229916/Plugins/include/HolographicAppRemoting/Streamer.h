//
// Copyright (C) Microsoft. All rights reserved.
//

#pragma once

#include <winrt/Microsoft.Holographic.AppRemoting.h>

#include "StreamerExport.h"

#include <windows.h>

extern "C" STREAMER_EXPORT HRESULT STREAMER_CALL CreateRemoteContext(
    _Inout_ winrt::Microsoft::Holographic::AppRemoting::IRemoteContext& result,
    uint32_t maxBitrateKbps = 20000,
    bool enableAudio = true,
    winrt::Microsoft::Holographic::AppRemoting::PreferredVideoCodec preferredVideoCodec =
        winrt::Microsoft::Holographic::AppRemoting::PreferredVideoCodec::Default);

struct IPerceptionDeviceFactory;
extern "C" STREAMER_EXPORT HRESULT STREAMER_CALL CreatePerceptionDeviceFactory(_COM_Outptr_ IPerceptionDeviceFactory** result);
