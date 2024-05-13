import logo from './logo.svg';
import './App.css';
import Footer from './Footer.js';
import Header from './Header.js';
import Main from './Main.js';
import TopNav from './TopNav.js';
import Buy from './Buy.js';


function App(){
  return (
    <div className='App'>
    
    <Header />
      <TopNav />
      <Main />
      <Buy/>
      <Footer />
  
    </div>
  )

}