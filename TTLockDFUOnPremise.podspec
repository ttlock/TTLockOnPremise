Pod::Spec.new do |s|
s.name          = "TTLockDFUOnPremise"
s.version       = "2.2.0"
s.summary       = "TTLockDFUOnPremise SDK for iOS."
s.homepage      = "https://github.com/ttlock/TTLockOnPremise"
s.license       = { :type => "MIT", :file => "LICENSE" }
s.author        = { "ttlock" => "chensg@sciener.cn" }
s.platform      = :ios, "12.0"
s.source        = { :git => "https://github.com/ttlock/TTLockOnPremise.git", :tag => "#{s.version}" }
s.vendored_frameworks = "TTLockDFUOnPremise.xcframework"
s.preserve_paths      = "TTLockDFUOnPremise.xcframework"
s.framework     = "CoreBluetooth"
s.library       = "z"
s.requires_arc  = true
s.ios.deployment_target = "12.0"
s.dependency "iOSDFULibrary", '~> 4.14.0'
s.dependency "TTLockOnPremise"
s.xcconfig     = { "OTHER_LDFLAGS" => "-ObjC" }
end
