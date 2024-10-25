//
//  AppDelegate.swift
//  example
//
//  Created by Rahman on 22/10/24.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        window = UIWindow(frame: UIScreen.main.bounds)
        
        
        let vc = ViewController()
        //        vc.delegate = self
        let mainViewController = UINavigationController(rootViewController: vc)
        
        // Set the root view controller of the window with your view controller
        window?.rootViewController = mainViewController
        // Make the window visible
        window?.makeKeyAndVisible()
        return true
    }
    
    
        
}
