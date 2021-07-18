/******************************************************************************
 
 Program :: javascript programming  
 Programmer :: Ajit 
 Date ::- 15-04-2021

*******************************************************************************/
 


/* ####### Data types in js ##############*/

/*^^^^^^^^^^^^^^^^ 
 primitive Datatype
1. string 
2. number 
3. biginit 
4. boolean 
5. undefined 
6. null 
^^^^^^^^^^^^^^^*/

// 1. string 
var str = " Ajit"; // double quotes used 
var str2 = "kumar"; //single quotes can be used too 

console.log(str, str2); // print out in console 


//2. Number 
var x = 2;
var y = 7.5; // with decimal 


//3.Biginit 
 var biginter = 123456975624852086963741;

 //4. boolean 
 var a = 1;
 var b = 3;
console.log(a==b ) // return false 
console.log(a !=b) // return true 

//5. undefined 
var p; // value of x is undefined
var q = undefined; // we can also set the value of a variable as undefined
console.log(p, q);

//6. Null 
var z = null;
console.log(z);

// typeof of datatype 
console.log(typeof "ajit");


/*^^^^^^^^^^^^^^^^ 
 Non- primitive Datatype ( collection of data)
 1. object 
^^^^^^^^^^^^^^^*/

// collection of data in key value pairs 
 var obj1 = {
     name: "aj7t",
     rollno: 7,
     
 }

 // collection using array 
 var array1 = [3, 'ajit', false , 50.5];
 console.log(obj1, array1)

/****************** hoisting in js  ********************/

/* In this this method the declaratio of variables or functions are moved up 
even if we declare the var or function after assigning its value and will output correctly */

hoistedvar = 7;
console.log(hoistedvar);
var hoistedvar;

hoistedFunction();  // Outputs " Hello world! " even when the function is declared after calling

function hoistedFunction(){ 
  console.log(" Hello ajit! ");
}

var M;
console.log(M); // Outputs "undefined" since the initialization of "M" is not hoisted
M = 23;

// Hoisting takes place in the local scope as well
function doSomething(){
    a = 33;
    console.log(a);
    var a;
  }


  /******
   Difference between “ == “ and “ === “ operators.
    Both are comparison operators. The difference between both the operators is that,“==” is used to 
    compare values whereas, “ === “ is used to compare both value and types.
   */   

 var n = 2; // int 
 var m = "2"; // string 

console.log( n==m ); // return true ciz having same value 
console.log( n===m ); // return false cuz typeof() is diff 

 