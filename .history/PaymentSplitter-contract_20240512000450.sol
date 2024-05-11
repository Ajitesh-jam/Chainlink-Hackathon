// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

contract PaymentSplitter {
    address payable public owner;
    address payable public seller;
    address payable public gameCompany;
    
    constructor(address payable _seller, address payable _GameCompany) {
        owner = payable(msg.sender);
        seller = _seller;
        gameCompany = _GameCompany;
    }

    receive() external payable {
        // Calculate amounts to be sent to each recipient
        uint totalAmount = msg.value;
        uint amountToseller = (totalAmount * 90) / 100;
        uint amountTogameCompany = (totalAmount * 9) / 100;
        uint amountToOwner = (totalAmount * 1) / 100;
        // Transfer amounts to recipients
        seller.transfer(amountToseller);
        gameCompany.transfer(amountTogameCompany);
        owner.transfer(amountToOwner);
        
     }

}


contract address on sepolia - 0x7Ca90f48cbDCC2Bf2553E1A27c3f68A06A1c0C2C
