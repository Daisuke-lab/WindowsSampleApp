#pragma once

#include "winrt/Microsoft.ReactNative.h"
//ここ勝手に追加
//#include "ReactPackageProvider.g.h"

namespace winrt::WindowsSampleApp::implementation
{
    struct ReactPackageProvider : winrt::implements<ReactPackageProvider, winrt::Microsoft::ReactNative::IReactPackageProvider>
    {
    public: // IReactPackageProvider
        void CreatePackage(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept;
    };
} // namespace winrt::WindowsSampleApp::implementation

//ここに関してはsample-appでも同じ感じだったのであってそう。
namespace winrt::WindowsSampleApp::factory_implementation
{
    struct ReactPackageProvider : winrt::implements<ReactPackageProvider, implementation::ReactPackageProvider>{};
}

