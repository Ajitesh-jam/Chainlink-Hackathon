import React, { useState } from "react";
import "./App.css";
import contractABI from "./abi1.json";
import { BrowserRouter, Routes, Route } from "react-router-dom";
import Web3 from "web3";
import BuyDash from "./components/BuyDashboard";
import SellDash from "./components/SellDashBoard";
//let web3 = new Web3(window.ethereum); //Sepolia

let web3 = new Web3(new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545")); //Ganache
//window.ethereum

function App() {
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
      <br></br>
      <button onClick={UnityTriggerToEnableSkin}>UnityTrigger</button>

      <BrowserRouter>
        <Routes>
          {/* //CompanyList */}

          <Route path="/Ajitesh/:id" element={<SellDash />} />
          <Route path="/Ajitesh/DashBoard" element={<BuyDash />} />
        </Routes>
      </BrowserRouter>
    </>
  );
}

export default App;
