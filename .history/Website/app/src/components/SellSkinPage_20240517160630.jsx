import React ,{useState}from 'react';



function SellSkin() {
    
    
  const userName="Ajitesh";
  //url.param.userName
    const skinId=url.param.id;
    const [price,setPrice]=useState(0);
  
  async function SellSkin(event,id){
        event.preventDefault(); // Prevent form submission
    
        try {
            const url="http://localhost:5000/" +userName+"/"+id;
          const response = await axios.post(url, {
            userName: userName,
            skinId: skinId,
            price: price,
          });
          console.log(response.data); // Log response data
        } catch (error) {
          console.error("Error", error.message);
        }

  }
 
  return (<>
      
    
        <input type='number' >Price</input>
        setprice(input)
      <br></br>
      <button onClick={SellSkin}>SeLL Skin</button>
      <br></br>

  </>
  );
}

export default SellSkin;