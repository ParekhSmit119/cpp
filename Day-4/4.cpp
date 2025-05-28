#include<iostream>
using namespace std;

int main()
{
    int box1=10,box2=20,box3;
    
    cout <<"box1=" <<box1 <<endl;
    cout <<"box2=" <<box2 <<endl;


    cout <<"----------------------" << endl;

    box3=box1;
    box1=box2;
    box2=box3;

    cout <<"box1 =" << box1 << endl;
    cout <<"box2 =" <<box2<<endl;
}