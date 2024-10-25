
# Astrapay QRIS SDK for iOS

An iOS SDK to integrate Astrapay QRIS payment services into your mobile application, enabling seamless QRIS transactions.

## Installation

To install the Astrapay QRIS SDK in your project, follow these steps:

### CocoaPods Setup
1. Open your Podfile at the root level and add the following dependencies:
   ```ruby
   pod 'astrapay-qris', '0.5.8'
   pod 'MoEngage-iOS-SDK', '~> 9.16.2'
   pod 'MoEngageGeofence', '~> 5.15.0'
   pod 'MoEngageRichNotification', '~> 7.15.0'
   pod 'MoEngageInApp', '~> 4.15.0'
   pod 'MoEngageInbox', '~> 2.15.0'
   ```
   > **Note**: The MoEngage SDK is required for user tracking within the QRIS SDK.

2. Install the dependencies by running the following command in your terminal:
   ```bash
   pod install
   ```

## Configuration
Before initiating any QRIS transaction, set up the SDK configuration with the necessary parameters:

```swift
QRConfigurationSdk.AUTH_TOKEN = "<YOUR_AUTH_TOKEN>"  // Insert your authentication token
QRConfigurationSdk.BUILD_MODE = .uat                 // Set to .uat for testing or .prod for production
QRConfigurationSdk.SDK_TOKEN = "<YOUR_SDK_TOKEN>"    // Insert your SDK token
QRConfigurationSdk.isSnap = true                     // Set to true if Snap is enabled
QRNewRouter.sharedInstance.delegate = self           // Set the delegate to handle transaction callbacks

```

> **Note**: Initialization should be done within a ViewController class that conforms to the QRProtocolSdk delegate protocol.


### QRIS SDK Configuration Parameters

| Parameter       | Type              | Required | Description                                                      |
| --------------- | ----------------- | -------- | ---------------------------------------------------------------- |
| `AUTH_TOKEN`    | `String`          | Yes      | Authentication token provided by Astrapay|
| `SDK_TOKEN`     | `String`          | Yes      | SDK token provided by the registered client|
| `BUILD_MODE`    | `BuildMode`       | Yes      | API environment (.uat for testing or .prod for production)|
| `isSnap`        | `Bool`            | Yes      | Set to true if Snap integration is required|
| `delegate`      | `QRProtocolSdk`   | Yes      | Sets the event listener to handle QRIS transaction events                |

## Usage
After configuring the SDK, you can start a QRIS transaction by calling one of the following methods:

```swift
QRNewRouter.sharedInstance.navigateToQrScan(from: self)
```
Use this method for navigation-style QRIS transactions.

Alternatively, use a dialog-style QRIS transaction:
```swift
QRNewRouter.sharedInstance.presentQrScan(from: self)
```

## Listeners
The SDK provides listeners to handle various transaction states:

- `onComplete`: Called when a transaction completes successfully.
- `onFailed`: Called if a transaction fails due to an error.
- `onForbidden`: Called if the transaction is forbidden (e.g., due to insufficient permissions or invalid tokens).
- `onShowHistory`: Called when a user requests to view their transaction history.
- `onProcessing`: Called if the transaction is pending and still processing.

## Example Usage
Below is an example of integrating the Astrapay QRIS SDK into a sample ViewController class. This example demonstrates setting up the SDK and handling various transaction events.
```swift
import UIKit
import AstraPayQrisSdk

class ViewController: UIViewController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setupSDK()
        let view = self.view as! View
        view.delegate = self
    }

    override func loadView() {
        view = View()
    }
    
    @objc
    func navigateToQris() {
        QRNewRouter.sharedInstance.navigateToQrScan(from: self)
    }

    func setupSDK() {
        QRConfigurationSdk.AUTH_TOKEN = "<YOUR_AUTH_TOKEN>"      // Insert your authentication token here
        QRConfigurationSdk.BUILD_MODE = .uat                    // Set environment to UAT or PROD
        QRConfigurationSdk.SDK_TOKEN = "<YOUR_SDK_TOKEN>"       // Insert your SDK token here
        QRConfigurationSdk.isSnap = true                         // Set to true if Snap is enabled
        QRNewRouter.sharedInstance.delegate = self               // Assign delegate for transaction callbacks
    }
}

extension ViewController: ViewDelegate {
    func onNavigateToQris() {
        QRNewRouter.sharedInstance.presentQrScan(from: self)
    }
}

extension ViewController: QRProtocolSdk {
    func onCancel(viewController: UIViewController) {
        let cancelPage = GeneralViewController(textPage: "Cancel Page")
        viewController.navigationController?.pushViewController(cancelPage, animated: true)
    }
    
    func onComplete(viewController: UIViewController) {
        let completePage = GeneralViewController(textPage: "Complete Page")
        viewController.navigationController?.pushViewController(completePage, animated: true)
    }

    func onForbidden(viewController: UIViewController) {
        let forbiddenPage = GeneralViewController(textPage: "Forbidden Page")
        viewController.navigationController?.pushViewController(forbiddenPage, animated: true)
    }

    func onShowHistory(viewController: UIViewController) {
        let historyPage = GeneralViewController(textPage: "History Page")
        viewController.navigationController?.pushViewController(historyPage, animated: true)
    }
    
    func onProcessing(viewController: UIViewController) {
        let processingPage = GeneralViewController(textPage: "Processing Page")
        viewController.navigationController?.pushViewController(processingPage, animated: true)
    }
    
    func onFailed(viewController: UIViewController) {
        let failedPage = GeneralViewController(textPage: "Failed Page")
        viewController.navigationController?.pushViewController(failedPage, animated: true)
    }
}
```
