#include<iostream>
using namespace std;

  class Node{
    public:

    int data;
    Node *next;

  };
int main()
{
    Node *Head = nullptr;
    Head =new Node();
    Head -> data =90;
    Head -> next=nullptr;

    Node *n3 =nullptr;
    n3 = new Node();
    n3 -> data =99;
    n3 -> next= nullptr;
    Head -> next=n3;

    cout << Head ->data <<endl;
    cout << Head ->next <<endl;


    cout << n3 ->data <<endl;
    cout << n3 ->next <<endl;

    return 0;
}