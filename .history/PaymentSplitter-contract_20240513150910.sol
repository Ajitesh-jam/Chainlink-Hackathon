// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract EtherReceiver {
    address payable public owner;
    address payable public seller;
    address payable public gameCompany;

    function getContractBalance() public view returns (uint256) {
        return address(this).balance;
    }

    constructor() {
        owner = payable(msg.sender);
    }

    receive() external payable {}

    // Calculate amounts to be sent to each recipient

    function Buy(
        address payable _seller,
        address payable _GameCompany
    ) external payable {
        seller = _seller;
        gameCompany = _GameCompany;
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

// contract address on sepolia - 0x7Ca90f48cbDCC2Bf2553E1A27c3f68A06A1c0C2C
// Game Company - 0xf904E2846F3aB662F8B4CC9bb6363B6017Ecb79f
// Seller -  0x18173Ae29D21963ABAbE93f2F50b9C34b9B897Fe