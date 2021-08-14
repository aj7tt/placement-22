
#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int k = 5;
    int x;

    cin>> x;

    if (x > n || x > k || x < 0) {
        cout<< " Invalid return\n";
        cout<< "NUMBER OF CANDIES LEFT : "<< n-x;
    }
    else {
        cout<< "NUMBER OF CANDIES SOLD : " << x<<endl;
        cout<< "NUMBER OF CANDIES LEFT : "<< n-x;
    }

    return 0;
}