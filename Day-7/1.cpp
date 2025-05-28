#include<iostream>
using namespace std;
int main()
{
    int user,userGujrati,userHindi;


    cout <<"Enter 1 For English" << endl;
    cout <<"Enter 2 For Gujrati" << endl;
    cout <<"Enter 3 For Hindi" << endl;

    cin >> user;

    switch (user)
    {
    case 1:
        cout <<"For Recharge Press 1" << endl;
        cout <<"For Check balance Press 2" << endl;
        cout <<"For Your Plans Press 3" << endl;
        int userEnglish;
        cin >>userEnglish;

        //userenglish switch
        
        switch (userEnglish)
        {
        case 1:
            cout <<"Here you have available three types of Recharge Plans" <<endl;
            cout << "1st Plan For 1 Year "  <<endl; 
            cout << "2nd Plan For 6 Months"  <<endl; 
            cout << "3rd Plan For 3 Months"  <<endl; 
            break;
        case 2:
            cout <<"Here your last three balnce details. :"  <<endl; 
            cout << "Last recharge on 1st May 2025 "  <<endl; 
            cout << "Second Last recharge on 1st Jan. 2025."  <<endl; 
            cout << "Third Last recharge on 1st Sep. 2024."  <<endl; 
            break;
        case 3:
            cout <<"Here your Last three Plans"  <<endl; 
            cout << "999 RS. "  <<endl; 
            cout << "789 RS."  <<endl; 
            cout << "789 RS."  <<endl; 
            break;
        
        default:
        cout <<"Invalid input";
            break;
        }
    break;

    case 2:
            cout<<"Recharge Mate 1 Dabavo" <<endl;
            cout<<"Tmaru Balance jova mate 2 Dabavo" << endl;
            cout<<"Tmara Plan Ni Mahiti Mate 3 Dabavo"<<endl;

            cin >>userGujrati;

            // usergujrati switch


            switch (userGujrati)
            {
            case 1:
                cout << "A Rhiya Tmara 3 Prakar na Recharge na Plan"<<endl;
                cout<<"1 Plan 1 Varsh Mate"<<endl;
                cout<<"2 jo Plan 6 Mahina Mate"<<endl;
                cout<<"3 jo Plan 3 Mahina Mate"<<endl;
                break;
            case 2:
                cout << "A Rhi Tmara Chella 3 Balnce ni Vigat "<<endl;
                cout<<"Tme Chelu Balnce 1 li May 2025 e Kravel che"<<endl;
                cout<<"Teni Phela tme 1 li jan. 2025 e Kravel  che "<<endl;
                cout<<"Teni Phela Tme 1li sep. 2024 e Kravel che"<<endl;
                break;
            case 3:
                cout << "A Rhi Tmara Chella 3 Balnce ni Vigat "<<endl;
                cout<<"999 rupiya"<<endl;
                cout<<"789 rupiya"<<endl;
                cout<<"789 rupiya"<<endl;
                break;
            
            default:
                cout <<"invalid input";
                break;
            }
            break;


    case 3:
            cout <<"Recharge Ke Liye 1 Dbaye"<<endl;
            cout<<"Apka Balance Dekhne Ke Liye 2 Dbaye"<<endl;
            cout<<"Apke Plan ki Jankari ke Liye 3 Dbaye"<<endl;

            cin >>userHindi;

            //userhindi switch
            switch (userHindi)
            {
            case 1:
                cout<<"Ye Rhe 3 Prakar Ke Recharge Jo Ap Abhi Krva Sakte Ho"<<endl;
                cout<<"1 Recharge jo 1 Saal Ka He "<<endl;
                cout<<"2 Recharge jo 6 Mahine Ka He "<<endl;
                cout<<"3 Recharge Jo 3 MAhine Ka He" <<endl;
                break;
            case 2:
                cout<<"Apke Pichle 3 Balance Kuch Is Prakar he"<<endl;
                cout<<"Apne Hal hi Me 1 may 2025 Ko Akhri Balance Krvaya tha"<<endl;
                cout<< "Apne Usse Phle 1 Jan. 2025 Ko Balance Kravya tha"<<endl;
                cout<<"Apne Usse Phele 1 sep. 2025 ko Balance Kravaya tha"<<endl;
                break;
              case 3:
              cout<<"Ye Rhe apke Piche 3 Plan Ki jsnkari"<<endl;
              cout<<"999 Rupey"<<endl;
              cout<<"789 Rupey"<<endl;
              cout<<"789 Rupey"<<endl;  
                break;

            
            default:
            cout<<"Invalid Input";
                break;
            }
            break;
    default:
    cout<<"invalid input";
        break;
    }

    return 0;
}