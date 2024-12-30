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
        
    } 
    void addAtEnding(int data)
    {

    } 
    void addAtposition(int data, int position)
    {

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

        cout << "Enter your choice";
        cin >> choice ;

        switch(choice)
        { 
            case 1:
            cout << "Enter the value element";
            cin >> element; 
            list.addAtbeggining(element);
                break;
            case 2:
            cout << "Enter the value element";
            cin >> element;
            list.addAtEnding(element); 
                break;
            case 3:
            cout << "Enter the value element";
            cin >> element;
            cout << "Enter the value position";
            cin >> position;

            list.addAtposition(element , position); 
                break;
            default: cout << "Enter valid choice..." << endl;
        }
    } while (choice!=0);
    

    return 0;
}