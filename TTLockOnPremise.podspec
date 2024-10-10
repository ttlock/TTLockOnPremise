Pod::Spec.new do |s|
s.name          = "TTLockOnPremise"
s.version       = "2.1.4"
s.summary       = "TTLockOnPremise SDK for iOS."
s.homepage      = "https://github.com/ttlock/TTLockOnPremise"
s.license       = { :type => "MIT", :file => "LICENSE" }
s.author        = { "ttlock" => "chensg@sciener.cn" }
s.platform      = :ios, "9.0"
s.source        = { :git => "https://github.com/ttlock/TTLockOnPremise.git", :tag => "#{s.version}" }
s.vendored_frameworks = "TTLockOnPremise.xcframework"
s.preserve_paths      = "TTLockOnPremise.xcframework"
s.framework     = "CoreBluetooth"
s.requires_arc  = true 
s.ios.deployment_target = "9.0"
s.xcconfig     = { "OTHER_LDFLAGS" => "-ObjC" }
end
