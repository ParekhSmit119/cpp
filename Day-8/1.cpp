#include <iostream>
using namespace std;

int main() {
    int n, i = 2;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Even numbers from 1 to " << n << " are:\n";


    do {
        cout << i << " ";
        i += 2; 
    } while (i <= n);

    cout << endl;
    return 0;
}
