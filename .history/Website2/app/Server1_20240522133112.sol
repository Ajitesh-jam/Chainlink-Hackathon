// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract SkinMarket {
    address public owner;

    struct SkinSeller {
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
        string memory userName
    ) public payable returns (bool) {
        require(skinSellers[skinId].length > 0, "No sellers for this skin ID");

        SkinSeller[] memory sellers = skinSellers[skinId];
        SkinSeller memory seller;
        bool sellerFound = false;

        for (uint256 i = 0; i < sellers.length; i++) {
            if (
                keccak256(abi.encodePacked(sellers[i].userName)) ==
                keccak256(abi.encodePacked(userName))
            ) {
                seller = sellers[i];
                sellerFound = true;
                break;
            }
        }

        require(sellerFound, "Seller not found");
        require(msg.value == seller.price, "Incorrect price sent");

        uint256 totalAmount = msg.value;
        uint256 amountToSeller = (totalAmount * 90) / 100;
        uint256 amountToGameCompany = (totalAmount * 9) / 100;
        uint256 amountToOwner = (totalAmount * 1) / 100;

        seller.walletAddress.transfer(amountToSeller);
        payable(owner).transfer(amountToOwner);
        seller.gameCompany.transfer(amountToGameCompany);
        return true;
    }
}