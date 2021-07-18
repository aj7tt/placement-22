/******************************************************************************
 
 Program :: js strings  
 Programmer :: Ajit 
 Date ::- 15-04-2021

*******************************************************************************/
 
// declasre string and assign the value 
var txt = "hello brother";
var txt2 = " how are you ?";
console.log("this is the function to call the length of strings");

// find the length of string 
var x = txt.length;
console.log(x);

// concatenation of string 
console.log( txt + txt2);

// find the position of char in string 
var pos = txt.indexOf('o');
console.log(pos);


// slice the word from sentence by index 
 var word = txt2.slice(4, 8);
 console.log(word); //are will be printed 

//replace the word 
 txt = txt.replace("brother", "Dost");
 console.log(txt);

// convert the valie into uppercase 
var uprCase = txt.toUpperCase();
console.log(uprCase);

// similiary conver it to lowercase 
// txt.toLowercase();

// 