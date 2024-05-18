import React, { useState } from "react";
import "./App.css";
import contractABI from "./abi1.json";
import { BrowserRouter, Routes, Route } from "react-router-dom";
import Web3 from "web3";
import BuyDash from "./components/BuyDashboard";
import SellDash from "./components/SellDashBoard";

function App() {
  return (
    <>
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
