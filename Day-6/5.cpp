#include <iostream>
using namespace std;

int main() {
    int a, b, c,small;

    cout << "Enter three values:";
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    cout << "enter the value of c :";
    cin >> c;

     small = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    cout << "The smallest value is: " << small << endl;

    return 0;
}
