#include<iostream>
using namespace std;

int main(){
	int a;
	string name;
	cout<<"enter you name plz\n";
	cin>>name;
	cout<<" enter \n"<<" 1. cricket\a 2.football" << ":\n";
	cin>>a;
	switch(a)
	{
		case 1 :cout<<"wanna play cricket\a"<<name;
		        break;
		case 2 : cout<<"wanna play football";
		         break;		   
		default : cout<<" which game u wanna play\t"<<name;
		          
	}
}

