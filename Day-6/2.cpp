#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;

        cout <<"enter the value of a :";
        cin >>a;
        cout <<"enter the value of b :";
        cin >>b;
        cout <<"enter the value of c :";
        cin >>c;
        cout <<"enter the value of d :";
        cin >>d;

        if (a < b)
        {
           if ( a < c)
           {
                if ( a < d )
                {
                    cout <<" A is Minimum number";
                }
                else{
                    cout <<"D is Minimum Number ";
                }   
           }
           else{
            if ( c < d)
            {
                cout << "C is Minimum number";
            }
            else{
                cout << "D is Minimum number";
            }
            
           }          
        }
        else{
            if ( b < c)
            {
                if ( b < d)
                {
                    cout << "B is minimum number";
                }
                else{
                    cout << " D is Minimum number";
                }
                
            }
            else{
                if ( c < d)
            {
                cout << "C is Minimum number";
            }
            else{
                cout << "D is Minimum number";
            }
            }
            
        }
        

    return 0;
}