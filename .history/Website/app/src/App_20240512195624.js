import React, { useState } from "react";
import "./App.css";
import contractABI from "./abi1.json";

import Web3 from "web3";
let web3 = new Web3();
//window.ethereum

function App() {
  const contractAddress =
    //"0x7Ca90f48cbDCC2Bf2553E1A27c3f68A06A1c0C2C";
    "0xf90Ebfd33851705F67B485215941318D64830BA4";
  const [connectedAccount, setConnectedAccount] = useState("");

  async function connectWallet() {
    web3.eth.getAccounts().then((accounts) => {
      setConnectedAccount(accounts[0]);
      console.log("Connected account:", accounts[0]);
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

  function shortAddress(address, startLength = 6, endLength = 4) {
    return `${address.slice(0, startLength)}...${address.slice(-endLength)}`;
  }
  async function Buy() {
    const contract = await new web3.eth.Contract(contractABI, contractAddress);

    // const amountInWei = web3.utils.toWei("100"); // Amount to send in wei
    console.log("theek3");
    const gasPrice = await web3.eth.getGasPrice(); // Get current gas price
    console.log("theek4");
    console.log("Account : ", connectedAccount);

    // Send transaction to the contract's address with ether attached
    await contract.methods
      .owner()
      .send({
        from: connectedAccount,
        value: "100000000000",
        gasPrice: gasPrice,
        data: 0,
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
