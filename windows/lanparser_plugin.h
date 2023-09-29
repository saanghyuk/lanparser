#ifndef FLUTTER_PLUGIN_LANPARSER_PLUGIN_H_
#define FLUTTER_PLUGIN_LANPARSER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace lanparser {

class LanparserPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  LanparserPlugin();

  virtual ~LanparserPlugin();

  // Disallow copy and assign.
  LanparserPlugin(const LanparserPlugin&) = delete;
  LanparserPlugin& operator=(const LanparserPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace lanparser

#endif  // FLUTTER_PLUGIN_LANPARSER_PLUGIN_H_
