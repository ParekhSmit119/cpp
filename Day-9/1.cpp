#include<iostream>
using namespace std;

int main()
{
    for (int row = 6; row >=1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout <<endl;
    }
       
    return 0;
}