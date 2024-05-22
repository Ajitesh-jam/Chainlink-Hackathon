// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

interface ISkinOwnership {
    struct skinOwner {
        string username;
        uint256[] skinIds;
    }

    function getUser(
        string memory _userName
    ) external returns (skinOwner memory);

    function deleteUser(string memory _username) external;

    function addSkinToUser(string memory _username, uint256 _skinId) external;

    function removeSkinFromUser(
        string memory _username,
        uint256 _skinId
    ) external;

    function getUserSkins(
        string memory _username
    ) external view returns (uint256[] memory);
}

contract SkinMarket {
    address public owner;
    ISkinOwnership public skinOwnership;

    struct skinSeller {
        uint256 id; // New field to store the seller's id
        string userName;
        address payable walletAddress;
        uint256 price;
        address payable gameCompany;
    }

    mapping(uint256 => skinSeller[]) public skinSellers;

    constructor(address _skinOwnershipAddress) {
        owner = msg.sender;
        skinOwnership = ISkinOwnership(_skinOwnershipAddress);
    }

    function getSellers(
        uint256 skinId
    ) public view returns (skinSeller[] memory) {
        return skinSellers[skinId];
    }

    function getSeller(
        uint256 skinId,
        uint256 id
    ) public view returns (skinSeller memory) {
        require(skinSellers[skinId].length > 0, "No sellers for this skin ID");

        skinSeller memory seller;
        bool sellerFound = false;

        for (uint256 i = 0; i < skinSellers[skinId].length; i++) {
            if (skinSellers[skinId][i].id == id) {
                seller = skinSellers[skinId][i];
                sellerFound = true;
                break;
            }
        }

        require(sellerFound, "Seller not found");
        return seller;
    }

    function buySkin(
        string memory userName,
        uint256 skinId,
        uint256 sellerId
    ) public payable returns (bool) {
        require(skinSellers[skinId].length > 0, "No sellers for this skin ID");

        skinSeller memory seller = getSeller(skinId, sellerId);

        require(msg.value == seller.price, "Incorrect price sent");

        uint256 totalAmount = msg.value;
        uint256 amountToSeller = (totalAmount * 90) / 100;
        uint256 amountToGameCompany = (totalAmount * 9) / 100;
        uint256 amountToOwner = (totalAmount * 1) / 100;

        seller.walletAddress.transfer(amountToSeller);
        payable(owner).transfer(amountToOwner);
        seller.gameCompany.transfer(amountToGameCompany);

        // Remove the seller from the array after a successful transaction //buy confirmed
        for (uint256 i = 0; i < skinSellers[skinId].length; i++) {
            if (skinSellers[skinId][i].id == sellerId) {
                skinSellers[skinId][i] = skinSellers[skinId][
                    skinSellers[skinId].length - 1
                ];
                skinSellers[skinId].pop();
                break;
            }
        }

        // Update SkinOwner struct to add the bought skin
        skinOwnership.addSkinToUser(
            skinOwnership.getUser(userName).username,
            skinId
        );

        return true;
    }

    function sellSkin(
        uint256 skinId,
        string memory _userName,
        address payable _walletAddress,
        uint256 _price,
        address payable _gameCompany
    ) public {
        skinSeller memory newSeller = skinSeller({
            id: skinSellers[skinId].length,
            userName: _userName,
            walletAddress: _walletAddress,
            price: _price,
            gameCompany: _gameCompany
        });

        skinSellers[skinId].push(newSeller);

        // Update SkinOwner struct to remove the skin from seller
        skinOwnership.removeSkinFromUser(_userName, skinId);
    }
}
