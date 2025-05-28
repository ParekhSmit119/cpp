#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << " enter the value of a =" ;
    cin >> a;

    if (a<0)
    {
        cout<<"Number is Negitive";
    }
    else if (a>0)
    {
        cout << "Number is Positive";
    
    }
    else{
        cout<< "Number is Neutral";
    }
    
}