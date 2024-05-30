// SPDX-License-Identifier: MIT
pragma solidity ^0.8.26;

// Chainlink imports
import '@chainlink/contracts/src/v0.8/ChainlinkClient.sol';
import '@chainlink/contracts/src/v0.8/ConfirmedOwner.sol';

// solidity-stringutils import
import "https://github.com/Arachnid/solidity-stringutils/blob/master/src/strings.sol";

// OpenZeppelin import
import "https://github.com/OpenZeppelin/openzeppelin-contracts/blob/master/contracts/utils/Strings.sol";


interface ISkinOwnership {
    struct SkinOwner {
        string username;
        uint256[] skinIds;
    }

    function getUser(
        string memory _userName
    ) external returns (SkinOwner memory);

    function deleteUser(string memory _username) external;

    function addSkinToUser(string memory _username, uint256 _skinId) external;

    function removeSkinFromUser(
        string memory _username,
        uint256 _skinId
    ) external;

    function getUserSkins(
        string memory _username
    ) external view returns (uint256[] memory);

    function createUser(
        string memory _userName
    ) external returns (SkinOwner memory);
}

contract SkinMarket is ChainlinkClient, ConfirmedOwner {
    using strings for *;
    using Chainlink for Chainlink.Request;
    uint256 private constant ORACLE_PAYMENT = 1 * LINK_DIVISIBILITY;
    
    address public oracle;
    address payable public contractOwner;
    address payable public game;
    ISkinOwnership public skinOwnership;

    struct SkinSeller {
        uint256 id;
        string userName;
        address payable walletAddress;
        uint256 price;
        address payable gameCompany;
    }

    mapping(uint256 => SkinSeller[]) public skinSellers;
    mapping(uint256 => uint256) private gameSkinPrices;
    uint256[] public allSkins;


    constructor(address _skinOwnershipAddress, address payable _game, address _oracle) ConfirmedOwner(msg.sender) {
        _setChainlinkToken(0x779877A7B0D9E8603169DdbD7836e478b4624789);
        contractOwner = payable(msg.sender);
        skinOwnership = ISkinOwnership(_skinOwnershipAddress);
        game = _game;
        oracle = _oracle;

        // Initial data -all skins costs 1 eth in game
        uint256 initialPrice = 1 ether;
        for (uint256 i = 1; i <= 5; i++) {
            gameSkinPrices[i] = initialPrice;
            allSkins.push(i);
        }
    }

    //function to get all skins from game
    function getGameSkins() external view returns (uint256[] memory) {
        return allSkins;
    }

    function AddOrEditSkin(uint256 _skinId, uint256 price) external {
        require(msg.sender == contractOwner, "Only contractOwner can modify this");
        gameSkinPrices[_skinId] = price;

        bool skinExists = false;
        for (uint256 i = 0; i < allSkins.length; i++) {
            if (allSkins[i] == _skinId) {
                skinExists = true;
                break;
            }
        }
        if (!skinExists) {
            allSkins.push(_skinId);
        }
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
        require(msg.value == gameSkinPrices[_skinId], "Incorrect price sent");
        game.transfer(msg.value);

        ISkinOwnership.SkinOwner memory user = skinOwnership.getUser(_userName);
        if (bytes(user.username).length == 0) {
            skinOwnership.createUser(_userName);
        }

        skinOwnership.addSkinToUser(_userName, _skinId);
    }

    function getSellers(
        uint256 skinId
    ) public view returns (SkinSeller[] memory) {
        return skinSellers[skinId];
    }

    function getSeller(
        uint256 skinId,
        uint256 id
    ) public view returns (SkinSeller memory) {
        require(skinSellers[skinId].length > 0, "No sellers for this skin ID");

        for (uint256 i = 0; i < skinSellers[skinId].length; i++) {
            if (skinSellers[skinId][i].id == id) {
                return skinSellers[skinId][i];
            }
        }
        revert("Seller not found");
    }

    function buySkin(
        string memory userName,
        uint256 skinId,
        uint256 sellerId
    ) public payable {
        require(skinSellers[skinId].length > 0, "No sellers for this skin ID");

        SkinSeller memory seller = getSeller(skinId, sellerId);
        require(msg.value == seller.price, "Incorrect price sent");

        uint256 totalAmount = msg.value;
        uint256 amountToSeller = (totalAmount * 90) / 100;
        uint256 amountToGameCompany = (totalAmount * 9) / 100;
        uint256 amountToOwner = (totalAmount * 1) / 100;

        seller.walletAddress.transfer(amountToSeller);
        contractOwner.transfer(amountToOwner);
        seller.gameCompany.transfer(amountToGameCompany);

        for (uint256 i = 0; i < skinSellers[skinId].length; i++) {
            if (skinSellers[skinId][i].id == sellerId) {
                skinSellers[skinId][i] = skinSellers[skinId][
                    skinSellers[skinId].length - 1
                ];
                skinSellers[skinId].pop();
                break;
            }
        }

        ISkinOwnership.SkinOwner memory user = skinOwnership.getUser(userName);
        if (bytes(user.username).length == 0) {
            skinOwnership.createUser(userName);
        }

        skinOwnership.addSkinToUser(userName, skinId);

        //implement API call to add the skin to the buyer -----> type = BUY
        Chainlink.Request memory req = _buildOperatorRequest(
            stringToBytes32("5d99bfdca90141d1b8da9ad5edcef133"),
            this.fulfillRequestSuccess.selector
        );
        string[] memory skinIds = new string[](1);
        skinIds[0] = Strings.toString(skinId);

        Chainlink._add(req, "username", userName);
        Chainlink._add(req, "type", "BUY");
        Chainlink._addStringArray(req, "skinIds", skinIds);

        _sendOperatorRequestTo(oracle, req, ORACLE_PAYMENT);
    }

    function sellSkin(
        uint256 skinId,
        string memory _userName,
        address payable _walletAddress,
        uint256 _price
    ) public {
        uint256[] memory skins = skinOwnership.getUserSkins(_userName);
        bool haveSkin = false;

        for (uint256 i = 0; i < skins.length; i++) {
            if (skins[i] == skinId) {
                haveSkin = true;
                break;
            }
        }
        if (!haveSkin) {
            //implement API call to fetch if user have skin from the database ----> type = CHECK
            Chainlink.Request memory req = _buildOperatorRequest(
                stringToBytes32("5d99bfdca90141d1b8da9ad5edcef133"),
                this.fulfillRequestCheck.selector
            );
            
            string[] memory skinIds = new string[](1);
            skinIds[0] = Strings.toString(skinId);

            Chainlink._add(req, "username", _userName);
            Chainlink._add(req, "type", "CHECK");
            Chainlink._addStringArray(req, "skinIds", skinIds);
            _sendOperatorRequestTo(oracle, req, ORACLE_PAYMENT);

            return;
        } else {
            //if skin have from contract then remove it from skinOwnership
            skinOwnership.removeSkinFromUser(_userName, skinId);
        }

        require(haveSkin, "You don't own this skin");

        SkinSeller memory newSeller = SkinSeller({
            id: skinSellers[skinId].length,
            userName: _userName,
            walletAddress: _walletAddress,
            price: _price,
            gameCompany: game
        });

        skinSellers[skinId].push(newSeller);

        //implement API call to update database to remove the skin from seller -----> type = SELL
        Chainlink.Request memory req = _buildOperatorRequest(
            stringToBytes32("5d99bfdca90141d1b8da9ad5edcef133"),
            this.fulfillRequestSuccess.selector
        );
        
        string[] memory skinIds = new string[](1);
        skinIds[0] = Strings.toString(skinId);

        Chainlink._add(req, "username", _userName);
        Chainlink._add(req, "type", "SELL");
        Chainlink._addStringArray(req,"skinIds", skinIds);
        _sendOperatorRequestTo(oracle, req, ORACLE_PAYMENT);
    }

    function getAllSkins() external view returns (uint256[] memory) {
        return allSkins;
    }

    function fulfillRequestCheck(bytes32 _requestId, string memory _result)
        public
        recordChainlinkFulfillment(_requestId)
    {
        // "2, 3, 4"
        strings.slice memory s = _result.toSlice();
        strings.slice memory delim = ", ".toSlice();
        string[] memory parts = new string[](s.count(delim) + 1);
        uint[] memory skinIds = new uint[](s.count(delim) + 1);
        for(uint i = 0; i < parts.length; i++) {
            parts[i] = s.split(delim).toString();
            skinIds[i] = stringToUint(parts[i]);
        }
        // skinIds check
        
    }

    function fulfillRequestSuccess(bytes32 _requestId, string memory _info)
        public
        recordChainlinkFulfillment(_requestId)
    {
        // emit RequestForInfoFulfilled(_requestId, _info);
        // lastRetrievedInfo = _info;
    }


    function stringToBytes32(string memory source)
        private
        pure
        returns (bytes32 result)
    {
        bytes memory tempEmptyStringTest = bytes(source);
        if (tempEmptyStringTest.length == 0) {
            return 0x0;
        }

        assembly {
            // solhint-disable-line no-inline-assembly
            result := mload(add(source, 32))
        }
    }

    function stringToUint(string memory s) public pure returns (uint) {
        bytes memory b = bytes(s);
        uint result = 0;
        for (uint256 i = 0; i < b.length; i++) {
            uint256 c = uint256(uint8(b[i]));
            if (c >= 48 && c <= 57) {
                result = result * 10 + (c - 48);
            }
        }
        return result;
    }
}

// contract address: 0x0DedDe527e2B24a6c2B3bF5F3E7488517E37F3AD
