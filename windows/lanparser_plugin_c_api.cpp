#include "include/lanparser/lanparser_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "lanparser_plugin.h"

void LanparserPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  lanparser::LanparserPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
