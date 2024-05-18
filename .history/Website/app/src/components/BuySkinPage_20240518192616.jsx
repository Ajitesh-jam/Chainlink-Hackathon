import React ,{useState }from 'react';
import contractABI from "../abi1.json";
import Web3 from "web3";
import axios from 'axios'; // Make sure to import axios for making HTTP requests
import skinImg from "./assets/Woman-skirt.png";

import { useParams } from 'react-router-dom';

//Ek skin buy karney wala dashbord


//let web3 = new Web3(window.ethereum); //Sepolia

let web3 = new Web3(new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545")); //Ganache
//window.ethereum

function BuyDash(props) {
    //console.log("wallet Address - ",props.WalletAddress);
    const contractAddress =
    "0x5070ee85A360899882E907c213cb7147c14466D4";// ganache address
   // "0xb346d01c452a91f19895F5f26Ef845C1DE87b398"; //Sepolia address
  const [connectedAccount, setConnectedAccount] = useState(props.WalletAddress);
  const [gameCompany, setGameCompany] = useState("");
  const id=useState(useParams());


  async function connectWallet() {
    web3.eth.getAccounts().then((accounts) => {
      setConnectedAccount(accounts[0]);

      setGameCompany(accounts[8]);
      console.log("Connected account:", accounts[0]);
      console.log("gameCompany -- ", gameCompany);
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
    //       setSeller(accounts[2]);
    //       setGameCompany(accounts[1]);
    //       console.log("seller -- ", seller);
    //       console.log("gameCompany -- ", gameCompany);
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
  async function BuyConfirmed(id){
    
      console.log("Buy Confirmed");
    
      try {
        // Delete the skin from the skinSeller collection
        await axios.delete(`http://localhost:5001/Suvojit/Buy/${id}`);
    
        // Update the OwnedSkin collection with the purchased skin ID
        await axios.put(`http://localhost:5001/Ajitesh/Skin`, {
          skinIds: [id] // Wrap id in an array if it's not already an array
        });
    
        console.log("Skin deleted and OwnedSkin updated successfully.");
      } catch (error) {
        console.error("Error:", error.message);
      }

  }
 
  async function BuySkin(event, id) {
    event.preventDefault(); // Prevent form submission

    try {
      const url = `http://localhost:5001/Suvojit/Buy/${id}`;
      const response = await axios.get(url);
      console.log(response.data);
      const contract = new web3.eth.Contract(contractABI, contractAddress);
      const amountInWei = web3.utils.toWei(response.data.price.toString(), "ether");// Amount to send in wei
      const gasPrice = await web3.eth.getGasPrice(); // Get current gas price
      console.log("Connected Account: ", connectedAccount);
      console.log("Amount in Wei: ", amountInWei);
      console.log("Seller - ", response.data.WalletAddress);
      console.log("Game Company - ", gameCompany);
      console.log("Contract Start- ");
      try {
        const gasLimit = await contract.methods
          .Buy(response.data.WalletAddress, gameCompany)
          .estimateGas({
            from: connectedAccount,
            value: amountInWei,
          });

        await contract.methods
          .Buy(response.data.WalletAddress, gameCompany)
          .send({
            from: connectedAccount,
            value: amountInWei,
            gas: gasLimit,
            gasPrice: gasPrice,
          })
          .on("receipt", (receipt) => {
            console.log("Transaction receipt:", receipt);
            console.log("Transaction hash:", receipt.transactionHash);
          })
          .on("error", (error) => {
            console.error("Transaction error:", error);
          });
      } catch (e) {
        console.error("blockchain error- ", e);
      }
    } catch (error) {
      console.error("Buy Error", error.message);
    } 
    BuyConfirmed();
}
  
 
  return (<>
  
      <div className="App">
        <button onClick={connectWallet}>Connect Wallet</button>
        {connectedAccount && (
          <div>
            <p>Connected: {shortAddress(connectedAccount)}</p>
            {/* Add more UI elements or actions here */}
          </div>
        )}
        </div>

        <img src={skinImg} alt="Skin" />

        
    

      <br></br>
      <button onClick={(event) => BuySkin(event, id)}>Buy Skin</button>
      <button onClick={BuyConfirmed}>Buy Confirmed</button>
      <br></br>

  </>
  );
}

export default BuyDash;