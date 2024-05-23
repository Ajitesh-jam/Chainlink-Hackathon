import React, { useState } from 'react';
import axios from 'axios'; // Make sure to import axios for making HTTP requests
import Web3 from "web3";
import { useParams } from 'react-router-dom';

//let web3 = new Web3(window.ethereum); //Sepolia

let web3 = new Web3(new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545")); //Ganache
function SellSkin(props) {

  const { userName, skinId } = useParams();

  const [price, setPrice] = useState(0);
  let connectedAccount;

  async function connectWallet() {
    return web3.eth.getAccounts().then((accounts) => {


      return accounts[0];
    });
  }



  async function sellSkin(event) {
    event.preventDefault(); // Prevent form submission
    connectedAccount=await connectWallet();
    console.log("connectedAccount -- ",connectedAccount);

    //show the current avg price 

    try {
        const url = `http://localhost:5001/${userName}/Sell/${skinId}`;
        const response = await axios.post(url, {
          price: price, // Sending only the price in the request body
          WalletAddress:connectedAccount
        });

        console.log(response.data); // Log response data

        //delete skin from user;
        const url1 = `http://localhost:5001/${userName}/Skin/${skinId}`;
        const response1 = await axios.put(url1);
        console.log(response1.data); // Log response data

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