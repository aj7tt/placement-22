/* Precision of floating point numbers in C++ 
(floor(), ceil(), trunc(), round() and setprecision()) */

#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main ()
{

	float  a= 5.256 , b= 11.25; 
	 
	float sum = a+b ;
	double diff = a-b;
	double div = b/a;
	 
	 cout << sum <<"\n"<< diff << "\n" << div <<"\n";
	 cout << fixed <<setprecision(2)<< sum;
	
	 
	return 0;
	
	
}

/*
#Floor rounds off the given value to the closest integer which is less than the given value.

# Ceil rounds off the given value to the closest integer which is more than the given value.

# Trunc rounds removes digits after decimal point.

#Rounds given number to the closest integer. 

# Setprecision when used along with ‘fixed’ provides precision to floating point numbers correct to decimal numbers mentioned in the brackets of the setprecison.


*/
