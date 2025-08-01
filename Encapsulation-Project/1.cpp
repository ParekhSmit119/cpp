#include<iostream>
using namespace std;

class Student
{
    private:
    int rollNumber;
    string name;
    int marks1, marks2, marks3,sum,avg;

    public:
    void setStudent(int rn, string nm, int m1, int m2, int m3)
    {
        rollNumber = rn;
        name = nm;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    void getstudent()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks of three subjects: " << marks1 << " " << marks2 << " " << marks3 << endl;

        sum = marks1 + marks2 + marks3;
        avg = sum/3;
        cout << "Total marks: " << sum << endl;
        cout << "Average marks: " << avg << endl;
 
    }   
};

int main()
{
    int a, c1, c2, c3;
    string b;
    
    cout << "Enter the roll number: ";
    cin >> a;
    cout << "Enter the name: ";
    cin >> b;
    cout << "Enter the marks of three subjects: ";
    cin >> c1;
    cout << "Enter the marks of three subjects: ";
    cin >> c2;
    cout << "Enter the marks of three subjects: ";
    cin >> c3;

    Student s1;
    s1.setStudent(a,b,c1,c2,c3);

    s1.getstudent();
}