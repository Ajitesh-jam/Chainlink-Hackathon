import React, { useState } from "react";
import "./Sidebar.css";

const Sidebar = () => {
  const [sidebarOpen, setSidebarOpen] = useState(false);


    setSidebarOpen(true);
  

  return (
    <div className="sidebar">
      {!sidebarOpen ? (
        <div className="sidebar_icon" >
          <i className="fas fa-bars"></i>
        </div>
      ) : (
        <>
          <div className="sidebar_icon" >
            <i className="fas fa-times"></i>
          </div>
          <div className="sidebar_items">
            <div className="sidebar_item">
              <i className="fas fa-home"></i>
              <p>Home</p>
            </div>
            <div className="sidebar_item">
              <i className="fas fa-user"></i>
              <p>About</p>
            </div>
            <div className="sidebar_item">
              <i className="fas fa-envelope"></i>
              <p>Contact</p>
            </div>
          </div>
        </>
      )}
    </div>
  );
};

export default Sidebar;