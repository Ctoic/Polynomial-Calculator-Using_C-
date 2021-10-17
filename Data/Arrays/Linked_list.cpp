#include<iostream>
using namespace std ;
// in a linked list elements are linked using pointers


class Node {
    public:
    int data;
    Node* next;

}; 


void print_List(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"  ";
        n=n->next;

    }
}

/// inserting an element at the starting of the list
void push(Node** head_ref, int new_data)
{
    // allocating a new memory block
    Node* new_node= new Node();

    // Put in data you want 
    new_node->data= new_data;

    // making next as  the new node as head 
    new_node-> next= (*head_ref);

    // Move the head point to the new node
    (*head_ref)= new_node;


}
// ADDING A NODE AFTERA A NODE INSERTIONS

void insert_After(Node* prev_node,int new_data)
{
        if (prev_node==NULL)
{
    cout<<"The Given Node Cannot be NULL::"<<endl;
    return ;



}
    // allocate new node
    Node* new_node = new Node();
    // put in the data 
    new_node-> data = new_data;
    // make next of newpointer as newxt of pprevious pointer
    new_node->next= prev_node->next;
    // move the next of previous Node as bew node
    prev_node->next = new_node;



}
//ADDING A NODE AT THE END OF LINKED LIST
// adding a node at the last of given linked list
// we add items at the end of linked list
void append(Node** head_ref,int new_data)
{
    //Allocating the Node ,chunk of memeory
    Node* new_node = new Node();
    // what the freak i didn't ggot it why this behaiour
    Node* last = *head_ref;
    // put in the data 
    new_node->data = new_data;

    //this new node is going to be 
    //last node so make next od it as null

    new_node->next = NULL;

    // If Linked list is Empty make new node as head
    if(*head_ref== NULL)
    {
        *head_ref  = new_node;
        return ;
    }

    // Else traverse till the last Node 
    //complexity of time is O(n) when lst not empty
    while ( last-> next != NULL)
    {
        last = last->next;

    }
    // Changee the nexxt last Node
    last->next = new_node;
    return ;
    

}

int main()
{
    // simple linked list with three nodes

    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
 
    //Alocating 3 nodes in the heap
    head = new Node();
    second =new Node();
    third=new Node();

    // now we have three allocated memories 
    // we have pointers to memory head second and third


    head-> data= 1;
    head -> next=second;

    head -> data =2;
    head-> next=third;

    head -> data =3;
    head -> next=NULL;

    // Traversing the link list 
    print_List(head);
    // Adding a node at the front of list



    return 0;

}