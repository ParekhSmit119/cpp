#include<iostream>
using namespace std;

int main()
{
    int size;
    int sum = 0;
    
    int sum2 = 0; 
    int sum3;      
    
    cout <<"Enter Size Of first Array->";
    cin >>size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout <<"Enter Array Elements of box[i]->";
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
    cout << sum << endl;




    cout <<"Enter Size Of second Array->";
    cin >>size;

    int boxs[size];

    for (int j = 0; j < size; j++)
    {
        cout <<"Enter Array Elements of box[i]->";
        cin >>boxs[j];
    }
    for (int j = 0; j < size; j++)
    {
        cout <<boxs[j] << " ";
    }
     cout <<endl;

    for (int j = 0; j < size; j++)
    {
        sum2 += boxs[j];
    }
    cout << sum2 << endl;

    int boxC[size];
    for (int i = 0; i < size; i++)
    {
        boxC[i] = box[i] + boxs[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout <<boxC[i] << " ";
    }
     cout <<endl;
}