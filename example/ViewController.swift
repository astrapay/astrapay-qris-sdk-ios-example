//
//  ViewController.swift
//  example
//
//  Created by Rahman on 22/10/24.
//

import UIKit
import AstraPayQrisSdk

class ViewController: UIViewController{

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        setupSDK()
        let view = view as! View
        view.delegate = self
    }
    
    override func loadView() {
        view = View()
    }
    
    @objc
    func navigateToQris() {
        QRNewRouter.sharedInstance.navigateToQrScan(from: self)
    }

    func setupSDK(){
        QRConfigurationSdk.BUILD_MODE = .uat
        QRNewRouter.sharedInstance.delegate = self
        QRConfigurationSdk.isSnap = true
    }

}

extension ViewController: ViewDelegate {
    func onNavigateToQris() {
        QRNewRouter.sharedInstance.presentQrScan(from: self)
    }
    
}


extension ViewController: QRProtocolSdk {
    func onCancel(viewController: UIViewController) {
        let failedPage = GeneralViewController(textPage: "Cancel Page")
        viewController.navigationController?.pushViewController(failedPage, animated: true)
    }
    
    func onComplete(viewController: UIViewController) {
        let failedPage = GeneralViewController(textPage: "Complete Page")
        viewController.navigationController?.pushViewController(failedPage, animated: true)
    }

    func onForbidden(viewController: UIViewController) {
        let failedPage = GeneralViewController(textPage: "Forbidden Page")
        viewController.navigationController?.pushViewController(failedPage, animated: true)
    }

    func onShowHistory(viewController: UIViewController) {
        let failedPage = GeneralViewController(textPage: "History Page")
        viewController.navigationController?.pushViewController(failedPage, animated: true)
    }
    
    func onProcessing(viewController: UIViewController){
        let processing = GeneralViewController(textPage: "Processing Page")
        viewController.navigationController?.pushViewController(processing, animated: true)
    }
    
    func onFailed(viewController: UIViewController){
        let failedPage = GeneralViewController(textPage: "Failed Page")
        viewController.navigationController?.pushViewController(failedPage, animated: true)
    }
}


