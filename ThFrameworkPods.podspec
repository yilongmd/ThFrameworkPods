Pod::Spec.new do |s|
  s.name         = "ThFrameworkPods"
  s.version      = "0.1.3"
  s.summary      = "a common framework for the team."

  s.homepage     = "https://github.com/yilongmd/ThFramework.git"
  s.license      = 'MIT'
  s.author       = { "yilongmd" => "317616660@qq.com" }
  s.platform     = :ios, "7.0"
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://github.com/yilongmd/ThFramework.git", :tag => s.version}
  s.source_files  = 'framework/**/*'
  s.public_header_files = 'framework/**/*.h'
  s.requires_arc = true
  s.frameworks = 'UIKit','CoreGraphics','Foundation','MobileCoreServices','QuartzCore','Security','SystemConfiguration' 
  s.libraries  = 'xml2'
  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }

  #s.dependency 'SSToolkit', '~> 2.0.0'
  s.dependency 'JSONModel', '~> 1.2.0'
  s.dependency 'KVOController', '~> 1.1.0'
  s.dependency 'ReactiveCocoa', '~> 2.5'
  s.dependency 'FMDB', "~> 2.6.2"
  s.dependency 'YTKNetwork', '~> 0.6.0'
  s.dependency 'Toast', "~> 3.0"
  s.dependency 'MBProgressHUD', '~> 0.9.2'



end




