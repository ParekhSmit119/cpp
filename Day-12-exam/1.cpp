#include<iostream>
using namespace std;

int main()
{
    int size;
    int sum = 0;
    int avg = 0;
    
    cout <<"Enter Size Of Array->";
    cin >>size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout <<"Enter Array Elementa->";
        cin >>box[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout <<box[i] << " ";
    }
     cout <<endl;

    for (int i = 0; i < size; i++)
    {
        sum += box[i];
    }
    cout <<"the sum of array is =" << sum << endl;
    avg = sum / size;

    cout <<"The avg of Array is =" <<avg;
}