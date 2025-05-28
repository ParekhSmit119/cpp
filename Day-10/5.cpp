#include<iostream>
using namespace std;

int main()
{
    for (int row = 5 ; row >=1 ; row--)
    {
       for (int space = row; space < 5 ;space++)
        {
        cout <<"-" <<" ";
        }
        for (int col = row;col >= 1; col--)
        {
            cout << col <<" ";
            
        }
        cout<<endl;
    }
    
    
}