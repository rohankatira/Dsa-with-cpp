// creating a node and travising them using while loop;

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
    node *ptr = NULL;  
    node *head = new node();
    head ->data=25;
    head ->next =NULL;

    ptr = head;

    node *current = new node();
    current->data=98;
    current->next =NULL;
    head-> next = current;

    current = new node();
    current -> data = 75;
    current ->next =NULL;
    head->next->next=current;

    current =new node();
    current ->data = 99;
    current ->next = NULL;
    head->next->next->next = current;

    while(ptr != NULL )
    {
       cout << ptr->data <<endl;
        ptr = ptr ->next;
    }

    return 0;
}