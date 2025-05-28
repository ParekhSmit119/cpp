#include<iostream>
using namespace std;

int main()
{
    for (int row = 1; row <=5; row++)
    {
        for (int col = 5 ; col<=row;col++)
        {
            if (col % 2 == 1)
            {
                cout <<"1"<<" ";
            }
            else
            {
                cout<<"0"<<" "; 
            }
        }
        cout <<endl;
    }
    
    return 0;
}