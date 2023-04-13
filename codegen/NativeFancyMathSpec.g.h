
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once

#include "NativeModules.h"
#include <tuple>

namespace HogeCodegen {

REACT_STRUCT(FancyMathSpec_Constants)
struct FancyMathSpec_Constants {
    REACT_FIELD(E)
    double E;
    REACT_FIELD(PI)
    double PI;
};

struct FancyMathSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto constants = std::tuple{
      TypedConstant<FancyMathSpec_Constants>{0},
  };
  static constexpr auto methods = std::tuple{
      Method<void(double, double, Promise<::React::JSValue>) noexcept>{0, L"add"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto constantCheckResults = CheckConstants<TModule, FancyMathSpec>();
    constexpr auto methodCheckResults = CheckMethods<TModule, FancyMathSpec>();

    REACT_SHOW_CONSTANT_SPEC_ERRORS(
          0,
          "FancyMathSpec_Constants",
          "    REACT_GET_CONSTANTS(GetConstants) FancyMathSpec_Constants GetConstants() noexcept {/*implementation*/}\n"
          "    REACT_GET_CONSTANTS(GetConstants) static FancyMathSpec_Constants GetConstants() noexcept {/*implementation*/}\n");

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "add",
          "    REACT_METHOD(add) void add(double a, double b, ::React::ReactPromise<::React::JSValue> &&result) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(add) static void add(double a, double b, ::React::ReactPromise<::React::JSValue> &&result) noexcept { /* implementation */ }\n");
  }
};

} // namespace HogeCodegen
