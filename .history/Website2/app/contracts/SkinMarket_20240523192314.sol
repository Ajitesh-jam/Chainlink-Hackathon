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
    address payable public owner;
    address payable public game;
    ISkinOwnership public skinOwnership;

    struct skinSeller {
        uint256 id; // New field to store the seller's id
        string userName;
        address payable walletAddress;
        uint256 price;
        address payable gameCompany;
    }

    mapping(uint256 => skinSeller[]) public skinSellers;
    mapping(uint256 => uint256) private gameSkinPrices;

    function AddOrEditSkin(uint256 _skinId, uint256 price) external {
        require(msg.sender == owner, "Only owner can modify this");
        gameSkinPrices[_skinId] = price;
    }

    function getSkinPriceFromGame(
        uint256 _skinId
    ) external view returns (uint256) {
        return gameSkinPrices[_skinId];
    }

    function buyFromGame(
        uint256 _skinId,
        string memory _userName
    ) public payable {
        //but issey game se buy karney ke liye apn ke platform se jana padega
        //plus koi nai skin add karney ke liye
        game.transfer(gameSkinPrices[_skinId]);
        // Update SkinOwner struct to add the bought skin
        skinOwnership.addSkinToUser(
            skinOwnership.getUser(_userName).username, //yaha pe get user kyuki agar nhi exists karta toh user bana ke add karo
            _skinId
        );
    }

    constructor(address _skinOwnershipAddress, address payable _game) {
        owner = payable(msg.sender);
        skinOwnership = ISkinOwnership(_skinOwnershipAddress);
        game = _game;
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
        uint256 _price
    ) public {
        skinSeller memory newSeller = skinSeller({
            id: skinSellers[skinId].length,
            userName: _userName,
            walletAddress: _walletAddress,
            price: _price,
            gameCompany: game
        });

        skinSellers[skinId].push(newSeller);

        // Update SkinOwner struct to remove the skin from seller
        skinOwnership.removeSkinFromUser(_userName, skinId);
    }
}

//contract address on ganache - 0x799E47dcf11488f4dCE0A4B79dE2C39fcB7d345f
// abi-
// [
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "address",
// 				"name": "_skinOwnershipAddress",
// 				"type": "address"
// 			},
// 			{
// 				"internalType": "address payable",
// 				"name": "_game",
// 				"type": "address"
// 			}
// 		],
// 		"stateMutability": "nonpayable",
// 		"type": "constructor"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "_skinId",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "price",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "AddOrEditSkin",
// 		"outputs": [],
// 		"stateMutability": "nonpayable",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "_skinId",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "string",
// 				"name": "_userName",
// 				"type": "string"
// 			}
// 		],
// 		"name": "buyFromGame",
// 		"outputs": [],
// 		"stateMutability": "payable",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "string",
// 				"name": "userName",
// 				"type": "string"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "skinId",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "sellerId",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "buySkin",
// 		"outputs": [
// 			{
// 				"internalType": "bool",
// 				"name": "",
// 				"type": "bool"
// 			}
// 		],
// 		"stateMutability": "payable",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [],
// 		"name": "game",
// 		"outputs": [
// 			{
// 				"internalType": "address payable",
// 				"name": "",
// 				"type": "address"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "skinId",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "id",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "getSeller",
// 		"outputs": [
// 			{
// 				"components": [
// 					{
// 						"internalType": "uint256",
// 						"name": "id",
// 						"type": "uint256"
// 					},
// 					{
// 						"internalType": "string",
// 						"name": "userName",
// 						"type": "string"
// 					},
// 					{
// 						"internalType": "address payable",
// 						"name": "walletAddress",
// 						"type": "address"
// 					},
// 					{
// 						"internalType": "uint256",
// 						"name": "price",
// 						"type": "uint256"
// 					},
// 					{
// 						"internalType": "address payable",
// 						"name": "gameCompany",
// 						"type": "address"
// 					}
// 				],
// 				"internalType": "struct SkinMarket.skinSeller",
// 				"name": "",
// 				"type": "tuple"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "skinId",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "getSellers",
// 		"outputs": [
// 			{
// 				"components": [
// 					{
// 						"internalType": "uint256",
// 						"name": "id",
// 						"type": "uint256"
// 					},
// 					{
// 						"internalType": "string",
// 						"name": "userName",
// 						"type": "string"
// 					},
// 					{
// 						"internalType": "address payable",
// 						"name": "walletAddress",
// 						"type": "address"
// 					},
// 					{
// 						"internalType": "uint256",
// 						"name": "price",
// 						"type": "uint256"
// 					},
// 					{
// 						"internalType": "address payable",
// 						"name": "gameCompany",
// 						"type": "address"
// 					}
// 				],
// 				"internalType": "struct SkinMarket.skinSeller[]",
// 				"name": "",
// 				"type": "tuple[]"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "_skinId",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "getSkinPriceFromGame",
// 		"outputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "",
// 				"type": "uint256"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [],
// 		"name": "owner",
// 		"outputs": [
// 			{
// 				"internalType": "address payable",
// 				"name": "",
// 				"type": "address"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "skinId",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "string",
// 				"name": "_userName",
// 				"type": "string"
// 			},
// 			{
// 				"internalType": "address payable",
// 				"name": "_walletAddress",
// 				"type": "address"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "_price",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "sellSkin",
// 		"outputs": [],
// 		"stateMutability": "nonpayable",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [],
// 		"name": "skinOwnership",
// 		"outputs": [
// 			{
// 				"internalType": "contract ISkinOwnership",
// 				"name": "",
// 				"type": "address"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "skinSellers",
// 		"outputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "id",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "string",
// 				"name": "userName",
// 				"type": "string"
// 			},
// 			{
// 				"internalType": "address payable",
// 				"name": "walletAddress",
// 				"type": "address"
// 			},
// 			{
// 				"internalType": "uint256",
// 				"name": "price",
// 				"type": "uint256"
// 			},
// 			{
// 				"internalType": "address payable",
// 				"name": "gameCompany",
// 				"type": "address"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	}
// ]
