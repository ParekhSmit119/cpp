#include<iostream>
using namespace std;

int main()
{
    for (int row = 1 ; row <= 5 ; row++)
    {
       for (int space = 0; space < row - 1 ;space++)
        {
        cout <<"-" <<" ";
        }
        for (int col = 5;col >= row; col--)
        {
            cout << col <<" ";
            
        }
        cout<<endl;
    }
    
    
}