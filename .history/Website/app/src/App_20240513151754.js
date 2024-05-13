import React, { useState } from "react";
import "./App.css";
import contractABI from "./abi.json";

import Web3 from "web3";
let web3 = new Web3(window.ethereum);

//new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545"));
//window.ethereum

function App() {
  const contractAddress = "0xb346d01c452a91f19895F5f26Ef845C1DE87b398"; //Sepolia address
  // "0xBc0139fA3BE2821633B05c7e4415fCb38715D250";// ganache address
  const [connectedAccount, setConnectedAccount] = useState("");
  const [seller, setSeller] = useState("");
  const [gameCompany, setGameCompany] = useState("");

  async function connectWallet() {
    web3.eth.getAccounts().then((accounts) => {
      setConnectedAccount(accounts[0]);
      console.log("Connected account:", accounts[0]);
      setSeller(accounts[3]);
      setGameCompany(accounts[1]);
    });

    if (window.ethereum) {
      try {
        // Request access to MetaMask accounts
        const accounts = await window.ethereum.request({
          method: "eth_requestAccounts",
        });
        if (accounts.length > 0) {
          setConnectedAccount(accounts[0]);
          console.log("Connected account:", accounts[0]);
          setSeller(accounts[3]);
          setGameCompany(accounts[1]);
          console.log("seller ", seller);
          console.log("gameCompany ", gameCompany);
          // Initialize Web3 and contract here if needed
        }
      } catch (error) {
        if (error.code === 4001) {
          console.log("User rejected account access");
        } else {
          console.error("Error:", error);
        }
      }
    } else {
      console.error("MetaMask not found");
    }
  }

  function shortAddress(address, startLength = 6, endLength = 4) {
    return `${address.slice(0, startLength)}...${address.slice(-endLength)}`;
  }
  async function Buy() {
    const contract = await new web3.eth.Contract(contractABI, contractAddress);
    const amountInWei = web3.utils.toWei("100000", "wei"); //web3.utils.toWei("10", "ether"); // Amount to send in wei // Amount to send in wei
    console.log("theek3");
    const gasPrice = await web3.eth.getGasPrice(); // Get current gas price
    console.log("theek4");
    console.log("Account : ", connectedAccount);
    await contract.methods
      .Buy(seller, gameCompany)
      .send({
        from: connectedAccount,
        value: amountInWei,
        gasPrice: gasPrice,
      })
      .on("receipt", (receipt) => {
        console.log("Transaction receipt:", receipt);
        console.log("Transaction hash:", receipt.transactionHash);
      })
      .on("error", (error) => {
        console.error("Transaction error:", error);
      });
  }

  async function getContractAddresses() {
    const contract = new web3.eth.Contract(contractABI, contractAddress);

    try {
      const owner = await contract.methods.owner().call();
      const seller = await contract.methods.seller().call();
      const gameCompany = await contract.methods.gameCompany().call();

      console.log("Owner:", owner);
      console.log("Seller:", seller);
      console.log("Game Company:", gameCompany);
    } catch (error) {
      console.error("Error:", error);
    }
  }

  return (
    <>
      <div className="App">
        <button onClick={connectWallet}>Connect Wallet</button>
        {connectedAccount && (
          <div>
            <p>Connected: {shortAddress(connectedAccount)}</p>
            {/* Add more UI elements or actions here */}
          </div>
        )}
      </div>
      <br></br>
      <button onClick={getContractAddresses}>Get Details</button>

      <br></br>
      <button onClick={Buy}>Buy</button>
    </>
  );
}

export default App;