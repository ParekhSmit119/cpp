#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    
    cout << "Enter the value of a";
    cin >> a;
    cout << "Enter the value of b";
    cin >> b;
    cout << "Enter the value of c";
    cin >> c;
    cout << "Enter the value of d";
    cin >> d;
    cout << "Enter the value of e";
    cin >> e;

    if ( a < b)
    {
        if ( a < c)
        {
            if ( a < d)
            {
                if ( a < e)
                {
                    cout << "A is Min num ";
                }
                else 
                {
                    cout << " E is Min num";
                }
            }
            else
            {
                if ( d < e)
                {
                    cout << "D is Min num";
                }
                else
                {
                    cout << "E is Min num";
                }
                
            }
            
        }
        else
        {
            if (c < d )
            {
                if (c < e)
                {
                    cout << "C is Min num";
                }
                else
                {
                    cout << "E is Min num";
                }
                
            }
            else
            {
                if ( d < e)
                {
                    cout << "D is Min num";
                }
                else
                {
                    cout << "E is Min num";
                }
                
            }           
        }
        
    }   
    else
    {
        if ( b < c)
        {
            if ( b < d)
            {
                if ( b < e)
                {
                    cout << "B is Min num";
                }
                else 
                {
                    cout << "E is Min num";
                }               
            }
            else
            {
                if ( d < e)
                {
                    cout << "D is Min num";
                }
                else
                {
                    cout << "E is Min num";
                }
                
            }
            
        }
        else
        {
             if (c < d )
            {
                if (c < e)
                {
                    cout << "C is Min num";
                }
                else
                {
                    cout << "E is Min num";
                }
                
            }
            else
            {
                if ( d < e)
                {
                    cout << "D is Min num";
                }
                else
                {
                    cout << "E is Min num";
                }
                
            }           
        }
        
    }
    return 0;
}