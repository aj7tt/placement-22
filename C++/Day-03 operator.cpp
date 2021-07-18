/* C++ program to find largest among two numbers using ternary operator
C++ Short Hand If Else
The conditional operator ?: is called ternary operator
Nested Ternary Operators

 

#include<iostream>
using namespace std;

int main(){

	int a , b ;
	cout<<"Enter the two nos to compare\n";
	cin>>a >>b;	
	int  bigger;
	bigger = ((a>b)? a:b);
	cout<<"the bigger nos is: "<<bigger;
	return 0;
}


*/

// C++ has a bool data type, which can take the values true (1) or false (0).

#include<iostream>
using namespace std;

int main()
{
	int a, b ;
	cin>>a>>b;
	bool bigger = ((a>b)? :b);
	cout<<bigger;
}
