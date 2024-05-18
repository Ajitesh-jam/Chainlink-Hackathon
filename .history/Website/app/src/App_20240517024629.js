import React from "react";
import "./App.css";

import { BrowserRouter, Routes, Route } from "react-router-dom";

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
