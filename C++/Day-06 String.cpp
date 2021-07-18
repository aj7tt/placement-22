/******************************************************************************
💡 Program ::  C++ strings 
✍Contributed by :: AJit  

*******************************************************************************/
 

// Fun with strings 

#include <iostream>
using namespace std;

int main()
{
	int i;
	//declare a string 
	//char a[10];  // char--> types of data type ; a --> name of the string ; [] --> it's an array ; 5 --> memory to store 5 char 
	
	//initialzing a string 
	char a[5]= {"Aj7t"};  // string is used inside {} && ":::"
	
	//loop from beginning to end 
	for(i=0;i<=5;i++)
	{
		cout<<a[i];
	}
}




/* string length 
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i;
	char a[10];
	cout<<"Enter the strings\n:";
	cin>>a;
	//length of string is
	int l= strlen(a);
	cout<<"the length of string is: "<<l<<endl;
	//print out the string 
	for(int i=0; i<=l; i++)
	{
		cout<<a[i];
	}
		
}

 

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	//initialze the string 
	char a[50];
	cout<<"Enter the strings:\n";
	cin>>a;
	//length of string is
	int l= strlen(a);
	
	for(int i=0; i<=l; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout<<a[j];
			
		}
		cout<<endl;	
	}
}


 

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	//initialze the string 
	char a[50];
	cout<<"Enter the strings:\n";
	cin>>a;
	//length of string is
	int l= strlen(a);
	
	for(int i=l; i>=0; i--)
	{
		for(int j=i; j<=l; j++)
		{
			cout<<a[j];
			
		}
		cout<<endl;	
	}
}


*/

// strcpy (destination , source )

// strcat ()

// strlwr ()

//strupr ()



#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a[10];
	cin>> a;
	strupr(a);
	cout<<a;
}





