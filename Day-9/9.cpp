#include<iostream>
using namespace std;

int main()
{
    int count=1;
    for (char row = 'A';row <='E'; row++)
    {
        for (char col=row; col>='A';col--)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}