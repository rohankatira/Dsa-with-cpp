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
    node *head = new node();
    head ->data=25;
    head ->next =NULL;

    node *current = new node();
    current->data=98;
    current->next =NULL;
    head-> next = current;

    current = new node();
    current -> data = 75;
    current ->next =NULL;
    head->next->next=current;

    current = new node ();
    current ->data = 99;
    current -> next =NULL;
    head ->next->next->next = NULL ;

    cout << "head " << head->data <<",address: "<< head->next << endl;
    cout << "n2:- " << current->data <<",address: "<< head->next << endl;
    cout << "n3:- " << current->data <<",address: "<< head->next->next << endl;
    cout << "n4:- " << current->data <<",address: "<< head->next->next->next << endl;

    return 0;
}