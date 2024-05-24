import React, { useState, useEffect } from 'react';
import Web3 from 'web3';
import id0 from "./assets/Bacchi.png";
import id1 from "./assets/woman.png";
import id2 from "./assets/Woman-cloth.png";
import id3 from "./assets/Woman-skirt.png";
import Button from 'react-bootstrap/Button';
import Card from 'react-bootstrap/Card';
import skinMarketABI from './abis/skinMarket.json';

// Map skinId to corresponding image import
const skinImages = {
  0: id0,
  1: id1,
  2: id2,
  3: id3,
};

function CardComponent({ skinId, username, price, buy }) {
  return (
    <Card style={{ width: '18rem' }}>
      <Card.Img variant="top" src={skinImages[skinId]} />
      <Card.Body>
        <Card.Title>{username}</Card.Title>
        <Card.Text>Price: {price} ETH</Card.Text>
        <Button variant="primary" onClick={buy}>BUY</Button>
      </Card.Body>
    </Card>
  );
}

function BuyDash() {
  const [skins, setSkins] = useState([]);
  let connectedAccount ;
  const skinMarketAdd = "0x0DedDe527e2B24a6c2B3bF5F3E7488517E37F3AD"; // Address from .env file
  const web3 = new Web3(Web3.givenProvider || "http://127.0.0.1:7545"); // Ganache

  useEffect(() => {
    connectWallet();
    ShowAllSkins();
  }, []);

  async function connectWallet() {//function jissey wallet connect hojayega
    try {
      const accounts = await web3.eth.getAccounts();
      connectedAccount=accounts[0];
      console.log("Connected account:", accounts[0]);
    } catch (error) {
      console.error("Error connecting wallet:", error);
    }
  }

  async function ShowAllSkins() {
    const skinMarket = new web3.eth.Contract(skinMarketABI, skinMarketAdd);
    try {
      const skinIds = await skinMarket.methods.getAllSkins().call();
      const allSellers = await Promise.all(skinIds.map(async (skinId) => {
        const sellers = await skinMarket.methods.getSellers(skinId).call();
        return sellers.map((seller, index) => ({
          skinId,
          seller,
        }));
      }));

        //sellers will be kinda this type - 
          //         [{…}]
          // 0
          // : 
          // {0: 0n, 1: 'Devansh', 2: '0xeE3bbfDC858F71d0Ab57f17F3585db1b4DA68574', 3: 100000n, 4: '0x511d5A0649630213E26c071b861c5cB1A8609346', __length__: 5, id: 0n, userName: 'Devansh', walletAddress: '0xeE3bbfDC858F71d0Ab57f17F3585db1b4DA68574', price: 100000n, …}
          // length
          // : 
          // 1
          // [[Prototype]]
          // : 
          // Array(0)

      const sellerCards = allSellers.flat().map(({ skinId, seller }, index) => (
        <CardComponent 
          key={index} 
          skinId={skinId}
          username={seller.userName}
          price={web3.utils.fromWei(seller.price.toString(), 'ether')}
          buy={() => BuySkin(skinId, seller.id)}
        />
      ));
      setSkins(sellerCards);
    } catch (error) {
      console.error("Error fetching sellers:", error);
    }
  }

  async function BuySkin(skinId, sellerId) {
    const skinMarket = new web3.eth.Contract(skinMarketABI, skinMarketAdd);
    const seller = await skinMarket.methods.getSeller(skinId, sellerId).call();
    try {
      await skinMarket.methods.buySkin(seller.userName, skinId, sellerId).send({ 
        from: connectedAccount, 
        value: seller.price 
      });
      alert("Skin purchased successfully!");
      ShowAllSkins();
    } catch (error) {
      console.error("Error buying skin:", error);
      alert("Error buying skin: " + error.message);
    }
  }

  function shortAddress(address, startLength = 6, endLength = 4) {
    return `${address.slice(0, startLength)}...${address.slice(-endLength)}`;
  }

  return (
    <>
      <div className="App">
        <button onClick={connectWallet}>Connect Wallet</button>
        {connectedAccount && (
          <div>
            <p>Connected: {shortAddress(connectedAccount)}</p>
          </div>
        )}
      </div>
      <div>
        {skins}
      </div>
    </>
  );
}

export default BuyDash;

