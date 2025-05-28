#include<iostream>
using namespace std;

int main()
{
    int day;



        cout <<"enter 1 for Sunday"  <<endl;
        cout <<"enter 2 for Monday"  <<endl;
        cout <<"enter 3 for Tueday"  <<endl;
        cout <<"enter 4 for Wednesday"  <<endl;
        cout <<"enter 5 for Thursday"  <<endl;
        cout <<"enter 6 for Friday"  <<endl;
        cout <<"enter 7 for Saturday"  <<endl;


     cout << "enter the Number of day :";
     cin >> day;


     switch (day)
     {
     case 1:
            cout <<"First Day of Week Is Sunday ";
        break;
     case 2:
            cout <<"Second Day of Week Is Monday ";
        break;
     case 3:
            cout <<"Third Day of Week Is Tuesday ";
        break;
     case 4:
            cout <<"Fourth Day of Week Is Wednesday ";
        break;
     case 5:
            cout <<"Fifth Day of Week Is Thursday ";
        break;
     case 6:
            cout <<"Sixth Day of Week Is Friday ";
        break;
     case 7:
            cout <<"Seventh Day of Week Is Saturday ";
        break;
     
     default:
        cout <<"Invalid Number";
     }
    return 0;
}