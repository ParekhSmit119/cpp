#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    int first = 0, second = 1;

    cout <<"--------------------------------" <<endl;

    for (int i = 1; i <= n; i++)
    {
        cout << first << " " ;
        int temp = first + second;
        first = second;
        second = temp;
    }

    return 0;
}
