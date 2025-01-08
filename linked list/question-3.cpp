// CRUD OPERATIONS ON SINGLY LINKED LIST.
// C - create/ insert
// R - Read / Traversal / Access / Fetch / Select /iterate
// U - Update
// D - Delete 

#include<iostream>

class node
{
    public:
    int data;
    node * next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class linkedlist
{
    public:
    node*head;
    int count;
    linkedlist()
    {
        this-> head=NULL;
        count=0;
    }

    void addAtbeggining(int data)
    {
        node *newnode = new node(data);
        newnode->next = this->head;
        this->head = newnode;
        this-> count++;
    } 
    void addAtEnding(int data)
    {
        node *newnode = new node(data);
        if(this->head == NULL)
        {
            this->head = newnode; 
        }
        else
        {
            node *ptr = this->head;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
        this->count++;
    } 
    void addAtposition(int data, int position)
    {
        node *newnode= new node(data);
        if(position == 0)
        {
            newnode->next = this->head;
            this->head = newnode;
        }
        else
        {
            node *ptr = head;
            for(int i=0; i<position -1; i++)
            {
                ptr =ptr->next;
            }
            newnode->next= ptr->next; 
            ptr->next = newnode;
        }
        this->count++;
    } 
};
using namespace std;
int main ()
{
    linkedlist list;
    int choice, element, position;

    do
    {
        cout << "press 1 for insert a node at a beggining of the list "<< endl;
        cout << "press 2 for insert a node at a ending of the list "<< endl;
        cout << "press 3 for insert a node at a any position of the list "<< endl;
        cout << "press 0 for exit"<< endl;

        cout << "Enter your choice";
        cin >> choice ;

        switch(choice)
        { 
            case 1:
            cout << "Enter the value element";
            cin >> element; 
            list.addAtbeggining(element);
            cout << "Node inserted at beginning of the list sucessfully" <<endl;
            break;
            case 2:
            cout << "Enter the value element";
            cin >> element;
            list.addAtEnding(element); 
            cout << "Node inserted at endding of the list sucessfully" <<endl;
            break;
            case 3:
            cout << "Enter the value element";
            cin >> element;
            cout << "Enter the value position";
            cin >> position;
            list.addAtposition(element , position);
            cout << "Node inserted sucessfully" <<endl;
            break;
            case 0:
            cout<< "EXIT";
            break;
            default: cout << "Enter valid choice..." << endl;
        }
    } while (choice!=0);
    

    return 0;
}