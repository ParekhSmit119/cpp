#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,e,f;
    cout << "enter the first number " <<endl;
    cin >> a;
    cout << "enter the Second number " <<endl;
    cin >> b;

    c =a+b;
    d =a-b;
    e =a*b;
    f =a/b;

    cout << "this is the sum of a&b =  " <<c <<endl;
    cout << "this is the substaction of a&b =  " <<d <<endl;
    cout << "this is the multiplication of a&b =  " <<e <<endl;
    cout << "this is the division of a&b =  " <<f <<endl;
    return 0;
}