/*

BEGIN_JUCE_MODULE_DECLARATION

    ID:                     stoej_core
    vendor:                 stoej
    version:                0.1.0
    name:                   stoej_core
    description:            Extensions for the JUCE framework

    dependencies:           juce_core, juce_audio_processors
    license:                GPL3 / commercial
    minimumCppStandard:     20

END_JUCE_MODULE_DECLARATION

*/

#pragma once
#include "src/stoej_APVTS.h"
#include "src/stoej_parameters.h"
#include "src/stoej_properties.h"


// NOTE: for internal use only!
// defines a templated type FT that satisfies the std::floating_point<FT_> concept
#define STOEJ_FT_ template<typename FT_> requires std::floating_point<FT_>