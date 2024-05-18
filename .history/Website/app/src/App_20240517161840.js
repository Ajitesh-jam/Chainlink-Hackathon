import React from "react";
import "./App.css";

import { BrowserRouter, Routes, Route } from "react-router-dom";

import BuyDash from "./components/BuyDashboard";
import SellDash from "./components/SellDashBoard";
import BuySkinPage from "./components/BuySkinPage";
import SellSkin from "./components/SellSkinPage";

function App() {
  return (
    <>
      <BrowserRouter>
        <Routes>
          {/* //CompanyList */}

          <Route path="/Ajitesh/Sell/:id" element={<SellDash />} />
          <Route path="/Ajitesh/DashBoard" element={<BuyDash />} />
          <Route path="/Ajitesh/Buy/:id" element={<BuySkinPage />} />
          <Route path="/:userName/Sell/:id" element={<SellSkin />} />
        </Routes>
      </BrowserRouter>
    </>
  );
}

export default App;
