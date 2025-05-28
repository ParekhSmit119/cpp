#include<iostream>
using namespace std;

int main()
{
    float sub1,sub2,sub3,total,avg;

    cout << "enter the marks of sub1 =";
    cin >> sub1;
    cout << "enter the marks of sub2 =";
    cin >> sub2;
    cout << "enter the marks of sub3 =";
    cin >> sub3;

    total=sub1+sub2+sub3;

    cout <<"Total marks of student =" <<total <<endl;

    avg=total/3;

    cout <<"avg of studwent is =" << avg;

}