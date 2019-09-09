
Pod::Spec.new do |s|
  s.name             = 'SVCution'
  s.version          = '2.1.1'
  s.summary          = 'Xcution framework CocoaPods'

  s.description      = <<-DESC
The framework is specifically developed for Xcution team.
                       DESC

  s.homepage         = 'https://github.com/x5forever/XcutionKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'x5' => 'wuxu1@creditease.cn' }
  s.source           = { :git => 'https://github.com/x5forever/XcutionKit', :tag => 'V'+s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.requires_arc = true
  s.static_framework  =  true
  s.frameworks = "Foundation", "UIKit", "WebKit"
  s.vendored_frameworks = "XcutionDemo/XcutionDemo/SVCution.framework"
  s.resources          = "XcutionDemo/XcutionDemo/SVCution.bundle"
  s.dependency "AFNetworking"
  s.dependency "GTMBase64"
  s.dependency "DMWebView"
end
