*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

:root{
    --cor1: white;
    --cor-oficial: #335EEA;
    --cor2: #8897B3;
    --cor3: #586478f0;
    --cor4: #E1E7FC;
    --bg-color: linear-gradient(to top, #e8ecfe 90%, white);
    --bg-container: var(--cor1);
    --text-color1: #586478f0;
    --text-color2: black;
    --button: #6666fc6d;
    --button-img: url(./assets/sun.svg);
    
    --font-padrao: Arial, Helvetica, sans-serif;
}

.light{
    --bg-color: linear-gradient(to top, #121214bf, #121214);
    --bg-container: #2a2a34;
    --text-color1: #e1e7fcca;
    --text-color2: #e1e7fc;
    --cor-oficial: #4b75ff;
    --button: rgba(255, 255, 255, 0.801);
    --button-img: url(./assets/moon-stars.svg);
}



a:hover{
    color: white;
}

body{
    background: var(--bg-color);
    font-family: var(--font-padrao);
    background-attachment: fixed;
    
}

#container{
    background-color: var(--bg-container);
    border-radius: 20px;
    margin: auto;
    margin-top: 5.6em; 
    width: 80.1em;
    height: 724px;  
}
header{
    margin: 0 7.6em;
}

.logo{
    color: var(--cor-oficial);
    padding-top: 26px;
    font-size: 1.6em;
}

#button-change{
    margin: 0 50px 0 170px;
}

#button-change button{
    background: var(--button-img) var(--button) no-repeat center;
    width: 50px;
    height: 25px;
    border: 0;
    border-radius: 4px;
}



#logo, #menu, #button-change{
    display: inline-block;
}

#menu{
    margin-left: 250px;
}

#menu li {
    list-style: none;
    display: inline;
   text-decoration: none;
   margin-left: 30px;
   
   transition: background 0.2s;
}

#menu li a{
    padding: 10px;
    border-radius: 8px;
    color: var(--text-color1);
    color: var(--text-color1);
    text-decoration: none;
}

#menu li a:hover{
    background-color: #5b6895a9;  
    color: var(--cor1);
}

/* ----------------------------------------------*/

section{ 
    padding: 10px;
    margin-left: 120px;
    width: 400px;
    margin-top: 212px;
    margin-bottom: 185px;
}

#title{
    font-weight: normal;
    font-size: 2.7em;
    color: var(--text-color2);
    color: var(--text-color2);
}

.semi-logo{
    color: var(--cor-oficial);
}

section p{
    margin-top: 35px;
    color: var(--text-color1);
    font-size: 18px;
    line-height: 25px;
    color: var(--text-color1);
}

.button1{
    width: 180px;
    height: 54px;
    border-radius: 8px;
    margin-top: 45px;
    background-color: var(--cor-oficial);
    border: 0;
    color: var(--cor1);
    transition: background 0.2s;
    font-weight: bold;
}

button:hover{
    background-color: #0a43fe;
}

.button2{
    background-color: var(--cor4);
    width: 150px;
    height: 54px;
    margin-left: 18px;
    font-weight: bold;
    border: 0;
    border-radius: 8px;
    color: #374E9C;
    transition: background 0.2s;
}

.button2:hover{
    background-color: #5974d7b6;
    color: var(--cor1);
}

section, #imagem{
    display: inline-block;
}

#imagem{
    text-align: right;
    margin-left: 230px;
}

#imagem img{
    width: 470px;
}