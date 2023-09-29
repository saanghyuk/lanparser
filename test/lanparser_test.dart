import 'package:flutter_test/flutter_test.dart';
import 'package:lanparser/lanparser.dart';
import 'package:lanparser/lanparser_platform_interface.dart';
import 'package:lanparser/lanparser_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockLanparserPlatform
    with MockPlatformInterfaceMixin
    implements LanparserPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final LanparserPlatform initialPlatform = LanparserPlatform.instance;

  test('$MethodChannelLanparser is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelLanparser>());
  });

  test('getPlatformVersion', () async {
    Lanparser lanparserPlugin = Lanparser();
    MockLanparserPlatform fakePlatform = MockLanparserPlatform();
    LanparserPlatform.instance = fakePlatform;

    expect(await lanparserPlugin.getPlatformVersion(), '42');
  });
}
