#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "enter the value of a =";
    cin >> a;
    cout << "enter the value of b =";
    cin >> b;
    cout << "enter the value of c =";
    cin >> c;

    if (a < b)
    {
        cout<< " a is min value";
    }
    else if (b < c )
    {
        cout <<"b is min value";
    }
    else{
        cout <<" c is min value" ;
    }

    
}