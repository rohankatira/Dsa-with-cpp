#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;  
};
int main()
{
        node *head = NULL;
        head = new node();

        head -> data = 25;
        head ->next =NULL;

     node *n2= new node();
     n2 -> data = 98;
     n2 -> next = NULL;
     head->next =n2;

     node *n3 = new node();
      n3 -> data =75;
      n3 ->next = NULL;
      n2 -> next= n3;

     cout << "Head: " << head -> data << ", Address:" << head->next  << endl;
     cout << "Head: " << n2 -> data << ", Address:" << n2->next  << endl;
     cout << "Head: " << n3 -> data << ", Address:" << n3->next  << endl;

    return 0;

}