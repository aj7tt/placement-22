// Learn concept of LOOPING


//0. Know the differences between loops 



/*1. running total in the loop

#include<iostream>
using namespace std;
int main ()
{
	int total = 0; // declare and initiliaze to 0
	int n;   // declare a intergers to take inp

	for(int i=5; i>0; i--)
	{
		cin>> n;  // you are invited to enter the nos
		total += n;  //runing tot is kept

	}
	cout << total;  //answer as output
}
*/


/* FIBONACCI SERIES
// 0, 1,1, 2, 3, 5,8................

#include <iostream>
using namespace std;
int main ()
{
	int a=0;
	int b=1;
	for(int i=1;i<100; i++){
		cout<< a<<"\n"<<b<<endl;  // final output 
		a = a+b;  
		b=a+b;

	}

}


//2.DO-WHILE loop
#include <iostream>
using namespace std;
int main()
{
	int i=0;
	cout<< "**********************\n\n"<< "Hello Ajit here\n\n\n" <<"********************\n";

	do{                                     // do this work
		i++;                                 //incremement
		cout<<"i will code daily"<<"\n";
		cout << "---------------"<<"\n";
	}

	while( i!=100);                     //condition
}




//3.WHILE-LOOP

#include <iostream>
using namespace std;

int main () {
	//taking input from 
 

}


//4.nested loop

 #include <iostream>
 using namespace std;

 int main (){
 	for (int i=3 ; i<5; i++)  // remains constant till loop j exceutes for i=3
 	{

 		for (int j=1; j<=10; j++){
 			cout << i << " * " << j << " = " << (i * j) << "\n";
		 }

		cout << "-----------\n";  // end of loop i

	 }

	 return 0;
 }

*/
