import React, { useState } from 'react';
import axios from 'axios'; // Make sure to import axios for making HTTP requests
import Web3 from "web3";
import { useParams } from 'react-router-dom';

//let web3 = new Web3(window.ethereum); //Sepolia

let web3 = new Web3(new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545")); //Ganache
function SellSkin(props) {

  const { userName, skinId } = useParams();

  const [price, setPrice] = useState(0);
  const [connectedAccount, setConnectedAccount] = useState(props.WalletAddress);

  async function connectWallet() {
    web3.eth.getAccounts().then((accounts) => {
      setConnectedAccount(accounts[0]);

    });
    // if (window.ethereum) {
    //   try {
    //     // Request access to MetaMask accounts
    //     const accounts = await window.ethereum.request({
    //       method: "eth_requestAccounts",
    //     });
    //     if (accounts.length > 0) {
    //       setConnectedAccount(accounts[0]);
    //       console.log("Connected account:", accounts[0]);
    //       setSeller(accounts[2]);
    //       setGameCompany(accounts[1]);
    //       console.log("seller -- ", seller);
    //       console.log("gameCompany -- ", gameCompany);
    //       // Initialize Web3 and contract here if needed
    //     }
    //   } catch (error) {
    //     if (error.code === 4001) {
    //       console.log("User rejected account access");
    //     } else {
    //       console.error("Error:", error);
    //     }
    //   }
    // } else {
    //   console.error("MetaMask not found");
    // }
  }

  async function sellSkin(event) {
    event.preventDefault(); // Prevent form submission
    connectWallet();
    console.log("connectedAccount -- ", connectedAccount);

    try {
        const url = `http://localhost:5001/${userName}/Sell/${skinId}`;
        const response = await axios.post(url, {
          price: price, // Sending only the price in the request body
          WalletAddress:connectedAccount
        });
        console.log(response.data); // Log response data
      } catch (error) {
        console.error("Error", error.message);
      }
    }

  return (
    <>
      <input
        type='number'
        value={price}
        onChange={(e) => setPrice(e.target.value)} // Update price state when input changes
        placeholder="Enter price"
      />
      <br />
      <button onClick={sellSkin}>Sell Skin</button>
    </>
  );
}

export default SellSkin;
