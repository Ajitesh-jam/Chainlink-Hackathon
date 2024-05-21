import React, { useState } from 'react';
import axios from 'axios'; // Make sure to import axios for making HTTP requests

function SellSkin() {

  // You need to use window.location or props to get the URL parameters
  const urlParams = new URLSearchParams(window.location.search);
  const skinId = urlParams.get('id'); // Assuming you're passing id as a query parameter
  const userName = urlParams.get('userName'); // Assuming you're passing userName as a query parameter

  const [price, setPrice] = useState(0);

  async function sellSkin(event) {
    event.preventDefault(); // Prevent form submission

    try {
        const url = `http://localhost:5001/${userName}/${skinId}`;
        const response = await axios.post(url, {
          price: price, // Sending only the price in the request body
          WalletAddress:
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
