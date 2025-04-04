//------------------------------------------------------------------------
// Copyright(c) 2025 Daniel Wittmann.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kVSTEffectPlugInProcessorUID (0xA4CA0C87, 0xA4B15B17, 0xA58A1494, 0xC6385842);
static const Steinberg::FUID kVSTEffectPlugInControllerUID (0x43A16FE8, 0x9737520B, 0x80E24BD6, 0xA8A4FDD1);

#define VSTEffectPlugInVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
