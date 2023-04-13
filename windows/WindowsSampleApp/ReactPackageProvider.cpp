#include "pch.h"
#include "ReactPackageProvider.h"
//ここ特に書いてないけど追加
//#include "ReactPackageProvider.g.cpp"

//勝手に追加
//#include <ModuleRegistration.h>
#include "NativeModules.h"

#include "FancyMath.h"





using namespace winrt::Microsoft::ReactNative;

namespace winrt::WindowsSampleApp::implementation
{

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
    //勝手に追加
    //packageBuilder.AddModule(L"FancyMath", MakeTurboModuleProvider<::WindowsSampleApp::FancyMath>());
    AddAttributedModules(packageBuilder, true);
}

} // namespace winrt::WindowsSampleApp::implementation
