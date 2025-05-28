#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout << "enter the value of a";
    cin >> a;
    cout << "enter the value of b";
    cin >> b;
    cout << "enter the value of c";
    cin >> c;

        if ( a < b)
        {
            if ( a < c)
            {
                cout << "A is Min num";
            }
            else
            {
                cout << "C is Min num";
            }            
       }
       else
       {
        if ( b < c)
        {
            cout << "B is Min num";
        }
        else
        {
            cout << "C is Min num";
        }
       }
        
    return 0;
}