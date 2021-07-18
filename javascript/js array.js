/******************************************************************************
 
 Program :: js array 
 Programmer :: Ajit 
 Date ::- 15-04-2021

*******************************************************************************/
 
//Array is a group of numberss chucked together in pile of boxes 

//Declare an array 
//assign the value to array 
var x = ['js', 'c', 'c#', 'py'];
 
//print out py by indedx 
var x = x[3];
console.log(x);

// change the name of c to c++
var x = x[1]= 'c++';

//number of elements in array 
var x = x.length;
console.log(x);  //3 

/**********   Array Method  ***************/

// remove the last elements
var x = x.pop ;

// remove element through splice() method 
x.splice(1, 2);

// add elements to array 
x.push("java");

//sort the array 
x.sort();

