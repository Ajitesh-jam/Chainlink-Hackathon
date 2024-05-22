// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract SkinMarket {
    address public owner;

    struct SkinSeller {
        uint256 id; // ID to uniquely identify each seller
        string userName;
        address payable walletAddress;
        uint256 price;
        address payable gameCompany;
    }

    mapping(uint256 => SkinSeller[]) public skinSellers;

    constructor() {
        owner = msg.sender;
    }

    function sellSkin(
        uint256 skinId,
        string memory _userName,
        address payable _walletAddress,
        uint256 _price,
        address payable _gameCompany
    ) public {
        SkinSeller memory newSeller = SkinSeller({
            id: skinSellers[skinId].length, // Assign id based on the length of the array
            userName: _userName,
            walletAddress: _walletAddress,
            price: _price,
            gameCompany: _gameCompany
        });

        skinSellers[skinId].push(newSeller);
    }

    function getSellers(
        uint256 skinId
    ) public view returns (SkinSeller[] memory) {
        return skinSellers[skinId];
    }

    function buySkin(
        uint256 skinId,
        uint256 sellerId
    ) public payable returns (bool) {
        require(skinSellers[skinId].length > 0, "No sellers for this skin ID");
        require(sellerId < skinSellers[skinId].length, "Invalid seller ID");

        SkinSeller storage seller = skinSellers[skinId][sellerId];
        require(msg.value == seller.price, "Incorrect price sent");

        uint256 totalAmount = msg.value;
        uint256 amountToSeller = (totalAmount * 90) / 100;
        uint256 amountToGameCompany = (totalAmount * 9) / 100;
        uint256 amountToOwner = (totalAmount * 1) / 100;

        seller.walletAddress.transfer(amountToSeller);
        payable(owner).transfer(amountToOwner);
        seller.gameCompany.transfer(amountToGameCompany);

        // Remove the seller from the array by swapping with the last element and popping the array
        if (sellerId != skinSellers[skinId].length - 1) {
            skinSellers[skinId][sellerId] = skinSellers[skinId][
                skinSellers[skinId].length - 1
            ];
            skinSellers[skinId][sellerId].id = sellerId; // Update the id to the correct index
        }
        skinSellers[skinId].pop();

        return true;
    }
}
