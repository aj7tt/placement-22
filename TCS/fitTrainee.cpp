
#include <iostream>
using namespace std;
int main()  
{
	int trainee[3][3];
	int average[3] = {0};
	int i, j, max=0;

    //take input from user and check validation 
	for(i=0; i<3; i++)
	{
        	for(j=0; j<3; j++) { 
                cin>>trainee[i][j];
                	if(trainee[i][j]<1 || trainee[i][j]>100)
                	{
                    	trainee[i][j] = 0;
            	}
        	}
	}

    //calculate average 
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			average[i] = average[i] + trainee[j][i];
		}
		average[i] = average[i] / 3;
	}

    //cal max 
	for(i=0; i<3; i++) 
	{ 
		if(average[i]>max)
        	{
				max = average[i];
        	}
	}

    //display result 
	for(i=0; i<3; i++)
	{
		if(average[i]==max)
		{
				cout<<"Trainee Number : "<<i+1<<"\n";
		}
		if(average[i]<70)
		{
				cout<<"Trainee is Unfit\n";
		}
	}
	
	return 0;
} 
