#include<iostream>
using namespace std;

int main()
{
   int box1=10,box2=20;
   
   cout <<"box1 =" << box1 << endl;
   cout <<"box2 =" << box2 << endl;
  

   cout <<"-----------------------" << endl;

   box1= box1 + box2; //10+20=30
   box2= box1 - box2; //20-30=10
   box1= box1 - box2; //30-20=10

   cout <<"box1 = " << box1 << endl;
   cout <<"box2 = " << box2<<endl;

}
// 35> fail
// 35< pass
// 55 <pass with good marks
// 75 <pass with execellent marks
// 90 <excwllwnt mark