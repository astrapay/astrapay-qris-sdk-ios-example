//
//  View.swift
//  example
//
//  Created by Rahman on 22/10/24.
//


import Foundation
import UIKit

protocol ViewDelegate: AnyObject {
    func onNavigateToQris()
}

class View: UIView {
    let stackView = UIStackView()
    let buttonQris: UIButton = {
        let button = UIButton()
        button.setTitle("Navigate to QRIS", for: .normal)
        button.backgroundColor = .blue
        return button
    }()
    
    
    let otpButton: UIButton = {
        let button = UIButton()
        button.setTitle("Navigate to OTP", for: .normal)
        button.backgroundColor = .blue
        return button
    }()
    weak var delegate: ViewDelegate?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        createView()
    }
    
    required init?(coder: NSCoder) {
        super.init(coder: coder)
        createView()
    }
    
    private func createView() {
        // Set background color
        backgroundColor = .white
        
        // Disable autoresizing mask translation for manual constraints
        buttonQris.translatesAutoresizingMaskIntoConstraints = false
        otpButton.translatesAutoresizingMaskIntoConstraints = false
        stackView.translatesAutoresizingMaskIntoConstraints = false
        
        // Set constraints for buttonQris
        NSLayoutConstraint.activate([
            buttonQris.widthAnchor.constraint(equalToConstant: 100),
            buttonQris.heightAnchor.constraint(equalToConstant: 50)
        ])
        
        // Set constraints for otpButton
        NSLayoutConstraint.activate([
            otpButton.widthAnchor.constraint(equalToConstant: 100),
            otpButton.heightAnchor.constraint(equalToConstant: 50)
        ])
        
        // Set stackView properties
        stackView.spacing = 20
        stackView.axis = .vertical
        
        // Add buttons to stackView
        stackView.addArrangedSubview(buttonQris)
        stackView.addArrangedSubview(otpButton)
        
        // Add stackView to the view
        addSubview(stackView)
        
        // Set constraints for stackView
        NSLayoutConstraint.activate([
            stackView.topAnchor.constraint(equalTo: safeAreaLayoutGuide.topAnchor, constant: 20),
            stackView.leadingAnchor.constraint(equalTo: safeAreaLayoutGuide.leadingAnchor, constant: 20),
            stackView.trailingAnchor.constraint(equalTo: safeAreaLayoutGuide.trailingAnchor, constant: -20)
        ])
        
        // Add target actions for buttons
        buttonQris.addTarget(self, action: #selector(navigateToQris), for: .touchUpInside)
//        otpButton.addTarget(self, action: #selector(navigateToOtp), for: .touchUpInside)
    }

    
    @objc
    func navigateToQris() {
        delegate?.onNavigateToQris()
    }
    

}
