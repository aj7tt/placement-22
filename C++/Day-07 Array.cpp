/******************************************************************************
💡 Program ::  C++ Array
✍Contributed by :: AJit 
 Application :: Array stores data elements of the same data type.
                Arrays can be used for CPU scheduling.
                Used to Implement other data structures like Stacks, Queues, Heaps, Hash tables, etc. 

******************************************************************************/
 
/* Array 
 It is collection of similiar data types stored at continoius memory locations
 It stores both primitive and deveried Data types.
 The Elements can be accessed through indices of array.

*/


// step-01  Array declaration 

int a [3];
int a [3] = {};
int *a ;

// step-02 Array Initializing 

int a[] = { 1,2,3,4,5,6,7} ;
int a[0] = 0;

// Find out the address of elemrnts of array 
 cout<< &a[1];


//  step-03 transverse the array 
for( int i =0; i<= 10; i++)
{
    cout<<a[i]<<" ";
}

/*
  2D- Array
  
*/

// initalise and declare 

int array[2][3] = {2,3,4,5,6,7};
// 2 = no of rows 
________________________ 

//manupulation of array 

// sorting 

 