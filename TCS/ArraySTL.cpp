

#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

//----------------------
#include<stack>
#include<queue>

using namespace std;

int main() {

    // initialise array
    int basicArray [9]= {1,2,3,4,5,6};

    // initialise array using stl
    array<int, 4> a = {1,2,3,4};

    //playing with array 
    int size = a.size();
    cout << size << "\nfirst element is : "<< a.front()<<"\nLast element is : "<< a.back()<<endl;

    cout<< "\n\nvector operation\n\n"; 
    //initialise vector

    vector<int> v;

    // vector<int> v(5,1);


    cout<< "size available : " <<v.capacity()<<endl;

    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(0);

    cout<< "capacity-->"<< v.capacity()<<"\n Size -->"<< v.size();
    cout<< "first element --> "<< v.front()<<"\nLast element-->"<< v.back();




    cout<< "\n\nDeQueue operation\n\n"; 

    deque<int> d;

    d.push_back(5);
    d.push_back(8);
    d.push_back(6);


    d.pop_front();

    cout<<d.empty()<<endl;
    cout<< "element at index  :"<< d.at(1)<<endl;


    cout<< "\n\nList operation\n\n";

    list<int> l;

    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

     //erase the element
    l.erase(l.begin());

    //print all the elements
    for(int i:l){
        cout<<i<<" ";
    }


    cout<<l.size();

    cout<< "\n\nStack STL containers\n\n"<<endl;

    stack<string> s;

    s.push("ajit");
    s.push("kumar");
    s.push("yadav");



    cout<<"Top elelment: "<<s.top()<<endl;
    s.pop();
    cout<<"Top elelment after pop : "<<s.top() <<endl;

    cout<< "size of stack :"<< s.size()<< "\n\nIs the stack empty :"<< s.empty()<<endl;


    cout<< "\n\n Queue STL containers\n\n"<<endl;

    queue<string> q;

    q.push("ajit");
    q.push("kr");
    q.push("ydv");



    














}