import React, { useState ,useEffect} from 'react';
import Web3 from 'web3';
import skinImg from "./assets/Woman-skirt.png";
import { useParams } from 'react-router-dom';
import Button from 'react-bootstrap/Button';
import Card from 'react-bootstrap/Card';
import skinMarketABI from './abis/skinMarket.json';



function CardComponent({ username, price,buy}) {
  return (
    <Card style={{ width: '18rem' }}>
      <Card.Img variant="top" src={skinImg} />
      <Card.Body>
        <Card.Title>{username}</Card.Title>
        <Card.Text>Price: {price} ETH</Card.Text>
        <Button variant="primary" onClick={buy}>BUY</Button>
      </Card.Body>
    </Card>
  );
}

function BuySkinPage() {
  let connectedAccount;
  const [skins, setSkins] = useState([]);//yeh pura card component hoga .....maaney isme sarey react waale cards store hogey
  let sellers; //sellers of particular skin ka array
  let seller;//ek seller
  const skinMarketAdd = "0x0DedDe527e2B24a6c2B3bF5F3E7488517E37F3AD"; // Ganache address
  const web3 = new Web3(new Web3.providers.HttpProvider("http://127.0.0.1:7545")); // Ganache
  const { userName,skinId } = useParams();

  useEffect(() => {
    ShowAllSkinOfId();
  }, [1]); // Empty dependency array makes this effect run only once, on component mount


  async function connectWallet() {//function jissey wallet connect hojayega
    try {
      const accounts = await web3.eth.getAccounts();
      connectedAccount=accounts[0];
      console.log("Connected account:", accounts[0]);
    } catch (error) {
      console.error("Error connecting wallet:", error);
    }
  }

  async function ShowAllSkinOfId() {
    const skinMarket = new web3.eth.Contract(skinMarketABI, skinMarketAdd);
    try {
      sellers = await skinMarket.methods.getSellers(skinId).call();
      console.log(sellers);

        //sellers will be kinda this type - 
        //         [{…}]
        // 0
        // : 
        // {0: 0n, 1: 'Devansh', 2: '0xeE3bbfDC858F71d0Ab57f17F3585db1b4DA68574', 3: 100000n, 4: '0x511d5A0649630213E26c071b861c5cB1A8609346', __length__: 5, id: 0n, userName: 'Devansh', walletAddress: '0xeE3bbfDC858F71d0Ab57f17F3585db1b4DA68574', price: 100000n, …}
        // length
        // : 
        // 1
        // [[Prototype]]
        // : 
        // Array(0)

        //sellers is array

      if (sellers.length === 0) {
        console.log("No sellers available for this skin ID");
      } else {
        const sellerCards = sellers.map((seller, index) => (
          <CardComponent 
            key={index} 
            username={seller.userName}  // Username is at index 1 in the seller array
            price={web3.utils.fromWei(seller.price.toString(), 'ether')} // Price is at index 3 in the seller array
            buy={() => BuySkin(index)} // Pass the seller object to BuySkin function
          />
        ));
        setSkins(sellerCards);

      }
    } catch (error) {
      console.error("Error fetching sellers:", error);
    }
  }

  function setSeller(id){
    seller=sellers[id];
  }

  async function BuySkin(id) {
    // Buy the skin
    // Use the skinMarket contract to buy the skin
    // Use the skinOwner contract to transfer the skin to the buyer
    console.log("Buy skin");
    setSeller(id);
    const skinMarket = new web3.eth.Contract(skinMarketABI, skinMarketAdd);
    await connectWallet(); 
    const amountInWei = seller[3];
    const gasPrice = await web3.eth.getGasPrice();
    const gasLimit = await skinMarket.methods
      .buySkin(seller[1],skinId,seller[0])
      .estimateGas({
        from: connectedAccount,
        value: amountInWei,
      });
    console.log("your username: ",userName,"Amount in wei : ",amountInWei,"\nConnect Account :",connectedAccount,"\nGasPrice :",gasPrice,"\nseller:",seller[2]);  
    // Display a confirmation dialog
    const confirmed = window.confirm(`Are you sure you want to buy the skin from ${seller[1]}  for   ${seller[3]} wei?`);
      
      if (!confirmed) {
        return; // Exit the function if not confirmed
      }

    try {
      await skinMarket.methods
           .buySkin(userName,skinId,id)
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
      console.log("Buying skin from:", seller);
    } catch (error) {
      console.error("Error buying skin:", error);
    }
  }

  function shortAddress(address, startLength = 6, endLength = 4) {
    return `${address.slice(0, startLength)}...${address.slice(-endLength)}`;
  }

  return (
    <>
      <div className="App">
        <button onClick={connectWallet}>Connect Wallet</button>
        {connectedAccount && (
          <div>
            <p>Connected: {shortAddress(connectedAccount)}</p>
          </div>
        )}
      </div>

      <div>
        {skins}
      </div>
    </>
  );
}

export default BuySkinPage;

