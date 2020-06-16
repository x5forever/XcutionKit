
Pod::Spec.new do |s|
  s.name             = 'SVCution'
  s.version          = '3.0.0'
  s.summary          = 'SVCution framework CocoaPods'

  s.description      = <<-DESC
The framework is specifically developed for Xcution team.
                       DESC

  s.homepage         = 'https://github.com/x5forever/XcutionKit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'x5' => 'x5forever@163.com' }
  s.source           = { :git => 'https://github.com/x5forever/XcutionKit', :tag => 'V'+s.version.to_s }
  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.static_framework  =  true
  s.frameworks = "Foundation", "UIKit"
  # s.vendored_frameworks = "XcutionDemo/XcutionDemo/SVCution.framework"
  # s.resources          = "XcutionDemo/XcutionDemo/SVCution.bundle"
  s.dependency "SVTransport"
  s.dependency "SDWebImage"
  s.dependency "SVWabView"
  s.dependency "JPush"
end
