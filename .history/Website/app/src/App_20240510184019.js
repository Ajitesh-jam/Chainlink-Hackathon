import "./App.css";

import contractABI from "./abi.json";
let Web3 = require("web3");
function App() {
  const contractAddress = " 0x7Ca90f48cbDCC2Bf2553E1A27c3f68A06A1c0C2C";
  let web3 = new Web3(window.ethereum);
  let contract = new web3.eth.Contract(contractABI, contractAddress);
  async function connectWallet() {
    if (window.ethereum) {
      const accounts = await window.ethereum
        .request({ method: "eth_requestAccounts" })
        .catch((err) => {
          if (err.code === 4001) {
            console.log("Please connect to MetaMask.");
          } else {
            console.error(err);
          }
        });
      setConnected(accounts[0]);
      if (accounts[0]) {
        console.log("We have an account");
      }
    } else {
      console.error("No web3 provider detected");
      document.getElementById("connectMessage").innerText =
        "No web3 provider detected. Please install MetaMask.";
    }
  }
  function shortAddress(address, startLength = 6, endLength = 4) {
    return `${address.slice(0, startLength)}...${address.slice(-endLength)}`;
  }
  function setConnected(address) {
    document.getElementById("userAddress").innerText =
      "Connected: " + shortAddress(address);
    document.getElementById("connectMessage").style.display = "none";
    document.getElementById("tweetForm").style.display = "block";
    console.log(address);
  }
  return (
    <>
      <button onClick={connectWallet}>Connect Wallet</button>
    </>
  );
}

export default App;
