// Copyright 2023 The Dawn & Tint Authors
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this
//    list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its
//    contributors may be used to endorse or promote products derived from
//    this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

////////////////////////////////////////////////////////////////////////////////
// File generated by 'tools/src/cmd/gen' using the template:
//   src/tint/lang/wgsl/language_feature.h.tmpl
//
// To regenerate run: './tools/run gen'
//
//                       Do not modify this file directly
////////////////////////////////////////////////////////////////////////////////

#ifndef SRC_TINT_LANG_WGSL_LANGUAGE_FEATURE_H_
#define SRC_TINT_LANG_WGSL_LANGUAGE_FEATURE_H_

#include <cstdint>
#include <string>

namespace tint::wgsl {

/// An enumerator of WGSL language features
/// @see src/tint/lang/wgsl/intrinsics.def for language feature descriptions
enum class LanguageFeature : uint8_t {
    kUndefined,
    kChromiumTestingExperimental,
    kChromiumTestingShipped,
    kChromiumTestingShippedWithKillswitch,
    kChromiumTestingUnimplemented,
    kChromiumTestingUnsafeExperimental,
    kPacked4X8IntegerDotProduct,
    kPointerCompositeAccess,
    kReadonlyAndReadwriteStorageTextures,
    kSizedBindingArray,
    kTexelBuffers,
    kUnrestrictedPointerParameters,
};

/// @param value the enum value
/// @returns the string for the given enum value
std::string_view ToString(LanguageFeature value);

/// ParseLanguageFeature parses a LanguageFeature from a string.
/// @param str the string to parse
/// @returns the parsed enum, or LanguageFeature::kUndefined if the string could not be parsed.
LanguageFeature ParseLanguageFeature(std::string_view str);

constexpr std::string_view kLanguageFeatureStrings[] = {
    "chromium_testing_experimental",
    "chromium_testing_shipped",
    "chromium_testing_shipped_with_killswitch",
    "chromium_testing_unimplemented",
    "chromium_testing_unsafe_experimental",
    "packed_4x8_integer_dot_product",
    "pointer_composite_access",
    "readonly_and_readwrite_storage_textures",
    "sized_binding_array",
    "texel_buffers",
    "unrestricted_pointer_parameters",
};

/// All features
static constexpr LanguageFeature kAllLanguageFeatures[] = {
    LanguageFeature::kChromiumTestingExperimental,
    LanguageFeature::kChromiumTestingShipped,
    LanguageFeature::kChromiumTestingShippedWithKillswitch,
    LanguageFeature::kChromiumTestingUnimplemented,
    LanguageFeature::kChromiumTestingUnsafeExperimental,
    LanguageFeature::kPacked4X8IntegerDotProduct,
    LanguageFeature::kPointerCompositeAccess,
    LanguageFeature::kReadonlyAndReadwriteStorageTextures,
    LanguageFeature::kSizedBindingArray,
    LanguageFeature::kTexelBuffers,
    LanguageFeature::kUnrestrictedPointerParameters,
};

}  // namespace tint::wgsl

#endif  // SRC_TINT_LANG_WGSL_LANGUAGE_FEATURE_H_
