# Uncomment the next line to define a global platform for your project
# platform :ios, '9.0'
post_install do |installer|
  installer.generated_projects.each do |project|
    project.targets.each do |target|
      target.build_configurations.each do |config|
        config.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = '13.6'
        xcconfig_path = config.base_configuration_reference.real_path
        xcconfig = File.read(xcconfig_path)
        xcconfig_mod = xcconfig.gsub(/DT_TOOLCHAIN_DIR/, "TOOLCHAIN_DIR")
        File.open(xcconfig_path, "w") { |file| file << xcconfig_mod }
      end
    end
  end
end


target 'example' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!
  pod 'astrapay-qris', '0.5.7'
  pod 'MoEngage-iOS-SDK' , '~> 9.16.2'
  pod 'MoEngageGeofence','~>5.15.0'
  pod 'MoEngageRichNotification','~>7.15.0'
  pod 'MoEngageInApp','~> 4.15.0'
  pod 'MoEngageInbox','~>2.15.0'
  # Pods for example

end
