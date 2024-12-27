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
    return 0;
}