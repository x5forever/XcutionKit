
Pod::Spec.new do |s|
  s.name             = 'Xcution'
  s.version          = '1.0.0'
  s.summary          = 'Xcution framework CocoaPods'

  s.description      = <<-DESC
The framework is specifically developed for Xcution team.
                       DESC

  s.homepage         = 'https://github.com/x5/Xcution'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'x5' => 'wuxu1@creditease.cn' }
  s.source           = { :git => 'https://github.com/x5/Xcution.git', :tag => 'V'+s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.requires_arc = true
  s.static_framework  =  true
  s.vendored_frameworks = 'XcutionDemo/Xcution.framework'
  s.resources          = "XcutionDemo/Xcution.xcassets"
  s.dependency "AFNetworking"
  s.dependency "GTMBase64"
  s.dependency "DMWebView"
end
