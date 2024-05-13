import React, { useState } from "react";
import "./App.css";
import contractABI from "./abi.json";

import Web3 from "web3";
let web3 = new Web3(window.ethereum);

function App() {
  const contractAddress = "0x7Ca90f48cbDCC2Bf2553E1A27c3f68A06A1c0C2C";
  const [connectedAccount, setConnectedAccount] = useState("");

  async function connectWallet() {
    if (window.ethereum) {
      try {
        // Request access to MetaMask accounts
        const accounts = await window.ethereum.request({
          method: "eth_requestAccounts",
        });
        if (accounts.length > 0) {
          setConnectedAccount(accounts[0]);
          console.log("Connected account:", accounts[0]);
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

  return (
    <div className="App">
      <button onClick={connectWallet}>Connect Wallet</button>
      {connectedAccount && (
        <div>
          <p>Connected: {shortAddress(connectedAccount)}</p>
          {/* Add more UI elements or actions here */}
        </div>
      )}
    </div>
  );
}

export default App;